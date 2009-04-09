#include "PythonQtWrapper_QWebView.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
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
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qurl.h>
#include <qwebpage.h>
#include <qwebsettings.h>
#include <qwebview.h>
#include <qwidget.h>

QWebView* PythonQtWrapper_QWebView::new_QWebView(QWidget*  parent)
{ 
return new QWebView(parent); }

bool  PythonQtWrapper_QWebView::event(QWebView* theWrappedObject, QEvent*  arg__1)
{
return theWrappedObject->event(arg__1);
}

bool  PythonQtWrapper_QWebView::findText(QWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options)
{
return theWrappedObject->findText(subString, options);
}

QWebHistory*  PythonQtWrapper_QWebView::history(QWebView* theWrappedObject) const
{
return theWrappedObject->history();
}

QIcon  PythonQtWrapper_QWebView::icon(QWebView* theWrappedObject) const
{
return theWrappedObject->icon();
}

QVariant  PythonQtWrapper_QWebView::inputMethodQuery(QWebView* theWrappedObject, Qt::InputMethodQuery  property) const
{
return theWrappedObject->inputMethodQuery(property);
}

bool  PythonQtWrapper_QWebView::isModified(QWebView* theWrappedObject) const
{
return theWrappedObject->isModified();
}

void PythonQtWrapper_QWebView::load(QWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation, const QByteArray&  body)
{
theWrappedObject->load(request, operation, body);
}

void PythonQtWrapper_QWebView::load(QWebView* theWrappedObject, const QUrl&  url)
{
theWrappedObject->load(url);
}

QWebPage*  PythonQtWrapper_QWebView::page(QWebView* theWrappedObject) const
{
return theWrappedObject->page();
}

QAction*  PythonQtWrapper_QWebView::pageAction(QWebView* theWrappedObject, QWebPage::WebAction  action) const
{
return theWrappedObject->pageAction(action);
}

QString  PythonQtWrapper_QWebView::selectedText(QWebView* theWrappedObject) const
{
return theWrappedObject->selectedText();
}

void PythonQtWrapper_QWebView::setContent(QWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
theWrappedObject->setContent(data, mimeType, baseUrl);
}

void PythonQtWrapper_QWebView::setHtml(QWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
theWrappedObject->setHtml(html, baseUrl);
}

void PythonQtWrapper_QWebView::setPage(QWebView* theWrappedObject, QWebPage*  page)
{
theWrappedObject->setPage(page);
}

void PythonQtWrapper_QWebView::setTextSizeMultiplier(QWebView* theWrappedObject, qreal  factor)
{
theWrappedObject->setTextSizeMultiplier(factor);
}

void PythonQtWrapper_QWebView::setUrl(QWebView* theWrappedObject, const QUrl&  url)
{
theWrappedObject->setUrl(url);
}

QWebSettings*  PythonQtWrapper_QWebView::settings(QWebView* theWrappedObject) const
{
return theWrappedObject->settings();
}

QSize  PythonQtWrapper_QWebView::sizeHint(QWebView* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

qreal  PythonQtWrapper_QWebView::textSizeMultiplier(QWebView* theWrappedObject) const
{
return theWrappedObject->textSizeMultiplier();
}

QString  PythonQtWrapper_QWebView::title(QWebView* theWrappedObject) const
{
return theWrappedObject->title();
}

void PythonQtWrapper_QWebView::triggerPageAction(QWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked)
{
theWrappedObject->triggerPageAction(action, checked);
}

QUrl  PythonQtWrapper_QWebView::url(QWebView* theWrappedObject) const
{
return theWrappedObject->url();
}

