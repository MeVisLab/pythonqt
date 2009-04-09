#ifndef PYTHONQTWRAPPER_QDRAGMOVEEVENT_H
#define PYTHONQTWRAPPER_QDRAGMOVEEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>
#include <qmimedata.h>
#include <qpoint.h>
#include <qrect.h>
#include <qwidget.h>

class PythonQtWrapper_QDragMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragMoveEvent* new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove);
void delete_QDragMoveEvent(QDragMoveEvent* obj) { delete obj; } 
   void accept(QDragMoveEvent* theWrappedObject, const QRect&  r);
   QRect  answerRect(QDragMoveEvent* theWrappedObject) const;
   void ignore(QDragMoveEvent* theWrappedObject, const QRect&  r);
};

#endif // PYTHONQTWRAPPER_QDRAGMOVEEVENT_H
