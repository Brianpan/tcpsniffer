grammar SimpleSql;

root : crudStmt+ EOF ;
crudStmt : ( insertStmt | selectStmt | updateStmt | deleteStmt ) SEMI? ;

//--- four main statements --- 
insertStmt 
  : INSERT
  IGNORE? INTO? tableName
  (
    ( LPAREN columns=idList RPAREN )? insertStmtValue
    | SET
        setElement=updatedElement
        ( COMMA setElements+=updatedElement )*
  )
  (
    ON DUPLICATE KEY UPDATE
    duplicatedElement=updatedElement
    ( COMMA duplicatedElements+=updatedElement )*
  )?
  ;

selectStmt 
  : SELECT columnStmt fromStmt whereStmt? 
    limitStmt? offsetStmt? orderbyStmt? groupbyStmt? 
    ( UNION selectStmt )*
  ;

updateStmt
  : UPDATE IGNORE? tableSources
  SET
    updatedElement ( COMMA updatedElement )*
    whereStmt? limitStmt? offsetStmt? orderbyStmt?
  ;

deleteStmt
  : DELETE IGNORE?
  FROM tableName
  whereStmt?
  orderbyStmt? limitStmt?
  ;

//---------------------------
columnStmt : ( ASTERISK | selectColumn (COMMA selectColumn)* ) ;
fromStmt : FROM tableSources ;
whereStmt : WHERE subExpr ;
limitStmt : LIMIT NUMBER ;
offsetStmt : OFFSET NUMBER ;
orderbyStmt : ORDER BY columnName (ASC | DESC);
groupbyStmt : GROUP BY columnName ( havingStmt )?;
havingStmt : HAVING subExpr ;


tableSources : tableSource ( COMMA tableSource )* ;
tableSource : tableSourceItem joinPart*
  | LPAREN tableSourceItem joinPart* RPAREN ;
tableSourceItem
  : tableName
    ( AS? alias=ID )?
  | (
    subquery=selectStmt
    | LPAREN paranthesisSubquery=selectStmt RPAREN
    )
    AS? alias=ID
  | LPAREN tableSources RPAREN
  ;

joinPart
  : (INNER | CROSS)? JOIN tableSourceItem
  ( ON expr )?
  | (LEFT | RIGHT) OUTER? JOIN tableSourceItem
  ( ON expr )?
  | NATURAL ( (LEFT | RIGHT) OUTER?)? JOIN tableSourceItem
  ( ON expr )?
  ;

selectColumn : ( columnName ( AS columnName )? ) | ( functionName LPAREN ( (subExpr ( COMMA subExpr )*) | ASTERISK )? RPAREN ) ;

insertStmtValue
  : selectStmt
  | insertFormat=( VALUES | VALUE )
    LPAREN exprWithDefaults RPAREN 
    ( COMMA LPAREN exprWithDefaults RPAREN )*
  ;

exprWithDefaults
  : exprOrDefault ( COMMA exprOrDefault )* ;

updatedElement
  : columnName EQ ( subExpr | DEFAULT ) ;

subExpr 
  : subExpr NOT? IN LPAREN ( ( inElement=subExpr (COMMA inElements+=subExpr)* )? | selectStmt ) RPAREN // IN clause
  | subExpr op=( ASTERISK |  DIVIDE | MOD | PLUS | MINUS ) subExpr // calculation ops
  | subExpr op=( LT | LTE | GT | GTE ) subExpr // comparison ops
  | subExpr op=( EQ | NOT_EQ | MATCH | NOT_MATCH ) subExpr         // exprBinaryOp
  | subExpr NOT? LIKE subExpr // like
  | subExpr NOT? REGEXP subExpr // regexp
  | NOT subExpr
  | subExpr op=(AND | OR) subExpr // AND/OR clause
  | functionName LPAREN ( (subExpr ( COMMA subExpr )*) | ASTERISK )? RPAREN
  | LPAREN subExpr RPAREN
  | subExpr NOT? BETWEEN subExpr AND subExpr
  | CASE subExpr? ( WHEN subExpr THEN subExpr )+ ( ELSE subExpr )? END // CASE WHEN clause
  | subLiteralValue
  | fieldName
  ;

expr
 : expr ( IS NULL | IS NOT NULL )                           // exprNullCheck
 | expr NOT? IN LPAREN ( expr ( COMMA expr )* )? RPAREN     // exprIn
 | expr op=( ASTERISK | DIVIDE | MOD | PLUS | MINUS ) expr  // exprBinaryOp
 | expr op=( LT | LTE | GT | GTE ) expr                     // exprBinaryOp
 | expr op=( EQ | NOT_EQ | MATCH | NOT_MATCH ) expr         // exprBinaryOp
 | expr NOT? LIKE expr // like
 | expr NOT? REGEXP expr // regexp
 // | expr EQ EQ expr                                          {notifyErrorListeners("operator == does not exist");} // exprError
 // NOT must negate any boolean operation, so it must have lower precedence than those
 | NOT expr                                                 // exprNot
 // in stmt 'where e1 and e2 and e3', booleans have lower precedence than the e1, e2, e3
 | expr op=( AND | OR ) expr                                // exprBinaryOp
 | functionName LPAREN ( (subExpr ( COMMA subExpr )*) | ASTERISK )? RPAREN     // exprFunction
 | LPAREN expr RPAREN                                       // exprGroup
 // | LPAREN expr RPAREN RPAREN                                {notifyErrorListeners("too many parentheses");}  // exprError
 // | LPAREN expr                                              {notifyErrorListeners("missing closing ')'");}  // exprError
 | expr NOT? BETWEEN expr AND expr                          // exprBetween
 | CASE expr? ( WHEN expr THEN expr )+ ( ELSE expr )? END   // exprCase
 | literalValue                                             // exprLiteral
 | fieldName                                                // exprField
 ;

