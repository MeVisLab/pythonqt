#ifndef PYTHONQTWRAPPER_QTEXTFRAMEFORMAT_H
#define PYTHONQTWRAPPER_QTEXTFRAMEFORMAT_H

#include <qtextformat.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

class PythonQtShell_QTextFrameFormat : public QTextFrameFormat
{
public:
    PythonQtShell_QTextFrameFormat():QTextFrameFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextFrameFormat(const QTextFormat&  fmt):QTextFrameFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextFrameFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Position BorderStyle )
enum Position{
  InFlow = QTextFrameFormat::InFlow,   FloatLeft = QTextFrameFormat::FloatLeft,   FloatRight = QTextFrameFormat::FloatRight};
enum BorderStyle{
  BorderStyle_None = QTextFrameFormat::BorderStyle_None,   BorderStyle_Dotted = QTextFrameFormat::BorderStyle_Dotted,   BorderStyle_Dashed = QTextFrameFormat::BorderStyle_Dashed,   BorderStyle_Solid = QTextFrameFormat::BorderStyle_Solid,   BorderStyle_Double = QTextFrameFormat::BorderStyle_Double,   BorderStyle_DotDash = QTextFrameFormat::BorderStyle_DotDash,   BorderStyle_DotDotDash = QTextFrameFormat::BorderStyle_DotDotDash,   BorderStyle_Groove = QTextFrameFormat::BorderStyle_Groove,   BorderStyle_Ridge = QTextFrameFormat::BorderStyle_Ridge,   BorderStyle_Inset = QTextFrameFormat::BorderStyle_Inset,   BorderStyle_Outset = QTextFrameFormat::BorderStyle_Outset};
public slots:
QTextFrameFormat* new_QTextFrameFormat();
QTextFrameFormat* new_QTextFrameFormat(const QTextFrameFormat& other) {
PythonQtShell_QTextFrameFormat* a = new PythonQtShell_QTextFrameFormat();
*((QTextFrameFormat*)a) = other;
return a; }
void delete_QTextFrameFormat(QTextFrameFormat* obj) { delete obj; } 
   QBrush  borderBrush(QTextFrameFormat* theWrappedObject) const;
   void setPosition(QTextFrameFormat* theWrappedObject, QTextFrameFormat::Position  f);
   qreal  topMargin(QTextFrameFormat* theWrappedObject) const;
   void setBorderBrush(QTextFrameFormat* theWrappedObject, const QBrush&  brush);
   void setWidth(QTextFrameFormat* theWrappedObject, qreal  width);
   qreal  rightMargin(QTextFrameFormat* theWrappedObject) const;
   void setHeight(QTextFrameFormat* theWrappedObject, qreal  height);
   QTextLength  height(QTextFrameFormat* theWrappedObject) const;
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextFrameFormat* theWrappedObject) const;
   QTextLength  width(QTextFrameFormat* theWrappedObject) const;
   void setHeight(QTextFrameFormat* theWrappedObject, const QTextLength&  height);
   qreal  border(QTextFrameFormat* theWrappedObject) const;
   qreal  margin(QTextFrameFormat* theWrappedObject) const;
   void setLeftMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setPageBreakPolicy(QTextFrameFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   void setRightMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   QTextFrameFormat::Position  position(QTextFrameFormat* theWrappedObject) const;
   void setBorder(QTextFrameFormat* theWrappedObject, qreal  border);
   qreal  leftMargin(QTextFrameFormat* theWrappedObject) const;
   void setTopMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setPadding(QTextFrameFormat* theWrappedObject, qreal  padding);
   void setBorderStyle(QTextFrameFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   bool  isValid(QTextFrameFormat* theWrappedObject) const;
   void setMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   QTextFrameFormat::BorderStyle  borderStyle(QTextFrameFormat* theWrappedObject) const;
   qreal  bottomMargin(QTextFrameFormat* theWrappedObject) const;
   void setBottomMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setWidth(QTextFrameFormat* theWrappedObject, const QTextLength&  length);
   qreal  padding(QTextFrameFormat* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTFRAMEFORMAT_H
