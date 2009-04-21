#ifndef PYTHONQTWRAPPER_QSPLITTER_H
#define PYTHONQTWRAPPER_QSPLITTER_H

#include <qsplitter.h>
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
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qsplitter.h>
#include <qstyle.h>
#include <qtextstream.h>
#include <qwidget.h>

class PythonQtShell_QSplitter : public QSplitter
{
public:
    PythonQtShell_QSplitter(QWidget*  parent = 0):QSplitter(parent),_wrapper(NULL) {};
    PythonQtShell_QSplitter(Qt::Orientation  arg__1, QWidget*  parent = 0):QSplitter(arg__1, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QSplitterHandle*  createHandle();
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
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
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

class PythonQtPublicPromoter_QSplitter : public QSplitter
{ public:
inline bool  event(QEvent*  arg__1) { return QSplitter::event(arg__1); }
inline void changeEvent(QEvent*  arg__1) { QSplitter::changeEvent(arg__1); }
inline void resizeEvent(QResizeEvent*  arg__1) { QSplitter::resizeEvent(arg__1); }
inline void childEvent(QChildEvent*  arg__1) { QSplitter::childEvent(arg__1); }
inline QSplitterHandle*  createHandle() { return QSplitter::createHandle(); }
};

class PythonQtWrapper_QSplitter : public QObject
{ Q_OBJECT
public:
public slots:
QSplitter* new_QSplitter(QWidget*  parent = 0);
QSplitter* new_QSplitter(Qt::Orientation  arg__1, QWidget*  parent = 0);
void delete_QSplitter(QSplitter* obj) { delete obj; } 
   void setOpaqueResize(QSplitter* theWrappedObject, bool  opaque = true);
   bool  event(QSplitter* theWrappedObject, QEvent*  arg__1);
   void setHandleWidth(QSplitter* theWrappedObject, int  arg__1);
   QWidget*  widget(QSplitter* theWrappedObject, int  index) const;
   void setCollapsible(QSplitter* theWrappedObject, int  index, bool  arg__2);
   void setOrientation(QSplitter* theWrappedObject, Qt::Orientation  arg__1);
   void addWidget(QSplitter* theWrappedObject, QWidget*  widget);
   void readFrom(QSplitter* theWrappedObject, QTextStream&  arg__1);
   void changeEvent(QSplitter* theWrappedObject, QEvent*  arg__1);
   int  count(QSplitter* theWrappedObject) const;
   void resizeEvent(QSplitter* theWrappedObject, QResizeEvent*  arg__1);
   void refresh(QSplitter* theWrappedObject);
   void setSizes(QSplitter* theWrappedObject, const QList<int >&  list);
   QSize  sizeHint(QSplitter* theWrappedObject) const;
   QSplitterHandle*  handle(QSplitter* theWrappedObject, int  index) const;
   void setChildrenCollapsible(QSplitter* theWrappedObject, bool  arg__1);
   int  indexOf(QSplitter* theWrappedObject, QWidget*  w) const;
   Qt::Orientation  orientation(QSplitter* theWrappedObject) const;
   bool  childrenCollapsible(QSplitter* theWrappedObject) const;
   int  handleWidth(QSplitter* theWrappedObject) const;
   QSize  minimumSizeHint(QSplitter* theWrappedObject) const;
   void writeTo(QSplitter* theWrappedObject, QTextStream&  arg__1);
   QList<int >  sizes(QSplitter* theWrappedObject) const;
   QByteArray  saveState(QSplitter* theWrappedObject) const;
   void childEvent(QSplitter* theWrappedObject, QChildEvent*  arg__1);
   bool  opaqueResize(QSplitter* theWrappedObject) const;
   bool  restoreState(QSplitter* theWrappedObject, const QByteArray&  state);
   bool  isCollapsible(QSplitter* theWrappedObject, int  index) const;
   QSplitterHandle*  createHandle(QSplitter* theWrappedObject);
   void setStretchFactor(QSplitter* theWrappedObject, int  index, int  stretch);
   void getRange(QSplitter* theWrappedObject, int  index, int*  arg__2, int*  arg__3) const;
   void insertWidget(QSplitter* theWrappedObject, int  index, QWidget*  widget);
};

#endif // PYTHONQTWRAPPER_QSPLITTER_H
