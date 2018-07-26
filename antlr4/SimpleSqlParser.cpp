
// Generated from SimpleSql.g4 by ANTLR 4.7.1


#include "SimpleSqlListener.h"

#include "SimpleSqlParser.h"


using namespace antlrcpp;
using namespace antlr4;

SimpleSqlParser::SimpleSqlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SimpleSqlParser::~SimpleSqlParser() {
  delete _interpreter;
}

std::string SimpleSqlParser::getGrammarFileName() const {
  return "SimpleSql.g4";
}

const std::vector<std::string>& SimpleSqlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SimpleSqlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- RootContext ------------------------------------------------------------------

SimpleSqlParser::RootContext::RootContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::RootContext::EOF() {
  return getToken(SimpleSqlParser::EOF, 0);
}

std::vector<SimpleSqlParser::CrudStmtContext *> SimpleSqlParser::RootContext::crudStmt() {
  return getRuleContexts<SimpleSqlParser::CrudStmtContext>();
}

SimpleSqlParser::CrudStmtContext* SimpleSqlParser::RootContext::crudStmt(size_t i) {
  return getRuleContext<SimpleSqlParser::CrudStmtContext>(i);
}


size_t SimpleSqlParser::RootContext::getRuleIndex() const {
  return SimpleSqlParser::RuleRoot;
}

void SimpleSqlParser::RootContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoot(this);
}

void SimpleSqlParser::RootContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoot(this);
}

SimpleSqlParser::RootContext* SimpleSqlParser::root() {
  RootContext *_localctx = _tracker.createInstance<RootContext>(_ctx, getState());
  enterRule(_localctx, 0, SimpleSqlParser::RuleRoot);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(62);
      crudStmt();
      setState(65); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SimpleSqlParser::SELECT || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (SimpleSqlParser::INSERT - 65))
      | (1ULL << (SimpleSqlParser::UPDATE - 65))
      | (1ULL << (SimpleSqlParser::DELETE - 65)))) != 0));
    setState(67);
    match(SimpleSqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CrudStmtContext ------------------------------------------------------------------

SimpleSqlParser::CrudStmtContext::CrudStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSqlParser::InsertStmtContext* SimpleSqlParser::CrudStmtContext::insertStmt() {
  return getRuleContext<SimpleSqlParser::InsertStmtContext>(0);
}

SimpleSqlParser::SelectStmtContext* SimpleSqlParser::CrudStmtContext::selectStmt() {
  return getRuleContext<SimpleSqlParser::SelectStmtContext>(0);
}

SimpleSqlParser::UpdateStmtContext* SimpleSqlParser::CrudStmtContext::updateStmt() {
  return getRuleContext<SimpleSqlParser::UpdateStmtContext>(0);
}

SimpleSqlParser::DeleteStmtContext* SimpleSqlParser::CrudStmtContext::deleteStmt() {
  return getRuleContext<SimpleSqlParser::DeleteStmtContext>(0);
}

tree::TerminalNode* SimpleSqlParser::CrudStmtContext::SEMI() {
  return getToken(SimpleSqlParser::SEMI, 0);
}


size_t SimpleSqlParser::CrudStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleCrudStmt;
}

void SimpleSqlParser::CrudStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCrudStmt(this);
}

void SimpleSqlParser::CrudStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCrudStmt(this);
}

SimpleSqlParser::CrudStmtContext* SimpleSqlParser::crudStmt() {
  CrudStmtContext *_localctx = _tracker.createInstance<CrudStmtContext>(_ctx, getState());
  enterRule(_localctx, 2, SimpleSqlParser::RuleCrudStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::INSERT: {
        setState(69);
        insertStmt();
        break;
      }

      case SimpleSqlParser::SELECT: {
        setState(70);
        selectStmt();
        break;
      }

      case SimpleSqlParser::UPDATE: {
        setState(71);
        updateStmt();
        break;
      }

      case SimpleSqlParser::DELETE: {
        setState(72);
        deleteStmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::SEMI) {
      setState(75);
      match(SimpleSqlParser::SEMI);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InsertStmtContext ------------------------------------------------------------------

SimpleSqlParser::InsertStmtContext::InsertStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::INSERT() {
  return getToken(SimpleSqlParser::INSERT, 0);
}

SimpleSqlParser::TableNameContext* SimpleSqlParser::InsertStmtContext::tableName() {
  return getRuleContext<SimpleSqlParser::TableNameContext>(0);
}

SimpleSqlParser::InsertStmtValueContext* SimpleSqlParser::InsertStmtContext::insertStmtValue() {
  return getRuleContext<SimpleSqlParser::InsertStmtValueContext>(0);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::SET() {
  return getToken(SimpleSqlParser::SET, 0);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::IGNORE() {
  return getToken(SimpleSqlParser::IGNORE, 0);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::INTO() {
  return getToken(SimpleSqlParser::INTO, 0);
}

std::vector<SimpleSqlParser::UpdatedElementContext *> SimpleSqlParser::InsertStmtContext::updatedElement() {
  return getRuleContexts<SimpleSqlParser::UpdatedElementContext>();
}

SimpleSqlParser::UpdatedElementContext* SimpleSqlParser::InsertStmtContext::updatedElement(size_t i) {
  return getRuleContext<SimpleSqlParser::UpdatedElementContext>(i);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::ON() {
  return getToken(SimpleSqlParser::ON, 0);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::DUPLICATE() {
  return getToken(SimpleSqlParser::DUPLICATE, 0);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::KEY() {
  return getToken(SimpleSqlParser::KEY, 0);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::UPDATE() {
  return getToken(SimpleSqlParser::UPDATE, 0);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::LPAREN() {
  return getToken(SimpleSqlParser::LPAREN, 0);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::RPAREN() {
  return getToken(SimpleSqlParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::InsertStmtContext::COMMA() {
  return getTokens(SimpleSqlParser::COMMA);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtContext::COMMA(size_t i) {
  return getToken(SimpleSqlParser::COMMA, i);
}

SimpleSqlParser::IdListContext* SimpleSqlParser::InsertStmtContext::idList() {
  return getRuleContext<SimpleSqlParser::IdListContext>(0);
}


size_t SimpleSqlParser::InsertStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleInsertStmt;
}

void SimpleSqlParser::InsertStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsertStmt(this);
}

void SimpleSqlParser::InsertStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsertStmt(this);
}

SimpleSqlParser::InsertStmtContext* SimpleSqlParser::insertStmt() {
  InsertStmtContext *_localctx = _tracker.createInstance<InsertStmtContext>(_ctx, getState());
  enterRule(_localctx, 4, SimpleSqlParser::RuleInsertStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(SimpleSqlParser::INSERT);
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::IGNORE) {
      setState(79);
      match(SimpleSqlParser::IGNORE);
    }
    setState(83);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::INTO) {
      setState(82);
      match(SimpleSqlParser::INTO);
    }
    setState(85);
    tableName();
    setState(102);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::SELECT:
      case SimpleSqlParser::LPAREN:
      case SimpleSqlParser::VALUE:
      case SimpleSqlParser::VALUES: {
        setState(90);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SimpleSqlParser::LPAREN) {
          setState(86);
          match(SimpleSqlParser::LPAREN);
          setState(87);
          dynamic_cast<InsertStmtContext *>(_localctx)->columns = idList();
          setState(88);
          match(SimpleSqlParser::RPAREN);
        }
        setState(92);
        insertStmtValue();
        break;
      }

      case SimpleSqlParser::SET: {
        setState(93);
        match(SimpleSqlParser::SET);
        setState(94);
        dynamic_cast<InsertStmtContext *>(_localctx)->setElement = updatedElement();
        setState(99);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SimpleSqlParser::COMMA) {
          setState(95);
          match(SimpleSqlParser::COMMA);
          setState(96);
          dynamic_cast<InsertStmtContext *>(_localctx)->updatedElementContext = updatedElement();
          dynamic_cast<InsertStmtContext *>(_localctx)->setElements.push_back(dynamic_cast<InsertStmtContext *>(_localctx)->updatedElementContext);
          setState(101);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(116);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::ON) {
      setState(104);
      match(SimpleSqlParser::ON);
      setState(105);
      match(SimpleSqlParser::DUPLICATE);
      setState(106);
      match(SimpleSqlParser::KEY);
      setState(107);
      match(SimpleSqlParser::UPDATE);
      setState(108);
      dynamic_cast<InsertStmtContext *>(_localctx)->duplicatedElement = updatedElement();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SimpleSqlParser::COMMA) {
        setState(109);
        match(SimpleSqlParser::COMMA);
        setState(110);
        dynamic_cast<InsertStmtContext *>(_localctx)->updatedElementContext = updatedElement();
        dynamic_cast<InsertStmtContext *>(_localctx)->duplicatedElements.push_back(dynamic_cast<InsertStmtContext *>(_localctx)->updatedElementContext);
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectStmtContext ------------------------------------------------------------------

SimpleSqlParser::SelectStmtContext::SelectStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::SelectStmtContext::SELECT() {
  return getToken(SimpleSqlParser::SELECT, 0);
}

SimpleSqlParser::ColumnStmtContext* SimpleSqlParser::SelectStmtContext::columnStmt() {
  return getRuleContext<SimpleSqlParser::ColumnStmtContext>(0);
}

SimpleSqlParser::FromStmtContext* SimpleSqlParser::SelectStmtContext::fromStmt() {
  return getRuleContext<SimpleSqlParser::FromStmtContext>(0);
}

SimpleSqlParser::WhereStmtContext* SimpleSqlParser::SelectStmtContext::whereStmt() {
  return getRuleContext<SimpleSqlParser::WhereStmtContext>(0);
}

SimpleSqlParser::LimitStmtContext* SimpleSqlParser::SelectStmtContext::limitStmt() {
  return getRuleContext<SimpleSqlParser::LimitStmtContext>(0);
}

SimpleSqlParser::OffsetStmtContext* SimpleSqlParser::SelectStmtContext::offsetStmt() {
  return getRuleContext<SimpleSqlParser::OffsetStmtContext>(0);
}

SimpleSqlParser::OrderbyStmtContext* SimpleSqlParser::SelectStmtContext::orderbyStmt() {
  return getRuleContext<SimpleSqlParser::OrderbyStmtContext>(0);
}

SimpleSqlParser::GroupbyStmtContext* SimpleSqlParser::SelectStmtContext::groupbyStmt() {
  return getRuleContext<SimpleSqlParser::GroupbyStmtContext>(0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::SelectStmtContext::UNION() {
  return getTokens(SimpleSqlParser::UNION);
}

tree::TerminalNode* SimpleSqlParser::SelectStmtContext::UNION(size_t i) {
  return getToken(SimpleSqlParser::UNION, i);
}

std::vector<SimpleSqlParser::SelectStmtContext *> SimpleSqlParser::SelectStmtContext::selectStmt() {
  return getRuleContexts<SimpleSqlParser::SelectStmtContext>();
}

SimpleSqlParser::SelectStmtContext* SimpleSqlParser::SelectStmtContext::selectStmt(size_t i) {
  return getRuleContext<SimpleSqlParser::SelectStmtContext>(i);
}


size_t SimpleSqlParser::SelectStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleSelectStmt;
}

void SimpleSqlParser::SelectStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectStmt(this);
}

void SimpleSqlParser::SelectStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectStmt(this);
}

SimpleSqlParser::SelectStmtContext* SimpleSqlParser::selectStmt() {
  SelectStmtContext *_localctx = _tracker.createInstance<SelectStmtContext>(_ctx, getState());
  enterRule(_localctx, 6, SimpleSqlParser::RuleSelectStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(SimpleSqlParser::SELECT);
    setState(119);
    columnStmt();
    setState(120);
    fromStmt();
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::WHERE) {
      setState(121);
      whereStmt();
    }
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::LIMIT) {
      setState(124);
      limitStmt();
    }
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::OFFSET) {
      setState(127);
      offsetStmt();
    }
    setState(131);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::ORDER) {
      setState(130);
      orderbyStmt();
    }
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::GROUP) {
      setState(133);
      groupbyStmt();
    }
    setState(140);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(136);
        match(SimpleSqlParser::UNION);
        setState(137);
        selectStmt(); 
      }
      setState(142);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdateStmtContext ------------------------------------------------------------------

SimpleSqlParser::UpdateStmtContext::UpdateStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::UpdateStmtContext::UPDATE() {
  return getToken(SimpleSqlParser::UPDATE, 0);
}

SimpleSqlParser::TableSourcesContext* SimpleSqlParser::UpdateStmtContext::tableSources() {
  return getRuleContext<SimpleSqlParser::TableSourcesContext>(0);
}

tree::TerminalNode* SimpleSqlParser::UpdateStmtContext::SET() {
  return getToken(SimpleSqlParser::SET, 0);
}

std::vector<SimpleSqlParser::UpdatedElementContext *> SimpleSqlParser::UpdateStmtContext::updatedElement() {
  return getRuleContexts<SimpleSqlParser::UpdatedElementContext>();
}

SimpleSqlParser::UpdatedElementContext* SimpleSqlParser::UpdateStmtContext::updatedElement(size_t i) {
  return getRuleContext<SimpleSqlParser::UpdatedElementContext>(i);
}

tree::TerminalNode* SimpleSqlParser::UpdateStmtContext::IGNORE() {
  return getToken(SimpleSqlParser::IGNORE, 0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::UpdateStmtContext::COMMA() {
  return getTokens(SimpleSqlParser::COMMA);
}

tree::TerminalNode* SimpleSqlParser::UpdateStmtContext::COMMA(size_t i) {
  return getToken(SimpleSqlParser::COMMA, i);
}

SimpleSqlParser::WhereStmtContext* SimpleSqlParser::UpdateStmtContext::whereStmt() {
  return getRuleContext<SimpleSqlParser::WhereStmtContext>(0);
}

SimpleSqlParser::LimitStmtContext* SimpleSqlParser::UpdateStmtContext::limitStmt() {
  return getRuleContext<SimpleSqlParser::LimitStmtContext>(0);
}

SimpleSqlParser::OffsetStmtContext* SimpleSqlParser::UpdateStmtContext::offsetStmt() {
  return getRuleContext<SimpleSqlParser::OffsetStmtContext>(0);
}

SimpleSqlParser::OrderbyStmtContext* SimpleSqlParser::UpdateStmtContext::orderbyStmt() {
  return getRuleContext<SimpleSqlParser::OrderbyStmtContext>(0);
}


size_t SimpleSqlParser::UpdateStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleUpdateStmt;
}

void SimpleSqlParser::UpdateStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdateStmt(this);
}

void SimpleSqlParser::UpdateStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdateStmt(this);
}

SimpleSqlParser::UpdateStmtContext* SimpleSqlParser::updateStmt() {
  UpdateStmtContext *_localctx = _tracker.createInstance<UpdateStmtContext>(_ctx, getState());
  enterRule(_localctx, 8, SimpleSqlParser::RuleUpdateStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(SimpleSqlParser::UPDATE);
    setState(145);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::IGNORE) {
      setState(144);
      match(SimpleSqlParser::IGNORE);
    }
    setState(147);
    tableSources();
    setState(148);
    match(SimpleSqlParser::SET);
    setState(149);
    updatedElement();
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::COMMA) {
      setState(150);
      match(SimpleSqlParser::COMMA);
      setState(151);
      updatedElement();
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(158);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::WHERE) {
      setState(157);
      whereStmt();
    }
    setState(161);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::LIMIT) {
      setState(160);
      limitStmt();
    }
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::OFFSET) {
      setState(163);
      offsetStmt();
    }
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::ORDER) {
      setState(166);
      orderbyStmt();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteStmtContext ------------------------------------------------------------------

SimpleSqlParser::DeleteStmtContext::DeleteStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::DeleteStmtContext::DELETE() {
  return getToken(SimpleSqlParser::DELETE, 0);
}

tree::TerminalNode* SimpleSqlParser::DeleteStmtContext::FROM() {
  return getToken(SimpleSqlParser::FROM, 0);
}

SimpleSqlParser::TableNameContext* SimpleSqlParser::DeleteStmtContext::tableName() {
  return getRuleContext<SimpleSqlParser::TableNameContext>(0);
}

tree::TerminalNode* SimpleSqlParser::DeleteStmtContext::IGNORE() {
  return getToken(SimpleSqlParser::IGNORE, 0);
}

SimpleSqlParser::WhereStmtContext* SimpleSqlParser::DeleteStmtContext::whereStmt() {
  return getRuleContext<SimpleSqlParser::WhereStmtContext>(0);
}

SimpleSqlParser::OrderbyStmtContext* SimpleSqlParser::DeleteStmtContext::orderbyStmt() {
  return getRuleContext<SimpleSqlParser::OrderbyStmtContext>(0);
}

SimpleSqlParser::LimitStmtContext* SimpleSqlParser::DeleteStmtContext::limitStmt() {
  return getRuleContext<SimpleSqlParser::LimitStmtContext>(0);
}


size_t SimpleSqlParser::DeleteStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleDeleteStmt;
}

void SimpleSqlParser::DeleteStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteStmt(this);
}

void SimpleSqlParser::DeleteStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteStmt(this);
}

SimpleSqlParser::DeleteStmtContext* SimpleSqlParser::deleteStmt() {
  DeleteStmtContext *_localctx = _tracker.createInstance<DeleteStmtContext>(_ctx, getState());
  enterRule(_localctx, 10, SimpleSqlParser::RuleDeleteStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(SimpleSqlParser::DELETE);
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::IGNORE) {
      setState(170);
      match(SimpleSqlParser::IGNORE);
    }
    setState(173);
    match(SimpleSqlParser::FROM);
    setState(174);
    tableName();
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::WHERE) {
      setState(175);
      whereStmt();
    }
    setState(179);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::ORDER) {
      setState(178);
      orderbyStmt();
    }
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::LIMIT) {
      setState(181);
      limitStmt();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColumnStmtContext ------------------------------------------------------------------

SimpleSqlParser::ColumnStmtContext::ColumnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::ColumnStmtContext::ASTERISK() {
  return getToken(SimpleSqlParser::ASTERISK, 0);
}

std::vector<SimpleSqlParser::SelectColumnContext *> SimpleSqlParser::ColumnStmtContext::selectColumn() {
  return getRuleContexts<SimpleSqlParser::SelectColumnContext>();
}

SimpleSqlParser::SelectColumnContext* SimpleSqlParser::ColumnStmtContext::selectColumn(size_t i) {
  return getRuleContext<SimpleSqlParser::SelectColumnContext>(i);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::ColumnStmtContext::COMMA() {
  return getTokens(SimpleSqlParser::COMMA);
}

tree::TerminalNode* SimpleSqlParser::ColumnStmtContext::COMMA(size_t i) {
  return getToken(SimpleSqlParser::COMMA, i);
}


size_t SimpleSqlParser::ColumnStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleColumnStmt;
}

void SimpleSqlParser::ColumnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumnStmt(this);
}

