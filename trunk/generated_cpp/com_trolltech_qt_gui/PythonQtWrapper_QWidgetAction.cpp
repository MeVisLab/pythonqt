#include "PythonQtWrapper_QWidgetAction.h"

#include <QVariant>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qwidget.h>
#include <qwidgetaction.h>

QWidgetAction* PythonQtWrapper_QWidgetAction::new_QWidgetAction(QObject*  parent)
{ 
return new QWidgetAction(parent); }

QWidget*  PythonQtWrapper_QWidgetAction::defaultWidget(QWidgetAction* theWrappedObject) const
{
return theWrappedObject->defaultWidget();
}

void PythonQtWrapper_QWidgetAction::releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget)
{
theWrappedObject->releaseWidget(widget);
}

QWidget*  PythonQtWrapper_QWidgetAction::requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent)
{
return theWrappedObject->requestWidget(parent);
}

void PythonQtWrapper_QWidgetAction::setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w)
{
theWrappedObject->setDefaultWidget(w);
}

