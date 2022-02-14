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

#ifndef PP_MACRO_EXPANDER_H
#define PP_MACRO_EXPANDER_H

#include <stdio.h>

namespace rpp {

struct pp_frame
{
  pp_macro *expanding_macro;
  std::vector<std::string> *actuals;

  pp_frame (pp_macro *_expanding_macro, std::vector<std::string> *_actuals):
    expanding_macro (_expanding_macro), actuals (_actuals) {}
};

class pp_macro_expander
{
  pp_environment &env;
  pp_frame *frame;

  pp_skip_number skip_number;
  pp_skip_identifier skip_identifier;
  pp_skip_string_literal skip_string_literal;
  pp_skip_char_literal skip_char_literal;
  pp_skip_argument skip_argument;
  pp_skip_comment_or_divop skip_comment_or_divop;
  pp_skip_blanks skip_blanks;
  pp_skip_whitespaces skip_whitespaces;

  std::string const *resolve_formal (pp_fast_string const *_name)
  {
    assert (_name != 0);

    if (! frame)
      return 0;

    assert (frame->expanding_macro != 0);

    std::vector<pp_fast_string const *> const formals = frame->expanding_macro->formals;
    for (std::size_t index = 0; index < formals.size(); ++index)
      {
        pp_fast_string const *formal = formals[index];

        if (*formal != *_name)
          continue;

        else if (frame->actuals && index < frame->actuals->size())
          return &(*frame->actuals)[index];

        else
          assert (0); // internal error?
      }

    return 0;
  }

public: // attributes
  int lines;
  int generated_lines;

public:
  pp_macro_expander (pp_environment &_env, pp_frame *_frame = 0):
    env (_env), frame (_frame), lines (0), generated_lines (0) {}

  template <typename InputIterator, typename OutputIterator>
  InputIterator operator () (InputIterator _first, InputIterator _last, OutputIterator _result)
  {
    generated_lines = 0;
    _first = skip_blanks (_first, _last);
    lines = skip_blanks.lines;

    while (_first != _last)
      {
        if (*_first == '\n')
          {
            *_result++ = *_first;
            ++lines;

            _first = skip_blanks (++_first, _last);
            lines += skip_blanks.lines;

            if (_first != _last && *_first == '#')
              break;
          }
        else if (*_first == '#')
          {
            _first = skip_blanks (++_first, _last);
            lines += skip_blanks.lines;

            InputIterator end_id = skip_identifier (_first, _last);

            // ### rewrite: not safe
            char name_buffer[512], *cp = name_buffer;
            std::copy (_first, end_id, cp);
            std::size_t name_size = end_id - _first;
            name_buffer[name_size] = '\0';

            pp_fast_string fast_name (name_buffer, name_size);

            if (std::string const *actual = resolve_formal (&fast_name))
              {
                *_result++ = '\"';

                for (std::string::const_iterator it = skip_whitespaces (actual->begin (), actual->end ());
                    it != actual->end (); ++it)
                  {
                    if (*it == '"')
                      {
                        *_result++ = '\\';
                        *_result++ = *it;
                      }

                    else if (*it == '\n')
                      {
                        *_result++ = '"';
                        *_result++ = '\n';
                        *_result++ = '"';
                      }

                    else
                      *_result++ = *it;
                  }

                *_result++ = '\"';
                _first = end_id;
              }
            else
              *_result++ = '#'; // ### warning message?
          }
        else if (*_first == '\"')
          {
            InputIterator next_pos = skip_string_literal (_first, _last);
            lines += skip_string_literal.lines;
            std::copy (_first, next_pos, _result);
            _first = next_pos;
          }
        else if (*_first == '\'')
          {
            InputIterator next_pos = skip_char_literal (_first, _last);
            lines += skip_char_literal.lines;
            std::copy (_first, next_pos, _result);
            _first = next_pos;
          }
        else if (_PP_internal::comment_p (_first, _last))
          {
            _first = skip_comment_or_divop (_first, _last);
            int n = skip_comment_or_divop.lines;
            lines += n;

            while (n-- > 0)
              *_result++ = '\n';
          }
        else if (pp_isspace (*_first))
          {
            for (; _first != _last; ++_first)
              {
                if (*_first == '\n' || !pp_isspace (*_first))
                  break;
              }

            *_result = ' ';
          }
        else if (pp_isdigit (*_first))
          {
            InputIterator next_pos = skip_number (_first, _last);
            lines += skip_number.lines;
            std::copy (_first, next_pos, _result);
            _first = next_pos;
          }
        else if (pp_isalpha (*_first) || *_first == '_')
          {
            InputIterator name_begin = _first;
            InputIterator name_end = skip_identifier (_first, _last);
            _first = name_end; // advance

            // search for the paste token
            InputIterator next = skip_blanks (_first, _last);
            if (next != _last && *next == '#')
              {
                ++next;
                if (next != _last && *next == '#')
                  _first = skip_blanks(++next, _last);
              }

            // ### rewrite: not safe

            std::ptrdiff_t name_size;
#if defined(__SUNPRO_CC)
             std::distance (name_begin, name_end, name_size);
#else
            name_size = std::distance (name_begin, name_end);
#endif
            assert (name_size >= 0 && name_size < 512);

            char name_buffer[512], *cp = name_buffer;
            std::size_t _size = name_end - name_begin;
            std::copy (name_begin, name_end, cp);
            name_buffer[_size] = '\0';

            pp_fast_string fast_name (name_buffer, name_size);

            if (std::string const *actual = resolve_formal (&fast_name))
              {
                std::copy (actual->begin (), actual->end (), _result);
                continue;
              }

            static bool hide_next = false; // ### remove me

            pp_macro *macro = env.resolve (name_buffer, name_size);
            if (! macro || macro->hidden || hide_next)
              {
                hide_next = ! strcmp (name_buffer, "defined");

                if (_size == 8 && name_buffer [0] == '_' && name_buffer [1] == '_')
                  {
                    if (! strcmp (name_buffer, "__LINE__"))
                      {
                        char buf [16];
                        char *end = buf + pp_snprintf (buf, 16, "%d", env.current_line + lines);

                        std::copy (&buf [0], end, _result);
                        continue;
                      }

                    else if (! strcmp (name_buffer, "__FILE__"))
                      {
                        _result++ = '"';
                        std::copy (env.current_file.begin (), env.current_file.end (), _result); // ### quote
                        _result++ = '"';
                        continue;
                      }
                  }

                std::copy (name_begin, name_end, _result);
                continue;
              }

            if (! macro->function_like)
              {
                pp_macro *m = 0;

                if (macro->definition)
                  {
                    macro->hidden = true;

                    std::string tmp;
                    tmp.reserve (256);

                    pp_macro_expander expand_macro (env);
                    expand_macro (macro->definition->begin (), macro->definition->end (), std::back_inserter (tmp));
                    generated_lines += expand_macro.lines;

                    if (! tmp.empty ())
                      {
                        std::string::iterator begin_id = skip_whitespaces (tmp.begin (), tmp.end ());
                        std::string::iterator end_id = skip_identifier (begin_id, tmp.end ());

                        if (end_id == tmp.end ())
                          {
                            std::string id;
                            id.assign (begin_id, end_id);

                            std::size_t x;
#if defined(__SUNPRO_CC)
                            std::distance (__begin_id, __end_id, x);
#else
                            x = std::distance (begin_id, end_id);
#endif
                            m = env.resolve (id.c_str (), x);
                          }

                        if (! m)
                          std::copy (tmp.begin (), tmp.end (), _result);
                      }

                    macro->hidden = false;
                  }

                if (! m)
                  continue;

                macro = m;
              }

            // function like macro
            InputIterator arg_it = skip_whitespaces (_first, _last);

            if (arg_it == _last || *arg_it != '(')
              {
                std::copy (name_begin, name_end, _result);
                lines += skip_whitespaces.lines;
                _first = arg_it;
                continue;
              }

            std::vector<std::string> actuals;
            actuals.reserve (5);
            ++arg_it; // skip '('

            pp_macro_expander expand_actual (env, frame);

            InputIterator arg_end = skip_argument_variadics (actuals, macro, arg_it, _last);
            if (arg_it != arg_end)
              {
                std::string actual (arg_it, arg_end);
                actuals.resize (actuals.size() + 1);
                actuals.back ().reserve (255);
                expand_actual (actual.begin (), actual.end(), std::back_inserter (actuals.back()));
                arg_it = arg_end;
              }

            while (arg_it != _last && *arg_end == ',')
              {
                ++arg_it; // skip ','

                arg_end = skip_argument_variadics (actuals, macro, arg_it, _last);
                std::string actual (arg_it, arg_end);
                actuals.resize (actuals.size() + 1);
                actuals.back ().reserve (255);
                expand_actual (actual.begin (), actual.end(), std::back_inserter (actuals.back()));
                arg_it = arg_end;
              }

              assert (arg_it != _last && *arg_it == ')');

              ++arg_it; // skip ')'
              _first = arg_it;

#if 0 // ### enable me
              assert ((macro->variadics && macro->formals.size () >= actuals.size ())
                          || macro->formals.size() == actuals.size());
#endif

              pp_frame frame (macro, &actuals);
              pp_macro_expander expand_macro (env, &frame);
              macro->hidden = true;
              expand_macro (macro->definition->begin (), macro->definition->end (), _result);
              macro->hidden = false;
              generated_lines += expand_macro.lines;
          }
        else
          *_result++ = *_first++;
      }

    return _first;
  }

  template <typename InputIterator>
  InputIterator skip_argument_variadics (std::vector<std::string> const &_actuals, pp_macro *_macro,
                                          InputIterator _first, InputIterator _last)
  {
    InputIterator arg_end = skip_argument (_first, _last);

    while (_macro->variadics && _first != arg_end && arg_end != _last && *arg_end == ','
        && (_actuals.size () + 1) == _macro->formals.size ())
      {
        arg_end = skip_argument (++arg_end, _last);
      }

    return arg_end;
  }
};

} // namespace rpp

#endif // PP_MACRO_EXPANDER_H

// kate: space-indent on; indent-width 2; replace-tabs on;
