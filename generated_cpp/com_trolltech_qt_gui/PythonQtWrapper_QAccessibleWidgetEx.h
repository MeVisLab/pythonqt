#ifndef PYTHONQTWRAPPER_QACCESSIBLEWIDGETEX_H
#define PYTHONQTWRAPPER_QACCESSIBLEWIDGETEX_H

#include <qaccessiblewidget.h>
#include <QObject>

#include <QVariant>
#include <qaccessible.h>
#include <qaccessiblewidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qwidget.h>

class PythonQtWrapper_QAccessibleWidgetEx : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleWidgetEx* new_QAccessibleWidgetEx(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString());
   QString  actionText(QAccessibleWidgetEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   int  childAt(QAccessibleWidgetEx* theWrappedObject, int  x, int  y) const;
   int  childCount(QAccessibleWidgetEx* theWrappedObject) const;
   bool  doAction(QAccessibleWidgetEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   int  indexOfChild(QAccessibleWidgetEx* theWrappedObject, const QAccessibleInterface*  child) const;
   QVariant  invokeMethodEx(QAccessibleWidgetEx* theWrappedObject, QAccessible::Method  method, int  child, const QList<QVariant >&  params);
   int  navigate(QAccessibleWidgetEx* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
   QRect  rect(QAccessibleWidgetEx* theWrappedObject, int  child) const;
   QAccessible::Relation  relationTo(QAccessibleWidgetEx* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const;
   QAccessible::Role  role(QAccessibleWidgetEx* theWrappedObject, int  child) const;
   QAccessible::State  state(QAccessibleWidgetEx* theWrappedObject, int  child) const;
   QString  text(QAccessibleWidgetEx* theWrappedObject, QAccessible::Text  t, int  child) const;
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEWIDGETEX_H
