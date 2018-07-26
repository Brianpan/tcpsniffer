
// Generated from SimpleSql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SimpleSqlLexer : public antlr4::Lexer {
public:
  enum {
    SELECT = 1, AS = 2, FROM = 3, WHERE = 4, AND = 5, OR = 6, XOR = 7, IS = 8, 
    TO = 9, NULL = 10, LIKE = 11, IN = 12, BETWEEN = 13, EXISTS = 14, TRUE = 15, 
    FALSE = 16, DIVIDE = 17, MOD = 18, MATCH = 19, NOT_MATCH = 20, PLUS = 21, 
    MINUS = 22, ASTERISK = 23, RPAREN = 24, LPAREN = 25, RBRACK = 26, LBRACK = 27, 
    EQ = 28, LT = 29, GT = 30, NOT_EQ = 31, NOT = 32, LTE = 33, GTE = 34, 
    SEMI = 35, COMMA = 36, DOT = 37, ORDER = 38, GROUP = 39, BY = 40, PARTITION = 41, 
    ASC = 42, DESC = 43, CASE = 44, WHEN = 45, THEN = 46, ELSE = 47, END = 48, 
    LIMIT = 49, OFFSET = 50, INTERVAL = 51, SINCE = 52, FOLLOW = 53, UNTIL = 54, 
    INNER = 55, OUTER = 56, LEFT = 57, RIGHT = 58, JOIN = 59, ON = 60, CROSS = 61, 
    NATURAL = 62, REGEXP = 63, UNION = 64, INSERT = 65, IGNORE = 66, INTO = 67, 
    SET = 68, VALUE = 69, VALUES = 70, DEFAULT = 71, DUPLICATE = 72, KEY = 73, 
    UPDATE = 74, DELETE = 75, HAVING = 76, ID = 77, NUMBER = 78, SINGLE_LINE_COMMENT = 79, 
    MULTILINE_COMMENT = 80, WS = 81, STRING = 82, DQUOTA_STRING = 83, SQUOTA_STRING = 84, 
    BQUOTA_STRING = 85
  };

  SimpleSqlLexer(antlr4::CharStream *input);
  ~SimpleSqlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

