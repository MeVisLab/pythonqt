#include "PythonQtWrapper_QFontDialog.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontdialog.h>
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

QFont  PythonQtWrapper_QFontDialog::static_QFontDialog_getFont(bool*  ok, QWidget*  parent)
{
return QFontDialog::getFont(ok, parent);
}

QFont  PythonQtWrapper_QFontDialog::static_QFontDialog_getFont(bool*  ok, const QFont&  def, QWidget*  parent)
{
return QFontDialog::getFont(ok, def, parent);
}

QFont  PythonQtWrapper_QFontDialog::static_QFontDialog_getFont(bool*  ok, const QFont&  def, QWidget*  parent, const QString&  caption)
{
return QFontDialog::getFont(ok, def, parent, caption);
}

