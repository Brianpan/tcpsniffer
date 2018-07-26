#include <iostream>

#include "antlr4-runtime.h"
#include "SimpleSqlLexer.h"
#include "SimpleSqlParser.h"
#include "SimpleSqlBaseListener.h"

using namespace org::antlr::v4::runtime;

class TreeShapeListener : public SimpleSqlBaseListener {
public:
  void enterKey(ParserRuleContext *ctx) override {
	// Do something when entering the key rule.
  }
};


int main(int argc, const char* argv[]) {
  std::ifstream stream;
  stream.open(argv[1]);
  ANTLRInputStream input(stream);
  MyGrammarLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  SimpleSqlParser parser(&tokens);

  tree::ParseTree *tree = parser.key();
  TreeShapeListener listener;
  tree::ParseTreeWalker::DEFAULT->walk(&listener, tree);

  return 0;
}