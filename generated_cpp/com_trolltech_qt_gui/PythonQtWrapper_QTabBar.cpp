#include "PythonQtWrapper_QTabBar.h"

#include <QIcon>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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
#include <qtabbar.h>
#include <qwidget.h>

QTabBar* PythonQtWrapper_QTabBar::new_QTabBar(QWidget*  parent)
{ 
return new QTabBar(parent); }

int  PythonQtWrapper_QTabBar::addTab(QTabBar* theWrappedObject, const QIcon&  icon, const QString&  text)
{
return theWrappedObject->addTab(icon, text);
}

int  PythonQtWrapper_QTabBar::addTab(QTabBar* theWrappedObject, const QString&  text)
{
return theWrappedObject->addTab(text);
}

int  PythonQtWrapper_QTabBar::count(QTabBar* theWrappedObject) const
{
return theWrappedObject->count();
}

int  PythonQtWrapper_QTabBar::currentIndex(QTabBar* theWrappedObject) const
{
return theWrappedObject->currentIndex();
}

bool  PythonQtWrapper_QTabBar::drawBase(QTabBar* theWrappedObject) const
{
return theWrappedObject->drawBase();
}

Qt::TextElideMode  PythonQtWrapper_QTabBar::elideMode(QTabBar* theWrappedObject) const
{
return theWrappedObject->elideMode();
}

QSize  PythonQtWrapper_QTabBar::iconSize(QTabBar* theWrappedObject) const
{
return theWrappedObject->iconSize();
}

int  PythonQtWrapper_QTabBar::insertTab(QTabBar* theWrappedObject, int  index, const QIcon&  icon, const QString&  text)
{
return theWrappedObject->insertTab(index, icon, text);
}

int  PythonQtWrapper_QTabBar::insertTab(QTabBar* theWrappedObject, int  index, const QString&  text)
{
return theWrappedObject->insertTab(index, text);
}

bool  PythonQtWrapper_QTabBar::isTabEnabled(QTabBar* theWrappedObject, int  index) const
{
return theWrappedObject->isTabEnabled(index);
}

QSize  PythonQtWrapper_QTabBar::minimumSizeHint(QTabBar* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QTabBar::removeTab(QTabBar* theWrappedObject, int  index)
{
theWrappedObject->removeTab(index);
}

void PythonQtWrapper_QTabBar::setDrawBase(QTabBar* theWrappedObject, bool  drawTheBase)
{
theWrappedObject->setDrawBase(drawTheBase);
}

void PythonQtWrapper_QTabBar::setElideMode(QTabBar* theWrappedObject, Qt::TextElideMode  arg__1)
{
theWrappedObject->setElideMode(arg__1);
}

void PythonQtWrapper_QTabBar::setIconSize(QTabBar* theWrappedObject, const QSize&  size)
{
theWrappedObject->setIconSize(size);
}

void PythonQtWrapper_QTabBar::setShape(QTabBar* theWrappedObject, QTabBar::Shape  shape)
{
theWrappedObject->setShape(shape);
}

void PythonQtWrapper_QTabBar::setTabData(QTabBar* theWrappedObject, int  index, const QVariant&  data)
{
theWrappedObject->setTabData(index, data);
}

void PythonQtWrapper_QTabBar::setTabEnabled(QTabBar* theWrappedObject, int  index, bool  arg__2)
{
theWrappedObject->setTabEnabled(index, arg__2);
}

void PythonQtWrapper_QTabBar::setTabIcon(QTabBar* theWrappedObject, int  index, const QIcon&  icon)
{
theWrappedObject->setTabIcon(index, icon);
}

void PythonQtWrapper_QTabBar::setTabText(QTabBar* theWrappedObject, int  index, const QString&  text)
{
theWrappedObject->setTabText(index, text);
}

void PythonQtWrapper_QTabBar::setTabTextColor(QTabBar* theWrappedObject, int  index, const QColor&  color)
{
theWrappedObject->setTabTextColor(index, color);
}

void PythonQtWrapper_QTabBar::setTabToolTip(QTabBar* theWrappedObject, int  index, const QString&  tip)
{
theWrappedObject->setTabToolTip(index, tip);
}

void PythonQtWrapper_QTabBar::setTabWhatsThis(QTabBar* theWrappedObject, int  index, const QString&  text)
{
theWrappedObject->setTabWhatsThis(index, text);
}

void PythonQtWrapper_QTabBar::setUsesScrollButtons(QTabBar* theWrappedObject, bool  useButtons)
{
theWrappedObject->setUsesScrollButtons(useButtons);
}

QTabBar::Shape  PythonQtWrapper_QTabBar::shape(QTabBar* theWrappedObject) const
{
return theWrappedObject->shape();
}

QSize  PythonQtWrapper_QTabBar::sizeHint(QTabBar* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

int  PythonQtWrapper_QTabBar::tabAt(QTabBar* theWrappedObject, const QPoint&  pos) const
{
return theWrappedObject->tabAt(pos);
}

QVariant  PythonQtWrapper_QTabBar::tabData(QTabBar* theWrappedObject, int  index) const
{
return theWrappedObject->tabData(index);
}

QIcon  PythonQtWrapper_QTabBar::tabIcon(QTabBar* theWrappedObject, int  index) const
{
return theWrappedObject->tabIcon(index);
}

QRect  PythonQtWrapper_QTabBar::tabRect(QTabBar* theWrappedObject, int  index) const
{
return theWrappedObject->tabRect(index);
}

QString  PythonQtWrapper_QTabBar::tabText(QTabBar* theWrappedObject, int  index) const
{
return theWrappedObject->tabText(index);
}

QColor  PythonQtWrapper_QTabBar::tabTextColor(QTabBar* theWrappedObject, int  index) const
{
return theWrappedObject->tabTextColor(index);
}

QString  PythonQtWrapper_QTabBar::tabToolTip(QTabBar* theWrappedObject, int  index) const
{
return theWrappedObject->tabToolTip(index);
}

QString  PythonQtWrapper_QTabBar::tabWhatsThis(QTabBar* theWrappedObject, int  index) const
{
return theWrappedObject->tabWhatsThis(index);
}

bool  PythonQtWrapper_QTabBar::usesScrollButtons(QTabBar* theWrappedObject) const
{
return theWrappedObject->usesScrollButtons();
}

