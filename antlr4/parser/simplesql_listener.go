// Code generated from SimpleSql.g4 by ANTLR 4.7.1. DO NOT EDIT.

package parser // SimpleSql

import "github.com/antlr/antlr4/runtime/Go/antlr"

// SimpleSqlListener is a complete listener for a parse tree produced by SimpleSqlParser.
type SimpleSqlListener interface {
	antlr.ParseTreeListener

	// EnterRoot is called when entering the root production.
	EnterRoot(c *RootContext)

	// EnterCrudStmt is called when entering the crudStmt production.
	EnterCrudStmt(c *CrudStmtContext)

	// EnterInsertStmt is called when entering the insertStmt production.
	EnterInsertStmt(c *InsertStmtContext)

	// EnterSelectStmt is called when entering the selectStmt production.
	EnterSelectStmt(c *SelectStmtContext)

	// EnterUpdateStmt is called when entering the updateStmt production.
	EnterUpdateStmt(c *UpdateStmtContext)

	// EnterDeleteStmt is called when entering the deleteStmt production.
	EnterDeleteStmt(c *DeleteStmtContext)

	// EnterColumnStmt is called when entering the columnStmt production.
	EnterColumnStmt(c *ColumnStmtContext)

	// EnterFromStmt is called when entering the fromStmt production.
	EnterFromStmt(c *FromStmtContext)

	// EnterWhereStmt is called when entering the whereStmt production.
	EnterWhereStmt(c *WhereStmtContext)

	// EnterLimitStmt is called when entering the limitStmt production.
	EnterLimitStmt(c *LimitStmtContext)

	// EnterOffsetStmt is called when entering the offsetStmt production.
	EnterOffsetStmt(c *OffsetStmtContext)

	// EnterOrderbyStmt is called when entering the orderbyStmt production.
	EnterOrderbyStmt(c *OrderbyStmtContext)

	// EnterGroupbyStmt is called when entering the groupbyStmt production.
	EnterGroupbyStmt(c *GroupbyStmtContext)

	// EnterHavingStmt is called when entering the havingStmt production.
	EnterHavingStmt(c *HavingStmtContext)

	// EnterTableSources is called when entering the tableSources production.
	EnterTableSources(c *TableSourcesContext)

	// EnterTableSource is called when entering the tableSource production.
	EnterTableSource(c *TableSourceContext)

	// EnterTableSourceItem is called when entering the tableSourceItem production.
	EnterTableSourceItem(c *TableSourceItemContext)

	// EnterJoinPart is called when entering the joinPart production.
	EnterJoinPart(c *JoinPartContext)

	// EnterSelectColumn is called when entering the selectColumn production.
	EnterSelectColumn(c *SelectColumnContext)

	// EnterInsertStmtValue is called when entering the insertStmtValue production.
	EnterInsertStmtValue(c *InsertStmtValueContext)

	// EnterExprWithDefaults is called when entering the exprWithDefaults production.
	EnterExprWithDefaults(c *ExprWithDefaultsContext)

	// EnterUpdatedElement is called when entering the updatedElement production.
	EnterUpdatedElement(c *UpdatedElementContext)

	// EnterSubExpr is called when entering the subExpr production.
	EnterSubExpr(c *SubExprContext)

	// EnterExpr is called when entering the expr production.
	EnterExpr(c *ExprContext)

	// EnterIdList is called when entering the idList production.
	EnterIdList(c *IdListContext)

	// EnterExprOrDefault is called when entering the exprOrDefault production.
	EnterExprOrDefault(c *ExprOrDefaultContext)

	// EnterTableName is called when entering the tableName production.
	EnterTableName(c *TableNameContext)

	// EnterColumnName is called when entering the columnName production.
	EnterColumnName(c *ColumnNameContext)

	// EnterFunctionName is called when entering the functionName production.
	EnterFunctionName(c *FunctionNameContext)

	// EnterFieldName is called when entering the fieldName production.
	EnterFieldName(c *FieldNameContext)

	// EnterLiteralValue is called when entering the literalValue production.
	EnterLiteralValue(c *LiteralValueContext)

	// EnterSubLiteralValue is called when entering the subLiteralValue production.
	EnterSubLiteralValue(c *SubLiteralValueContext)

	// ExitRoot is called when exiting the root production.
	ExitRoot(c *RootContext)

	// ExitCrudStmt is called when exiting the crudStmt production.
	ExitCrudStmt(c *CrudStmtContext)

	// ExitInsertStmt is called when exiting the insertStmt production.
	ExitInsertStmt(c *InsertStmtContext)

	// ExitSelectStmt is called when exiting the selectStmt production.
	ExitSelectStmt(c *SelectStmtContext)

	// ExitUpdateStmt is called when exiting the updateStmt production.
	ExitUpdateStmt(c *UpdateStmtContext)

	// ExitDeleteStmt is called when exiting the deleteStmt production.
	ExitDeleteStmt(c *DeleteStmtContext)

	// ExitColumnStmt is called when exiting the columnStmt production.
	ExitColumnStmt(c *ColumnStmtContext)

	// ExitFromStmt is called when exiting the fromStmt production.
	ExitFromStmt(c *FromStmtContext)

	// ExitWhereStmt is called when exiting the whereStmt production.
	ExitWhereStmt(c *WhereStmtContext)

	// ExitLimitStmt is called when exiting the limitStmt production.
	ExitLimitStmt(c *LimitStmtContext)

	// ExitOffsetStmt is called when exiting the offsetStmt production.
	ExitOffsetStmt(c *OffsetStmtContext)

	// ExitOrderbyStmt is called when exiting the orderbyStmt production.
	ExitOrderbyStmt(c *OrderbyStmtContext)

	// ExitGroupbyStmt is called when exiting the groupbyStmt production.
	ExitGroupbyStmt(c *GroupbyStmtContext)

	// ExitHavingStmt is called when exiting the havingStmt production.
	ExitHavingStmt(c *HavingStmtContext)

	// ExitTableSources is called when exiting the tableSources production.
	ExitTableSources(c *TableSourcesContext)

	// ExitTableSource is called when exiting the tableSource production.
	ExitTableSource(c *TableSourceContext)

	// ExitTableSourceItem is called when exiting the tableSourceItem production.
	ExitTableSourceItem(c *TableSourceItemContext)

	// ExitJoinPart is called when exiting the joinPart production.
	ExitJoinPart(c *JoinPartContext)

	// ExitSelectColumn is called when exiting the selectColumn production.
	ExitSelectColumn(c *SelectColumnContext)

	// ExitInsertStmtValue is called when exiting the insertStmtValue production.
	ExitInsertStmtValue(c *InsertStmtValueContext)

	// ExitExprWithDefaults is called when exiting the exprWithDefaults production.
	ExitExprWithDefaults(c *ExprWithDefaultsContext)

	// ExitUpdatedElement is called when exiting the updatedElement production.
	ExitUpdatedElement(c *UpdatedElementContext)

	// ExitSubExpr is called when exiting the subExpr production.
	ExitSubExpr(c *SubExprContext)

	// ExitExpr is called when exiting the expr production.
	ExitExpr(c *ExprContext)

	// ExitIdList is called when exiting the idList production.
	ExitIdList(c *IdListContext)

	// ExitExprOrDefault is called when exiting the exprOrDefault production.
	ExitExprOrDefault(c *ExprOrDefaultContext)

	// ExitTableName is called when exiting the tableName production.
	ExitTableName(c *TableNameContext)

	// ExitColumnName is called when exiting the columnName production.
	ExitColumnName(c *ColumnNameContext)

	// ExitFunctionName is called when exiting the functionName production.
	ExitFunctionName(c *FunctionNameContext)

	// ExitFieldName is called when exiting the fieldName production.
	ExitFieldName(c *FieldNameContext)

	// ExitLiteralValue is called when exiting the literalValue production.
	ExitLiteralValue(c *LiteralValueContext)

	// ExitSubLiteralValue is called when exiting the subLiteralValue production.
	ExitSubLiteralValue(c *SubLiteralValueContext)
}
