#ifndef PYTHONQTWRAPPER_QWEBFRAME_H
#define PYTHONQTWRAPPER_QWEBFRAME_H

#include <qwebframe.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qurl.h>
#include <qwebframe.h>
#include <qwebpage.h>

class PythonQtWrapper_QWebFrame : public QObject
{ Q_OBJECT
public:
public slots:
   QString  frameName(QWebFrame* theWrappedObject) const;
   QWebHitTestResult  hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const;
   QPoint  pos(QWebFrame* theWrappedObject) const;
   void render(QWebFrame* theWrappedObject, QPainter*  painter);
   QRect  geometry(QWebFrame* theWrappedObject) const;
   void addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object);
   void setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   int  scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QUrl  url(QWebFrame* theWrappedObject) const;
   QString  renderTreeDump(QWebFrame* theWrappedObject) const;
   void setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy);
   QList<QWebFrame* >  childFrames(QWebFrame* theWrappedObject) const;
   QIcon  icon(QWebFrame* theWrappedObject) const;
   void setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   qreal  textSizeMultiplier(QWebFrame* theWrappedObject) const;
   QWebPage*  page(QWebFrame* theWrappedObject) const;
   QString  title(QWebFrame* theWrappedObject) const;
   bool  event(QWebFrame* theWrappedObject, QEvent*  arg__1);
   void render(QWebFrame* theWrappedObject, QPainter*  painter, const QRegion&  clip);
   void setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value);
   void setUrl(QWebFrame* theWrappedObject, const QUrl&  url);
   QSize  contentsSize(QWebFrame* theWrappedObject) const;
   QString  toHtml(QWebFrame* theWrappedObject) const;
   void load(QWebFrame* theWrappedObject, const QUrl&  url);
   QWebFrame*  parentFrame(QWebFrame* theWrappedObject) const;
   int  scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   void setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor);
   int  scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   Qt::ScrollBarPolicy  scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QString  toPlainText(QWebFrame* theWrappedObject) const;
   void load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
};

#endif // PYTHONQTWRAPPER_QWEBFRAME_H
