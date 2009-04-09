#include "PythonQtWrapper_QAbstractButton.h"

#include <QVariant>
#include <qabstractbutton.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbuttongroup.h>
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
#include <qstyle.h>
#include <qwidget.h>

bool  PythonQtWrapper_QAbstractButton::autoExclusive(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->autoExclusive();
}

bool  PythonQtWrapper_QAbstractButton::autoRepeat(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->autoRepeat();
}

int  PythonQtWrapper_QAbstractButton::autoRepeatDelay(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->autoRepeatDelay();
}

int  PythonQtWrapper_QAbstractButton::autoRepeatInterval(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->autoRepeatInterval();
}

QButtonGroup*  PythonQtWrapper_QAbstractButton::group(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->group();
}

QIcon  PythonQtWrapper_QAbstractButton::icon(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->icon();
}

QSize  PythonQtWrapper_QAbstractButton::iconSize(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->iconSize();
}

bool  PythonQtWrapper_QAbstractButton::isCheckable(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->isCheckable();
}

bool  PythonQtWrapper_QAbstractButton::isChecked(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->isChecked();
}

bool  PythonQtWrapper_QAbstractButton::isDown(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->isDown();
}

void PythonQtWrapper_QAbstractButton::setAutoExclusive(QAbstractButton* theWrappedObject, bool  arg__1)
{
theWrappedObject->setAutoExclusive(arg__1);
}

void PythonQtWrapper_QAbstractButton::setAutoRepeat(QAbstractButton* theWrappedObject, bool  arg__1)
{
theWrappedObject->setAutoRepeat(arg__1);
}

void PythonQtWrapper_QAbstractButton::setAutoRepeatDelay(QAbstractButton* theWrappedObject, int  arg__1)
{
theWrappedObject->setAutoRepeatDelay(arg__1);
}

void PythonQtWrapper_QAbstractButton::setAutoRepeatInterval(QAbstractButton* theWrappedObject, int  arg__1)
{
theWrappedObject->setAutoRepeatInterval(arg__1);
}

void PythonQtWrapper_QAbstractButton::setCheckable(QAbstractButton* theWrappedObject, bool  arg__1)
{
theWrappedObject->setCheckable(arg__1);
}

void PythonQtWrapper_QAbstractButton::setDown(QAbstractButton* theWrappedObject, bool  arg__1)
{
theWrappedObject->setDown(arg__1);
}

void PythonQtWrapper_QAbstractButton::setIcon(QAbstractButton* theWrappedObject, const QIcon&  icon)
{
theWrappedObject->setIcon(icon);
}

void PythonQtWrapper_QAbstractButton::setShortcut(QAbstractButton* theWrappedObject, const QKeySequence&  key)
{
theWrappedObject->setShortcut(key);
}

void PythonQtWrapper_QAbstractButton::setText(QAbstractButton* theWrappedObject, const QString&  text)
{
theWrappedObject->setText(text);
}

QKeySequence  PythonQtWrapper_QAbstractButton::shortcut(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->shortcut();
}

QString  PythonQtWrapper_QAbstractButton::text(QAbstractButton* theWrappedObject) const
{
return theWrappedObject->text();
}

