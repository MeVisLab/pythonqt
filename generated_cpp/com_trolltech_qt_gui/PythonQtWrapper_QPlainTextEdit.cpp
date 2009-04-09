#include "PythonQtWrapper_QPlainTextEdit.h"

#include <QAbstractTextDocumentLayout>
#include <QTextEdit>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qplaintextedit.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qurl.h>
#include <qwidget.h>

QPlainTextEdit* PythonQtWrapper_QPlainTextEdit::new_QPlainTextEdit(QWidget*  parent)
{ 
return new QPlainTextEdit(parent); }

QPlainTextEdit* PythonQtWrapper_QPlainTextEdit::new_QPlainTextEdit(const QString&  text, QWidget*  parent)
{ 
return new QPlainTextEdit(text, parent); }

bool  PythonQtWrapper_QPlainTextEdit::backgroundVisible(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->backgroundVisible();
}

int  PythonQtWrapper_QPlainTextEdit::blockCount(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->blockCount();
}

bool  PythonQtWrapper_QPlainTextEdit::canPaste(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->canPaste();
}

bool  PythonQtWrapper_QPlainTextEdit::centerOnScroll(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->centerOnScroll();
}

QMenu*  PythonQtWrapper_QPlainTextEdit::createStandardContextMenu(QPlainTextEdit* theWrappedObject)
{
return theWrappedObject->createStandardContextMenu();
}

QTextCharFormat  PythonQtWrapper_QPlainTextEdit::currentCharFormat(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->currentCharFormat();
}

QTextCursor  PythonQtWrapper_QPlainTextEdit::cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const
{
return theWrappedObject->cursorForPosition(pos);
}

QRect  PythonQtWrapper_QPlainTextEdit::cursorRect(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->cursorRect();
}

QRect  PythonQtWrapper_QPlainTextEdit::cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const
{
return theWrappedObject->cursorRect(cursor);
}

int  PythonQtWrapper_QPlainTextEdit::cursorWidth(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->cursorWidth();
}

QTextDocument*  PythonQtWrapper_QPlainTextEdit::document(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->document();
}

QString  PythonQtWrapper_QPlainTextEdit::documentTitle(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->documentTitle();
}

void PythonQtWrapper_QPlainTextEdit::ensureCursorVisible(QPlainTextEdit* theWrappedObject)
{
theWrappedObject->ensureCursorVisible();
}

QList<QTextEdit::ExtraSelection >  PythonQtWrapper_QPlainTextEdit::extraSelections(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->extraSelections();
}

bool  PythonQtWrapper_QPlainTextEdit::find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options)
{
return theWrappedObject->find(exp, options);
}

bool  PythonQtWrapper_QPlainTextEdit::isReadOnly(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->isReadOnly();
}

bool  PythonQtWrapper_QPlainTextEdit::isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->isUndoRedoEnabled();
}

QPlainTextEdit::LineWrapMode  PythonQtWrapper_QPlainTextEdit::lineWrapMode(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->lineWrapMode();
}

QVariant  PythonQtWrapper_QPlainTextEdit::loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name)
{
return theWrappedObject->loadResource(type, name);
}

int  PythonQtWrapper_QPlainTextEdit::maximumBlockCount(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->maximumBlockCount();
}

void PythonQtWrapper_QPlainTextEdit::mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier)
{
theWrappedObject->mergeCurrentCharFormat(modifier);
}

void PythonQtWrapper_QPlainTextEdit::moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode)
{
theWrappedObject->moveCursor(operation, mode);
}

bool  PythonQtWrapper_QPlainTextEdit::overwriteMode(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->overwriteMode();
}

void PythonQtWrapper_QPlainTextEdit::print(QPlainTextEdit* theWrappedObject, QPrinter*  printer) const
{
theWrappedObject->print(printer);
}

void PythonQtWrapper_QPlainTextEdit::setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible)
{
theWrappedObject->setBackgroundVisible(visible);
}

void PythonQtWrapper_QPlainTextEdit::setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled)
{
theWrappedObject->setCenterOnScroll(enabled);
}

void PythonQtWrapper_QPlainTextEdit::setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format)
{
theWrappedObject->setCurrentCharFormat(format);
}

void PythonQtWrapper_QPlainTextEdit::setCursorWidth(QPlainTextEdit* theWrappedObject, int  width)
{
theWrappedObject->setCursorWidth(width);
}

void PythonQtWrapper_QPlainTextEdit::setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document)
{
theWrappedObject->setDocument(document);
}

void PythonQtWrapper_QPlainTextEdit::setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title)
{
theWrappedObject->setDocumentTitle(title);
}

void PythonQtWrapper_QPlainTextEdit::setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections)
{
theWrappedObject->setExtraSelections(selections);
}

void PythonQtWrapper_QPlainTextEdit::setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode)
{
theWrappedObject->setLineWrapMode(mode);
}

void PythonQtWrapper_QPlainTextEdit::setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum)
{
theWrappedObject->setMaximumBlockCount(maximum);
}

void PythonQtWrapper_QPlainTextEdit::setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite)
{
theWrappedObject->setOverwriteMode(overwrite);
}

void PythonQtWrapper_QPlainTextEdit::setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro)
{
theWrappedObject->setReadOnly(ro);
}

void PythonQtWrapper_QPlainTextEdit::setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b)
{
theWrappedObject->setTabChangesFocus(b);
}

void PythonQtWrapper_QPlainTextEdit::setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width)
{
theWrappedObject->setTabStopWidth(width);
}

void PythonQtWrapper_QPlainTextEdit::setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor)
{
theWrappedObject->setTextCursor(cursor);
}

void PythonQtWrapper_QPlainTextEdit::setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags)
{
theWrappedObject->setTextInteractionFlags(flags);
}

void PythonQtWrapper_QPlainTextEdit::setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable)
{
theWrappedObject->setUndoRedoEnabled(enable);
}

void PythonQtWrapper_QPlainTextEdit::setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy)
{
theWrappedObject->setWordWrapMode(policy);
}

bool  PythonQtWrapper_QPlainTextEdit::tabChangesFocus(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->tabChangesFocus();
}

int  PythonQtWrapper_QPlainTextEdit::tabStopWidth(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->tabStopWidth();
}

QTextCursor  PythonQtWrapper_QPlainTextEdit::textCursor(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->textCursor();
}

Qt::TextInteractionFlags  PythonQtWrapper_QPlainTextEdit::textInteractionFlags(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->textInteractionFlags();
}

QString  PythonQtWrapper_QPlainTextEdit::toPlainText(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->toPlainText();
}

QTextOption::WrapMode  PythonQtWrapper_QPlainTextEdit::wordWrapMode(QPlainTextEdit* theWrappedObject) const
{
return theWrappedObject->wordWrapMode();
}

