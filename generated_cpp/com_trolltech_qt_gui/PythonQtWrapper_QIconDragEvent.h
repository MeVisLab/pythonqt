#ifndef PYTHONQTWRAPPER_QICONDRAGEVENT_H
#define PYTHONQTWRAPPER_QICONDRAGEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QIconDragEvent : public QObject
{ Q_OBJECT
public:
public slots:
QIconDragEvent* new_QIconDragEvent();
void delete_QIconDragEvent(QIconDragEvent* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QICONDRAGEVENT_H
