#include "PythonQtWrapper_QTextEdit.h"

#include <QTextCursor>
#include <QTextEdit>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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
#include <qtextedit.h>
#include <qtextformat.h>
#include <qurl.h>
#include <qwidget.h>

QTextEdit* PythonQtWrapper_QTextEdit::new_QTextEdit(QWidget*  parent)
{ 
return new QTextEdit(parent); }

QTextEdit* PythonQtWrapper_QTextEdit::new_QTextEdit(const QString&  text, QWidget*  parent)
{ 
return new QTextEdit(text, parent); }

bool  PythonQtWrapper_QTextEdit::acceptRichText(QTextEdit* theWrappedObject) const
{
return theWrappedObject->acceptRichText();
}

Qt::Alignment  PythonQtWrapper_QTextEdit::alignment(QTextEdit* theWrappedObject) const
{
return theWrappedObject->alignment();
}

QString  PythonQtWrapper_QTextEdit::anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const
{
return theWrappedObject->anchorAt(pos);
}

QTextEdit::AutoFormatting  PythonQtWrapper_QTextEdit::autoFormatting(QTextEdit* theWrappedObject) const
{
return theWrappedObject->autoFormatting();
}

bool  PythonQtWrapper_QTextEdit::canPaste(QTextEdit* theWrappedObject) const
{
return theWrappedObject->canPaste();
}

QMenu*  PythonQtWrapper_QTextEdit::createStandardContextMenu(QTextEdit* theWrappedObject)
{
return theWrappedObject->createStandardContextMenu();
}

QMenu*  PythonQtWrapper_QTextEdit::createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position)
{
return theWrappedObject->createStandardContextMenu(position);
}

QTextCharFormat  PythonQtWrapper_QTextEdit::currentCharFormat(QTextEdit* theWrappedObject) const
{
return theWrappedObject->currentCharFormat();
}

QFont  PythonQtWrapper_QTextEdit::currentFont(QTextEdit* theWrappedObject) const
{
return theWrappedObject->currentFont();
}

QTextCursor  PythonQtWrapper_QTextEdit::cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const
{
return theWrappedObject->cursorForPosition(pos);
}

QRect  PythonQtWrapper_QTextEdit::cursorRect(QTextEdit* theWrappedObject) const
{
return theWrappedObject->cursorRect();
}

QRect  PythonQtWrapper_QTextEdit::cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const
{
return theWrappedObject->cursorRect(cursor);
}

int  PythonQtWrapper_QTextEdit::cursorWidth(QTextEdit* theWrappedObject) const
{
return theWrappedObject->cursorWidth();
}

QTextDocument*  PythonQtWrapper_QTextEdit::document(QTextEdit* theWrappedObject) const
{
return theWrappedObject->document();
}

QString  PythonQtWrapper_QTextEdit::documentTitle(QTextEdit* theWrappedObject) const
{
return theWrappedObject->documentTitle();
}

void PythonQtWrapper_QTextEdit::ensureCursorVisible(QTextEdit* theWrappedObject)
{
theWrappedObject->ensureCursorVisible();
}

QList<QTextEdit::ExtraSelection >  PythonQtWrapper_QTextEdit::extraSelections(QTextEdit* theWrappedObject) const
{
return theWrappedObject->extraSelections();
}

bool  PythonQtWrapper_QTextEdit::find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options)
{
return theWrappedObject->find(exp, options);
}

QString  PythonQtWrapper_QTextEdit::fontFamily(QTextEdit* theWrappedObject) const
{
return theWrappedObject->fontFamily();
}

bool  PythonQtWrapper_QTextEdit::fontItalic(QTextEdit* theWrappedObject) const
{
return theWrappedObject->fontItalic();
}

qreal  PythonQtWrapper_QTextEdit::fontPointSize(QTextEdit* theWrappedObject) const
{
return theWrappedObject->fontPointSize();
}

bool  PythonQtWrapper_QTextEdit::fontUnderline(QTextEdit* theWrappedObject) const
{
return theWrappedObject->fontUnderline();
}

int  PythonQtWrapper_QTextEdit::fontWeight(QTextEdit* theWrappedObject) const
{
return theWrappedObject->fontWeight();
}

bool  PythonQtWrapper_QTextEdit::isReadOnly(QTextEdit* theWrappedObject) const
{
return theWrappedObject->isReadOnly();
}

bool  PythonQtWrapper_QTextEdit::isUndoRedoEnabled(QTextEdit* theWrappedObject) const
{
return theWrappedObject->isUndoRedoEnabled();
}

int  PythonQtWrapper_QTextEdit::lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const
{
return theWrappedObject->lineWrapColumnOrWidth();
}

QTextEdit::LineWrapMode  PythonQtWrapper_QTextEdit::lineWrapMode(QTextEdit* theWrappedObject) const
{
return theWrappedObject->lineWrapMode();
}

