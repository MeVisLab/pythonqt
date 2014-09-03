#include "com_trolltech_qt_gui7.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

PythonQtShell_QStyleOption::~PythonQtShell_QStyleOption() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOption* PythonQtWrapper_QStyleOption::new_QStyleOption(const QStyleOption&  other)
{ 
return new PythonQtShell_QStyleOption(other); }

QStyleOption* PythonQtWrapper_QStyleOption::new_QStyleOption(int  version, int  type)
{ 
return new PythonQtShell_QStyleOption(version, type); }

void PythonQtWrapper_QStyleOption::initFrom(QStyleOption* theWrappedObject, const QWidget*  w)
{
  ( theWrappedObject->initFrom(w));
}

QString PythonQtWrapper_QStyleOption::py_toString(QStyleOption* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QStyleOptionButton::~PythonQtShell_QStyleOptionButton() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionButton* PythonQtWrapper_QStyleOptionButton::new_QStyleOptionButton()
{ 
return new PythonQtShell_QStyleOptionButton(); }

QStyleOptionButton* PythonQtWrapper_QStyleOptionButton::new_QStyleOptionButton(const QStyleOptionButton&  other)
{ 
return new PythonQtShell_QStyleOptionButton(other); }



PythonQtShell_QStyleOptionComboBox::~PythonQtShell_QStyleOptionComboBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox()
{ 
return new PythonQtShell_QStyleOptionComboBox(); }

QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox(const QStyleOptionComboBox&  other)
{ 
return new PythonQtShell_QStyleOptionComboBox(other); }



PythonQtShell_QStyleOptionDockWidget::~PythonQtShell_QStyleOptionDockWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionDockWidget* PythonQtWrapper_QStyleOptionDockWidget::new_QStyleOptionDockWidget()
{ 
return new PythonQtShell_QStyleOptionDockWidget(); }

QStyleOptionDockWidget* PythonQtWrapper_QStyleOptionDockWidget::new_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other)
{ 
return new PythonQtShell_QStyleOptionDockWidget(other); }



PythonQtShell_QStyleOptionDockWidgetV2::~PythonQtShell_QStyleOptionDockWidgetV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionDockWidgetV2* PythonQtWrapper_QStyleOptionDockWidgetV2::new_QStyleOptionDockWidgetV2()
{ 
return new PythonQtShell_QStyleOptionDockWidgetV2(); }



PythonQtShell_QStyleOptionFocusRect::~PythonQtShell_QStyleOptionFocusRect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionFocusRect* PythonQtWrapper_QStyleOptionFocusRect::new_QStyleOptionFocusRect()
{ 
return new PythonQtShell_QStyleOptionFocusRect(); }

QStyleOptionFocusRect* PythonQtWrapper_QStyleOptionFocusRect::new_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other)
{ 
return new PythonQtShell_QStyleOptionFocusRect(other); }



PythonQtShell_QStyleOptionFrame::~PythonQtShell_QStyleOptionFrame() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionFrame* PythonQtWrapper_QStyleOptionFrame::new_QStyleOptionFrame()
{ 
return new PythonQtShell_QStyleOptionFrame(); }

QStyleOptionFrame* PythonQtWrapper_QStyleOptionFrame::new_QStyleOptionFrame(const QStyleOptionFrame&  other)
{ 
return new PythonQtShell_QStyleOptionFrame(other); }



PythonQtShell_QStyleOptionFrameV2::~PythonQtShell_QStyleOptionFrameV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionFrameV2* PythonQtWrapper_QStyleOptionFrameV2::new_QStyleOptionFrameV2()
{ 
return new PythonQtShell_QStyleOptionFrameV2(); }



PythonQtShell_QStyleOptionFrameV3::~PythonQtShell_QStyleOptionFrameV3() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionFrameV3* PythonQtWrapper_QStyleOptionFrameV3::new_QStyleOptionFrameV3()
{ 
return new PythonQtShell_QStyleOptionFrameV3(); }



PythonQtShell_QStyleOptionGraphicsItem::~PythonQtShell_QStyleOptionGraphicsItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem()
{ 
return new PythonQtShell_QStyleOptionGraphicsItem(); }

QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other)
{ 
return new PythonQtShell_QStyleOptionGraphicsItem(other); }

qreal  PythonQtWrapper_QStyleOptionGraphicsItem::static_QStyleOptionGraphicsItem_levelOfDetailFromTransform(const QTransform&  worldTransform)
{
  return (QStyleOptionGraphicsItem::levelOfDetailFromTransform(worldTransform));
}



PythonQtShell_QStyleOptionGroupBox::~PythonQtShell_QStyleOptionGroupBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionGroupBox* PythonQtWrapper_QStyleOptionGroupBox::new_QStyleOptionGroupBox()
{ 
return new PythonQtShell_QStyleOptionGroupBox(); }

QStyleOptionGroupBox* PythonQtWrapper_QStyleOptionGroupBox::new_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other)
{ 
return new PythonQtShell_QStyleOptionGroupBox(other); }



PythonQtShell_QStyleOptionHeader::~PythonQtShell_QStyleOptionHeader() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionHeader* PythonQtWrapper_QStyleOptionHeader::new_QStyleOptionHeader()
{ 
return new PythonQtShell_QStyleOptionHeader(); }

QStyleOptionHeader* PythonQtWrapper_QStyleOptionHeader::new_QStyleOptionHeader(const QStyleOptionHeader&  other)
{ 
return new PythonQtShell_QStyleOptionHeader(other); }



PythonQtShell_QStyleOptionMenuItem::~PythonQtShell_QStyleOptionMenuItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem()
{ 
return new PythonQtShell_QStyleOptionMenuItem(); }

QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other)
{ 
return new PythonQtShell_QStyleOptionMenuItem(other); }



PythonQtShell_QStyleOptionProgressBar::~PythonQtShell_QStyleOptionProgressBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar()
{ 
return new PythonQtShell_QStyleOptionProgressBar(); }

QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other)
{ 
return new PythonQtShell_QStyleOptionProgressBar(other); }



PythonQtShell_QStyleOptionProgressBarV2::~PythonQtShell_QStyleOptionProgressBarV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionProgressBarV2* PythonQtWrapper_QStyleOptionProgressBarV2::new_QStyleOptionProgressBarV2()
{ 
return new PythonQtShell_QStyleOptionProgressBarV2(); }



PythonQtShell_QStyleOptionRubberBand::~PythonQtShell_QStyleOptionRubberBand() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionRubberBand* PythonQtWrapper_QStyleOptionRubberBand::new_QStyleOptionRubberBand()
{ 
return new PythonQtShell_QStyleOptionRubberBand(); }

QStyleOptionRubberBand* PythonQtWrapper_QStyleOptionRubberBand::new_QStyleOptionRubberBand(const QStyleOptionRubberBand&  other)
{ 
return new PythonQtShell_QStyleOptionRubberBand(other); }



PythonQtShell_QStyleOptionSizeGrip::~PythonQtShell_QStyleOptionSizeGrip() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionSizeGrip* PythonQtWrapper_QStyleOptionSizeGrip::new_QStyleOptionSizeGrip()
{ 
return new PythonQtShell_QStyleOptionSizeGrip(); }

QStyleOptionSizeGrip* PythonQtWrapper_QStyleOptionSizeGrip::new_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other)
{ 
return new PythonQtShell_QStyleOptionSizeGrip(other); }



PythonQtShell_QStyleOptionSlider::~PythonQtShell_QStyleOptionSlider() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionSlider* PythonQtWrapper_QStyleOptionSlider::new_QStyleOptionSlider()
{ 
return new PythonQtShell_QStyleOptionSlider(); }

QStyleOptionSlider* PythonQtWrapper_QStyleOptionSlider::new_QStyleOptionSlider(const QStyleOptionSlider&  other)
{ 
return new PythonQtShell_QStyleOptionSlider(other); }



PythonQtShell_QStyleOptionSpinBox::~PythonQtShell_QStyleOptionSpinBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox()
{ 
return new PythonQtShell_QStyleOptionSpinBox(); }

QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other)
{ 
return new PythonQtShell_QStyleOptionSpinBox(other); }



PythonQtShell_QStyleOptionTab::~PythonQtShell_QStyleOptionTab() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab()
{ 
return new PythonQtShell_QStyleOptionTab(); }

QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab(const QStyleOptionTab&  other)
{ 
return new PythonQtShell_QStyleOptionTab(other); }



