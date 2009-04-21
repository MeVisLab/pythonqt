#ifndef PYTHONQTWRAPPER_QCOLORDIALOG_H
#define PYTHONQTWRAPPER_QCOLORDIALOG_H

#include <qcolordialog.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcolordialog.h>
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

class PythonQtPublicPromoter_QColorDialog : public QColorDialog
{ public:
inline void promoted_changeEvent(QEvent*  e) { QColorDialog::changeEvent(e); }
};

class PythonQtWrapper_QColorDialog : public QObject
{ Q_OBJECT
public:
public slots:
   QColor  static_QColorDialog_getColor(const QColor&  init = Qt::white, QWidget*  parent = 0);
   void static_QColorDialog_setStandardColor(int  arg__1, unsigned int  arg__2);
   void changeEvent(QColorDialog* theWrappedObject, QEvent*  e);
   unsigned int  static_QColorDialog_customColor(int  arg__1);
   int  static_QColorDialog_customCount();
   void static_QColorDialog_setCustomColor(int  arg__1, unsigned int  arg__2);
};

#endif // PYTHONQTWRAPPER_QCOLORDIALOG_H
