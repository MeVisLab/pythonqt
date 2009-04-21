#ifndef PYTHONQTWRAPPER_QCURSOR_H
#define PYTHONQTWRAPPER_QCURSOR_H

#include <qcursor.h>
#include <QObject>

#include <PythonQt.h>

#include <QPixmap>
#include <QVariant>
#include <qbitmap.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qpixmap.h>
#include <qpoint.h>

class PythonQtWrapper_QCursor : public QObject
{ Q_OBJECT
public:
public slots:
QCursor* new_QCursor();
QCursor* new_QCursor(Qt::CursorShape  shape);
QCursor* new_QCursor(const QBitmap&  bitmap, const QBitmap&  mask, int  hotX = -1, int  hotY = -1);
QCursor* new_QCursor(const QCursor&  cursor);
QCursor* new_QCursor(const QPixmap&  pixmap, int  hotX = -1, int  hotY = -1);
void delete_QCursor(QCursor* obj) { delete obj; } 
   QPoint  hotSpot(QCursor* theWrappedObject) const;
   const QBitmap*  mask(QCursor* theWrappedObject) const;
   void readFrom(QCursor* theWrappedObject, QDataStream&  inS);
   void setShape(QCursor* theWrappedObject, Qt::CursorShape  newShape);
   void static_QCursor_setPos(int  x, int  y);
   void static_QCursor_setPos(const QPoint&  p);
   Qt::CursorShape  shape(QCursor* theWrappedObject) const;
   QPixmap  pixmap(QCursor* theWrappedObject) const;
   const QBitmap*  bitmap(QCursor* theWrappedObject) const;
   void writeTo(QCursor* theWrappedObject, QDataStream&  outS);
   QPoint  static_QCursor_pos();
};

#endif // PYTHONQTWRAPPER_QCURSOR_H