QVariant  PythonQtWrapper_QTextEdit::loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name)
{
return theWrappedObject->loadResource(type, name);
}

void PythonQtWrapper_QTextEdit::mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier)
{
theWrappedObject->mergeCurrentCharFormat(modifier);
}

void PythonQtWrapper_QTextEdit::moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode)
{
theWrappedObject->moveCursor(operation, mode);
}

bool  PythonQtWrapper_QTextEdit::overwriteMode(QTextEdit* theWrappedObject) const
{
return theWrappedObject->overwriteMode();
}

void PythonQtWrapper_QTextEdit::print(QTextEdit* theWrappedObject, QPrinter*  printer) const
{
theWrappedObject->print(printer);
}

void PythonQtWrapper_QTextEdit::setAcceptRichText(QTextEdit* theWrappedObject, bool  accept)
{
theWrappedObject->setAcceptRichText(accept);
}

void PythonQtWrapper_QTextEdit::setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features)
{
theWrappedObject->setAutoFormatting(features);
}

void PythonQtWrapper_QTextEdit::setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format)
{
theWrappedObject->setCurrentCharFormat(format);
}

void PythonQtWrapper_QTextEdit::setCursorWidth(QTextEdit* theWrappedObject, int  width)
{
theWrappedObject->setCursorWidth(width);
}

void PythonQtWrapper_QTextEdit::setDocument(QTextEdit* theWrappedObject, QTextDocument*  document)
{
theWrappedObject->setDocument(document);
}

void PythonQtWrapper_QTextEdit::setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title)
{
theWrappedObject->setDocumentTitle(title);
}

void PythonQtWrapper_QTextEdit::setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections)
{
theWrappedObject->setExtraSelections(selections);
}

void PythonQtWrapper_QTextEdit::setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w)
{
theWrappedObject->setLineWrapColumnOrWidth(w);
}

void PythonQtWrapper_QTextEdit::setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode)
{
theWrappedObject->setLineWrapMode(mode);
}

void PythonQtWrapper_QTextEdit::setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite)
{
theWrappedObject->setOverwriteMode(overwrite);
}

void PythonQtWrapper_QTextEdit::setReadOnly(QTextEdit* theWrappedObject, bool  ro)
{
theWrappedObject->setReadOnly(ro);
}

void PythonQtWrapper_QTextEdit::setTabChangesFocus(QTextEdit* theWrappedObject, bool  b)
{
theWrappedObject->setTabChangesFocus(b);
}

void PythonQtWrapper_QTextEdit::setTabStopWidth(QTextEdit* theWrappedObject, int  width)
{
theWrappedObject->setTabStopWidth(width);
}

void PythonQtWrapper_QTextEdit::setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor)
{
theWrappedObject->setTextCursor(cursor);
}

void PythonQtWrapper_QTextEdit::setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags)
{
theWrappedObject->setTextInteractionFlags(flags);
}

void PythonQtWrapper_QTextEdit::setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable)
{
theWrappedObject->setUndoRedoEnabled(enable);
}

void PythonQtWrapper_QTextEdit::setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy)
{
theWrappedObject->setWordWrapMode(policy);
}

bool  PythonQtWrapper_QTextEdit::tabChangesFocus(QTextEdit* theWrappedObject) const
{
return theWrappedObject->tabChangesFocus();
}

int  PythonQtWrapper_QTextEdit::tabStopWidth(QTextEdit* theWrappedObject) const
{
return theWrappedObject->tabStopWidth();
}

QColor  PythonQtWrapper_QTextEdit::textBackgroundColor(QTextEdit* theWrappedObject) const
{
return theWrappedObject->textBackgroundColor();
}

QColor  PythonQtWrapper_QTextEdit::textColor(QTextEdit* theWrappedObject) const
{
return theWrappedObject->textColor();
}

QTextCursor  PythonQtWrapper_QTextEdit::textCursor(QTextEdit* theWrappedObject) const
{
return theWrappedObject->textCursor();
}

Qt::TextInteractionFlags  PythonQtWrapper_QTextEdit::textInteractionFlags(QTextEdit* theWrappedObject) const
{
return theWrappedObject->textInteractionFlags();
}

QString  PythonQtWrapper_QTextEdit::toHtml(QTextEdit* theWrappedObject) const
{
return theWrappedObject->toHtml();
}

QString  PythonQtWrapper_QTextEdit::toPlainText(QTextEdit* theWrappedObject) const
{
return theWrappedObject->toPlainText();
}

QTextOption::WrapMode  PythonQtWrapper_QTextEdit::wordWrapMode(QTextEdit* theWrappedObject) const
{
return theWrappedObject->wordWrapMode();
}

