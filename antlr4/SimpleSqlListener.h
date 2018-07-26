
// Generated from SimpleSql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SimpleSqlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SimpleSqlParser.
 */
class  SimpleSqlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRoot(SimpleSqlParser::RootContext *ctx) = 0;
  virtual void exitRoot(SimpleSqlParser::RootContext *ctx) = 0;

  virtual void enterCrudStmt(SimpleSqlParser::CrudStmtContext *ctx) = 0;
  virtual void exitCrudStmt(SimpleSqlParser::CrudStmtContext *ctx) = 0;

  virtual void enterInsertStmt(SimpleSqlParser::InsertStmtContext *ctx) = 0;
  virtual void exitInsertStmt(SimpleSqlParser::InsertStmtContext *ctx) = 0;

  virtual void enterSelectStmt(SimpleSqlParser::SelectStmtContext *ctx) = 0;
  virtual void exitSelectStmt(SimpleSqlParser::SelectStmtContext *ctx) = 0;

  virtual void enterUpdateStmt(SimpleSqlParser::UpdateStmtContext *ctx) = 0;
  virtual void exitUpdateStmt(SimpleSqlParser::UpdateStmtContext *ctx) = 0;

  virtual void enterDeleteStmt(SimpleSqlParser::DeleteStmtContext *ctx) = 0;
  virtual void exitDeleteStmt(SimpleSqlParser::DeleteStmtContext *ctx) = 0;

  virtual void enterColumnStmt(SimpleSqlParser::ColumnStmtContext *ctx) = 0;
  virtual void exitColumnStmt(SimpleSqlParser::ColumnStmtContext *ctx) = 0;

  virtual void enterFromStmt(SimpleSqlParser::FromStmtContext *ctx) = 0;
  virtual void exitFromStmt(SimpleSqlParser::FromStmtContext *ctx) = 0;

  virtual void enterWhereStmt(SimpleSqlParser::WhereStmtContext *ctx) = 0;
  virtual void exitWhereStmt(SimpleSqlParser::WhereStmtContext *ctx) = 0;

  virtual void enterLimitStmt(SimpleSqlParser::LimitStmtContext *ctx) = 0;
  virtual void exitLimitStmt(SimpleSqlParser::LimitStmtContext *ctx) = 0;

  virtual void enterOffsetStmt(SimpleSqlParser::OffsetStmtContext *ctx) = 0;
  virtual void exitOffsetStmt(SimpleSqlParser::OffsetStmtContext *ctx) = 0;

  virtual void enterOrderbyStmt(SimpleSqlParser::OrderbyStmtContext *ctx) = 0;
  virtual void exitOrderbyStmt(SimpleSqlParser::OrderbyStmtContext *ctx) = 0;

  virtual void enterGroupbyStmt(SimpleSqlParser::GroupbyStmtContext *ctx) = 0;
  virtual void exitGroupbyStmt(SimpleSqlParser::GroupbyStmtContext *ctx) = 0;

  virtual void enterHavingStmt(SimpleSqlParser::HavingStmtContext *ctx) = 0;
  virtual void exitHavingStmt(SimpleSqlParser::HavingStmtContext *ctx) = 0;

  virtual void enterTableSources(SimpleSqlParser::TableSourcesContext *ctx) = 0;
  virtual void exitTableSources(SimpleSqlParser::TableSourcesContext *ctx) = 0;

  virtual void enterTableSource(SimpleSqlParser::TableSourceContext *ctx) = 0;
  virtual void exitTableSource(SimpleSqlParser::TableSourceContext *ctx) = 0;

  virtual void enterTableSourceItem(SimpleSqlParser::TableSourceItemContext *ctx) = 0;
  virtual void exitTableSourceItem(SimpleSqlParser::TableSourceItemContext *ctx) = 0;

  virtual void enterJoinPart(SimpleSqlParser::JoinPartContext *ctx) = 0;
  virtual void exitJoinPart(SimpleSqlParser::JoinPartContext *ctx) = 0;

  virtual void enterSelectColumn(SimpleSqlParser::SelectColumnContext *ctx) = 0;
  virtual void exitSelectColumn(SimpleSqlParser::SelectColumnContext *ctx) = 0;

  virtual void enterInsertStmtValue(SimpleSqlParser::InsertStmtValueContext *ctx) = 0;
  virtual void exitInsertStmtValue(SimpleSqlParser::InsertStmtValueContext *ctx) = 0;

  virtual void enterExprWithDefaults(SimpleSqlParser::ExprWithDefaultsContext *ctx) = 0;
  virtual void exitExprWithDefaults(SimpleSqlParser::ExprWithDefaultsContext *ctx) = 0;

  virtual void enterUpdatedElement(SimpleSqlParser::UpdatedElementContext *ctx) = 0;
  virtual void exitUpdatedElement(SimpleSqlParser::UpdatedElementContext *ctx) = 0;

  virtual void enterWhereExpr(SimpleSqlParser::WhereExprContext *ctx) = 0;
  virtual void exitWhereExpr(SimpleSqlParser::WhereExprContext *ctx) = 0;

  virtual void enterExpr(SimpleSqlParser::ExprContext *ctx) = 0;
  virtual void exitExpr(SimpleSqlParser::ExprContext *ctx) = 0;

  virtual void enterIdList(SimpleSqlParser::IdListContext *ctx) = 0;
  virtual void exitIdList(SimpleSqlParser::IdListContext *ctx) = 0;

  virtual void enterExprOrDefault(SimpleSqlParser::ExprOrDefaultContext *ctx) = 0;
  virtual void exitExprOrDefault(SimpleSqlParser::ExprOrDefaultContext *ctx) = 0;

  virtual void enterTableName(SimpleSqlParser::TableNameContext *ctx) = 0;
  virtual void exitTableName(SimpleSqlParser::TableNameContext *ctx) = 0;

  virtual void enterColumnName(SimpleSqlParser::ColumnNameContext *ctx) = 0;
  virtual void exitColumnName(SimpleSqlParser::ColumnNameContext *ctx) = 0;

  virtual void enterFunctionName(SimpleSqlParser::FunctionNameContext *ctx) = 0;
  virtual void exitFunctionName(SimpleSqlParser::FunctionNameContext *ctx) = 0;

  virtual void enterFieldName(SimpleSqlParser::FieldNameContext *ctx) = 0;
  virtual void exitFieldName(SimpleSqlParser::FieldNameContext *ctx) = 0;

  virtual void enterLiteralValue(SimpleSqlParser::LiteralValueContext *ctx) = 0;
  virtual void exitLiteralValue(SimpleSqlParser::LiteralValueContext *ctx) = 0;


};

