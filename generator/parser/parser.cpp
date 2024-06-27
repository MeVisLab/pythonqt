/****************************************************************************
**
** Copyright (C) 2008-2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Script Generator project on Qt Labs.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */


// c++ support
#include "parser.h"
#include "tokens.h"
#include "lexer.h"
#include "control.h"

#include <cstdlib>
#include <iostream>
#include <vector>

#if defined(_MSC_VER) || defined(__GNUC__)
#include <sstream>

std::string _joinLocation(const char* name, int line)
{
  std::stringstream ss;
  ss << name << ":" << line;
  return ss.str();
}

#define PARSER_METHOD_NAME _joinLocation(__FUNCTION__, __LINE__).c_str()
#else 
#define PARSER_METHOD_NAME ""
#endif 


#define SYNTAX_ERROR() syntaxError(PARSER_METHOD_NAME)

#define ADVANCE(tk, descr) \
{ \
  if (token_stream.lookAhead() != tk) { \
      tokenRequiredError(tk, PARSER_METHOD_NAME); \
      return false; \
  } \
  nextToken(); \
}

#define ADVANCE_NR(tk, descr) \
  do { \
    if (token_stream.lookAhead() != tk) { \
      tokenRequiredError(tk, PARSER_METHOD_NAME); \
    } \
    else \
        nextToken(); \
  } while (0)

#define CHECK(tk) \
  do { \
    if (token_stream.lookAhead() != tk) { \
        return false; \
    } \
    nextToken(); \
  } while (0)

#define UPDATE_POS(_node, start, end) \
  do { \
      (_node)->start_token = start; \
      (_node)->end_token = end; \
  } while (0)

Parser::Parser(Control *c)
  : _M_location(token_stream, location_table, line_table),
    control(c),
    lexer(_M_location, control)
{
  _M_block_errors = false;
}

Parser::~Parser()
{
}

void Parser::nextToken()
{
  token_stream.nextToken();
  keepTrackDebug();
}

void Parser::rewind(std::size_t pos)
{
  token_stream.rewind(pos);
  keepTrackDebug();
}

TranslationUnitAST *Parser::parse(const char *contents,
                                  std::size_t size, pool *p)
{
  _M_block_errors = false;
  _M_pool = p;
  lexer.tokenize(contents, size);
  nextToken(); // skip the first token

  Lexer *oldLexer = control->changeLexer (&lexer);
  Parser *oldParser = control->changeParser (this);

  TranslationUnitAST *ast = 0;
  parseTranslationUnit(ast);

  control->changeLexer (oldLexer);
  control->changeParser (oldParser);

  return ast;
}

bool Parser::parseWinDeclSpec(WinDeclSpecAST *&node)
{
  if (token_stream.lookAhead() != Token_identifier)
    return false;

  std::size_t start = token_stream.cursor();

  const NameSymbol *name_symbol = token_stream.symbol(token_stream.cursor());
  QString name = name_symbol->as_string();
  if (name != QLatin1String("__declspec"))
    return false;
  std::size_t specifier = token_stream.cursor();

  nextToken();
  if (token_stream.lookAhead() != '(')
    return false;

  nextToken();
  if (token_stream.lookAhead() != Token_identifier)
    return false;
  std::size_t modifier = token_stream.cursor();

  nextToken();
  if (token_stream.lookAhead() != ')')
    return false;

  nextToken();

  node = CreateNode<WinDeclSpecAST>(_M_pool);
  node->specifier = specifier;
  node->modifier = modifier;

  UPDATE_POS(node, start, token_stream.cursor());

  return true;
}

void Parser::tokenRequiredError(int token, const char* functionName)
{
  QString err;

  err += "expected token ";
  err += "``";
  err += token_name(token);
  err += "'' found ``";
  err += token_name(token_stream.lookAhead());
  err += "''";

  reportError(err, functionName);
}

void Parser::syntaxError(const char* functionName)
{
  QString err;

  err += "unexpected token ";
  err += "``";
  err += token_name(token_stream.lookAhead());
  err += "''";

  reportError(err, functionName);
}

void Parser::reportError(const QString& msg, const char* functionName)
{
    if (!_M_block_errors)
    {
        int line, column;
        QString fileName;

        std::size_t tok = token_stream.cursor();
        location().positionAt(token_stream.position(tok),
            &line, &column, &fileName);

        Control::ErrorMessage errmsg;
        errmsg.setLine(line + 1);
        errmsg.setColumn(column);
        errmsg.setFileName(fileName);
        errmsg.setMessage(QLatin1String("** PARSER ERROR ") + msg);
        if (functionName && *functionName) {
          errmsg.setMessage(errmsg.message() + " in " + functionName);
        }

        control->reportError(errmsg);
    }
}

void Parser::keepTrackDebug()
{
#ifndef NDEBUG
  std::size_t tok = token_stream.cursor();
  location().positionAt(token_stream.position(tok),
    &_currentLine, &_currentColumn, &_currentFile);
  _currentToken = token_name(token_stream.lookAhead());
  if (token_stream.lookAhead() == Token_identifier)
  {
    _currentSymbol = token_stream.symbol(tok)->as_string();
  }
  else
  {
    _currentSymbol = "";
  }
#endif
}

bool Parser::skipAlignas()
{
  // we are currently not interested in alignas, so we just skip it
  if (token_stream.lookAhead() == Token_alignas)
  {
    nextToken();
    if (token_stream.lookAhead() == '(')
    {
      if (skip('(', ')'))
      {
        nextToken();
      }
    }
    return true;
  }
  return false;
}

bool Parser::skipAttributes()
{
  bool any = false;
  while (true) {
    if (token_stream.lookAhead() == Token___attribute__)
    {
      parse_Attribute__();
      any = true;
    }
    else if (token_stream.lookAhead() == '[' && token_stream.lookAhead(1) == '[')
    {
      nextToken();
      while (true)
      {
        nextToken();
        int tk = token_stream.lookAhead();
        if (tk == Token_EOF)
        {
          break;
        }
        else if (tk == ']' && token_stream.lookAhead(1) == ']') // this has no separate token because "]]" can occur in other contexts
        {
          nextToken();
          nextToken();
          break;
        }
      }
      any = true;
    }
    else
    {
      break;
    }
  }
  return any;
}

bool Parser::skipUntil(int token)
{
  while (token_stream.lookAhead())
    {
      if (token_stream.lookAhead() == token)
        return true;

      nextToken();
    }

  return false;
}

bool Parser::skipUntilDeclaration()
{
  while (token_stream.lookAhead())
    {

      switch(token_stream.lookAhead())
        {
        case ';':
        case '~':
        case Token_scope:
        case Token_identifier:
        case Token_operator:
        case Token_char:
        case Token_wchar_t:
        case Token_bool:
        case Token_short:
        case Token_int:
        case Token_long:
        case Token_signed:
        case Token_unsigned:
        case Token_float:
        case Token_double:
        case Token_void:
        case Token_extern:
        case Token_namespace:
        case Token_using:
        case Token_typedef:
        case Token_asm:
        case Token_template:
        case Token_export:

        case Token_const:       // cv
        case Token_constexpr:   // cv
        case Token_volatile:    // cv
        case Token_mutable:    // cv

        case Token_public:
        case Token_protected:
        case Token_private:
        case Token_signals:      // Qt
        case Token_slots:        // Qt
          return true;

        case Token_decltype:
        case Token___typeof:
          reportError("C++11 decltype/__typeof(id|expression) not handled");
          return true;

        default:
          nextToken();
        }
    }

  return false;
}

bool Parser::skipUntilStatement()
{
  while (token_stream.lookAhead())
    {
      switch(token_stream.lookAhead())
        {
        case ';':
        case '{':
        case '}':
        case Token_const:
        case Token_constexpr:
        case Token_decltype:
        case Token___typeof:
        case Token_volatile:
        case Token_mutable:
        case Token_identifier:
        case Token_case:
        case Token_default:
        case Token_if:
        case Token_switch:
        case Token_while:
        case Token_do:
        case Token_for:
        case Token_break:
        case Token_continue:
        case Token_return:
        case Token_goto:
        case Token_try:
        case Token_catch:
        case Token_throw:
        case Token_char:
        case Token_wchar_t:
        case Token_bool:
        case Token_short:
        case Token_int:
        case Token_long:
        case Token_signed:
        case Token_unsigned:
        case Token_float:
        case Token_double:
        case Token_void:
        case Token_class:
        case Token_struct:
        case Token_union:
        case Token_enum:
        case Token_scope:
        case Token_template:
        case Token_using:
          return true;

        default:
          nextToken();
        }
    }

  return false;
}

bool Parser::skip(int l, int r)
{
  int count = 0;
  while (token_stream.lookAhead())
    {
      int tk = token_stream.lookAhead();

      if (tk == l)
        ++count;
      else if (tk == r)
        --count;
      else if (l != '{' && (tk == '{' || tk == '}' || tk == ';'))
        return false;

      if (count == 0)
        return true;

      nextToken();
    }

  return false;
}

