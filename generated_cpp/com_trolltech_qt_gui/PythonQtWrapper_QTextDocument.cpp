#include "PythonQtWrapper_QTextDocument.h"

#include <QTextBlock>
#include <QTextCursor>
#include <QTextFormat>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregexp.h>
#include <qsize.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qurl.h>
#include <qvector.h>

QTextDocument* PythonQtWrapper_QTextDocument::new_QTextDocument(QObject*  parent)
{ 
return new QTextDocument(parent); }

QTextDocument* PythonQtWrapper_QTextDocument::new_QTextDocument(const QString&  text, QObject*  parent)
{ 
return new QTextDocument(text, parent); }

void PythonQtWrapper_QTextDocument::addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource)
{
theWrappedObject->addResource(type, name, resource);
}

void PythonQtWrapper_QTextDocument::adjustSize(QTextDocument* theWrappedObject)
{
theWrappedObject->adjustSize();
}

QVector<QTextFormat >  PythonQtWrapper_QTextDocument::allFormats(QTextDocument* theWrappedObject) const
{
return theWrappedObject->allFormats();
}

QTextBlock  PythonQtWrapper_QTextDocument::begin(QTextDocument* theWrappedObject) const
{
return theWrappedObject->begin();
}

int  PythonQtWrapper_QTextDocument::blockCount(QTextDocument* theWrappedObject) const
{
return theWrappedObject->blockCount();
}

void PythonQtWrapper_QTextDocument::clear(QTextDocument* theWrappedObject)
{
theWrappedObject->clear();
}

QTextDocument*  PythonQtWrapper_QTextDocument::clone(QTextDocument* theWrappedObject, QObject*  parent) const
{
return theWrappedObject->clone(parent);
}

QFont  PythonQtWrapper_QTextDocument::defaultFont(QTextDocument* theWrappedObject) const
{
return theWrappedObject->defaultFont();
}

QString  PythonQtWrapper_QTextDocument::defaultStyleSheet(QTextDocument* theWrappedObject) const
{
return theWrappedObject->defaultStyleSheet();
}

QTextOption  PythonQtWrapper_QTextDocument::defaultTextOption(QTextDocument* theWrappedObject) const
{
return theWrappedObject->defaultTextOption();
}

QAbstractTextDocumentLayout*  PythonQtWrapper_QTextDocument::documentLayout(QTextDocument* theWrappedObject) const
{
return theWrappedObject->documentLayout();
}

void PythonQtWrapper_QTextDocument::drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
theWrappedObject->drawContents(painter, rect);
}

QTextBlock  PythonQtWrapper_QTextDocument::end(QTextDocument* theWrappedObject) const
{
return theWrappedObject->end();
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options) const
{
return theWrappedObject->find(expr, from, options);
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from, QTextDocument::FindFlags  options) const
{
return theWrappedObject->find(expr, from, options);
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options) const
{
return theWrappedObject->find(subString, from, options);
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QString&  subString, int  from, QTextDocument::FindFlags  options) const
{
return theWrappedObject->find(subString, from, options);
}

QTextBlock  PythonQtWrapper_QTextDocument::findBlock(QTextDocument* theWrappedObject, int  pos) const
{
return theWrappedObject->findBlock(pos);
}

QTextBlock  PythonQtWrapper_QTextDocument::findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const
{
return theWrappedObject->findBlockByNumber(blockNumber);
}

QTextBlock  PythonQtWrapper_QTextDocument::firstBlock(QTextDocument* theWrappedObject) const
{
return theWrappedObject->firstBlock();
}

QTextFrame*  PythonQtWrapper_QTextDocument::frameAt(QTextDocument* theWrappedObject, int  pos) const
{
return theWrappedObject->frameAt(pos);
}

qreal  PythonQtWrapper_QTextDocument::idealWidth(QTextDocument* theWrappedObject) const
{
return theWrappedObject->idealWidth();
}

qreal  PythonQtWrapper_QTextDocument::indentWidth(QTextDocument* theWrappedObject) const
{
return theWrappedObject->indentWidth();
}

bool  PythonQtWrapper_QTextDocument::isEmpty(QTextDocument* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

bool  PythonQtWrapper_QTextDocument::isModified(QTextDocument* theWrappedObject) const
{
return theWrappedObject->isModified();
}

bool  PythonQtWrapper_QTextDocument::isRedoAvailable(QTextDocument* theWrappedObject) const
{
return theWrappedObject->isRedoAvailable();
}

bool  PythonQtWrapper_QTextDocument::isUndoAvailable(QTextDocument* theWrappedObject) const
{
return theWrappedObject->isUndoAvailable();
}

bool  PythonQtWrapper_QTextDocument::isUndoRedoEnabled(QTextDocument* theWrappedObject) const
{
return theWrappedObject->isUndoRedoEnabled();
}

QTextBlock  PythonQtWrapper_QTextDocument::lastBlock(QTextDocument* theWrappedObject) const
{
return theWrappedObject->lastBlock();
}

void PythonQtWrapper_QTextDocument::markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length)
{
theWrappedObject->markContentsDirty(from, length);
}

