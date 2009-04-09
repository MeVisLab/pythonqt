#ifndef PYTHONQTWRAPPER_QACTIONEVENT_H
#define PYTHONQTWRAPPER_QACTIONEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>
#include <qaction.h>

class PythonQtWrapper_QActionEvent : public QObject
{ Q_OBJECT
public:
public slots:
QActionEvent* new_QActionEvent(int  type, QAction*  action, QAction*  before = 0);
void delete_QActionEvent(QActionEvent* obj) { delete obj; } 
   QAction*  action(QActionEvent* theWrappedObject) const;
   QAction*  before(QActionEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QACTIONEVENT_H
