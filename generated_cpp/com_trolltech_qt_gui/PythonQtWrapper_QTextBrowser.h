#ifndef PYTHONQTWRAPPER_QTEXTBROWSER_H
#define PYTHONQTWRAPPER_QTEXTBROWSER_H

#include <qtextbrowser.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextEdit>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qtextbrowser.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qurl.h>
#include <qwidget.h>

class PythonQtShell_QTextBrowser : public QTextBrowser
{
public:
    PythonQtShell_QTextBrowser(QWidget*  parent = 0):QTextBrowser(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void backward();
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  ev);
virtual void forward();
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void home();
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void reload();
virtual void resizeEvent(QResizeEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setSource(const QUrl&  name);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextBrowser : public QTextBrowser
{ public:
inline void mousePressEvent(QMouseEvent*  ev) { QTextBrowser::mousePressEvent(ev); }
inline void paintEvent(QPaintEvent*  e) { QTextBrowser::paintEvent(e); }
inline bool  focusNextPrevChild(bool  next) { return QTextBrowser::focusNextPrevChild(next); }
inline void mouseReleaseEvent(QMouseEvent*  ev) { QTextBrowser::mouseReleaseEvent(ev); }
inline void focusOutEvent(QFocusEvent*  ev) { QTextBrowser::focusOutEvent(ev); }
inline bool  event(QEvent*  e) { return QTextBrowser::event(e); }
inline void keyPressEvent(QKeyEvent*  ev) { QTextBrowser::keyPressEvent(ev); }
inline void mouseMoveEvent(QMouseEvent*  ev) { QTextBrowser::mouseMoveEvent(ev); }
};

class PythonQtWrapper_QTextBrowser : public QObject
{ Q_OBJECT
public:
public slots:
QTextBrowser* new_QTextBrowser(QWidget*  parent = 0);
void delete_QTextBrowser(QTextBrowser* obj) { delete obj; } 
   bool  openLinks(QTextBrowser* theWrappedObject) const;
   QString  historyTitle(QTextBrowser* theWrappedObject, int  arg__1) const;
   void mousePressEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   void paintEvent(QTextBrowser* theWrappedObject, QPaintEvent*  e);
   bool  openExternalLinks(QTextBrowser* theWrappedObject) const;
   bool  isForwardAvailable(QTextBrowser* theWrappedObject) const;
   bool  focusNextPrevChild(QTextBrowser* theWrappedObject, bool  next);
   void setOpenExternalLinks(QTextBrowser* theWrappedObject, bool  open);
   void setOpenLinks(QTextBrowser* theWrappedObject, bool  open);
   QUrl  source(QTextBrowser* theWrappedObject) const;
   void mouseReleaseEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   int  backwardHistoryCount(QTextBrowser* theWrappedObject) const;
   void focusOutEvent(QTextBrowser* theWrappedObject, QFocusEvent*  ev);
   void setSearchPaths(QTextBrowser* theWrappedObject, const QStringList&  paths);
   int  forwardHistoryCount(QTextBrowser* theWrappedObject) const;
   void clearHistory(QTextBrowser* theWrappedObject);
   bool  event(QTextBrowser* theWrappedObject, QEvent*  e);
   void keyPressEvent(QTextBrowser* theWrappedObject, QKeyEvent*  ev);
   void mouseMoveEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   bool  isBackwardAvailable(QTextBrowser* theWrappedObject) const;
   QVariant  loadResource(QTextBrowser* theWrappedObject, int  type, const QUrl&  name);
   QStringList  searchPaths(QTextBrowser* theWrappedObject) const;
   QUrl  historyUrl(QTextBrowser* theWrappedObject, int  arg__1) const;
};

#endif // PYTHONQTWRAPPER_QTEXTBROWSER_H
