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
// \file    PyScriptingConsole.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-10
*/
//----------------------------------------------------------------------------------

#include "PyScriptingConsole.h"

#include <QMenu>
//Added by qt3to4:
#include <QMouseEvent>
#include <QKeyEvent>
#include <QApplication>
#include <QTextDocumentFragment>
#include <QTextBlock>
#include <QTextCursor>
#include <QDebug>



//-----------------------------------------------------------------------------

PyScriptingConsole::PyScriptingConsole(QWidget* parent, const PythonQtObjectPtr& context, Qt::WindowFlags windowFlags)
 : QTextEdit(parent) {

  setWindowFlags(windowFlags);

  _commandPrompt              = QString("> ");
  _defaultTextCharacterFormat = currentCharFormat();
  _context                    = context;
  _historyPosition            = 0;

  clear();

  connect(PythonQt::self(), SIGNAL(pythonStdOut(const QString&)), this, SLOT(stdOut(const QString&)));
  connect(PythonQt::self(), SIGNAL(pythonStdErr(const QString&)), this, SLOT(stdErr(const QString&)));
}

//-----------------------------------------------------------------------------

void PyScriptingConsole::stdOut(const QString& s)
{
  _stdOut += s;
  int idx;
  while ((idx = _stdOut.indexOf('\n'))!=-1) {
    consoleMessage(_stdOut.left(idx));
    _stdOut = _stdOut.mid(idx+1);
  }
}

void PyScriptingConsole::stdErr(const QString& s)
{
  _stdErr += s;
  int idx;
  while ((idx = _stdErr.indexOf('\n'))!=-1) {
    consoleMessage(_stdErr.left(idx));
    _stdErr = _stdErr.mid(idx+1);
  }
}

void PyScriptingConsole::flushStdOut()
{
  if (!_stdOut.isEmpty()) {
    stdOut("\n");
  }
  if (!_stdErr.isEmpty()) {
    stdErr("\n");
  }
}

//-----------------------------------------------------------------------------

PyScriptingConsole::~PyScriptingConsole() {
}



//-----------------------------------------------------------------------------

void PyScriptingConsole::clear() {

  QTextEdit::clear();
  appendCommandPrompt();
}

//-----------------------------------------------------------------------------

void PyScriptingConsole::executeLine()
{
  QTextCursor textCursor = this->textCursor();
  textCursor.movePosition(QTextCursor::End);

  // Select the text from the command prompt until the end of the block
  // and get the selected text.
  textCursor.setPosition(commandPromptPosition());
  textCursor.movePosition(QTextCursor::End, QTextCursor::KeepAnchor);
  QString code = textCursor.selectedText();

  // i don't know where this trailing space is coming from, blast it!
  if (code.endsWith(" ")) {
    code.truncate(code.length()-1);
  }

  // Update the history
  _history << code;
  _historyPosition = _history.count();

  int cursorPosition = this->textCursor().position();

  // evaluate the code
  _stdOut = "";
  _stdErr = "";
  PythonQtObjectPtr p;
  p.setNewRef(PyRun_String(code.toLatin1().data(), Py_single_input, PyModule_GetDict(_context), PyModule_GetDict(_context)));
  if (!p) {
    PythonQt::self()->handleError();
  }

  flushStdOut();

  bool messageInserted = (this->textCursor().position() != cursorPosition);

  // If a message was inserted, then put another empty line before the command prompt
  // to improve readability.
  if (messageInserted) {
    append(QString());
  }

  // Insert a new command prompt
  appendCommandPrompt();

}



//-----------------------------------------------------------------------------

void PyScriptingConsole::appendCommandPrompt() {

  append(_language + _commandPrompt);

  QTextCursor cursor = textCursor();
  cursor.movePosition(QTextCursor::End);
  setTextCursor(cursor);
}



//-----------------------------------------------------------------------------

void PyScriptingConsole::setCurrentFont(const QColor& color, bool bold) {

  QTextCharFormat charFormat(_defaultTextCharacterFormat);

  QFont font(charFormat.font());
  font.setBold(bold);
  charFormat.setFont(font);

  QBrush brush(charFormat.foreground());
  brush.setColor(color);
  charFormat.setForeground(brush);

  setCurrentCharFormat(charFormat);
}



//-----------------------------------------------------------------------------

int PyScriptingConsole::commandPromptPosition() {

  QTextCursor textCursor(this->textCursor());
  textCursor.movePosition(QTextCursor::End);

  return textCursor.block().position() + 2 + _language.length();
}



//-----------------------------------------------------------------------------