idList
  : ID ( COMMA ID )* ;
exprOrDefault
  : literalValue | DEFAULT ;

tableName : ID ;
columnName : ID ;
functionName : ID ;
fieldName : ID | ( ( ID )? DOT ID );
literalValue 
  : NUMBER
  | STRING
  | SQUOTA_STRING
  | DQUOTA_STRING
  | TRUE
  | FALSE
  | NULL
  ;

subLiteralValue
  : NUMBER
  | STRING
  | SQUOTA_STRING
  | DQUOTA_STRING
  | TRUE
  | FALSE
  | NULL
  ;

//--- Lexers --- 
SELECT : S E L E C T ;

AS : A S ;

FROM : F R O M  ;

WHERE : W H E R E ;

AND : A N D ;

OR : O R ;

XOR : X O R ;

IS : I S ;

TO : T O ;

NULL : N U L L ;

LIKE : L I K E ;

IN : I N ;

BETWEEN : B E T W E E N ;

EXISTS : E X I S T S ;

TRUE : T R U E ;

FALSE : F A L S E ;

DIVIDE : '/' ;

MOD : '%' ;

MATCH : '~' ;

NOT_MATCH : '!~' ;

PLUS : '+' ;

MINUS : '-' ;

ASTERISK : '*' ;

RPAREN : ')' ;

LPAREN : '(' ;

RBRACK : ']' ;

LBRACK : '[' ;

EQ : '=' ;

LT : '<' ;

GT : '>' ;

NOT_EQ : '!=' ;

NOT : N O T ;

LTE : '<=' ;

GTE : '>=' ;

SEMI : ';' ;

COMMA : ',' ;

DOT : '.' ;

ORDER : O R D E R ;

GROUP : G R O U P ;

BY : B Y ;

PARTITION : P A R T I T I O N ;

ASC : A S C ;

DESC : D E S C ;

CASE : C A S E ;

WHEN: W H E N ;

THEN : T H E N ;

ELSE : E L S E ;

END : E N D ;

LIMIT : L I M I T ;

OFFSET : O F F S E T ;

INTERVAL : I N T E R V A L ;

SINCE : S I N C E ;

FOLLOW : F O L L O W ;

UNTIL : U N T I L ;

INNER : I N N E R ;
OUTER : O U T E R ;
LEFT : L E F T ;
RIGHT : R I G H T ;
JOIN : J O I N ;
ON : O N ;
CROSS : C R O S S ;
NATURAL : N A T U R A L ; 
REGEXP : R E G E X P ;
UNION : U N I O N ;

INSERT : I N S E R T ;
IGNORE : I G N O R E ;
INTO : I N T O ;
SET : S E T ;
VALUE : V A L U E ;
VALUES : V A L U E S ;
DEFAULT : D E F A U L T ;
DUPLICATE : D U P L I C A T E ;
KEY : K E Y ;
UPDATE : U P D A T E ;
DELETE : D E L E T E ;
HAVING : H A V I N G ;

ID 
  : ( DQUOTA_STRING | SQUOTA_STRING | BQUOTA_STRING ) ( DOT ( ((LETTER|DIGIT)*) | DQUOTA_STRING | SQUOTA_STRING | BQUOTA_STRING )  )
  | LETTER (LETTER|DIGIT)*
  | LETTER DOT ( ((LETTER|DIGIT)+) | DQUOTA_STRING | SQUOTA_STRING | BQUOTA_STRING )
  ;


NUMBER : '-'? ( '.' DIGIT+ | DIGIT+ ( '.' DIGIT* )? ) ;

SINGLE_LINE_COMMENT
  : '--' ~[\r\n]* -> channel(HIDDEN)
  ;
MULTILINE_COMMENT
  : '/*' .*? ( '*/' | EOF ) -> channel(HIDDEN)
  ;
WS
  : [ \u000B\t\r\n]+ -> channel(HIDDEN)
  ;

STRING : '\'' ( ~'\'' | '\'\'' )* '\'' ;
DQUOTA_STRING : '"' ( '\\'. | '""' | ~('"'| '\\') )* '"';
SQUOTA_STRING : '\'' ( ~('\'' | '\\') | '\'\''. | '\'\'' )* '\'' ;
BQUOTA_STRING : '`' ( '\\'. | '``' | ~('`'|'\\') )* '`' ;

fragment DIGIT : [0-9] ;
fragment LETTER : [a-zA-Z\u0080-\u00FF_] ;

fragment A : [aA];
fragment B : [bB];
fragment C : [cC];
fragment D : [dD];
fragment E : [eE];
fragment F : [fF];
fragment G : [gG];
fragment H : [hH];
fragment I : [iI];
fragment J : [jJ];
fragment K : [kK];
fragment L : [lL];
fragment M : [mM];
fragment N : [nN];
fragment O : [oO];
fragment P : [pP];
fragment Q : [qQ];
fragment R : [rR];
fragment S : [sS];
fragment T : [tT];
fragment U : [uU];
fragment V : [vV];
fragment W : [wW];
fragment X : [xX];
fragment Y : [yY];
fragment Z : [zZ];