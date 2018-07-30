package main

import (
	"encoding/binary"
	"fmt"
	"./parser"
	"./packet"
	"net"
	"os"
	"github.com/golang/protobuf/proto"
	"github.com/antlr/antlr4/runtime/Go/antlr"
)

const hostSocketPort = ":1234"
const protolPayloadSize = 4

//------ Socket implementations ------

// CreateSockert : create socket factory
func CreateSockert() *net.TCPListener {
	tcpAddr, err := net.ResolveTCPAddr("tcp4", hostSocketPort)
	checkError(err)
	listener, err := net.ListenTCP("tcp", tcpAddr)
	checkError(err)

	return listener
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Fatal error : %s", err.Error())
		os.Exit(1)
	}
}

func socketHandler(conn net.Conn) {
	defer conn.Close()
	for {
		sizePayload := make([]byte, protolPayloadSize)
		byteCount, err := conn.Read(sizePayload)
		if byteCount == 0 {
			break
		}

		payloadSize := binary.LittleEndian.Uint32(sizePayload)
		// payloadSize, _ := proto.DecodeVarint(sizePayload)
		fmt.Println("Payload size :", payloadSize)
		if err != nil {
			break
		}
		workerPtr := &QueryWorker{}
		workerPtr.execute(conn, payloadSize)
	}

}
//------ Socket implementations end ------

//------ Protobuf workers stuffs ------
type PacketInfo struct {
	timestamp string;
	timestampInt uint64;
	payload string;
}

type QueryWorker struct {
	recorderMapper map[string]PacketInfo 
}

func (*QueryWorker) execute(conn net.Conn, payloadSize uint32) {
	payload := make([]byte, payloadSize)
	for {
		size, err := conn.Read(payload)
		if err != nil {
			fmt.Println("Unmarshal google protobuf has problems", err)
			continue
		} else {
			// payload_string := string(payload[:])
			pkt := packet.PackPacket{}
			err := proto.Unmarshal(payload, &pkt)
			if err != nil {
				fmt.Println("Unmarshal google protobuf has problems", err)
				break
			}

			// get prepared statement
			if pkt.GetIsQuery() {
				// prepared statement generation
				originalSql := pkt.GetPayload() 
				input := antlr.NewInputStream(originalSql)
				sqlQuery, params := ExecSimpleSqlParser(input)
				// print params
				for _, p := range params {
					fmt.Println(p)
				}
				fmt.Println(sqlQuery)
			}
			
			fmt.Println("size : ", size, " info : ", pkt.String())
			break
		}
	}
}
//------ Protobuf workers stuffs ------

//------ ANTLR4 parser stuffs ------
// TreeShapeListener : extend class from BaseSimpleSqlListener
type TreeShapeListener struct {
	*parser.BaseSimpleSqlListener
	sqlQuery string
	params   []string
}

// NewTreeShapeListener : factory for TreeShapeListener
func NewTreeShapeListener() *TreeShapeListener {
	return new(TreeShapeListener)
}

// EnterSubLiteralValue : enter callback for SubLiteralValue
func (s *TreeShapeListener) EnterSubLiteralValue(ctx *parser.SubLiteralValueContext) {
	s.params = append(s.params, ctx.GetOriginalText())
}

// ExitCrudStmt : exit callback for crudStmt
func (s *TreeShapeListener) ExitCrudStmt(ctx *parser.CrudStmtContext) {
	s.sqlQuery = ctx.GetTextWithSpace()
}

func fileStreamTest(fileName string) {
	input, error := antlr.NewFileStream(fileName)
	if error != nil {
		return
	}

	sqlQuery, params := ExecSimpleSqlParser(input)

	// print params
	for _, p := range params {
		fmt.Println(p)
	}
	fmt.Println(sqlQuery)
}

func inputStreamTest() {
	simpleSQL := "SELECT * From students WHERE id > 1000 LIMIT 200 OFFSET 100"
	input := antlr.NewInputStream(simpleSQL)
	sqlQuery, params := ExecSimpleSqlParser(input)

	// print params
	for _, p := range params {
		fmt.Println(p)
	}
	fmt.Println(sqlQuery)
}

func ExecSimpleSqlParser(input antlr.CharStream) (sqlQuery string, params []string) {
	lexer := parser.NewSimpleSqlLexer(input)
	stream := antlr.NewCommonTokenStream(lexer, 0)
	pr := parser.NewSimpleSqlParser(stream)
	pr.AddErrorListener(antlr.NewDiagnosticErrorListener(true))
	pr.BuildParseTrees = true
	tree := pr.Root()
	listener := NewTreeShapeListener()

	antlr.ParseTreeWalkerDefault.Walk(listener, tree)

	return listener.sqlQuery, listener.params
}
// ----- ANTLR4 parser stuffs end -----

// main code for Socket Server
func main() {
	listener := CreateSockert()

	for {
		conn, err := listener.AcceptTCP()
		conn.SetNoDelay(false)
		conn.SetKeepAlive(true)

		if err != nil {
			fmt.Println("recv data error !")
			continue
		}

		go socketHandler(conn)
	}

	return
}