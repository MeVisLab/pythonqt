#ifndef _PYSCRIPTINGCONSOLE_H
#define _PYSCRIPTINGCONSOLE_H

/*
 *
 *  Copyright (C) 2006 MeVis Research GmbH All Rights Reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  Further, this software is distributed without any warranty that it is
 *  free of the rightful claim of any third person regarding infringement
 *  or the like.  Any license provided herein, whether implied or
 *  otherwise, applies only to this software file.  Patent licenses, if
 *  any, provided herein do not apply to combinations of this program with
 *  other software, or any other product whatsoever.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact information: MeVis Research GmbH, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PyScriptingConsole.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-10
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include <QVariant>
#include <QTextEdit>

//-------------------------------------------------------------------------------
//! A simple console for python scripting
class PyScriptingConsole : public QTextEdit
{
  Q_OBJECT

public:
  PyScriptingConsole(QWidget* parent, const PythonQtObjectPtr& context, Qt::WindowFlags i = 0);

  ~PyScriptingConsole();

public slots:
  //! execute current line
  void executeLine();

  //! derived key press event
  void keyPressEvent (QKeyEvent * e);

  //! output from console
  void consoleMessage(const QString & message);

  //! get history
  QStringList history() { return _history; }

  //! set history
  void setHistory(const QStringList& h) { _history = h; _historyPosition = 0; }

  //! clear the console
  void clear();

  //! overridden to control which characters a user may delete
  virtual void cut();

  //! output redirection
  void stdOut(const QString& s);
  //! output redirection
  void stdErr(const QString& s);

protected:
  //! Returns the position of the command prompt
  int commandPromptPosition();

  //! Returns if deletion is allowed at the current cursor
  //! (with and without selected text)
  bool verifySelectionBeforeDeletion();

  //! Sets the current font
  void setCurrentFont(const QColor& color = QColor(0,0,0), bool bold = false);

  //! change the history according to _historyPos
  void changeHistory();

  //! Appends a newline and command prompt at the end of the document.
  void appendCommandPrompt();

  //! flush output that was not yet printed
  void flushStdOut();

private:
  PythonQtObjectPtr _context;

  QStringList _history;
  int         _historyPosition;

  QString _clickedAnchor;
  QString _storageKey;
  QString _language;
  QString _commandPrompt;

  QString _stdOut;
  QString _stdErr;

  QTextCharFormat _defaultTextCharacterFormat;
};



#endif