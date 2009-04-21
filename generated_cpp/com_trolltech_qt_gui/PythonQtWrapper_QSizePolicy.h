#ifndef PYTHONQTWRAPPER_QSIZEPOLICY_H
#define PYTHONQTWRAPPER_QSIZEPOLICY_H

#include <qsizepolicy.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qsizepolicy.h>

class PythonQtWrapper_QSizePolicy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ControlType PolicyFlag Policy )
enum ControlType{
  DefaultType = QSizePolicy::DefaultType,   ButtonBox = QSizePolicy::ButtonBox,   CheckBox = QSizePolicy::CheckBox,   ComboBox = QSizePolicy::ComboBox,   Frame = QSizePolicy::Frame,   GroupBox = QSizePolicy::GroupBox,   Label = QSizePolicy::Label,   Line = QSizePolicy::Line,   LineEdit = QSizePolicy::LineEdit,   PushButton = QSizePolicy::PushButton,   RadioButton = QSizePolicy::RadioButton,   Slider = QSizePolicy::Slider,   SpinBox = QSizePolicy::SpinBox,   TabWidget = QSizePolicy::TabWidget,   ToolButton = QSizePolicy::ToolButton};
enum PolicyFlag{
  GrowFlag = QSizePolicy::GrowFlag,   ExpandFlag = QSizePolicy::ExpandFlag,   ShrinkFlag = QSizePolicy::ShrinkFlag,   IgnoreFlag = QSizePolicy::IgnoreFlag};
enum Policy{
  Fixed = QSizePolicy::Fixed,   Minimum = QSizePolicy::Minimum,   Maximum = QSizePolicy::Maximum,   Preferred = QSizePolicy::Preferred,   MinimumExpanding = QSizePolicy::MinimumExpanding,   Expanding = QSizePolicy::Expanding,   Ignored = QSizePolicy::Ignored};
public slots:
QSizePolicy* new_QSizePolicy();
QSizePolicy* new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
QSizePolicy* new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical, QSizePolicy::ControlType  type);
QSizePolicy* new_QSizePolicy(const QSizePolicy& other) {
QSizePolicy* a = new QSizePolicy();
*((QSizePolicy*)a) = other;
return a; }
void delete_QSizePolicy(QSizePolicy* obj) { delete obj; } 
   void readFrom(QSizePolicy* theWrappedObject, QDataStream&  arg__1);
   void setHorizontalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d);
   void setHorizontalStretch(QSizePolicy* theWrappedObject, uchar  stretchFactor);
   void writeTo(QSizePolicy* theWrappedObject, QDataStream&  arg__1);
   void setHeightForWidth(QSizePolicy* theWrappedObject, bool  b);
   bool  operator_equal(QSizePolicy* theWrappedObject, const QSizePolicy&  s) const;
   QSizePolicy::Policy  horizontalPolicy(QSizePolicy* theWrappedObject) const;
   int  verticalStretch(QSizePolicy* theWrappedObject) const;
   QSizePolicy::ControlType  controlType(QSizePolicy* theWrappedObject) const;
   int  horizontalStretch(QSizePolicy* theWrappedObject) const;
   void setVerticalStretch(QSizePolicy* theWrappedObject, uchar  stretchFactor);
   void transpose(QSizePolicy* theWrappedObject);
   Qt::Orientations  expandingDirections(QSizePolicy* theWrappedObject) const;
   void setControlType(QSizePolicy* theWrappedObject, QSizePolicy::ControlType  type);
   QSizePolicy::Policy  verticalPolicy(QSizePolicy* theWrappedObject) const;
   bool  hasHeightForWidth(QSizePolicy* theWrappedObject) const;
   void setVerticalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d);
};

#endif // PYTHONQTWRAPPER_QSIZEPOLICY_H
