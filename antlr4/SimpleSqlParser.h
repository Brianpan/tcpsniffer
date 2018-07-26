
// Generated from SimpleSql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SimpleSqlParser : public antlr4::Parser {
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

  enum {
    RuleRoot = 0, RuleCrudStmt = 1, RuleInsertStmt = 2, RuleSelectStmt = 3, 
    RuleUpdateStmt = 4, RuleDeleteStmt = 5, RuleColumnStmt = 6, RuleFromStmt = 7, 
    RuleWhereStmt = 8, RuleLimitStmt = 9, RuleOffsetStmt = 10, RuleOrderbyStmt = 11, 
    RuleGroupbyStmt = 12, RuleHavingStmt = 13, RuleTableSources = 14, RuleTableSource = 15, 
    RuleTableSourceItem = 16, RuleJoinPart = 17, RuleSelectColumn = 18, 
    RuleInsertStmtValue = 19, RuleExprWithDefaults = 20, RuleUpdatedElement = 21, 
    RuleWhereExpr = 22, RuleExpr = 23, RuleIdList = 24, RuleExprOrDefault = 25, 
    RuleTableName = 26, RuleColumnName = 27, RuleFunctionName = 28, RuleFieldName = 29, 
    RuleLiteralValue = 30
  };

  SimpleSqlParser(antlr4::TokenStream *input);
  ~SimpleSqlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class RootContext;
  class CrudStmtContext;
  class InsertStmtContext;
  class SelectStmtContext;
  class UpdateStmtContext;
  class DeleteStmtContext;
  class ColumnStmtContext;
  class FromStmtContext;
  class WhereStmtContext;
  class LimitStmtContext;
  class OffsetStmtContext;
  class OrderbyStmtContext;
  class GroupbyStmtContext;
  class HavingStmtContext;
  class TableSourcesContext;
  class TableSourceContext;
  class TableSourceItemContext;
  class JoinPartContext;
  class SelectColumnContext;
  class InsertStmtValueContext;
  class ExprWithDefaultsContext;
  class UpdatedElementContext;
  class WhereExprContext;
  class ExprContext;
  class IdListContext;
  class ExprOrDefaultContext;
  class TableNameContext;
  class ColumnNameContext;
  class FunctionNameContext;
  class FieldNameContext;
  class LiteralValueContext; 

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<CrudStmtContext *> crudStmt();
    CrudStmtContext* crudStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RootContext* root();

  class  CrudStmtContext : public antlr4::ParserRuleContext {
  public:
    CrudStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InsertStmtContext *insertStmt();
    SelectStmtContext *selectStmt();
    UpdateStmtContext *updateStmt();
    DeleteStmtContext *deleteStmt();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CrudStmtContext* crudStmt();

  class  InsertStmtContext : public antlr4::ParserRuleContext {
  public:
    SimpleSqlParser::IdListContext *columns = nullptr;;
    SimpleSqlParser::UpdatedElementContext *setElement = nullptr;;
    SimpleSqlParser::UpdatedElementContext *updatedElementContext = nullptr;;
    std::vector<UpdatedElementContext *> setElements;;
    SimpleSqlParser::UpdatedElementContext *duplicatedElement = nullptr;;
    std::vector<UpdatedElementContext *> duplicatedElements;;
    InsertStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    TableNameContext *tableName();
    InsertStmtValueContext *insertStmtValue();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *INTO();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    IdListContext *idList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InsertStmtContext* insertStmt();

  class  SelectStmtContext : public antlr4::ParserRuleContext {
  public:
    SelectStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    ColumnStmtContext *columnStmt();
    FromStmtContext *fromStmt();
    WhereStmtContext *whereStmt();
    LimitStmtContext *limitStmt();
    OffsetStmtContext *offsetStmt();
    OrderbyStmtContext *orderbyStmt();
    GroupbyStmtContext *groupbyStmt();
    std::vector<antlr4::tree::TerminalNode *> UNION();
    antlr4::tree::TerminalNode* UNION(size_t i);
    std::vector<SelectStmtContext *> selectStmt();
    SelectStmtContext* selectStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectStmtContext* selectStmt();

  class  UpdateStmtContext : public antlr4::ParserRuleContext {
  public:
    UpdateStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *SET();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    WhereStmtContext *whereStmt();
    LimitStmtContext *limitStmt();
    OffsetStmtContext *offsetStmt();
    OrderbyStmtContext *orderbyStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UpdateStmtContext* updateStmt();

  class  DeleteStmtContext : public antlr4::ParserRuleContext {
  public:
    DeleteStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *IGNORE();
    WhereStmtContext *whereStmt();
    OrderbyStmtContext *orderbyStmt();
    LimitStmtContext *limitStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeleteStmtContext* deleteStmt();

  class  ColumnStmtContext : public antlr4::ParserRuleContext {
  public:
    ColumnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASTERISK();
    std::vector<SelectColumnContext *> selectColumn();
    SelectColumnContext* selectColumn(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ColumnStmtContext* columnStmt();

  class  FromStmtContext : public antlr4::ParserRuleContext {
  public:
    FromStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    TableSourcesContext *tableSources();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FromStmtContext* fromStmt();

  class  WhereStmtContext : public antlr4::ParserRuleContext {
  public:
    WhereStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    WhereExprContext *whereExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhereStmtContext* whereStmt();

  class  LimitStmtContext : public antlr4::ParserRuleContext {
  public:
    LimitStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LimitStmtContext* limitStmt();

  class  OffsetStmtContext : public antlr4::ParserRuleContext {
  public:
    OffsetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OffsetStmtContext* offsetStmt();

  class  OrderbyStmtContext : public antlr4::ParserRuleContext {
  public:
    OrderbyStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    ColumnNameContext *columnName();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrderbyStmtContext* orderbyStmt();

  class  GroupbyStmtContext : public antlr4::ParserRuleContext {
  public:
    GroupbyStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    ColumnNameContext *columnName();
    HavingStmtContext *havingStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GroupbyStmtContext* groupbyStmt();

  class  HavingStmtContext : public antlr4::ParserRuleContext {
  public:
    HavingStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HavingStmtContext* havingStmt();

  class  TableSourcesContext : public antlr4::ParserRuleContext {
  public:
    TableSourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableSourceContext *> tableSource();
    TableSourceContext* tableSource(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableSourcesContext* tableSources();

  class  TableSourceContext : public antlr4::ParserRuleContext {
  public:
    TableSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableSourceItemContext *tableSourceItem();
    std::vector<JoinPartContext *> joinPart();
    JoinPartContext* joinPart(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableSourceContext* tableSource();

  class  TableSourceItemContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *alias = nullptr;;
    SimpleSqlParser::SelectStmtContext *subquery = nullptr;;
    SimpleSqlParser::SelectStmtContext *paranthesisSubquery = nullptr;;
    TableSourceItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    SelectStmtContext *selectStmt();
    TableSourcesContext *tableSources();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableSourceItemContext* tableSourceItem();

  class  JoinPartContext : public antlr4::ParserRuleContext {
  public:
    JoinPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *ON();
    ExprContext *expr();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *NATURAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JoinPartContext* joinPart();

  class  SelectColumnContext : public antlr4::ParserRuleContext {
  public:
    SelectColumnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameContext *> columnName();
    ColumnNameContext* columnName(size_t i);
    antlr4::tree::TerminalNode *AS();
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ASTERISK();
    std::vector<WhereExprContext *> whereExpr();
    WhereExprContext* whereExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectColumnContext* selectColumn();

  class  InsertStmtValueContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *insertFormat = nullptr;;
    InsertStmtValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStmtContext *selectStmt();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<ExprWithDefaultsContext *> exprWithDefaults();
    ExprWithDefaultsContext* exprWithDefaults(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VALUE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InsertStmtValueContext* insertStmtValue();

  class  ExprWithDefaultsContext : public antlr4::ParserRuleContext {
  public:
    ExprWithDefaultsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprOrDefaultContext *> exprOrDefault();
    ExprOrDefaultContext* exprOrDefault(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprWithDefaultsContext* exprWithDefaults();

  class  UpdatedElementContext : public antlr4::ParserRuleContext {
  public:
    UpdatedElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnNameContext *columnName();
    antlr4::tree::TerminalNode *EQ();
    ExprContext *expr();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UpdatedElementContext* updatedElement();

  class  WhereExprContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;;
    SimpleSqlParser::WhereExprContext *inElement = nullptr;;
    SimpleSqlParser::WhereExprContext *whereExprContext = nullptr;;
    std::vector<WhereExprContext *> inElements;;
    WhereExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    std::vector<WhereExprContext *> whereExpr();
    WhereExprContext* whereExpr(size_t i);
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ASTERISK();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    LiteralValueContext *literalValue();
    FieldNameContext *fieldName();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NOT_EQ();
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *NOT_MATCH();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *REGEXP();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *IN();
    SelectStmtContext *selectStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhereExprContext* whereExpr();
  WhereExprContext* whereExpr(int precedence);
  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *ASTERISK();
    std::vector<WhereExprContext *> whereExpr();
    WhereExprContext* whereExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    LiteralValueContext *literalValue();
    FieldNameContext *fieldName();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTE();
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    antlr4::tree::TerminalNode *NOT_EQ();
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *NOT_MATCH();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *REGEXP();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NULL();
    antlr4::tree::TerminalNode *IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  IdListContext : public antlr4::ParserRuleContext {
  public:
    IdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdListContext* idList();

  class  ExprOrDefaultContext : public antlr4::ParserRuleContext {
  public:
    ExprOrDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprOrDefaultContext* exprOrDefault();

  class  TableNameContext : public antlr4::ParserRuleContext {
  public:
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableNameContext* tableName();

  class  ColumnNameContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ColumnNameContext* columnName();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionNameContext* functionName();

  class  FieldNameContext : public antlr4::ParserRuleContext {
  public:
    FieldNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldNameContext* fieldName();

  class  LiteralValueContext : public antlr4::ParserRuleContext {
  public:
    LiteralValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SQUOTA_STRING();
    antlr4::tree::TerminalNode *DQUOTA_STRING();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *NULL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralValueContext* literalValue();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool whereExprSempred(WhereExprContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

