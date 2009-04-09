#ifndef PYTHONQTWRAPPER_QTEXTFORMAT_H
#define PYTHONQTWRAPPER_QTEXTFORMAT_H

#include <qtextformat.h>
#include <QObject>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

class PythonQtWrapper_QTextFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PageBreakFlag )
enum PageBreakFlag{
  PageBreak_Auto = QTextFormat::PageBreak_Auto,   PageBreak_AlwaysBefore = QTextFormat::PageBreak_AlwaysBefore,   PageBreak_AlwaysAfter = QTextFormat::PageBreak_AlwaysAfter};
public slots:
QTextFormat* new_QTextFormat();
QTextFormat* new_QTextFormat(const QTextFormat&  rhs);
QTextFormat* new_QTextFormat(int  type);
void delete_QTextFormat(QTextFormat* obj) { delete obj; } 
   QBrush  background(QTextFormat* theWrappedObject) const;
   bool  boolProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QBrush  brushProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void clearBackground(QTextFormat* theWrappedObject);
   void clearForeground(QTextFormat* theWrappedObject);
   void clearProperty(QTextFormat* theWrappedObject, int  propertyId);
   QColor  colorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   qreal  doubleProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QBrush  foreground(QTextFormat* theWrappedObject) const;
   bool  hasProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   int  intProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  isBlockFormat(QTextFormat* theWrappedObject) const;
   bool  isCharFormat(QTextFormat* theWrappedObject) const;
   bool  isFrameFormat(QTextFormat* theWrappedObject) const;
   bool  isImageFormat(QTextFormat* theWrappedObject) const;
   bool  isListFormat(QTextFormat* theWrappedObject) const;
   bool  isTableCellFormat(QTextFormat* theWrappedObject) const;
   bool  isTableFormat(QTextFormat* theWrappedObject) const;
   bool  isValid(QTextFormat* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QTextFormat* theWrappedObject) const;
   QTextLength  lengthProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QVector<QTextLength >  lengthVectorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void merge(QTextFormat* theWrappedObject, const QTextFormat&  other);
   int  objectIndex(QTextFormat* theWrappedObject) const;
   int  objectType(QTextFormat* theWrappedObject) const;
   void writeTo(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const;
   void readFrom(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   QPen  penProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QMap<int , QVariant >  properties(QTextFormat* theWrappedObject) const;
   QVariant  property(QTextFormat* theWrappedObject, int  propertyId) const;
   int  propertyCount(QTextFormat* theWrappedObject) const;
   void setBackground(QTextFormat* theWrappedObject, const QBrush&  brush);
   void setForeground(QTextFormat* theWrappedObject, const QBrush&  brush);
   void setLayoutDirection(QTextFormat* theWrappedObject, Qt::LayoutDirection  direction);
   void setObjectIndex(QTextFormat* theWrappedObject, int  object);
   void setObjectType(QTextFormat* theWrappedObject, int  type);
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVariant&  value);
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVector<QTextLength >&  lengths);
   QString  stringProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QTextBlockFormat  toBlockFormat(QTextFormat* theWrappedObject) const;
   QTextCharFormat  toCharFormat(QTextFormat* theWrappedObject) const;
   QTextFrameFormat  toFrameFormat(QTextFormat* theWrappedObject) const;
   QTextImageFormat  toImageFormat(QTextFormat* theWrappedObject) const;
   QTextListFormat  toListFormat(QTextFormat* theWrappedObject) const;
   QTextTableCellFormat  toTableCellFormat(QTextFormat* theWrappedObject) const;
   QTextTableFormat  toTableFormat(QTextFormat* theWrappedObject) const;
   int  type(QTextFormat* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTFORMAT_H
