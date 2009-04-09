#include "PythonQtWrapper_QLineEdit.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmenu.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qwidget.h>

QLineEdit* PythonQtWrapper_QLineEdit::new_QLineEdit(QWidget*  parent)
{ 
return new QLineEdit(parent); }

QLineEdit* PythonQtWrapper_QLineEdit::new_QLineEdit(const QString&  arg__1, QWidget*  parent)
{ 
return new QLineEdit(arg__1, parent); }

Qt::Alignment  PythonQtWrapper_QLineEdit::alignment(QLineEdit* theWrappedObject) const
{
return theWrappedObject->alignment();
}

void PythonQtWrapper_QLineEdit::backspace(QLineEdit* theWrappedObject)
{
theWrappedObject->backspace();
}

QCompleter*  PythonQtWrapper_QLineEdit::completer(QLineEdit* theWrappedObject) const
{
return theWrappedObject->completer();
}

QMenu*  PythonQtWrapper_QLineEdit::createStandardContextMenu(QLineEdit* theWrappedObject)
{
return theWrappedObject->createStandardContextMenu();
}

void PythonQtWrapper_QLineEdit::cursorBackward(QLineEdit* theWrappedObject, bool  mark, int  steps)
{
theWrappedObject->cursorBackward(mark, steps);
}

void PythonQtWrapper_QLineEdit::cursorForward(QLineEdit* theWrappedObject, bool  mark, int  steps)
{
theWrappedObject->cursorForward(mark, steps);
}

int  PythonQtWrapper_QLineEdit::cursorPosition(QLineEdit* theWrappedObject) const
{
return theWrappedObject->cursorPosition();
}

int  PythonQtWrapper_QLineEdit::cursorPositionAt(QLineEdit* theWrappedObject, const QPoint&  pos)
{
return theWrappedObject->cursorPositionAt(pos);
}

void PythonQtWrapper_QLineEdit::cursorWordBackward(QLineEdit* theWrappedObject, bool  mark)
{
theWrappedObject->cursorWordBackward(mark);
}

void PythonQtWrapper_QLineEdit::cursorWordForward(QLineEdit* theWrappedObject, bool  mark)
{
theWrappedObject->cursorWordForward(mark);
}

void PythonQtWrapper_QLineEdit::del(QLineEdit* theWrappedObject)
{
theWrappedObject->del();
}

void PythonQtWrapper_QLineEdit::deselect(QLineEdit* theWrappedObject)
{
theWrappedObject->deselect();
}

QString  PythonQtWrapper_QLineEdit::displayText(QLineEdit* theWrappedObject) const
{
return theWrappedObject->displayText();
}

bool  PythonQtWrapper_QLineEdit::dragEnabled(QLineEdit* theWrappedObject) const
{
return theWrappedObject->dragEnabled();
}

QLineEdit::EchoMode  PythonQtWrapper_QLineEdit::echoMode(QLineEdit* theWrappedObject) const
{
return theWrappedObject->echoMode();
}

void PythonQtWrapper_QLineEdit::end(QLineEdit* theWrappedObject, bool  mark)
{
theWrappedObject->end(mark);
}

bool  PythonQtWrapper_QLineEdit::event(QLineEdit* theWrappedObject, QEvent*  arg__1)
{
return theWrappedObject->event(arg__1);
}

bool  PythonQtWrapper_QLineEdit::hasAcceptableInput(QLineEdit* theWrappedObject) const
{
return theWrappedObject->hasAcceptableInput();
}

bool  PythonQtWrapper_QLineEdit::hasFrame(QLineEdit* theWrappedObject) const
{
return theWrappedObject->hasFrame();
}

bool  PythonQtWrapper_QLineEdit::hasSelectedText(QLineEdit* theWrappedObject) const
{
return theWrappedObject->hasSelectedText();
}

void PythonQtWrapper_QLineEdit::home(QLineEdit* theWrappedObject, bool  mark)
{
theWrappedObject->home(mark);
}

QString  PythonQtWrapper_QLineEdit::inputMask(QLineEdit* theWrappedObject) const
{
return theWrappedObject->inputMask();
}

