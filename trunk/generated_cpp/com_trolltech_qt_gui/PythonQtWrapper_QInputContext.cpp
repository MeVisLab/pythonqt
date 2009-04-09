#include "PythonQtWrapper_QInputContext.h"

#include <QTextFormat>
#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextformat.h>
#include <qwidget.h>

QList<QAction* >  PythonQtWrapper_QInputContext::actions(QInputContext* theWrappedObject)
{
return theWrappedObject->actions();
}

bool  PythonQtWrapper_QInputContext::filterEvent(QInputContext* theWrappedObject, const QEvent*  event)
{
return theWrappedObject->filterEvent(event);
}

QWidget*  PythonQtWrapper_QInputContext::focusWidget(QInputContext* theWrappedObject) const
{
return theWrappedObject->focusWidget();
}

QFont  PythonQtWrapper_QInputContext::font(QInputContext* theWrappedObject) const
{
return theWrappedObject->font();
}

QString  PythonQtWrapper_QInputContext::identifierName(QInputContext* theWrappedObject)
{
return theWrappedObject->identifierName();
}

bool  PythonQtWrapper_QInputContext::isComposing(QInputContext* theWrappedObject) const
{
return theWrappedObject->isComposing();
}

QString  PythonQtWrapper_QInputContext::language(QInputContext* theWrappedObject)
{
return theWrappedObject->language();
}

void PythonQtWrapper_QInputContext::mouseHandler(QInputContext* theWrappedObject, int  x, QMouseEvent*  event)
{
theWrappedObject->mouseHandler(x, event);
}

void PythonQtWrapper_QInputContext::reset(QInputContext* theWrappedObject)
{
theWrappedObject->reset();
}

void PythonQtWrapper_QInputContext::sendEvent(QInputContext* theWrappedObject, const QInputMethodEvent&  event)
{
theWrappedObject->sendEvent(event);
}

QTextFormat  PythonQtWrapper_QInputContext::standardFormat(QInputContext* theWrappedObject, QInputContext::StandardFormat  s) const
{
return theWrappedObject->standardFormat(s);
}

void PythonQtWrapper_QInputContext::update(QInputContext* theWrappedObject)
{
theWrappedObject->update();
}

void PythonQtWrapper_QInputContext::widgetDestroyed(QInputContext* theWrappedObject, QWidget*  w)
{
theWrappedObject->widgetDestroyed(w);
}

