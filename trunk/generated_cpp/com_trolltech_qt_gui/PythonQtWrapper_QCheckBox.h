#ifndef PYTHONQTWRAPPER_QCHECKBOX_H
#define PYTHONQTWRAPPER_QCHECKBOX_H

#include <qcheckbox.h>
#include <QObject>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcheckbox.h>
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
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QCheckBox : public QObject
{ Q_OBJECT
public:
public slots:
QCheckBox* new_QCheckBox(QWidget*  parent = 0);
QCheckBox* new_QCheckBox(const QString&  text, QWidget*  parent = 0);
void delete_QCheckBox(QCheckBox* obj) { delete obj; } 
   Qt::CheckState  checkState(QCheckBox* theWrappedObject) const;
   bool  isTristate(QCheckBox* theWrappedObject) const;
   void setCheckState(QCheckBox* theWrappedObject, Qt::CheckState  state);
   void setTristate(QCheckBox* theWrappedObject, bool  y = true);
   QSize  sizeHint(QCheckBox* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QCHECKBOX_H