void SimpleSqlParser::ColumnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumnStmt(this);
}

SimpleSqlParser::ColumnStmtContext* SimpleSqlParser::columnStmt() {
  ColumnStmtContext *_localctx = _tracker.createInstance<ColumnStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, SimpleSqlParser::RuleColumnStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::ASTERISK: {
        setState(184);
        match(SimpleSqlParser::ASTERISK);
        break;
      }

      case SimpleSqlParser::ID: {
        setState(185);
        selectColumn();
        setState(190);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SimpleSqlParser::COMMA) {
          setState(186);
          match(SimpleSqlParser::COMMA);
          setState(187);
          selectColumn();
          setState(192);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FromStmtContext ------------------------------------------------------------------

SimpleSqlParser::FromStmtContext::FromStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::FromStmtContext::FROM() {
  return getToken(SimpleSqlParser::FROM, 0);
}

SimpleSqlParser::TableSourcesContext* SimpleSqlParser::FromStmtContext::tableSources() {
  return getRuleContext<SimpleSqlParser::TableSourcesContext>(0);
}


size_t SimpleSqlParser::FromStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleFromStmt;
}

void SimpleSqlParser::FromStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFromStmt(this);
}

void SimpleSqlParser::FromStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFromStmt(this);
}

SimpleSqlParser::FromStmtContext* SimpleSqlParser::fromStmt() {
  FromStmtContext *_localctx = _tracker.createInstance<FromStmtContext>(_ctx, getState());
  enterRule(_localctx, 14, SimpleSqlParser::RuleFromStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(SimpleSqlParser::FROM);
    setState(196);
    tableSources();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereStmtContext ------------------------------------------------------------------

SimpleSqlParser::WhereStmtContext::WhereStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::WhereStmtContext::WHERE() {
  return getToken(SimpleSqlParser::WHERE, 0);
}

SimpleSqlParser::WhereExprContext* SimpleSqlParser::WhereStmtContext::whereExpr() {
  return getRuleContext<SimpleSqlParser::WhereExprContext>(0);
}


size_t SimpleSqlParser::WhereStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleWhereStmt;
}

void SimpleSqlParser::WhereStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhereStmt(this);
}

void SimpleSqlParser::WhereStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhereStmt(this);
}

SimpleSqlParser::WhereStmtContext* SimpleSqlParser::whereStmt() {
  WhereStmtContext *_localctx = _tracker.createInstance<WhereStmtContext>(_ctx, getState());
  enterRule(_localctx, 16, SimpleSqlParser::RuleWhereStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(SimpleSqlParser::WHERE);
    setState(199);
    whereExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LimitStmtContext ------------------------------------------------------------------

SimpleSqlParser::LimitStmtContext::LimitStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::LimitStmtContext::LIMIT() {
  return getToken(SimpleSqlParser::LIMIT, 0);
}

tree::TerminalNode* SimpleSqlParser::LimitStmtContext::NUMBER() {
  return getToken(SimpleSqlParser::NUMBER, 0);
}


size_t SimpleSqlParser::LimitStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleLimitStmt;
}

void SimpleSqlParser::LimitStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLimitStmt(this);
}

void SimpleSqlParser::LimitStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLimitStmt(this);
}

SimpleSqlParser::LimitStmtContext* SimpleSqlParser::limitStmt() {
  LimitStmtContext *_localctx = _tracker.createInstance<LimitStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, SimpleSqlParser::RuleLimitStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(SimpleSqlParser::LIMIT);
    setState(202);
    match(SimpleSqlParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OffsetStmtContext ------------------------------------------------------------------

SimpleSqlParser::OffsetStmtContext::OffsetStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::OffsetStmtContext::OFFSET() {
  return getToken(SimpleSqlParser::OFFSET, 0);
}

tree::TerminalNode* SimpleSqlParser::OffsetStmtContext::NUMBER() {
  return getToken(SimpleSqlParser::NUMBER, 0);
}


size_t SimpleSqlParser::OffsetStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleOffsetStmt;
}

void SimpleSqlParser::OffsetStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOffsetStmt(this);
}

void SimpleSqlParser::OffsetStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOffsetStmt(this);
}

SimpleSqlParser::OffsetStmtContext* SimpleSqlParser::offsetStmt() {
  OffsetStmtContext *_localctx = _tracker.createInstance<OffsetStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, SimpleSqlParser::RuleOffsetStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(SimpleSqlParser::OFFSET);
    setState(205);
    match(SimpleSqlParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderbyStmtContext ------------------------------------------------------------------

SimpleSqlParser::OrderbyStmtContext::OrderbyStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::OrderbyStmtContext::ORDER() {
  return getToken(SimpleSqlParser::ORDER, 0);
}

tree::TerminalNode* SimpleSqlParser::OrderbyStmtContext::BY() {
  return getToken(SimpleSqlParser::BY, 0);
}

SimpleSqlParser::ColumnNameContext* SimpleSqlParser::OrderbyStmtContext::columnName() {
  return getRuleContext<SimpleSqlParser::ColumnNameContext>(0);
}

tree::TerminalNode* SimpleSqlParser::OrderbyStmtContext::ASC() {
  return getToken(SimpleSqlParser::ASC, 0);
}

tree::TerminalNode* SimpleSqlParser::OrderbyStmtContext::DESC() {
  return getToken(SimpleSqlParser::DESC, 0);
}


size_t SimpleSqlParser::OrderbyStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleOrderbyStmt;
}

void SimpleSqlParser::OrderbyStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderbyStmt(this);
}

void SimpleSqlParser::OrderbyStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderbyStmt(this);
}

SimpleSqlParser::OrderbyStmtContext* SimpleSqlParser::orderbyStmt() {
  OrderbyStmtContext *_localctx = _tracker.createInstance<OrderbyStmtContext>(_ctx, getState());
  enterRule(_localctx, 22, SimpleSqlParser::RuleOrderbyStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    match(SimpleSqlParser::ORDER);
    setState(208);
    match(SimpleSqlParser::BY);
    setState(209);
    columnName();
    setState(210);
    _la = _input->LA(1);
    if (!(_la == SimpleSqlParser::ASC

    || _la == SimpleSqlParser::DESC)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupbyStmtContext ------------------------------------------------------------------

SimpleSqlParser::GroupbyStmtContext::GroupbyStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::GroupbyStmtContext::GROUP() {
  return getToken(SimpleSqlParser::GROUP, 0);
}

tree::TerminalNode* SimpleSqlParser::GroupbyStmtContext::BY() {
  return getToken(SimpleSqlParser::BY, 0);
}

SimpleSqlParser::ColumnNameContext* SimpleSqlParser::GroupbyStmtContext::columnName() {
  return getRuleContext<SimpleSqlParser::ColumnNameContext>(0);
}

SimpleSqlParser::HavingStmtContext* SimpleSqlParser::GroupbyStmtContext::havingStmt() {
  return getRuleContext<SimpleSqlParser::HavingStmtContext>(0);
}


size_t SimpleSqlParser::GroupbyStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleGroupbyStmt;
}

void SimpleSqlParser::GroupbyStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupbyStmt(this);
}

void SimpleSqlParser::GroupbyStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupbyStmt(this);
}

SimpleSqlParser::GroupbyStmtContext* SimpleSqlParser::groupbyStmt() {
  GroupbyStmtContext *_localctx = _tracker.createInstance<GroupbyStmtContext>(_ctx, getState());
  enterRule(_localctx, 24, SimpleSqlParser::RuleGroupbyStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(SimpleSqlParser::GROUP);
    setState(213);
    match(SimpleSqlParser::BY);
    setState(214);
    columnName();
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::HAVING) {
      setState(215);
      havingStmt();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HavingStmtContext ------------------------------------------------------------------

SimpleSqlParser::HavingStmtContext::HavingStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::HavingStmtContext::HAVING() {
  return getToken(SimpleSqlParser::HAVING, 0);
}

SimpleSqlParser::ExprContext* SimpleSqlParser::HavingStmtContext::expr() {
  return getRuleContext<SimpleSqlParser::ExprContext>(0);
}


size_t SimpleSqlParser::HavingStmtContext::getRuleIndex() const {
  return SimpleSqlParser::RuleHavingStmt;
}

void SimpleSqlParser::HavingStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHavingStmt(this);
}

void SimpleSqlParser::HavingStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHavingStmt(this);
}

SimpleSqlParser::HavingStmtContext* SimpleSqlParser::havingStmt() {
  HavingStmtContext *_localctx = _tracker.createInstance<HavingStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, SimpleSqlParser::RuleHavingStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(SimpleSqlParser::HAVING);
    setState(219);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableSourcesContext ------------------------------------------------------------------

SimpleSqlParser::TableSourcesContext::TableSourcesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SimpleSqlParser::TableSourceContext *> SimpleSqlParser::TableSourcesContext::tableSource() {
  return getRuleContexts<SimpleSqlParser::TableSourceContext>();
}

SimpleSqlParser::TableSourceContext* SimpleSqlParser::TableSourcesContext::tableSource(size_t i) {
  return getRuleContext<SimpleSqlParser::TableSourceContext>(i);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::TableSourcesContext::COMMA() {
  return getTokens(SimpleSqlParser::COMMA);
}

tree::TerminalNode* SimpleSqlParser::TableSourcesContext::COMMA(size_t i) {
  return getToken(SimpleSqlParser::COMMA, i);
}


size_t SimpleSqlParser::TableSourcesContext::getRuleIndex() const {
  return SimpleSqlParser::RuleTableSources;
}

void SimpleSqlParser::TableSourcesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableSources(this);
}

void SimpleSqlParser::TableSourcesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableSources(this);
}

SimpleSqlParser::TableSourcesContext* SimpleSqlParser::tableSources() {
  TableSourcesContext *_localctx = _tracker.createInstance<TableSourcesContext>(_ctx, getState());
  enterRule(_localctx, 28, SimpleSqlParser::RuleTableSources);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    tableSource();
    setState(226);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::COMMA) {
      setState(222);
      match(SimpleSqlParser::COMMA);
      setState(223);
      tableSource();
      setState(228);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableSourceContext ------------------------------------------------------------------

SimpleSqlParser::TableSourceContext::TableSourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSqlParser::TableSourceItemContext* SimpleSqlParser::TableSourceContext::tableSourceItem() {
  return getRuleContext<SimpleSqlParser::TableSourceItemContext>(0);
}

std::vector<SimpleSqlParser::JoinPartContext *> SimpleSqlParser::TableSourceContext::joinPart() {
  return getRuleContexts<SimpleSqlParser::JoinPartContext>();
}

SimpleSqlParser::JoinPartContext* SimpleSqlParser::TableSourceContext::joinPart(size_t i) {
  return getRuleContext<SimpleSqlParser::JoinPartContext>(i);
}

tree::TerminalNode* SimpleSqlParser::TableSourceContext::LPAREN() {
  return getToken(SimpleSqlParser::LPAREN, 0);
}

tree::TerminalNode* SimpleSqlParser::TableSourceContext::RPAREN() {
  return getToken(SimpleSqlParser::RPAREN, 0);
}


size_t SimpleSqlParser::TableSourceContext::getRuleIndex() const {
  return SimpleSqlParser::RuleTableSource;
}

void SimpleSqlParser::TableSourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableSource(this);
}

void SimpleSqlParser::TableSourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableSource(this);
}

