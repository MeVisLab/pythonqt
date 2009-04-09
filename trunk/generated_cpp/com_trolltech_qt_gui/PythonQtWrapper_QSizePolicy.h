#ifndef PYTHONQTWRAPPER_QSIZEPOLICY_H
#define PYTHONQTWRAPPER_QSIZEPOLICY_H

#include <qsizepolicy.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qsizepolicy.h>

class PythonQtWrapper_QSizePolicy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ControlType PolicyFlag )
enum ControlType{
  DefaultType = QSizePolicy::DefaultType,   ButtonBox = QSizePolicy::ButtonBox,   CheckBox = QSizePolicy::CheckBox,   ComboBox = QSizePolicy::ComboBox,   Frame = QSizePolicy::Frame,   GroupBox = QSizePolicy::GroupBox,   Label = QSizePolicy::Label,   Line = QSizePolicy::Line,   LineEdit = QSizePolicy::LineEdit,   PushButton = QSizePolicy::PushButton,   RadioButton = QSizePolicy::RadioButton,   Slider = QSizePolicy::Slider,   SpinBox = QSizePolicy::SpinBox,   TabWidget = QSizePolicy::TabWidget,   ToolButton = QSizePolicy::ToolButton};
enum PolicyFlag{
  GrowFlag = QSizePolicy::GrowFlag,   ExpandFlag = QSizePolicy::ExpandFlag,   ShrinkFlag = QSizePolicy::ShrinkFlag,   IgnoreFlag = QSizePolicy::IgnoreFlag};
public slots:
QSizePolicy* new_QSizePolicy();
QSizePolicy* new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
QSizePolicy* new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical, QSizePolicy::ControlType  type);
void delete_QSizePolicy(QSizePolicy* obj) { delete obj; } 
   QSizePolicy::ControlType  controlType(QSizePolicy* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QSizePolicy* theWrappedObject) const;
   bool  hasHeightForWidth(QSizePolicy* theWrappedObject) const;
   QSizePolicy::Policy  horizontalPolicy(QSizePolicy* theWrappedObject) const;
   int  horizontalStretch(QSizePolicy* theWrappedObject) const;
   void writeTo(QSizePolicy* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QSizePolicy* theWrappedObject, const QSizePolicy&  s) const;
   void readFrom(QSizePolicy* theWrappedObject, QDataStream&  arg__1);
   void setControlType(QSizePolicy* theWrappedObject, QSizePolicy::ControlType  type);
   void setHeightForWidth(QSizePolicy* theWrappedObject, bool  b);
   void setHorizontalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d);
   void setHorizontalStretch(QSizePolicy* theWrappedObject, uchar  stretchFactor);
   void setVerticalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d);
   void setVerticalStretch(QSizePolicy* theWrappedObject, uchar  stretchFactor);
   void transpose(QSizePolicy* theWrappedObject);
   QSizePolicy::Policy  verticalPolicy(QSizePolicy* theWrappedObject) const;
   int  verticalStretch(QSizePolicy* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSIZEPOLICY_H
