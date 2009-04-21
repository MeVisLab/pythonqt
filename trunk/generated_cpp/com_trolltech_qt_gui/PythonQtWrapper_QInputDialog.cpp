#include "PythonQtWrapper_QInputDialog.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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
#include <qinputdialog.h>
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
#include <qstringlist.h>
#include <qstyle.h>
#include <qwidget.h>

int  PythonQtWrapper_QInputDialog::static_QInputDialog_getInteger(QWidget*  parent, const QString&  title, const QString&  label, int  value, int  minValue, int  maxValue, int  step, bool*  ok, Qt::WindowFlags  f)
{
return QInputDialog::getInteger(parent, title, label, value, minValue, maxValue, step, ok, f);
}

double  PythonQtWrapper_QInputDialog::static_QInputDialog_getDouble(QWidget*  parent, const QString&  title, const QString&  label, double  value, double  minValue, double  maxValue, int  decimals, bool*  ok, Qt::WindowFlags  f)
{
return QInputDialog::getDouble(parent, title, label, value, minValue, maxValue, decimals, ok, f);
}

QString  PythonQtWrapper_QInputDialog::static_QInputDialog_getText(QWidget*  parent, const QString&  title, const QString&  label, QLineEdit::EchoMode  echo, const QString&  text, bool*  ok, Qt::WindowFlags  f)
{
return QInputDialog::getText(parent, title, label, echo, text, ok, f);
}

QString  PythonQtWrapper_QInputDialog::static_QInputDialog_getItem(QWidget*  parent, const QString&  title, const QString&  label, const QStringList&  list, int  current, bool  editable, bool*  ok, Qt::WindowFlags  f)
{
return QInputDialog::getItem(parent, title, label, list, current, editable, ok, f);
}

