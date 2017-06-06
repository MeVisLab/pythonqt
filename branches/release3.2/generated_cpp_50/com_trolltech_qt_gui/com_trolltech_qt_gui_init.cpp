#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_gui0.h"
#include "com_trolltech_qt_gui1.h"
#include "com_trolltech_qt_gui2.h"
#include "com_trolltech_qt_gui3.h"
#include "com_trolltech_qt_gui4.h"
#include "com_trolltech_qt_gui5.h"
#include "com_trolltech_qt_gui6.h"
#include "com_trolltech_qt_gui7.h"
#include "com_trolltech_qt_gui8.h"
#include "com_trolltech_qt_gui9.h"
#include "com_trolltech_qt_gui10.h"
#include "com_trolltech_qt_gui11.h"

static void* polymorphichandler_QEvent(const void *ptr, const char **class_name)
{
    Q_ASSERT(ptr != 0);
    QEvent *object = (QEvent *)ptr;
    if (object->type() == QEvent::ActionAdded || object->type() == QEvent::ActionRemoved || object->type() == QEvent::ActionChanged) {
        *class_name = "QActionEvent";
        return (QActionEvent*)object;
    }
    if (object->type() == QEvent::Close) {
        *class_name = "QCloseEvent";
        return (QCloseEvent*)object;
    }
    if (object->type() == QEvent::ContextMenu) {
        *class_name = "QContextMenuEvent";
        return (QContextMenuEvent*)object;
    }
    if (object->type() == QEvent::DragEnter) {
        *class_name = "QDragEnterEvent";
        return (QDragEnterEvent*)object;
    }
    if (object->type() == QEvent::DragLeave) {
        *class_name = "QDragLeaveEvent";
        return (QDragLeaveEvent*)object;
    }
    if (object->type() == QEvent::DragMove) {
        *class_name = "QDragMoveEvent";
        return (QDragMoveEvent*)object;
    }
    if (object->type() == QEvent::Drop) {
        *class_name = "QDropEvent";
        return (QDropEvent*)object;
    }
    if (object->type() == QEvent::Enter) {
        *class_name = "QEnterEvent";
        return (QEnterEvent*)object;
    }
    if (object->type() == QEvent::Expose) {
        *class_name = "QExposeEvent";
        return (QExposeEvent*)object;
    }
    if (object->type() == QEvent::FileOpen) {
        *class_name = "QFileOpenEvent";
        return (QFileOpenEvent*)object;
    }
    if (object->type() == QEvent::FocusIn || object->type() == QEvent::FocusOut) {
        *class_name = "QFocusEvent";
        return (QFocusEvent*)object;
    }
    if (object->type() == QEvent::Gesture || object->type() == QEvent::GestureOverride) {
        *class_name = "QGestureEvent";
        return (QGestureEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneContextMenu) {
        *class_name = "QGraphicsSceneContextMenuEvent";
        return (QGraphicsSceneContextMenuEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneDragEnter || object->type() == QEvent::GraphicsSceneDragLeave || object->type() == QEvent::GraphicsSceneDragMove || object->type() == QEvent::GraphicsSceneDrop) {
        *class_name = "QGraphicsSceneDragDropEvent";
        return (QGraphicsSceneDragDropEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneHelp) {
        *class_name = "QGraphicsSceneHelpEvent";
        return (QGraphicsSceneHelpEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneHoverEnter || object->type() == QEvent::GraphicsSceneHoverLeave || object->type() == QEvent::GraphicsSceneHoverMove) {
        *class_name = "QGraphicsSceneHoverEvent";
        return (QGraphicsSceneHoverEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneMouseDoubleClick || object->type() == QEvent::GraphicsSceneMouseMove || object->type() == QEvent::GraphicsSceneMousePress || object->type() == QEvent::GraphicsSceneMouseRelease) {
        *class_name = "QGraphicsSceneMouseEvent";
        return (QGraphicsSceneMouseEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneMove) {
        *class_name = "QGraphicsSceneMoveEvent";
        return (QGraphicsSceneMoveEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneResize) {
        *class_name = "QGraphicsSceneResizeEvent";
        return (QGraphicsSceneResizeEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneWheel) {
        *class_name = "QGraphicsSceneWheelEvent";
        return (QGraphicsSceneWheelEvent*)object;
    }
    if (object->type() == QEvent::ToolTip || object->type() == QEvent::WhatsThis) {
        *class_name = "QHelpEvent";
        return (QHelpEvent*)object;
    }
    if (object->type() == QEvent::Hide) {
        *class_name = "QHideEvent";
        return (QHideEvent*)object;
    }
    if (object->type() == QEvent::HoverEnter || object->type() == QEvent::HoverLeave || object->type() == QEvent::HoverMove) {
        *class_name = "QHoverEvent";
        return (QHoverEvent*)object;
    }
    if (object->type() == QEvent::IconDrag) {
        *class_name = "QIconDragEvent";
        return (QIconDragEvent*)object;
    }
    if (object->type() == QEvent::InputMethod) {
        *class_name = "QInputMethodEvent";
        return (QInputMethodEvent*)object;
    }
    if (object->type() == QEvent::InputMethodQuery) {
        *class_name = "QInputMethodQueryEvent";
        return (QInputMethodQueryEvent*)object;
    }
    if (object->type() == QEvent::KeyPress || object->type() == QEvent::KeyRelease) {
        *class_name = "QKeyEvent";
        return (QKeyEvent*)object;
    }
    if (object->type() == QEvent::MouseButtonDblClick || object->type() == QEvent::MouseButtonPress || object->type() == QEvent::MouseButtonRelease || object->type() == QEvent::MouseMove) {
        *class_name = "QMouseEvent";
        return (QMouseEvent*)object;
    }
    if (object->type() == QEvent::Move) {
        *class_name = "QMoveEvent";
        return (QMoveEvent*)object;
    }
    if (object->type() == QEvent::Paint) {
        *class_name = "QPaintEvent";
        return (QPaintEvent*)object;
    }
    if (object->type() == QEvent::Resize) {
        *class_name = "QResizeEvent";
        return (QResizeEvent*)object;
    }
    if (object->type() == QEvent::Scroll) {
        *class_name = "QScrollEvent";
        return (QScrollEvent*)object;
    }
    if (object->type() == QEvent::ScrollPrepare) {
        *class_name = "QScrollPrepareEvent";
        return (QScrollPrepareEvent*)object;
    }
    if (object->type() == QEvent::Shortcut) {
        *class_name = "QShortcutEvent";
        return (QShortcutEvent*)object;
    }
    if (object->type() == QEvent::Show) {
        *class_name = "QShowEvent";
        return (QShowEvent*)object;
    }
    if (object->type() == QEvent::StatusTip) {
        *class_name = "QStatusTipEvent";
        return (QStatusTipEvent*)object;
    }
    if (object->type() == QEvent::TabletMove || object->type() == QEvent::TabletPress || object->type() == QEvent::TabletRelease) {
        *class_name = "QTabletEvent";
        return (QTabletEvent*)object;
    }
    if (object->type() == QEvent::ToolBarChange) {
        *class_name = "QToolBarChangeEvent";
        return (QToolBarChangeEvent*)object;
    }
    if (object->type() == QEvent::TouchBegin || object->type() == QEvent::TouchUpdate || object->type() == QEvent::TouchEnd) {
        *class_name = "QTouchEvent";
        return (QTouchEvent*)object;
    }
    if (object->type() == QEvent::WhatsThisClicked) {
        *class_name = "QWhatsThisClickedEvent";
        return (QWhatsThisClickedEvent*)object;
    }
    if (object->type() == QEvent::Wheel) {
        *class_name = "QWheelEvent";
        return (QWheelEvent*)object;
    }
    if (object->type() == QEvent::WindowStateChange) {
        *class_name = "QWindowStateChangeEvent";
        return (QWindowStateChangeEvent*)object;
    }
    return NULL;
}
static void* polymorphichandler_QGradient(const void *ptr, const char **class_name)
{
    Q_ASSERT(ptr != 0);
    QGradient *object = (QGradient *)ptr;
    if (object->type() == QGradient::ConicalGradient) {
        *class_name = "QConicalGradient";
        return (QConicalGradient*)object;
    }
    if (object->type() == QGradient::NoGradient) {
        *class_name = "QGradient";
        return (QGradient*)object;
    }
    if (object->type() == QGradient::LinearGradient) {
        *class_name = "QLinearGradient";
        return (QLinearGradient*)object;
    }
    if (object->type() == QGradient::RadialGradient) {
        *class_name = "QRadialGradient";
        return (QRadialGradient*)object;
    }
    return NULL;
}
static void* polymorphichandler_QGraphicsItem(const void *ptr, const char **class_name)
{
    Q_ASSERT(ptr != 0);
    QGraphicsItem *object = (QGraphicsItem *)ptr;
    if (object->type() == QGraphicsEllipseItem::Type) {
        *class_name = "QGraphicsEllipseItem";
        return (QGraphicsEllipseItem*)object;
    }
    if (object->type() == QGraphicsItemGroup::Type) {
        *class_name = "QGraphicsItemGroup";
        return (QGraphicsItemGroup*)object;
    }
    if (object->type() == QGraphicsLineItem::Type) {
        *class_name = "QGraphicsLineItem";
        return (QGraphicsLineItem*)object;
    }
    if (object->type() == QGraphicsPathItem::Type) {
        *class_name = "QGraphicsPathItem";
        return (QGraphicsPathItem*)object;
    }
    if (object->type() == QGraphicsPixmapItem::Type) {
        *class_name = "QGraphicsPixmapItem";
        return (QGraphicsPixmapItem*)object;
    }
    if (object->type() == QGraphicsPolygonItem::Type) {
        *class_name = "QGraphicsPolygonItem";
        return (QGraphicsPolygonItem*)object;
    }
    if (object->type() == QGraphicsRectItem::Type) {
        *class_name = "QGraphicsRectItem";
        return (QGraphicsRectItem*)object;
    }
    if (object->type() == QGraphicsSimpleTextItem::Type) {
        *class_name = "QGraphicsSimpleTextItem";
        return (QGraphicsSimpleTextItem*)object;
    }
    if (object->type() == QGraphicsTextItem::Type) {
        *class_name = "QGraphicsTextItem";
        return (QGraphicsTextItem*)object;
    }
    if (object->isWidget()) {
        *class_name = "QGraphicsWidget";
        return (QGraphicsWidget*)object;
    }
    return NULL;
}
static void* polymorphichandler_QStyleOption(const void *ptr, const char **class_name)
{
    Q_ASSERT(ptr != 0);
    QStyleOption *object = (QStyleOption *)ptr;
    if (object->type == QStyleOption::SO_Default) {
        *class_name = "QStyleOption";
        return (QStyleOption*)object;
    }
    if (object->type == QStyleOptionButton::Type && object->version == QStyleOptionButton::Version) {
        *class_name = "QStyleOptionButton";
        return (QStyleOptionButton*)object;
    }
    if (object->type == QStyleOptionComboBox::Type && object->version == QStyleOptionComboBox::Version) {
        *class_name = "QStyleOptionComboBox";
        return (QStyleOptionComboBox*)object;
    }
    if (object->type == QStyleOptionDockWidget::Type && object->version == QStyleOptionDockWidget::Version) {
        *class_name = "QStyleOptionDockWidget";
        return (QStyleOptionDockWidget*)object;
    }
    if (object->type == QStyleOptionDockWidgetV2::Type && object->version == QStyleOptionDockWidgetV2::Version) {
        *class_name = "QStyleOptionDockWidgetV2";
        return (QStyleOptionDockWidgetV2*)object;
    }
    if (object->type == QStyleOptionFocusRect::Type && object->version == QStyleOptionFocusRect::Version) {
        *class_name = "QStyleOptionFocusRect";
        return (QStyleOptionFocusRect*)object;
    }
    if (object->type == QStyleOptionFrame::Type && object->version == QStyleOptionFrame::Version) {
        *class_name = "QStyleOptionFrame";
        return (QStyleOptionFrame*)object;
    }
    if (object->type == QStyleOptionFrameV2::Type && object->version == QStyleOptionFrameV2::Version) {
        *class_name = "QStyleOptionFrameV2";
        return (QStyleOptionFrameV2*)object;
    }
    if (object->type == QStyleOptionFrameV3::Type && object->version == QStyleOptionFrameV3::Version) {
        *class_name = "QStyleOptionFrameV3";
        return (QStyleOptionFrameV3*)object;
    }
    if (object->type == QStyleOptionGraphicsItem::Type && object->version == QStyleOptionGraphicsItem::Version) {
        *class_name = "QStyleOptionGraphicsItem";
        return (QStyleOptionGraphicsItem*)object;
    }
    if (object->type == QStyleOptionGroupBox::Type && object->version == QStyleOptionGroupBox::Version) {
        *class_name = "QStyleOptionGroupBox";
        return (QStyleOptionGroupBox*)object;
    }
    if (object->type == QStyleOptionHeader::Type && object->version == QStyleOptionHeader::Version) {
        *class_name = "QStyleOptionHeader";
        return (QStyleOptionHeader*)object;
    }
    if (object->type == QStyleOptionMenuItem::Type && object->version == QStyleOptionMenuItem::Version) {
        *class_name = "QStyleOptionMenuItem";
        return (QStyleOptionMenuItem*)object;
    }
    if (object->type == QStyleOptionProgressBar::Type && object->version == QStyleOptionProgressBar::Version) {
        *class_name = "QStyleOptionProgressBar";
        return (QStyleOptionProgressBar*)object;
    }
    if (object->type == QStyleOptionProgressBarV2::Type && object->version == QStyleOptionProgressBarV2::Version) {
        *class_name = "QStyleOptionProgressBarV2";
        return (QStyleOptionProgressBarV2*)object;
    }
    if (object->type == QStyleOptionRubberBand::Type && object->version == QStyleOptionRubberBand::Version) {
        *class_name = "QStyleOptionRubberBand";
        return (QStyleOptionRubberBand*)object;
    }
    if (object->type == QStyleOptionSizeGrip::Type && object->version == QStyleOptionSizeGrip::Version) {
        *class_name = "QStyleOptionSizeGrip";
        return (QStyleOptionSizeGrip*)object;
    }
    if (object->type == QStyleOptionSlider::Type && object->version == QStyleOptionSlider::Version) {
        *class_name = "QStyleOptionSlider";
        return (QStyleOptionSlider*)object;
    }
    if (object->type == QStyleOptionSpinBox::Type && object->version == QStyleOptionSpinBox::Version) {
        *class_name = "QStyleOptionSpinBox";
        return (QStyleOptionSpinBox*)object;
    }
    if (object->type == QStyleOptionTab::Type && object->version == QStyleOptionTab::Version) {
        *class_name = "QStyleOptionTab";
        return (QStyleOptionTab*)object;
    }
    if (object->type == QStyleOptionTabBarBase::Type && object->version == QStyleOptionTabBarBase::Version) {
        *class_name = "QStyleOptionTabBarBase";
        return (QStyleOptionTabBarBase*)object;
    }
    if (object->type == QStyleOptionTabBarBaseV2::Type && object->version == QStyleOptionTabBarBaseV2::Version) {
        *class_name = "QStyleOptionTabBarBaseV2";
        return (QStyleOptionTabBarBaseV2*)object;
    }
    if (object->type == QStyleOptionTabV2::Type && object->version == QStyleOptionTabV2::Version) {
        *class_name = "QStyleOptionTabV2";
        return (QStyleOptionTabV2*)object;
    }
    if (object->type == QStyleOptionTabV3::Type && object->version == QStyleOptionTabV3::Version) {
        *class_name = "QStyleOptionTabV3";
        return (QStyleOptionTabV3*)object;
    }
    if (object->type == QStyleOptionTabWidgetFrame::Type && object->version == QStyleOptionTabWidgetFrame::Version) {
        *class_name = "QStyleOptionTabWidgetFrame";
        return (QStyleOptionTabWidgetFrame*)object;
    }
    if (object->type == QStyleOptionTabWidgetFrameV2::Type && object->version == QStyleOptionTabWidgetFrameV2::Version) {
        *class_name = "QStyleOptionTabWidgetFrameV2";
        return (QStyleOptionTabWidgetFrameV2*)object;
    }
    if (object->type == QStyleOptionTitleBar::Type && object->version == QStyleOptionTitleBar::Version) {
        *class_name = "QStyleOptionTitleBar";
        return (QStyleOptionTitleBar*)object;
    }
    if (object->type == QStyleOptionToolBar::Type && object->version == QStyleOptionToolBar::Version) {
        *class_name = "QStyleOptionToolBar";
        return (QStyleOptionToolBar*)object;
    }
    if (object->type == QStyleOptionToolBox::Type && object->version == QStyleOptionToolBox::Version) {
        *class_name = "QStyleOptionToolBox";
        return (QStyleOptionToolBox*)object;
    }
    if (object->type == QStyleOptionToolBoxV2::Type && object->version == QStyleOptionToolBoxV2::Version) {
        *class_name = "QStyleOptionToolBoxV2";
        return (QStyleOptionToolBoxV2*)object;
    }
    if (object->type == QStyleOptionToolButton::Type && object->version == QStyleOptionToolButton::Version) {
        *class_name = "QStyleOptionToolButton";
        return (QStyleOptionToolButton*)object;
    }
    if (object->type == QStyleOptionViewItem::Type && object->version == QStyleOptionViewItem::Version) {
        *class_name = "QStyleOptionViewItem";
        return (QStyleOptionViewItem*)object;
    }
    if (object->type == QStyleOptionViewItemV2::Type && object->version == QStyleOptionViewItemV2::Version) {
        *class_name = "QStyleOptionViewItemV2";
        return (QStyleOptionViewItemV2*)object;
    }
    if (object->type == QStyleOptionViewItemV3::Type && object->version == QStyleOptionViewItemV3::Version) {
        *class_name = "QStyleOptionViewItemV3";
        return (QStyleOptionViewItemV3*)object;
    }
    if (object->type == QStyleOptionViewItemV4::Type && object->version == QStyleOptionViewItemV4::Version) {
        *class_name = "QStyleOptionViewItemV4";
        return (QStyleOptionViewItemV4*)object;
    }
    return NULL;
}


void PythonQt_init_QtGui(PyObject* module) {
PythonQt::priv()->registerClass(&QAbstractButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractButton>, module, 0);
PythonQt::priv()->registerCPPClass("QAbstractGraphicsShapeItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractGraphicsShapeItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractGraphicsShapeItem>, module, 0);
PythonQt::self()->addParentClass("QAbstractGraphicsShapeItem", "QGraphicsItem",PythonQtUpcastingOffset<QAbstractGraphicsShapeItem,QGraphicsItem>());
PythonQt::priv()->registerClass(&QAbstractItemDelegate::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractItemDelegate>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractItemDelegate>, module, 0);
PythonQt::priv()->registerClass(&QAbstractItemView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractItemView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractItemView>, module, 0);
PythonQt::priv()->registerClass(&QAbstractPrintDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractPrintDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractPrintDialog>, module, 0);
PythonQt::priv()->registerClass(&QAbstractProxyModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractProxyModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractProxyModel>, module, 0);
PythonQt::priv()->registerClass(&QAbstractScrollArea::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractScrollArea>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractScrollArea>, module, 0);
PythonQt::priv()->registerClass(&QAbstractSlider::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractSlider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractSlider>, module, 0);
PythonQt::priv()->registerClass(&QAbstractSpinBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractSpinBox>, module, 0);
PythonQt::priv()->registerClass(&QAbstractTableModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractTableModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTableModel>, module, 0);
PythonQt::priv()->registerClass(&QAbstractTextDocumentLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractTextDocumentLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTextDocumentLayout>, module, 0);
PythonQt::priv()->registerCPPClass("QAbstractTextDocumentLayout::PaintContext", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractTextDocumentLayout__PaintContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTextDocumentLayout__PaintContext>, module, 0);
PythonQt::priv()->registerCPPClass("QAbstractTextDocumentLayout::Selection", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractTextDocumentLayout__Selection>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTextDocumentLayout__Selection>, module, 0);
PythonQt::priv()->registerCPPClass("QAccessibleEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleEvent>, module, 0);
PythonQt::priv()->registerClass(&QAction::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAction>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAction>, module, 0);
PythonQt::priv()->registerCPPClass("QActionEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QActionEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QActionGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QActionGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QActionGroup>, module, 0);
PythonQt::priv()->registerClass(&QApplication::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QApplication>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QBackingStore", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBackingStore>, NULL, module, 0);
PythonQt::priv()->registerClass(&QBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBoxLayout>, module, 0);
PythonQt::priv()->registerClass(&QButtonGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QButtonGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QButtonGroup>, module, 0);
PythonQt::priv()->registerClass(&QCalendarWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCalendarWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCalendarWidget>, module, 0);
PythonQt::priv()->registerClass(&QCheckBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCheckBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCheckBox>, module, 0);
PythonQt::priv()->registerClass(&QClipboard::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QClipboard>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QCloseEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QCloseEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QColorDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QColorDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QColorDialog>, module, 0);
PythonQt::priv()->registerClass(&QColumnView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QColumnView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QColumnView>, module, 0);
PythonQt::priv()->registerClass(&QComboBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QComboBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QComboBox>, module, 0);
PythonQt::priv()->registerClass(&QCommandLinkButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCommandLinkButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCommandLinkButton>, module, 0);
PythonQt::priv()->registerClass(&QCommonStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCommonStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCommonStyle>, module, 0);
PythonQt::priv()->registerClass(&QCompleter::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCompleter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCompleter>, module, 0);
PythonQt::priv()->registerCPPClass("QConicalGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QConicalGradient>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QContextMenuEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QContextMenuEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QContextMenuEvent>, module, 0);
PythonQt::priv()->registerClass(&QDataWidgetMapper::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDataWidgetMapper>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDataWidgetMapper>, module, 0);
PythonQt::priv()->registerClass(&QDateEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDateEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDateEdit>, module, 0);
PythonQt::priv()->registerClass(&QDateTimeEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDateTimeEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDateTimeEdit>, module, 0);
PythonQt::priv()->registerCPPClass("QDesktopServices", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDesktopServices>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDesktopServices>, module, 0);
PythonQt::priv()->registerClass(&QDesktopWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDesktopWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDesktopWidget>, module, 0);
PythonQt::priv()->registerClass(&QDial::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDial>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDial>, module, 0);
PythonQt::priv()->registerClass(&QDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDialog>, module, 0);
PythonQt::priv()->registerClass(&QDialogButtonBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDialogButtonBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDialogButtonBox>, module, 0);
PythonQt::priv()->registerClass(&QDirModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDirModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDirModel>, module, 0);
PythonQt::priv()->registerClass(&QDockWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDockWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDockWidget>, module, 0);
PythonQt::priv()->registerClass(&QDoubleSpinBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDoubleSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDoubleSpinBox>, module, 0);
PythonQt::priv()->registerClass(&QDoubleValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDoubleValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDoubleValidator>, module, 0);
PythonQt::priv()->registerClass(&QDrag::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDrag>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDrag>, module, 0);
PythonQt::priv()->registerCPPClass("QDragEnterEvent", "QDragMoveEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragEnterEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDragLeaveEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragLeaveEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDragMoveEvent", "QDropEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragMoveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDragMoveEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QDropEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDropEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDropEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QEnterEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QEnterEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEnterEvent>, module, 0);
PythonQt::priv()->registerClass(&QErrorMessage::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QErrorMessage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QErrorMessage>, module, 0);
PythonQt::priv()->registerCPPClass("QExposeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QExposeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QExposeEvent>, module, 0);
PythonQt::priv()->registerClass(&QFileDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileDialog>, module, 0);
PythonQt::priv()->registerCPPClass("QFileIconProvider", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileIconProvider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileIconProvider>, module, 0);
PythonQt::priv()->registerCPPClass("QFileOpenEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileOpenEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QFileSystemModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileSystemModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileSystemModel>, module, 0);
PythonQt::priv()->registerCPPClass("QFocusEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFocusEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QFocusFrame::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFocusFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFocusFrame>, module, 0);
PythonQt::priv()->registerClass(&QFontComboBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontComboBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFontComboBox>, module, 0);
PythonQt::priv()->registerCPPClass("QFontDatabase", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontDatabase>, NULL, module, 0);
PythonQt::priv()->registerClass(&QFontDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFontDialog>, module, 0);
PythonQt::priv()->registerCPPClass("QFontInfo", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontInfo>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QFontMetrics", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontMetrics>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QFontMetricsF", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontMetricsF>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QFormLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFormLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFormLayout>, module, 0);
PythonQt::priv()->registerClass(&QFrame::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFrame>, module, 0);
PythonQt::priv()->registerClass(&QGesture::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGesture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGesture>, module, 0);
PythonQt::priv()->registerCPPClass("QGestureEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGestureEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGestureRecognizer", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGestureRecognizer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGestureRecognizer>, module, 0);
PythonQt::priv()->registerCPPClass("QGlyphRun", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGlyphRun>, NULL, module, PythonQt::Type_Add|PythonQt::Type_InplaceAdd|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QGradient", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGradient>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QGraphicsAnchor::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsAnchor>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsAnchorLayout", "QGraphicsLayout", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsAnchorLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsAnchorLayout>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsBlurEffect::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsBlurEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsBlurEffect>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsColorizeEffect::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsColorizeEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsColorizeEffect>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsDropShadowEffect::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsDropShadowEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsDropShadowEffect>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsEffect::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsEffect>, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsEllipseItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsEllipseItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsEllipseItem>, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsGridLayout", "QGraphicsLayout", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsGridLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsGridLayout>, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsItem>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsItemAnimation::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsItemAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsItemAnimation>, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsItemGroup", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsItemGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsItemGroup>, module, 0);
PythonQt::self()->addParentClass("QGraphicsItemGroup", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsItemGroup,QGraphicsItem>());
PythonQt::priv()->registerCPPClass("QGraphicsLayout", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLayout>, module, 0);
PythonQt::self()->addParentClass("QGraphicsLayout", "QGraphicsLayoutItem",PythonQtUpcastingOffset<QGraphicsLayout,QGraphicsLayoutItem>());
PythonQt::priv()->registerCPPClass("QGraphicsLayoutItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLayoutItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLayoutItem>, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsLineItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLineItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLineItem>, module, 0);
PythonQt::self()->addParentClass("QGraphicsLineItem", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsLineItem,QGraphicsItem>());
PythonQt::priv()->registerCPPClass("QGraphicsLinearLayout", "QGraphicsLayout", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLinearLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLinearLayout>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsObject::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsObject>, module, 0);
PythonQt::self()->addParentClass("QGraphicsObject", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsObject,QGraphicsItem>());
PythonQt::priv()->registerClass(&QGraphicsOpacityEffect::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsOpacityEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsOpacityEffect>, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsPathItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsPathItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsPathItem>, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsPixmapItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsPixmapItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsPixmapItem>, module, 0);
PythonQt::self()->addParentClass("QGraphicsPixmapItem", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsPixmapItem,QGraphicsItem>());
PythonQt::priv()->registerCPPClass("QGraphicsPolygonItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsPolygonItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsPolygonItem>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsProxyWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsProxyWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsProxyWidget>, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsRectItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsRectItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsRectItem>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsRotation::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsRotation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsRotation>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsScale::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsScale>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsScale>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsScene::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsScene>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsScene>, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsSceneContextMenuEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneContextMenuEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsSceneDragDropEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneDragDropEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsSceneEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsSceneHelpEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneHelpEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsSceneHoverEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneHoverEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsSceneMouseEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneMouseEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsSceneMoveEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneMoveEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsSceneResizeEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneResizeEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsSceneWheelEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneWheelEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGraphicsSimpleTextItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSimpleTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsSimpleTextItem>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsTextItem::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsTextItem>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsTransform::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsTransform>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsTransform>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsView>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsWidget>, module, 0);
PythonQt::self()->addParentClass("QGraphicsWidget", "QGraphicsLayoutItem",PythonQtUpcastingOffset<QGraphicsWidget,QGraphicsLayoutItem>());
PythonQt::priv()->registerClass(&QGridLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGridLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGridLayout>, module, 0);
PythonQt::priv()->registerClass(&QGroupBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGroupBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGroupBox>, module, 0);
PythonQt::priv()->registerClass(&QGuiApplication::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGuiApplication>, NULL, module, 0);
PythonQt::priv()->registerClass(&QHBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QHBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHBoxLayout>, module, 0);
PythonQt::priv()->registerClass(&QHeaderView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QHeaderView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHeaderView>, module, 0);
PythonQt::priv()->registerCPPClass("QHelpEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHelpEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QHideEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHideEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QHoverEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHoverEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHoverEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QIconDragEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconDragEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QIconEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIconEngine>, module, 0);
PythonQt::priv()->registerCPPClass("QImageIOHandler", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageIOHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImageIOHandler>, module, 0);
PythonQt::priv()->registerClass(&QImageIOPlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageIOPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImageIOPlugin>, module, 0);
PythonQt::priv()->registerCPPClass("QImageReader", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageReader>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QImageWriter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageWriter>, NULL, module, 0);
PythonQt::priv()->registerClass(&QInputDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputDialog>, module, 0);
PythonQt::priv()->registerCPPClass("QInputEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputEvent>, module, 0);
PythonQt::priv()->registerClass(&QInputMethod::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethod>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QInputMethodEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethodEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QInputMethodEvent::Attribute", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethodEvent__Attribute>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputMethodEvent__Attribute>, module, 0);
PythonQt::priv()->registerCPPClass("QInputMethodQueryEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethodQueryEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QIntValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QIntValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIntValidator>, module, 0);
PythonQt::priv()->registerClass(&QItemDelegate::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemDelegate>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemDelegate>, module, 0);
PythonQt::priv()->registerCPPClass("QItemEditorCreatorBase", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemEditorCreatorBase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemEditorCreatorBase>, module, 0);
PythonQt::priv()->registerCPPClass("QItemEditorFactory", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemEditorFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemEditorFactory>, module, 0);
PythonQt::priv()->registerCPPClass("QItemSelection", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemSelection>, NULL, module, PythonQt::Type_Add|PythonQt::Type_InplaceAdd|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QItemSelectionModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemSelectionModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemSelectionModel>, module, 0);
PythonQt::priv()->registerCPPClass("QItemSelectionRange", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemSelectionRange>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QKeyEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeyEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QKeyEvent>, module, 0);
PythonQt::priv()->registerClass(&QKeyEventTransition::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeyEventTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QKeyEventTransition>, module, 0);
PythonQt::priv()->registerClass(&QLCDNumber::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLCDNumber>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLCDNumber>, module, 0);
PythonQt::priv()->registerClass(&QLabel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLabel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLabel>, module, 0);
PythonQt::priv()->registerClass(&QLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLayout>, module, 0);
PythonQt::self()->addParentClass("QLayout", "QLayoutItem",PythonQtUpcastingOffset<QLayout,QLayoutItem>());
PythonQt::priv()->registerCPPClass("QLayoutItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QLayoutItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLayoutItem>, module, 0);
PythonQt::priv()->registerClass(&QLineEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLineEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLineEdit>, module, 0);
PythonQt::priv()->registerCPPClass("QLinearGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QLinearGradient>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QListView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QListView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QListView>, module, 0);
PythonQt::priv()->registerClass(&QListWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QListWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QListWidget>, module, 0);
PythonQt::priv()->registerCPPClass("QListWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QListWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QListWidgetItem>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QMainWindow::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMainWindow>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMainWindow>, module, 0);
PythonQt::priv()->registerCPPClass("QMargins", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMargins>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMatrix4x4", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMatrix4x4>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerClass(&QMdiArea::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMdiArea>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMdiArea>, module, 0);
PythonQt::priv()->registerClass(&QMdiSubWindow::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMdiSubWindow>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMdiSubWindow>, module, 0);
PythonQt::priv()->registerClass(&QMenu::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMenu>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMenu>, module, 0);
PythonQt::priv()->registerClass(&QMenuBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMenuBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMenuBar>, module, 0);
PythonQt::priv()->registerClass(&QMessageBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMessageBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMessageBox>, module, 0);
PythonQt::priv()->registerCPPClass("QMouseEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMouseEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMouseEvent>, module, 0);
PythonQt::priv()->registerClass(&QMouseEventTransition::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMouseEventTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMouseEventTransition>, module, 0);
PythonQt::priv()->registerCPPClass("QMoveEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMoveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMoveEvent>, module, 0);
PythonQt::priv()->registerClass(&QMovie::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMovie>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMovie>, module, 0);
PythonQt::priv()->registerCPPClass("QOpenGLBuffer", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QOpenGLBuffer>, NULL, module, 0);
PythonQt::priv()->registerClass(&QOpenGLContext::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QOpenGLContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QOpenGLContext>, module, 0);
PythonQt::priv()->registerClass(&QOpenGLContextGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QOpenGLContextGroup>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QOpenGLFramebufferObject", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QOpenGLFramebufferObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QOpenGLFramebufferObject>, module, 0);
PythonQt::priv()->registerCPPClass("QOpenGLFramebufferObjectFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QOpenGLFramebufferObjectFormat>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QOpenGLFunctions", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QOpenGLFunctions>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QOpenGLPaintDevice", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QOpenGLPaintDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QOpenGLPaintDevice>, module, 0);
PythonQt::self()->addParentClass("QOpenGLPaintDevice", "QPaintDevice",PythonQtUpcastingOffset<QOpenGLPaintDevice,QPaintDevice>());
PythonQt::priv()->registerClass(&QOpenGLShader::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QOpenGLShader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QOpenGLShader>, module, 0);
PythonQt::priv()->registerClass(&QOpenGLShaderProgram::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QOpenGLShaderProgram>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QOpenGLShaderProgram>, module, 0);
PythonQt::priv()->registerClass(&QPageSetupDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPageSetupDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPageSetupDialog>, module, 0);
PythonQt::priv()->registerCPPClass("QPagedPaintDevice", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPagedPaintDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPagedPaintDevice>, module, 0);
PythonQt::self()->addParentClass("QPagedPaintDevice", "QPaintDevice",PythonQtUpcastingOffset<QPagedPaintDevice,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QPagedPaintDevice::Margins", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPagedPaintDevice__Margins>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPagedPaintDevice__Margins>, module, 0);
PythonQt::priv()->registerCPPClass("QPaintDevice", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintDevice>, module, 0);
PythonQt::priv()->registerCPPClass("QPaintEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEngine>, module, 0);
PythonQt::priv()->registerCPPClass("QPaintEngineState", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEngineState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEngineState>, module, 0);
PythonQt::priv()->registerCPPClass("QPaintEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QPainter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainter>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QPainterPath", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPath>, NULL, module, PythonQt::Type_Add|PythonQt::Type_And|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceAnd|PythonQt::Type_InplaceOr|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_Or|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QPainterPathStroker", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPathStroker>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QPainterPath::Element", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPath__Element>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPainterPath__Element>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QPainter::PixmapFragment", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainter__PixmapFragment>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPainter__PixmapFragment>, module, 0);
PythonQt::priv()->registerClass(&QPanGesture::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPanGesture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPanGesture>, module, 0);
PythonQt::priv()->registerClass(&QPdfWriter::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPdfWriter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPdfWriter>, module, 0);
PythonQt::self()->addParentClass("QPdfWriter", "QPagedPaintDevice",PythonQtUpcastingOffset<QPdfWriter,QPagedPaintDevice>());
PythonQt::self()->addParentClass("QPdfWriter", "QPaintDevice",PythonQtUpcastingOffset<QPdfWriter,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QPicture", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPicture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPicture>, module, PythonQt::Type_NonZero);
PythonQt::self()->addParentClass("QPicture", "QPaintDevice",PythonQtUpcastingOffset<QPicture,QPaintDevice>());
PythonQt::priv()->registerClass(&QPictureFormatPlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPictureFormatPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPictureFormatPlugin>, module, 0);
PythonQt::priv()->registerCPPClass("QPictureIO", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPictureIO>, NULL, module, 0);
PythonQt::priv()->registerClass(&QPinchGesture::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPinchGesture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPinchGesture>, module, 0);
PythonQt::priv()->registerCPPClass("QPixmapCache", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPixmapCache>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPixmapCache>, module, 0);
PythonQt::priv()->registerCPPClass("QPixmapCache::Key", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPixmapCache__Key>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QPlainTextDocumentLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPlainTextDocumentLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPlainTextDocumentLayout>, module, 0);
PythonQt::priv()->registerClass(&QPlainTextEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPlainTextEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPlainTextEdit>, module, 0);
PythonQt::priv()->registerCPPClass("QPolygonF", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPolygonF>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Multiply|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QPrintDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintDialog>, module, 0);
PythonQt::priv()->registerCPPClass("QPrintEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintEngine>, module, 0);
PythonQt::priv()->registerClass(&QPrintPreviewDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintPreviewDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintPreviewDialog>, module, 0);
PythonQt::priv()->registerClass(&QPrintPreviewWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintPreviewWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintPreviewWidget>, module, 0);
PythonQt::priv()->registerCPPClass("QPrinter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrinter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrinter>, module, 0);
PythonQt::self()->addParentClass("QPrinter", "QPagedPaintDevice",PythonQtUpcastingOffset<QPrinter,QPagedPaintDevice>());
PythonQt::self()->addParentClass("QPrinter", "QPaintDevice",PythonQtUpcastingOffset<QPrinter,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QPrinterInfo", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrinterInfo>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QProgressBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QProgressBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProgressBar>, module, 0);
PythonQt::priv()->registerClass(&QProgressDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QProgressDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProgressDialog>, module, 0);
PythonQt::priv()->registerClass(&QProxyStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QProxyStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProxyStyle>, module, 0);
PythonQt::priv()->registerClass(&QPushButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPushButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPushButton>, module, 0);
PythonQt::priv()->registerCPPClass("QQuaternion", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QQuaternion>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QRadialGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRadialGradient>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QRadioButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QRadioButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRadioButton>, module, 0);
PythonQt::priv()->registerCPPClass("QRawFont", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRawFont>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QRegExpValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QRegExpValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRegExpValidator>, module, 0);
PythonQt::priv()->registerCPPClass("QResizeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QResizeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QResizeEvent>, module, 0);
PythonQt::priv()->registerClass(&QRubberBand::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QRubberBand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRubberBand>, module, 0);
PythonQt::priv()->registerClass(&QScreen::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QScreen>, NULL, module, 0);
PythonQt::priv()->registerClass(&QScrollArea::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollArea>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScrollArea>, module, 0);
PythonQt::priv()->registerClass(&QScrollBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScrollBar>, module, 0);
PythonQt::priv()->registerCPPClass("QScrollEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QScrollPrepareEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollPrepareEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QScroller::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QScroller>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QScrollerProperties", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollerProperties>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScrollerProperties>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QSessionManager::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSessionManager>, NULL, module, 0);
PythonQt::priv()->registerClass(&QShortcut::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QShortcut>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QShortcut>, module, 0);
PythonQt::priv()->registerCPPClass("QShortcutEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QShortcutEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QShortcutEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QShowEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QShowEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QSizeGrip::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSizeGrip>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSizeGrip>, module, 0);
PythonQt::priv()->registerClass(&QSlider::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSlider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSlider>, module, 0);
PythonQt::priv()->registerClass(&QSortFilterProxyModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSortFilterProxyModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSortFilterProxyModel>, module, 0);
PythonQt::priv()->registerClass(&QSound::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSound>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSound>, module, 0);
PythonQt::priv()->registerCPPClass("QSpacerItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSpacerItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSpacerItem>, module, 0);
PythonQt::self()->addParentClass("QSpacerItem", "QLayoutItem",PythonQtUpcastingOffset<QSpacerItem,QLayoutItem>());
PythonQt::priv()->registerClass(&QSpinBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSpinBox>, module, 0);
PythonQt::priv()->registerClass(&QSplashScreen::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSplashScreen>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSplashScreen>, module, 0);
PythonQt::priv()->registerClass(&QSplitter::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSplitter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSplitter>, module, 0);
PythonQt::priv()->registerClass(&QSplitterHandle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSplitterHandle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSplitterHandle>, module, 0);
PythonQt::priv()->registerClass(&QStackedLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStackedLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStackedLayout>, module, 0);
PythonQt::priv()->registerClass(&QStackedWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStackedWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStackedWidget>, module, 0);
PythonQt::priv()->registerCPPClass("QStandardItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStandardItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStandardItem>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QStandardItemModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStandardItemModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStandardItemModel>, module, 0);
PythonQt::priv()->registerCPPClass("QStaticText", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStaticText>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QStatusBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStatusBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStatusBar>, module, 0);
PythonQt::priv()->registerCPPClass("QStatusTipEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStatusTipEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QStringListModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStringListModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStringListModel>, module, 0);
PythonQt::priv()->registerClass(&QStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyle>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleFactory", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleFactory>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleHintReturn", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturn>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleHintReturnMask", "QStyleHintReturn", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturnMask>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturnMask>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleHintReturnVariant", "QStyleHintReturn", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturnVariant>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturnVariant>, module, 0);
PythonQt::priv()->registerClass(&QStyleHints::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHints>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOption", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOption>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionButton", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionButton>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionComboBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionComboBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionComboBox>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionDockWidget", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionDockWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionDockWidget>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionDockWidgetV2", "QStyleOptionDockWidget", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionDockWidgetV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionDockWidgetV2>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionFocusRect", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFocusRect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFocusRect>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionFrame", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFrame>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionFrameV2", "QStyleOptionFrame", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFrameV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFrameV2>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionFrameV3", "QStyleOptionFrame", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFrameV3>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFrameV3>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionGraphicsItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionGraphicsItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionGraphicsItem>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionGroupBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionGroupBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionGroupBox>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionHeader", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionHeader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionHeader>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionMenuItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionMenuItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionMenuItem>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionProgressBar", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionProgressBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionProgressBar>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionProgressBarV2", "QStyleOptionProgressBar", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionProgressBarV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionProgressBarV2>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionRubberBand", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionRubberBand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionRubberBand>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionSizeGrip", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSizeGrip>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSizeGrip>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionSlider", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSlider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSlider>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionSpinBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSpinBox>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTab", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTab>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTab>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTabBarBase", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabBarBase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabBarBase>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTabBarBaseV2", "QStyleOptionTabBarBase", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabBarBaseV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabBarBaseV2>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTabV2", "QStyleOptionTab", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabV2>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTabV3", "QStyleOptionTab", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabV3>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabV3>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTabWidgetFrame", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabWidgetFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabWidgetFrame>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTabWidgetFrameV2", "QStyleOptionTabWidgetFrame", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabWidgetFrameV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabWidgetFrameV2>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTitleBar", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTitleBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTitleBar>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionToolBar", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBar>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionToolBox", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBox>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionToolBoxV2", "QStyleOptionToolBox", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBoxV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBoxV2>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionToolButton", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolButton>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionViewItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItem>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionViewItemV2", "QStyleOptionViewItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItemV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItemV2>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionViewItemV3", "QStyleOptionViewItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItemV3>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItemV3>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionViewItemV4", "QStyleOptionViewItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItemV4>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItemV4>, module, 0);
PythonQt::priv()->registerCPPClass("QStylePainter", "QPainter", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStylePainter>, NULL, module, 0);
PythonQt::priv()->registerClass(&QStylePlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStylePlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStylePlugin>, module, 0);
PythonQt::priv()->registerClass(&QStyledItemDelegate::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyledItemDelegate>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyledItemDelegate>, module, 0);
PythonQt::priv()->registerCPPClass("QSurface", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSurface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSurface>, module, 0);
PythonQt::priv()->registerCPPClass("QSurfaceFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSurfaceFormat>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QSwipeGesture::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSwipeGesture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSwipeGesture>, module, 0);
PythonQt::priv()->registerClass(&QSyntaxHighlighter::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSyntaxHighlighter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSyntaxHighlighter>, module, 0);
PythonQt::priv()->registerClass(&QSystemTrayIcon::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSystemTrayIcon>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSystemTrayIcon>, module, 0);
PythonQt::priv()->registerClass(&QTabBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabBar>, module, 0);
PythonQt::priv()->registerClass(&QTabWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabWidget>, module, 0);
PythonQt::priv()->registerClass(&QTableView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTableView>, module, 0);
PythonQt::priv()->registerClass(&QTableWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTableWidget>, module, 0);
PythonQt::priv()->registerCPPClass("QTableWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTableWidgetItem>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTableWidgetSelectionRange", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidgetSelectionRange>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTabletEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabletEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabletEvent>, module, 0);
PythonQt::priv()->registerClass(&QTapAndHoldGesture::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTapAndHoldGesture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTapAndHoldGesture>, module, 0);
PythonQt::priv()->registerClass(&QTapGesture::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTapGesture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTapGesture>, module, 0);
PythonQt::priv()->registerCPPClass("QTextBlock", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlock>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextBlockFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockFormat>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QTextBlockGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockGroup>, module, 0);
PythonQt::priv()->registerCPPClass("QTextBlockUserData", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockUserData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockUserData>, module, 0);
PythonQt::priv()->registerClass(&QTextBrowser::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBrowser>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBrowser>, module, 0);
PythonQt::priv()->registerCPPClass("QTextCharFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextCharFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCharFormat>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextCursor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextCursor>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QTextDocument::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextDocument>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextDocument>, module, 0);
PythonQt::priv()->registerCPPClass("QTextDocumentFragment", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextDocumentFragment>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTextDocumentWriter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextDocumentWriter>, NULL, module, 0);
PythonQt::priv()->registerClass(&QTextEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextEdit>, module, 0);
PythonQt::priv()->registerCPPClass("QTextEdit::ExtraSelection", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextEdit__ExtraSelection>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextEdit__ExtraSelection>, module, 0);
PythonQt::priv()->registerCPPClass("QTextFragment", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFragment>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QTextFrame::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextFrame>, module, 0);
PythonQt::priv()->registerCPPClass("QTextFrameFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFrameFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextFrameFormat>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextImageFormat", "QTextCharFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextImageFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextImageFormat>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextInlineObject", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextInlineObject>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTextItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextItem>, module, 0);
PythonQt::priv()->registerCPPClass("QTextLayout", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLayout>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTextLayout::FormatRange", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLayout__FormatRange>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextLayout__FormatRange>, module, 0);
PythonQt::priv()->registerCPPClass("QTextLine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLine>, NULL, module, 0);
PythonQt::priv()->registerClass(&QTextList::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextList>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextList>, module, 0);
PythonQt::priv()->registerCPPClass("QTextListFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextListFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextListFormat>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QTextObject::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextObject>, module, 0);
PythonQt::priv()->registerCPPClass("QTextOption", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextOption>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTextOption::Tab", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextOption__Tab>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextOption__Tab>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QTextTable::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTable>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTable>, module, 0);
PythonQt::priv()->registerCPPClass("QTextTableCell", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableCell>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextTableCellFormat", "QTextCharFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableCellFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTableCellFormat>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextTableFormat", "QTextFrameFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTableFormat>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTileRules", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTileRules>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTileRules>, module, 0);
PythonQt::priv()->registerClass(&QTimeEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTimeEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimeEdit>, module, 0);
PythonQt::priv()->registerClass(&QToolBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QToolBar>, module, 0);
PythonQt::priv()->registerCPPClass("QToolBarChangeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBarChangeEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QToolBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QToolBox>, module, 0);
PythonQt::priv()->registerClass(&QToolButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QToolButton>, module, 0);
PythonQt::priv()->registerCPPClass("QToolTip", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolTip>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTouchDevice", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTouchDevice>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTouchEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTouchEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTouchEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QTouchEvent::TouchPoint", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTouchEvent__TouchPoint>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTransform", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTransform>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerClass(&QTreeView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTreeView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTreeView>, module, 0);
PythonQt::priv()->registerClass(&QTreeWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTreeWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTreeWidget>, module, 0);
PythonQt::priv()->registerCPPClass("QTreeWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTreeWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTreeWidgetItem>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QUndoCommand", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoCommand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoCommand>, module, 0);
PythonQt::priv()->registerClass(&QUndoGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoGroup>, module, 0);
PythonQt::priv()->registerClass(&QUndoStack::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoStack>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoStack>, module, 0);
PythonQt::priv()->registerClass(&QUndoView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoView>, module, 0);
PythonQt::priv()->registerClass(&QVBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QVBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVBoxLayout>, module, 0);
PythonQt::priv()->registerClass(&QValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QValidator>, module, 0);
PythonQt::priv()->registerCPPClass("QVector2D", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QVector2D>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QVector3D", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QVector3D>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QVector4D", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QVector4D>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QWhatsThis", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWhatsThis>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QWhatsThisClickedEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWhatsThisClickedEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QWheelEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWheelEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWheelEvent>, module, 0);
PythonQt::priv()->registerClass(&QWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidget>, module, 0);
PythonQt::self()->addParentClass("QWidget", "QPaintDevice",PythonQtUpcastingOffset<QWidget,QPaintDevice>());
PythonQt::priv()->registerClass(&QWidgetAction::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidgetAction>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidgetAction>, module, 0);
PythonQt::priv()->registerCPPClass("QWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidgetItem>, module, 0);
PythonQt::self()->addParentClass("QWidgetItem", "QLayoutItem",PythonQtUpcastingOffset<QWidgetItem,QLayoutItem>());
PythonQt::priv()->registerClass(&QWindow::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWindow>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWindow>, module, 0);
PythonQt::self()->addParentClass("QWindow", "QSurface",PythonQtUpcastingOffset<QWindow,QSurface>());
PythonQt::priv()->registerCPPClass("QWindowStateChangeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWindowStateChangeEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QWizard::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWizard>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWizard>, module, 0);
PythonQt::priv()->registerClass(&QWizardPage::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWizardPage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWizardPage>, module, 0);

PythonQt::self()->addPolymorphicHandler("QEvent", polymorphichandler_QEvent);
PythonQt::self()->addPolymorphicHandler("QGradient", polymorphichandler_QGradient);
PythonQt::self()->addPolymorphicHandler("QGraphicsItem", polymorphichandler_QGraphicsItem);
PythonQt::self()->addPolymorphicHandler("QStyleOption", polymorphichandler_QStyleOption);

PythonQtMethodInfo::addParameterTypeAlias("QList<QFontDatabase::WritingSystem>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QPagedPaintDevice::PageSize>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QWizard::WizardButton>", "QList<int>");
PythonQtRegisterListTemplateConverterForKnownClass(QList, QGlyphRun);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QInputMethodEvent::Attribute);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QItemSelectionRange);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QModelIndex);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QPersistentModelIndex);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QPolygonF);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QPrinterInfo);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QTableWidgetSelectionRange);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QTextBlock);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QTextEdit::ExtraSelection);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QTextLayout::FormatRange);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QTextOption::Tab);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QTouchEvent::TouchPoint);
PythonQtRegisterListTemplateConverterForKnownClass(QVector, QItemSelectionRange);
PythonQtRegisterListTemplateConverterForKnownClass(QVector, QTextLayout::FormatRange);
}
