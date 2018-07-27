// Code generated from SimpleSql.g4 by ANTLR 4.7.1. DO NOT EDIT.

package parser // SimpleSql

import "github.com/antlr/antlr4/runtime/Go/antlr"

// BaseSimpleSqlListener is a complete listener for a parse tree produced by SimpleSqlParser.
type BaseSimpleSqlListener struct{}

var _ SimpleSqlListener = &BaseSimpleSqlListener{}

// VisitTerminal is called when a terminal node is visited.
func (s *BaseSimpleSqlListener) VisitTerminal(node antlr.TerminalNode) {}

// VisitErrorNode is called when an error node is visited.
func (s *BaseSimpleSqlListener) VisitErrorNode(node antlr.ErrorNode) {}

// EnterEveryRule is called when any rule is entered.
func (s *BaseSimpleSqlListener) EnterEveryRule(ctx antlr.ParserRuleContext) {}

// ExitEveryRule is called when any rule is exited.
func (s *BaseSimpleSqlListener) ExitEveryRule(ctx antlr.ParserRuleContext) {}

// EnterRoot is called when production root is entered.
func (s *BaseSimpleSqlListener) EnterRoot(ctx *RootContext) {}

// ExitRoot is called when production root is exited.
func (s *BaseSimpleSqlListener) ExitRoot(ctx *RootContext) {}

// EnterCrudStmt is called when production crudStmt is entered.
func (s *BaseSimpleSqlListener) EnterCrudStmt(ctx *CrudStmtContext) {}

// ExitCrudStmt is called when production crudStmt is exited.
func (s *BaseSimpleSqlListener) ExitCrudStmt(ctx *CrudStmtContext) {}

// EnterInsertStmt is called when production insertStmt is entered.
func (s *BaseSimpleSqlListener) EnterInsertStmt(ctx *InsertStmtContext) {}

// ExitInsertStmt is called when production insertStmt is exited.
func (s *BaseSimpleSqlListener) ExitInsertStmt(ctx *InsertStmtContext) {}

// EnterSelectStmt is called when production selectStmt is entered.
func (s *BaseSimpleSqlListener) EnterSelectStmt(ctx *SelectStmtContext) {}

// ExitSelectStmt is called when production selectStmt is exited.
func (s *BaseSimpleSqlListener) ExitSelectStmt(ctx *SelectStmtContext) {}

// EnterUpdateStmt is called when production updateStmt is entered.
func (s *BaseSimpleSqlListener) EnterUpdateStmt(ctx *UpdateStmtContext) {}

// ExitUpdateStmt is called when production updateStmt is exited.
func (s *BaseSimpleSqlListener) ExitUpdateStmt(ctx *UpdateStmtContext) {}

// EnterDeleteStmt is called when production deleteStmt is entered.
func (s *BaseSimpleSqlListener) EnterDeleteStmt(ctx *DeleteStmtContext) {}

// ExitDeleteStmt is called when production deleteStmt is exited.
func (s *BaseSimpleSqlListener) ExitDeleteStmt(ctx *DeleteStmtContext) {}

// EnterColumnStmt is called when production columnStmt is entered.
func (s *BaseSimpleSqlListener) EnterColumnStmt(ctx *ColumnStmtContext) {}

// ExitColumnStmt is called when production columnStmt is exited.
func (s *BaseSimpleSqlListener) ExitColumnStmt(ctx *ColumnStmtContext) {}

// EnterFromStmt is called when production fromStmt is entered.
func (s *BaseSimpleSqlListener) EnterFromStmt(ctx *FromStmtContext) {}

// ExitFromStmt is called when production fromStmt is exited.
func (s *BaseSimpleSqlListener) ExitFromStmt(ctx *FromStmtContext) {}

// EnterWhereStmt is called when production whereStmt is entered.
func (s *BaseSimpleSqlListener) EnterWhereStmt(ctx *WhereStmtContext) {}

