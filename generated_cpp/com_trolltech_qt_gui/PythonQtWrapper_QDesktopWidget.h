#ifndef PYTHONQTWRAPPER_QDESKTOPWIDGET_H
#define PYTHONQTWRAPPER_QDESKTOPWIDGET_H

#include <qdesktopwidget.h>
#include <QObject>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdesktopwidget.h>
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
#include <qstyle.h>
#include <qwidget.h>

class PythonQtWrapper_QDesktopWidget : public QObject
{ Q_OBJECT
public:
public slots:
QDesktopWidget* new_QDesktopWidget();
void delete_QDesktopWidget(QDesktopWidget* obj) { delete obj; } 
   const QRect  availableGeometry(QDesktopWidget* theWrappedObject, const QPoint&  point) const;
   const QRect  availableGeometry(QDesktopWidget* theWrappedObject, const QWidget*  widget) const;
   const QRect  availableGeometry(QDesktopWidget* theWrappedObject, int  screen = -1) const;
   bool  isVirtualDesktop(QDesktopWidget* theWrappedObject) const;
   int  numScreens(QDesktopWidget* theWrappedObject) const;
   int  primaryScreen(QDesktopWidget* theWrappedObject) const;
   QWidget*  screen(QDesktopWidget* theWrappedObject, int  screen = -1);
   const QRect  screenGeometry(QDesktopWidget* theWrappedObject, const QPoint&  point) const;
   const QRect  screenGeometry(QDesktopWidget* theWrappedObject, const QWidget*  widget) const;
   const QRect  screenGeometry(QDesktopWidget* theWrappedObject, int  screen = -1) const;
   int  screenNumber(QDesktopWidget* theWrappedObject, const QPoint&  arg__1) const;
   int  screenNumber(QDesktopWidget* theWrappedObject, const QWidget*  widget = 0) const;
};

#endif // PYTHONQTWRAPPER_QDESKTOPWIDGET_H
