#ifndef PYTHONQTWRAPPER_QDRAG_H
#define PYTHONQTWRAPPER_QDRAG_H

#include <qdrag.h>
#include <QObject>

#include <QPixmap>
#include <QPoint>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdrag.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtWrapper_QDrag : public QObject
{ Q_OBJECT
public:
public slots:
QDrag* new_QDrag(QWidget*  dragSource);
void delete_QDrag(QDrag* obj) { delete obj; } 
   Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions = Qt::MoveAction);
   Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions, Qt::DropAction  defaultAction);
   QPoint  hotSpot(QDrag* theWrappedObject) const;
   QMimeData*  mimeData(QDrag* theWrappedObject) const;
   QPixmap  pixmap(QDrag* theWrappedObject) const;
   void setDragCursor(QDrag* theWrappedObject, const QPixmap&  cursor, Qt::DropAction  action);
   void setHotSpot(QDrag* theWrappedObject, const QPoint&  hotspot);
   void setMimeData(QDrag* theWrappedObject, QMimeData*  data);
   void setPixmap(QDrag* theWrappedObject, const QPixmap&  arg__1);
   QWidget*  source(QDrag* theWrappedObject) const;
   QWidget*  target(QDrag* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDRAG_H
