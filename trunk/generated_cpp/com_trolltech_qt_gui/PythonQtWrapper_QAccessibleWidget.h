#ifndef PYTHONQTWRAPPER_QACCESSIBLEWIDGET_H
#define PYTHONQTWRAPPER_QACCESSIBLEWIDGET_H

#include <qaccessiblewidget.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaccessible.h>
#include <qaccessiblewidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qwidget.h>

class PythonQtShell_QAccessibleWidget : public QAccessibleWidget
{
public:
    PythonQtShell_QAccessibleWidget(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString()):QAccessibleWidget(o, r, name),_wrapper(NULL) {};

virtual QString  actionText(int  action, QAccessible::Text  t, int  child) const;
virtual int  childAt(int  x, int  y) const;
virtual int  childCount() const;
virtual bool  doAction(int  action, int  child, const QList<QVariant >&  params);
virtual int  indexOfChild(const QAccessibleInterface*  child) const;
virtual bool  isValid() const;
virtual int  navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
virtual QObject*  object() const;
virtual QRect  rect(int  child) const;
virtual QAccessible::Relation  relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const;
virtual QAccessible::Role  role(int  child) const;
virtual void setText(QAccessible::Text  t, int  child, const QString&  text);
virtual QAccessible::State  state(int  child) const;
virtual QString  text(QAccessible::Text  t, int  child) const;
virtual int  userActionCount(int  child) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAccessibleWidget : public QAccessibleWidget
{ public:
inline QAccessible::Relation  promoted_relationTo(int  child, const QAccessibleInterface*  other, int  otherChild) const { return QAccessibleWidget::relationTo(child, other, otherChild); }
inline QAccessible::Role  promoted_role(int  child) const { return QAccessibleWidget::role(child); }
inline int  promoted_childAt(int  x, int  y) const { return QAccessibleWidget::childAt(x, y); }
inline int  promoted_childCount() const { return QAccessibleWidget::childCount(); }
inline int  promoted_userActionCount(int  child) const { return QAccessibleWidget::userActionCount(child); }
inline int  promoted_navigate(QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const { return QAccessibleWidget::navigate(rel, entry, target); }
inline int  promoted_indexOfChild(const QAccessibleInterface*  child) const { return QAccessibleWidget::indexOfChild(child); }
inline QRect  promoted_rect(int  child) const { return QAccessibleWidget::rect(child); }
inline QString  promoted_text(QAccessible::Text  t, int  child) const { return QAccessibleWidget::text(t, child); }
inline QString  promoted_actionText(int  action, QAccessible::Text  t, int  child) const { return QAccessibleWidget::actionText(action, t, child); }
inline QAccessible::State  promoted_state(int  child) const { return QAccessibleWidget::state(child); }
inline bool  promoted_doAction(int  action, int  child, const QList<QVariant >&  params) { return QAccessibleWidget::doAction(action, child, params); }
};

class PythonQtWrapper_QAccessibleWidget : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleWidget* new_QAccessibleWidget(QWidget*  o, QAccessible::Role  r = QAccessible::Client, const QString&  name = QString());
   QAccessible::Relation  relationTo(QAccessibleWidget* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const;
   QAccessible::Role  role(QAccessibleWidget* theWrappedObject, int  child) const;
   int  childAt(QAccessibleWidget* theWrappedObject, int  x, int  y) const;
   int  childCount(QAccessibleWidget* theWrappedObject) const;
   int  userActionCount(QAccessibleWidget* theWrappedObject, int  child) const;
   int  navigate(QAccessibleWidget* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const;
   int  indexOfChild(QAccessibleWidget* theWrappedObject, const QAccessibleInterface*  child) const;
   QRect  rect(QAccessibleWidget* theWrappedObject, int  child) const;
   QString  text(QAccessibleWidget* theWrappedObject, QAccessible::Text  t, int  child) const;
   QString  actionText(QAccessibleWidget* theWrappedObject, int  action, QAccessible::Text  t, int  child) const;
   QAccessible::State  state(QAccessibleWidget* theWrappedObject, int  child) const;
   bool  doAction(QAccessibleWidget* theWrappedObject, int  action, int  child, const QList<QVariant >&  params);
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEWIDGET_H
