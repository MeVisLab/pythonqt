#ifndef PYTHONQTWRAPPER_QLABEL_H
#define PYTHONQTWRAPPER_QLABEL_H

#include <qlabel.h>
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
#include <qlabel.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtShell_QLabel : public QLabel
{
public:
    PythonQtShell_QLabel(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QLabel(parent, f),_wrapper(NULL) {};
    PythonQtShell_QLabel(const QString&  text, QWidget*  parent = 0, Qt::WindowFlags  f = 0):QLabel(text, parent, f),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  ev);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  ev);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  ev);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLabel : public QLabel
{ public:
inline void contextMenuEvent(QContextMenuEvent*  ev) { QLabel::contextMenuEvent(ev); }
inline void mouseMoveEvent(QMouseEvent*  ev) { QLabel::mouseMoveEvent(ev); }
inline void focusInEvent(QFocusEvent*  ev) { QLabel::focusInEvent(ev); }
inline void keyPressEvent(QKeyEvent*  ev) { QLabel::keyPressEvent(ev); }
inline void focusOutEvent(QFocusEvent*  ev) { QLabel::focusOutEvent(ev); }
inline void changeEvent(QEvent*  arg__1) { QLabel::changeEvent(arg__1); }
inline bool  event(QEvent*  e) { return QLabel::event(e); }
inline void mouseReleaseEvent(QMouseEvent*  ev) { QLabel::mouseReleaseEvent(ev); }
inline void mousePressEvent(QMouseEvent*  ev) { QLabel::mousePressEvent(ev); }
inline bool  focusNextPrevChild(bool  next) { return QLabel::focusNextPrevChild(next); }
inline void paintEvent(QPaintEvent*  arg__1) { QLabel::paintEvent(arg__1); }
};

class PythonQtWrapper_QLabel : public QObject
{ Q_OBJECT
public:
public slots:
QLabel* new_QLabel(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
QLabel* new_QLabel(const QString&  text, QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QLabel(QLabel* obj) { delete obj; } 
   void contextMenuEvent(QLabel* theWrappedObject, QContextMenuEvent*  ev);
   const QPicture*  picture(QLabel* theWrappedObject) const;
   void setBuddy(QLabel* theWrappedObject, QWidget*  arg__1);
   bool  wordWrap(QLabel* theWrappedObject) const;
   Qt::TextFormat  textFormat(QLabel* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QLabel* theWrappedObject) const;
   void setTextFormat(QLabel* theWrappedObject, Qt::TextFormat  arg__1);
   void mouseMoveEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   QWidget*  buddy(QLabel* theWrappedObject) const;
   bool  hasScaledContents(QLabel* theWrappedObject) const;
   void setWordWrap(QLabel* theWrappedObject, bool  on);
   void focusInEvent(QLabel* theWrappedObject, QFocusEvent*  ev);
   void keyPressEvent(QLabel* theWrappedObject, QKeyEvent*  ev);
   void focusOutEvent(QLabel* theWrappedObject, QFocusEvent*  ev);
   int  indent(QLabel* theWrappedObject) const;
   void changeEvent(QLabel* theWrappedObject, QEvent*  arg__1);
   bool  event(QLabel* theWrappedObject, QEvent*  e);
   void mouseReleaseEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   QString  text(QLabel* theWrappedObject) const;
   void mousePressEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   void setScaledContents(QLabel* theWrappedObject, bool  arg__1);
   void setAlignment(QLabel* theWrappedObject, Qt::Alignment  arg__1);
   QSize  minimumSizeHint(QLabel* theWrappedObject) const;
   bool  focusNextPrevChild(QLabel* theWrappedObject, bool  next);
   void setTextInteractionFlags(QLabel* theWrappedObject, Qt::TextInteractionFlags  flags);
   QSize  sizeHint(QLabel* theWrappedObject) const;
   void setMargin(QLabel* theWrappedObject, int  arg__1);
   int  margin(QLabel* theWrappedObject) const;
   const QPixmap*  pixmap(QLabel* theWrappedObject) const;
   void paintEvent(QLabel* theWrappedObject, QPaintEvent*  arg__1);
   bool  openExternalLinks(QLabel* theWrappedObject) const;
   void setOpenExternalLinks(QLabel* theWrappedObject, bool  open);
   void setIndent(QLabel* theWrappedObject, int  arg__1);
   QMovie*  movie(QLabel* theWrappedObject) const;
   int  heightForWidth(QLabel* theWrappedObject, int  arg__1) const;
   Qt::Alignment  alignment(QLabel* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QLABEL_H
