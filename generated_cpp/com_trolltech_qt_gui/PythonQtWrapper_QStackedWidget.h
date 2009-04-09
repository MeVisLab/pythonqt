#ifndef PYTHONQTWRAPPER_QSTACKEDWIDGET_H
#define PYTHONQTWRAPPER_QSTACKEDWIDGET_H

#include <qstackedwidget.h>
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
#include <qstackedwidget.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtWrapper_QStackedWidget : public QObject
{ Q_OBJECT
public:
public slots:
QStackedWidget* new_QStackedWidget(QWidget*  parent = 0);
void delete_QStackedWidget(QStackedWidget* obj) { delete obj; } 
   int  addWidget(QStackedWidget* theWrappedObject, QWidget*  w);
   int  count(QStackedWidget* theWrappedObject) const;
   int  currentIndex(QStackedWidget* theWrappedObject) const;
   QWidget*  currentWidget(QStackedWidget* theWrappedObject) const;
   int  indexOf(QStackedWidget* theWrappedObject, QWidget*  arg__1) const;
   int  insertWidget(QStackedWidget* theWrappedObject, int  index, QWidget*  w);
   void removeWidget(QStackedWidget* theWrappedObject, QWidget*  w);
   QWidget*  widget(QStackedWidget* theWrappedObject, int  arg__1) const;
};

#endif // PYTHONQTWRAPPER_QSTACKEDWIDGET_H