PythonQtShell_QStyleOptionTabBarBase::~PythonQtShell_QStyleOptionTabBarBase() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabBarBase* PythonQtWrapper_QStyleOptionTabBarBase::new_QStyleOptionTabBarBase()
{ 
return new PythonQtShell_QStyleOptionTabBarBase(); }

QStyleOptionTabBarBase* PythonQtWrapper_QStyleOptionTabBarBase::new_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other)
{ 
return new PythonQtShell_QStyleOptionTabBarBase(other); }



PythonQtShell_QStyleOptionTabBarBaseV2::~PythonQtShell_QStyleOptionTabBarBaseV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabBarBaseV2* PythonQtWrapper_QStyleOptionTabBarBaseV2::new_QStyleOptionTabBarBaseV2()
{ 
return new PythonQtShell_QStyleOptionTabBarBaseV2(); }



PythonQtShell_QStyleOptionTabV2::~PythonQtShell_QStyleOptionTabV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabV2* PythonQtWrapper_QStyleOptionTabV2::new_QStyleOptionTabV2()
{ 
return new PythonQtShell_QStyleOptionTabV2(); }



PythonQtShell_QStyleOptionTabV3::~PythonQtShell_QStyleOptionTabV3() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabV3* PythonQtWrapper_QStyleOptionTabV3::new_QStyleOptionTabV3()
{ 
return new PythonQtShell_QStyleOptionTabV3(); }



PythonQtShell_QStyleOptionTabWidgetFrame::~PythonQtShell_QStyleOptionTabWidgetFrame() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabWidgetFrame* PythonQtWrapper_QStyleOptionTabWidgetFrame::new_QStyleOptionTabWidgetFrame()
{ 
return new PythonQtShell_QStyleOptionTabWidgetFrame(); }

QStyleOptionTabWidgetFrame* PythonQtWrapper_QStyleOptionTabWidgetFrame::new_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other)
{ 
return new PythonQtShell_QStyleOptionTabWidgetFrame(other); }



PythonQtShell_QStyleOptionTabWidgetFrameV2::~PythonQtShell_QStyleOptionTabWidgetFrameV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabWidgetFrameV2* PythonQtWrapper_QStyleOptionTabWidgetFrameV2::new_QStyleOptionTabWidgetFrameV2()
{ 
return new PythonQtShell_QStyleOptionTabWidgetFrameV2(); }



PythonQtShell_QStyleOptionTitleBar::~PythonQtShell_QStyleOptionTitleBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTitleBar* PythonQtWrapper_QStyleOptionTitleBar::new_QStyleOptionTitleBar()
{ 
return new PythonQtShell_QStyleOptionTitleBar(); }

QStyleOptionTitleBar* PythonQtWrapper_QStyleOptionTitleBar::new_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other)
{ 
return new PythonQtShell_QStyleOptionTitleBar(other); }



PythonQtShell_QStyleOptionToolBar::~PythonQtShell_QStyleOptionToolBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionToolBar* PythonQtWrapper_QStyleOptionToolBar::new_QStyleOptionToolBar()
{ 
return new PythonQtShell_QStyleOptionToolBar(); }

QStyleOptionToolBar* PythonQtWrapper_QStyleOptionToolBar::new_QStyleOptionToolBar(const QStyleOptionToolBar&  other)
{ 
return new PythonQtShell_QStyleOptionToolBar(other); }



PythonQtShell_QStyleOptionToolBox::~PythonQtShell_QStyleOptionToolBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionToolBox* PythonQtWrapper_QStyleOptionToolBox::new_QStyleOptionToolBox()
{ 
return new PythonQtShell_QStyleOptionToolBox(); }

QStyleOptionToolBox* PythonQtWrapper_QStyleOptionToolBox::new_QStyleOptionToolBox(const QStyleOptionToolBox&  other)
{ 
return new PythonQtShell_QStyleOptionToolBox(other); }



PythonQtShell_QStyleOptionToolBoxV2::~PythonQtShell_QStyleOptionToolBoxV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionToolBoxV2* PythonQtWrapper_QStyleOptionToolBoxV2::new_QStyleOptionToolBoxV2()
{ 
return new PythonQtShell_QStyleOptionToolBoxV2(); }