bool Parser::parseName(NameAST *&node, bool acceptTemplateId)
{
  std::size_t start = token_stream.cursor();

  WinDeclSpecAST *winDeclSpec = 0;
  while (skipAlignas() || (!winDeclSpec && parseWinDeclSpec(winDeclSpec)))
  {
    ;
  }

  NameAST *ast = CreateNode<NameAST>(_M_pool);

  if (token_stream.lookAhead() == Token_scope)
    {
      ast->global = true;
      nextToken();
    }

  std::size_t idx = token_stream.cursor();

  while (true)
    {
      UnqualifiedNameAST *n = 0;
      if (!parseUnqualifiedName(n, acceptTemplateId))
        return false;

      if (token_stream.lookAhead() == Token_scope)
        {
          nextToken();

          ast->qualified_names
            = snoc(ast->qualified_names, n, _M_pool);

          if (token_stream.lookAhead() == Token_template)
            {
              /// skip optional template     #### @todo CHECK
              nextToken();
            }
        }
      else
        {
          Q_ASSERT(n != 0);
          ast->unqualified_name = n;
          break;
        }
    }

  if (idx == token_stream.cursor())
    return false;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseTranslationUnit(TranslationUnitAST *&node)
{
  std::size_t start = token_stream.cursor();
  TranslationUnitAST *ast = CreateNode<TranslationUnitAST>(_M_pool);

  while (token_stream.lookAhead())
    {
      std::size_t startDecl = token_stream.cursor();

      DeclarationAST *declaration = 0;
      if (parseDeclaration(declaration))
        {
          ast->declarations =
            snoc(ast->declarations, declaration, _M_pool);
        }
      else
        {
          // error recovery
          if (startDecl == token_stream.cursor())
            {
              // skip at least one token
              nextToken();
            }

          skipUntilDeclaration();
        }
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseDeclaration(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  switch(token_stream.lookAhead())
    {
    case ';':
    // ignore ellipse in constructs like
    // using T1 = T2<f<Args>...>;
    case Token_ellipsis:
      nextToken();
      return true;

    case Token_extern:
      return parseLinkageSpecification(node);

    case Token_namespace:
      return parseNamespace(node);

    case Token_using:
      return parseUsing(node);

    case Token_typedef:
      return parseTypedef(node);

    case Token_asm:
      return parseAsmDefinition(node);

    case Token_Q_ENUMS:
        return parseQ_ENUMS(node);

    case Token_Q_ENUM:
      return parseQ_ENUM(node);

    case Token_template:
    case Token_export:
      return parseTemplateDeclaration(node);

    case Token_inline:
      if (token_stream.lookAhead(1) == Token_namespace)
        {
          nextToken();
          // handle like a normal namespace for now
          return parseNamespace(node);
        }
      // else fallthrough
    default:
      {
        skipAttributes();

        const ListNode<std::size_t> *cv = 0;
        const ListNode<std::size_t>* storageSpec = 0;
        // consume all qualifiers/specifiers
        while (parseCvQualify(cv) || parseStorageClassSpecifier(storageSpec))
        {
          ;
        }

        TypeSpecifierAST *spec = 0;
        if (parseEnumSpecifier(spec)
            || parseClassSpecifier(spec)
            || parseForwardDeclarationSpecifier(spec))
          {
            parseCvQualify(cv);

            spec->cv = cv;

            const ListNode<InitDeclaratorAST*> *declarators = 0;
            parseInitDeclaratorList(declarators);
            ADVANCE(';', ";");

            SimpleDeclarationAST *ast =
              CreateNode<SimpleDeclarationAST>(_M_pool);

            ast->storage_specifiers = storageSpec;
            ast->type_specifier = spec;
            ast->init_declarators = declarators;
            UPDATE_POS(ast, start, token_stream.cursor());
            node = ast;

            return true;
          }
      }
    } // end switch

  rewind(start);
  return parseDeclarationInternal(node);
}

bool Parser::parseLinkageSpecification(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(Token_extern);

  LinkageSpecificationAST *ast = CreateNode<LinkageSpecificationAST>(_M_pool);

  if (token_stream.lookAhead() == Token_string_literal)
    {
      ast->extern_type = token_stream.cursor();
      nextToken();
    }

  if (token_stream.lookAhead() == '{')
    {
      parseLinkageBody(ast->linkage_body);
    }
  else if (!parseDeclaration(ast->declaration))
    {
      reportError(("Declaration syntax error"));
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseLinkageBody(LinkageBodyAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK('{');

  LinkageBodyAST *ast = CreateNode<LinkageBodyAST>(_M_pool);

  while (token_stream.lookAhead())
    {
      int tk = token_stream.lookAhead();

      if (tk == '}')
        break;

      std::size_t startDecl = token_stream.cursor();

      DeclarationAST *declaration = 0;
      if (parseDeclaration(declaration))
        {
          ast->declarations = snoc(ast->declarations, declaration, _M_pool);
        }
      else
        {
          // error recovery
          if (startDecl == token_stream.cursor())
            {
              // skip at least one token
              nextToken();
            }

          skipUntilDeclaration();
        }
    }

  if (token_stream.lookAhead() != '}')
    reportError(("} expected"));
  else
    nextToken();

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseNamespace(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(Token_namespace);

  std::size_t namespace_name = 0;
  if (token_stream.lookAhead() == Token_identifier)
    {
      namespace_name = token_stream.cursor();
      nextToken();
    }

  if (token_stream.lookAhead() == '=')
    {
      // namespace alias
      nextToken();

      NameAST *name = 0;
      if (parseName(name))
        {
          ADVANCE(';', ";");

          NamespaceAliasDefinitionAST *ast
            = CreateNode<NamespaceAliasDefinitionAST>(_M_pool);
          ast->namespace_name = namespace_name;
          ast->alias_name = name;
          UPDATE_POS(ast, start, token_stream.cursor());
          node = ast;
          return true;
        }
      else
        {
          reportError(("namespace expected"));
          return false;
        }
    }
  else if (token_stream.lookAhead() != '{')
    {
      reportError(("{ expected"));
      return false;
    }

  NamespaceAST *ast = CreateNode<NamespaceAST>(_M_pool);
  ast->namespace_name = namespace_name;
  parseLinkageBody(ast->linkage_body);

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseUsing(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(Token_using);

  if (token_stream.lookAhead(1) == '=')
  {
      return parseUsingTypedef(node);
  }

  if (token_stream.lookAhead() == Token_namespace)
    return parseUsingDirective(node);

  UsingAST *ast = CreateNode<UsingAST>(_M_pool);

  if (token_stream.lookAhead() == Token_typename)
    {
      ast->type_name = token_stream.cursor();
      nextToken();
    }

  if (!parseName(ast->name, /*acceptTemplateId=*/true))
    return false;

  ADVANCE(';', ";");

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseUsingTypedef(DeclarationAST*& node)
{
    std::size_t start = token_stream.cursor();

    DeclaratorAST* decl = 0;
    if (!parseDeclarator(decl))
    {
        return false;
    }

    InitDeclaratorAST* init_decl = CreateNode<InitDeclaratorAST>(_M_pool);
    init_decl->declarator = decl;
    init_decl->initializer = 0;
    const ListNode<InitDeclaratorAST*>* declarators = 0;
    declarators = snoc(declarators, init_decl, _M_pool);

    ADVANCE('=', "=");

    TypeSpecifierAST* spec = 0;
    if (!parseTypeSpecifierOrClassSpec(spec))
    {
        reportError(("Need a type specifier to declare"));
        return false;
    }

    TypedefAST* ast = CreateNode<TypedefAST>(_M_pool);
    ast->type_specifier = spec;
    ast->init_declarators = declarators;

    UPDATE_POS(ast, start, token_stream.cursor());
    node = ast;

    return true;
}
    
bool Parser::parseUsingDirective(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(Token_namespace);

  NameAST *name = 0;
  if (!parseName(name))
    {
      reportError(("Namespace name expected"));
      return false;
    }

  ADVANCE(';', ";");

  UsingDirectiveAST *ast = CreateNode<UsingDirectiveAST>(_M_pool);
  ast->name = name;
  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}


bool Parser::parseOperatorFunctionId(OperatorFunctionIdAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(Token_operator);

  OperatorFunctionIdAST *ast = CreateNode<OperatorFunctionIdAST>(_M_pool);

  if (!parseOperator(ast->op))
    {
      ast->op = 0;

      // parse cast operator
      const ListNode<std::size_t> *cv = 0;
      parseCvQualify(cv);

      if (!parseSimpleTypeSpecifier(ast->type_specifier))
        {
          SYNTAX_ERROR();
          return false;
        }

      parseCvQualify(cv);
      ast->type_specifier->cv = cv;

      PtrOperatorAST *ptr_op = 0;
      while (parsePtrOperator(ptr_op))
        ast->ptr_ops = snoc(ast->ptr_ops, ptr_op, _M_pool);
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;
  return true;
}

bool Parser::parseTemplateArgumentList(const ListNode<TemplateArgumentAST*> *&node,
                                       bool reportError)
{
  TemplateArgumentAST *templArg = 0;
  if (!parseTemplateArgument(templArg))
    return false;

  node = snoc(node, templArg, _M_pool);

  while (token_stream.lookAhead() == ',')
    {
      nextToken();

      if (!parseTemplateArgument(templArg))
        {
          if (reportError)
            {
              SYNTAX_ERROR();
              break;
            }

          node = 0;
          return false;
        }

      node = snoc(node, templArg, _M_pool);
    }

  return true;
}

bool Parser::parseTypedef(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(Token_typedef);

  TypeSpecifierAST *spec = 0;
  if (!parseTypeSpecifierOrClassSpec(spec))
    {
      reportError(("Need a type specifier to declare"));
      return false;
    }

  const ListNode<InitDeclaratorAST*> *declarators = 0;
  if (!parseInitDeclaratorList(declarators))
    {
      //reportError(("Need an identifier to declare"));
      //return false;
    }

  ADVANCE(';', ";");

  TypedefAST *ast = CreateNode<TypedefAST>(_M_pool);
  ast->type_specifier = spec;
  ast->init_declarators = declarators;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseAsmDefinition(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  ADVANCE(Token_asm, "asm");

  const ListNode<std::size_t> *cv = 0;
  parseCvQualify(cv);

#if defined(__GNUC__)
#pragma GCC warning "implement me"
#endif
  skip('(', ')');
  nextToken();
  ADVANCE(';', ";");

  AsmDefinitionAST *ast = CreateNode<AsmDefinitionAST>(_M_pool);
  ast->cv = cv;
  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseTemplateDeclaration(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  std::size_t exported = 0;
  if (token_stream.lookAhead() == Token_export)
    {
      exported = token_stream.cursor();
      nextToken();
    }

  CHECK(Token_template);

  const ListNode<TemplateParameterAST*> *params = 0;
  if (token_stream.lookAhead() == '<')
    {
      nextToken();
      parseTemplateParameterList(params);

      resolveRightShift();
      ADVANCE('>', ">");
    }

  DeclarationAST *declaration = 0;
  if (!parseDeclaration(declaration))
    {
      reportError(("expected a declaration"));
    }

  TemplateDeclarationAST *ast = CreateNode<TemplateDeclarationAST>(_M_pool);
  ast->exported = exported;
  ast->template_parameters = params;
  ast->declaration = declaration;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseOperator(OperatorAST *&node)
{
  std::size_t start = token_stream.cursor();

  OperatorAST *ast = CreateNode<OperatorAST>(_M_pool);

  switch(token_stream.lookAhead())
    {
    case Token_new:
    case Token_delete:
      {
        ast->op = token_stream.cursor();
        nextToken();

        if (token_stream.lookAhead() == '['
            && token_stream.lookAhead(1) == ']')
          {
            ast->open = token_stream.cursor();
            nextToken();

            ast->close = token_stream.cursor();
            nextToken();
          }
      }
      break;

    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '^':
    case '&':
    case '|':
    case '~':
    case '!':
    case '=':
    case '<':
    case '>':
    case ',':
    case Token_assign:
    case Token_shift_left:
    case Token_eq:
    case Token_not_eq:
    case Token_leq:
    case Token_geq:
    case Token_and:
    case Token_or:
    case Token_incr:
    case Token_decr:
    case Token_ptrmem:
    case Token_arrow:
      ast->op = token_stream.cursor();
      nextToken();
      break;

    case Token_shift_right:
      ast->op = token_stream.cursor();
      nextToken();
      // skip placeholder
      nextToken();
      break;

    default:
      if (token_stream.lookAhead() == '('
          && token_stream.lookAhead(1) == ')')
        {
          ast->op = ast->open = token_stream.cursor();
          nextToken();
          ast->close = token_stream.cursor();
          nextToken();
        }
      else if (token_stream.lookAhead() == '['
               && token_stream.lookAhead(1) == ']')
        {
          ast->op = ast->open = token_stream.cursor();
          nextToken();
          ast->close = token_stream.cursor();
          nextToken();
        }
      else if (token_stream.lookAhead() == Token_string_literal
               && token_stream.lookAhead(1) == Token_identifier)
        {
          // string literal operator
          ast->op = token_stream.cursor();
          nextToken();
          // skip string literal suffix for now
          nextToken();
        }
      else
        {
          return false;
        }
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseCvQualify(const ListNode<std::size_t> *&node)
{
  std::size_t start = token_stream.cursor();

  int tk;
  while (0 != (tk = token_stream.lookAhead())
         && (tk == Token_const ||
             tk == Token_volatile || tk == Token_mutable))
    {
      node = snoc(node, token_stream.cursor(), _M_pool);
      nextToken();
    }

  return start != token_stream.cursor();
}

bool Parser::parseSimpleTypeSpecifier(TypeSpecifierAST *&node,
                                      bool onlyIntegral)
{
  std::size_t start = token_stream.cursor();
  bool isIntegral = false;
  bool done = false;

  const ListNode<std::size_t> *integrals = 0;

  while (!done)
    {
      switch(token_stream.lookAhead())
        {
        case Token_char:
        case Token_wchar_t:
        case Token_bool:
        case Token_short:
        case Token_int:
        case Token_long:
        case Token_signed:
        case Token_unsigned:
        case Token_float:
        case Token_double:
        case Token_void:
          integrals = snoc(integrals, token_stream.cursor(), _M_pool);
          isIntegral = true;
          nextToken();
          break;

        default:
          done = true;
        }
    }

  SimpleTypeSpecifierAST *ast = CreateNode<SimpleTypeSpecifierAST>(_M_pool);
  if (isIntegral)
    {
      ast->integrals = integrals;
    }
  else if (token_stream.lookAhead() == Token_auto)
    {
      nextToken();
      ast->is_auto = true;
    }
  else if (token_stream.lookAhead() == Token___typeof ||
           token_stream.lookAhead() == Token_decltype)
    {
      ast->type_of = token_stream.cursor();
      nextToken();

      if (token_stream.lookAhead() == '(')
        {
          nextToken();

          std::size_t saved = token_stream.cursor();
          parseTypeId(ast->type_id);
          if (token_stream.lookAhead() != ')')
            {
              ast->type_id = 0;
              rewind(saved);
              parseCommaExpression(ast->expression);
            }
          ADVANCE(')', ")");
        }
      else
        {
          parseUnaryExpression(ast->expression);
        }
    }
  else if (onlyIntegral)
    {
      rewind(start);
      return false;
    }
  else
    {
      if (token_stream.lookAhead() == Token_typename)
        {
          nextToken(); // simply skip for now
        }
      if (!parseName(ast->name, true))
        {
          ast->name = 0;
          rewind(start);
          return false;
        }
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parsePtrOperator(PtrOperatorAST *&node)
{
  int tk = token_stream.lookAhead();

  if (tk != '&' && tk != Token_and && tk != '*'
      && tk != Token_scope && tk != Token_identifier)
    {
      return false;
    }

  std::size_t start = token_stream.cursor();

  PtrOperatorAST *ast = CreateNode<PtrOperatorAST>(_M_pool);

  switch (token_stream.lookAhead())
    {
    case '&':
    case '*':
    case Token_and:
      ast->op = token_stream.cursor();
      nextToken();
      break;

    case Token_scope:
    case Token_identifier:
      {
        if (!parsePtrToMember(ast->mem_ptr))
          {
            rewind(start);
            return false;
          }
      }
      break;

    default:
      Q_ASSERT(0);
      break;
    }

  parseCvQualify(ast->cv);

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseTemplateArgument(TemplateArgumentAST *&node)
{
  std::size_t start = token_stream.cursor();

  TypeIdAST *typeId = 0;
  ExpressionAST *expr = 0;

  if (!parseTypeId(typeId) || (token_stream.lookAhead() != ','
                               && token_stream.lookAhead() != Token_ellipsis
                               && token_stream.lookAhead() != '>'
                               && token_stream.lookAhead() != Token_shift_right))
    {
      rewind(start);

      if (!parseLogicalOrExpression(expr, true))
        return false;
    }

  TemplateArgumentAST *ast = CreateNode<TemplateArgumentAST>(_M_pool);
  ast->type_id = typeId;
  ast->expression = expr;

  if (token_stream.lookAhead() == Token_ellipsis) {
    nextToken();
    ast->variadic = true;
  }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseTypeSpecifier(TypeSpecifierAST *&node)
{
  std::size_t start = token_stream.cursor();

  skipAttributes();

  const ListNode<std::size_t> *cv = 0;
  parseCvQualify(cv);

  TypeSpecifierAST *ast = 0;
  if (!parseElaboratedTypeSpecifier(ast) && !parseSimpleTypeSpecifier(ast))
    {
      rewind(start);
      return false;
    }

  parseCvQualify(cv);
  ast->cv = cv;

  node = ast;

  return true;
}

bool Parser::parseDeclarator(DeclaratorAST *&node, bool asParameter)
{
  std::size_t start = token_stream.cursor();

  DeclaratorAST *ast = CreateNode<DeclaratorAST>(_M_pool);

  DeclaratorAST *decl = 0;
  NameAST *declId = 0;

  PtrOperatorAST *ptrOp = 0;
  while (parsePtrOperator(ptrOp))
    {
      ast->ptr_ops = snoc(ast->ptr_ops, ptrOp, _M_pool);
    }

  if (token_stream.lookAhead() == '(')
    {
      nextToken();

      if (!parseDeclarator(decl))
        return false;

      ast->sub_declarator = decl;

      CHECK(')');
    }
  else
    {
      if (token_stream.lookAhead() == ':')
        {
          // unnamed bitfield
        }
      else
        {
          if (asParameter && token_stream.lookAhead() == Token_ellipsis)
            {
              // parameter pack
              nextToken();
              ast->packedParameter = true;
            }
          if (parseName(declId, true))
            {
              ast->id = declId;
            }
          else
            {
              rewind(start);
              return false;
            }
        }

      if (token_stream.lookAhead() == ':')
        {
          nextToken();

          if (!parseConstantExpression(ast->bit_expression))
            {
              reportError(("Constant expression expected"));
            }
          goto update_pos;
        }
    }

  {
    bool isVector = true;

    while (token_stream.lookAhead() == '[')
      {
        nextToken();

        ExpressionAST *expr = 0;
        parseCommaExpression(expr);

        ADVANCE(']', "]");

        ast->array_dimensions = snoc(ast->array_dimensions, expr, _M_pool);
        isVector = true;
      }

    bool skipParen = false;
    if (token_stream.lookAhead() == Token_identifier
        && token_stream.lookAhead(1) == '('
        && token_stream.lookAhead(2) == '(')
      {
        nextToken();
        nextToken();
        skipParen = true;
      }

    int tok = token_stream.lookAhead();
    if (ast->sub_declarator
        && !(isVector || tok == '(' || tok == ','
             || tok == ';' || tok == '='))
      {
        rewind(start);
        return false;
      }

    if (parseDeclaratorParametersAndSuffix(ast)) {

      if (token_stream.lookAhead() == Token_identifier &&
        token_stream.symbol(token_stream.cursor())->as_string() == "override")
      {
        nextToken();
        ast->_override = true;
      }
      skipAttributes();

      if (skipParen)
      {
        if (token_stream.lookAhead() != ')')
        {
          reportError(("')' expected"));
        }
        else
          nextToken();
      }

    }
  }

 update_pos:
  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseAbstractDeclarator(DeclaratorAST *&node)
{
  std::size_t start = token_stream.cursor();

  DeclaratorAST *ast = CreateNode<DeclaratorAST>(_M_pool);
  DeclaratorAST *decl = 0;

  PtrOperatorAST *ptrOp = 0;
  while (parsePtrOperator(ptrOp))
    {
      ast->ptr_ops = snoc(ast->ptr_ops, ptrOp, _M_pool);
    }

  int index = (int) token_stream.cursor();
  if (token_stream.lookAhead() == '(')
    {
      nextToken();

      if (!parseAbstractDeclarator(decl))
        {
          rewind(index);
          goto label1;
        }

      ast->sub_declarator = decl;

      if (token_stream.lookAhead() != ')')
        {
          rewind(start);
          return false;
        }
      nextToken();
    }
  else if (token_stream.lookAhead() == ':')
    {
      nextToken();
      if (!parseConstantExpression(ast->bit_expression))
        {
          ast->bit_expression = 0;
          reportError(("Constant expression expected"));
        }
      goto update_pos;
    }

 label1:
  {
    bool isVector = true;

    while (token_stream.lookAhead() == '[')
      {
        nextToken();

        ExpressionAST *expr = 0;
        parseCommaExpression(expr);

        ADVANCE(']', "]");

        ast->array_dimensions = snoc(ast->array_dimensions, expr, _M_pool);
        isVector = true;
      }

    int tok = token_stream.lookAhead();
    if (ast->sub_declarator
        && !(isVector || tok == '(' || tok == ','
             || tok == ';' || tok == '='))
      {
        rewind(start);
        return false;
      }

    parseDeclaratorParametersAndSuffix(ast);
  }

 update_pos:
  if (token_stream.cursor() == start)
    return false;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseDeclaratorParametersAndSuffix(DeclaratorAST* ast)
{
  std::size_t index = token_stream.cursor();
  if (token_stream.lookAhead() == '(')
  {
    nextToken();

    ParameterDeclarationClauseAST* params = 0;
    if (!parseParameterDeclarationClause(params))
    {
      rewind(index);
      return false;
    }

    ast->parameter_declaration_clause = params;

    if (token_stream.lookAhead() != ')')
    {
      rewind(index);
      return false;
    }

    nextToken();  // skip ')'

    parseCvQualify(ast->fun_cv);
    if (token_stream.lookAhead() == '&')
    {
      ast->valueRef = DeclaratorAST::Lvalue;
      nextToken();
    }
    else if (token_stream.lookAhead() == Token_and)
    {
      ast->valueRef = DeclaratorAST::Rvalue;
      nextToken();
    }
    parseExceptionSpecification(ast->exception_spec);
    return true;
  }
  return false;
}

bool Parser::parseEnumSpecifier(TypeSpecifierAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(Token_enum);

  bool enum_class{};
  if (token_stream.lookAhead() == Token_class)
    {
      enum_class = true;
      nextToken();
    }

  NameAST *name = 0;
  parseName(name);

  if(token_stream.lookAhead() == ':')
    {
      nextToken();
      TypeSpecifierAST *ast = 0;
      if (!parseSimpleTypeSpecifier(ast))
        {
          rewind(start);
          return false;
        }
    }

  if (token_stream.lookAhead() != '{')
    {
      rewind(start);
      return false;
    }
  nextToken();

  EnumSpecifierAST *ast = CreateNode<EnumSpecifierAST>(_M_pool);
  ast->name = name;
  ast->is_enum_class = enum_class;

  EnumeratorAST *enumerator = 0;
  if (parseEnumerator(enumerator))
    {
      ast->enumerators = snoc(ast->enumerators, enumerator, _M_pool);

      while (token_stream.lookAhead() == ',')
        {
          nextToken();

          if (!parseEnumerator(enumerator))
            {
              //reportError(("Enumerator expected"));
              break;
            }

          ast->enumerators = snoc(ast->enumerators, enumerator, _M_pool);
        }
    }

  ADVANCE_NR('}', "}");

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseTemplateParameterList(const ListNode<TemplateParameterAST*> *&node)
{
  TemplateParameterAST *param = 0;
  if (!parseTemplateParameter(param))
    return false;

  node = snoc(node, param, _M_pool);

  while (token_stream.lookAhead() == ',')
    {
      nextToken();

      if (!parseTemplateParameter(param))
        {
          SYNTAX_ERROR();
          break;
        }
      else
        {
          node = snoc(node, param, _M_pool);
        }
    }

  if (token_stream.lookAhead() == Token_ellipsis)
    {
      // ignore variadic template parameters as in
      // template<class Tuple, std::size_t... I>
      token_stream.nextToken();
      if (token_stream.lookAhead() == Token_identifier)
        {
          token_stream.nextToken();
        }
    }

  return true;
}

bool Parser::parseTemplateParameter(TemplateParameterAST *&node)
{
  std::size_t start = token_stream.cursor();
  TemplateParameterAST *ast = CreateNode<TemplateParameterAST>(_M_pool);

  int tk = token_stream.lookAhead();

  if ((tk == Token_class || tk == Token_typename || tk == Token_template)
      && parseTypeParameter(ast->type_parameter))
    {
      if (token_stream.lookAhead() == '=' || token_stream.lookAhead() == Token_assign)
        {
          // default template parameter
          token_stream.nextToken();
          TypeSpecifierAST* typeNode = 0;
          parseTypeSpecifier(typeNode);
        }
    }
  else if (!parseParameterDeclaration(ast->parameter_declaration))
    return false;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseTypeParameter(TypeParameterAST *&node)
{
  std::size_t start = token_stream.cursor();

  TypeParameterAST *ast = CreateNode<TypeParameterAST>(_M_pool);
  ast->type = start;

  switch(token_stream.lookAhead())
    {
    case Token_class:
    case Token_typename:
      {
        nextToken(); // skip class

        if (token_stream.lookAhead() == Token_ellipsis)
        {
            // skip variadic parameters in template parameter list
            nextToken();
        }

        // parse optional name
        if(parseName(ast->name, true))
          {
            if (token_stream.lookAhead() == '=')
              {
                nextToken();

                if(!parseTypeId(ast->type_id))
                  {
                    //SYNTAX_ERROR();
                    rewind(start);
                    return false;
                  }
              }
            else if (token_stream.lookAhead() != ','
                     && token_stream.lookAhead() != '>')
              {
                rewind(start);
                return false;
              }
          }
      }
      break;

    case Token_template:
      {
        nextToken(); // skip template
        ADVANCE('<', "<");

        if (!parseTemplateParameterList(ast->template_parameters))
          return false;

        ADVANCE('>', ">");

        if (token_stream.lookAhead() == Token_class)
          nextToken();

        // parse optional name
        if (parseName(ast->name, true))
          {
            if (token_stream.lookAhead() == '=')
              {
                nextToken();

                if (!parseTypeId(ast->type_id))
                  {
                    SYNTAX_ERROR();
                    return false;
                  }
              }
          }

        if (token_stream.lookAhead() == '=')
          {
            nextToken();

            parseName(ast->template_name, true);
          }
      }
      break;

    default:
      return false;

    } // end switch


  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;
  return true;
}

bool Parser::parseStorageClassSpecifier(const ListNode<std::size_t> *&node)
{
  std::size_t start = token_stream.cursor();

  int tk;
  while (0 != (tk = token_stream.lookAhead())
         && (tk == Token_friend
             // || tk == Token_auto  // I believe "auto" isn't used as storage class specifier in Qt, and it collides with the type-specifier of the same name
             || tk == Token_register || tk == Token_static
             || tk == Token_extern))
    {
      node = snoc(node, token_stream.cursor(), _M_pool);
      nextToken();
    }

  return start != token_stream.cursor();
}

bool Parser::parseFunctionSpecifier(const ListNode<std::size_t> *&node)
{
  std::size_t start = token_stream.cursor();

  int tk;
  while (0 != (tk = token_stream.lookAhead())
         && (tk == Token_constexpr || tk == Token_inline || tk == Token_virtual
             || tk == Token_explicit || tk == Token_Q_INVOKABLE))
    {
      node = snoc(node, token_stream.cursor(), _M_pool);
      nextToken();
    }

  return start != token_stream.cursor();
}

bool Parser::parseTypeId(TypeIdAST *&node)
{
  /// @todo implement the AST for typeId
  std::size_t start = token_stream.cursor();

  TypeSpecifierAST *spec = 0;
  if (!parseTypeSpecifier(spec))
    {
      rewind(start);
      return false;
    }

  DeclaratorAST *decl = 0;
  parseAbstractDeclarator(decl);

  TypeIdAST *ast = CreateNode<TypeIdAST>(_M_pool);
  ast->type_specifier = spec;
  ast->declarator = decl;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseInitDeclaratorList(const ListNode<InitDeclaratorAST*> *&node)
{
  InitDeclaratorAST *decl = 0;
  if (!parseInitDeclarator(decl))
    return false;

  node = snoc(node, decl, _M_pool);

  while (token_stream.lookAhead() == ',')
    {
      nextToken();

      if (!parseInitDeclarator(decl))
        {
          SYNTAX_ERROR();
          break;
        }
      node = snoc(node, decl, _M_pool);
    }

  return true;
}

bool Parser::parseParameterDeclarationClause(ParameterDeclarationClauseAST *&node)
{
  std::size_t start = token_stream.cursor();

  ParameterDeclarationClauseAST *ast
    = CreateNode<ParameterDeclarationClauseAST>(_M_pool);

  if (!parseParameterDeclarationList(ast->parameter_declarations))
    {
      if (token_stream.lookAhead() == ')')
        goto good;

      if (token_stream.lookAhead() == Token_ellipsis
          && token_stream.lookAhead(1) == ')')
        {
          ast->ellipsis = token_stream.cursor();
          goto good;
        }

      return false;
    }

 good:

  if (token_stream.lookAhead() == Token_ellipsis)
    {
      ast->ellipsis = token_stream.cursor();
      nextToken();
    }

  /// @todo add ellipsis
  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseParameterDeclarationList(const ListNode<ParameterDeclarationAST*> *&node)
{
  std::size_t start = token_stream.cursor();

  ParameterDeclarationAST *param = 0;
  if (!parseParameterDeclaration(param))
    {
      rewind(start);
      return false;
    }

  node = snoc(node, param, _M_pool);

  while (token_stream.lookAhead() == ',')
    {
      nextToken();

      if (token_stream.lookAhead() == Token_ellipsis)
        break;

      if (!parseParameterDeclaration(param))
        {
          rewind(start);
          return false;
        }
      node = snoc(node, param, _M_pool);
    }

  return true;
}

bool Parser::parseParameterDeclaration(ParameterDeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  const ListNode<std::size_t> *storage = 0;
  parseStorageClassSpecifier(storage);

  // parse decl spec
  TypeSpecifierAST *spec = 0;
  if (!parseTypeSpecifier(spec))
    {
      rewind(start);
      return false;
    }

  int index = (int) token_stream.cursor();

  DeclaratorAST *decl = 0;
  if (!parseDeclarator(decl, /*asParameter=*/true))
    {
      rewind(index);

      // try with abstract declarator
      parseAbstractDeclarator(decl);
    }

  ExpressionAST *expr = 0;
  if (token_stream.lookAhead() == '=')
    {
      nextToken();
      if (!parseLogicalOrExpression(expr,true))
        {
          //reportError(("Expression expected"));
        }
    }

  ParameterDeclarationAST *ast = CreateNode<ParameterDeclarationAST>(_M_pool);
  ast->type_specifier = spec;
  ast->declarator = decl;
  ast->expression = expr;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parse_Attribute__() {
    nextToken();

    ADVANCE('(', "(");

    ExpressionAST *expr = 0;
    parseExpression(expr);

    if (token_stream.lookAhead() != ')')
        {
            reportError(("')' expected"));
            return false;
        }
    else
        {
            nextToken();
        }
    return true;
}

QString Parser::tokenText(AST *ast) const
{
    if (ast == 0) return QString();

    size_t start_token = ast->start_token;
    size_t end_token = ast->end_token;

    Token const &tk = token_stream.token (start_token);
    Token const &end_tk = token_stream.token(end_token);

    return QString::fromLatin1 (&tk.text[tk.position],(int) (end_tk.position - tk.position)).trimmed();
}

bool Parser::parseForwardDeclarationSpecifier(TypeSpecifierAST *&node)
{
  std::size_t start = token_stream.cursor();

  int kind = token_stream.lookAhead();
  if (kind != Token_class && kind != Token_struct && kind != Token_union && kind != Token_enum)
    return false;

  std::size_t class_key = token_stream.cursor();
  nextToken();

  if (kind == Token_enum && token_stream.lookAhead() == Token_class)
    {
      nextToken();
    }

  NameAST *name = 0;
  if (!parseName(name, false)) {
      rewind(start);
      return false;
  }

  BaseClauseAST *bases = 0;
  if (token_stream.lookAhead() == ':')
    {
      if (!parseBaseClause(bases))
        {
          rewind(start);
          return false;
        }
    }

  if (token_stream.lookAhead() != ';')
    {
        rewind(start);
        return false;
    }

  ForwardDeclarationSpecifierAST *ast = CreateNode<ForwardDeclarationSpecifierAST>(_M_pool);
  ast->class_key = class_key;
  ast->name = name;
  ast->base_clause = bases;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseClassSpecifier(TypeSpecifierAST *&node)
{
  std::size_t start = token_stream.cursor();

  int kind = token_stream.lookAhead();
  if (kind != Token_class && kind != Token_struct && kind != Token_union)
    return false;

  std::size_t class_key = token_stream.cursor();
  nextToken();

  WinDeclSpecAST *winDeclSpec = 0;
  while (skipAttributes() || skipAlignas() || (!winDeclSpec && parseWinDeclSpec(winDeclSpec)))
  {
    ;
  }

  while (token_stream.lookAhead() == Token_identifier
         && token_stream.lookAhead(1) == Token_identifier)
    {
      nextToken();
    }

  NameAST *name = 0;
  parseName(name, true);
  
  BaseClauseAST *bases = 0;

  if (token_stream.lookAhead() == ':')
    {
      if (!parseBaseClause(bases))
        {
          skipUntil('{');
        }
    }

  if (token_stream.lookAhead() != '{')
    {

      rewind(start);
      return false;
    }

  ADVANCE('{', "{");

  ClassSpecifierAST *ast = CreateNode<ClassSpecifierAST>(_M_pool);
  ast->win_decl_specifiers = winDeclSpec;
  ast->class_key = class_key;
  ast->name = name;
  ast->base_clause = bases;

  while (token_stream.lookAhead())
    {
      if (token_stream.lookAhead() == '}')
        break;

      std::size_t startDecl = token_stream.cursor();

      DeclarationAST *memSpec = 0;
      if (!parseMemberSpecification(memSpec))
        {
          if (startDecl == token_stream.cursor())
            nextToken(); // skip at least one token
          skipUntilDeclaration();
        }
      else
        ast->member_specs = snoc(ast->member_specs, memSpec, _M_pool);
    }

  ADVANCE_NR('}', "}");

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseAccessSpecifier(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  const ListNode<std::size_t> *specs = 0;

  bool done = false;
  while (!done)
    {
      switch(token_stream.lookAhead())
        {
        case Token_signals:
        case Token_slots:
        case Token_k_dcop:
        case Token_k_dcop_signals:
        case Token_public:
        case Token_protected:
        case Token_private:
          specs = snoc(specs, token_stream.cursor(), _M_pool);
          nextToken();
          break;

        default:
          done = true;
          break;
        }
    }

  if (!specs)
    return false;

  ADVANCE(':', ":");

  AccessSpecifierAST *ast = CreateNode<AccessSpecifierAST>(_M_pool);
  ast->specs = specs;
  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseMemberSpecification(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (token_stream.lookAhead() == ';')
    {
      nextToken();
      return true;
    }
  else if (token_stream.lookAhead() == Token_Q_OBJECT || token_stream.lookAhead() == Token_K_DCOP)
    {
      nextToken();
      return true;
    }
  else if (parseTypedef(node))
    {
      return true;
    }
  else if (parseUsing(node))
    {
      return true;
    }
  else if (parseTemplateDeclaration(node))
    {
      return true;
    }
  else if (parseAccessSpecifier(node))
    {
      return true;
    }
  else if (parseQ_PROPERTY(node))
    {
      return true;
    }
  else if (parseQ_ENUMS(node))
    {
      return true;
    }
  else if (parseQ_ENUM(node))
  {
    return true;
  }

  rewind(start);

  const ListNode<std::size_t> *cv = 0;
  const ListNode<std::size_t>* storageSpec = 0;
  // consume all qualifiers/specifiers
  while (parseCvQualify(cv) || parseStorageClassSpecifier(storageSpec))
  {
    ;
  }

  TypeSpecifierAST *spec = 0;
  if (parseEnumSpecifier(spec) || parseClassSpecifier(spec))
    {
      parseCvQualify(cv);
      spec->cv = cv;

      const ListNode<InitDeclaratorAST*> *declarators = 0;
      parseInitDeclaratorList(declarators);
      ADVANCE(';', ";");

      SimpleDeclarationAST *ast = CreateNode<SimpleDeclarationAST>(_M_pool);
      ast->type_specifier = spec;
      ast->init_declarators = declarators;
      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;

      return true;
    }

  rewind(start);
  return parseDeclarationInternal(node);
}

bool Parser::parseCtorInitializer(CtorInitializerAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(':');

  CtorInitializerAST *ast = CreateNode<CtorInitializerAST>(_M_pool);
  ast->colon = start;

  if (!parseMemInitializerList(ast->member_initializers))
    {
      reportError(("Member initializers expected"));
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseElaboratedTypeSpecifier(TypeSpecifierAST *&node)
{
  std::size_t start = token_stream.cursor();

  int tk = token_stream.lookAhead();
  if (tk == Token_class  ||
      tk == Token_struct ||
      tk == Token_union  ||
      tk == Token_enum   ||
      tk == Token_typename)
    {
      std::size_t type = token_stream.cursor();
      nextToken();

      NameAST *name = 0;
      if (parseName(name, true))
        {
          ElaboratedTypeSpecifierAST *ast
            = CreateNode<ElaboratedTypeSpecifierAST>(_M_pool);

          ast->type = type;
          ast->name = name;

          UPDATE_POS(ast, start, token_stream.cursor());
          node = ast;

          return true;
        }
    }

  rewind(start);
  return false;
}

bool Parser::parseExceptionSpecification(ExceptionSpecificationAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (token_stream.lookAhead() == Token_noexcept)
  {
    // ignore noexcept
    nextToken();
    if (token_stream.lookAhead() == '(')
    {
      nextToken();
      ExpressionAST* node;
      parseCommaExpression(node);
      CHECK(')');
    }
    return true;
  }

  CHECK(Token_throw);
  ADVANCE('(', "(");

  ExceptionSpecificationAST *ast
    = CreateNode<ExceptionSpecificationAST>(_M_pool);

  if (token_stream.lookAhead() == Token_ellipsis)
    {
      ast->ellipsis = token_stream.cursor();
      nextToken();
    }
  else
    {
      parseTypeIdList(ast->type_ids);
    }

  ADVANCE(')', ")");

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseEnumerator(EnumeratorAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(Token_identifier);
  std::size_t id = token_stream.cursor() - 1;

  EnumeratorAST *ast = CreateNode<EnumeratorAST>(_M_pool);
  ast->id = id;

  skipAttributes();

  if (token_stream.lookAhead() == '=')
    {
      nextToken();

      if (!parseConstantExpression(ast->expression))
        {
          reportError(("Constant expression expected"));
        }
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseInitDeclarator(InitDeclaratorAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (token_stream.lookAhead(0) == Token_ellipsis)
    {
      // for now just ignore variadic parameters
      token_stream.nextToken();
      return true;
    }
      
  DeclaratorAST *decl = 0;
  if (!parseDeclarator(decl))
    {
      return false;
    }

  if (token_stream.lookAhead(0) == Token_asm)
    {
      nextToken();
      skip('(', ')');
      nextToken();
    }

  InitializerAST *init = 0;
  parseInitializer(init, !decl->parameter_declaration_clause);

  InitDeclaratorAST *ast = CreateNode<InitDeclaratorAST>(_M_pool);
  ast->declarator = decl;
  ast->initializer = init;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseBaseClause(BaseClauseAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(':');

  BaseSpecifierAST *baseSpec = 0;
  if (!parseBaseSpecifier(baseSpec))
    return false;

  BaseClauseAST *ast = CreateNode<BaseClauseAST>(_M_pool);
  ast->base_specifiers = snoc(ast->base_specifiers, baseSpec, _M_pool);

  while (token_stream.lookAhead() == ',')
    {
      nextToken();

      if (!parseBaseSpecifier(baseSpec))
        {
          reportError(("Base class specifier expected"));
          break;
        }
      ast->base_specifiers = snoc(ast->base_specifiers, baseSpec, _M_pool);
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseInitializer(InitializerAST *&node, bool allowNewStyle)
{
  std::size_t start = token_stream.cursor();

  int tk = token_stream.lookAhead();
  if (tk != '=' && tk != '(' && !(allowNewStyle && tk == '{'))
    return false;

  InitializerAST *ast = CreateNode<InitializerAST>(_M_pool);

  if (tk == '=')
    {
      nextToken();
      tk = token_stream.lookAhead();
      // this is also used for methods:
      if (tk == Token_delete)
        {
          ast->isDeleted = true;
          nextToken();
        }
      else if (tk == Token_default)
        {
          ast->isDefault = true;
          nextToken();
        }
      else if (!parseInitializerClause(ast->initializer_clause))
        {
          reportError(("Initializer clause expected"));
        }
    }
  else if (tk == '(')
    {
      nextToken();
      parseCommaExpression(ast->expression);
      CHECK(')');
    }
  else if (tk == '{')
  {
    nextToken();
    if (token_stream.lookAhead() != '}') {
      parseCommaExpression(ast->expression);
    }
    // new-style initializers may be empty (default value)
    CHECK('}');
  }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseMemInitializerList(const ListNode<MemInitializerAST*> *&node)
{
  MemInitializerAST *init = 0;

  if (!parseMemInitializer(init))
    return false;

  node = snoc(node, init, _M_pool);

  while (token_stream.lookAhead() == ',')
    {
      nextToken();

      if (!parseMemInitializer(init))
        break;

      node = snoc(node, init, _M_pool);
    }

  return true;
}

bool Parser::parseMemInitializer(MemInitializerAST *&node)
{
  std::size_t start = token_stream.cursor();

  NameAST *initId = 0;
  if (!parseName(initId, true))
    {
      reportError(("Identifier expected"));
      return false;
    }

  ExpressionAST* expr = 0;
  if (token_stream.lookAhead() == '{')
  {
    // new style initializers
    ADVANCE('{', "{");
    if (token_stream.lookAhead() != '}') {
      parseCommaExpression(expr);
    }
    // new-style initializers may be empty (default value)
    ADVANCE('}', "}");
  }
  else
  {
    ADVANCE('(', "(");
    parseCommaExpression(expr);
    ADVANCE(')', ")");
  }

  MemInitializerAST *ast = CreateNode<MemInitializerAST>(_M_pool);
  ast->initializer_id = initId;
  ast->expression = expr;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseTypeIdList(const ListNode<TypeIdAST*> *&node)
{
  TypeIdAST *typeId = 0;
  if (!parseTypeId(typeId))
    return false;

  node = snoc(node, typeId, _M_pool);

  while (token_stream.lookAhead() == ',')
    {
      nextToken();
      if (parseTypeId(typeId))
        {
          node = snoc(node, typeId, _M_pool);
        }
      else
        {
          reportError(("Type id expected"));
          break;
        }
    }

  return true;
}

bool Parser::parseBaseSpecifier(BaseSpecifierAST *&node)
{
  std::size_t start = token_stream.cursor();

  BaseSpecifierAST *ast = CreateNode<BaseSpecifierAST>(_M_pool);

  if (token_stream.lookAhead() == Token_virtual)
    {
      ast->virt = token_stream.cursor();
      nextToken();

      int tk = token_stream.lookAhead();
      if (tk == Token_public || tk == Token_protected
          || tk == Token_private)
        {
          ast->access_specifier = token_stream.cursor();
          nextToken();
        }
    }
  else
    {
      int tk = token_stream.lookAhead();
      if (tk == Token_public || tk == Token_protected
          || tk == Token_private)
        {
          ast->access_specifier = token_stream.cursor();
          nextToken();
        }

      if (token_stream.lookAhead() == Token_virtual)
        {
          ast->virt = token_stream.cursor();
          nextToken();
        }
    }

  if (!parseName(ast->name, true))
    reportError(("Class name expected"));

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseInitializerClause(InitializerClauseAST *&node)
{
  std::size_t start = token_stream.cursor();

  InitializerClauseAST *ast = CreateNode<InitializerClauseAST>(_M_pool);

  if (token_stream.lookAhead() == '{')
    {
#if defined(__GNUC__)
#pragma GCC warning "implement me"
#endif
      if (skip('{','}'))
        nextToken();
      else
        reportError(("} missing"));
    }
  else
    {
      if (!parseAssignmentExpression(ast->expression))
        {
          //reportError(("Expression expected"));
        }
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parsePtrToMember(PtrToMemberAST *&node)
{
#if defined(__GNUC__)
#pragma GCC warning "implemente me (AST)"
#endif

  std::size_t start = token_stream.cursor();

  if (token_stream.lookAhead() == Token_scope)
    {
      nextToken();
    }

  UnqualifiedNameAST *name = 0;
  while (token_stream.lookAhead() == Token_identifier)
    {
      if (!parseUnqualifiedName(name))
        break;

      if (token_stream.lookAhead() == Token_scope
          && token_stream.lookAhead(1) == '*')
        {
          nextToken();
          nextToken();

          PtrToMemberAST *ast = CreateNode<PtrToMemberAST>(_M_pool);
          UPDATE_POS(ast, start, token_stream.cursor());
          node = ast;

          return true;
        }

      if (token_stream.lookAhead() == Token_scope)
        nextToken();
    }

  rewind(start);
  return false;
}

void Parser::resolveRightShift()
{
  if (token_stream.lookAhead() == Token_shift_right)
    {
      std::size_t index = token_stream.cursor();
      token_stream[index].kind = '>';
      token_stream[index + 1].kind = '>';
    }
}

bool Parser::parseUnqualifiedName(UnqualifiedNameAST *&node,
                                  bool parseTemplateId)
{
  std::size_t start = token_stream.cursor();

  std::size_t tilde = 0;
  std::size_t id = 0;
  OperatorFunctionIdAST *operator_id = 0;

  if (token_stream.lookAhead() == Token_identifier)
    {
      id = token_stream.cursor();
      nextToken();
    }
  else if (token_stream.lookAhead() == '~'
           && token_stream.lookAhead(1) == Token_identifier)
    {
      tilde = token_stream.cursor();
      nextToken(); // skip ~

      id = token_stream.cursor();
      nextToken(); // skip classname
    }
  else if (token_stream.lookAhead() == Token_operator)
    {
      if (!parseOperatorFunctionId(operator_id))
        return false;
    }
  else
    {
      return false;
    }

  UnqualifiedNameAST *ast = CreateNode<UnqualifiedNameAST>(_M_pool);
  ast->tilde = tilde;
  ast->id = id;
  ast->operator_id = operator_id;

  if (parseTemplateId && !tilde)
    {
      std::size_t index = token_stream.cursor();

      if (token_stream.lookAhead() == '<')
        {
          nextToken();

          // optional template arguments
          parseTemplateArgumentList(ast->template_arguments);

          resolveRightShift();
          if (token_stream.lookAhead() == '>')
            {
              nextToken();
            }
          else
            {
              ast->template_arguments = 0;
              rewind(index);
            }
        }
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseStringLiteral(StringLiteralAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (token_stream.lookAhead() != Token_string_literal)
    return false;

  StringLiteralAST *ast = CreateNode<StringLiteralAST>(_M_pool);

  while (token_stream.lookAhead() == Token_string_literal)
    {
      ast->literals = snoc(ast->literals, token_stream.cursor(), _M_pool);
      nextToken();
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseExpressionStatement(StatementAST *&node)
{
  std::size_t start = token_stream.cursor();

  ExpressionAST *expr = 0;
  parseCommaExpression(expr);

  ADVANCE(';', ";");

  ExpressionStatementAST *ast = CreateNode<ExpressionStatementAST>(_M_pool);
  ast->expression = expr;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseStatement(StatementAST *&node)
{
  std::size_t start = token_stream.cursor();

  switch(token_stream.lookAhead())
    {
    case Token_while:
      return parseWhileStatement(node);

    case Token_do:
      return parseDoStatement(node);

    case Token_for:
      return parseForStatement(node);

    case Token_if:
      return parseIfStatement(node);

    case Token_switch:
      return parseSwitchStatement(node);

    case Token_try:
      return parseTryBlockStatement(node);

    case Token_case:
    case Token_default:
      return parseLabeledStatement(node);

    case Token_break:
    case Token_continue:
#if defined(__GNUC__)
#pragma GCC warning "implement me"
#endif
      nextToken();
      ADVANCE(';', ";");
      return true;

    case Token_goto:
#if defined(__GNUC__)
#pragma GCC warning "implement me"
#endif
      nextToken();
      ADVANCE(Token_identifier, "identifier");
      ADVANCE(';', ";");
      return true;

    case Token_return:
      {
        nextToken();
        ExpressionAST *expr = 0;
        parseCommaExpression(expr);

        ADVANCE(';', ";");

        ReturnStatementAST *ast = CreateNode<ReturnStatementAST>(_M_pool);
        ast->expression = expr;

        UPDATE_POS(ast, start, token_stream.cursor());
        node = ast;
      }
      return true;

    case '{':
      return parseCompoundStatement(node);

    case Token_identifier:
      if (parseLabeledStatement(node))
        return true;
      break;
    }

  return parseExpressionOrDeclarationStatement(node);
}

bool Parser::parseExpressionOrDeclarationStatement(StatementAST *&node)
{
  bool blocked = block_errors(true);

  std::size_t start = token_stream.cursor();

  StatementAST *decl_ast = 0;
  bool maybe_amb = parseDeclarationStatement(decl_ast);
  maybe_amb &= token_stream.kind(token_stream.cursor() - 1) == ';';

  std::size_t end = token_stream.cursor();

  rewind(start);
  StatementAST *expr_ast = 0;
  maybe_amb &= parseExpressionStatement(expr_ast);
  maybe_amb &= token_stream.kind(token_stream.cursor() - 1) == ';';

  if (maybe_amb)
    {
      Q_ASSERT(decl_ast != 0 && expr_ast != 0);
      ExpressionOrDeclarationStatementAST *ast
        = CreateNode<ExpressionOrDeclarationStatementAST>(_M_pool);
      ast->declaration = decl_ast;
      ast->expression = expr_ast;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }
  else
    {
      rewind(std::max(end, token_stream.cursor()));

      node = decl_ast;
      if (!node)
        node = expr_ast;
    }

  block_errors(blocked);

  if (!node)
    SYNTAX_ERROR();

  return node != 0;
}

bool Parser::parseCondition(ConditionAST *&node, bool initRequired)
{
  std::size_t start = token_stream.cursor();

  ConditionAST *ast = CreateNode<ConditionAST>(_M_pool);
  TypeSpecifierAST *spec = 0;

  if (parseTypeSpecifier(spec))
    {
      ast->type_specifier = spec;

      std::size_t declarator_start = token_stream.cursor();

      DeclaratorAST *decl = 0;
      if (!parseDeclarator(decl))
        {
          rewind(declarator_start);
          if (!initRequired && !parseAbstractDeclarator(decl))
            decl = 0;
        }

      if (decl && (!initRequired || token_stream.lookAhead() == '='))
        {
          ast->declarator = decl;

          if (token_stream.lookAhead() == '=')
            {
              nextToken();

              parseExpression(ast->expression);
            }

          UPDATE_POS(ast, start, token_stream.cursor());
          node = ast;

          return true;
        }
    }

  rewind(start);

  if (!parseCommaExpression(ast->expression))
    return false;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}


bool Parser::parseWhileStatement(StatementAST *&node)
{
  std::size_t start = token_stream.cursor();

  ADVANCE(Token_while, "while");
  ADVANCE('(' , "(");

  ConditionAST *cond = 0;
  if (!parseCondition(cond))
    {
      reportError(("condition expected"));
      return false;
    }
  ADVANCE(')', ")");

  StatementAST *body = 0;
  if (!parseStatement(body))
    {
      reportError(("statement expected"));
      return false;
    }

  WhileStatementAST *ast = CreateNode<WhileStatementAST>(_M_pool);
  ast->condition = cond;
  ast->statement = body;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseDoStatement(StatementAST *&node)
{
  std::size_t start = token_stream.cursor();

  ADVANCE(Token_do, "do");

  StatementAST *body = 0;
  if (!parseStatement(body))
    {
      reportError(("statement expected"));
      //return false;
    }

  ADVANCE_NR(Token_while, "while");
  ADVANCE_NR('(' , "(");

  ExpressionAST *expr = 0;
  if (!parseCommaExpression(expr))
    {
      reportError(("expression expected"));
      //return false;
    }

  ADVANCE_NR(')', ")");
  ADVANCE_NR(';', ";");

  DoStatementAST *ast = CreateNode<DoStatementAST>(_M_pool);
  ast->statement = body;
  ast->expression = expr;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseForStatement(StatementAST *&node)
{
  std::size_t start = token_stream.cursor();

  ADVANCE(Token_for, "for");
  ADVANCE('(', "(");

  StatementAST *init = 0;
  if (!parseForInitStatement(init))
    {
      reportError(("for initialization expected"));
      return false;
    }

  ConditionAST *cond = 0;
  parseCondition(cond);
  ADVANCE(';', ";");

  ExpressionAST *expr = 0;
  parseCommaExpression(expr);
  ADVANCE(')', ")");

  StatementAST *body = 0;
  if (!parseStatement(body))
    return false;

  ForStatementAST *ast = CreateNode<ForStatementAST>(_M_pool);
  ast->init_statement = init;
  ast->condition = cond;
  ast->expression = expr;
  ast->statement = body;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseForInitStatement(StatementAST *&node)
{
  if (parseDeclarationStatement(node))
    return true;

  return parseExpressionStatement(node);
}

bool Parser::parseCompoundStatement(StatementAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK('{');

  CompoundStatementAST *ast = CreateNode<CompoundStatementAST>(_M_pool);

  while (token_stream.lookAhead())
    {
      if (token_stream.lookAhead() == '}')
        break;

      std::size_t startStmt = token_stream.cursor();

      StatementAST *stmt = 0;
      if (!parseStatement(stmt))
        {
          if (startStmt == token_stream.cursor())
            nextToken();

          skipUntilStatement();
        }
      else
        {
          ast->statements = snoc(ast->statements, stmt, _M_pool);
        }
    }

  ADVANCE_NR('}', "}");

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseIfStatement(StatementAST *&node)
{
  std::size_t start = token_stream.cursor();

  ADVANCE(Token_if, "if");

  ADVANCE('(' , "(");

  IfStatementAST *ast = CreateNode<IfStatementAST>(_M_pool);

  ConditionAST *cond = 0;
  if (!parseCondition(cond))
    {
      reportError(("condition expected"));
      return false;
    }
  ADVANCE(')', ")");

  StatementAST *stmt = 0;
  if (!parseStatement(stmt))
    {
      reportError(("statement expected"));
      return false;
    }

  ast->condition = cond;
  ast->statement = stmt;

  if (token_stream.lookAhead() == Token_else)
    {
      nextToken();

      if (!parseStatement(ast->else_statement))
        {
          reportError(("statement expected"));
          return false;
        }
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseSwitchStatement(StatementAST *&node)
{
  std::size_t start = token_stream.cursor();
  ADVANCE(Token_switch, "switch");

  ADVANCE('(' , "(");

  ConditionAST *cond = 0;
  if (!parseCondition(cond))
    {
      reportError(("condition expected"));
      return false;
    }
  ADVANCE(')', ")");

  StatementAST *stmt = 0;
  if (!parseCompoundStatement(stmt))
    {
      SYNTAX_ERROR();
      return false;
    }

  SwitchStatementAST *ast = CreateNode<SwitchStatementAST>(_M_pool);
  ast->condition = cond;
  ast->statement = stmt;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseLabeledStatement(StatementAST *&node)
{
  switch(token_stream.lookAhead())
    {
    case Token_identifier:
    case Token_default:
      if (token_stream.lookAhead(1) == ':')
        {
          nextToken();
          nextToken();

          StatementAST *stmt = 0;
          if (parseStatement(stmt))
            {
              node = stmt;
              return true;
            }
        }
      break;

    case Token_case:
      {
        nextToken();
        ExpressionAST *expr = 0;
        if (!parseConstantExpression(expr))
          {
            reportError(("expression expected"));
          }
        else if (token_stream.lookAhead() == Token_ellipsis)
          {
            nextToken();

            ExpressionAST *expr2 = 0;
            if (!parseConstantExpression(expr2))
              {
                reportError(("expression expected"));
              }
          }
        ADVANCE(':', ":");

        StatementAST *stmt = 0;
        if (parseStatement(stmt))
          {
            node = stmt;
            return true;
          }
      }
      break;

    }

  return false;
}

bool Parser::parseBlockDeclaration(DeclarationAST *&node)
{
  switch(token_stream.lookAhead())
    {
    case Token_typedef:
      return parseTypedef(node);
    case Token_using:
      return parseUsing(node);
    case Token_asm:
      return parseAsmDefinition(node);
    case Token_namespace:
      return parseNamespaceAliasDefinition(node);
    }

  std::size_t start = token_stream.cursor();

  const ListNode<std::size_t> *cv = 0;
  const ListNode<std::size_t> *storageSpec = 0;
  // consume all qualifiers/specifiers
  while (parseCvQualify(cv) || parseStorageClassSpecifier(storageSpec))
  {
    ;
  }

  TypeSpecifierAST *spec = 0;
  if (!parseTypeSpecifierOrClassSpec(spec))
    { // replace with simpleTypeSpecifier?!?!
      rewind(start);
      return false;
    }

  parseCvQualify(cv);
  spec->cv = cv;

  const ListNode<InitDeclaratorAST*> *declarators = 0;
  parseInitDeclaratorList(declarators);

  if (token_stream.lookAhead() != ';')
    {
      rewind(start);
      return false;
    }
  nextToken();

  SimpleDeclarationAST *ast = CreateNode<SimpleDeclarationAST>(_M_pool);
  ast->type_specifier = spec;
  ast->init_declarators = declarators;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseNamespaceAliasDefinition(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(Token_namespace);

  NamespaceAliasDefinitionAST *ast
    = CreateNode<NamespaceAliasDefinitionAST>(_M_pool);

  ADVANCE(Token_identifier,  "identifier");
  ast->namespace_name = token_stream.cursor() - 1;

  ADVANCE('=', "=");

  if (!parseName(ast->alias_name))
    {
      reportError(("Namespace name expected"));
    }

  ADVANCE(';', ";");

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseDeclarationStatement(StatementAST *&node)
{
  std::size_t start = token_stream.cursor();

  DeclarationAST *decl = 0;
  if (!parseBlockDeclaration(decl))
    return false;

  DeclarationStatementAST *ast = CreateNode<DeclarationStatementAST>(_M_pool);
  ast->declaration = decl;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseDeclarationInternal(DeclarationAST *&node)
{
  std::size_t start = token_stream.cursor();

  // that is for the case '__declspec(dllexport) int ...' or
  // '__declspec(dllexport) inline int ...', etc.
  WinDeclSpecAST *winDeclSpec = 0;
  const ListNode<std::size_t>* cv = 0;
  const ListNode<std::size_t>* funSpec = 0;
  const ListNode<std::size_t>* storageSpec = 0;
  // since it seems that the various specifiers can come in almost any order,
  // so just consume then until no specifiers are left.
  // Luckily the parse methods can be called multiple times, they just add to existing nodes.
  while (skipAttributes() ||
         skipAlignas() ||
         (!winDeclSpec && parseWinDeclSpec(winDeclSpec)) ||
         parseCvQualify(cv) ||
         parseFunctionSpecifier(funSpec) ||
         parseStorageClassSpecifier(storageSpec))
  {
    ;
  }

  int index = (int) token_stream.cursor();
  NameAST *name = 0;
  if (parseName(name, true) && token_stream.lookAhead() == '(')
    {
      // no type specifier, maybe a constructor or a cast operator??

      rewind(index);

      InitDeclaratorAST *declarator = 0;
      if (parseInitDeclarator(declarator))
        {
          switch(token_stream.lookAhead())
            {
            case ';':
              {
                nextToken();

                SimpleDeclarationAST *ast
                  = CreateNode<SimpleDeclarationAST>(_M_pool);

                ast->storage_specifiers = storageSpec;
                ast->function_specifiers = funSpec;
                ast->init_declarators = snoc(ast->init_declarators,
                                             declarator, _M_pool);

                UPDATE_POS(ast, start, token_stream.cursor());
                node = ast;
              }
              return true;

            case ':':
              {
                CtorInitializerAST *ctorInit = 0;
                StatementAST *funBody = 0;

                if (parseCtorInitializer(ctorInit)
                    && parseFunctionBody(funBody))
                  {
                    FunctionDefinitionAST *ast
                      = CreateNode<FunctionDefinitionAST>(_M_pool);

                    ast->storage_specifiers = storageSpec;
                    ast->function_specifiers = funSpec;
                    ast->init_declarator = declarator;
                    ast->function_body = funBody;

                    UPDATE_POS(ast, start, token_stream.cursor());
                    node = ast;

                    return true;
                  }
              }
              break;

            case '{':
              {
                StatementAST *funBody = 0;
                if (parseFunctionBody(funBody))
                  {
                    FunctionDefinitionAST *ast
                      = CreateNode<FunctionDefinitionAST>(_M_pool);

                    ast->storage_specifiers = storageSpec;
                    ast->function_specifiers = funSpec;
                    ast->init_declarator = declarator;
                    ast->function_body = funBody;

                    UPDATE_POS(ast, start, token_stream.cursor());
                    node = ast;

                    return true;
                  }
              }
              break;

            case '(':
            case '[':
              // ops!! it seems a declarator
              goto start_decl;
              break;
            }

        }
    }

 start_decl:
  rewind(index);

  if (token_stream.lookAhead() == Token_const
      && token_stream.lookAhead(1) == Token_identifier
      && token_stream.lookAhead(2) == '=')
    {
      // constant definition
      nextToken(); // skip const

      const ListNode<InitDeclaratorAST*> *declarators = 0;
      if (!parseInitDeclaratorList(declarators))
        {
          SYNTAX_ERROR();
          return false;
        }

      ADVANCE(';', ";");

#if defined(__GNUC__)
#pragma GCC warning "mark the ast as constant"
#endif
      SimpleDeclarationAST *ast = CreateNode<SimpleDeclarationAST>(_M_pool);
      ast->init_declarators = declarators;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;

      return true;
    }

  TypeSpecifierAST *spec = 0;
  if (parseTypeSpecifier(spec))
    {
      Q_ASSERT(spec != 0);

      parseFunctionSpecifier(funSpec);         // e.g. "void inline"

      spec->cv = cv;

      const ListNode<InitDeclaratorAST*> *declarators = 0;
      InitDeclaratorAST *decl = 0;
      int startDeclarator = (int) token_stream.cursor();
      bool maybeFunctionDefinition = false;

      if (token_stream.lookAhead() != ';')
        {
          if (parseInitDeclarator(decl) && (token_stream.lookAhead() == '{' || token_stream.lookAhead() == Token_arrow))
            {
              // function definition
              maybeFunctionDefinition = true;
            }
          else
            {
              rewind(startDeclarator);
              if (!parseInitDeclaratorList(declarators))
                {
                  SYNTAX_ERROR();
                  return false;
                }
            }
        }

      if (token_stream.lookAhead() == Token_arrow) {
        // trailing return type, used in conjuction with "auto" return type
        nextToken();
        TypeSpecifierAST* trailingReturnTypeSpec = 0;
        if (!parseTypeSpecifier(trailingReturnTypeSpec)) {
          // todo: replace "auto" return type? But I doubt we can handle these return types anyway.
          SYNTAX_ERROR();
          return false;
        }
        maybeFunctionDefinition = true;
      }

      switch(token_stream.lookAhead())
        {
        case ';':
          {
            nextToken();
            SimpleDeclarationAST *ast
              = CreateNode<SimpleDeclarationAST>(_M_pool);

            ast->storage_specifiers = storageSpec;
            ast->function_specifiers = funSpec;
            ast->type_specifier = spec;
            ast->win_decl_specifiers = winDeclSpec;
            ast->init_declarators = declarators;

            UPDATE_POS(ast, start, token_stream.cursor());
            node = ast;
          }
          return true;

        case '{':
          {
            if (!maybeFunctionDefinition)
              {
                SYNTAX_ERROR();
                return false;
              }

            StatementAST *funBody = 0;
            if (parseFunctionBody(funBody))
              {
                FunctionDefinitionAST *ast
                  = CreateNode<FunctionDefinitionAST>(_M_pool);

                ast->win_decl_specifiers = winDeclSpec;
                ast->storage_specifiers = storageSpec;
                ast->function_specifiers = funSpec;
                ast->type_specifier = spec;
                ast->init_declarator = decl;
                ast->function_body = funBody;

                UPDATE_POS(ast, start, token_stream.cursor());
                node = ast;

                return true;
              }
          }
          break;
        } // end switch
    }

  SYNTAX_ERROR();
  return false;
}

bool Parser::skipFunctionBody(StatementAST *& node)
{
  std::size_t start = token_stream.cursor();
  ADVANCE('{', "{");
  int braceCount = 1;
  while (braceCount)
    {
      int tk = token_stream.lookAhead();
      switch (tk)
        {
        // handle opening braces:
        case '{':
          braceCount++;
          break;
        // handle closing braces:
        case '}':
          braceCount--;
          break;
        case Token_EOF:
          reportError("unexpected EOF while skipping block");
          braceCount = 0;
          break;
        default:
          // skip everything else
          ;
        }
      nextToken();
    }
  CompoundStatementAST* ast = CreateNode<CompoundStatementAST>(_M_pool);
  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;
  return true;
}

bool Parser::parseFunctionBody(StatementAST *&node)
{
  if (control->skipFunctionBody())
    return skipFunctionBody(node);

  return parseCompoundStatement(node);
}

bool Parser::parseTypeSpecifierOrClassSpec(TypeSpecifierAST *&node)
{
  if (parseClassSpecifier(node))
    return true;
  else if (parseEnumSpecifier(node))
    return true;
  else if (parseTypeSpecifier(node))
    return true;

  return false;
}

bool Parser::parseTryBlockStatement(StatementAST *&node)
{
#if defined(__GNUC__)
#pragma GCC warning "implement me"
#endif
  CHECK(Token_try);

  StatementAST *stmt = 0;
  if (!parseCompoundStatement(stmt))
    {
      SYNTAX_ERROR();
      return false;
    }

  if (token_stream.lookAhead() != Token_catch)
    {
      reportError(("catch expected"));
      return false;
    }

  while (token_stream.lookAhead() == Token_catch)
    {
      nextToken();
      ADVANCE('(', "(");
      ConditionAST *cond = 0;
      if (token_stream.lookAhead() == Token_ellipsis)
        {
          nextToken();
        }
      else if (!parseCondition(cond, false))
        {
          reportError(("condition expected"));
          return false;
        }
      ADVANCE(')', ")");

      StatementAST *body = 0;
      if (!parseCompoundStatement(body))
        {
          SYNTAX_ERROR();
          return false;
        }
    }

  node = stmt;
  return true;
}

bool Parser::parsePrimaryExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  PrimaryExpressionAST *ast = CreateNode<PrimaryExpressionAST>(_M_pool);

  switch(token_stream.lookAhead())
    {
    case Token_string_literal:
      parseStringLiteral(ast->literal);
      break;

    case Token_ellipsis:       // "..." can occur in constexpr of variadic templates
    case Token_number_literal:
    case Token_char_literal:
    case Token_true:
    case Token_false:
    case Token_this:
      ast->token = token_stream.cursor();
      nextToken();
      break;

    case '(':
      nextToken();

      if (token_stream.lookAhead() == '{')
        {
          if (!parseCompoundStatement(ast->expression_statement))
            return false;
        }
      else
        {
          if (!parseExpression(ast->sub_expression))
            return false;
        }

      CHECK(')');
      break;

    case '{':
      nextToken();

      // support for new-style initializers
      if (token_stream.lookAhead() != '}' && !parseExpression(ast->sub_expression)) {
        return false;
      }

      CHECK('}');
      break;

    // case '[': // TODO: parse lambda expression

    default:
      if (!parseName(ast->name, true))   // this can also be a template
        return false;

      break;
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}


/*
  postfix-expression-internal:
  [ expression ]
  ( expression-list [opt] )
  (.|->) template [opt] id-expression
  (.|->) pseudo-destructor-name
  ++
  --
*/
bool Parser::parsePostfixExpressionInternal(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  switch (token_stream.lookAhead())
    {
    case '[':
      {
        nextToken();
        ExpressionAST *expr = 0;
        parseExpression(expr);
        CHECK(']');

        SubscriptExpressionAST *ast
          = CreateNode<SubscriptExpressionAST>(_M_pool);

        ast->subscript = expr;

        UPDATE_POS(ast, start, token_stream.cursor());
        node = ast;
      }
      return true;

    case '(':
      {
        nextToken();
        ExpressionAST *expr = 0;
        parseExpression(expr);
        CHECK(')');

        FunctionCallAST *ast = CreateNode<FunctionCallAST>(_M_pool);
        ast->arguments = expr;

        UPDATE_POS(ast, start, token_stream.cursor());
        node = ast;
      }
      return true;

    case '.':
    case Token_arrow:
      {
        std::size_t op = token_stream.cursor();
        nextToken();

        std::size_t templ = 0;
        if (token_stream.lookAhead() == Token_template)
          {
            templ = token_stream.cursor();
            nextToken();
          }

        std::size_t saved = token_stream.cursor();
        NameAST *name = 0;

        if (parseName(name, true) && name->unqualified_name
            && name->unqualified_name->template_arguments != 0
            && token_stream.lookAhead() == '(') {
          // a template method call
          // ### reverse the logic
        } else {
          rewind(saved);
          name = 0;

          if (! parseName (name, templ != 0))
            return false;
        }

        ClassMemberAccessAST *ast = CreateNode<ClassMemberAccessAST>(_M_pool);
        ast->op = op;
        ast->name = name;

        UPDATE_POS(ast, start, token_stream.cursor());
        node = ast;
      }
      return true;

    case Token_incr:
    case Token_decr:
      {
        std::size_t op = token_stream.cursor();
        nextToken();

        IncrDecrExpressionAST *ast = CreateNode<IncrDecrExpressionAST>(_M_pool);
        ast->op = op;

        UPDATE_POS(ast, start, token_stream.cursor());
        node = ast;
      }
      return true;

    default:
      return false;
    }
}

/*
  postfix-expression:
  simple-type-specifier ( expression-list [opt] )
  primary-expression postfix-expression-internal*
*/
bool Parser::parsePostfixExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  switch (token_stream.lookAhead())
    {
    case Token_dynamic_cast:
    case Token_static_cast:
    case Token_reinterpret_cast:
    case Token_const_cast:
      {
        std::size_t castOp = token_stream.cursor();
        nextToken();

        CHECK('<');
        TypeIdAST *typeId = 0;
        parseTypeId(typeId);
        CHECK('>');

        CHECK('(');
        ExpressionAST *expr = 0;
        parseCommaExpression(expr);
        CHECK(')');

        CppCastExpressionAST *ast = CreateNode<CppCastExpressionAST>(_M_pool);
        ast->op = castOp;
        ast->type_id = typeId;
        ast->expression = expr;

        ExpressionAST *e = 0;
        while (parsePostfixExpressionInternal(e))
          {
            ast->sub_expressions = snoc(ast->sub_expressions, e, _M_pool);
          }

        UPDATE_POS(ast, start, token_stream.cursor());
        node = ast;
      }
      return true;

    case Token_typename:
      {
        std::size_t token = token_stream.cursor();
        nextToken();

        NameAST* name = 0;
        if (!parseName(name, true))
          return false;

        CHECK('(');
        ExpressionAST *expr = 0;
        parseCommaExpression(expr);
        CHECK(')');

        TypeIdentificationAST *ast = CreateNode<TypeIdentificationAST>(_M_pool);
        ast->typename_token = token;
        ast->name = name;
        ast->expression = expr;

        UPDATE_POS(ast, start, token_stream.cursor());
        node = ast;
      }
      return true;

    case Token_typeid:
      {
        nextToken();

        CHECK('(');
        TypeIdAST *typeId = 0;
        parseTypeId(typeId);
        CHECK(')');

        TypeIdentificationAST *ast = CreateNode<TypeIdentificationAST>(_M_pool);
        UPDATE_POS(ast, start, token_stream.cursor());
        node = ast;
      }
      return true;

    default:
      break;
    }

  std::size_t saved_pos = token_stream.cursor();

  TypeSpecifierAST *typeSpec = 0;
  ExpressionAST *expr = 0;

  // let's try to parse a type
  NameAST *name = 0;
  if (parseName(name, true))
    {
      Q_ASSERT(name->unqualified_name != 0);

      bool has_template_args
        = name->unqualified_name->template_arguments != 0;

      if (has_template_args && token_stream.lookAhead() == '(')
        {
          ExpressionAST *cast_expr = 0;
          if (parseCastExpression(cast_expr)
              && cast_expr->kind == AST::Kind_CastExpression)
            {
              rewind(saved_pos);
              parsePrimaryExpression(expr);
              goto L_no_rewind;
            }
        }
    }

  rewind(saved_pos);

 L_no_rewind:
  if (!expr && parseSimpleTypeSpecifier(typeSpec)
      && (token_stream.lookAhead() == '(' || token_stream.lookAhead() == '{'))
    {
      int tk = token_stream.lookAhead();
      nextToken(); // skip '(' or '{'
      parseCommaExpression(expr);
      if (tk == '(')
        {
          CHECK(')');
        }
      else
        {
          CHECK('}');
        }
    }
  else if (expr)
    {
      typeSpec = 0;
    }
  else
    {
      typeSpec = 0;
      rewind(start);

      if (token_stream.lookAhead() == Token_noexcept)
      {
        nextToken();
        CHECK('(');
        ExpressionAST* arg_expr = 0;
        if (!parseExpression(arg_expr))
        {
          return false;
        }
        CHECK(')');

        // make noexcept() in expressions an unary expression
        UnaryExpressionAST* ast = CreateNode<UnaryExpressionAST>(_M_pool);
        ast->op = start;
        ast->expression = arg_expr;
        expr = ast;
      }
      else if (!parsePrimaryExpression(expr))
        return false;
    }

  const ListNode<ExpressionAST*> *sub_expressions = 0;
  ExpressionAST *sub_expression = 0;

  while (parsePostfixExpressionInternal(sub_expression))
    sub_expressions = snoc(sub_expressions, sub_expression, _M_pool);

  if (sub_expressions || ! expr || (typeSpec && expr))
    {
      PostfixExpressionAST *ast = CreateNode<PostfixExpressionAST>(_M_pool);
      ast->type_specifier = typeSpec;
      ast->expression = expr;
      ast->sub_expressions = sub_expressions;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }
  else
    node = expr;

  if (token_stream.lookAhead() == Token_ellipsis) {
    // ignore ellipsis, it might be something like "Pair<Args1, Args2>...", which might appear
    // in template arguments of variadic templates
    nextToken();
  }

  return true;
}

bool Parser::parseUnaryExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  switch(token_stream.lookAhead())
    {
    case Token_incr:
    case Token_decr:
    case '*':
    case '&':
    case '+':
    case '-':
    case '!':
    case '~':
      {
        std::size_t op = token_stream.cursor();
        nextToken();

        ExpressionAST *expr = 0;
        if (!parseCastExpression(expr))
          return false;

        UnaryExpressionAST *ast = CreateNode<UnaryExpressionAST>(_M_pool);
        ast->op = op;
        ast->expression = expr;

        UPDATE_POS(ast, start, token_stream.cursor());
        node = ast;
      }
      return true;

    case Token_sizeof:
      {
        std::size_t sizeof_token = token_stream.cursor();
        nextToken();

        if (token_stream.lookAhead() == Token_ellipsis) {
          // sizeof... is used on parameter packs - currently we ignore this
          // todo: handle this
          nextToken();
        }

        SizeofExpressionAST *ast = CreateNode<SizeofExpressionAST>(_M_pool);
        ast->sizeof_token = sizeof_token;

        std::size_t index = token_stream.cursor();
        if (token_stream.lookAhead() == '(')
          {
            nextToken();
            if (parseTypeId(ast->type_id) && token_stream.lookAhead() == ')')
              {
                nextToken(); // skip )

                UPDATE_POS(ast, start, token_stream.cursor());
                node = ast;
                return true;
              }

            ast->type_id = 0;
            rewind(index);
          }

        if (!parseUnaryExpression(ast->expression))
          return false;

        UPDATE_POS(ast, start, token_stream.cursor());
        node = ast;
        return true;
      }

    default:
      break;
    }

  int token = token_stream.lookAhead();

  if (token == Token_new
      || (token == Token_scope && token_stream.lookAhead(1) == Token_new))
    return parseNewExpression(node);

  if (token == Token_delete
      || (token == Token_scope && token_stream.lookAhead(1) == Token_delete))
    return parseDeleteExpression(node);

  return parsePostfixExpression(node);
}

bool Parser::parseNewExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  NewExpressionAST *ast = CreateNode<NewExpressionAST>(_M_pool);

  if (token_stream.lookAhead() == Token_scope
      && token_stream.lookAhead(1) == Token_new)
    {
      ast->scope_token = token_stream.cursor();
      nextToken();
    }

  CHECK(Token_new);
  ast->new_token = token_stream.cursor() - 1;

  if (token_stream.lookAhead() == '(')
    {
      nextToken();
      parseCommaExpression(ast->expression);
      CHECK(')');
    }

  if (token_stream.lookAhead() == '(')
    {
      nextToken();
      parseTypeId(ast->type_id);
      CHECK(')');
    }
  else
    {
      parseNewTypeId(ast->new_type_id);
    }

  parseNewInitializer(ast->new_initializer);

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseNewTypeId(NewTypeIdAST *&node)
{
  std::size_t start = token_stream.cursor();

  TypeSpecifierAST *typeSpec = 0;
  if (!parseTypeSpecifier(typeSpec))
    return false;

  NewTypeIdAST *ast = CreateNode<NewTypeIdAST>(_M_pool);
  ast->type_specifier = typeSpec;

  parseNewDeclarator(ast->new_declarator);

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseNewDeclarator(NewDeclaratorAST *&node)
{
  std::size_t start = token_stream.cursor();

  NewDeclaratorAST *ast = CreateNode<NewDeclaratorAST>(_M_pool);

  PtrOperatorAST *ptrOp = 0;
  if (parsePtrOperator(ptrOp))
    {
      ast->ptr_op = ptrOp;
      parseNewDeclarator(ast->sub_declarator);
    }

  while (token_stream.lookAhead() == '[')
    {
      nextToken();
      ExpressionAST *expr = 0;
      parseExpression(expr);
      ast->expressions = snoc(ast->expressions, expr, _M_pool);
      ADVANCE(']', "]");
    }

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseNewInitializer(NewInitializerAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK('(');

  NewInitializerAST *ast = CreateNode<NewInitializerAST>(_M_pool);

  parseCommaExpression(ast->expression);

  CHECK(')');

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseDeleteExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  DeleteExpressionAST *ast = CreateNode<DeleteExpressionAST>(_M_pool);

  if (token_stream.lookAhead() == Token_scope
      && token_stream.lookAhead(1) == Token_delete)
    {
      ast->scope_token = token_stream.cursor();
      nextToken();
    }

  CHECK(Token_delete);
  ast->delete_token = token_stream.cursor() - 1;

  if (token_stream.lookAhead() == '[')
    {
      ast->lbracket_token = token_stream.cursor();
      nextToken();
      CHECK(']');
      ast->rbracket_token = token_stream.cursor() - 1;
    }

  if (!parseCastExpression(ast->expression))
    return false;

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseCastExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (token_stream.lookAhead() == '(')
    {
      nextToken();

      CastExpressionAST *ast = CreateNode<CastExpressionAST>(_M_pool);

      if (parseTypeId(ast->type_id))
        {
          if (token_stream.lookAhead() == ')')
            {
              nextToken();

              if (parseCastExpression(ast->expression))
                {
                  UPDATE_POS(ast, start, token_stream.cursor());
                  node = ast;

                  return true;
                }
            }
        }
    }

  rewind(start);
  return parseUnaryExpression(node);
}

bool Parser::parsePmExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (!parseCastExpression(node) || !node) // ### fixme
    return false;

  while (token_stream.lookAhead() == Token_ptrmem)
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseCastExpression(rightExpr))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseMultiplicativeExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (!parsePmExpression(node))
    return false;

  while (token_stream.lookAhead() == '*'
         || token_stream.lookAhead() == '/'
         || token_stream.lookAhead() == '%')
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parsePmExpression(rightExpr))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}


bool Parser::parseAdditiveExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (!parseMultiplicativeExpression(node))
    return false;

  while (token_stream.lookAhead() == '+' || token_stream.lookAhead() == '-')
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseMultiplicativeExpression(rightExpr))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseShiftExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (!parseAdditiveExpression(node))
    return false;

  while (token_stream.lookAhead() == Token_shift_left || token_stream.lookAhead() == Token_shift_right)
    {
      std::size_t op = token_stream.cursor();
      if (token_stream.lookAhead() == Token_shift_right)
        {
          // skip placeholder
          nextToken();
        }
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseAdditiveExpression(rightExpr))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseRelationalExpression(ExpressionAST *&node, bool templArgs)
{
  std::size_t start = token_stream.cursor();

  if (!parseShiftExpression(node))
    return false;

  while (token_stream.lookAhead() == '<'
         || (token_stream.lookAhead() == '>' && !templArgs)
         || token_stream.lookAhead() == Token_leq
         || token_stream.lookAhead() == Token_geq)
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseShiftExpression(rightExpr))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseEqualityExpression(ExpressionAST *&node, bool templArgs)
{
  std::size_t start = token_stream.cursor();

  if (!parseRelationalExpression(node, templArgs))
    return false;

  while (token_stream.lookAhead() == Token_eq
         || token_stream.lookAhead() == Token_not_eq)
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseRelationalExpression(rightExpr, templArgs))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseAndExpression(ExpressionAST *&node, bool templArgs)
{
  std::size_t start = token_stream.cursor();

  if (!parseEqualityExpression(node, templArgs))
    return false;

  while (token_stream.lookAhead() == '&')
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseEqualityExpression(rightExpr, templArgs))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseExclusiveOrExpression(ExpressionAST *&node, bool templArgs)
{
  std::size_t start = token_stream.cursor();

  if (!parseAndExpression(node, templArgs))
    return false;

  while (token_stream.lookAhead() == '^')
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseAndExpression(rightExpr, templArgs))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseInclusiveOrExpression(ExpressionAST *&node, bool templArgs)
{
  std::size_t start = token_stream.cursor();

  if (!parseExclusiveOrExpression(node, templArgs))
    return false;

  while (token_stream.lookAhead() == '|')
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseExclusiveOrExpression(rightExpr, templArgs))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseLogicalAndExpression(ExpressionAST *&node, bool templArgs)
{
  std::size_t start = token_stream.cursor();

  if (!parseInclusiveOrExpression(node, templArgs))
    return false;

  while (token_stream.lookAhead() == Token_and)
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseInclusiveOrExpression(rightExpr, templArgs))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseLogicalOrExpression(ExpressionAST *&node, bool templArgs)
{
  std::size_t start = token_stream.cursor();

  if (!parseLogicalAndExpression(node, templArgs))
    return false;

  while (token_stream.lookAhead() == Token_or)
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseLogicalAndExpression(rightExpr, templArgs))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseConditionalExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (!parseLogicalOrExpression(node))
    return false;

  if (token_stream.lookAhead() == '?')
    {
      nextToken();

      ExpressionAST *leftExpr = 0;
      if (!parseExpression(leftExpr))
        return false;

      CHECK(':');

      ExpressionAST *rightExpr = 0;
      if (!parseAssignmentExpression(rightExpr))
        return false;

      ConditionalExpressionAST *ast
        = CreateNode<ConditionalExpressionAST>(_M_pool);

      ast->condition = node;
      ast->left_expression = leftExpr;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseAssignmentExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (token_stream.lookAhead() == Token_throw && !parseThrowExpression(node))
    return false;
  else if (!parseConditionalExpression(node))
    return false;

  while (token_stream.lookAhead() == Token_assign
         || token_stream.lookAhead() == '=')
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseConditionalExpression(rightExpr))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseConstantExpression(ExpressionAST *&node)
{
  return parseConditionalExpression(node);
}

bool Parser::parseExpression(ExpressionAST *&node)
{
  return parseCommaExpression(node);
}

bool Parser::parseCommaExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  if (!parseAssignmentExpression(node))
    return false;

  while (token_stream.lookAhead() == ',')
    {
      std::size_t op = token_stream.cursor();
      nextToken();

      ExpressionAST *rightExpr = 0;
      if (!parseAssignmentExpression(rightExpr))
        return false;

      BinaryExpressionAST *ast = CreateNode<BinaryExpressionAST>(_M_pool);
      ast->op = op;
      ast->left_expression = node;
      ast->right_expression = rightExpr;

      UPDATE_POS(ast, start, token_stream.cursor());
      node = ast;
    }

  return true;
}

bool Parser::parseThrowExpression(ExpressionAST *&node)
{
  std::size_t start = token_stream.cursor();

  CHECK(Token_throw);

  ThrowExpressionAST *ast = CreateNode<ThrowExpressionAST>(_M_pool);
  ast->throw_token = token_stream.cursor() - 1;

  parseAssignmentExpression(ast->expression);

  UPDATE_POS(ast, start, token_stream.cursor());
  node = ast;

  return true;
}

bool Parser::parseQ_ENUMS(DeclarationAST *&node)
{
  if (token_stream.lookAhead() != Token_Q_ENUMS)
    return false;

  if (token_stream.lookAhead(1) != '(')
    return false;

  nextToken();
  nextToken();

  size_t firstToken = token_stream.cursor();
  while (token_stream.lookAhead() != ')') {
    nextToken();
  }
  QEnumsAST *ast = CreateNode<QEnumsAST>(_M_pool);
  UPDATE_POS(ast, firstToken, token_stream.cursor());
  ast->isQEnum = false;
  node = ast;

  nextToken();

  return true;
}

bool Parser::parseQ_ENUM(DeclarationAST *&node)
{
  if (token_stream.lookAhead() != Token_Q_ENUM)
    return false;

  if (token_stream.lookAhead(1) != '(')
    return false;

  nextToken();
  nextToken();

  size_t firstToken = token_stream.cursor();
  while (token_stream.lookAhead() != ')') {
    nextToken();
  }
  QEnumsAST *ast = CreateNode<QEnumsAST>(_M_pool);
  UPDATE_POS(ast, firstToken, token_stream.cursor());
  node = ast;
  ast->isQEnum = true;

  nextToken();

  return true;
}

bool Parser::parseQ_PROPERTY(DeclarationAST *&node)
{
  if (token_stream.lookAhead() != Token_Q_PROPERTY || token_stream.lookAhead(1) != '(')
    return false;

  nextToken();

  size_t firstToken = token_stream.cursor()+1;
  if (!skip('(', ')')) {
    return false;
  }
  QPropertyAST *ast = CreateNode<QPropertyAST>(_M_pool);
  UPDATE_POS(ast, firstToken, token_stream.cursor());
  node = ast;

//   const Token &t1 = token_stream[firstToken];
//   const Token &t2 = token_stream[token_stream.cursor()];
//   printf("property: %s\n",
//          qPrintable(QString::fromLatin1(t1.text + t1.position, t2.position - t1.position)));

  nextToken();

  return true;
}

bool Parser::block_errors(bool block)
{
  bool current = _M_block_errors;
  _M_block_errors = block;
  return current;
}


// kate: space-indent on; indent-width 2; replace-tabs on;
