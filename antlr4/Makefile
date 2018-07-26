ANTLR4 = /usr/bin/java -jar /usr/local/lib/antlr-4.7.1-complete.jar
JAVAC = /usr/bin/javac

create: SimpleSql.g4
	${ANTLR4} $^
	CLASSPATH=".:/usr/local/lib/antlr-4.7.1-complete.jar:$CLASSPATH" ${JAVAC} SimpleSql*.java

clean:
	rm -rf *.java *.class *.tokens *.interp