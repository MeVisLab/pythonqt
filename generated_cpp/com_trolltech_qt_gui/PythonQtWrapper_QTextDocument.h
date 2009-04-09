#ifndef PYTHONQTWRAPPER_QTEXTDOCUMENT_H
#define PYTHONQTWRAPPER_QTEXTDOCUMENT_H

#include <qtextdocument.h>
#include <QObject>

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

class PythonQtWrapper_QTextDocument : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ResourceType FindFlag MetaInformation )
enum ResourceType{
  HtmlResource = QTextDocument::HtmlResource,   ImageResource = QTextDocument::ImageResource,   StyleSheetResource = QTextDocument::StyleSheetResource,   UserResource = QTextDocument::UserResource};
enum FindFlag{
  FindBackward = QTextDocument::FindBackward,   FindCaseSensitively = QTextDocument::FindCaseSensitively,   FindWholeWords = QTextDocument::FindWholeWords};
enum MetaInformation{
  DocumentTitle = QTextDocument::DocumentTitle,   DocumentUrl = QTextDocument::DocumentUrl};
public slots:
QTextDocument* new_QTextDocument(QObject*  parent = 0);
QTextDocument* new_QTextDocument(const QString&  text, QObject*  parent = 0);
void delete_QTextDocument(QTextDocument* obj) { delete obj; } 
   void addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource);
   void adjustSize(QTextDocument* theWrappedObject);
   QVector<QTextFormat >  allFormats(QTextDocument* theWrappedObject) const;
   QTextBlock  begin(QTextDocument* theWrappedObject) const;
   int  blockCount(QTextDocument* theWrappedObject) const;
   void clear(QTextDocument* theWrappedObject);
   QTextDocument*  clone(QTextDocument* theWrappedObject, QObject*  parent = 0) const;
   QFont  defaultFont(QTextDocument* theWrappedObject) const;
   QString  defaultStyleSheet(QTextDocument* theWrappedObject) const;
   QTextOption  defaultTextOption(QTextDocument* theWrappedObject) const;
   QAbstractTextDocumentLayout*  documentLayout(QTextDocument* theWrappedObject) const;
   void drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect = QRectF());
   QTextBlock  end(QTextDocument* theWrappedObject) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextBlock  findBlock(QTextDocument* theWrappedObject, int  pos) const;
   QTextBlock  findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   QTextBlock  firstBlock(QTextDocument* theWrappedObject) const;
   QTextFrame*  frameAt(QTextDocument* theWrappedObject, int  pos) const;
   qreal  idealWidth(QTextDocument* theWrappedObject) const;
   qreal  indentWidth(QTextDocument* theWrappedObject) const;
   bool  isEmpty(QTextDocument* theWrappedObject) const;
   bool  isModified(QTextDocument* theWrappedObject) const;
   bool  isRedoAvailable(QTextDocument* theWrappedObject) const;
   bool  isUndoAvailable(QTextDocument* theWrappedObject) const;
   bool  isUndoRedoEnabled(QTextDocument* theWrappedObject) const;
   QTextBlock  lastBlock(QTextDocument* theWrappedObject) const;
   void markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length);
   int  maximumBlockCount(QTextDocument* theWrappedObject) const;
   QString  metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const;
   QTextObject*  object(QTextDocument* theWrappedObject, int  objectIndex) const;
   QTextObject*  objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const;
   int  pageCount(QTextDocument* theWrappedObject) const;
   QSizeF  pageSize(QTextDocument* theWrappedObject) const;
   void print(QTextDocument* theWrappedObject, QPrinter*  printer) const;
   void redo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   QVariant  resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const;
   int  revision(QTextDocument* theWrappedObject) const;
   QTextFrame*  rootFrame(QTextDocument* theWrappedObject) const;
   void setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font);
   void setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet);
   void setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option);
   void setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout);
   void setHtml(QTextDocument* theWrappedObject, const QString&  html);
   void setIndentWidth(QTextDocument* theWrappedObject, qreal  width);
   void setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum);
   void setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2);
   void setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size);
   void setPlainText(QTextDocument* theWrappedObject, const QString&  text);
   void setTextWidth(QTextDocument* theWrappedObject, qreal  width);
   void setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable);
   void setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b);
   QSizeF  size(QTextDocument* theWrappedObject) const;
   qreal  textWidth(QTextDocument* theWrappedObject) const;
   QString  toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding = QByteArray()) const;
   QString  toPlainText(QTextDocument* theWrappedObject) const;
   void undo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   bool  useDesignMetrics(QTextDocument* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTDOCUMENT_H
