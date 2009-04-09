#include "PythonQtWrapper_QWebFrame.h"

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

void PythonQtWrapper_QWebFrame::addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object)
{
theWrappedObject->addToJavaScriptWindowObject(name, object);
}

QList<QWebFrame* >  PythonQtWrapper_QWebFrame::childFrames(QWebFrame* theWrappedObject) const
{
return theWrappedObject->childFrames();
}

QSize  PythonQtWrapper_QWebFrame::contentsSize(QWebFrame* theWrappedObject) const
{
return theWrappedObject->contentsSize();
}

bool  PythonQtWrapper_QWebFrame::event(QWebFrame* theWrappedObject, QEvent*  arg__1)
{
return theWrappedObject->event(arg__1);
}

QString  PythonQtWrapper_QWebFrame::frameName(QWebFrame* theWrappedObject) const
{
return theWrappedObject->frameName();
}

QRect  PythonQtWrapper_QWebFrame::geometry(QWebFrame* theWrappedObject) const
{
return theWrappedObject->geometry();
}

QWebHitTestResult  PythonQtWrapper_QWebFrame::hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const
{
return theWrappedObject->hitTestContent(pos);
}

QIcon  PythonQtWrapper_QWebFrame::icon(QWebFrame* theWrappedObject) const
{
return theWrappedObject->icon();
}

void PythonQtWrapper_QWebFrame::load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation, const QByteArray&  body)
{
theWrappedObject->load(request, operation, body);
}

void PythonQtWrapper_QWebFrame::load(QWebFrame* theWrappedObject, const QUrl&  url)
{
theWrappedObject->load(url);
}

QWebPage*  PythonQtWrapper_QWebFrame::page(QWebFrame* theWrappedObject) const
{
return theWrappedObject->page();
}

QWebFrame*  PythonQtWrapper_QWebFrame::parentFrame(QWebFrame* theWrappedObject) const
{
return theWrappedObject->parentFrame();
}

QPoint  PythonQtWrapper_QWebFrame::pos(QWebFrame* theWrappedObject) const
{
return theWrappedObject->pos();
}

void PythonQtWrapper_QWebFrame::render(QWebFrame* theWrappedObject, QPainter*  painter)
{
theWrappedObject->render(painter);
}

void PythonQtWrapper_QWebFrame::render(QWebFrame* theWrappedObject, QPainter*  painter, const QRegion&  clip)
{
theWrappedObject->render(painter, clip);
}

QString  PythonQtWrapper_QWebFrame::renderTreeDump(QWebFrame* theWrappedObject) const
{
return theWrappedObject->renderTreeDump();
}

int  PythonQtWrapper_QWebFrame::scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
return theWrappedObject->scrollBarMaximum(orientation);
}

int  PythonQtWrapper_QWebFrame::scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
return theWrappedObject->scrollBarMinimum(orientation);
}

Qt::ScrollBarPolicy  PythonQtWrapper_QWebFrame::scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
return theWrappedObject->scrollBarPolicy(orientation);
}

int  PythonQtWrapper_QWebFrame::scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
return theWrappedObject->scrollBarValue(orientation);
}

void PythonQtWrapper_QWebFrame::setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
theWrappedObject->setContent(data, mimeType, baseUrl);
}

void PythonQtWrapper_QWebFrame::setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
theWrappedObject->setHtml(html, baseUrl);
}

void PythonQtWrapper_QWebFrame::setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy)
{
theWrappedObject->setScrollBarPolicy(orientation, policy);
}

void PythonQtWrapper_QWebFrame::setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value)
{
theWrappedObject->setScrollBarValue(orientation, value);
}

void PythonQtWrapper_QWebFrame::setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor)
{
theWrappedObject->setTextSizeMultiplier(factor);
}

void PythonQtWrapper_QWebFrame::setUrl(QWebFrame* theWrappedObject, const QUrl&  url)
{
theWrappedObject->setUrl(url);
}

qreal  PythonQtWrapper_QWebFrame::textSizeMultiplier(QWebFrame* theWrappedObject) const
{
return theWrappedObject->textSizeMultiplier();
}

QString  PythonQtWrapper_QWebFrame::title(QWebFrame* theWrappedObject) const
{
return theWrappedObject->title();
}

QString  PythonQtWrapper_QWebFrame::toHtml(QWebFrame* theWrappedObject) const
{
return theWrappedObject->toHtml();
}

QString  PythonQtWrapper_QWebFrame::toPlainText(QWebFrame* theWrappedObject) const
{
return theWrappedObject->toPlainText();
}

QUrl  PythonQtWrapper_QWebFrame::url(QWebFrame* theWrappedObject) const
{
return theWrappedObject->url();
}

