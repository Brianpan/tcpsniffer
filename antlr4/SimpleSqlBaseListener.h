
// Generated from SimpleSql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SimpleSqlListener.h"


/**
 * This class provides an empty implementation of SimpleSqlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SimpleSqlBaseListener : public SimpleSqlListener {
public:

  virtual void enterRoot(SimpleSqlParser::RootContext * /*ctx*/) override { }
  virtual void exitRoot(SimpleSqlParser::RootContext * /*ctx*/) override { }

  virtual void enterCrudStmt(SimpleSqlParser::CrudStmtContext * /*ctx*/) override { }
  virtual void exitCrudStmt(SimpleSqlParser::CrudStmtContext * /*ctx*/) override { }

  virtual void enterInsertStmt(SimpleSqlParser::InsertStmtContext * /*ctx*/) override { }
  virtual void exitInsertStmt(SimpleSqlParser::InsertStmtContext * /*ctx*/) override { }

  virtual void enterSelectStmt(SimpleSqlParser::SelectStmtContext * /*ctx*/) override { }
  virtual void exitSelectStmt(SimpleSqlParser::SelectStmtContext * /*ctx*/) override { }

  virtual void enterUpdateStmt(SimpleSqlParser::UpdateStmtContext * /*ctx*/) override { }
  virtual void exitUpdateStmt(SimpleSqlParser::UpdateStmtContext * /*ctx*/) override { }

  virtual void enterDeleteStmt(SimpleSqlParser::DeleteStmtContext * /*ctx*/) override { }
  virtual void exitDeleteStmt(SimpleSqlParser::DeleteStmtContext * /*ctx*/) override { }

  virtual void enterColumnStmt(SimpleSqlParser::ColumnStmtContext * /*ctx*/) override { }
  virtual void exitColumnStmt(SimpleSqlParser::ColumnStmtContext * /*ctx*/) override { }

  virtual void enterFromStmt(SimpleSqlParser::FromStmtContext * /*ctx*/) override { }
  virtual void exitFromStmt(SimpleSqlParser::FromStmtContext * /*ctx*/) override { }

  virtual void enterWhereStmt(SimpleSqlParser::WhereStmtContext * /*ctx*/) override { }
  virtual void exitWhereStmt(SimpleSqlParser::WhereStmtContext * /*ctx*/) override { }

  virtual void enterLimitStmt(SimpleSqlParser::LimitStmtContext * /*ctx*/) override { }
  virtual void exitLimitStmt(SimpleSqlParser::LimitStmtContext * /*ctx*/) override { }

  virtual void enterOffsetStmt(SimpleSqlParser::OffsetStmtContext * /*ctx*/) override { }
  virtual void exitOffsetStmt(SimpleSqlParser::OffsetStmtContext * /*ctx*/) override { }

  virtual void enterOrderbyStmt(SimpleSqlParser::OrderbyStmtContext * /*ctx*/) override { }
  virtual void exitOrderbyStmt(SimpleSqlParser::OrderbyStmtContext * /*ctx*/) override { }

  virtual void enterGroupbyStmt(SimpleSqlParser::GroupbyStmtContext * /*ctx*/) override { }
  virtual void exitGroupbyStmt(SimpleSqlParser::GroupbyStmtContext * /*ctx*/) override { }

  virtual void enterHavingStmt(SimpleSqlParser::HavingStmtContext * /*ctx*/) override { }
  virtual void exitHavingStmt(SimpleSqlParser::HavingStmtContext * /*ctx*/) override { }

  virtual void enterTableSources(SimpleSqlParser::TableSourcesContext * /*ctx*/) override { }
  virtual void exitTableSources(SimpleSqlParser::TableSourcesContext * /*ctx*/) override { }

  virtual void enterTableSource(SimpleSqlParser::TableSourceContext * /*ctx*/) override { }
  virtual void exitTableSource(SimpleSqlParser::TableSourceContext * /*ctx*/) override { }

  virtual void enterTableSourceItem(SimpleSqlParser::TableSourceItemContext * /*ctx*/) override { }
  virtual void exitTableSourceItem(SimpleSqlParser::TableSourceItemContext * /*ctx*/) override { }

  virtual void enterJoinPart(SimpleSqlParser::JoinPartContext * /*ctx*/) override { }
  virtual void exitJoinPart(SimpleSqlParser::JoinPartContext * /*ctx*/) override { }

  virtual void enterSelectColumn(SimpleSqlParser::SelectColumnContext * /*ctx*/) override { }
  virtual void exitSelectColumn(SimpleSqlParser::SelectColumnContext * /*ctx*/) override { }

  virtual void enterInsertStmtValue(SimpleSqlParser::InsertStmtValueContext * /*ctx*/) override { }
  virtual void exitInsertStmtValue(SimpleSqlParser::InsertStmtValueContext * /*ctx*/) override { }

  virtual void enterExprWithDefaults(SimpleSqlParser::ExprWithDefaultsContext * /*ctx*/) override { }
  virtual void exitExprWithDefaults(SimpleSqlParser::ExprWithDefaultsContext * /*ctx*/) override { }

  virtual void enterUpdatedElement(SimpleSqlParser::UpdatedElementContext * /*ctx*/) override { }
  virtual void exitUpdatedElement(SimpleSqlParser::UpdatedElementContext * /*ctx*/) override { }

  virtual void enterWhereExpr(SimpleSqlParser::WhereExprContext * /*ctx*/) override { }
  virtual void exitWhereExpr(SimpleSqlParser::WhereExprContext * /*ctx*/) override { }

  virtual void enterExpr(SimpleSqlParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(SimpleSqlParser::ExprContext * /*ctx*/) override { }

  virtual void enterIdList(SimpleSqlParser::IdListContext * /*ctx*/) override { }
  virtual void exitIdList(SimpleSqlParser::IdListContext * /*ctx*/) override { }

  virtual void enterExprOrDefault(SimpleSqlParser::ExprOrDefaultContext * /*ctx*/) override { }
  virtual void exitExprOrDefault(SimpleSqlParser::ExprOrDefaultContext * /*ctx*/) override { }

  virtual void enterTableName(SimpleSqlParser::TableNameContext * /*ctx*/) override { }
  virtual void exitTableName(SimpleSqlParser::TableNameContext * /*ctx*/) override { }

  virtual void enterColumnName(SimpleSqlParser::ColumnNameContext * /*ctx*/) override { }
  virtual void exitColumnName(SimpleSqlParser::ColumnNameContext * /*ctx*/) override { }

  virtual void enterFunctionName(SimpleSqlParser::FunctionNameContext * /*ctx*/) override { }
  virtual void exitFunctionName(SimpleSqlParser::FunctionNameContext * /*ctx*/) override { }

  virtual void enterFieldName(SimpleSqlParser::FieldNameContext * /*ctx*/) override { }
  virtual void exitFieldName(SimpleSqlParser::FieldNameContext * /*ctx*/) override { }

  virtual void enterLiteralValue(SimpleSqlParser::LiteralValueContext * /*ctx*/) override { }
  virtual void exitLiteralValue(SimpleSqlParser::LiteralValueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

