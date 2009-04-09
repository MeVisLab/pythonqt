#include "PythonQtWrapper_QPrintPreviewDialog.h"

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

QPrintPreviewDialog* PythonQtWrapper_QPrintPreviewDialog::new_QPrintPreviewDialog(QPrinter*  printer, QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new QPrintPreviewDialog(printer, parent, flags); }

QPrintPreviewDialog* PythonQtWrapper_QPrintPreviewDialog::new_QPrintPreviewDialog(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new QPrintPreviewDialog(parent, flags); }

