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

#ifndef PP_ENGINE_H
#define PP_ENGINE_H

namespace rpp {

struct Value
{
  enum Kind {
    Kind_Long,
    Kind_ULong,
  };

  Kind kind;

  union {
    long l;
    unsigned long ul;
  };

  inline bool is_ulong () const { return kind == Kind_ULong; }

  inline void set_ulong (unsigned long v)
  {
    ul = v;
    kind = Kind_ULong;
  }

  inline void set_long (long v)
  {
    l = v;
    kind = Kind_Long;
  }

  inline bool is_zero () const { return l == 0; }

#define PP_DEFINE_BIN_OP(name, op) \
  inline Value &name (const Value &other) \
  { \
    if (is_ulong () || other.is_ulong ()) \
      set_ulong (ul op other.ul); \
    else \
      set_long (l op other.l); \
    return *this; \
  }

  PP_DEFINE_BIN_OP(op_add, +)
  PP_DEFINE_BIN_OP(op_sub, -)
  PP_DEFINE_BIN_OP(op_mult, *)
  PP_DEFINE_BIN_OP(op_div, /)
  PP_DEFINE_BIN_OP(op_mod, %)
  PP_DEFINE_BIN_OP(op_lhs, <<)
  PP_DEFINE_BIN_OP(op_rhs, >>)
  PP_DEFINE_BIN_OP(op_lt, <)
  PP_DEFINE_BIN_OP(op_gt, >)
  PP_DEFINE_BIN_OP(op_le, <=)
  PP_DEFINE_BIN_OP(op_ge, >=)
  PP_DEFINE_BIN_OP(op_eq, ==)
  PP_DEFINE_BIN_OP(op_ne, !=)
  PP_DEFINE_BIN_OP(op_bit_and, &)
  PP_DEFINE_BIN_OP(op_bit_or, |)
  PP_DEFINE_BIN_OP(op_bit_xor, ^)
  PP_DEFINE_BIN_OP(op_and, &&)
  PP_DEFINE_BIN_OP(op_or, ||)

#undef PP_DEFINE_BIN_OP
};

class pp
{
  pp_environment &env;
  pp_macro_expander expand;
  pp_skip_identifier skip_identifier;
  pp_skip_comment_or_divop skip_comment_or_divop;
  pp_skip_comment_or_divop skip_comment;
  pp_skip_blanks skip_blanks;
  pp_skip_number skip_number;
  std::vector<std::string> include_paths;
  std::string _M_current_text;

  enum { MAX_LEVEL = 512 };
  int _M_skipping[MAX_LEVEL];
  int _M_true_test[MAX_LEVEL];
  int iflevel;

  union
  {
    long token_value;
    unsigned long token_uvalue;
    std::string *token_text;
  };

  enum INCLUDE_POLICY
  {
    INCLUDE_GLOBAL,
    INCLUDE_LOCAL
  };

  enum TOKEN_TYPE
  {
    TOKEN_NUMBER = 1000,
    TOKEN_UNUMBER,
    TOKEN_IDENTIFIER,
    TOKEN_DEFINED,
    TOKEN_LT_LT,
    TOKEN_LT_EQ,
    TOKEN_GT_GT,
    TOKEN_GT_EQ,
    TOKEN_EQ_EQ,
    TOKEN_NOT_EQ,
    TOKEN_OR_OR,
    TOKEN_AND_AND,
  };

  enum PP_DIRECTIVE_TYPE
  {
    PP_UNKNOWN_DIRECTIVE,
    PP_DEFINE,
    PP_INCLUDE,
    PP_INCLUDE_NEXT,
    PP_ELIF,
    PP_ELSE,
    PP_ENDIF,
    PP_IF,
    PP_IFDEF,
    PP_IFNDEF,
    PP_UNDEF,
    PP_PRAGMA,
    PP_ERROR,
    PP_WARNING
  };

public:
  pp (pp_environment &env);

  inline std::back_insert_iterator<std::vector<std::string> > include_paths_inserter ();

  inline void push_include_path (std::string const &path);

  inline std::vector<std::string>::iterator include_paths_begin ();
  inline std::vector<std::string>::iterator include_paths_end ();

  inline std::vector<std::string>::const_iterator include_paths_begin () const;
  inline std::vector<std::string>::const_iterator include_paths_end () const;

  template <typename InputIterator>
  inline InputIterator eval_expression (InputIterator _first, InputIterator _last, Value *result);

  template <typename OutputIterator>
  void file (std::string const &filename, OutputIterator _result);

  template <typename OutputIterator>
  void file (FILE *fp, OutputIterator _result);

  template <typename InputIterator, typename OutputIterator>
  void operator () (InputIterator _first, InputIterator _last, OutputIterator _result);

private:
  inline bool file_isdir (std::string const &_filename) const;
  inline bool file_exists (std::string const &_filename) const;
  FILE *find_include_file (std::string const &_filename, std::string *_filepath,
                           INCLUDE_POLICY include_policy, bool _skip_current_path = false) const;

  inline int skipping() const;
  bool test_if_level();

  inline std::string fix_file_path (std::string const &filename) const;
  inline bool is_absolute (std::string const &filename) const;

  PP_DIRECTIVE_TYPE find_directive (char const *_directive, std::size_t _size) const;

  template <typename InputIterator>
  bool find_header_protection (InputIterator _first, InputIterator _last, std::string *_prot);

  template <typename InputIterator>
  InputIterator skip (InputIterator _first, InputIterator _last);

  template <typename InputIterator>
  InputIterator eval_primary(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_multiplicative(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_additive(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_shift(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_relational(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_equality(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_and(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_xor(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_or(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_logical_and(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_logical_or(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator>
  InputIterator eval_constant_expression(InputIterator _first, InputIterator _last, Value *result);

  template <typename InputIterator, typename OutputIterator>
  InputIterator handle_directive(char const *_directive, std::size_t _size,
          InputIterator _first, InputIterator _last, OutputIterator _result);

  template <typename InputIterator, typename OutputIterator>
  InputIterator handle_include(bool skip_current_path, InputIterator _first, InputIterator _last,
        OutputIterator _result);

  template <typename InputIterator>
  InputIterator handle_define (InputIterator _first, InputIterator _last);

  template <typename InputIterator>
  InputIterator handle_if (InputIterator _first, InputIterator _last);

  template <typename InputIterator>
  InputIterator handle_else (InputIterator _first, InputIterator _last);

  template <typename InputIterator>
  InputIterator handle_elif (InputIterator _first, InputIterator _last);

  template <typename InputIterator>
  InputIterator handle_endif (InputIterator _first, InputIterator _last);

  template <typename InputIterator>
  InputIterator handle_ifdef (bool check_undefined, InputIterator _first, InputIterator _last);

  template <typename InputIterator>
  InputIterator handle_undef(InputIterator _first, InputIterator _last);

  template <typename InputIterator>
  char peek_char (InputIterator _first, InputIterator _last);

  template <typename InputIterator>
  InputIterator next_token (InputIterator _first, InputIterator _last, int *kind);
};

} // namespace rpp

#endif // PP_ENGINE_H

// kate: space-indent on; indent-width 2; replace-tabs on;