// ExitWhereStmt is called when production whereStmt is exited.
func (s *BaseSimpleSqlListener) ExitWhereStmt(ctx *WhereStmtContext) {}

// EnterLimitStmt is called when production limitStmt is entered.
func (s *BaseSimpleSqlListener) EnterLimitStmt(ctx *LimitStmtContext) {}

// ExitLimitStmt is called when production limitStmt is exited.
func (s *BaseSimpleSqlListener) ExitLimitStmt(ctx *LimitStmtContext) {}

// EnterOffsetStmt is called when production offsetStmt is entered.
func (s *BaseSimpleSqlListener) EnterOffsetStmt(ctx *OffsetStmtContext) {}

// ExitOffsetStmt is called when production offsetStmt is exited.
func (s *BaseSimpleSqlListener) ExitOffsetStmt(ctx *OffsetStmtContext) {}

// EnterOrderbyStmt is called when production orderbyStmt is entered.
func (s *BaseSimpleSqlListener) EnterOrderbyStmt(ctx *OrderbyStmtContext) {}

// ExitOrderbyStmt is called when production orderbyStmt is exited.
func (s *BaseSimpleSqlListener) ExitOrderbyStmt(ctx *OrderbyStmtContext) {}

// EnterGroupbyStmt is called when production groupbyStmt is entered.
func (s *BaseSimpleSqlListener) EnterGroupbyStmt(ctx *GroupbyStmtContext) {}

// ExitGroupbyStmt is called when production groupbyStmt is exited.
func (s *BaseSimpleSqlListener) ExitGroupbyStmt(ctx *GroupbyStmtContext) {}

// EnterHavingStmt is called when production havingStmt is entered.
func (s *BaseSimpleSqlListener) EnterHavingStmt(ctx *HavingStmtContext) {}

// ExitHavingStmt is called when production havingStmt is exited.
func (s *BaseSimpleSqlListener) ExitHavingStmt(ctx *HavingStmtContext) {}

// EnterTableSources is called when production tableSources is entered.
func (s *BaseSimpleSqlListener) EnterTableSources(ctx *TableSourcesContext) {}

// ExitTableSources is called when production tableSources is exited.
func (s *BaseSimpleSqlListener) ExitTableSources(ctx *TableSourcesContext) {}

// EnterTableSource is called when production tableSource is entered.
func (s *BaseSimpleSqlListener) EnterTableSource(ctx *TableSourceContext) {}

// ExitTableSource is called when production tableSource is exited.
func (s *BaseSimpleSqlListener) ExitTableSource(ctx *TableSourceContext) {}

// EnterTableSourceItem is called when production tableSourceItem is entered.
func (s *BaseSimpleSqlListener) EnterTableSourceItem(ctx *TableSourceItemContext) {}

// ExitTableSourceItem is called when production tableSourceItem is exited.
func (s *BaseSimpleSqlListener) ExitTableSourceItem(ctx *TableSourceItemContext) {}

// EnterJoinPart is called when production joinPart is entered.
func (s *BaseSimpleSqlListener) EnterJoinPart(ctx *JoinPartContext) {}

// ExitJoinPart is called when production joinPart is exited.
func (s *BaseSimpleSqlListener) ExitJoinPart(ctx *JoinPartContext) {}

// EnterSelectColumn is called when production selectColumn is entered.
func (s *BaseSimpleSqlListener) EnterSelectColumn(ctx *SelectColumnContext) {}

// ExitSelectColumn is called when production selectColumn is exited.
func (s *BaseSimpleSqlListener) ExitSelectColumn(ctx *SelectColumnContext) {}

// EnterInsertStmtValue is called when production insertStmtValue is entered.
func (s *BaseSimpleSqlListener) EnterInsertStmtValue(ctx *InsertStmtValueContext) {}

// ExitInsertStmtValue is called when production insertStmtValue is exited.
func (s *BaseSimpleSqlListener) ExitInsertStmtValue(ctx *InsertStmtValueContext) {}

