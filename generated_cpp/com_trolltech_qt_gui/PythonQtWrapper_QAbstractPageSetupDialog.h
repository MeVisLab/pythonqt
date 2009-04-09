#ifndef PYTHONQTWRAPPER_QABSTRACTPAGESETUPDIALOG_H
#define PYTHONQTWRAPPER_QABSTRACTPAGESETUPDIALOG_H

#include <qabstractpagesetupdialog.h>
#include <QObject>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdialog.h>
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
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtWrapper_QAbstractPageSetupDialog : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractPageSetupDialog(QAbstractPageSetupDialog* obj) { delete obj; } 
   int  exec(QAbstractPageSetupDialog* theWrappedObject);
   QPrinter*  printer(QAbstractPageSetupDialog* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QABSTRACTPAGESETUPDIALOG_H
