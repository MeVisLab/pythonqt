#ifndef PYTHONQTWRAPPER_QTEXTLINE_H
#define PYTHONQTWRAPPER_QTEXTLINE_H

#include <qtextlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextLayout>
#include <QVariant>
#include <qpainter.h>
#include <qpoint.h>
#include <qrect.h>

class PythonQtWrapper_QTextLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Edge CursorPosition )
enum Edge{
  Leading = QTextLine::Leading,   Trailing = QTextLine::Trailing};
enum CursorPosition{
  CursorBetweenCharacters = QTextLine::CursorBetweenCharacters,   CursorOnCharacter = QTextLine::CursorOnCharacter};
public slots:
QTextLine* new_QTextLine();
QTextLine* new_QTextLine(const QTextLine& other) {
QTextLine* a = new QTextLine();
*((QTextLine*)a) = other;
return a; }
void delete_QTextLine(QTextLine* obj) { delete obj; } 
   void draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection = 0) const;
   void setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth);
   void setNumColumns(QTextLine* theWrappedObject, int  columns);
   qreal  cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge = QTextLine::Leading) const;
   void setPosition(QTextLine* theWrappedObject, const QPointF&  pos);
   int  lineNumber(QTextLine* theWrappedObject) const;
   qreal  naturalTextWidth(QTextLine* theWrappedObject) const;
   qreal  ascent(QTextLine* theWrappedObject) const;
   qreal  height(QTextLine* theWrappedObject) const;
   int  textLength(QTextLine* theWrappedObject) const;
   qreal  y(QTextLine* theWrappedObject) const;
   qreal  x(QTextLine* theWrappedObject) const;
   qreal  descent(QTextLine* theWrappedObject) const;
   QRectF  rect(QTextLine* theWrappedObject) const;
   QRectF  naturalTextRect(QTextLine* theWrappedObject) const;
   qreal  width(QTextLine* theWrappedObject) const;
   void setLineWidth(QTextLine* theWrappedObject, qreal  width);
   QPointF  position(QTextLine* theWrappedObject) const;
   int  textStart(QTextLine* theWrappedObject) const;
   bool  isValid(QTextLine* theWrappedObject) const;
   int  xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2 = QTextLine::CursorBetweenCharacters) const;
};

#endif // PYTHONQTWRAPPER_QTEXTLINE_H
