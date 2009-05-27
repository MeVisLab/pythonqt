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
   void load(QWebFrame* theWrappedObject, const QUrl&  url);
   QString  title(QWebFrame* theWrappedObject) const;
   QWebFrame*  parentFrame(QWebFrame* theWrappedObject) const;
   QString  toHtml(QWebFrame* theWrappedObject) const;
   int  scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   Qt::ScrollBarPolicy  scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   void load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   int  scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   void setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor);
   QString  frameName(QWebFrame* theWrappedObject) const;
   QRect  geometry(QWebFrame* theWrappedObject) const;
   void render(QWebFrame* theWrappedObject, QPainter*  painter);
   void setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy);
   void addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object);
   int  scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QWebPage*  page(QWebFrame* theWrappedObject) const;
   QString  renderTreeDump(QWebFrame* theWrappedObject) const;
   QIcon  icon(QWebFrame* theWrappedObject) const;
   qreal  textSizeMultiplier(QWebFrame* theWrappedObject) const;
   QList<QWebFrame* >  childFrames(QWebFrame* theWrappedObject) const;
   bool  event(QWebFrame* theWrappedObject, QEvent*  arg__1);
   void setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   QUrl  url(QWebFrame* theWrappedObject) const;
   void setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value);
   void setUrl(QWebFrame* theWrappedObject, const QUrl&  url);
   void render(QWebFrame* theWrappedObject, QPainter*  painter, const QRegion&  clip);
   QString  toPlainText(QWebFrame* theWrappedObject) const;
   QSize  contentsSize(QWebFrame* theWrappedObject) const;
   QWebHitTestResult  hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const;
   QPoint  pos(QWebFrame* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWEBFRAME_H