// EnterExprWithDefaults is called when production exprWithDefaults is entered.
func (s *BaseSimpleSqlListener) EnterExprWithDefaults(ctx *ExprWithDefaultsContext) {}

// ExitExprWithDefaults is called when production exprWithDefaults is exited.
func (s *BaseSimpleSqlListener) ExitExprWithDefaults(ctx *ExprWithDefaultsContext) {}

// EnterUpdatedElement is called when production updatedElement is entered.
func (s *BaseSimpleSqlListener) EnterUpdatedElement(ctx *UpdatedElementContext) {}

// ExitUpdatedElement is called when production updatedElement is exited.
func (s *BaseSimpleSqlListener) ExitUpdatedElement(ctx *UpdatedElementContext) {}

// EnterSubExpr is called when production subExpr is entered.
func (s *BaseSimpleSqlListener) EnterSubExpr(ctx *SubExprContext) {}

// ExitSubExpr is called when production subExpr is exited.
func (s *BaseSimpleSqlListener) ExitSubExpr(ctx *SubExprContext) {}

// EnterExpr is called when production expr is entered.
func (s *BaseSimpleSqlListener) EnterExpr(ctx *ExprContext) {}

// ExitExpr is called when production expr is exited.
func (s *BaseSimpleSqlListener) ExitExpr(ctx *ExprContext) {}

// EnterIdList is called when production idList is entered.
func (s *BaseSimpleSqlListener) EnterIdList(ctx *IdListContext) {}

// ExitIdList is called when production idList is exited.
func (s *BaseSimpleSqlListener) ExitIdList(ctx *IdListContext) {}

// EnterExprOrDefault is called when production exprOrDefault is entered.
func (s *BaseSimpleSqlListener) EnterExprOrDefault(ctx *ExprOrDefaultContext) {}

// ExitExprOrDefault is called when production exprOrDefault is exited.
func (s *BaseSimpleSqlListener) ExitExprOrDefault(ctx *ExprOrDefaultContext) {}

// EnterTableName is called when production tableName is entered.
func (s *BaseSimpleSqlListener) EnterTableName(ctx *TableNameContext) {}

// ExitTableName is called when production tableName is exited.
func (s *BaseSimpleSqlListener) ExitTableName(ctx *TableNameContext) {}

// EnterColumnName is called when production columnName is entered.
func (s *BaseSimpleSqlListener) EnterColumnName(ctx *ColumnNameContext) {}

// ExitColumnName is called when production columnName is exited.
func (s *BaseSimpleSqlListener) ExitColumnName(ctx *ColumnNameContext) {}

// EnterFunctionName is called when production functionName is entered.
func (s *BaseSimpleSqlListener) EnterFunctionName(ctx *FunctionNameContext) {}

// ExitFunctionName is called when production functionName is exited.
func (s *BaseSimpleSqlListener) ExitFunctionName(ctx *FunctionNameContext) {}

// EnterFieldName is called when production fieldName is entered.
func (s *BaseSimpleSqlListener) EnterFieldName(ctx *FieldNameContext) {}

// ExitFieldName is called when production fieldName is exited.
func (s *BaseSimpleSqlListener) ExitFieldName(ctx *FieldNameContext) {}

// EnterLiteralValue is called when production literalValue is entered.
func (s *BaseSimpleSqlListener) EnterLiteralValue(ctx *LiteralValueContext) {}

// ExitLiteralValue is called when production literalValue is exited.
func (s *BaseSimpleSqlListener) ExitLiteralValue(ctx *LiteralValueContext) {}

// EnterSubLiteralValue is called when production subLiteralValue is entered.
func (s *BaseSimpleSqlListener) EnterSubLiteralValue(ctx *SubLiteralValueContext) {}

// ExitSubLiteralValue is called when production subLiteralValue is exited.
func (s *BaseSimpleSqlListener) ExitSubLiteralValue(ctx *SubLiteralValueContext) {}
