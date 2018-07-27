# TCP MySQL sniffer
This is a TCP MySQL sniffer to capture sql queries latency with transforming them into prepared statement

### Components
- TCP MySQL sniffer (C++)
- Socket listener, Packet Processor (Golang)

### Libraries
- Google Protobufs
- Antlr 4.7.1
- C++ socket libs


### ANTLR4
##### Requirements
- Use Antlr4 4.7.1
- Golang runtime lib from https://github.com/Brianpan/antlr4
- Add the codes in PS into /simplesql_parser.go



PS: TCP sniffer code snippet after generating golang runtime lib
#### parser/simplesql_parser.go
```
// should include in every g4 generate
func (ctx *SubLiteralValueContext) GetTextWithSpace() string {
	return string("? ")
}

func (ctx *SubLiteralValueContext) GetOriginalText() string {
	return ctx.BaseParserRuleContext.GetText()
}
```
