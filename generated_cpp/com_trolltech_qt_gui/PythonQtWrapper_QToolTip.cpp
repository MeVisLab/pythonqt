#include "PythonQtWrapper_QToolTip.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qfont.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qwidget.h>

void PythonQtWrapper_QToolTip::static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect)
{
QToolTip::showText(pos, text, w, rect);
}

QString  PythonQtWrapper_QToolTip::static_QToolTip_text()
{
return QToolTip::text();
}

void PythonQtWrapper_QToolTip::static_QToolTip_hideText()
{
QToolTip::hideText();
}

bool  PythonQtWrapper_QToolTip::static_QToolTip_isVisible()
{
return QToolTip::isVisible();
}

QPalette  PythonQtWrapper_QToolTip::static_QToolTip_palette()
{
return QToolTip::palette();
}

void PythonQtWrapper_QToolTip::static_QToolTip_setPalette(const QPalette&  arg__1)
{
QToolTip::setPalette(arg__1);
}

QFont  PythonQtWrapper_QToolTip::static_QToolTip_font()
{
return QToolTip::font();
}

void PythonQtWrapper_QToolTip::static_QToolTip_setFont(const QFont&  arg__1)
{
QToolTip::setFont(arg__1);
}

void PythonQtWrapper_QToolTip::static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w)
{
QToolTip::showText(pos, text, w);
}

