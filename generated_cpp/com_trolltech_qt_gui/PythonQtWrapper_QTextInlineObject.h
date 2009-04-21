#ifndef PYTHONQTWRAPPER_QTEXTINLINEOBJECT_H
#define PYTHONQTWRAPPER_QTEXTINLINEOBJECT_H

#include <qtextlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qrect.h>
#include <qtextformat.h>

class PythonQtWrapper_QTextInlineObject : public QObject
{ Q_OBJECT
public:
public slots:
QTextInlineObject* new_QTextInlineObject();
QTextInlineObject* new_QTextInlineObject(const QTextInlineObject& other) {
QTextInlineObject* a = new QTextInlineObject();
*((QTextInlineObject*)a) = other;
return a; }
void delete_QTextInlineObject(QTextInlineObject* obj) { delete obj; } 
   qreal  width(QTextInlineObject* theWrappedObject) const;
   QRectF  rect(QTextInlineObject* theWrappedObject) const;
   qreal  descent(QTextInlineObject* theWrappedObject) const;
   int  formatIndex(QTextInlineObject* theWrappedObject) const;
   QTextFormat  format(QTextInlineObject* theWrappedObject) const;
   Qt::LayoutDirection  textDirection(QTextInlineObject* theWrappedObject) const;
   bool  isValid(QTextInlineObject* theWrappedObject) const;
   qreal  height(QTextInlineObject* theWrappedObject) const;
   void setWidth(QTextInlineObject* theWrappedObject, qreal  w);
   void setAscent(QTextInlineObject* theWrappedObject, qreal  a);
   qreal  ascent(QTextInlineObject* theWrappedObject) const;
   void setDescent(QTextInlineObject* theWrappedObject, qreal  d);
   int  textPosition(QTextInlineObject* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTINLINEOBJECT_H
