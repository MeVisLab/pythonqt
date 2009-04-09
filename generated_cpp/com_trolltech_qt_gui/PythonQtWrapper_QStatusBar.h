#ifndef PYTHONQTWRAPPER_QSTATUSBAR_H
#define PYTHONQTWRAPPER_QSTATUSBAR_H

#include <qstatusbar.h>
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
#include <qstatusbar.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtWrapper_QStatusBar : public QObject
{ Q_OBJECT
public:
public slots:
QStatusBar* new_QStatusBar(QWidget*  parent = 0);
void delete_QStatusBar(QStatusBar* obj) { delete obj; } 
   void addPermanentWidget(QStatusBar* theWrappedObject, QWidget*  widget, int  stretch = 0);
   void addWidget(QStatusBar* theWrappedObject, QWidget*  widget, int  stretch = 0);
   QString  currentMessage(QStatusBar* theWrappedObject) const;
   int  insertPermanentWidget(QStatusBar* theWrappedObject, int  index, QWidget*  widget, int  stretch = 0);
   int  insertWidget(QStatusBar* theWrappedObject, int  index, QWidget*  widget, int  stretch = 0);
   bool  isSizeGripEnabled(QStatusBar* theWrappedObject) const;
   void removeWidget(QStatusBar* theWrappedObject, QWidget*  widget);
   void setSizeGripEnabled(QStatusBar* theWrappedObject, bool  arg__1);
};

#endif // PYTHONQTWRAPPER_QSTATUSBAR_H
