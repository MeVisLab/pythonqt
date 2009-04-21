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

class PythonQtPublicPromoter_QWebFrame : public QWebFrame
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QWebFrame::event(arg__1); }
};

class PythonQtWrapper_QWebFrame : public QObject
{ Q_OBJECT
public:
public slots:
   void setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value);
   void render(QWebFrame* theWrappedObject, QPainter*  painter, const QRegion&  clip);
   QSize  contentsSize(QWebFrame* theWrappedObject) const;
   QPoint  pos(QWebFrame* theWrappedObject) const;
   void load(QWebFrame* theWrappedObject, const QUrl&  url);
   QWebFrame*  parentFrame(QWebFrame* theWrappedObject) const;
   int  scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   Qt::ScrollBarPolicy  scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   void load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   QList<QWebFrame* >  childFrames(QWebFrame* theWrappedObject) const;
   QString  frameName(QWebFrame* theWrappedObject) const;
   QRect  geometry(QWebFrame* theWrappedObject) const;
   QString  title(QWebFrame* theWrappedObject) const;
   void render(QWebFrame* theWrappedObject, QPainter*  painter);
   QWebHitTestResult  hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const;
   void setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor);
   void setUrl(QWebFrame* theWrappedObject, const QUrl&  url);
   void addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object);
   void setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   int  scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   int  scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QString  toPlainText(QWebFrame* theWrappedObject) const;
   QString  renderTreeDump(QWebFrame* theWrappedObject) const;
   void setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy);
   QIcon  icon(QWebFrame* theWrappedObject) const;
   QUrl  url(QWebFrame* theWrappedObject) const;
   void setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   qreal  textSizeMultiplier(QWebFrame* theWrappedObject) const;
   QString  toHtml(QWebFrame* theWrappedObject) const;
   QWebPage*  page(QWebFrame* theWrappedObject) const;
   bool  event(QWebFrame* theWrappedObject, QEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QWEBFRAME_H
