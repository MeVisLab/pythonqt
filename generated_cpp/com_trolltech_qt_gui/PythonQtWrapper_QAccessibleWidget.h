#ifndef PYTHONQTWRAPPER_QACCESSIBLEWIDGET_H
#define PYTHONQTWRAPPER_QACCESSIBLEWIDGET_H

#include <qaccessiblewidget.h>
#include <QObject>

#include <QVariant>
#include <qaccessible.h>
#include <qaccessiblewidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qwidget.h>

class PythonQtWrapper_QAccessibleWidget : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleWidget* new_QAccessibleWidget(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString());
   QString  actionText(QAccessibleWidget* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   int  childAt(QAccessibleWidget* theWrappedObject, int  x, int  y) const;
   int  childCount(QAccessibleWidget* theWrappedObject) const;
   bool  doAction(QAccessibleWidget* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
   int  indexOfChild(QAccessibleWidget* theWrappedObject, const QAccessibleInterface*  child) const;
   int  navigate(QAccessibleWidget* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
   QRect  rect(QAccessibleWidget* theWrappedObject, int  child) const;
   QAccessible::Relation  relationTo(QAccessibleWidget* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const;
   QAccessible::Role  role(QAccessibleWidget* theWrappedObject, int  child) const;
   QAccessible::State  state(QAccessibleWidget* theWrappedObject, int  child) const;
   QString  text(QAccessibleWidget* theWrappedObject, QAccessible::Text  t, int  child) const;
   int  userActionCount(QAccessibleWidget* theWrappedObject, int  child) const;
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEWIDGET_H