int  PythonQtWrapper_QTextDocument::maximumBlockCount(QTextDocument* theWrappedObject) const
{
return theWrappedObject->maximumBlockCount();
}

QString  PythonQtWrapper_QTextDocument::metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const
{
return theWrappedObject->metaInformation(info);
}

QTextObject*  PythonQtWrapper_QTextDocument::object(QTextDocument* theWrappedObject, int  objectIndex) const
{
return theWrappedObject->object(objectIndex);
}

QTextObject*  PythonQtWrapper_QTextDocument::objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const
{
return theWrappedObject->objectForFormat(arg__1);
}

int  PythonQtWrapper_QTextDocument::pageCount(QTextDocument* theWrappedObject) const
{
return theWrappedObject->pageCount();
}

QSizeF  PythonQtWrapper_QTextDocument::pageSize(QTextDocument* theWrappedObject) const
{
return theWrappedObject->pageSize();
}

void PythonQtWrapper_QTextDocument::print(QTextDocument* theWrappedObject, QPrinter*  printer) const
{
theWrappedObject->print(printer);
}

void PythonQtWrapper_QTextDocument::redo(QTextDocument* theWrappedObject, QTextCursor*  cursor)
{
theWrappedObject->redo(cursor);
}

QVariant  PythonQtWrapper_QTextDocument::resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const
{
return theWrappedObject->resource(type, name);
}

int  PythonQtWrapper_QTextDocument::revision(QTextDocument* theWrappedObject) const
{
return theWrappedObject->revision();
}

QTextFrame*  PythonQtWrapper_QTextDocument::rootFrame(QTextDocument* theWrappedObject) const
{
return theWrappedObject->rootFrame();
}

void PythonQtWrapper_QTextDocument::setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font)
{
theWrappedObject->setDefaultFont(font);
}

void PythonQtWrapper_QTextDocument::setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet)
{
theWrappedObject->setDefaultStyleSheet(sheet);
}

void PythonQtWrapper_QTextDocument::setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option)
{
theWrappedObject->setDefaultTextOption(option);
}

void PythonQtWrapper_QTextDocument::setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout)
{
theWrappedObject->setDocumentLayout(layout);
}

void PythonQtWrapper_QTextDocument::setHtml(QTextDocument* theWrappedObject, const QString&  html)
{
theWrappedObject->setHtml(html);
}

void PythonQtWrapper_QTextDocument::setIndentWidth(QTextDocument* theWrappedObject, qreal  width)
{
theWrappedObject->setIndentWidth(width);
}

void PythonQtWrapper_QTextDocument::setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum)
{
theWrappedObject->setMaximumBlockCount(maximum);
}

void PythonQtWrapper_QTextDocument::setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2)
{
theWrappedObject->setMetaInformation(info, arg__2);
}

void PythonQtWrapper_QTextDocument::setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size)
{
theWrappedObject->setPageSize(size);
}

void PythonQtWrapper_QTextDocument::setPlainText(QTextDocument* theWrappedObject, const QString&  text)
{
theWrappedObject->setPlainText(text);
}

void PythonQtWrapper_QTextDocument::setTextWidth(QTextDocument* theWrappedObject, qreal  width)
{
theWrappedObject->setTextWidth(width);
}

void PythonQtWrapper_QTextDocument::setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable)
{
theWrappedObject->setUndoRedoEnabled(enable);
}

void PythonQtWrapper_QTextDocument::setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b)
{
theWrappedObject->setUseDesignMetrics(b);
}

QSizeF  PythonQtWrapper_QTextDocument::size(QTextDocument* theWrappedObject) const
{
return theWrappedObject->size();
}

qreal  PythonQtWrapper_QTextDocument::textWidth(QTextDocument* theWrappedObject) const
{
return theWrappedObject->textWidth();
}

QString  PythonQtWrapper_QTextDocument::toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding) const
{
return theWrappedObject->toHtml(encoding);
}

QString  PythonQtWrapper_QTextDocument::toPlainText(QTextDocument* theWrappedObject) const
{
return theWrappedObject->toPlainText();
}

void PythonQtWrapper_QTextDocument::undo(QTextDocument* theWrappedObject, QTextCursor*  cursor)
{
theWrappedObject->undo(cursor);
}

bool  PythonQtWrapper_QTextDocument::useDesignMetrics(QTextDocument* theWrappedObject) const
{
return theWrappedObject->useDesignMetrics();
}

