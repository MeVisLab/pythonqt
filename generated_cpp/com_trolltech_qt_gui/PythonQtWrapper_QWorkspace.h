#ifndef PYTHONQTWRAPPER_QWORKSPACE_H
#define PYTHONQTWRAPPER_QWORKSPACE_H

#include <qworkspace.h>
#include <QObject>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
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
#include <qstyle.h>
#include <qwidget.h>
#include <qworkspace.h>

class PythonQtWrapper_QWorkspace : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WindowOrder )
enum WindowOrder{
  CreationOrder = QWorkspace::CreationOrder,   StackingOrder = QWorkspace::StackingOrder};
public slots:
QWorkspace* new_QWorkspace(QWidget*  parent = 0);
void delete_QWorkspace(QWorkspace* obj) { delete obj; } 
   QWidget*  activeWindow(QWorkspace* theWrappedObject) const;
   QWidget*  addWindow(QWorkspace* theWrappedObject, QWidget*  w, Qt::WindowFlags  flags = 0);
   QBrush  background(QWorkspace* theWrappedObject) const;
   bool  scrollBarsEnabled(QWorkspace* theWrappedObject) const;
   void setBackground(QWorkspace* theWrappedObject, const QBrush&  background);
   void setScrollBarsEnabled(QWorkspace* theWrappedObject, bool  enable);
   QSize  sizeHint(QWorkspace* theWrappedObject) const;
   QList<QWidget* >  windowList(QWorkspace* theWrappedObject, QWorkspace::WindowOrder  order = QWorkspace::CreationOrder) const;
};

#endif // PYTHONQTWRAPPER_QWORKSPACE_H
