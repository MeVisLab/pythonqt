#include "PythonQtWrapper_QColorDialog.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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

QColor  PythonQtWrapper_QColorDialog::static_QColorDialog_getColor(const QColor&  init, QWidget*  parent)
{
return QColorDialog::getColor(init, parent);
}

void PythonQtWrapper_QColorDialog::static_QColorDialog_setStandardColor(int  arg__1, unsigned int  arg__2)
{
QColorDialog::setStandardColor(arg__1, arg__2);
}

void PythonQtWrapper_QColorDialog::changeEvent(QColorDialog* theWrappedObject, QEvent*  e)
{
 ((PythonQtPublicPromoter_QColorDialog*)theWrappedObject)->promoted_changeEvent(e);
}

unsigned int  PythonQtWrapper_QColorDialog::static_QColorDialog_customColor(int  arg__1)
{
return QColorDialog::customColor(arg__1);
}

int  PythonQtWrapper_QColorDialog::static_QColorDialog_customCount()
{
return QColorDialog::customCount();
}

void PythonQtWrapper_QColorDialog::static_QColorDialog_setCustomColor(int  arg__1, unsigned int  arg__2)
{
QColorDialog::setCustomColor(arg__1, arg__2);
}