SimpleSqlParser::TableSourceContext* SimpleSqlParser::tableSource() {
  TableSourceContext *_localctx = _tracker.createInstance<TableSourceContext>(_ctx, getState());
  enterRule(_localctx, 30, SimpleSqlParser::RuleTableSource);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(229);
      tableSourceItem();
      setState(233);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SimpleSqlParser::INNER)
        | (1ULL << SimpleSqlParser::LEFT)
        | (1ULL << SimpleSqlParser::RIGHT)
        | (1ULL << SimpleSqlParser::JOIN)
        | (1ULL << SimpleSqlParser::CROSS)
        | (1ULL << SimpleSqlParser::NATURAL))) != 0)) {
        setState(230);
        joinPart();
        setState(235);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(236);
      match(SimpleSqlParser::LPAREN);
      setState(237);
      tableSourceItem();
      setState(241);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SimpleSqlParser::INNER)
        | (1ULL << SimpleSqlParser::LEFT)
        | (1ULL << SimpleSqlParser::RIGHT)
        | (1ULL << SimpleSqlParser::JOIN)
        | (1ULL << SimpleSqlParser::CROSS)
        | (1ULL << SimpleSqlParser::NATURAL))) != 0)) {
        setState(238);
        joinPart();
        setState(243);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(244);
      match(SimpleSqlParser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableSourceItemContext ------------------------------------------------------------------

SimpleSqlParser::TableSourceItemContext::TableSourceItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSqlParser::TableNameContext* SimpleSqlParser::TableSourceItemContext::tableName() {
  return getRuleContext<SimpleSqlParser::TableNameContext>(0);
}

tree::TerminalNode* SimpleSqlParser::TableSourceItemContext::ID() {
  return getToken(SimpleSqlParser::ID, 0);
}

tree::TerminalNode* SimpleSqlParser::TableSourceItemContext::AS() {
  return getToken(SimpleSqlParser::AS, 0);
}

tree::TerminalNode* SimpleSqlParser::TableSourceItemContext::LPAREN() {
  return getToken(SimpleSqlParser::LPAREN, 0);
}

tree::TerminalNode* SimpleSqlParser::TableSourceItemContext::RPAREN() {
  return getToken(SimpleSqlParser::RPAREN, 0);
}

SimpleSqlParser::SelectStmtContext* SimpleSqlParser::TableSourceItemContext::selectStmt() {
  return getRuleContext<SimpleSqlParser::SelectStmtContext>(0);
}

SimpleSqlParser::TableSourcesContext* SimpleSqlParser::TableSourceItemContext::tableSources() {
  return getRuleContext<SimpleSqlParser::TableSourcesContext>(0);
}


size_t SimpleSqlParser::TableSourceItemContext::getRuleIndex() const {
  return SimpleSqlParser::RuleTableSourceItem;
}

void SimpleSqlParser::TableSourceItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableSourceItem(this);
}

void SimpleSqlParser::TableSourceItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableSourceItem(this);
}

