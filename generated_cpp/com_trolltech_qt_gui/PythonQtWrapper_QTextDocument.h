#ifndef PYTHONQTWRAPPER_QTEXTDOCUMENT_H
#define PYTHONQTWRAPPER_QTEXTDOCUMENT_H

#include <qtextdocument.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QTextDocument : public QTextDocument
{
public:
    PythonQtShell_QTextDocument(QObject*  parent = 0):QTextDocument(parent),_wrapper(NULL) {};
    PythonQtShell_QTextDocument(const QString&  text, QObject*  parent = 0):QTextDocument(text, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual QTextObject*  createObject(const QTextFormat&  f);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextDocument : public QTextDocument
{ public:
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextDocument::loadResource(type, name); }
inline void promoted_clear() { QTextDocument::clear(); }
inline QTextObject*  promoted_createObject(const QTextFormat&  f) { return QTextDocument::createObject(f); }
};

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
   QAbstractTextDocumentLayout*  documentLayout(QTextDocument* theWrappedObject) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextBlock  findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   void drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect = QRectF());
   QString  defaultStyleSheet(QTextDocument* theWrappedObject) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QSizeF  size(QTextDocument* theWrappedObject) const;
   QVariant  resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const;
   QVariant  loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name);
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   bool  isEmpty(QTextDocument* theWrappedObject) const;
   void setTextWidth(QTextDocument* theWrappedObject, qreal  width);
   bool  isUndoAvailable(QTextDocument* theWrappedObject) const;
   QTextOption  defaultTextOption(QTextDocument* theWrappedObject) const;
   void setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout);
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   void setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum);
   QTextFrame*  rootFrame(QTextDocument* theWrappedObject) const;
   void setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size);
   void setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b);
   void clear(QTextDocument* theWrappedObject);
   QString  toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding = QByteArray()) const;
   int  maximumBlockCount(QTextDocument* theWrappedObject) const;
   qreal  indentWidth(QTextDocument* theWrappedObject) const;
   bool  useDesignMetrics(QTextDocument* theWrappedObject) const;
   QString  metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const;
   QVector<QTextFormat >  allFormats(QTextDocument* theWrappedObject) const;
   void undo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   QTextBlock  lastBlock(QTextDocument* theWrappedObject) const;
   void setHtml(QTextDocument* theWrappedObject, const QString&  html);
   bool  isRedoAvailable(QTextDocument* theWrappedObject) const;
   void redo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   void setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option);
   QSizeF  pageSize(QTextDocument* theWrappedObject) const;
   void setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet);
   QTextBlock  findBlock(QTextDocument* theWrappedObject, int  pos) const;
   QTextObject*  createObject(QTextDocument* theWrappedObject, const QTextFormat&  f);
   int  blockCount(QTextDocument* theWrappedObject) const;
   QFont  defaultFont(QTextDocument* theWrappedObject) const;
   QString  toPlainText(QTextDocument* theWrappedObject) const;
   void markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length);
   void setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable);
   QTextBlock  end(QTextDocument* theWrappedObject) const;
   QTextBlock  firstBlock(QTextDocument* theWrappedObject) const;
   QTextBlock  begin(QTextDocument* theWrappedObject) const;
   void adjustSize(QTextDocument* theWrappedObject);
   bool  isUndoRedoEnabled(QTextDocument* theWrappedObject) const;
   void setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font);
   qreal  textWidth(QTextDocument* theWrappedObject) const;
   void addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource);
   void setPlainText(QTextDocument* theWrappedObject, const QString&  text);
   QTextFrame*  frameAt(QTextDocument* theWrappedObject, int  pos) const;
   void setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2);
   QTextObject*  objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const;
   qreal  idealWidth(QTextDocument* theWrappedObject) const;
   QTextDocument*  clone(QTextDocument* theWrappedObject, QObject*  parent = 0) const;
   int  pageCount(QTextDocument* theWrappedObject) const;
   void print(QTextDocument* theWrappedObject, QPrinter*  printer) const;
   void setIndentWidth(QTextDocument* theWrappedObject, qreal  width);
   bool  isModified(QTextDocument* theWrappedObject) const;
   QTextObject*  object(QTextDocument* theWrappedObject, int  objectIndex) const;
   int  revision(QTextDocument* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTDOCUMENT_H
