#ifndef PYTHONQTWRAPPER_QTOOLBARCHANGEEVENT_H
#define PYTHONQTWRAPPER_QTOOLBARCHANGEEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QToolBarChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QToolBarChangeEvent* new_QToolBarChangeEvent(bool  t);
void delete_QToolBarChangeEvent(QToolBarChangeEvent* obj) { delete obj; } 
   bool  toggle(QToolBarChangeEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTOOLBARCHANGEEVENT_H
