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

#ifndef PP_INTERNAL_H
#define PP_INTERNAL_H

#include <algorithm>
#include <stdio.h>

namespace rpp {

namespace _PP_internal
{

inline void extract_file_path (const std::string &_filename, std::string *_filepath)
{
  std::size_t index = _filename.rfind (PATH_SEPARATOR);

  if (index == std::string::npos)
    *_filepath = "/";

  else
    _filepath->assign (_filename, 0, index + 1);
}

template <typename OutputIterator>
void output_line(const std::string &_filename, int _line, OutputIterator _result)
{
  std::string msg;

  msg += "# ";

  char line_descr[16];
  pp_snprintf (line_descr, 16, "%d", _line);
  msg += line_descr;

  msg += " \"";

  if (_filename.empty ())
    msg += "<internal>";
  else
    msg += _filename;

  msg += "\"\n";
  std::copy (msg.begin (), msg.end (), _result);
}

template <typename InputIterator>
inline bool comment_p (InputIterator _first, InputIterator _last) /*const*/
{
  if (_first == _last)
    return false;

  if (*_first != '/')
    return false;

  if (++_first == _last)
    return false;

  return (*_first == '/' || *_first == '*');
}

struct _Compare_string: public std::binary_function<bool, pp_fast_string const *, pp_fast_string const *>
{
  inline bool operator () (pp_fast_string const *__lhs, pp_fast_string const *__rhs) const
  { return *__lhs < *__rhs; }
};

struct _Equal_to_string: public std::binary_function<bool, pp_fast_string const *, pp_fast_string const *>
{
  inline bool operator () (pp_fast_string const *__lhs, pp_fast_string const *__rhs) const
  { return *__lhs == *__rhs; }
};

struct _Hash_string: public std::unary_function<std::size_t, pp_fast_string const *>
{
  inline std::size_t operator () (pp_fast_string const *__s) const
  {
    char const *__ptr = __s->begin ();
    std::size_t __size = __s->size ();
    std::size_t __h = 0;

    for (std::size_t i = 0; i < __size; ++i)
      __h = (__h << 5) - __h + __ptr [i];

    return __h;
  }
};

} // _PP_internal

} // namespace rpp

#endif // PP_INTERNAL_H

// kate: space-indent on; indent-width 2; replace-tabs on;
