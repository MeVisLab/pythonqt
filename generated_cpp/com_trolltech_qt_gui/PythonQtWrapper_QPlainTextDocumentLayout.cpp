#include "PythonQtWrapper_QPlainTextDocumentLayout.h"

#include <QAbstractTextDocumentLayout>
#include <QVariant>
#include <qpainter.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qtextdocument.h>
#include <qtextobject.h>

QPlainTextDocumentLayout* PythonQtWrapper_QPlainTextDocumentLayout::new_QPlainTextDocumentLayout(QTextDocument*  document)
{ 
return new QPlainTextDocumentLayout(document); }

QRectF  PythonQtWrapper_QPlainTextDocumentLayout::blockBoundingRect(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const
{
return theWrappedObject->blockBoundingRect(block);
}

int  PythonQtWrapper_QPlainTextDocumentLayout::cursorWidth(QPlainTextDocumentLayout* theWrappedObject) const
{
return theWrappedObject->cursorWidth();
}

QSizeF  PythonQtWrapper_QPlainTextDocumentLayout::documentSize(QPlainTextDocumentLayout* theWrappedObject) const
{
return theWrappedObject->documentSize();
}

void PythonQtWrapper_QPlainTextDocumentLayout::draw(QPlainTextDocumentLayout* theWrappedObject, QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2)
{
theWrappedObject->draw(arg__1, arg__2);
}

void PythonQtWrapper_QPlainTextDocumentLayout::ensureBlockLayout(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const
{
theWrappedObject->ensureBlockLayout(block);
}

QRectF  PythonQtWrapper_QPlainTextDocumentLayout::frameBoundingRect(QPlainTextDocumentLayout* theWrappedObject, QTextFrame*  arg__1) const
{
return theWrappedObject->frameBoundingRect(arg__1);
}

int  PythonQtWrapper_QPlainTextDocumentLayout::hitTest(QPlainTextDocumentLayout* theWrappedObject, const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const
{
return theWrappedObject->hitTest(arg__1, arg__2);
}

int  PythonQtWrapper_QPlainTextDocumentLayout::pageCount(QPlainTextDocumentLayout* theWrappedObject) const
{
return theWrappedObject->pageCount();
}

void PythonQtWrapper_QPlainTextDocumentLayout::requestUpdate(QPlainTextDocumentLayout* theWrappedObject)
{
theWrappedObject->requestUpdate();
}

void PythonQtWrapper_QPlainTextDocumentLayout::setCursorWidth(QPlainTextDocumentLayout* theWrappedObject, int  width)
{
theWrappedObject->setCursorWidth(width);
}

