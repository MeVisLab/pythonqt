#ifndef PYTHONQTWRAPPER_QTEXTINLINEOBJECT_H
#define PYTHONQTWRAPPER_QTEXTINLINEOBJECT_H

#include <qtextlayout.h>
#include <QObject>

#include <QVariant>
#include <qrect.h>
#include <qtextformat.h>

class PythonQtWrapper_QTextInlineObject : public QObject
{ Q_OBJECT
public:
public slots:
QTextInlineObject* new_QTextInlineObject();
void delete_QTextInlineObject(QTextInlineObject* obj) { delete obj; } 
   qreal  ascent(QTextInlineObject* theWrappedObject) const;
   qreal  descent(QTextInlineObject* theWrappedObject) const;
   QTextFormat  format(QTextInlineObject* theWrappedObject) const;
   int  formatIndex(QTextInlineObject* theWrappedObject) const;
   qreal  height(QTextInlineObject* theWrappedObject) const;
   bool  isValid(QTextInlineObject* theWrappedObject) const;
   QRectF  rect(QTextInlineObject* theWrappedObject) const;
   void setAscent(QTextInlineObject* theWrappedObject, qreal  a);
   void setDescent(QTextInlineObject* theWrappedObject, qreal  d);
   void setWidth(QTextInlineObject* theWrappedObject, qreal  w);
   Qt::LayoutDirection  textDirection(QTextInlineObject* theWrappedObject) const;
   int  textPosition(QTextInlineObject* theWrappedObject) const;
   qreal  width(QTextInlineObject* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTINLINEOBJECT_H
