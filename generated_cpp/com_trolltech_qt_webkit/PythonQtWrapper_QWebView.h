#ifndef PYTHONQTWRAPPER_QWEBVIEW_H
#define PYTHONQTWRAPPER_QWEBVIEW_H

#include <qwebview.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QWebView : public QWebView
{
public:
    PythonQtShell_QWebView(QWidget*  parent = 0):QWebView(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QWebView*  createWindow(QWebPage::WebWindowType  type);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  ev);
virtual void resizeEvent(QResizeEvent*  e);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebView : public QWebView
{ public:
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWebView::dropEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  ev) { QWebView::paintEvent(ev); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWebView::focusInEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWebView::mouseReleaseEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWebView::focusNextPrevChild(next); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWebView::contextMenuEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWebView::mousePressEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QWebView::inputMethodQuery(property); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWebView::dragMoveEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWebView::wheelEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWebView::mouseMoveEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWebView::dragLeaveEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QWebView::event(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWebView::changeEvent(arg__1); }
inline QWebView*  promoted_createWindow(QWebPage::WebWindowType  type) { return QWebView::createWindow(type); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWebView::keyPressEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QWebView::resizeEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWebView::mouseDoubleClickEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWebView::dragEnterEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWebView::inputMethodEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWebView::keyReleaseEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWebView::focusOutEvent(arg__1); }
};

class PythonQtWrapper_QWebView : public QObject
{ Q_OBJECT
public:
public slots:
QWebView* new_QWebView(QWidget*  parent = 0);
void delete_QWebView(QWebView* obj) { delete obj; } 
   void dropEvent(QWebView* theWrappedObject, QDropEvent*  arg__1);
   QIcon  icon(QWebView* theWrappedObject) const;
   void setPage(QWebView* theWrappedObject, QWebPage*  page);
   void paintEvent(QWebView* theWrappedObject, QPaintEvent*  ev);
   void focusInEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1);
   QSize  sizeHint(QWebView* theWrappedObject) const;
   QAction*  pageAction(QWebView* theWrappedObject, QWebPage::WebAction  action) const;
   void mouseReleaseEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   void load(QWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   bool  focusNextPrevChild(QWebView* theWrappedObject, bool  next);
   void contextMenuEvent(QWebView* theWrappedObject, QContextMenuEvent*  arg__1);
   void mousePressEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   void setUrl(QWebView* theWrappedObject, const QUrl&  url);
   void setTextSizeMultiplier(QWebView* theWrappedObject, qreal  factor);
   QVariant  inputMethodQuery(QWebView* theWrappedObject, Qt::InputMethodQuery  property) const;
   QWebHistory*  history(QWebView* theWrappedObject) const;
   void dragMoveEvent(QWebView* theWrappedObject, QDragMoveEvent*  arg__1);
   void wheelEvent(QWebView* theWrappedObject, QWheelEvent*  arg__1);
   bool  isModified(QWebView* theWrappedObject) const;
   void mouseMoveEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   QWebSettings*  settings(QWebView* theWrappedObject) const;
   qreal  textSizeMultiplier(QWebView* theWrappedObject) const;
   void setContent(QWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void dragLeaveEvent(QWebView* theWrappedObject, QDragLeaveEvent*  arg__1);
   bool  event(QWebView* theWrappedObject, QEvent*  arg__1);
   void triggerPageAction(QWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   void changeEvent(QWebView* theWrappedObject, QEvent*  arg__1);
   void setHtml(QWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   QWebPage*  page(QWebView* theWrappedObject) const;
   void load(QWebView* theWrappedObject, const QUrl&  url);
   QWebView*  createWindow(QWebView* theWrappedObject, QWebPage::WebWindowType  type);
   void keyPressEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1);
   void resizeEvent(QWebView* theWrappedObject, QResizeEvent*  e);
   void mouseDoubleClickEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   void dragEnterEvent(QWebView* theWrappedObject, QDragEnterEvent*  arg__1);
   bool  findText(QWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   QString  selectedText(QWebView* theWrappedObject) const;
   void inputMethodEvent(QWebView* theWrappedObject, QInputMethodEvent*  arg__1);
   void keyReleaseEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1);
   QUrl  url(QWebView* theWrappedObject) const;
   void focusOutEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1);
   QString  title(QWebView* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWEBVIEW_H
