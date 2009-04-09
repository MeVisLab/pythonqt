#ifndef PYTHONQTWRAPPER_QWIDGETACTION_H
#define PYTHONQTWRAPPER_QWIDGETACTION_H

#include <qwidgetaction.h>
#include <QObject>

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

class PythonQtWrapper_QWidgetAction : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetAction* new_QWidgetAction(QObject*  parent);
void delete_QWidgetAction(QWidgetAction* obj) { delete obj; } 
   QWidget*  defaultWidget(QWidgetAction* theWrappedObject) const;
   void releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   QWidget*  requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   void setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w);
};

#endif // PYTHONQTWRAPPER_QWIDGETACTION_H
