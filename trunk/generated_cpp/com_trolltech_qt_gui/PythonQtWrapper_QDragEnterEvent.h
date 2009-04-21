#ifndef PYTHONQTWRAPPER_QDRAGENTEREVENT_H
#define PYTHONQTWRAPPER_QDRAGENTEREVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qmimedata.h>
#include <qpoint.h>
#include <qrect.h>
#include <qwidget.h>

class PythonQtWrapper_QDragEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragEnterEvent* new_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QDragEnterEvent(QDragEnterEvent* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QDRAGENTEREVENT_H
