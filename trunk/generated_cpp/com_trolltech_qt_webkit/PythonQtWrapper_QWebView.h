#ifndef PYTHONQTWRAPPER_QWEBVIEW_H
#define PYTHONQTWRAPPER_QWEBVIEW_H

#include <qwebview.h>
#include <QObject>

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

class PythonQtWrapper_QWebView : public QObject
{ Q_OBJECT
public:
public slots:
QWebView* new_QWebView(QWidget*  parent = 0);
void delete_QWebView(QWebView* obj) { delete obj; } 
   bool  event(QWebView* theWrappedObject, QEvent*  arg__1);
   bool  findText(QWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   QWebHistory*  history(QWebView* theWrappedObject) const;
   QIcon  icon(QWebView* theWrappedObject) const;
   QVariant  inputMethodQuery(QWebView* theWrappedObject, Qt::InputMethodQuery  property) const;
   bool  isModified(QWebView* theWrappedObject) const;
   void load(QWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   void load(QWebView* theWrappedObject, const QUrl&  url);
   QWebPage*  page(QWebView* theWrappedObject) const;
   QAction*  pageAction(QWebView* theWrappedObject, QWebPage::WebAction  action) const;
   QString  selectedText(QWebView* theWrappedObject) const;
   void setContent(QWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setHtml(QWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setPage(QWebView* theWrappedObject, QWebPage*  page);
   void setTextSizeMultiplier(QWebView* theWrappedObject, qreal  factor);
   void setUrl(QWebView* theWrappedObject, const QUrl&  url);
   QWebSettings*  settings(QWebView* theWrappedObject) const;
   QSize  sizeHint(QWebView* theWrappedObject) const;
   qreal  textSizeMultiplier(QWebView* theWrappedObject) const;
   QString  title(QWebView* theWrappedObject) const;
   void triggerPageAction(QWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   QUrl  url(QWebView* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWEBVIEW_H