void PyScriptingConsole::keyPressEvent(QKeyEvent* event) {

  bool        eventHandled = false;
  QTextCursor textCursor   = this->textCursor();

  int key = event->key();
  switch (key) {

  case Qt::Key_Left:

    // Moving the cursor left is limited to the position
    // of the command prompt.

    if (textCursor.position() <= commandPromptPosition()) {

      QApplication::beep();
      eventHandled = true;
    }
    break;

  case Qt::Key_Up:

    // Display the previous command in the history
    if (_historyPosition>0) {
      _historyPosition--;
      changeHistory();
    }

    eventHandled = true;
    break;

  case Qt::Key_Down:

    // Display the next command in the history
    if (_historyPosition+1<_history.count()) {
      _historyPosition++;
      changeHistory();
    }

    eventHandled = true;
    break;

  case Qt::Key_Return:

    executeLine();
    eventHandled = true;
    break;

  case Qt::Key_Backspace:

    if (textCursor.hasSelection()) {

      cut();
      eventHandled = true;

    } else {

      // Intercept backspace key event to check if
      // deleting a character is allowed. It is not
      // allowed, if the user wants to delete the
      // command prompt.

      if (textCursor.position() <= commandPromptPosition()) {

        QApplication::beep();
        eventHandled = true;
      }
    }
    break;

  case Qt::Key_Delete:

    cut();
    eventHandled = true;
    break;

  default:

    if (key >= Qt::Key_Space && key <= Qt::Key_division) {

      if (textCursor.hasSelection() && !verifySelectionBeforeDeletion()) {

        // The selection must not be deleted.
        eventHandled = true;

      } else {

        // The key is an input character, check if the cursor is
        // behind the last command prompt, else inserting the
        // character is not allowed.

        int commandPromptPosition = this->commandPromptPosition();
        if (textCursor.position() < commandPromptPosition) {

          textCursor.setPosition(commandPromptPosition);
          setTextCursor(textCursor);
        }
      }
    }
  }

  if (eventHandled) {

    event->accept();

  } else {

    QTextEdit::keyPressEvent(event);
    eventHandled = true;
  }
}



//-----------------------------------------------------------------------------

void PyScriptingConsole::cut() {

  bool deletionAllowed = verifySelectionBeforeDeletion();
  if (deletionAllowed) {
    QTextEdit::cut();
  }
}



//-----------------------------------------------------------------------------

bool PyScriptingConsole::verifySelectionBeforeDeletion() {

  bool deletionAllowed = true;

  QTextCursor textCursor = this->textCursor();

  int commandPromptPosition = this->commandPromptPosition();
  int selectionStart        = textCursor.selectionStart();
  int selectionEnd          = textCursor.selectionEnd();

  if (textCursor.hasSelection()) {

    // Selected text may only be deleted after the last command prompt.
    // If the selection is partly after the command prompt set the selection
    // to the part and deletion is allowed. If the selection occurs before the
    // last command prompt, then deletion is not allowed.

    if (selectionStart < commandPromptPosition ||
        selectionEnd < commandPromptPosition) {

      // Assure selectionEnd is bigger than selection start
      if (selectionStart > selectionEnd) {
        int tmp         = selectionEnd;
        selectionEnd    = selectionStart;
        selectionStart  = selectionEnd;
      }

      if (selectionEnd < commandPromptPosition) {

        // Selection is completely before command prompt,
        // so deletion is not allowed.
        QApplication::beep();
        deletionAllowed = false;

      } else {

        // The selectionEnd is after the command prompt, so set
        // the selection start to the commandPromptPosition.
        selectionStart = commandPromptPosition;
        textCursor.setPosition(selectionStart);
        textCursor.setPosition(selectionStart, QTextCursor::KeepAnchor);
        setTextCursor(textCursor);
      }
    }

  } else { // if (hasSelectedText())

    // When there is no selected text, deletion is not allowed before the
    // command prompt.
    if (textCursor.position() < commandPromptPosition) {

      QApplication::beep();
      deletionAllowed = false;
    }
  }

  return deletionAllowed;
}



//-----------------------------------------------------------------------------

void PyScriptingConsole::changeHistory() {

  // Select the text after the last command prompt ...
  QTextCursor textCursor = this->textCursor();
  textCursor.movePosition(QTextCursor::End);
  textCursor.setPosition(commandPromptPosition(), QTextCursor::KeepAnchor);

  // ... and replace it with the history text.
  textCursor.insertText(_history.value(_historyPosition));

  textCursor.movePosition(QTextCursor::End);
  setTextCursor(textCursor);
}



//-----------------------------------------------------------------------------

void PyScriptingConsole::consoleMessage(const QString & message) {

  append(QString());
  insertPlainText(message);

  // Reset all font modifications done by the html string
  setCurrentCharFormat(_defaultTextCharacterFormat);
}