SimpleSqlParser::TableSourceItemContext* SimpleSqlParser::tableSourceItem() {
  TableSourceItemContext *_localctx = _tracker.createInstance<TableSourceItemContext>(_ctx, getState());
  enterRule(_localctx, 32, SimpleSqlParser::RuleTableSourceItem);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(248);
      tableName();
      setState(253);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
      case 1: {
        setState(250);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SimpleSqlParser::AS) {
          setState(249);
          match(SimpleSqlParser::AS);
        }
        setState(252);
        dynamic_cast<TableSourceItemContext *>(_localctx)->alias = match(SimpleSqlParser::ID);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(260);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SimpleSqlParser::SELECT: {
          setState(255);
          dynamic_cast<TableSourceItemContext *>(_localctx)->subquery = selectStmt();
          break;
        }

        case SimpleSqlParser::LPAREN: {
          setState(256);
          match(SimpleSqlParser::LPAREN);
          setState(257);
          dynamic_cast<TableSourceItemContext *>(_localctx)->paranthesisSubquery = selectStmt();
          setState(258);
          match(SimpleSqlParser::RPAREN);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(263);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimpleSqlParser::AS) {
        setState(262);
        match(SimpleSqlParser::AS);
      }
      setState(265);
      dynamic_cast<TableSourceItemContext *>(_localctx)->alias = match(SimpleSqlParser::ID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(267);
      match(SimpleSqlParser::LPAREN);
      setState(268);
      tableSources();
      setState(269);
      match(SimpleSqlParser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JoinPartContext ------------------------------------------------------------------

SimpleSqlParser::JoinPartContext::JoinPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::JoinPartContext::JOIN() {
  return getToken(SimpleSqlParser::JOIN, 0);
}

SimpleSqlParser::TableSourceItemContext* SimpleSqlParser::JoinPartContext::tableSourceItem() {
  return getRuleContext<SimpleSqlParser::TableSourceItemContext>(0);
}

tree::TerminalNode* SimpleSqlParser::JoinPartContext::ON() {
  return getToken(SimpleSqlParser::ON, 0);
}

SimpleSqlParser::ExprContext* SimpleSqlParser::JoinPartContext::expr() {
  return getRuleContext<SimpleSqlParser::ExprContext>(0);
}

tree::TerminalNode* SimpleSqlParser::JoinPartContext::INNER() {
  return getToken(SimpleSqlParser::INNER, 0);
}

tree::TerminalNode* SimpleSqlParser::JoinPartContext::CROSS() {
  return getToken(SimpleSqlParser::CROSS, 0);
}

tree::TerminalNode* SimpleSqlParser::JoinPartContext::LEFT() {
  return getToken(SimpleSqlParser::LEFT, 0);
}

tree::TerminalNode* SimpleSqlParser::JoinPartContext::RIGHT() {
  return getToken(SimpleSqlParser::RIGHT, 0);
}

tree::TerminalNode* SimpleSqlParser::JoinPartContext::OUTER() {
  return getToken(SimpleSqlParser::OUTER, 0);
}

tree::TerminalNode* SimpleSqlParser::JoinPartContext::NATURAL() {
  return getToken(SimpleSqlParser::NATURAL, 0);
}


size_t SimpleSqlParser::JoinPartContext::getRuleIndex() const {
  return SimpleSqlParser::RuleJoinPart;
}

void SimpleSqlParser::JoinPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJoinPart(this);
}

void SimpleSqlParser::JoinPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJoinPart(this);
}

SimpleSqlParser::JoinPartContext* SimpleSqlParser::joinPart() {
  JoinPartContext *_localctx = _tracker.createInstance<JoinPartContext>(_ctx, getState());
  enterRule(_localctx, 34, SimpleSqlParser::RuleJoinPart);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(305);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::INNER:
      case SimpleSqlParser::JOIN:
      case SimpleSqlParser::CROSS: {
        enterOuterAlt(_localctx, 1);
        setState(274);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SimpleSqlParser::INNER

        || _la == SimpleSqlParser::CROSS) {
          setState(273);
          _la = _input->LA(1);
          if (!(_la == SimpleSqlParser::INNER

          || _la == SimpleSqlParser::CROSS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(276);
        match(SimpleSqlParser::JOIN);
        setState(277);
        tableSourceItem();
        setState(280);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
        case 1: {
          setState(278);
          match(SimpleSqlParser::ON);
          setState(279);
          expr(0);
          break;
        }

        }
        break;
      }

      case SimpleSqlParser::LEFT:
      case SimpleSqlParser::RIGHT: {
        enterOuterAlt(_localctx, 2);
        setState(282);
        _la = _input->LA(1);
        if (!(_la == SimpleSqlParser::LEFT

        || _la == SimpleSqlParser::RIGHT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(284);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SimpleSqlParser::OUTER) {
          setState(283);
          match(SimpleSqlParser::OUTER);
        }
        setState(286);
        match(SimpleSqlParser::JOIN);
        setState(287);
        tableSourceItem();
        setState(290);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
        case 1: {
          setState(288);
          match(SimpleSqlParser::ON);
          setState(289);
          expr(0);
          break;
        }

        }
        break;
      }

      case SimpleSqlParser::NATURAL: {
        enterOuterAlt(_localctx, 3);
        setState(292);
        match(SimpleSqlParser::NATURAL);
        setState(297);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SimpleSqlParser::LEFT

        || _la == SimpleSqlParser::RIGHT) {
          setState(293);
          _la = _input->LA(1);
          if (!(_la == SimpleSqlParser::LEFT

          || _la == SimpleSqlParser::RIGHT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(295);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SimpleSqlParser::OUTER) {
            setState(294);
            match(SimpleSqlParser::OUTER);
          }
        }
        setState(299);
        match(SimpleSqlParser::JOIN);
        setState(300);
        tableSourceItem();
        setState(303);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
        case 1: {
          setState(301);
          match(SimpleSqlParser::ON);
          setState(302);
          expr(0);
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectColumnContext ------------------------------------------------------------------

SimpleSqlParser::SelectColumnContext::SelectColumnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SimpleSqlParser::ColumnNameContext *> SimpleSqlParser::SelectColumnContext::columnName() {
  return getRuleContexts<SimpleSqlParser::ColumnNameContext>();
}

SimpleSqlParser::ColumnNameContext* SimpleSqlParser::SelectColumnContext::columnName(size_t i) {
  return getRuleContext<SimpleSqlParser::ColumnNameContext>(i);
}

tree::TerminalNode* SimpleSqlParser::SelectColumnContext::AS() {
  return getToken(SimpleSqlParser::AS, 0);
}

SimpleSqlParser::FunctionNameContext* SimpleSqlParser::SelectColumnContext::functionName() {
  return getRuleContext<SimpleSqlParser::FunctionNameContext>(0);
}

tree::TerminalNode* SimpleSqlParser::SelectColumnContext::LPAREN() {
  return getToken(SimpleSqlParser::LPAREN, 0);
}

tree::TerminalNode* SimpleSqlParser::SelectColumnContext::RPAREN() {
  return getToken(SimpleSqlParser::RPAREN, 0);
}

tree::TerminalNode* SimpleSqlParser::SelectColumnContext::ASTERISK() {
  return getToken(SimpleSqlParser::ASTERISK, 0);
}

std::vector<SimpleSqlParser::WhereExprContext *> SimpleSqlParser::SelectColumnContext::whereExpr() {
  return getRuleContexts<SimpleSqlParser::WhereExprContext>();
}

SimpleSqlParser::WhereExprContext* SimpleSqlParser::SelectColumnContext::whereExpr(size_t i) {
  return getRuleContext<SimpleSqlParser::WhereExprContext>(i);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::SelectColumnContext::COMMA() {
  return getTokens(SimpleSqlParser::COMMA);
}

tree::TerminalNode* SimpleSqlParser::SelectColumnContext::COMMA(size_t i) {
  return getToken(SimpleSqlParser::COMMA, i);
}


size_t SimpleSqlParser::SelectColumnContext::getRuleIndex() const {
  return SimpleSqlParser::RuleSelectColumn;
}

void SimpleSqlParser::SelectColumnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectColumn(this);
}

void SimpleSqlParser::SelectColumnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectColumn(this);
}

SimpleSqlParser::SelectColumnContext* SimpleSqlParser::selectColumn() {
  SelectColumnContext *_localctx = _tracker.createInstance<SelectColumnContext>(_ctx, getState());
  enterRule(_localctx, 36, SimpleSqlParser::RuleSelectColumn);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(327);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(307);
      columnName();
      setState(310);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimpleSqlParser::AS) {
        setState(308);
        match(SimpleSqlParser::AS);
        setState(309);
        columnName();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(312);
      functionName();
      setState(313);
      match(SimpleSqlParser::LPAREN);
      setState(323);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SimpleSqlParser::NULL:
        case SimpleSqlParser::TRUE:
        case SimpleSqlParser::FALSE:
        case SimpleSqlParser::LPAREN:
        case SimpleSqlParser::NOT:
        case SimpleSqlParser::DOT:
        case SimpleSqlParser::CASE:
        case SimpleSqlParser::ID:
        case SimpleSqlParser::NUMBER:
        case SimpleSqlParser::STRING:
        case SimpleSqlParser::DQUOTA_STRING:
        case SimpleSqlParser::SQUOTA_STRING: {
          setState(314);
          whereExpr(0);
          setState(319);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SimpleSqlParser::COMMA) {
            setState(315);
            match(SimpleSqlParser::COMMA);
            setState(316);
            whereExpr(0);
            setState(321);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          break;
        }

        case SimpleSqlParser::ASTERISK: {
          setState(322);
          match(SimpleSqlParser::ASTERISK);
          break;
        }

        case SimpleSqlParser::RPAREN: {
          break;
        }

      default:
        break;
      }
      setState(325);
      match(SimpleSqlParser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InsertStmtValueContext ------------------------------------------------------------------

SimpleSqlParser::InsertStmtValueContext::InsertStmtValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSqlParser::SelectStmtContext* SimpleSqlParser::InsertStmtValueContext::selectStmt() {
  return getRuleContext<SimpleSqlParser::SelectStmtContext>(0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::InsertStmtValueContext::LPAREN() {
  return getTokens(SimpleSqlParser::LPAREN);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtValueContext::LPAREN(size_t i) {
  return getToken(SimpleSqlParser::LPAREN, i);
}

std::vector<SimpleSqlParser::ExprWithDefaultsContext *> SimpleSqlParser::InsertStmtValueContext::exprWithDefaults() {
  return getRuleContexts<SimpleSqlParser::ExprWithDefaultsContext>();
}

SimpleSqlParser::ExprWithDefaultsContext* SimpleSqlParser::InsertStmtValueContext::exprWithDefaults(size_t i) {
  return getRuleContext<SimpleSqlParser::ExprWithDefaultsContext>(i);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::InsertStmtValueContext::RPAREN() {
  return getTokens(SimpleSqlParser::RPAREN);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtValueContext::RPAREN(size_t i) {
  return getToken(SimpleSqlParser::RPAREN, i);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtValueContext::VALUES() {
  return getToken(SimpleSqlParser::VALUES, 0);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtValueContext::VALUE() {
  return getToken(SimpleSqlParser::VALUE, 0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::InsertStmtValueContext::COMMA() {
  return getTokens(SimpleSqlParser::COMMA);
}

tree::TerminalNode* SimpleSqlParser::InsertStmtValueContext::COMMA(size_t i) {
  return getToken(SimpleSqlParser::COMMA, i);
}


size_t SimpleSqlParser::InsertStmtValueContext::getRuleIndex() const {
  return SimpleSqlParser::RuleInsertStmtValue;
}

void SimpleSqlParser::InsertStmtValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsertStmtValue(this);
}

void SimpleSqlParser::InsertStmtValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsertStmtValue(this);
}

SimpleSqlParser::InsertStmtValueContext* SimpleSqlParser::insertStmtValue() {
  InsertStmtValueContext *_localctx = _tracker.createInstance<InsertStmtValueContext>(_ctx, getState());
  enterRule(_localctx, 38, SimpleSqlParser::RuleInsertStmtValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(344);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::SELECT: {
        enterOuterAlt(_localctx, 1);
        setState(329);
        selectStmt();
        break;
      }

      case SimpleSqlParser::VALUE:
      case SimpleSqlParser::VALUES: {
        enterOuterAlt(_localctx, 2);
        setState(330);
        dynamic_cast<InsertStmtValueContext *>(_localctx)->insertFormat = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == SimpleSqlParser::VALUE

        || _la == SimpleSqlParser::VALUES)) {
          dynamic_cast<InsertStmtValueContext *>(_localctx)->insertFormat = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(331);
        match(SimpleSqlParser::LPAREN);
        setState(332);
        exprWithDefaults();
        setState(333);
        match(SimpleSqlParser::RPAREN);
        setState(341);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SimpleSqlParser::COMMA) {
          setState(334);
          match(SimpleSqlParser::COMMA);
          setState(335);
          match(SimpleSqlParser::LPAREN);
          setState(336);
          exprWithDefaults();
          setState(337);
          match(SimpleSqlParser::RPAREN);
          setState(343);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprWithDefaultsContext ------------------------------------------------------------------

SimpleSqlParser::ExprWithDefaultsContext::ExprWithDefaultsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SimpleSqlParser::ExprOrDefaultContext *> SimpleSqlParser::ExprWithDefaultsContext::exprOrDefault() {
  return getRuleContexts<SimpleSqlParser::ExprOrDefaultContext>();
}

SimpleSqlParser::ExprOrDefaultContext* SimpleSqlParser::ExprWithDefaultsContext::exprOrDefault(size_t i) {
  return getRuleContext<SimpleSqlParser::ExprOrDefaultContext>(i);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::ExprWithDefaultsContext::COMMA() {
  return getTokens(SimpleSqlParser::COMMA);
}

tree::TerminalNode* SimpleSqlParser::ExprWithDefaultsContext::COMMA(size_t i) {
  return getToken(SimpleSqlParser::COMMA, i);
}


size_t SimpleSqlParser::ExprWithDefaultsContext::getRuleIndex() const {
  return SimpleSqlParser::RuleExprWithDefaults;
}

void SimpleSqlParser::ExprWithDefaultsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprWithDefaults(this);
}

void SimpleSqlParser::ExprWithDefaultsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprWithDefaults(this);
}

SimpleSqlParser::ExprWithDefaultsContext* SimpleSqlParser::exprWithDefaults() {
  ExprWithDefaultsContext *_localctx = _tracker.createInstance<ExprWithDefaultsContext>(_ctx, getState());
  enterRule(_localctx, 40, SimpleSqlParser::RuleExprWithDefaults);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    exprOrDefault();
    setState(351);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::COMMA) {
      setState(347);
      match(SimpleSqlParser::COMMA);
      setState(348);
      exprOrDefault();
      setState(353);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdatedElementContext ------------------------------------------------------------------

SimpleSqlParser::UpdatedElementContext::UpdatedElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSqlParser::ColumnNameContext* SimpleSqlParser::UpdatedElementContext::columnName() {
  return getRuleContext<SimpleSqlParser::ColumnNameContext>(0);
}

tree::TerminalNode* SimpleSqlParser::UpdatedElementContext::EQ() {
  return getToken(SimpleSqlParser::EQ, 0);
}

SimpleSqlParser::ExprContext* SimpleSqlParser::UpdatedElementContext::expr() {
  return getRuleContext<SimpleSqlParser::ExprContext>(0);
}

tree::TerminalNode* SimpleSqlParser::UpdatedElementContext::DEFAULT() {
  return getToken(SimpleSqlParser::DEFAULT, 0);
}


size_t SimpleSqlParser::UpdatedElementContext::getRuleIndex() const {
  return SimpleSqlParser::RuleUpdatedElement;
}

void SimpleSqlParser::UpdatedElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdatedElement(this);
}

void SimpleSqlParser::UpdatedElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdatedElement(this);
}

SimpleSqlParser::UpdatedElementContext* SimpleSqlParser::updatedElement() {
  UpdatedElementContext *_localctx = _tracker.createInstance<UpdatedElementContext>(_ctx, getState());
  enterRule(_localctx, 42, SimpleSqlParser::RuleUpdatedElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(354);
    columnName();
    setState(355);
    match(SimpleSqlParser::EQ);
    setState(358);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::NULL:
      case SimpleSqlParser::TRUE:
      case SimpleSqlParser::FALSE:
      case SimpleSqlParser::LPAREN:
      case SimpleSqlParser::NOT:
      case SimpleSqlParser::DOT:
      case SimpleSqlParser::CASE:
      case SimpleSqlParser::ID:
      case SimpleSqlParser::NUMBER:
      case SimpleSqlParser::STRING:
      case SimpleSqlParser::DQUOTA_STRING:
      case SimpleSqlParser::SQUOTA_STRING: {
        setState(356);
        expr(0);
        break;
      }

      case SimpleSqlParser::DEFAULT: {
        setState(357);
        match(SimpleSqlParser::DEFAULT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereExprContext ------------------------------------------------------------------

SimpleSqlParser::WhereExprContext::WhereExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::NOT() {
  return getToken(SimpleSqlParser::NOT, 0);
}

std::vector<SimpleSqlParser::WhereExprContext *> SimpleSqlParser::WhereExprContext::whereExpr() {
  return getRuleContexts<SimpleSqlParser::WhereExprContext>();
}

SimpleSqlParser::WhereExprContext* SimpleSqlParser::WhereExprContext::whereExpr(size_t i) {
  return getRuleContext<SimpleSqlParser::WhereExprContext>(i);
}

SimpleSqlParser::FunctionNameContext* SimpleSqlParser::WhereExprContext::functionName() {
  return getRuleContext<SimpleSqlParser::FunctionNameContext>(0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::LPAREN() {
  return getToken(SimpleSqlParser::LPAREN, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::RPAREN() {
  return getToken(SimpleSqlParser::RPAREN, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::ASTERISK() {
  return getToken(SimpleSqlParser::ASTERISK, 0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::WhereExprContext::COMMA() {
  return getTokens(SimpleSqlParser::COMMA);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::COMMA(size_t i) {
  return getToken(SimpleSqlParser::COMMA, i);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::CASE() {
  return getToken(SimpleSqlParser::CASE, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::END() {
  return getToken(SimpleSqlParser::END, 0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::WhereExprContext::WHEN() {
  return getTokens(SimpleSqlParser::WHEN);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::WHEN(size_t i) {
  return getToken(SimpleSqlParser::WHEN, i);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::WhereExprContext::THEN() {
  return getTokens(SimpleSqlParser::THEN);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::THEN(size_t i) {
  return getToken(SimpleSqlParser::THEN, i);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::ELSE() {
  return getToken(SimpleSqlParser::ELSE, 0);
}

SimpleSqlParser::LiteralValueContext* SimpleSqlParser::WhereExprContext::literalValue() {
  return getRuleContext<SimpleSqlParser::LiteralValueContext>(0);
}

SimpleSqlParser::FieldNameContext* SimpleSqlParser::WhereExprContext::fieldName() {
  return getRuleContext<SimpleSqlParser::FieldNameContext>(0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::DIVIDE() {
  return getToken(SimpleSqlParser::DIVIDE, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::MOD() {
  return getToken(SimpleSqlParser::MOD, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::PLUS() {
  return getToken(SimpleSqlParser::PLUS, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::MINUS() {
  return getToken(SimpleSqlParser::MINUS, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::LT() {
  return getToken(SimpleSqlParser::LT, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::LTE() {
  return getToken(SimpleSqlParser::LTE, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::GT() {
  return getToken(SimpleSqlParser::GT, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::GTE() {
  return getToken(SimpleSqlParser::GTE, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::EQ() {
  return getToken(SimpleSqlParser::EQ, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::NOT_EQ() {
  return getToken(SimpleSqlParser::NOT_EQ, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::MATCH() {
  return getToken(SimpleSqlParser::MATCH, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::NOT_MATCH() {
  return getToken(SimpleSqlParser::NOT_MATCH, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::LIKE() {
  return getToken(SimpleSqlParser::LIKE, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::REGEXP() {
  return getToken(SimpleSqlParser::REGEXP, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::AND() {
  return getToken(SimpleSqlParser::AND, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::OR() {
  return getToken(SimpleSqlParser::OR, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::BETWEEN() {
  return getToken(SimpleSqlParser::BETWEEN, 0);
}

tree::TerminalNode* SimpleSqlParser::WhereExprContext::IN() {
  return getToken(SimpleSqlParser::IN, 0);
}

SimpleSqlParser::SelectStmtContext* SimpleSqlParser::WhereExprContext::selectStmt() {
  return getRuleContext<SimpleSqlParser::SelectStmtContext>(0);
}


size_t SimpleSqlParser::WhereExprContext::getRuleIndex() const {
  return SimpleSqlParser::RuleWhereExpr;
}

void SimpleSqlParser::WhereExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhereExpr(this);
}

void SimpleSqlParser::WhereExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhereExpr(this);
}


SimpleSqlParser::WhereExprContext* SimpleSqlParser::whereExpr() {
   return whereExpr(0);
}

SimpleSqlParser::WhereExprContext* SimpleSqlParser::whereExpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SimpleSqlParser::WhereExprContext *_localctx = _tracker.createInstance<WhereExprContext>(_ctx, parentState);
  SimpleSqlParser::WhereExprContext *previousContext = _localctx;
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, SimpleSqlParser::RuleWhereExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(403);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      setState(361);
      match(SimpleSqlParser::NOT);
      setState(362);
      whereExpr(8);
      break;
    }

    case 2: {
      setState(363);
      functionName();
      setState(364);
      match(SimpleSqlParser::LPAREN);
      setState(374);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SimpleSqlParser::NULL:
        case SimpleSqlParser::TRUE:
        case SimpleSqlParser::FALSE:
        case SimpleSqlParser::LPAREN:
        case SimpleSqlParser::NOT:
        case SimpleSqlParser::DOT:
        case SimpleSqlParser::CASE:
        case SimpleSqlParser::ID:
        case SimpleSqlParser::NUMBER:
        case SimpleSqlParser::STRING:
        case SimpleSqlParser::DQUOTA_STRING:
        case SimpleSqlParser::SQUOTA_STRING: {
          setState(365);
          whereExpr(0);
          setState(370);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SimpleSqlParser::COMMA) {
            setState(366);
            match(SimpleSqlParser::COMMA);
            setState(367);
            whereExpr(0);
            setState(372);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          break;
        }

        case SimpleSqlParser::ASTERISK: {
          setState(373);
          match(SimpleSqlParser::ASTERISK);
          break;
        }

        case SimpleSqlParser::RPAREN: {
          break;
        }

      default:
        break;
      }
      setState(376);
      match(SimpleSqlParser::RPAREN);
      break;
    }

    case 3: {
      setState(378);
      match(SimpleSqlParser::LPAREN);
      setState(379);
      whereExpr(0);
      setState(380);
      match(SimpleSqlParser::RPAREN);
      break;
    }

    case 4: {
      setState(382);
      match(SimpleSqlParser::CASE);
      setState(384);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SimpleSqlParser::NULL)
        | (1ULL << SimpleSqlParser::TRUE)
        | (1ULL << SimpleSqlParser::FALSE)
        | (1ULL << SimpleSqlParser::LPAREN)
        | (1ULL << SimpleSqlParser::NOT)
        | (1ULL << SimpleSqlParser::DOT)
        | (1ULL << SimpleSqlParser::CASE))) != 0) || ((((_la - 77) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 77)) & ((1ULL << (SimpleSqlParser::ID - 77))
        | (1ULL << (SimpleSqlParser::NUMBER - 77))
        | (1ULL << (SimpleSqlParser::STRING - 77))
        | (1ULL << (SimpleSqlParser::DQUOTA_STRING - 77))
        | (1ULL << (SimpleSqlParser::SQUOTA_STRING - 77)))) != 0)) {
        setState(383);
        whereExpr(0);
      }
      setState(391); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(386);
        match(SimpleSqlParser::WHEN);
        setState(387);
        whereExpr(0);
        setState(388);
        match(SimpleSqlParser::THEN);
        setState(389);
        whereExpr(0);
        setState(393); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == SimpleSqlParser::WHEN);
      setState(397);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimpleSqlParser::ELSE) {
        setState(395);
        match(SimpleSqlParser::ELSE);
        setState(396);
        whereExpr(0);
      }
      setState(399);
      match(SimpleSqlParser::END);
      break;
    }

    case 5: {
      setState(401);
      literalValue();
      break;
    }

    case 6: {
      setState(402);
      fieldName();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(460);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(458);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<WhereExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleWhereExpr);
          setState(405);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(406);
          dynamic_cast<WhereExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SimpleSqlParser::DIVIDE)
            | (1ULL << SimpleSqlParser::MOD)
            | (1ULL << SimpleSqlParser::PLUS)
            | (1ULL << SimpleSqlParser::MINUS)
            | (1ULL << SimpleSqlParser::ASTERISK))) != 0))) {
            dynamic_cast<WhereExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(407);
          whereExpr(14);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<WhereExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleWhereExpr);
          setState(408);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(409);
          dynamic_cast<WhereExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SimpleSqlParser::LT)
            | (1ULL << SimpleSqlParser::GT)
            | (1ULL << SimpleSqlParser::LTE)
            | (1ULL << SimpleSqlParser::GTE))) != 0))) {
            dynamic_cast<WhereExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(410);
          whereExpr(13);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<WhereExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleWhereExpr);
          setState(411);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(412);
          dynamic_cast<WhereExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SimpleSqlParser::MATCH)
            | (1ULL << SimpleSqlParser::NOT_MATCH)
            | (1ULL << SimpleSqlParser::EQ)
            | (1ULL << SimpleSqlParser::NOT_EQ))) != 0))) {
            dynamic_cast<WhereExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(413);
          whereExpr(12);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<WhereExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleWhereExpr);
          setState(414);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(416);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SimpleSqlParser::NOT) {
            setState(415);
            match(SimpleSqlParser::NOT);
          }
          setState(418);
          match(SimpleSqlParser::LIKE);
          setState(419);
          whereExpr(11);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<WhereExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleWhereExpr);
          setState(420);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(422);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SimpleSqlParser::NOT) {
            setState(421);
            match(SimpleSqlParser::NOT);
          }
          setState(424);
          match(SimpleSqlParser::REGEXP);
          setState(425);
          whereExpr(10);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<WhereExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleWhereExpr);
          setState(426);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(427);
          dynamic_cast<WhereExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SimpleSqlParser::AND

          || _la == SimpleSqlParser::OR)) {
            dynamic_cast<WhereExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(428);
          whereExpr(8);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<WhereExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleWhereExpr);
          setState(429);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(431);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SimpleSqlParser::NOT) {
            setState(430);
            match(SimpleSqlParser::NOT);
          }
          setState(433);
          match(SimpleSqlParser::BETWEEN);
          setState(434);
          whereExpr(0);
          setState(435);
          match(SimpleSqlParser::AND);
          setState(436);
          whereExpr(5);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<WhereExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleWhereExpr);
          setState(438);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(440);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SimpleSqlParser::NOT) {
            setState(439);
            match(SimpleSqlParser::NOT);
          }
          setState(442);
          match(SimpleSqlParser::IN);
          setState(443);
          match(SimpleSqlParser::LPAREN);
          setState(455);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SimpleSqlParser::NULL:
            case SimpleSqlParser::TRUE:
            case SimpleSqlParser::FALSE:
            case SimpleSqlParser::RPAREN:
            case SimpleSqlParser::LPAREN:
            case SimpleSqlParser::NOT:
            case SimpleSqlParser::DOT:
            case SimpleSqlParser::CASE:
            case SimpleSqlParser::ID:
            case SimpleSqlParser::NUMBER:
            case SimpleSqlParser::STRING:
            case SimpleSqlParser::DQUOTA_STRING:
            case SimpleSqlParser::SQUOTA_STRING: {
              setState(452);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if ((((_la & ~ 0x3fULL) == 0) &&
                ((1ULL << _la) & ((1ULL << SimpleSqlParser::NULL)
                | (1ULL << SimpleSqlParser::TRUE)
                | (1ULL << SimpleSqlParser::FALSE)
                | (1ULL << SimpleSqlParser::LPAREN)
                | (1ULL << SimpleSqlParser::NOT)
                | (1ULL << SimpleSqlParser::DOT)
                | (1ULL << SimpleSqlParser::CASE))) != 0) || ((((_la - 77) & ~ 0x3fULL) == 0) &&
                ((1ULL << (_la - 77)) & ((1ULL << (SimpleSqlParser::ID - 77))
                | (1ULL << (SimpleSqlParser::NUMBER - 77))
                | (1ULL << (SimpleSqlParser::STRING - 77))
                | (1ULL << (SimpleSqlParser::DQUOTA_STRING - 77))
                | (1ULL << (SimpleSqlParser::SQUOTA_STRING - 77)))) != 0)) {
                setState(444);
                dynamic_cast<WhereExprContext *>(_localctx)->inElement = whereExpr(0);
                setState(449);
                _errHandler->sync(this);
                _la = _input->LA(1);
                while (_la == SimpleSqlParser::COMMA) {
                  setState(445);
                  match(SimpleSqlParser::COMMA);
                  setState(446);
                  dynamic_cast<WhereExprContext *>(_localctx)->whereExprContext = whereExpr(0);
                  dynamic_cast<WhereExprContext *>(_localctx)->inElements.push_back(dynamic_cast<WhereExprContext *>(_localctx)->whereExprContext);
                  setState(451);
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                }
              }
              break;
            }

            case SimpleSqlParser::SELECT: {
              setState(454);
              selectStmt();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(457);
          match(SimpleSqlParser::RPAREN);
          break;
        }

        } 
      }
      setState(462);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

SimpleSqlParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::ExprContext::NOT() {
  return getToken(SimpleSqlParser::NOT, 0);
}

std::vector<SimpleSqlParser::ExprContext *> SimpleSqlParser::ExprContext::expr() {
  return getRuleContexts<SimpleSqlParser::ExprContext>();
}

SimpleSqlParser::ExprContext* SimpleSqlParser::ExprContext::expr(size_t i) {
  return getRuleContext<SimpleSqlParser::ExprContext>(i);
}

SimpleSqlParser::FunctionNameContext* SimpleSqlParser::ExprContext::functionName() {
  return getRuleContext<SimpleSqlParser::FunctionNameContext>(0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::LPAREN() {
  return getToken(SimpleSqlParser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::ExprContext::RPAREN() {
  return getTokens(SimpleSqlParser::RPAREN);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::RPAREN(size_t i) {
  return getToken(SimpleSqlParser::RPAREN, i);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::ASTERISK() {
  return getToken(SimpleSqlParser::ASTERISK, 0);
}

std::vector<SimpleSqlParser::WhereExprContext *> SimpleSqlParser::ExprContext::whereExpr() {
  return getRuleContexts<SimpleSqlParser::WhereExprContext>();
}

SimpleSqlParser::WhereExprContext* SimpleSqlParser::ExprContext::whereExpr(size_t i) {
  return getRuleContext<SimpleSqlParser::WhereExprContext>(i);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::ExprContext::COMMA() {
  return getTokens(SimpleSqlParser::COMMA);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::COMMA(size_t i) {
  return getToken(SimpleSqlParser::COMMA, i);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::CASE() {
  return getToken(SimpleSqlParser::CASE, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::END() {
  return getToken(SimpleSqlParser::END, 0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::ExprContext::WHEN() {
  return getTokens(SimpleSqlParser::WHEN);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::WHEN(size_t i) {
  return getToken(SimpleSqlParser::WHEN, i);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::ExprContext::THEN() {
  return getTokens(SimpleSqlParser::THEN);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::THEN(size_t i) {
  return getToken(SimpleSqlParser::THEN, i);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::ELSE() {
  return getToken(SimpleSqlParser::ELSE, 0);
}

SimpleSqlParser::LiteralValueContext* SimpleSqlParser::ExprContext::literalValue() {
  return getRuleContext<SimpleSqlParser::LiteralValueContext>(0);
}

SimpleSqlParser::FieldNameContext* SimpleSqlParser::ExprContext::fieldName() {
  return getRuleContext<SimpleSqlParser::FieldNameContext>(0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::DIVIDE() {
  return getToken(SimpleSqlParser::DIVIDE, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::MOD() {
  return getToken(SimpleSqlParser::MOD, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::PLUS() {
  return getToken(SimpleSqlParser::PLUS, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::MINUS() {
  return getToken(SimpleSqlParser::MINUS, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::LT() {
  return getToken(SimpleSqlParser::LT, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::LTE() {
  return getToken(SimpleSqlParser::LTE, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::GT() {
  return getToken(SimpleSqlParser::GT, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::GTE() {
  return getToken(SimpleSqlParser::GTE, 0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::ExprContext::EQ() {
  return getTokens(SimpleSqlParser::EQ);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::EQ(size_t i) {
  return getToken(SimpleSqlParser::EQ, i);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::NOT_EQ() {
  return getToken(SimpleSqlParser::NOT_EQ, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::MATCH() {
  return getToken(SimpleSqlParser::MATCH, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::NOT_MATCH() {
  return getToken(SimpleSqlParser::NOT_MATCH, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::LIKE() {
  return getToken(SimpleSqlParser::LIKE, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::REGEXP() {
  return getToken(SimpleSqlParser::REGEXP, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::AND() {
  return getToken(SimpleSqlParser::AND, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::OR() {
  return getToken(SimpleSqlParser::OR, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::BETWEEN() {
  return getToken(SimpleSqlParser::BETWEEN, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::IS() {
  return getToken(SimpleSqlParser::IS, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::NULL() {
  return getToken(SimpleSqlParser::NULL, 0);
}

tree::TerminalNode* SimpleSqlParser::ExprContext::IN() {
  return getToken(SimpleSqlParser::IN, 0);
}


size_t SimpleSqlParser::ExprContext::getRuleIndex() const {
  return SimpleSqlParser::RuleExpr;
}

void SimpleSqlParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void SimpleSqlParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


SimpleSqlParser::ExprContext* SimpleSqlParser::expr() {
   return expr(0);
}

SimpleSqlParser::ExprContext* SimpleSqlParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SimpleSqlParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  SimpleSqlParser::ExprContext *previousContext = _localctx;
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, SimpleSqlParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(516);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      setState(464);
      match(SimpleSqlParser::NOT);
      setState(465);
      expr(10);
      break;
    }

    case 2: {
      setState(466);
      functionName();
      setState(467);
      match(SimpleSqlParser::LPAREN);
      setState(477);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SimpleSqlParser::NULL:
        case SimpleSqlParser::TRUE:
        case SimpleSqlParser::FALSE:
        case SimpleSqlParser::LPAREN:
        case SimpleSqlParser::NOT:
        case SimpleSqlParser::DOT:
        case SimpleSqlParser::CASE:
        case SimpleSqlParser::ID:
        case SimpleSqlParser::NUMBER:
        case SimpleSqlParser::STRING:
        case SimpleSqlParser::DQUOTA_STRING:
        case SimpleSqlParser::SQUOTA_STRING: {
          setState(468);
          whereExpr(0);
          setState(473);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SimpleSqlParser::COMMA) {
            setState(469);
            match(SimpleSqlParser::COMMA);
            setState(470);
            whereExpr(0);
            setState(475);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          break;
        }

        case SimpleSqlParser::ASTERISK: {
          setState(476);
          match(SimpleSqlParser::ASTERISK);
          break;
        }

        case SimpleSqlParser::RPAREN: {
          break;
        }

      default:
        break;
      }
      setState(479);
      match(SimpleSqlParser::RPAREN);
      break;
    }

    case 3: {
      setState(481);
      match(SimpleSqlParser::LPAREN);
      setState(482);
      expr(0);
      setState(483);
      match(SimpleSqlParser::RPAREN);
      break;
    }

    case 4: {
      setState(485);
      match(SimpleSqlParser::LPAREN);
      setState(486);
      expr(0);
      setState(487);
      match(SimpleSqlParser::RPAREN);
      setState(488);
      match(SimpleSqlParser::RPAREN);
      notifyErrorListeners("too many parentheses");
      break;
    }

    case 5: {
      setState(491);
      match(SimpleSqlParser::LPAREN);
      setState(492);
      expr(5);
      notifyErrorListeners("missing closing ')'");
      break;
    }

    case 6: {
      setState(495);
      match(SimpleSqlParser::CASE);
      setState(497);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SimpleSqlParser::NULL)
        | (1ULL << SimpleSqlParser::TRUE)
        | (1ULL << SimpleSqlParser::FALSE)
        | (1ULL << SimpleSqlParser::LPAREN)
        | (1ULL << SimpleSqlParser::NOT)
        | (1ULL << SimpleSqlParser::DOT)
        | (1ULL << SimpleSqlParser::CASE))) != 0) || ((((_la - 77) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 77)) & ((1ULL << (SimpleSqlParser::ID - 77))
        | (1ULL << (SimpleSqlParser::NUMBER - 77))
        | (1ULL << (SimpleSqlParser::STRING - 77))
        | (1ULL << (SimpleSqlParser::DQUOTA_STRING - 77))
        | (1ULL << (SimpleSqlParser::SQUOTA_STRING - 77)))) != 0)) {
        setState(496);
        expr(0);
      }
      setState(504); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(499);
        match(SimpleSqlParser::WHEN);
        setState(500);
        expr(0);
        setState(501);
        match(SimpleSqlParser::THEN);
        setState(502);
        expr(0);
        setState(506); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == SimpleSqlParser::WHEN);
      setState(510);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimpleSqlParser::ELSE) {
        setState(508);
        match(SimpleSqlParser::ELSE);
        setState(509);
        expr(0);
      }
      setState(512);
      match(SimpleSqlParser::END);
      break;
    }

    case 7: {
      setState(514);
      literalValue();
      break;
    }

    case 8: {
      setState(515);
      fieldName();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(584);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(582);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(518);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(519);
          dynamic_cast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SimpleSqlParser::DIVIDE)
            | (1ULL << SimpleSqlParser::MOD)
            | (1ULL << SimpleSqlParser::PLUS)
            | (1ULL << SimpleSqlParser::MINUS)
            | (1ULL << SimpleSqlParser::ASTERISK))) != 0))) {
            dynamic_cast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(520);
          expr(17);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(521);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(522);
          dynamic_cast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SimpleSqlParser::LT)
            | (1ULL << SimpleSqlParser::GT)
            | (1ULL << SimpleSqlParser::LTE)
            | (1ULL << SimpleSqlParser::GTE))) != 0))) {
            dynamic_cast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(523);
          expr(16);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(524);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(525);
          dynamic_cast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SimpleSqlParser::MATCH)
            | (1ULL << SimpleSqlParser::NOT_MATCH)
            | (1ULL << SimpleSqlParser::EQ)
            | (1ULL << SimpleSqlParser::NOT_EQ))) != 0))) {
            dynamic_cast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(526);
          expr(15);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(527);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(529);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SimpleSqlParser::NOT) {
            setState(528);
            match(SimpleSqlParser::NOT);
          }
          setState(531);
          match(SimpleSqlParser::LIKE);
          setState(532);
          expr(14);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(533);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(535);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SimpleSqlParser::NOT) {
            setState(534);
            match(SimpleSqlParser::NOT);
          }
          setState(537);
          match(SimpleSqlParser::REGEXP);
          setState(538);
          expr(13);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(539);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(540);
          match(SimpleSqlParser::EQ);
          setState(541);
          match(SimpleSqlParser::EQ);
          setState(542);
          expr(12);
          notifyErrorListeners("operator == does not exist");
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(545);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(546);
          dynamic_cast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SimpleSqlParser::AND

          || _la == SimpleSqlParser::OR)) {
            dynamic_cast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(547);
          expr(10);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(548);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(550);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SimpleSqlParser::NOT) {
            setState(549);
            match(SimpleSqlParser::NOT);
          }
          setState(552);
          match(SimpleSqlParser::BETWEEN);
          setState(553);
          expr(0);
          setState(554);
          match(SimpleSqlParser::AND);
          setState(555);
          expr(5);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(557);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(563);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
          case 1: {
            setState(558);
            match(SimpleSqlParser::IS);
            setState(559);
            match(SimpleSqlParser::NULL);
            break;
          }

          case 2: {
            setState(560);
            match(SimpleSqlParser::IS);
            setState(561);
            match(SimpleSqlParser::NOT);
            setState(562);
            match(SimpleSqlParser::NULL);
            break;
          }

          }
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(565);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(567);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SimpleSqlParser::NOT) {
            setState(566);
            match(SimpleSqlParser::NOT);
          }
          setState(569);
          match(SimpleSqlParser::IN);
          setState(570);
          match(SimpleSqlParser::LPAREN);
          setState(579);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SimpleSqlParser::NULL)
            | (1ULL << SimpleSqlParser::TRUE)
            | (1ULL << SimpleSqlParser::FALSE)
            | (1ULL << SimpleSqlParser::LPAREN)
            | (1ULL << SimpleSqlParser::NOT)
            | (1ULL << SimpleSqlParser::DOT)
            | (1ULL << SimpleSqlParser::CASE))) != 0) || ((((_la - 77) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 77)) & ((1ULL << (SimpleSqlParser::ID - 77))
            | (1ULL << (SimpleSqlParser::NUMBER - 77))
            | (1ULL << (SimpleSqlParser::STRING - 77))
            | (1ULL << (SimpleSqlParser::DQUOTA_STRING - 77))
            | (1ULL << (SimpleSqlParser::SQUOTA_STRING - 77)))) != 0)) {
            setState(571);
            expr(0);
            setState(576);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == SimpleSqlParser::COMMA) {
              setState(572);
              match(SimpleSqlParser::COMMA);
              setState(573);
              expr(0);
              setState(578);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(581);
          match(SimpleSqlParser::RPAREN);
          break;
        }

        } 
      }
      setState(586);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IdListContext ------------------------------------------------------------------

SimpleSqlParser::IdListContext::IdListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimpleSqlParser::IdListContext::ID() {
  return getTokens(SimpleSqlParser::ID);
}

tree::TerminalNode* SimpleSqlParser::IdListContext::ID(size_t i) {
  return getToken(SimpleSqlParser::ID, i);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::IdListContext::COMMA() {
  return getTokens(SimpleSqlParser::COMMA);
}

tree::TerminalNode* SimpleSqlParser::IdListContext::COMMA(size_t i) {
  return getToken(SimpleSqlParser::COMMA, i);
}


size_t SimpleSqlParser::IdListContext::getRuleIndex() const {
  return SimpleSqlParser::RuleIdList;
}

void SimpleSqlParser::IdListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdList(this);
}

void SimpleSqlParser::IdListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdList(this);
}

SimpleSqlParser::IdListContext* SimpleSqlParser::idList() {
  IdListContext *_localctx = _tracker.createInstance<IdListContext>(_ctx, getState());
  enterRule(_localctx, 48, SimpleSqlParser::RuleIdList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(587);
    match(SimpleSqlParser::ID);
    setState(592);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::COMMA) {
      setState(588);
      match(SimpleSqlParser::COMMA);
      setState(589);
      match(SimpleSqlParser::ID);
      setState(594);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprOrDefaultContext ------------------------------------------------------------------

SimpleSqlParser::ExprOrDefaultContext::ExprOrDefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSqlParser::LiteralValueContext* SimpleSqlParser::ExprOrDefaultContext::literalValue() {
  return getRuleContext<SimpleSqlParser::LiteralValueContext>(0);
}

tree::TerminalNode* SimpleSqlParser::ExprOrDefaultContext::DEFAULT() {
  return getToken(SimpleSqlParser::DEFAULT, 0);
}


size_t SimpleSqlParser::ExprOrDefaultContext::getRuleIndex() const {
  return SimpleSqlParser::RuleExprOrDefault;
}

void SimpleSqlParser::ExprOrDefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprOrDefault(this);
}

void SimpleSqlParser::ExprOrDefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprOrDefault(this);
}

SimpleSqlParser::ExprOrDefaultContext* SimpleSqlParser::exprOrDefault() {
  ExprOrDefaultContext *_localctx = _tracker.createInstance<ExprOrDefaultContext>(_ctx, getState());
  enterRule(_localctx, 50, SimpleSqlParser::RuleExprOrDefault);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(597);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::NULL:
      case SimpleSqlParser::TRUE:
      case SimpleSqlParser::FALSE:
      case SimpleSqlParser::NUMBER:
      case SimpleSqlParser::STRING:
      case SimpleSqlParser::DQUOTA_STRING:
      case SimpleSqlParser::SQUOTA_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(595);
        literalValue();
        break;
      }

      case SimpleSqlParser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(596);
        match(SimpleSqlParser::DEFAULT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableNameContext ------------------------------------------------------------------

SimpleSqlParser::TableNameContext::TableNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::TableNameContext::ID() {
  return getToken(SimpleSqlParser::ID, 0);
}


size_t SimpleSqlParser::TableNameContext::getRuleIndex() const {
  return SimpleSqlParser::RuleTableName;
}

void SimpleSqlParser::TableNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableName(this);
}

void SimpleSqlParser::TableNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableName(this);
}

SimpleSqlParser::TableNameContext* SimpleSqlParser::tableName() {
  TableNameContext *_localctx = _tracker.createInstance<TableNameContext>(_ctx, getState());
  enterRule(_localctx, 52, SimpleSqlParser::RuleTableName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    match(SimpleSqlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColumnNameContext ------------------------------------------------------------------

SimpleSqlParser::ColumnNameContext::ColumnNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::ColumnNameContext::ID() {
  return getToken(SimpleSqlParser::ID, 0);
}


size_t SimpleSqlParser::ColumnNameContext::getRuleIndex() const {
  return SimpleSqlParser::RuleColumnName;
}

void SimpleSqlParser::ColumnNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumnName(this);
}

void SimpleSqlParser::ColumnNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumnName(this);
}

SimpleSqlParser::ColumnNameContext* SimpleSqlParser::columnName() {
  ColumnNameContext *_localctx = _tracker.createInstance<ColumnNameContext>(_ctx, getState());
  enterRule(_localctx, 54, SimpleSqlParser::RuleColumnName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
    match(SimpleSqlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionNameContext ------------------------------------------------------------------

SimpleSqlParser::FunctionNameContext::FunctionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::FunctionNameContext::ID() {
  return getToken(SimpleSqlParser::ID, 0);
}


size_t SimpleSqlParser::FunctionNameContext::getRuleIndex() const {
  return SimpleSqlParser::RuleFunctionName;
}

void SimpleSqlParser::FunctionNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionName(this);
}

void SimpleSqlParser::FunctionNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionName(this);
}

SimpleSqlParser::FunctionNameContext* SimpleSqlParser::functionName() {
  FunctionNameContext *_localctx = _tracker.createInstance<FunctionNameContext>(_ctx, getState());
  enterRule(_localctx, 56, SimpleSqlParser::RuleFunctionName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    match(SimpleSqlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldNameContext ------------------------------------------------------------------

SimpleSqlParser::FieldNameContext::FieldNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimpleSqlParser::FieldNameContext::ID() {
  return getTokens(SimpleSqlParser::ID);
}

tree::TerminalNode* SimpleSqlParser::FieldNameContext::ID(size_t i) {
  return getToken(SimpleSqlParser::ID, i);
}

tree::TerminalNode* SimpleSqlParser::FieldNameContext::DOT() {
  return getToken(SimpleSqlParser::DOT, 0);
}


size_t SimpleSqlParser::FieldNameContext::getRuleIndex() const {
  return SimpleSqlParser::RuleFieldName;
}

void SimpleSqlParser::FieldNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldName(this);
}

void SimpleSqlParser::FieldNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldName(this);
}

SimpleSqlParser::FieldNameContext* SimpleSqlParser::fieldName() {
  FieldNameContext *_localctx = _tracker.createInstance<FieldNameContext>(_ctx, getState());
  enterRule(_localctx, 58, SimpleSqlParser::RuleFieldName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(611);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(605);
      match(SimpleSqlParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(607);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimpleSqlParser::ID) {
        setState(606);
        match(SimpleSqlParser::ID);
      }
      setState(609);
      match(SimpleSqlParser::DOT);
      setState(610);
      match(SimpleSqlParser::ID);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralValueContext ------------------------------------------------------------------

SimpleSqlParser::LiteralValueContext::LiteralValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::LiteralValueContext::NUMBER() {
  return getToken(SimpleSqlParser::NUMBER, 0);
}

tree::TerminalNode* SimpleSqlParser::LiteralValueContext::STRING() {
  return getToken(SimpleSqlParser::STRING, 0);
}

tree::TerminalNode* SimpleSqlParser::LiteralValueContext::SQUOTA_STRING() {
  return getToken(SimpleSqlParser::SQUOTA_STRING, 0);
}

tree::TerminalNode* SimpleSqlParser::LiteralValueContext::DQUOTA_STRING() {
  return getToken(SimpleSqlParser::DQUOTA_STRING, 0);
}

tree::TerminalNode* SimpleSqlParser::LiteralValueContext::TRUE() {
  return getToken(SimpleSqlParser::TRUE, 0);
}

tree::TerminalNode* SimpleSqlParser::LiteralValueContext::FALSE() {
  return getToken(SimpleSqlParser::FALSE, 0);
}

tree::TerminalNode* SimpleSqlParser::LiteralValueContext::NULL() {
  return getToken(SimpleSqlParser::NULL, 0);
}


size_t SimpleSqlParser::LiteralValueContext::getRuleIndex() const {
  return SimpleSqlParser::RuleLiteralValue;
}

void SimpleSqlParser::LiteralValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralValue(this);
}

void SimpleSqlParser::LiteralValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleSqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralValue(this);
}

SimpleSqlParser::LiteralValueContext* SimpleSqlParser::literalValue() {
  LiteralValueContext *_localctx = _tracker.createInstance<LiteralValueContext>(_ctx, getState());
  enterRule(_localctx, 60, SimpleSqlParser::RuleLiteralValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(613);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SimpleSqlParser::NULL)
      | (1ULL << SimpleSqlParser::TRUE)
      | (1ULL << SimpleSqlParser::FALSE))) != 0) || ((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & ((1ULL << (SimpleSqlParser::NUMBER - 78))
      | (1ULL << (SimpleSqlParser::STRING - 78))
      | (1ULL << (SimpleSqlParser::DQUOTA_STRING - 78))
      | (1ULL << (SimpleSqlParser::SQUOTA_STRING - 78)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SimpleSqlParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 22: return whereExprSempred(dynamic_cast<WhereExprContext *>(context), predicateIndex);
    case 23: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SimpleSqlParser::whereExprSempred(WhereExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 13);
    case 1: return precpred(_ctx, 12);
    case 2: return precpred(_ctx, 11);
    case 3: return precpred(_ctx, 10);
    case 4: return precpred(_ctx, 9);
    case 5: return precpred(_ctx, 7);
    case 6: return precpred(_ctx, 4);
    case 7: return precpred(_ctx, 14);

  default:
    break;
  }
  return true;
}

bool SimpleSqlParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 16);
    case 9: return precpred(_ctx, 15);
    case 10: return precpred(_ctx, 14);
    case 11: return precpred(_ctx, 13);
    case 12: return precpred(_ctx, 12);
    case 13: return precpred(_ctx, 11);
    case 14: return precpred(_ctx, 9);
    case 15: return precpred(_ctx, 4);
    case 16: return precpred(_ctx, 18);
    case 17: return precpred(_ctx, 17);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SimpleSqlParser::_decisionToDFA;
atn::PredictionContextCache SimpleSqlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SimpleSqlParser::_atn;
std::vector<uint16_t> SimpleSqlParser::_serializedATN;

std::vector<std::string> SimpleSqlParser::_ruleNames = {
  "root", "crudStmt", "insertStmt", "selectStmt", "updateStmt", "deleteStmt", 
  "columnStmt", "fromStmt", "whereStmt", "limitStmt", "offsetStmt", "orderbyStmt", 
  "groupbyStmt", "havingStmt", "tableSources", "tableSource", "tableSourceItem", 
  "joinPart", "selectColumn", "insertStmtValue", "exprWithDefaults", "updatedElement", 
  "whereExpr", "expr", "idList", "exprOrDefault", "tableName", "columnName", 
  "functionName", "fieldName", "literalValue"
};

std::vector<std::string> SimpleSqlParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'/'", 
  "'%'", "'~'", "'!~'", "'+'", "'-'", "'*'", "')'", "'('", "']'", "'['", 
  "'='", "'<'", "'>'", "'!='", "", "'<='", "'>='", "';'", "','", "'.'"
};

std::vector<std::string> SimpleSqlParser::_symbolicNames = {
  "", "SELECT", "AS", "FROM", "WHERE", "AND", "OR", "XOR", "IS", "TO", "NULL", 
  "LIKE", "IN", "BETWEEN", "EXISTS", "TRUE", "FALSE", "DIVIDE", "MOD", "MATCH", 
  "NOT_MATCH", "PLUS", "MINUS", "ASTERISK", "RPAREN", "LPAREN", "RBRACK", 
  "LBRACK", "EQ", "LT", "GT", "NOT_EQ", "NOT", "LTE", "GTE", "SEMI", "COMMA", 
  "DOT", "ORDER", "GROUP", "BY", "PARTITION", "ASC", "DESC", "CASE", "WHEN", 
  "THEN", "ELSE", "END", "LIMIT", "OFFSET", "INTERVAL", "SINCE", "FOLLOW", 
  "UNTIL", "INNER", "OUTER", "LEFT", "RIGHT", "JOIN", "ON", "CROSS", "NATURAL", 
  "REGEXP", "UNION", "INSERT", "IGNORE", "INTO", "SET", "VALUE", "VALUES", 
  "DEFAULT", "DUPLICATE", "KEY", "UPDATE", "DELETE", "HAVING", "ID", "NUMBER", 
  "SINGLE_LINE_COMMENT", "MULTILINE_COMMENT", "WS", "STRING", "DQUOTA_STRING", 
  "SQUOTA_STRING", "BQUOTA_STRING"
};

dfa::Vocabulary SimpleSqlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SimpleSqlParser::_tokenNames;

SimpleSqlParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x57, 0x26a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x3, 0x2, 0x6, 0x2, 0x42, 0xa, 
    0x2, 0xd, 0x2, 0xe, 0x2, 0x43, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4c, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4f, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x53, 0xa, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x56, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x5d, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0x64, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x67, 0xb, 0x4, 0x5, 
    0x4, 0x69, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x72, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x75, 
    0xb, 0x4, 0x5, 0x4, 0x77, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x7d, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x80, 0xa, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x83, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x86, 0xa, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x89, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x8d, 0xa, 
    0x5, 0xc, 0x5, 0xe, 0x5, 0x90, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x94, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 
    0x6, 0x9b, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x9e, 0xb, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0xa1, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa4, 0xa, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0xa7, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0xaa, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0xae, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0xb3, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0xb6, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0xb9, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xbf, 
    0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xc2, 0xb, 0x8, 0x5, 0x8, 0xc4, 0xa, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x5, 0xe, 0xdb, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x7, 0x10, 0xe3, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xe6, 
    0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xea, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0xed, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 
    0xf2, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xf5, 0xb, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0xf9, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xfd, 
    0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0x100, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x107, 0xa, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0x10a, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x112, 0xa, 0x12, 0x3, 0x13, 0x5, 0x13, 
    0x115, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x11b, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x11f, 0xa, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x125, 0xa, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x12a, 0xa, 0x13, 0x5, 0x13, 
    0x12c, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x132, 0xa, 0x13, 0x5, 0x13, 0x134, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x139, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x140, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0x143, 0xb, 0x14, 0x3, 0x14, 0x5, 0x14, 0x146, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x14a, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x7, 0x15, 0x156, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x159, 0xb, 
    0x15, 0x5, 0x15, 0x15b, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0x160, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x163, 0xb, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x169, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x7, 0x18, 0x173, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 
    0x176, 0xb, 0x18, 0x3, 0x18, 0x5, 0x18, 0x179, 0xa, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x5, 0x18, 0x183, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x6, 0x18, 0x18a, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 
    0x18b, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x190, 0xa, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x196, 0xa, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x1a3, 0xa, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x1a9, 0xa, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x5, 0x18, 0x1b2, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x1bb, 0xa, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x1c2, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x1c5, 0xb, 0x18, 0x5, 0x18, 0x1c7, 
    0xa, 0x18, 0x3, 0x18, 0x5, 0x18, 0x1ca, 0xa, 0x18, 0x3, 0x18, 0x7, 0x18, 
    0x1cd, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x1d0, 0xb, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x7, 0x19, 0x1da, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x1dd, 0xb, 
    0x19, 0x3, 0x19, 0x5, 0x19, 0x1e0, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1f4, 0xa, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x6, 0x19, 0x1fb, 0xa, 0x19, 
    0xd, 0x19, 0xe, 0x19, 0x1fc, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x201, 
    0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x207, 
    0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0x214, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0x21a, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x5, 0x19, 0x229, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x236, 0xa, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x5, 0x19, 0x23a, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x241, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
    0x244, 0xb, 0x19, 0x5, 0x19, 0x246, 0xa, 0x19, 0x3, 0x19, 0x7, 0x19, 
    0x249, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x24c, 0xb, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x251, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 
    0x254, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x258, 0xa, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x262, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x5, 0x1f, 0x266, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x2, 0x4, 
    0x2e, 0x30, 0x21, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x2, 0xb, 0x3, 
    0x2, 0x2c, 0x2d, 0x4, 0x2, 0x39, 0x39, 0x3f, 0x3f, 0x3, 0x2, 0x3b, 0x3c, 
    0x3, 0x2, 0x47, 0x48, 0x4, 0x2, 0x13, 0x14, 0x17, 0x19, 0x4, 0x2, 0x1f, 
    0x20, 0x23, 0x24, 0x5, 0x2, 0x15, 0x16, 0x1e, 0x1e, 0x21, 0x21, 0x3, 
    0x2, 0x7, 0x8, 0x6, 0x2, 0xc, 0xc, 0x11, 0x12, 0x50, 0x50, 0x54, 0x56, 
    0x2, 0x2c1, 0x2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x50, 0x3, 0x2, 0x2, 0x2, 0x8, 0x78, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0xc, 0xab, 0x3, 0x2, 0x2, 0x2, 0xe, 0xc3, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x12, 0xc8, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x16, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x22, 0x111, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x133, 0x3, 0x2, 0x2, 0x2, 0x26, 0x149, 0x3, 0x2, 0x2, 0x2, 0x28, 0x15a, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x164, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x195, 0x3, 0x2, 0x2, 0x2, 0x30, 0x206, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x34, 0x257, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x259, 0x3, 0x2, 0x2, 0x2, 0x38, 0x25b, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x265, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x267, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x5, 0x4, 0x3, 0x2, 0x41, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x46, 0x7, 0x2, 0x2, 0x3, 0x46, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x4c, 0x5, 0x6, 0x4, 0x2, 0x48, 0x4c, 0x5, 0x8, 0x5, 0x2, 
    0x49, 0x4c, 0x5, 0xa, 0x6, 0x2, 0x4a, 0x4c, 0x5, 0xc, 0x7, 0x2, 0x4b, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x4f, 0x7, 0x25, 0x2, 0x2, 0x4e, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x52, 0x7, 0x43, 0x2, 0x2, 0x51, 0x53, 0x7, 0x44, 0x2, 0x2, 
    0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x54, 0x56, 0x7, 0x45, 0x2, 0x2, 0x55, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x68, 0x5, 0x36, 0x1c, 0x2, 0x58, 0x59, 0x7, 0x1b, 
    0x2, 0x2, 0x59, 0x5a, 0x5, 0x32, 0x1a, 0x2, 0x5a, 0x5b, 0x7, 0x1a, 0x2, 
    0x2, 0x5b, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x69, 0x5, 0x28, 0x15, 0x2, 0x5f, 0x60, 0x7, 0x46, 0x2, 0x2, 0x60, 0x65, 
    0x5, 0x2c, 0x17, 0x2, 0x61, 0x62, 0x7, 0x26, 0x2, 0x2, 0x62, 0x64, 0x5, 
    0x2c, 0x17, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x68, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x3e, 0x2, 0x2, 0x6b, 0x6c, 
    0x7, 0x4a, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x4b, 0x2, 0x2, 0x6d, 0x6e, 0x7, 
    0x4c, 0x2, 0x2, 0x6e, 0x73, 0x5, 0x2c, 0x17, 0x2, 0x6f, 0x70, 0x7, 0x26, 
    0x2, 0x2, 0x70, 0x72, 0x5, 0x2c, 0x17, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x77, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x7, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 
    0x3, 0x2, 0x2, 0x79, 0x7a, 0x5, 0xe, 0x8, 0x2, 0x7a, 0x7c, 0x5, 0x10, 
    0x9, 0x2, 0x7b, 0x7d, 0x5, 0x12, 0xa, 0x2, 0x7c, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x80, 0x5, 0x14, 0xb, 0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 
    0x5, 0x16, 0xc, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x85, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x5, 0x18, 
    0xd, 0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x88, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x5, 0x1a, 0xe, 0x2, 
    0x88, 0x87, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x42, 0x2, 0x2, 0x8b, 0x8d, 
    0x5, 0x8, 0x5, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x90, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x8f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x93, 0x7, 0x4c, 0x2, 0x2, 0x92, 0x94, 0x7, 0x44, 0x2, 0x2, 
    0x93, 0x92, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x5, 0x1e, 0x10, 0x2, 0x96, 0x97, 
    0x7, 0x46, 0x2, 0x2, 0x97, 0x9c, 0x5, 0x2c, 0x17, 0x2, 0x98, 0x99, 0x7, 
    0x26, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x2c, 0x17, 0x2, 0x9a, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa1, 0x5, 0x12, 0xa, 0x2, 0xa0, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa4, 0x5, 0x14, 0xb, 0x2, 0xa3, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0xa7, 0x5, 0x16, 0xc, 0x2, 0xa6, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0xaa, 0x5, 0x18, 0xd, 0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xb, 0x3, 0x2, 0x2, 0x2, 0xab, 0xad, 
    0x7, 0x4d, 0x2, 0x2, 0xac, 0xae, 0x7, 0x44, 0x2, 0x2, 0xad, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xaf, 0xb0, 0x7, 0x5, 0x2, 0x2, 0xb0, 0xb2, 0x5, 0x36, 0x1c, 
    0x2, 0xb1, 0xb3, 0x5, 0x12, 0xa, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb6, 0x5, 0x18, 0xd, 0x2, 0xb5, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb9, 0x5, 
    0x14, 0xb, 0x2, 0xb8, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xb9, 0xd, 0x3, 0x2, 0x2, 0x2, 0xba, 0xc4, 0x7, 0x19, 0x2, 
    0x2, 0xbb, 0xc0, 0x5, 0x26, 0x14, 0x2, 0xbc, 0xbd, 0x7, 0x26, 0x2, 0x2, 
    0xbd, 0xbf, 0x5, 0x26, 0x14, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0xc3, 0xba, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0xc4, 0xf, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x5, 0x2, 
    0x2, 0xc6, 0xc7, 0x5, 0x1e, 0x10, 0x2, 0xc7, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0xc9, 0x7, 0x6, 0x2, 0x2, 0xc9, 0xca, 0x5, 0x2e, 0x18, 0x2, 0xca, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x33, 0x2, 0x2, 0xcc, 0xcd, 
    0x7, 0x50, 0x2, 0x2, 0xcd, 0x15, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 
    0x34, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x50, 0x2, 0x2, 0xd0, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xd2, 0x7, 0x28, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x2a, 0x2, 
    0x2, 0xd3, 0xd4, 0x5, 0x38, 0x1d, 0x2, 0xd4, 0xd5, 0x9, 0x2, 0x2, 0x2, 
    0xd5, 0x19, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x29, 0x2, 0x2, 0xd7, 
    0xd8, 0x7, 0x2a, 0x2, 0x2, 0xd8, 0xda, 0x5, 0x38, 0x1d, 0x2, 0xd9, 0xdb, 
    0x5, 0x1c, 0xf, 0x2, 0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x4e, 
    0x2, 0x2, 0xdd, 0xde, 0x5, 0x30, 0x19, 0x2, 0xde, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0xdf, 0xe4, 0x5, 0x20, 0x11, 0x2, 0xe0, 0xe1, 0x7, 0x26, 0x2, 0x2, 
    0xe1, 0xe3, 0x5, 0x20, 0x11, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 
    0x3, 0x2, 0x2, 0x2, 0xe5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xeb, 0x5, 0x22, 0x12, 0x2, 0xe8, 0xea, 0x5, 0x24, 
    0x13, 0x2, 0xe9, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xee, 
    0xef, 0x7, 0x1b, 0x2, 0x2, 0xef, 0xf3, 0x5, 0x22, 0x12, 0x2, 0xf0, 0xf2, 
    0x5, 0x24, 0x13, 0x2, 0xf1, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf3, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xf7, 0x7, 0x1a, 0x2, 0x2, 0xf7, 0xf9, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf9, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xff, 0x5, 0x36, 0x1c, 0x2, 0xfb, 0xfd, 
    0x7, 0x4, 0x2, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 
    0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x100, 0x7, 0x4f, 
    0x2, 0x2, 0xff, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 
    0x2, 0x100, 0x112, 0x3, 0x2, 0x2, 0x2, 0x101, 0x107, 0x5, 0x8, 0x5, 
    0x2, 0x102, 0x103, 0x7, 0x1b, 0x2, 0x2, 0x103, 0x104, 0x5, 0x8, 0x5, 
    0x2, 0x104, 0x105, 0x7, 0x1a, 0x2, 0x2, 0x105, 0x107, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x101, 0x3, 0x2, 0x2, 0x2, 0x106, 0x102, 0x3, 0x2, 0x2, 
    0x2, 0x107, 0x109, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10a, 0x7, 0x4, 0x2, 
    0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 
    0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x4f, 0x2, 
    0x2, 0x10c, 0x112, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x1b, 0x2, 
    0x2, 0x10e, 0x10f, 0x5, 0x1e, 0x10, 0x2, 0x10f, 0x110, 0x7, 0x1a, 0x2, 
    0x2, 0x110, 0x112, 0x3, 0x2, 0x2, 0x2, 0x111, 0xfa, 0x3, 0x2, 0x2, 0x2, 
    0x111, 0x106, 0x3, 0x2, 0x2, 0x2, 0x111, 0x10d, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x23, 0x3, 0x2, 0x2, 0x2, 0x113, 0x115, 0x9, 0x3, 0x2, 0x2, 0x114, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 
    0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x7, 0x3d, 0x2, 0x2, 0x117, 
    0x11a, 0x5, 0x22, 0x12, 0x2, 0x118, 0x119, 0x7, 0x3e, 0x2, 0x2, 0x119, 
    0x11b, 0x5, 0x30, 0x19, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x134, 0x3, 0x2, 0x2, 0x2, 0x11c, 
    0x11e, 0x9, 0x4, 0x2, 0x2, 0x11d, 0x11f, 0x7, 0x3a, 0x2, 0x2, 0x11e, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11f, 
    0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x7, 0x3d, 0x2, 0x2, 0x121, 
    0x124, 0x5, 0x22, 0x12, 0x2, 0x122, 0x123, 0x7, 0x3e, 0x2, 0x2, 0x123, 
    0x125, 0x5, 0x30, 0x19, 0x2, 0x124, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x134, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x12b, 0x7, 0x40, 0x2, 0x2, 0x127, 0x129, 0x9, 0x4, 0x2, 0x2, 0x128, 
    0x12a, 0x7, 0x3a, 0x2, 0x2, 0x129, 0x128, 0x3, 0x2, 0x2, 0x2, 0x129, 
    0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x127, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 
    0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x7, 0x3d, 0x2, 0x2, 0x12e, 
    0x131, 0x5, 0x22, 0x12, 0x2, 0x12f, 0x130, 0x7, 0x3e, 0x2, 0x2, 0x130, 
    0x132, 0x5, 0x30, 0x19, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 
    0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 0x134, 0x3, 0x2, 0x2, 0x2, 0x133, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x133, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x133, 
    0x126, 0x3, 0x2, 0x2, 0x2, 0x134, 0x25, 0x3, 0x2, 0x2, 0x2, 0x135, 0x138, 
    0x5, 0x38, 0x1d, 0x2, 0x136, 0x137, 0x7, 0x4, 0x2, 0x2, 0x137, 0x139, 
    0x5, 0x38, 0x1d, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x139, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 
    0x5, 0x3a, 0x1e, 0x2, 0x13b, 0x145, 0x7, 0x1b, 0x2, 0x2, 0x13c, 0x141, 
    0x5, 0x2e, 0x18, 0x2, 0x13d, 0x13e, 0x7, 0x26, 0x2, 0x2, 0x13e, 0x140, 
    0x5, 0x2e, 0x18, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x140, 0x143, 
    0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 
    0x3, 0x2, 0x2, 0x2, 0x142, 0x146, 0x3, 0x2, 0x2, 0x2, 0x143, 0x141, 
    0x3, 0x2, 0x2, 0x2, 0x144, 0x146, 0x7, 0x19, 0x2, 0x2, 0x145, 0x13c, 
    0x3, 0x2, 0x2, 0x2, 0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 
    0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 
    0x7, 0x1a, 0x2, 0x2, 0x148, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x149, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x149, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x14b, 0x15b, 0x5, 0x8, 0x5, 0x2, 0x14c, 0x14d, 0x9, 
    0x5, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0x1b, 0x2, 0x2, 0x14e, 0x14f, 0x5, 
    0x2a, 0x16, 0x2, 0x14f, 0x157, 0x7, 0x1a, 0x2, 0x2, 0x150, 0x151, 0x7, 
    0x26, 0x2, 0x2, 0x151, 0x152, 0x7, 0x1b, 0x2, 0x2, 0x152, 0x153, 0x5, 
    0x2a, 0x16, 0x2, 0x153, 0x154, 0x7, 0x1a, 0x2, 0x2, 0x154, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x155, 0x150, 0x3, 0x2, 0x2, 0x2, 0x156, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 
    0x2, 0x2, 0x2, 0x158, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x15a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x14c, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x161, 0x5, 0x34, 
    0x1b, 0x2, 0x15d, 0x15e, 0x7, 0x26, 0x2, 0x2, 0x15e, 0x160, 0x5, 0x34, 
    0x1b, 0x2, 0x15f, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x160, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x161, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x163, 0x161, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x165, 0x5, 0x38, 0x1d, 0x2, 0x165, 0x168, 0x7, 0x1e, 0x2, 
    0x2, 0x166, 0x169, 0x5, 0x30, 0x19, 0x2, 0x167, 0x169, 0x7, 0x49, 0x2, 
    0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x8, 0x18, 0x1, 
    0x2, 0x16b, 0x16c, 0x7, 0x22, 0x2, 0x2, 0x16c, 0x196, 0x5, 0x2e, 0x18, 
    0xa, 0x16d, 0x16e, 0x5, 0x3a, 0x1e, 0x2, 0x16e, 0x178, 0x7, 0x1b, 0x2, 
    0x2, 0x16f, 0x174, 0x5, 0x2e, 0x18, 0x2, 0x170, 0x171, 0x7, 0x26, 0x2, 
    0x2, 0x171, 0x173, 0x5, 0x2e, 0x18, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 
    0x2, 0x173, 0x176, 0x3, 0x2, 0x2, 0x2, 0x174, 0x172, 0x3, 0x2, 0x2, 
    0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 0x179, 0x3, 0x2, 0x2, 
    0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x177, 0x179, 0x7, 0x19, 0x2, 
    0x2, 0x178, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x178, 0x177, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x3, 0x2, 0x2, 
    0x2, 0x17a, 0x17b, 0x7, 0x1a, 0x2, 0x2, 0x17b, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x17c, 0x17d, 0x7, 0x1b, 0x2, 0x2, 0x17d, 0x17e, 0x5, 0x2e, 0x18, 
    0x2, 0x17e, 0x17f, 0x7, 0x1a, 0x2, 0x2, 0x17f, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x180, 0x182, 0x7, 0x2e, 0x2, 0x2, 0x181, 0x183, 0x5, 0x2e, 0x18, 
    0x2, 0x182, 0x181, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x3, 0x2, 0x2, 
    0x2, 0x183, 0x189, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x7, 0x2f, 0x2, 
    0x2, 0x185, 0x186, 0x5, 0x2e, 0x18, 0x2, 0x186, 0x187, 0x7, 0x30, 0x2, 
    0x2, 0x187, 0x188, 0x5, 0x2e, 0x18, 0x2, 0x188, 0x18a, 0x3, 0x2, 0x2, 
    0x2, 0x189, 0x184, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x7, 0x31, 0x2, 
    0x2, 0x18e, 0x190, 0x5, 0x2e, 0x18, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x190, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x3, 0x2, 0x2, 
    0x2, 0x191, 0x192, 0x7, 0x32, 0x2, 0x2, 0x192, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x193, 0x196, 0x5, 0x3e, 0x20, 0x2, 0x194, 0x196, 0x5, 0x3c, 0x1f, 
    0x2, 0x195, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x195, 0x16d, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x195, 0x180, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 0x195, 0x194, 0x3, 0x2, 0x2, 
    0x2, 0x196, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0xc, 0xf, 0x2, 
    0x2, 0x198, 0x199, 0x9, 0x6, 0x2, 0x2, 0x199, 0x1cd, 0x5, 0x2e, 0x18, 
    0x10, 0x19a, 0x19b, 0xc, 0xe, 0x2, 0x2, 0x19b, 0x19c, 0x9, 0x7, 0x2, 
    0x2, 0x19c, 0x1cd, 0x5, 0x2e, 0x18, 0xf, 0x19d, 0x19e, 0xc, 0xd, 0x2, 
    0x2, 0x19e, 0x19f, 0x9, 0x8, 0x2, 0x2, 0x19f, 0x1cd, 0x5, 0x2e, 0x18, 
    0xe, 0x1a0, 0x1a2, 0xc, 0xc, 0x2, 0x2, 0x1a1, 0x1a3, 0x7, 0x22, 0x2, 
    0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0xd, 0x2, 
    0x2, 0x1a5, 0x1cd, 0x5, 0x2e, 0x18, 0xd, 0x1a6, 0x1a8, 0xc, 0xb, 0x2, 
    0x2, 0x1a7, 0x1a9, 0x7, 0x22, 0x2, 0x2, 0x1a8, 0x1a7, 0x3, 0x2, 0x2, 
    0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 
    0x2, 0x1aa, 0x1ab, 0x7, 0x41, 0x2, 0x2, 0x1ab, 0x1cd, 0x5, 0x2e, 0x18, 
    0xc, 0x1ac, 0x1ad, 0xc, 0x9, 0x2, 0x2, 0x1ad, 0x1ae, 0x9, 0x9, 0x2, 
    0x2, 0x1ae, 0x1cd, 0x5, 0x2e, 0x18, 0xa, 0x1af, 0x1b1, 0xc, 0x6, 0x2, 
    0x2, 0x1b0, 0x1b2, 0x7, 0x22, 0x2, 0x2, 0x1b1, 0x1b0, 0x3, 0x2, 0x2, 
    0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 
    0x2, 0x1b3, 0x1b4, 0x7, 0xf, 0x2, 0x2, 0x1b4, 0x1b5, 0x5, 0x2e, 0x18, 
    0x2, 0x1b5, 0x1b6, 0x7, 0x7, 0x2, 0x2, 0x1b6, 0x1b7, 0x5, 0x2e, 0x18, 
    0x7, 0x1b7, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1ba, 0xc, 0x10, 0x2, 
    0x2, 0x1b9, 0x1bb, 0x7, 0x22, 0x2, 0x2, 0x1ba, 0x1b9, 0x3, 0x2, 0x2, 
    0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 
    0x2, 0x1bc, 0x1bd, 0x7, 0xe, 0x2, 0x2, 0x1bd, 0x1c9, 0x7, 0x1b, 0x2, 
    0x2, 0x1be, 0x1c3, 0x5, 0x2e, 0x18, 0x2, 0x1bf, 0x1c0, 0x7, 0x26, 0x2, 
    0x2, 0x1c0, 0x1c2, 0x5, 0x2e, 0x18, 0x2, 0x1c1, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1c2, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c1, 0x3, 0x2, 0x2, 
    0x2, 0x1c3, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c7, 0x3, 0x2, 0x2, 
    0x2, 0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1be, 0x3, 0x2, 0x2, 
    0x2, 0x1c6, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1ca, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x1ca, 0x5, 0x8, 0x5, 0x2, 0x1c9, 0x1c6, 0x3, 0x2, 0x2, 
    0x2, 0x1c9, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x3, 0x2, 0x2, 
    0x2, 0x1cb, 0x1cd, 0x7, 0x1a, 0x2, 0x2, 0x1cc, 0x197, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x19d, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1a6, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1d0, 0x3, 0x2, 0x2, 
    0x2, 0x1ce, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 0x2, 
    0x2, 0x1cf, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x1d1, 0x1d2, 0x8, 0x19, 0x1, 0x2, 0x1d2, 0x1d3, 0x7, 0x22, 0x2, 0x2, 
    0x1d3, 0x207, 0x5, 0x30, 0x19, 0xc, 0x1d4, 0x1d5, 0x5, 0x3a, 0x1e, 0x2, 
    0x1d5, 0x1df, 0x7, 0x1b, 0x2, 0x2, 0x1d6, 0x1db, 0x5, 0x2e, 0x18, 0x2, 
    0x1d7, 0x1d8, 0x7, 0x26, 0x2, 0x2, 0x1d8, 0x1da, 0x5, 0x2e, 0x18, 0x2, 
    0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1dd, 0x3, 0x2, 0x2, 0x2, 
    0x1db, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 0x2, 
    0x1dc, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1db, 0x3, 0x2, 0x2, 0x2, 
    0x1de, 0x1e0, 0x7, 0x19, 0x2, 0x2, 0x1df, 0x1d6, 0x3, 0x2, 0x2, 0x2, 
    0x1df, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 0x2, 
    0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x1a, 0x2, 0x2, 
    0x1e2, 0x207, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 0x1b, 0x2, 0x2, 
    0x1e4, 0x1e5, 0x5, 0x30, 0x19, 0x2, 0x1e5, 0x1e6, 0x7, 0x1a, 0x2, 0x2, 
    0x1e6, 0x207, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0x1b, 0x2, 0x2, 
    0x1e8, 0x1e9, 0x5, 0x30, 0x19, 0x2, 0x1e9, 0x1ea, 0x7, 0x1a, 0x2, 0x2, 
    0x1ea, 0x1eb, 0x7, 0x1a, 0x2, 0x2, 0x1eb, 0x1ec, 0x8, 0x19, 0x1, 0x2, 
    0x1ec, 0x207, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x7, 0x1b, 0x2, 0x2, 
    0x1ee, 0x1ef, 0x5, 0x30, 0x19, 0x7, 0x1ef, 0x1f0, 0x8, 0x19, 0x1, 0x2, 
    0x1f0, 0x207, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f3, 0x7, 0x2e, 0x2, 0x2, 
    0x1f2, 0x1f4, 0x5, 0x30, 0x19, 0x2, 0x1f3, 0x1f2, 0x3, 0x2, 0x2, 0x2, 
    0x1f3, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1fa, 0x3, 0x2, 0x2, 0x2, 
    0x1f5, 0x1f6, 0x7, 0x2f, 0x2, 0x2, 0x1f6, 0x1f7, 0x5, 0x30, 0x19, 0x2, 
    0x1f7, 0x1f8, 0x7, 0x30, 0x2, 0x2, 0x1f8, 0x1f9, 0x5, 0x30, 0x19, 0x2, 
    0x1f9, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1f5, 0x3, 0x2, 0x2, 0x2, 
    0x1fb, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 
    0x1fc, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x200, 0x3, 0x2, 0x2, 0x2, 
    0x1fe, 0x1ff, 0x7, 0x31, 0x2, 0x2, 0x1ff, 0x201, 0x5, 0x30, 0x19, 0x2, 
    0x200, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 0x2, 0x2, 0x2, 
    0x201, 0x202, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x7, 0x32, 0x2, 0x2, 
    0x203, 0x207, 0x3, 0x2, 0x2, 0x2, 0x204, 0x207, 0x5, 0x3e, 0x20, 0x2, 
    0x205, 0x207, 0x5, 0x3c, 0x1f, 0x2, 0x206, 0x1d1, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x206, 0x1e3, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x206, 0x1ed, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x206, 0x204, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 0x24a, 0x3, 0x2, 0x2, 0x2, 
    0x208, 0x209, 0xc, 0x12, 0x2, 0x2, 0x209, 0x20a, 0x9, 0x6, 0x2, 0x2, 
    0x20a, 0x249, 0x5, 0x30, 0x19, 0x13, 0x20b, 0x20c, 0xc, 0x11, 0x2, 0x2, 
    0x20c, 0x20d, 0x9, 0x7, 0x2, 0x2, 0x20d, 0x249, 0x5, 0x30, 0x19, 0x12, 
    0x20e, 0x20f, 0xc, 0x10, 0x2, 0x2, 0x20f, 0x210, 0x9, 0x8, 0x2, 0x2, 
    0x210, 0x249, 0x5, 0x30, 0x19, 0x11, 0x211, 0x213, 0xc, 0xf, 0x2, 0x2, 
    0x212, 0x214, 0x7, 0x22, 0x2, 0x2, 0x213, 0x212, 0x3, 0x2, 0x2, 0x2, 
    0x213, 0x214, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 0x2, 
    0x215, 0x216, 0x7, 0xd, 0x2, 0x2, 0x216, 0x249, 0x5, 0x30, 0x19, 0x10, 
    0x217, 0x219, 0xc, 0xe, 0x2, 0x2, 0x218, 0x21a, 0x7, 0x22, 0x2, 0x2, 
    0x219, 0x218, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x3, 0x2, 0x2, 0x2, 
    0x21a, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x41, 0x2, 0x2, 
    0x21c, 0x249, 0x5, 0x30, 0x19, 0xf, 0x21d, 0x21e, 0xc, 0xd, 0x2, 0x2, 
    0x21e, 0x21f, 0x7, 0x1e, 0x2, 0x2, 0x21f, 0x220, 0x7, 0x1e, 0x2, 0x2, 
    0x220, 0x221, 0x5, 0x30, 0x19, 0xe, 0x221, 0x222, 0x8, 0x19, 0x1, 0x2, 
    0x222, 0x249, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0xc, 0xb, 0x2, 0x2, 
    0x224, 0x225, 0x9, 0x9, 0x2, 0x2, 0x225, 0x249, 0x5, 0x30, 0x19, 0xc, 
    0x226, 0x228, 0xc, 0x6, 0x2, 0x2, 0x227, 0x229, 0x7, 0x22, 0x2, 0x2, 
    0x228, 0x227, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x3, 0x2, 0x2, 0x2, 
    0x229, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x7, 0xf, 0x2, 0x2, 
    0x22b, 0x22c, 0x5, 0x30, 0x19, 0x2, 0x22c, 0x22d, 0x7, 0x7, 0x2, 0x2, 
    0x22d, 0x22e, 0x5, 0x30, 0x19, 0x7, 0x22e, 0x249, 0x3, 0x2, 0x2, 0x2, 
    0x22f, 0x235, 0xc, 0x14, 0x2, 0x2, 0x230, 0x231, 0x7, 0xa, 0x2, 0x2, 
    0x231, 0x236, 0x7, 0xc, 0x2, 0x2, 0x232, 0x233, 0x7, 0xa, 0x2, 0x2, 
    0x233, 0x234, 0x7, 0x22, 0x2, 0x2, 0x234, 0x236, 0x7, 0xc, 0x2, 0x2, 
    0x235, 0x230, 0x3, 0x2, 0x2, 0x2, 0x235, 0x232, 0x3, 0x2, 0x2, 0x2, 
    0x236, 0x249, 0x3, 0x2, 0x2, 0x2, 0x237, 0x239, 0xc, 0x13, 0x2, 0x2, 
    0x238, 0x23a, 0x7, 0x22, 0x2, 0x2, 0x239, 0x238, 0x3, 0x2, 0x2, 0x2, 
    0x239, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 
    0x23b, 0x23c, 0x7, 0xe, 0x2, 0x2, 0x23c, 0x245, 0x7, 0x1b, 0x2, 0x2, 
    0x23d, 0x242, 0x5, 0x30, 0x19, 0x2, 0x23e, 0x23f, 0x7, 0x26, 0x2, 0x2, 
    0x23f, 0x241, 0x5, 0x30, 0x19, 0x2, 0x240, 0x23e, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x244, 0x3, 0x2, 0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 
    0x242, 0x243, 0x3, 0x2, 0x2, 0x2, 0x243, 0x246, 0x3, 0x2, 0x2, 0x2, 
    0x244, 0x242, 0x3, 0x2, 0x2, 0x2, 0x245, 0x23d, 0x3, 0x2, 0x2, 0x2, 
    0x245, 0x246, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 0x2, 0x2, 0x2, 
    0x247, 0x249, 0x7, 0x1a, 0x2, 0x2, 0x248, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x248, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x248, 0x20e, 0x3, 0x2, 0x2, 0x2, 
    0x248, 0x211, 0x3, 0x2, 0x2, 0x2, 0x248, 0x217, 0x3, 0x2, 0x2, 0x2, 
    0x248, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x248, 0x223, 0x3, 0x2, 0x2, 0x2, 
    0x248, 0x226, 0x3, 0x2, 0x2, 0x2, 0x248, 0x22f, 0x3, 0x2, 0x2, 0x2, 
    0x248, 0x237, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24c, 0x3, 0x2, 0x2, 0x2, 
    0x24a, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x31, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24d, 
    0x252, 0x7, 0x4f, 0x2, 0x2, 0x24e, 0x24f, 0x7, 0x26, 0x2, 0x2, 0x24f, 
    0x251, 0x7, 0x4f, 0x2, 0x2, 0x250, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x251, 
    0x254, 0x3, 0x2, 0x2, 0x2, 0x252, 0x250, 0x3, 0x2, 0x2, 0x2, 0x252, 
    0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 0x33, 0x3, 0x2, 0x2, 0x2, 0x254, 0x252, 
    0x3, 0x2, 0x2, 0x2, 0x255, 0x258, 0x5, 0x3e, 0x20, 0x2, 0x256, 0x258, 
    0x7, 0x49, 0x2, 0x2, 0x257, 0x255, 0x3, 0x2, 0x2, 0x2, 0x257, 0x256, 
    0x3, 0x2, 0x2, 0x2, 0x258, 0x35, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x7, 
    0x4f, 0x2, 0x2, 0x25a, 0x37, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x7, 
    0x4f, 0x2, 0x2, 0x25c, 0x39, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x7, 
    0x4f, 0x2, 0x2, 0x25e, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x266, 0x7, 
    0x4f, 0x2, 0x2, 0x260, 0x262, 0x7, 0x4f, 0x2, 0x2, 0x261, 0x260, 0x3, 
    0x2, 0x2, 0x2, 0x261, 0x262, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x3, 
    0x2, 0x2, 0x2, 0x263, 0x264, 0x7, 0x27, 0x2, 0x2, 0x264, 0x266, 0x7, 
    0x4f, 0x2, 0x2, 0x265, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x265, 0x261, 0x3, 
    0x2, 0x2, 0x2, 0x266, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x9, 0xa, 
    0x2, 0x2, 0x268, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x43, 0x4b, 0x4e, 0x52, 
    0x55, 0x5c, 0x65, 0x68, 0x73, 0x76, 0x7c, 0x7f, 0x82, 0x85, 0x88, 0x8e, 
    0x93, 0x9c, 0xa0, 0xa3, 0xa6, 0xa9, 0xad, 0xb2, 0xb5, 0xb8, 0xc0, 0xc3, 
    0xda, 0xe4, 0xeb, 0xf3, 0xf8, 0xfc, 0xff, 0x106, 0x109, 0x111, 0x114, 
    0x11a, 0x11e, 0x124, 0x129, 0x12b, 0x131, 0x133, 0x138, 0x141, 0x145, 
    0x149, 0x157, 0x15a, 0x161, 0x168, 0x174, 0x178, 0x182, 0x18b, 0x18f, 
    0x195, 0x1a2, 0x1a8, 0x1b1, 0x1ba, 0x1c3, 0x1c6, 0x1c9, 0x1cc, 0x1ce, 
    0x1db, 0x1df, 0x1f3, 0x1fc, 0x200, 0x206, 0x213, 0x219, 0x228, 0x235, 
    0x239, 0x242, 0x245, 0x248, 0x24a, 0x252, 0x257, 0x261, 0x265, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SimpleSqlParser::Initializer SimpleSqlParser::_init;
