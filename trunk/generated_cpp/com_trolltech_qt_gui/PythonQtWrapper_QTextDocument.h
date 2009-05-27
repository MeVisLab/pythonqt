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
inline QTextObject*  promoted_createObject(const QTextFormat&  f) { return QTextDocument::createObject(f); }
inline void promoted_clear() { QTextDocument::clear(); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextDocument::loadResource(type, name); }
};

class PythonQtWrapper_QTextDocument : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ResourceType FindFlag MetaInformation )
Q_FLAGS(FindFlags )
enum ResourceType{
  HtmlResource = QTextDocument::HtmlResource,   ImageResource = QTextDocument::ImageResource,   StyleSheetResource = QTextDocument::StyleSheetResource,   UserResource = QTextDocument::UserResource};
enum FindFlag{
  FindBackward = QTextDocument::FindBackward,   FindCaseSensitively = QTextDocument::FindCaseSensitively,   FindWholeWords = QTextDocument::FindWholeWords};
enum MetaInformation{
  DocumentTitle = QTextDocument::DocumentTitle,   DocumentUrl = QTextDocument::DocumentUrl};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QTextDocument* new_QTextDocument(QObject*  parent = 0);
QTextDocument* new_QTextDocument(const QString&  text, QObject*  parent = 0);
void delete_QTextDocument(QTextDocument* obj) { delete obj; } 
   QTextFrame*  frameAt(QTextDocument* theWrappedObject, int  pos) const;
   QSizeF  pageSize(QTextDocument* theWrappedObject) const;
   void adjustSize(QTextDocument* theWrappedObject);
   QTextBlock  begin(QTextDocument* theWrappedObject) const;
   qreal  idealWidth(QTextDocument* theWrappedObject) const;
   qreal  indentWidth(QTextDocument* theWrappedObject) const;
   void setPlainText(QTextDocument* theWrappedObject, const QString&  text);
   void setHtml(QTextDocument* theWrappedObject, const QString&  html);
   void setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum);
   QString  metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const;
   QTextBlock  lastBlock(QTextDocument* theWrappedObject) const;
   QTextBlock  findBlock(QTextDocument* theWrappedObject, int  pos) const;
   QTextBlock  end(QTextDocument* theWrappedObject) const;
   bool  isEmpty(QTextDocument* theWrappedObject) const;
   QTextObject*  objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const;
   qreal  textWidth(QTextDocument* theWrappedObject) const;
   QTextObject*  createObject(QTextDocument* theWrappedObject, const QTextFormat&  f);
   QVector<QTextFormat >  allFormats(QTextDocument* theWrappedObject) const;
   void undo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   QString  toPlainText(QTextDocument* theWrappedObject) const;
   QString  defaultStyleSheet(QTextDocument* theWrappedObject) const;
   QAbstractTextDocumentLayout*  documentLayout(QTextDocument* theWrappedObject) const;
   void drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect = QRectF());
   QTextObject*  object(QTextDocument* theWrappedObject, int  objectIndex) const;
   void clear(QTextDocument* theWrappedObject);
   void markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length);
   int  pageCount(QTextDocument* theWrappedObject) const;
   void setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font);
   void setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet);
   QVariant  resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const;
   void setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable);
   QTextOption  defaultTextOption(QTextDocument* theWrappedObject) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   bool  isUndoAvailable(QTextDocument* theWrappedObject) const;
   bool  isModified(QTextDocument* theWrappedObject) const;
   void setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout);
   void setTextWidth(QTextDocument* theWrappedObject, qreal  width);
   void addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource);
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   void setIndentWidth(QTextDocument* theWrappedObject, qreal  width);
   void setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b);
   void setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option);
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextDocument*  clone(QTextDocument* theWrappedObject, QObject*  parent = 0) const;
   void setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size);
   int  blockCount(QTextDocument* theWrappedObject) const;
   int  revision(QTextDocument* theWrappedObject) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QTextBlock  firstBlock(QTextDocument* theWrappedObject) const;
   QTextBlock  findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   void print(QTextDocument* theWrappedObject, QPrinter*  printer) const;
   void redo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   QTextFrame*  rootFrame(QTextDocument* theWrappedObject) const;
   QSizeF  size(QTextDocument* theWrappedObject) const;
   bool  isRedoAvailable(QTextDocument* theWrappedObject) const;
   QFont  defaultFont(QTextDocument* theWrappedObject) const;
   QString  toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding = QByteArray()) const;
   bool  useDesignMetrics(QTextDocument* theWrappedObject) const;
   int  maximumBlockCount(QTextDocument* theWrappedObject) const;
   void setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2);
   QVariant  loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name);
   bool  isUndoRedoEnabled(QTextDocument* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTDOCUMENT_H
