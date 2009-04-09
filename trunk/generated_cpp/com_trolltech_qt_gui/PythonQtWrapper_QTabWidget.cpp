#include "PythonQtWrapper_QTabWidget.h"

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
#include <qtabwidget.h>
#include <qwidget.h>

QTabWidget* PythonQtWrapper_QTabWidget::new_QTabWidget(QWidget*  parent)
{ 
return new QTabWidget(parent); }

int  PythonQtWrapper_QTabWidget::addTab(QTabWidget* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  label)
{
return theWrappedObject->addTab(widget, icon, label);
}

int  PythonQtWrapper_QTabWidget::addTab(QTabWidget* theWrappedObject, QWidget*  widget, const QString&  arg__2)
{
return theWrappedObject->addTab(widget, arg__2);
}

void PythonQtWrapper_QTabWidget::clear(QTabWidget* theWrappedObject)
{
theWrappedObject->clear();
}

QWidget*  PythonQtWrapper_QTabWidget::cornerWidget(QTabWidget* theWrappedObject, Qt::Corner  corner) const
{
return theWrappedObject->cornerWidget(corner);
}

int  PythonQtWrapper_QTabWidget::count(QTabWidget* theWrappedObject) const
{
return theWrappedObject->count();
}

int  PythonQtWrapper_QTabWidget::currentIndex(QTabWidget* theWrappedObject) const
{
return theWrappedObject->currentIndex();
}

QWidget*  PythonQtWrapper_QTabWidget::currentWidget(QTabWidget* theWrappedObject) const
{
return theWrappedObject->currentWidget();
}

Qt::TextElideMode  PythonQtWrapper_QTabWidget::elideMode(QTabWidget* theWrappedObject) const
{
return theWrappedObject->elideMode();
}

QSize  PythonQtWrapper_QTabWidget::iconSize(QTabWidget* theWrappedObject) const
{
return theWrappedObject->iconSize();
}

int  PythonQtWrapper_QTabWidget::indexOf(QTabWidget* theWrappedObject, QWidget*  widget) const
{
return theWrappedObject->indexOf(widget);
}

int  PythonQtWrapper_QTabWidget::insertTab(QTabWidget* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  label)
{
return theWrappedObject->insertTab(index, widget, icon, label);
}

int  PythonQtWrapper_QTabWidget::insertTab(QTabWidget* theWrappedObject, int  index, QWidget*  widget, const QString&  arg__3)
{
return theWrappedObject->insertTab(index, widget, arg__3);
}

bool  PythonQtWrapper_QTabWidget::isTabEnabled(QTabWidget* theWrappedObject, int  index) const
{
return theWrappedObject->isTabEnabled(index);
}

QSize  PythonQtWrapper_QTabWidget::minimumSizeHint(QTabWidget* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QTabWidget::removeTab(QTabWidget* theWrappedObject, int  index)
{
theWrappedObject->removeTab(index);
}

void PythonQtWrapper_QTabWidget::setCornerWidget(QTabWidget* theWrappedObject, QWidget*  w, Qt::Corner  corner)
{
theWrappedObject->setCornerWidget(w, corner);
}

void PythonQtWrapper_QTabWidget::setElideMode(QTabWidget* theWrappedObject, Qt::TextElideMode  arg__1)
{
theWrappedObject->setElideMode(arg__1);
}

void PythonQtWrapper_QTabWidget::setIconSize(QTabWidget* theWrappedObject, const QSize&  size)
{
theWrappedObject->setIconSize(size);
}

void PythonQtWrapper_QTabWidget::setTabEnabled(QTabWidget* theWrappedObject, int  index, bool  arg__2)
{
theWrappedObject->setTabEnabled(index, arg__2);
}

void PythonQtWrapper_QTabWidget::setTabIcon(QTabWidget* theWrappedObject, int  index, const QIcon&  icon)
{
theWrappedObject->setTabIcon(index, icon);
}

void PythonQtWrapper_QTabWidget::setTabPosition(QTabWidget* theWrappedObject, QTabWidget::TabPosition  arg__1)
{
theWrappedObject->setTabPosition(arg__1);
}

void PythonQtWrapper_QTabWidget::setTabShape(QTabWidget* theWrappedObject, QTabWidget::TabShape  s)
{
theWrappedObject->setTabShape(s);
}

void PythonQtWrapper_QTabWidget::setTabText(QTabWidget* theWrappedObject, int  index, const QString&  arg__2)
{
theWrappedObject->setTabText(index, arg__2);
}

void PythonQtWrapper_QTabWidget::setTabToolTip(QTabWidget* theWrappedObject, int  index, const QString&  tip)
{
theWrappedObject->setTabToolTip(index, tip);
}

void PythonQtWrapper_QTabWidget::setTabWhatsThis(QTabWidget* theWrappedObject, int  index, const QString&  text)
{
theWrappedObject->setTabWhatsThis(index, text);
}

void PythonQtWrapper_QTabWidget::setUsesScrollButtons(QTabWidget* theWrappedObject, bool  useButtons)
{
theWrappedObject->setUsesScrollButtons(useButtons);
}

QSize  PythonQtWrapper_QTabWidget::sizeHint(QTabWidget* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QIcon  PythonQtWrapper_QTabWidget::tabIcon(QTabWidget* theWrappedObject, int  index) const
{
return theWrappedObject->tabIcon(index);
}

QTabWidget::TabPosition  PythonQtWrapper_QTabWidget::tabPosition(QTabWidget* theWrappedObject) const
{
return theWrappedObject->tabPosition();
}

QTabWidget::TabShape  PythonQtWrapper_QTabWidget::tabShape(QTabWidget* theWrappedObject) const
{
return theWrappedObject->tabShape();
}

QString  PythonQtWrapper_QTabWidget::tabText(QTabWidget* theWrappedObject, int  index) const
{
return theWrappedObject->tabText(index);
}

QString  PythonQtWrapper_QTabWidget::tabToolTip(QTabWidget* theWrappedObject, int  index) const
{
return theWrappedObject->tabToolTip(index);
}

QString  PythonQtWrapper_QTabWidget::tabWhatsThis(QTabWidget* theWrappedObject, int  index) const
{
return theWrappedObject->tabWhatsThis(index);
}

bool  PythonQtWrapper_QTabWidget::usesScrollButtons(QTabWidget* theWrappedObject) const
{
return theWrappedObject->usesScrollButtons();
}

QWidget*  PythonQtWrapper_QTabWidget::widget(QTabWidget* theWrappedObject, int  index) const
{
return theWrappedObject->widget(index);
}

