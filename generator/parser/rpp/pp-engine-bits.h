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

#ifndef PP_ENGINE_BITS_H
#define PP_ENGINE_BITS_H

#include <stdio.h>

namespace rpp {

inline std::string pp::fix_file_path(std::string const &filename) const
{
#if defined (PP_OS_WIN)
    std::string s = filename;
    for (std::string::iterator it = s.begin(); it != s.end(); ++it)
      {
        if (*it == '/')
            *it = '\\';
      }
    return s;
#else
    return filename;
#endif
}

inline bool pp::is_absolute(std::string const &filename) const
{
#if defined(PP_OS_WIN)
  return filename.length() >= 3
      && filename.at(1) == ':'
      && (filename.at(2) == '\\' || filename.at(2) == '/');
#else
  return filename.length() >= 1
          && filename.at(0) == '/';
#endif
}

template <typename _OutputIterator>
void pp::file (std::string const &filename, _OutputIterator _result)
{
  FILE *fp = fopen (filename.c_str(), "rb");
  if (fp != 0)
    {
      std::string was = env.current_file;
      env.current_file = filename;
      file (fp, _result);
      env.current_file = was;
    }
  //else
    //std::cerr << "** WARNING file ``" << filename << " not found!" << std::endl;
}

template <typename _OutputIterator>
void pp::file (FILE *fp, _OutputIterator _result)
{
   assert (fp != 0);

#if defined (HAVE_MMAP)
  struct stat st;
  fstat(FILENO (fp), &st);
  std::size_t size = st.st_size;
  char *buffer = 0;
  buffer = (char *) ::mmap(0, size, PROT_READ, MAP_SHARED, FILENO (fp), 0);
  fclose (fp);
  if (!buffer || buffer == (char*) -1)
    return;
  this->operator () (buffer, buffer + size, _result);
  ::munmap(buffer, size);
#else
  std::string buffer;
  while (!feof(fp)) {
      char tmp[1024];
      int read = (int) fread (tmp, sizeof(char), 1023, fp);
      tmp[read] = '\0';
      buffer += tmp;
  }
  fclose (fp);
  this->operator () (buffer.c_str(), buffer.c_str() + buffer.size(), _result);
#endif
}

template <typename InputIterator>
bool pp::find_header_protection (InputIterator _first, InputIterator _last, std::string *_prot)
{
  int was = env.current_line;

  while (_first != _last)
    {
      if (pp_isspace (*_first))
        {
          if (*_first == '\n')
            ++env.current_line;

          ++_first;
        }
      else if (_PP_internal::comment_p (_first, _last))
        {
          _first = skip_comment_or_divop (_first, _last);
          env.current_line += skip_comment_or_divop.lines;
        }
      else if (*_first == '#')
        {
          _first = skip_blanks (++_first, _last);
          env.current_line += skip_blanks.lines;

          if (_first != _last && *_first == 'i')
            {
              InputIterator begin = _first;
              _first = skip_identifier (begin, _last);
              env.current_line += skip_identifier.lines;

              std::string directive (begin, _first);

              if (directive == "ifndef")
                {
                  _first = skip_blanks (_first, _last);
                  env.current_line += skip_blanks.lines;

                  begin = _first;
                  _first = skip_identifier (_first, _last);
                  env.current_line += skip_identifier.lines;

                  if (begin != _first && _first != _last)
                    {
                      _prot->assign (begin, _first);
                      return true;
                    }
                }
            }
          break;
        }
      else
        break;
    }

 env.current_line = was;
 return false;
}

inline pp::PP_DIRECTIVE_TYPE pp::find_directive (char const *_directive, std::size_t _size) const
{
  switch (_size)
    {
      case 2:
        if (_directive[0] == 'i'
            && _directive[1] == 'f')
          return PP_IF;
        break;

      case 4:
        if (_directive[0] == 'e' && !strcmp (_directive, "elif"))
          return PP_ELIF;
        else if (_directive[0] == 'e' && !strcmp (_directive, "else"))
          return PP_ELSE;
        break;

      case 5:
        if (_directive[0] == 'i' && !strcmp (_directive, "ifdef"))
          return PP_IFDEF;
        else if (_directive[0] == 'u' && !strcmp (_directive, "undef"))
          return PP_UNDEF;
        else if (_directive[0] == 'e') {
          if (!strcmp (_directive, "endif"))
            return PP_ENDIF;
          else if (!strcmp (_directive, "error"))
            return PP_ERROR;
        }
        break;

      case 6:
        if (_directive[0] == 'i' && !strcmp (_directive, "ifndef"))
          return PP_IFNDEF;
        else if (_directive[0] == 'd' && !strcmp (_directive, "define"))
          return PP_DEFINE;
        else if (_directive[0] == 'p' && !strcmp (_directive, "pragma"))
          return PP_PRAGMA;
        break;

      case 7:
        if (_directive[0] == 'i' && !strcmp (_directive, "include"))
            return PP_INCLUDE;
        else if (_directive[0] == 'w' && !strcmp(_directive, "warning"))
          return PP_WARNING;
        break;

      case 12:
        if (_directive[0] == 'i' && !strcmp (_directive, "include_next"))
          return PP_INCLUDE_NEXT;
        break;

      default:
        break;
    }
  if (strlen(_directive)) {
    std::cerr << "** WARNING unknown directive '#" << _directive << "' at " << env.current_file << ":" << env.current_line << std::endl;
  }
  return PP_UNKNOWN_DIRECTIVE;
}

inline bool pp::file_isdir (std::string const &_filename) const
{
    struct stat st;
#if defined(PP_OS_WIN)
    if (stat(_filename.c_str (), &st) == 0)
        return (st.st_mode & _S_IFDIR) == _S_IFDIR;
    else
        return false;
#else
    if (lstat(_filename.c_str (), &st) == 0)
        return (st.st_mode & S_IFDIR) == S_IFDIR;
    else
        return false;
#endif
}

inline bool pp::file_exists (std::string const &_filename) const
{
  struct stat st;
#if defined(PP_OS_WIN)
  return stat(_filename.c_str (), &st) == 0;
#else
  return lstat (_filename.c_str (), &st) == 0;
#endif
}

inline FILE *pp::find_include_file(std::string const &_input_filename, std::string *_filepath,
      INCLUDE_POLICY _include_policy, bool _skip_current_path) const
{
  assert (_filepath != 0);
  assert (! _input_filename.empty());

  _filepath->assign (_input_filename);

  if (is_absolute (*_filepath))
    return fopen (_filepath->c_str(), "r");

  if (! env.current_file.empty ())
    _PP_internal::extract_file_path (env.current_file, _filepath);

  if (_include_policy == INCLUDE_LOCAL && ! _skip_current_path)
    {
      std::string tmp (*_filepath);
      tmp += _input_filename;

      if (file_exists (tmp) && !file_isdir(tmp))
        {
          _filepath->append (_input_filename);
          return fopen (_filepath->c_str (), "r");
        }
    }

  std::vector<std::string>::const_iterator it = include_paths.begin ();

  if (_skip_current_path)
    {
      it = std::find (include_paths.begin (), include_paths.end (), *_filepath);

      if (it != include_paths.end ())
        ++it;

      else
        it = include_paths.begin ();
    }

  for (; it != include_paths.end (); ++it)
    {
      if (_skip_current_path && it == include_paths.begin())
        continue;

      _filepath->assign (*it);
      _filepath->append (_input_filename);

      if (file_exists (*_filepath) && !file_isdir(*_filepath))
        return fopen (_filepath->c_str(), "r");

#ifdef Q_OS_MAC
      // try in Framework path on Mac, if there is a path in front
      // ### what about escaped slashes?
      size_t slashPos = _input_filename.find('/');
      if (slashPos != std::string::npos) {
          _filepath->assign (*it);
          _filepath->append (_input_filename.substr(0, slashPos));
          _filepath->append (".framework/Headers/");
          _filepath->append (_input_filename.substr(slashPos+1, std::string::npos));
          std::cerr << *_filepath << "\n";

          if (file_exists (*_filepath) && !file_isdir(*_filepath))
            return fopen (_filepath->c_str(), "r");
      }
#endif // Q_OS_MAC
    }

  return 0;
}

template <typename InputIterator, typename OutputIterator>
InputIterator pp::handle_directive(char const *_directive, std::size_t _size,
        InputIterator _first, InputIterator _last, OutputIterator _result)
{
  _first = skip_blanks (_first, _last);

  PP_DIRECTIVE_TYPE d = find_directive (_directive, _size);
  switch (d)
    {
      case PP_DEFINE:
        if (! skipping ())
          return handle_define (_first, _last);
        break;

      case PP_INCLUDE:
      case PP_INCLUDE_NEXT:
        if (! skipping ())
          return handle_include (d == PP_INCLUDE_NEXT, _first, _last, _result);
        break;

      case PP_UNDEF:
        if (! skipping ())
          return handle_undef(_first, _last);
        break;

      case PP_ELIF:
        return handle_elif (_first, _last);

      case PP_ELSE:
        return handle_else (_first, _last);

      case PP_ENDIF:
        return handle_endif (_first, _last);

      case PP_IF:
        return handle_if (_first, _last);

      case PP_IFDEF:
        return handle_ifdef (false, _first, _last);

      case PP_IFNDEF:
        return handle_ifdef (true, _first, _last);

      default:
        break;
    }

  return _first;
}

template <typename InputIterator, typename OutputIterator>
InputIterator pp::handle_include (bool _skip_current_path, InputIterator _first, InputIterator _last,
      OutputIterator _result)
{
  // uncomment to print included files
  // std::cout << env.current_file << std::endl;
  if (pp_isalpha (*_first) || *_first == '_')
    {
      pp_macro_expander expand_include (env);
      std::string name;
      name.reserve (255);
      expand_include (_first, _last, std::back_inserter (name));
      std::string::iterator it = skip_blanks (name.begin (), name.end ());
      printf("%s", name.c_str());
      assert((it != name.end () && (*it == '<' || *it == '"')));
      handle_include (_skip_current_path, it, name.end (), _result);
      return _first;
    }

  assert (*_first == '<' || *_first == '"');
  int quote = (*_first == '"') ? '"' : '>';
  ++_first;

  InputIterator end_name = _first;
  for (; end_name != _last; ++end_name)
    {
      assert (*end_name != '\n');

      if (*end_name == quote)
        break;
    }

  std::string filename (_first, end_name);

#ifdef PP_OS_WIN
  std::replace(filename.begin(), filename.end(), '/', '\\');
#endif

  std::string filepath;
  FILE *fp = find_include_file (filename, &filepath, quote == '>' ? INCLUDE_GLOBAL : INCLUDE_LOCAL, _skip_current_path);
  
#if defined (PP_HOOK_ON_FILE_INCLUDED)
      PP_HOOK_ON_FILE_INCLUDED (env.current_file, fp ? filepath : filename, fp);
#endif

  if (fp != 0)
    {
      std::string old_file = env.current_file;
      env.current_file = filepath;
      int saved_lines = env.current_line;

      env.current_line = 1;
      //output_line (env.current_file, 1, _result);

      file (fp, _result);

      // restore the file name and the line position
      env.current_file = old_file;
      env.current_line = saved_lines;

      // sync the buffer
      _PP_internal::output_line (env.current_file, env.current_line, _result);
    }
#ifndef RPP_JAMBI
//   else
//     std::cerr << "*** WARNING " << filename << ": No such file or directory" << std::endl;
#endif

  return _first;
}

template <typename InputIterator, typename OutputIterator>
void pp::operator () (InputIterator _first, InputIterator _last, OutputIterator _result)
{
#ifndef PP_NO_SMART_HEADER_PROTECTION
  std::string prot;
  prot.reserve (255);
  pp_fast_string tmp (prot.c_str (), prot.size ());

  if (find_header_protection (_first, _last, &prot)
      && env.resolve (&tmp) != 0)
    {
      // std::cerr << "** DEBUG found header protection:" << prot << std::endl;
      return;
    }
#endif

  env.current_line = 1;
  char buffer[512];

  while (true)
    {
      _first = skip_blanks (_first, _last);
      env.current_line += skip_blanks.lines;

      if (_first == _last)
        break;
      else if (*_first == '#')
        {
          assert (*_first == '#');
          _first = skip_blanks (++_first, _last);
          env.current_line += skip_blanks.lines;

          InputIterator end_id = skip_identifier (_first, _last);
          env.current_line += skip_identifier.lines;
          std::size_t size = end_id - _first;

          assert (size < 512);
          char *cp = buffer;
          std::copy (_first, end_id, cp);
          cp[size] = '\0';

          end_id = skip_blanks (end_id, _last);
          _first = skip (end_id, _last);

          int was = env.current_line;
          (void) handle_directive (buffer, size, end_id, _first, _result);

          if (env.current_line != was)
            {
              env.current_line = was;
              _PP_internal::output_line (env.current_file, env.current_line, _result);
            }
        }
      else if (*_first == '\n')
        {
          // ### compress the line
          *_result++ = *_first++;
          ++env.current_line;
        }
      else if (skipping ())
        _first = skip (_first, _last);
      else
        {
          _PP_internal::output_line (env.current_file, env.current_line, _result);
          _first = expand (_first, _last, _result);
          env.current_line += expand.lines;

          if (expand.generated_lines)
            _PP_internal::output_line (env.current_file, env.current_line, _result);
        }
    }
}

inline pp::pp (pp_environment &_env):
  env (_env), expand (env), skip_comment(false)
{
  iflevel = 0;
  _M_skipping[iflevel] = 0;
  _M_true_test[iflevel] = 0;
}

inline std::back_insert_iterator<std::vector<std::string> > pp::include_paths_inserter ()
{ return std::back_inserter (include_paths); }

inline std::vector<std::string>::iterator pp::include_paths_begin ()
{ return include_paths.begin (); }

inline std::vector<std::string>::iterator pp::include_paths_end ()
{ return include_paths.end (); }

inline std::vector<std::string>::const_iterator pp::include_paths_begin () const
{ return include_paths.begin (); }

inline std::vector<std::string>::const_iterator pp::include_paths_end () const
{ return include_paths.end (); }

inline void pp::push_include_path (std::string const &_path)
{
  if (_path.empty () || _path [_path.size () - 1] != PATH_SEPARATOR)
    {
      std::string tmp (_path);
      tmp += PATH_SEPARATOR;
      include_paths.push_back (tmp);
    }

  else
    include_paths.push_back (_path);
}

template <typename InputIterator>
InputIterator pp::handle_define (InputIterator _first, InputIterator _last)
{
  pp_macro macro;
#if defined (PP_WITH_MACRO_POSITION)
  macro.file = pp_symbol::get (env.current_file);
#endif
  std::string definition;

  _first = skip_blanks (_first, _last);
  InputIterator end_macro_name = skip_identifier (_first, _last);
  pp_fast_string const *macro_name = pp_symbol::get (_first, end_macro_name);
  _first = end_macro_name;

  if (_first != _last && *_first == '(')
    {
      macro.is.function_like = true;
      macro.formals.reserve (5);

      _first = skip_blanks (++_first, _last); // skip '('
      InputIterator arg_end = skip_identifier (_first, _last);
      if (_first != arg_end)
        macro.formals.push_back (pp_symbol::get (_first, arg_end));

      _first = skip_blanks (arg_end, _last);

      if (*_first == '.')
        {
          macro.is.variadics = true;
          while (*_first == '.')
            ++_first;
        }

      while (_first != _last && *_first == ',')
        {
          _first = skip_blanks (++_first, _last);

          arg_end = skip_identifier (_first, _last);
          if (_first != arg_end)
            macro.formals.push_back (pp_symbol::get (_first, arg_end));

          _first = skip_blanks (arg_end, _last);

          if (*_first == '.')
            {
              macro.is.variadics = true;
              while (*_first == '.')
                ++_first;
            }
        }

      assert (*_first == ')');
      ++_first;
    }

  _first = skip_blanks (_first, _last);

  while (_first != _last && *_first != '\n')
    {
      if (*_first == '/') {
          _first = skip_comment(_first, _last);
          env.current_line += skip_comment.lines;
      }

      if (*_first == '\\')
        {
          InputIterator begin = _first;
          begin = skip_blanks (++begin, _last);

          if (begin != _last && *begin == '\n')
            {
              ++macro.lines;
              _first = skip_blanks (++begin, _last);
              definition += ' ';
              continue;
            }
        }

      definition += *_first++;
    }

  macro.definition = pp_symbol::get (definition);
  env.bind (macro_name, macro);

  return _first;
}

template <typename InputIterator>
InputIterator pp::skip (InputIterator _first, InputIterator _last)
{
  pp_skip_string_literal skip_string_literal;
  pp_skip_char_literal skip_char_literal;

  while (_first != _last && *_first != '\n')
    {
      if (*_first == '/')
        {
          _first = skip_comment_or_divop (_first, _last);
          env.current_line += skip_comment_or_divop.lines;
        }
      else if (*_first == '"')
        {
          _first = skip_string_literal (_first, _last);
          env.current_line += skip_string_literal.lines;
        }
      else if (*_first == '\'')
        {
          _first = skip_char_literal (_first, _last);
          env.current_line += skip_char_literal.lines;
        }
      else if (*_first == '\\')
        {
          _first = skip_blanks (++_first, _last);
          env.current_line += skip_blanks.lines;

          if (_first != _last && *_first == '\n')
            {
              ++_first;
              ++env.current_line;
            }
        }
      else
        ++_first;
    }

  return _first;
}

inline bool pp::test_if_level()
{
  bool result = !_M_skipping[iflevel++];
  _M_skipping[iflevel] = _M_skipping[iflevel - 1];
  _M_true_test[iflevel] = false;
  return result;
}

inline int pp::skipping() const
{ return _M_skipping[iflevel]; }

template <typename InputIterator>
InputIterator pp::eval_primary(InputIterator _first, InputIterator _last, Value *result)
{
  bool expect_paren = false;
  int token;
  _first = next_token (_first, _last, &token);

  switch (token)
    {
    case TOKEN_NUMBER:
      result->set_long (token_value);
      break;

    case TOKEN_UNUMBER:
      result->set_ulong (token_uvalue);
      break;

    case TOKEN_DEFINED:
      _first = next_token (_first, _last, &token);

      if (token == '(')
        {
          expect_paren = true;
          _first = next_token (_first, _last, &token);
        }

      if (token != TOKEN_IDENTIFIER)
        {
          std::cerr << "** WARNING expected ``identifier'' found:" << char(token) << " at " << env.current_file << ":" << env.current_line << std::endl;
          result->set_long (0);
          break;
        }

      result->set_long (env.resolve (token_text->c_str (), token_text->size ()) != 0);

      next_token (_first, _last, &token); // skip '('

      if (expect_paren)
        {
          InputIterator next = next_token (_first, _last, &token);
          if (token != ')')
            std::cerr << "** WARNING expected ``)'' at " << env.current_file << ":" << env.current_line << std::endl;
          else
            _first = next;
        }
      break;

    case TOKEN_IDENTIFIER:
      result->set_long (0);
      break;

    case '-':
      _first = eval_primary (_first, _last, result);
      result->set_long (- result->l);
      return _first;

    case '+':
      _first = eval_primary (_first, _last, result);
      return _first;

    case '!':
      _first = eval_primary (_first, _last, result);
      result->set_long (result->is_zero ());
      return _first;

    case '(':
      _first = eval_constant_expression(_first, _last, result);
      next_token (_first, _last, &token);

      if (token != ')')
        std::cerr << "** WARNING expected ``)'' = " << token << " at " << env.current_file << ":" << env.current_line << std::endl;
      else
        _first = next_token(_first, _last, &token);
      break;

    default:
      result->set_long (0);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_multiplicative(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_primary(_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  while (token == '*' || token == '/' || token == '%')
    {
      Value value;
      _first = eval_primary(next, _last, &value);

      if (token == '*')
        result->op_mult (value);
      else if (token == '/')
        {
          if (value.is_zero ())
            {
              std::cerr << "** WARNING division by zero at " << env.current_file << ":" << env.current_line << std::endl;
              result->set_long (0);
            }
          else
            result->op_div (value);
        }
      else
        {
          if (value.is_zero ())
            {
              std::cerr << "** WARNING division by zero at " << env.current_file << ":" << env.current_line << std::endl;
              result->set_long (0);
            }
          else
            result->op_mod (value);
        }
      next = next_token (_first, _last, &token);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_additive(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_multiplicative(_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  while (token == '+' || token == '-')
    {
      Value value;
      _first = eval_multiplicative(next, _last, &value);

      if (token == '+')
        result->op_add (value);
      else
        result->op_sub (value);
      next = next_token (_first, _last, &token);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_shift(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_additive(_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  while (token == TOKEN_LT_LT || token == TOKEN_GT_GT)
    {
      Value value;
      _first = eval_additive (next, _last, &value);

      if (token == TOKEN_LT_LT)
        result->op_lhs (value);
      else
        result->op_rhs (value);
      next = next_token (_first, _last, &token);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_relational(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_shift(_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  while (token == '<'
      || token == '>'
      || token == TOKEN_LT_EQ
      || token == TOKEN_GT_EQ)
    {
      Value value;
      _first = eval_shift(next, _last, &value);

      switch (token)
        {
          default:
            assert (0);
            break;

          case '<':
            result->op_lt (value);
            break;

          case '>':
            result->op_gt (value);
            break;

          case TOKEN_LT_EQ:
            result->op_le (value);
            break;

          case TOKEN_GT_EQ:
            result->op_ge (value);
            break;
        }
      next = next_token (_first, _last, &token);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_equality(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_relational(_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  while (token == TOKEN_EQ_EQ || token == TOKEN_NOT_EQ)
    {
      Value value;
      _first = eval_relational(next, _last, &value);

      if (token == TOKEN_EQ_EQ)
        result->op_eq (value);
      else
        result->op_ne (value);
      next = next_token (_first, _last, &token);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_and(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_equality(_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  while (token == '&')
    {
      Value value;
      _first = eval_equality(next, _last, &value);
      result->op_bit_and (value);
      next = next_token (_first, _last, &token);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_xor(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_and(_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  while (token == '^')
    {
      Value value;
      _first = eval_and(next, _last, &value);
      result->op_bit_xor (value);
      next = next_token (_first, _last, &token);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_or(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_xor(_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  while (token == '|')
    {
      Value value;
      _first = eval_xor(next, _last, &value);
      result->op_bit_or (value);
      next = next_token (_first, _last, &token);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_logical_and(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_or(_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  while (token == TOKEN_AND_AND)
    {
      Value value;
      _first = eval_or(next, _last, &value);
      result->op_and (value);
      next = next_token (_first, _last, &token);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_logical_or(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_logical_and (_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  while (token == TOKEN_OR_OR)
    {
      Value value;
      _first = eval_logical_and(next, _last, &value);
      result->op_or (value);
      next = next_token (_first, _last, &token);
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_constant_expression(InputIterator _first, InputIterator _last, Value *result)
{
  _first = eval_logical_or(_first, _last, result);

  int token;
  InputIterator next = next_token (_first, _last, &token);

  if (token == '?')
    {
      Value left_value;
      _first = eval_constant_expression(next, _last, &left_value);
      _first = skip_blanks (_first, _last);

      _first = next_token(_first, _last, &token);
      if (token == ':')
        {
          Value right_value;
          _first = eval_constant_expression(_first, _last, &right_value);

          *result = !result->is_zero () ? left_value : right_value;
        }
      else
        {
          std::cerr << "** WARNING expected ``:'' = " << int (token) << " at " << env.current_file << ":" << env.current_line << std::endl;
          *result = left_value;
        }
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::eval_expression (InputIterator _first, InputIterator _last, Value *result)
{
  return _first = eval_constant_expression (skip_blanks (_first, _last), _last, result);
}

template <typename InputIterator>
std::string pp::expand_condition(InputIterator _first, InputIterator _last)
{
  pp_macro_expander expand_condition(env);
  std::string condition;
  condition.reserve(255);
  expand_condition(skip_blanks(_first, _last), _last, std::back_inserter(condition));
  std::string condition2ndpass;
  condition2ndpass.reserve(255);
  const char* first = condition.c_str();
  const char* last = first + condition.size();
  expand_condition(skip_blanks(first, last), last, std::back_inserter(condition2ndpass));
  return condition2ndpass;
}

template <typename InputIterator>
InputIterator pp::handle_if (InputIterator _first, InputIterator _last)
{
  if (test_if_level())
    {
      std::string condition = expand_condition(_first, _last);

      Value result;
      result.set_long (0);
      eval_expression(condition.c_str (), condition.c_str () + condition.size (), &result);

      _M_true_test[iflevel] = !result.is_zero ();
      _M_skipping[iflevel] = result.is_zero ();
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::handle_else (InputIterator __first, InputIterator /*__last*/)
{
  if (iflevel == 0 && !skipping ())
    {
      std::cerr << "** WARNING #else without #if" << " at " << env.current_file << ":" << env.current_line << std::endl;
    }
  else if (iflevel > 0 && _M_skipping[iflevel - 1])
    {
      _M_skipping[iflevel] = true;
    }
  else
    {
      _M_skipping[iflevel] = _M_true_test[iflevel];
    }

  return __first;
}

template <typename InputIterator>
InputIterator pp::handle_elif (InputIterator _first, InputIterator _last)
{
  assert(iflevel > 0);

  if (iflevel == 0 && !skipping())
    {
      std::cerr << "** WARNING #else without #if" << " at " << env.current_file << ":" << env.current_line << std::endl;
    }
  else if (!_M_true_test[iflevel] && !_M_skipping[iflevel - 1])
    {
      std::string condition = expand_condition(_first, _last);

      Value result;
      result.set_long(0);
      eval_expression(condition.c_str(), condition.c_str() + condition.size(), &result);
      _M_true_test[iflevel] = !result.is_zero ();
      _M_skipping[iflevel] = result.is_zero ();
    }
  else
    {
      _M_skipping[iflevel] = true;
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::handle_endif (InputIterator _first, InputIterator /*__last*/)
{
  if (iflevel == 0 && !skipping())
    {
      std::cerr << "** WARNING #endif without #if" << " at " << env.current_file << ":" << env.current_line << std::endl;
    }
  else
    {
      _M_skipping[iflevel] = 0;
      _M_true_test[iflevel] = 0;

      --iflevel;
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::handle_ifdef (bool check_undefined, InputIterator _first, InputIterator _last)
{
  if (test_if_level())
    {
      InputIterator end_macro_name = skip_identifier (_first, _last);

      std::size_t __size;
#if defined(__SUNPRO_CC)
      std::distance (__first, end_macro_name, __size);
#else
      __size = std::distance (_first, end_macro_name);
#endif
      assert (__size < 256);

      char __buffer [256];
      std::copy (_first, end_macro_name, __buffer);

      bool value = env.resolve (__buffer, __size) != 0;

      _first = end_macro_name;

      if (check_undefined)
        value = !value;

      _M_true_test[iflevel] = value;
      _M_skipping[iflevel] = !value;
    }

  return _first;
}

template <typename InputIterator>
InputIterator pp::handle_undef(InputIterator _first, InputIterator _last)
{
  _first = skip_blanks (_first, _last);
  InputIterator end_macro_name = skip_identifier (_first, _last);
  assert (end_macro_name != _first);

  std::size_t __size;
#if defined(__SUNPRO_CC)
  std::distance (__first, end_macro_name, __size);
#else
  __size = std::distance (_first, end_macro_name);
#endif

  assert (__size < 256);

  char __buffer [256];
  std::copy (_first, end_macro_name, __buffer);

  pp_fast_string const __tmp (__buffer, __size);
  env.unbind (&__tmp);

  _first = end_macro_name;

  return _first;
}

template <typename InputIterator>
char pp::peek_char (InputIterator _first, InputIterator _last)
{
  if (_first == _last)
    return 0;

  return *++_first;
}

template <typename InputIterator>
InputIterator pp::next_token (InputIterator _first, InputIterator _last, int *kind)
{
  _first = skip_blanks (_first, _last);

  if (_first == _last)
    {
      *kind = 0;
      return _first;
    }

  char ch = *_first;
  char ch2 = peek_char (_first, _last);

  switch (ch)
    {
      case '/':
        if (ch2 == '/' || ch2 == '*')
          {
            _first = skip_comment_or_divop (_first, _last);
            return next_token (_first, _last, kind);
          }
        ++_first;
        *kind = '/';
        break;

      case '<':
        ++_first;
        if (ch2 == '<')
          {
            ++_first;
            *kind = TOKEN_LT_LT;
          }
        else if (ch2 == '=')
          {
            ++_first;
            *kind = TOKEN_LT_EQ;
          }
        else
          *kind = '<';

        return _first;

      case '>':
        ++_first;
        if (ch2 == '>')
          {
            ++_first;
            *kind = TOKEN_GT_GT;
          }
        else if (ch2 == '=')
          {
            ++_first;
            *kind = TOKEN_GT_EQ;
          }
        else
          *kind = '>';

        return _first;

      case '!':
        ++_first;
        if (ch2 == '=')
          {
            ++_first;
            *kind = TOKEN_NOT_EQ;
          }
        else
          *kind = '!';

        return _first;

      case '=':
        ++_first;
        if (ch2 == '=')
          {
            ++_first;
            *kind = TOKEN_EQ_EQ;
          }
        else
          *kind = '=';

        return _first;

      case '|':
        ++_first;
        if (ch2 == '|')
          {
            ++_first;
            *kind = TOKEN_OR_OR;
          }
        else
          *kind = '|';

        return _first;

      case '&':
        ++_first;
        if (ch2 == '&')
          {
            ++_first;
            *kind = TOKEN_AND_AND;
          }
        else
          *kind = '&';

        return _first;

      default:
        if (pp_isalpha (ch) || ch == '_')
          {
            InputIterator end = skip_identifier (_first, _last);
            _M_current_text.assign (_first, end);

            token_text = &_M_current_text;
            _first = end;

            if (*token_text == "defined")
              *kind = TOKEN_DEFINED;
            else
              *kind = TOKEN_IDENTIFIER;
          }
        else if (pp_isdigit (ch))
          {
            InputIterator end = skip_number (_first, _last);
            std::string __str (_first, _last);
            char ch = __str [__str.size () - 1];
            if (ch == 'u' || ch == 'U')
              {
                token_uvalue = strtoul (__str.c_str (), 0, 0);
                *kind = TOKEN_UNUMBER;
              }
            else
              {
                token_value = strtol (__str.c_str (), 0, 0);
                *kind = TOKEN_NUMBER;
              }
            _first = end;
          }
        else
          *kind = *_first++;
    }

  return _first;
}

} // namespace rpp

#endif // PP_ENGINE_BITS_H

// kate: space-indent on; indent-width 2; replace-tabs on;