QVariant  PythonQtWrapper_QLineEdit::inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  arg__1) const
{
return theWrappedObject->inputMethodQuery(arg__1);
}

void PythonQtWrapper_QLineEdit::insert(QLineEdit* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->insert(arg__1);
}

bool  PythonQtWrapper_QLineEdit::isModified(QLineEdit* theWrappedObject) const
{
return theWrappedObject->isModified();
}

bool  PythonQtWrapper_QLineEdit::isReadOnly(QLineEdit* theWrappedObject) const
{
return theWrappedObject->isReadOnly();
}

bool  PythonQtWrapper_QLineEdit::isRedoAvailable(QLineEdit* theWrappedObject) const
{
return theWrappedObject->isRedoAvailable();
}

bool  PythonQtWrapper_QLineEdit::isUndoAvailable(QLineEdit* theWrappedObject) const
{
return theWrappedObject->isUndoAvailable();
}

int  PythonQtWrapper_QLineEdit::maxLength(QLineEdit* theWrappedObject) const
{
return theWrappedObject->maxLength();
}

QSize  PythonQtWrapper_QLineEdit::minimumSizeHint(QLineEdit* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

QString  PythonQtWrapper_QLineEdit::selectedText(QLineEdit* theWrappedObject) const
{
return theWrappedObject->selectedText();
}

int  PythonQtWrapper_QLineEdit::selectionStart(QLineEdit* theWrappedObject) const
{
return theWrappedObject->selectionStart();
}

void PythonQtWrapper_QLineEdit::setAlignment(QLineEdit* theWrappedObject, Qt::Alignment  flag)
{
theWrappedObject->setAlignment(flag);
}

void PythonQtWrapper_QLineEdit::setCompleter(QLineEdit* theWrappedObject, QCompleter*  completer)
{
theWrappedObject->setCompleter(completer);
}

void PythonQtWrapper_QLineEdit::setCursorPosition(QLineEdit* theWrappedObject, int  arg__1)
{
theWrappedObject->setCursorPosition(arg__1);
}

void PythonQtWrapper_QLineEdit::setDragEnabled(QLineEdit* theWrappedObject, bool  b)
{
theWrappedObject->setDragEnabled(b);
}

void PythonQtWrapper_QLineEdit::setEchoMode(QLineEdit* theWrappedObject, QLineEdit::EchoMode  arg__1)
{
theWrappedObject->setEchoMode(arg__1);
}

void PythonQtWrapper_QLineEdit::setFrame(QLineEdit* theWrappedObject, bool  arg__1)
{
theWrappedObject->setFrame(arg__1);
}

void PythonQtWrapper_QLineEdit::setInputMask(QLineEdit* theWrappedObject, const QString&  inputMask)
{
theWrappedObject->setInputMask(inputMask);
}

void PythonQtWrapper_QLineEdit::setMaxLength(QLineEdit* theWrappedObject, int  arg__1)
{
theWrappedObject->setMaxLength(arg__1);
}

void PythonQtWrapper_QLineEdit::setModified(QLineEdit* theWrappedObject, bool  arg__1)
{
theWrappedObject->setModified(arg__1);
}

void PythonQtWrapper_QLineEdit::setReadOnly(QLineEdit* theWrappedObject, bool  arg__1)
{
theWrappedObject->setReadOnly(arg__1);
}

void PythonQtWrapper_QLineEdit::setSelection(QLineEdit* theWrappedObject, int  arg__1, int  arg__2)
{
theWrappedObject->setSelection(arg__1, arg__2);
}

void PythonQtWrapper_QLineEdit::setValidator(QLineEdit* theWrappedObject, const QValidator*  arg__1)
{
theWrappedObject->setValidator(arg__1);
}

QSize  PythonQtWrapper_QLineEdit::sizeHint(QLineEdit* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QString  PythonQtWrapper_QLineEdit::text(QLineEdit* theWrappedObject) const
{
return theWrappedObject->text();
}

const QValidator*  PythonQtWrapper_QLineEdit::validator(QLineEdit* theWrappedObject) const
{
return theWrappedObject->validator();
}

