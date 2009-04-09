#ifndef PYTHONQTWRAPPER_QMDISUBWINDOW_H
#define PYTHONQTWRAPPER_QMDISUBWINDOW_H

#include <qmdisubwindow.h>
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
#include <qmdiarea.h>
#include <qmdisubwindow.h>
#include <qmenu.h>
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
#include <qstyle.h>
#include <qwidget.h>

class PythonQtWrapper_QMdiSubWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SubWindowOption )
enum SubWindowOption{
  AllowOutsideAreaHorizontally = QMdiSubWindow::AllowOutsideAreaHorizontally,   AllowOutsideAreaVertically = QMdiSubWindow::AllowOutsideAreaVertically,   RubberBandResize = QMdiSubWindow::RubberBandResize,   RubberBandMove = QMdiSubWindow::RubberBandMove};
public slots:
QMdiSubWindow* new_QMdiSubWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QMdiSubWindow(QMdiSubWindow* obj) { delete obj; } 
   bool  isShaded(QMdiSubWindow* theWrappedObject) const;
   int  keyboardPageStep(QMdiSubWindow* theWrappedObject) const;
   int  keyboardSingleStep(QMdiSubWindow* theWrappedObject) const;
   QWidget*  maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const;
   QWidget*  maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const;
   QMdiArea*  mdiArea(QMdiSubWindow* theWrappedObject) const;
   QSize  minimumSizeHint(QMdiSubWindow* theWrappedObject) const;
   void setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step);
   void setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step);
   void setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on = true);
   void setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu);
   void setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget);
   QSize  sizeHint(QMdiSubWindow* theWrappedObject) const;
   QMenu*  systemMenu(QMdiSubWindow* theWrappedObject) const;
   bool  testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const;
   QWidget*  widget(QMdiSubWindow* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QMDISUBWINDOW_H
