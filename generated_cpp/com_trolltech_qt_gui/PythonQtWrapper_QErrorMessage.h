#ifndef PYTHONQTWRAPPER_QERRORMESSAGE_H
#define PYTHONQTWRAPPER_QERRORMESSAGE_H

#include <qerrormessage.h>
#include <QObject>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qerrormessage.h>
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

class PythonQtWrapper_QErrorMessage : public QObject
{ Q_OBJECT
public:
public slots:
QErrorMessage* new_QErrorMessage(QWidget*  parent = 0);
void delete_QErrorMessage(QErrorMessage* obj) { delete obj; } 
   QErrorMessage*  static_QErrorMessage_qtHandler();
};

#endif // PYTHONQTWRAPPER_QERRORMESSAGE_H
