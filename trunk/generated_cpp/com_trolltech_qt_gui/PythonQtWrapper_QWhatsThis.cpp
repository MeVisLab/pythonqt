#include "PythonQtWrapper_QWhatsThis.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qaction.h>
#include <qobject.h>
#include <qpoint.h>
#include <qwidget.h>

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_enterWhatsThisMode()
{
QWhatsThis::enterWhatsThisMode();
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_showText(const QPoint&  pos, const QString&  text, QWidget*  w)
{
QWhatsThis::showText(pos, text, w);
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_hideText()
{
QWhatsThis::hideText();
}

QAction*  PythonQtWrapper_QWhatsThis::static_QWhatsThis_createAction(QObject*  parent)
{
return QWhatsThis::createAction(parent);
}

bool  PythonQtWrapper_QWhatsThis::static_QWhatsThis_inWhatsThisMode()
{
return QWhatsThis::inWhatsThisMode();
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_leaveWhatsThisMode()
{
QWhatsThis::leaveWhatsThisMode();
}

