#include <PythonQt.h>
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

static void* polymorphichandler_QStyleOption(const void *ptr, char **class_name)
{
    Q_ASSERT(ptr != 0);
    QStyleOption *object = (QStyleOption *)ptr;
    if (object->type == QStyleOption::SO_Default) {
        *class_name = "QStyleOption";
        return (QStyleOption*)object;
    }
    if (object->type == QStyleOptionRubberBand::Type && object->version == QStyleOptionRubberBand::Version) {
        *class_name = "QStyleOptionRubberBand";
        return (QStyleOptionRubberBand*)object;
    }
    if (object->type == QStyleOptionToolBox::Type && object->version == QStyleOptionToolBox::Version) {
        *class_name = "QStyleOptionToolBox";
        return (QStyleOptionToolBox*)object;
    }
    if (object->type == QStyleOptionTabBarBase::Type && object->version == QStyleOptionTabBarBase::Version) {
        *class_name = "QStyleOptionTabBarBase";
        return (QStyleOptionTabBarBase*)object;
    }
    if (object->type == QStyleOptionComplex::Type && object->version == QStyleOptionComplex::Version) {
        *class_name = "QStyleOptionComplex";
        return (QStyleOptionComplex*)object;
    }
    if (object->type == QStyleOptionHeader::Type && object->version == QStyleOptionHeader::Version) {
        *class_name = "QStyleOptionHeader";
        return (QStyleOptionHeader*)object;
    }
    if (object->type == QStyleOptionViewItem::Type && object->version == QStyleOptionViewItem::Version) {
        *class_name = "QStyleOptionViewItem";
        return (QStyleOptionViewItem*)object;
    }
    if (object->type == QStyleOptionTabWidgetFrame::Type && object->version == QStyleOptionTabWidgetFrame::Version) {
        *class_name = "QStyleOptionTabWidgetFrame";
        return (QStyleOptionTabWidgetFrame*)object;
    }
    if (object->type == QStyleOptionToolBar::Type && object->version == QStyleOptionToolBar::Version) {
        *class_name = "QStyleOptionToolBar";
        return (QStyleOptionToolBar*)object;
    }
    if (object->type == QStyleOptionTab::Type && object->version == QStyleOptionTab::Version) {
        *class_name = "QStyleOptionTab";
        return (QStyleOptionTab*)object;
    }
    if (object->type == QStyleOptionProgressBar::Type && object->version == QStyleOptionProgressBar::Version) {
        *class_name = "QStyleOptionProgressBar";
        return (QStyleOptionProgressBar*)object;
    }
    if (object->type == QStyleOptionButton::Type && object->version == QStyleOptionButton::Version) {
        *class_name = "QStyleOptionButton";
        return (QStyleOptionButton*)object;
    }
    if (object->type == QStyleOptionFocusRect::Type && object->version == QStyleOptionFocusRect::Version) {
        *class_name = "QStyleOptionFocusRect";
        return (QStyleOptionFocusRect*)object;
    }
    if (object->type == QStyleOptionMenuItem::Type && object->version == QStyleOptionMenuItem::Version) {
        *class_name = "QStyleOptionMenuItem";
        return (QStyleOptionMenuItem*)object;
    }
    if (object->type == QStyleOptionDockWidget::Type && object->version == QStyleOptionDockWidget::Version) {
        *class_name = "QStyleOptionDockWidget";
        return (QStyleOptionDockWidget*)object;
    }
    if (object->type == QStyleOptionFrame::Type && object->version == QStyleOptionFrame::Version) {
        *class_name = "QStyleOptionFrame";
        return (QStyleOptionFrame*)object;
    }
    if (object->type == QStyleOptionGraphicsItem::Type && object->version == QStyleOptionGraphicsItem::Version) {
        *class_name = "QStyleOptionGraphicsItem";
        return (QStyleOptionGraphicsItem*)object;
    }
    if (object->type == QStyleOptionSpinBox::Type && object->version == QStyleOptionSpinBox::Version) {
        *class_name = "QStyleOptionSpinBox";
        return (QStyleOptionSpinBox*)object;
    }
    if (object->type == QStyleOptionProgressBarV2::Type && object->version == QStyleOptionProgressBarV2::Version) {
        *class_name = "QStyleOptionProgressBarV2";
        return (QStyleOptionProgressBarV2*)object;
    }
    if (object->type == QStyleOptionTabBarBaseV2::Type && object->version == QStyleOptionTabBarBaseV2::Version) {
        *class_name = "QStyleOptionTabBarBaseV2";
        return (QStyleOptionTabBarBaseV2*)object;
    }
    if (object->type == QStyleOptionSlider::Type && object->version == QStyleOptionSlider::Version) {
        *class_name = "QStyleOptionSlider";
        return (QStyleOptionSlider*)object;
    }
    if (object->type == QStyleOptionGroupBox::Type && object->version == QStyleOptionGroupBox::Version) {
        *class_name = "QStyleOptionGroupBox";
        return (QStyleOptionGroupBox*)object;
    }
    if (object->type == QStyleOptionFrameV2::Type && object->version == QStyleOptionFrameV2::Version) {
        *class_name = "QStyleOptionFrameV2";
        return (QStyleOptionFrameV2*)object;
    }
    if (object->type == QStyleOptionTabV2::Type && object->version == QStyleOptionTabV2::Version) {
        *class_name = "QStyleOptionTabV2";
        return (QStyleOptionTabV2*)object;
    }
    if (object->type == QStyleOptionViewItemV2::Type && object->version == QStyleOptionViewItemV2::Version) {
        *class_name = "QStyleOptionViewItemV2";
        return (QStyleOptionViewItemV2*)object;
    }
    if (object->type == QStyleOptionToolBoxV2::Type && object->version == QStyleOptionToolBoxV2::Version) {
        *class_name = "QStyleOptionToolBoxV2";
        return (QStyleOptionToolBoxV2*)object;
    }
    if (object->type == QStyleOptionDockWidgetV2::Type && object->version == QStyleOptionDockWidgetV2::Version) {
        *class_name = "QStyleOptionDockWidgetV2";
        return (QStyleOptionDockWidgetV2*)object;
    }
    if (object->type == QStyleOptionSizeGrip::Type && object->version == QStyleOptionSizeGrip::Version) {
        *class_name = "QStyleOptionSizeGrip";
        return (QStyleOptionSizeGrip*)object;
    }
    if (object->type == QStyleOptionComboBox::Type && object->version == QStyleOptionComboBox::Version) {
        *class_name = "QStyleOptionComboBox";
        return (QStyleOptionComboBox*)object;
    }
    if (object->type == QStyleOptionToolButton::Type && object->version == QStyleOptionToolButton::Version) {
        *class_name = "QStyleOptionToolButton";
        return (QStyleOptionToolButton*)object;
    }
    if (object->type == QStyleOptionTitleBar::Type && object->version == QStyleOptionTitleBar::Version) {
        *class_name = "QStyleOptionTitleBar";
        return (QStyleOptionTitleBar*)object;
    }
    if (object->type == QStyleOptionFrameV3::Type && object->version == QStyleOptionFrameV3::Version) {
        *class_name = "QStyleOptionFrameV3";
        return (QStyleOptionFrameV3*)object;
    }
    if (object->type == QStyleOptionTabV3::Type && object->version == QStyleOptionTabV3::Version) {
        *class_name = "QStyleOptionTabV3";
        return (QStyleOptionTabV3*)object;
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
static void* polymorphichandler_QGradient(const void *ptr, char **class_name)
{
    Q_ASSERT(ptr != 0);
    QGradient *object = (QGradient *)ptr;
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
    if (object->type() == QGradient::ConicalGradient) {
        *class_name = "QConicalGradient";
        return (QConicalGradient*)object;
    }
    return NULL;
}
static void* polymorphichandler_QEvent(const void *ptr, char **class_name)
{
    Q_ASSERT(ptr != 0);
    QEvent *object = (QEvent *)ptr;
    if (object->type() == QEvent::Clipboard) {
        *class_name = "QClipboardEvent";
        return (QClipboardEvent*)object;
    }
    if (object->type() == QEvent::Paint) {
        *class_name = "QPaintEvent";
        return (QPaintEvent*)object;
    }
    if (object->type() == QEvent::Close) {
        *class_name = "QCloseEvent";
        return (QCloseEvent*)object;
    }
    if (object->type() == QEvent::Shortcut) {
        *class_name = "QShortcutEvent";
        return (QShortcutEvent*)object;
    }
    if (object->type() == QEvent::FocusIn || object->type() == QEvent::FocusOut) {
        *class_name = "QFocusEvent";
        return (QFocusEvent*)object;
    }
    if (object->type() == QEvent::Show) {
        *class_name = "QShowEvent";
        return (QShowEvent*)object;
    }
    if (object->type() == QEvent::IconDrag) {
        *class_name = "QIconDragEvent";
        return (QIconDragEvent*)object;
    }
    if (object->type() == QEvent::DragResponse) {
        *class_name = "QDragResponseEvent";
        return (QDragResponseEvent*)object;
    }
    if (object->type() == QEvent::ActionAdded || object->type() == QEvent::ActionRemoved || object->type() == QEvent::ActionChanged) {
        *class_name = "QActionEvent";
        return (QActionEvent*)object;
    }
    if (object->type() == QEvent::Hide) {
        *class_name = "QHideEvent";
        return (QHideEvent*)object;
    }
    if (object->type() == QEvent::WhatsThisClicked) {
        *class_name = "QWhatsThisClickedEvent";
        return (QWhatsThisClickedEvent*)object;
    }
    if (object->type() == QEvent::FileOpen) {
        *class_name = "QFileOpenEvent";
        return (QFileOpenEvent*)object;
    }
    if (object->type() == QEvent::Drop) {
        *class_name = "QDropEvent";
        return (QDropEvent*)object;
    }
    if (object->type() == QEvent::Move) {
        *class_name = "QMoveEvent";
        return (QMoveEvent*)object;
    }
    if (object->type() == QEvent::ToolBarChange) {
        *class_name = "QToolBarChangeEvent";
        return (QToolBarChangeEvent*)object;
    }
    if (object->type() == QEvent::Resize) {
        *class_name = "QResizeEvent";
        return (QResizeEvent*)object;
    }
    if (object->type() == QEvent::StatusTip) {
        *class_name = "QStatusTipEvent";
        return (QStatusTipEvent*)object;
    }
    if (object->type() == QEvent::AccessibilityDescription || object->type() == QEvent::AccessibilityHelp) {
        *class_name = "QAccessibleEvent";
        return (QAccessibleEvent*)object;
    }
    if (object->type() == QEvent::ToolTip || object->type() == QEvent::WhatsThis) {
        *class_name = "QHelpEvent";
        return (QHelpEvent*)object;
    }
    if (object->type() == QEvent::HoverEnter || object->type() == QEvent::HoverLeave || object->type() == QEvent::HoverMove) {
        *class_name = "QHoverEvent";
        return (QHoverEvent*)object;
    }
    if (object->type() == QEvent::WindowStateChange) {
        *class_name = "QWindowStateChangeEvent";
        return (QWindowStateChangeEvent*)object;
    }
    if (object->type() == QEvent::DragLeave) {
        *class_name = "QDragLeaveEvent";
        return (QDragLeaveEvent*)object;
    }
    if (object->type() == QEvent::TouchBegin || object->type() == QEvent::TouchUpdate || object->type() == QEvent::TouchEnd) {
        *class_name = "QTouchEvent";
        return (QTouchEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneContextMenu) {
        *class_name = "QGraphicsSceneContextMenuEvent";
        return (QGraphicsSceneContextMenuEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneDragEnter || object->type() == QEvent::GraphicsSceneDragLeave || object->type() == QEvent::GraphicsSceneDragMove || object->type() == QEvent::GraphicsSceneDrop) {
        *class_name = "QGraphicsSceneDragDropEvent";
        return (QGraphicsSceneDragDropEvent*)object;
    }
    if (object->type() == QEvent::KeyPress || object->type() == QEvent::KeyRelease) {
        *class_name = "QKeyEvent";
        return (QKeyEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneResize) {
        *class_name = "QGraphicsSceneResizeEvent";
        return (QGraphicsSceneResizeEvent*)object;
    }
    if (object->type() == QEvent::Wheel) {
        *class_name = "QWheelEvent";
        return (QWheelEvent*)object;
    }
    if (object->type() == QEvent::ContextMenu) {
        *class_name = "QContextMenuEvent";
        return (QContextMenuEvent*)object;
    }
    if (object->type() == QEvent::MouseButtonDblClick || object->type() == QEvent::MouseButtonPress || object->type() == QEvent::MouseButtonRelease || object->type() == QEvent::MouseMove) {
        *class_name = "QMouseEvent";
        return (QMouseEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneHoverEnter || object->type() == QEvent::GraphicsSceneHoverLeave || object->type() == QEvent::GraphicsSceneHoverMove) {
        *class_name = "QGraphicsSceneHoverEvent";
        return (QGraphicsSceneHoverEvent*)object;
    }
    if (object->type() == QEvent::TabletMove || object->type() == QEvent::TabletPress || object->type() == QEvent::TabletRelease) {
        *class_name = "QTabletEvent";
        return (QTabletEvent*)object;
    }
    if (object->type() == QEvent::DragMove) {
        *class_name = "QDragMoveEvent";
        return (QDragMoveEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneMouseDoubleClick || object->type() == QEvent::GraphicsSceneMouseMove || object->type() == QEvent::GraphicsSceneMousePress || object->type() == QEvent::GraphicsSceneMouseRelease) {
        *class_name = "QGraphicsSceneMouseEvent";
        return (QGraphicsSceneMouseEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneWheel) {
        *class_name = "QGraphicsSceneWheelEvent";
        return (QGraphicsSceneWheelEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneMove) {
        *class_name = "QGraphicsSceneMoveEvent";
        return (QGraphicsSceneMoveEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneHelp) {
        *class_name = "QGraphicsSceneHelpEvent";
        return (QGraphicsSceneHelpEvent*)object;
    }
    if (object->type() == QEvent::DragEnter) {
        *class_name = "QDragEnterEvent";
        return (QDragEnterEvent*)object;
    }
    return NULL;
}

void PythonQt_init_QtGui(PyObject* module) {
PythonQt::priv()->registerCPPClass("QTextImageFormat", "QTextCharFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextImageFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextImageFormat>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionButton", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionButton>, module);
PythonQt::priv()->registerCPPClass("QGraphicsItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsItem>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionTabBarBase", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabBarBase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabBarBase>, module);
PythonQt::priv()->registerClass(&QStackedLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStackedLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStackedLayout>, module);
PythonQt::priv()->registerClass(&QProgressBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QProgressBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProgressBar>, module);
PythonQt::priv()->registerClass(&QTextFrame::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextFrame>, module);
PythonQt::priv()->registerCPPClass("QShortcutEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QShortcutEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QShortcutEvent>, module);
PythonQt::priv()->registerClass(&QRadioButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QRadioButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRadioButton>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionComboBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionComboBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionComboBox>, module);
PythonQt::priv()->registerCPPClass("QHoverEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHoverEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHoverEvent>, module);
PythonQt::priv()->registerClass(&QPictureFormatPlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPictureFormatPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPictureFormatPlugin>, module);
PythonQt::priv()->registerCPPClass("QGraphicsSceneHoverEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneHoverEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QAccessibleObject", "QAccessibleInterface", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleObject>, module);
PythonQt::priv()->registerCPPClass("QTextTableCell", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableCell>, NULL, module);
PythonQt::priv()->registerClass(&QAbstractSpinBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractSpinBox>, module);
PythonQt::priv()->registerClass(&QPlastiqueStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPlastiqueStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPlastiqueStyle>, module);
PythonQt::priv()->registerCPPClass("QRadialGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRadialGradient>, NULL, module);
PythonQt::priv()->registerCPPClass("QMoveEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMoveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMoveEvent>, module);
PythonQt::priv()->registerClass(&QComboBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QComboBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QComboBox>, module);
PythonQt::priv()->registerClass(&QLineEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLineEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLineEdit>, module);
PythonQt::priv()->registerClass(&QButtonGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QButtonGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QButtonGroup>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionTabV2", "QStyleOptionTab", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabV2>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionTabV3", "QStyleOptionTabV2", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabV3>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabV3>, module);
PythonQt::priv()->registerClass(&QAbstractPageSetupDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractPageSetupDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractPageSetupDialog>, module);
PythonQt::priv()->registerCPPClass("QResizeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QResizeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QResizeEvent>, module);
PythonQt::priv()->registerClass(&QInputDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputDialog>, module);
PythonQt::priv()->registerClass(&QAbstractItemView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractItemView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractItemView>, module);
PythonQt::priv()->registerClass(&QRubberBand::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QRubberBand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRubberBand>, module);
PythonQt::priv()->registerClass(&QMotifStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMotifStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMotifStyle>, module);
PythonQt::priv()->registerClass(&QStyledItemDelegate::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyledItemDelegate>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyledItemDelegate>, module);
PythonQt::priv()->registerCPPClass("QIconDragEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconDragEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QHelpEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHelpEvent>, NULL, module);
PythonQt::priv()->registerClass(&QUndoStack::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoStack>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoStack>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionSlider", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSlider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSlider>, module);
PythonQt::priv()->registerCPPClass("QTextBlock", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlock>, NULL, module);
PythonQt::priv()->registerClass(&QTextList::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextList>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextList>, module);
PythonQt::priv()->registerCPPClass("QTableWidgetSelectionRange", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidgetSelectionRange>, NULL, module);
PythonQt::priv()->registerClass(&QStatusBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStatusBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStatusBar>, module);
PythonQt::priv()->registerClass(&QDoubleSpinBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDoubleSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDoubleSpinBox>, module);
PythonQt::priv()->registerCPPClass("QIconEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIconEngine>, module);
PythonQt::priv()->registerCPPClass("QInputContextFactory", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputContextFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputContextFactory>, module);
PythonQt::priv()->registerCPPClass("QAccessibleInterface", "QAccessible", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleInterface>, module);
PythonQt::priv()->registerCPPClass("QClipboardEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QClipboardEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QStyleOptionTab", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTab>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTab>, module);
PythonQt::priv()->registerCPPClass("QContextMenuEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QContextMenuEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QContextMenuEvent>, module);
PythonQt::priv()->registerClass(&QCompleter::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCompleter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCompleter>, module);
PythonQt::priv()->registerCPPClass("QPicture", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPicture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPicture>, module);
PythonQt::self()->addParentClass("QPicture", "QPaintDevice",PythonQtUpcastingOffset<QPicture,QPaintDevice>());
PythonQt::priv()->registerClass(&QGroupBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGroupBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGroupBox>, module);
PythonQt::priv()->registerCPPClass("QTextCursor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextCursor>, NULL, module);
PythonQt::priv()->registerClass(&QLabel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLabel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLabel>, module);
PythonQt::priv()->registerClass(&QStylePlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStylePlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStylePlugin>, module);
PythonQt::priv()->registerClass(&QUndoGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoGroup>, module);
PythonQt::priv()->registerCPPClass("QAbstractGraphicsShapeItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractGraphicsShapeItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractGraphicsShapeItem>, module);
PythonQt::self()->addParentClass("QAbstractGraphicsShapeItem", "QGraphicsItem",PythonQtUpcastingOffset<QAbstractGraphicsShapeItem,QGraphicsItem>());
PythonQt::priv()->registerClass(&QTextBlockGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockGroup>, module);
PythonQt::priv()->registerClass(&QFrame::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFrame>, module);
PythonQt::priv()->registerCPPClass("QGraphicsSceneEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QGraphicsSceneWheelEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneWheelEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QStyleOptionGroupBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionGroupBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionGroupBox>, module);
PythonQt::priv()->registerClass(&QCommonStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCommonStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCommonStyle>, module);
PythonQt::priv()->registerClass(&QPageSetupDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPageSetupDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPageSetupDialog>, module);
PythonQt::priv()->registerCPPClass("QGraphicsItemGroup", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsItemGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsItemGroup>, module);
PythonQt::self()->addParentClass("QGraphicsItemGroup", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsItemGroup,QGraphicsItem>());
PythonQt::priv()->registerClass(&QFontComboBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontComboBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFontComboBox>, module);
PythonQt::priv()->registerCPPClass("QGraphicsSceneDragDropEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneDragDropEvent>, NULL, module);
PythonQt::priv()->registerClass(&QUndoView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoView>, module);
PythonQt::priv()->registerCPPClass("QAccessibleInterfaceEx", "QAccessibleInterface", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleInterfaceEx>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleInterfaceEx>, module);
PythonQt::priv()->registerClass(&QMouseEventTransition::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMouseEventTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMouseEventTransition>, module);
PythonQt::priv()->registerClass(&QTextObject::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextObject>, module);
PythonQt::priv()->registerClass(&QToolButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QToolButton>, module);
PythonQt::priv()->registerCPPClass("QSpacerItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSpacerItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSpacerItem>, module);
PythonQt::self()->addParentClass("QSpacerItem", "QLayoutItem",PythonQtUpcastingOffset<QSpacerItem,QLayoutItem>());
PythonQt::priv()->registerCPPClass("QStyleOptionMenuItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionMenuItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionMenuItem>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionToolBox", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBox>, module);
PythonQt::priv()->registerCPPClass("QWheelEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWheelEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWheelEvent>, module);
PythonQt::priv()->registerCPPClass("QPainterPathStroker", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPathStroker>, NULL, module);
PythonQt::priv()->registerClass(&QIntValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QIntValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIntValidator>, module);
PythonQt::priv()->registerClass(&QIconEnginePluginV2::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconEnginePluginV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIconEnginePluginV2>, module);
PythonQt::priv()->registerClass(&QKeyEventTransition::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeyEventTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QKeyEventTransition>, module);
PythonQt::priv()->registerCPPClass("QItemSelectionRange", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemSelectionRange>, NULL, module);
PythonQt::priv()->registerClass(&QGraphicsProxyWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsProxyWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsProxyWidget>, module);
PythonQt::priv()->registerCPPClass("QFocusEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFocusEvent>, NULL, module);
PythonQt::priv()->registerClass(&QSplitter::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSplitter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSplitter>, module);
PythonQt::priv()->registerClass(&QGraphicsAnchor::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsAnchor>, NULL, module);
PythonQt::priv()->registerClass(&QListView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QListView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QListView>, module);
PythonQt::priv()->registerCPPClass("QAccessible", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessible>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessible>, module);
PythonQt::priv()->registerClass(&QAbstractItemDelegate::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractItemDelegate>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractItemDelegate>, module);
PythonQt::priv()->registerCPPClass("QDragLeaveEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragLeaveEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QGraphicsAnchorLayout", "QGraphicsLayout", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsAnchorLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsAnchorLayout>, module);
PythonQt::priv()->registerCPPClass("QMouseEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMouseEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMouseEvent>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionDockWidget", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionDockWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionDockWidget>, module);
PythonQt::priv()->registerCPPClass("QItemEditorCreatorBase", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemEditorCreatorBase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemEditorCreatorBase>, module);
PythonQt::priv()->registerClass(&QLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLayout>, module);
PythonQt::self()->addParentClass("QLayout", "QLayoutItem",PythonQtUpcastingOffset<QLayout,QLayoutItem>());
PythonQt::priv()->registerClass(&QGesture::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGesture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGesture>, module);
PythonQt::priv()->registerClass(&QStandardItemModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStandardItemModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStandardItemModel>, module);
PythonQt::priv()->registerClass(&QSlider::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSlider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSlider>, module);
PythonQt::priv()->registerCPPClass("QAccessibleTableInterface", "QAccessible2Interface", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleTableInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleTableInterface>, module);
PythonQt::priv()->registerCPPClass("QCloseEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QCloseEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QWindowStateChangeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWindowStateChangeEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QShowEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QShowEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QImageWriter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageWriter>, NULL, module);
PythonQt::priv()->registerClass(&QInputContext::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputContext>, module);
PythonQt::priv()->registerCPPClass("QTreeWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTreeWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTreeWidgetItem>, module);
PythonQt::priv()->registerClass(&QGraphicsWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsWidget>, module);
PythonQt::self()->addParentClass("QGraphicsWidget", "QGraphicsLayoutItem",PythonQtUpcastingOffset<QGraphicsWidget,QGraphicsLayoutItem>());
PythonQt::priv()->registerClass(&QFormLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFormLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFormLayout>, module);
PythonQt::priv()->registerCPPClass("QAccessibleWidget", "QAccessibleObject", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleWidget>, module);
PythonQt::priv()->registerClass(&QTextDocument::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextDocument>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextDocument>, module);
PythonQt::priv()->registerClass(&QDoubleValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDoubleValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDoubleValidator>, module);
PythonQt::priv()->registerClass(&QCommandLinkButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCommandLinkButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCommandLinkButton>, module);
PythonQt::priv()->registerCPPClass("QStyleHintReturnMask", "QStyleHintReturn", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturnMask>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturnMask>, module);
PythonQt::priv()->registerClass(&QAbstractSlider::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractSlider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractSlider>, module);
PythonQt::priv()->registerCPPClass("QTransform", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTransform>, NULL, module);
PythonQt::priv()->registerClass(&QMovie::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMovie>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMovie>, module);
PythonQt::priv()->registerClass(&QAbstractTableModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractTableModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTableModel>, module);
PythonQt::priv()->registerCPPClass("QAccessibleWidgetEx", "QAccessibleObjectEx", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleWidgetEx>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleWidgetEx>, module);
PythonQt::priv()->registerClass(&QGraphicsRotation::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsRotation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsRotation>, module);
PythonQt::priv()->registerClass(&QScrollArea::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollArea>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScrollArea>, module);
PythonQt::priv()->registerCPPClass("QMatrix4x4", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMatrix4x4>, NULL, module);
PythonQt::priv()->registerClass(&QAbstractPrintDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractPrintDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractPrintDialog>, module);
PythonQt::priv()->registerCPPClass("QActionEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QActionEvent>, NULL, module);
PythonQt::priv()->registerClass(&QProgressDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QProgressDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProgressDialog>, module);
PythonQt::priv()->registerClass(&QPrintPreviewWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintPreviewWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintPreviewWidget>, module);
PythonQt::priv()->registerCPPClass("QStyleFactory", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleFactory>, module);
PythonQt::priv()->registerCPPClass("QDragEnterEvent", "QDragMoveEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragEnterEvent>, NULL, module);
PythonQt::priv()->registerClass(&QWidgetAction::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidgetAction>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidgetAction>, module);
PythonQt::priv()->registerCPPClass("QAccessibleBridge", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleBridge>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleBridge>, module);
PythonQt::priv()->registerClass(&QAbstractScrollArea::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractScrollArea>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractScrollArea>, module);
PythonQt::priv()->registerCPPClass("QToolTip", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolTip>, NULL, module);
PythonQt::priv()->registerClass(&QStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyle>, module);
PythonQt::priv()->registerClass(&QWorkspace::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWorkspace>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWorkspace>, module);
PythonQt::priv()->registerClass(&QColorDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QColorDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QColorDialog>, module);
PythonQt::priv()->registerCPPClass("QTextBlockUserData", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockUserData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockUserData>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionViewItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItem>, module);
PythonQt::priv()->registerCPPClass("QGraphicsSceneHelpEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneHelpEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QDragResponseEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragResponseEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDragResponseEvent>, module);
PythonQt::priv()->registerCPPClass("QMargins", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMargins>, NULL, module);
PythonQt::priv()->registerCPPClass("QKeyEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeyEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QKeyEvent>, module);
PythonQt::priv()->registerCPPClass("QPictureIO", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPictureIO>, NULL, module);
PythonQt::priv()->registerClass(&QStringListModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStringListModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStringListModel>, module);
PythonQt::priv()->registerCPPClass("QStyleHintReturnVariant", "QStyleHintReturn", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturnVariant>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturnVariant>, module);
PythonQt::priv()->registerCPPClass("QTextDocumentWriter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextDocumentWriter>, NULL, module);
PythonQt::priv()->registerCPPClass("QGraphicsLinearLayout", "QGraphicsLayout", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLinearLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLinearLayout>, module);
PythonQt::priv()->registerCPPClass("QDesktopServices", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDesktopServices>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDesktopServices>, module);
PythonQt::priv()->registerClass(&QSplashScreen::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSplashScreen>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSplashScreen>, module);
PythonQt::priv()->registerClass(&QDateTimeEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDateTimeEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDateTimeEdit>, module);
PythonQt::priv()->registerCPPClass("QPainterPath", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPath>, NULL, module);
PythonQt::priv()->registerCPPClass("QStyleOptionFrame", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFrame>, module);
PythonQt::priv()->registerCPPClass("QPaintEngineState", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEngineState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEngineState>, module);
PythonQt::priv()->registerCPPClass("QTextDocumentFragment", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextDocumentFragment>, NULL, module);
PythonQt::priv()->registerClass(&QFileDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileDialog>, module);
PythonQt::priv()->registerCPPClass("QTextListFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextListFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextListFormat>, module);
PythonQt::priv()->registerCPPClass("QGraphicsLayout", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLayout>, module);
PythonQt::self()->addParentClass("QGraphicsLayout", "QGraphicsLayoutItem",PythonQtUpcastingOffset<QGraphicsLayout,QGraphicsLayoutItem>());
PythonQt::priv()->registerClass(&QMdiArea::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMdiArea>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMdiArea>, module);
PythonQt::priv()->registerClass(&QGraphicsObject::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsObject>, module);
PythonQt::self()->addParentClass("QGraphicsObject", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsObject,QGraphicsItem>());
PythonQt::priv()->registerCPPClass("QTextTableCellFormat", "QTextCharFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableCellFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTableCellFormat>, module);
PythonQt::priv()->registerCPPClass("QItemEditorFactory", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemEditorFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemEditorFactory>, module);
PythonQt::priv()->registerCPPClass("QStylePainter", "QPainter", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStylePainter>, NULL, module);
PythonQt::priv()->registerCPPClass("QTextCharFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextCharFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCharFormat>, module);
PythonQt::priv()->registerCPPClass("QItemSelection", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemSelection>, NULL, module);
PythonQt::priv()->registerCPPClass("QConicalGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QConicalGradient>, NULL, module);
PythonQt::priv()->registerCPPClass("QStyleHintReturn", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturn>, module);
PythonQt::priv()->registerClass(&QDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDialog>, module);
PythonQt::priv()->registerClass(&QGridLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGridLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGridLayout>, module);
PythonQt::priv()->registerCPPClass("QGraphicsGridLayout", "QGraphicsLayout", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsGridLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsGridLayout>, module);
PythonQt::priv()->registerCPPClass("QPixmapCache", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPixmapCache>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPixmapCache>, module);
PythonQt::priv()->registerCPPClass("QPixmapCache::Key", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPixmapCache_Key>, NULL, module);
PythonQt::priv()->registerCPPClass("QLinearGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QLinearGradient>, NULL, module);
PythonQt::priv()->registerCPPClass("QInputEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputEvent>, module);
PythonQt::priv()->registerCPPClass("QGraphicsLineItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLineItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLineItem>, module);
PythonQt::self()->addParentClass("QGraphicsLineItem", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsLineItem,QGraphicsItem>());
PythonQt::priv()->registerClass(&QCalendarWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCalendarWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCalendarWidget>, module);
PythonQt::priv()->registerCPPClass("QAccessibleEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleEvent>, NULL, module);
PythonQt::priv()->registerClass(&QPanGesture::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPanGesture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPanGesture>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionToolButton", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolButton>, module);
PythonQt::priv()->registerCPPClass("QAccessible2Interface", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessible2Interface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessible2Interface>, module);
PythonQt::priv()->registerCPPClass("QWhatsThisClickedEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWhatsThisClickedEvent>, NULL, module);
PythonQt::priv()->registerClass(&QProxyStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QProxyStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProxyStyle>, module);
PythonQt::priv()->registerCPPClass("QStatusTipEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStatusTipEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QGraphicsSimpleTextItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSimpleTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsSimpleTextItem>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionSizeGrip", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSizeGrip>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSizeGrip>, module);
PythonQt::priv()->registerClass(&QToolBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QToolBar>, module);
PythonQt::priv()->registerClass(&QDesktopWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDesktopWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDesktopWidget>, module);
PythonQt::priv()->registerCPPClass("QUndoCommand", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoCommand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoCommand>, module);
PythonQt::priv()->registerClass(&QMenu::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMenu>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMenu>, module);
PythonQt::priv()->registerCPPClass("QTextTableFormat", "QTextFrameFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTableFormat>, module);
PythonQt::priv()->registerClass(&QPlainTextDocumentLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPlainTextDocumentLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPlainTextDocumentLayout>, module);
PythonQt::priv()->registerCPPClass("QPrinter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrinter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrinter>, module);
PythonQt::self()->addParentClass("QPrinter", "QPaintDevice",PythonQtUpcastingOffset<QPrinter,QPaintDevice>());
PythonQt::priv()->registerClass(&QWizardPage::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWizardPage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWizardPage>, module);
PythonQt::priv()->registerCPPClass("QWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidgetItem>, module);
PythonQt::self()->addParentClass("QWidgetItem", "QLayoutItem",PythonQtUpcastingOffset<QWidgetItem,QLayoutItem>());
PythonQt::priv()->registerClass(&QSound::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSound>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSound>, module);
PythonQt::priv()->registerClass(&QMainWindow::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMainWindow>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMainWindow>, module);
PythonQt::priv()->registerClass(&QPrintDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintDialog>, module);
PythonQt::priv()->registerCPPClass("QTileRules", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTileRules>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTileRules>, module);
PythonQt::priv()->registerCPPClass("QFileIconProvider", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileIconProvider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileIconProvider>, module);
PythonQt::priv()->registerClass(&QDial::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDial>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDial>, module);
PythonQt::priv()->registerCPPClass("QTextItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextItem>, module);
PythonQt::priv()->registerCPPClass("QStyleOption", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOption>, module);
PythonQt::priv()->registerCPPClass("QHideEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHideEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QPolygonF", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPolygonF>, NULL, module);
PythonQt::priv()->registerClass(&QItemDelegate::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemDelegate>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemDelegate>, module);
PythonQt::priv()->registerClass(&QListWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QListWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QListWidget>, module);
PythonQt::priv()->registerClass(&QTextBrowser::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBrowser>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBrowser>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionToolBar", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBar>, module);
PythonQt::priv()->registerCPPClass("QGraphicsPathItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsPathItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsPathItem>, module);
PythonQt::priv()->registerClass(&QPlainTextEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPlainTextEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPlainTextEdit>, module);
PythonQt::priv()->registerClass(&QGraphicsOpacityEffect::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsOpacityEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsOpacityEffect>, module);
PythonQt::priv()->registerClass(&QGraphicsTransform::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsTransform>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsTransform>, module);
PythonQt::priv()->registerCPPClass("QListWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QListWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QListWidgetItem>, module);
PythonQt::priv()->registerClass(&QDataWidgetMapper::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDataWidgetMapper>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDataWidgetMapper>, module);
PythonQt::priv()->registerClass(&QTableView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTableView>, module);
PythonQt::priv()->registerCPPClass("QTextFragment", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFragment>, NULL, module);
PythonQt::priv()->registerClass(&QMessageBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMessageBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMessageBox>, module);
PythonQt::priv()->registerClass(&QDateEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDateEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDateEdit>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionToolBoxV2", "QStyleOptionToolBox", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBoxV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBoxV2>, module);
PythonQt::priv()->registerClass(&QCheckBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCheckBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCheckBox>, module);
PythonQt::priv()->registerClass(&QValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QValidator>, module);
PythonQt::priv()->registerCPPClass("QGraphicsSceneMoveEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneMoveEvent>, NULL, module);
PythonQt::priv()->registerClass(&QGraphicsItemAnimation::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsItemAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsItemAnimation>, module);
PythonQt::priv()->registerClass(&QTextTable::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTable>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTable>, module);
PythonQt::priv()->registerClass(&QAbstractButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractButton>, module);
PythonQt::priv()->registerClass(&QRegExpValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QRegExpValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRegExpValidator>, module);
PythonQt::priv()->registerCPPClass("QTouchEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTouchEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTouchEvent>, module);
PythonQt::priv()->registerClass(&QErrorMessage::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QErrorMessage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QErrorMessage>, module);
PythonQt::priv()->registerCPPClass("QTouchEvent::TouchPoint", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTouchEvent_TouchPoint>, NULL, module);
PythonQt::priv()->registerCPPClass("QLayoutItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QLayoutItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLayoutItem>, module);
PythonQt::priv()->registerClass(&QHBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QHBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHBoxLayout>, module);
PythonQt::priv()->registerClass(&QWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidget>, module);
PythonQt::self()->addParentClass("QWidget", "QPaintDevice",PythonQtUpcastingOffset<QWidget,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QImageReader", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageReader>, NULL, module);
PythonQt::priv()->registerCPPClass("QGraphicsSceneResizeEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneResizeEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QVector4D", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QVector4D>, NULL, module);
PythonQt::priv()->registerCPPClass("QStyleOptionTitleBar", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTitleBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTitleBar>, module);
PythonQt::priv()->registerCPPClass("QWhatsThis", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWhatsThis>, NULL, module);
PythonQt::priv()->registerCPPClass("QGraphicsEllipseItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsEllipseItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsEllipseItem>, module);
PythonQt::priv()->registerClass(&QAction::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAction>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAction>, module);
PythonQt::priv()->registerClass(&QVBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QVBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVBoxLayout>, module);
PythonQt::priv()->registerClass(&QMdiSubWindow::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMdiSubWindow>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMdiSubWindow>, module);
PythonQt::priv()->registerClass(&QShortcut::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QShortcut>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QShortcut>, module);
PythonQt::priv()->registerClass(&QSwipeGesture::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSwipeGesture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSwipeGesture>, module);
PythonQt::priv()->registerCPPClass("QTabletEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabletEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabletEvent>, module);
PythonQt::priv()->registerClass(&QInputContextPlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputContextPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputContextPlugin>, module);
PythonQt::priv()->registerCPPClass("QGraphicsSceneContextMenuEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneContextMenuEvent>, NULL, module);
PythonQt::priv()->registerClass(&QItemSelectionModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemSelectionModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemSelectionModel>, module);
PythonQt::priv()->registerCPPClass("QFontMetrics", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontMetrics>, NULL, module);
PythonQt::priv()->registerClass(&QTreeView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTreeView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTreeView>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionTabBarBaseV2", "QStyleOptionTabBarBase", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabBarBaseV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabBarBaseV2>, module);
PythonQt::priv()->registerClass(&QSystemTrayIcon::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSystemTrayIcon>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSystemTrayIcon>, module);
PythonQt::priv()->registerClass(&QImageIOPlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageIOPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImageIOPlugin>, module);
PythonQt::priv()->registerClass(&QPushButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPushButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPushButton>, module);
PythonQt::priv()->registerCPPClass("QGraphicsSceneMouseEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneMouseEvent>, NULL, module);
PythonQt::priv()->registerClass(&QScrollBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScrollBar>, module);
PythonQt::priv()->registerClass(&QSyntaxHighlighter::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSyntaxHighlighter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSyntaxHighlighter>, module);
PythonQt::priv()->registerClass(&QGraphicsEffect::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsEffect>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionProgressBar", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionProgressBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionProgressBar>, module);
PythonQt::priv()->registerClass(&QSpinBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSpinBox>, module);
PythonQt::priv()->registerClass(&QTimeEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTimeEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimeEdit>, module);
PythonQt::priv()->registerCPPClass("QDropEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDropEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDropEvent>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionTabWidgetFrame", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabWidgetFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabWidgetFrame>, module);
PythonQt::priv()->registerClass(&QSizeGrip::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSizeGrip>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSizeGrip>, module);
PythonQt::priv()->registerCPPClass("QTextFrameFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFrameFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextFrameFormat>, module);
PythonQt::priv()->registerCPPClass("QAccessibleObjectEx", "QAccessibleInterfaceEx", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleObjectEx>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleObjectEx>, module);
PythonQt::priv()->registerClass(&QClipboard::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QClipboard>, NULL, module);
PythonQt::priv()->registerClass(&QCleanlooksStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCleanlooksStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCleanlooksStyle>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionHeader", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionHeader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionHeader>, module);
PythonQt::priv()->registerCPPClass("QPainter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainter>, NULL, module);
PythonQt::priv()->registerCPPClass("QDragMoveEvent", "QDropEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragMoveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDragMoveEvent>, module);
PythonQt::priv()->registerClass(&QColumnView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QColumnView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QColumnView>, module);
PythonQt::priv()->registerClass(&QWizard::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWizard>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWizard>, module);
PythonQt::priv()->registerCPPClass("QImageIOHandler", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageIOHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImageIOHandler>, module);
PythonQt::priv()->registerCPPClass("QPaintDevice", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintDevice>, module);
PythonQt::priv()->registerCPPClass("QGradient", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGradient>, NULL, module);
PythonQt::priv()->registerClass(&QLCDNumber::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLCDNumber>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLCDNumber>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionViewItemV2", "QStyleOptionViewItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItemV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItemV2>, module);
PythonQt::priv()->registerCPPClass("QGraphicsLayoutItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLayoutItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLayoutItem>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionViewItemV3", "QStyleOptionViewItemV2", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItemV3>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItemV3>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionViewItemV4", "QStyleOptionViewItemV3", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItemV4>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItemV4>, module);
PythonQt::priv()->registerCPPClass("QPaintEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEngine>, module);
PythonQt::priv()->registerCPPClass("QGraphicsPixmapItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsPixmapItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsPixmapItem>, module);
PythonQt::self()->addParentClass("QGraphicsPixmapItem", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsPixmapItem,QGraphicsItem>());
PythonQt::priv()->registerClass(&QActionGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QActionGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QActionGroup>, module);
PythonQt::priv()->registerClass(&QGraphicsScale::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsScale>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsScale>, module);
PythonQt::priv()->registerCPPClass("QQuaternion", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QQuaternion>, NULL, module);
PythonQt::priv()->registerClass(&QApplication::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QApplication>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QApplication>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionSpinBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSpinBox>, module);
PythonQt::priv()->registerCPPClass("QFontMetricsF", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontMetricsF>, NULL, module);
PythonQt::priv()->registerCPPClass("QTextInlineObject", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextInlineObject>, NULL, module);
PythonQt::priv()->registerCPPClass("QStyleOptionGraphicsItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionGraphicsItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionGraphicsItem>, module);
PythonQt::priv()->registerClass(&QTabWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabWidget>, module);
PythonQt::priv()->registerClass(&QTabBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabBar>, module);
PythonQt::priv()->registerClass(&QSplitterHandle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSplitterHandle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSplitterHandle>, module);
PythonQt::priv()->registerClass(&QTreeWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTreeWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTreeWidget>, module);
PythonQt::priv()->registerCPPClass("QTableWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTableWidgetItem>, module);
PythonQt::priv()->registerClass(&QPrintPreviewDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintPreviewDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintPreviewDialog>, module);
PythonQt::priv()->registerClass(&QAccessiblePlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessiblePlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessiblePlugin>, module);
PythonQt::priv()->registerClass(&QCDEStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCDEStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCDEStyle>, module);
PythonQt::priv()->registerClass(&QDrag::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDrag>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDrag>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionRubberBand", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionRubberBand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionRubberBand>, module);
PythonQt::priv()->registerClass(&QStackedWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStackedWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStackedWidget>, module);
PythonQt::priv()->registerClass(&QSessionManager::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSessionManager>, NULL, module);
PythonQt::priv()->registerCPPClass("QStandardItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStandardItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStandardItem>, module);
PythonQt::priv()->registerClass(&QDockWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDockWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDockWidget>, module);
PythonQt::priv()->registerClass(&QGraphicsScene::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsScene>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsScene>, module);
PythonQt::priv()->registerClass(&QTextEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextEdit>, module);
PythonQt::priv()->registerClass(&QDialogButtonBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDialogButtonBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDialogButtonBox>, module);
PythonQt::priv()->registerCPPClass("QGraphicsPolygonItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsPolygonItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsPolygonItem>, module);
PythonQt::priv()->registerCPPClass("QPrintEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintEngine>, module);
PythonQt::priv()->registerClass(&QBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBoxLayout>, module);
PythonQt::priv()->registerClass(&QFocusFrame::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFocusFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFocusFrame>, module);
PythonQt::priv()->registerCPPClass("QTextBlockFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockFormat>, module);
PythonQt::priv()->registerClass(&QHeaderView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QHeaderView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHeaderView>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionProgressBarV2", "QStyleOptionProgressBar", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionProgressBarV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionProgressBarV2>, module);
PythonQt::priv()->registerClass(&QFontDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFontDialog>, module);
PythonQt::priv()->registerCPPClass("QPaintEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEvent>, module);
PythonQt::priv()->registerClass(&QTableWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTableWidget>, module);
PythonQt::priv()->registerCPPClass("QFileOpenEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileOpenEvent>, NULL, module);
PythonQt::priv()->registerCPPClass("QVector2D", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QVector2D>, NULL, module);
PythonQt::priv()->registerCPPClass("QStyleOptionFrameV2", "QStyleOptionFrame", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFrameV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFrameV2>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionFrameV3", "QStyleOptionFrameV2", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFrameV3>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFrameV3>, module);
PythonQt::priv()->registerClass(&QToolBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QToolBox>, module);
PythonQt::priv()->registerClass(&QGraphicsView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsView>, module);
PythonQt::priv()->registerCPPClass("QTextLine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLine>, NULL, module);
PythonQt::priv()->registerCPPClass("QVector3D", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QVector3D>, NULL, module);
PythonQt::priv()->registerCPPClass("QToolBarChangeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBarChangeEvent>, NULL, module);
PythonQt::priv()->registerClass(&QWindowsStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWindowsStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWindowsStyle>, module);
PythonQt::priv()->registerClass(&QTextCodecPlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextCodecPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCodecPlugin>, module);
PythonQt::priv()->registerClass(&QGraphicsTextItem::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsTextItem>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionDockWidgetV2", "QStyleOptionDockWidget", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionDockWidgetV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionDockWidgetV2>, module);
PythonQt::priv()->registerCPPClass("QFontInfo", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontInfo>, NULL, module);
PythonQt::priv()->registerCPPClass("QGraphicsRectItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsRectItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsRectItem>, module);
PythonQt::priv()->registerCPPClass("QStyleOptionFocusRect", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFocusRect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFocusRect>, module);
PythonQt::priv()->registerClass(&QMenuBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMenuBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMenuBar>, module);
PythonQt::priv()->registerClass(&QPinchGesture::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPinchGesture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPinchGesture>, module);

PythonQt::self()->addPolymorphicHandler("QStyleOption", polymorphichandler_QStyleOption);
PythonQt::self()->addPolymorphicHandler("QGradient", polymorphichandler_QGradient);
PythonQt::self()->addPolymorphicHandler("QEvent", polymorphichandler_QEvent);
}
