ANTLR4 = /usr/bin/java -jar /usr/local/lib/antlr-4.7.1-complete.jar
JAVAC = /usr/bin/javac

java: SimpleSql.g4
	${ANTLR4} $^
	CLASSPATH=".:/usr/local/lib/antlr-4.7.1-complete.jar:$CLASSPATH" ${JAVAC} SimpleSql*.java

cpp: SimpleSql.g4
	${ANTLR4} -Dlanguage=Cpp $^

go: SimpleSql.g4
	${ANTLR4} -Dlanguage=Go $^

clean:
	rm -rf *.java *.class *.tokens *.interp *.cpp *.h *.go