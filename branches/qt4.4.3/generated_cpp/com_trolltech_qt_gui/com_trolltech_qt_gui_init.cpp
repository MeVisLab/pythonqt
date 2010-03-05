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

static void* polymorphichandler_QStyleOption(const void *ptr, char **class_name)
{
    Q_ASSERT(ptr != 0);
    QStyleOption *object = (QStyleOption *)ptr;
    if (object->type == QStyleOption::SO_Default) {
        *class_name = "QStyleOption";
        return (QStyleOption*)object;
    }
    if (object->type == QStyleOptionViewItem::Type && object->version == QStyleOptionViewItem::Version) {
        *class_name = "QStyleOptionViewItem";
        return (QStyleOptionViewItem*)object;
    }
    if (object->type == QStyleOptionDockWidget::Type && object->version == QStyleOptionDockWidget::Version) {
        *class_name = "QStyleOptionDockWidget";
        return (QStyleOptionDockWidget*)object;
    }
    if (object->type == QStyleOptionToolBar::Type && object->version == QStyleOptionToolBar::Version) {
        *class_name = "QStyleOptionToolBar";
        return (QStyleOptionToolBar*)object;
    }
    if (object->type == QStyleOptionTab::Type && object->version == QStyleOptionTab::Version) {
        *class_name = "QStyleOptionTab";
        return (QStyleOptionTab*)object;
    }
    if (object->type == QStyleOptionButton::Type && object->version == QStyleOptionButton::Version) {
        *class_name = "QStyleOptionButton";
        return (QStyleOptionButton*)object;
    }
    if (object->type == QStyleOptionGraphicsItem::Type && object->version == QStyleOptionGraphicsItem::Version) {
        *class_name = "QStyleOptionGraphicsItem";
        return (QStyleOptionGraphicsItem*)object;
    }
    if (object->type == QStyleOptionFocusRect::Type && object->version == QStyleOptionFocusRect::Version) {
        *class_name = "QStyleOptionFocusRect";
        return (QStyleOptionFocusRect*)object;
    }
    if (object->type == QStyleOptionHeader::Type && object->version == QStyleOptionHeader::Version) {
        *class_name = "QStyleOptionHeader";
        return (QStyleOptionHeader*)object;
    }
    if (object->type == QStyleOptionTabWidgetFrame::Type && object->version == QStyleOptionTabWidgetFrame::Version) {
        *class_name = "QStyleOptionTabWidgetFrame";
        return (QStyleOptionTabWidgetFrame*)object;
    }
    if (object->type == QStyleOptionProgressBar::Type && object->version == QStyleOptionProgressBar::Version) {
        *class_name = "QStyleOptionProgressBar";
        return (QStyleOptionProgressBar*)object;
    }
    if (object->type == QStyleOptionFrame::Type && object->version == QStyleOptionFrame::Version) {
        *class_name = "QStyleOptionFrame";
        return (QStyleOptionFrame*)object;
    }
    if (object->type == QStyleOptionMenuItem::Type && object->version == QStyleOptionMenuItem::Version) {
        *class_name = "QStyleOptionMenuItem";
        return (QStyleOptionMenuItem*)object;
    }
    if (object->type == QStyleOptionTabBarBase::Type && object->version == QStyleOptionTabBarBase::Version) {
        *class_name = "QStyleOptionTabBarBase";
        return (QStyleOptionTabBarBase*)object;
    }
    if (object->type == QStyleOptionRubberBand::Type && object->version == QStyleOptionRubberBand::Version) {
        *class_name = "QStyleOptionRubberBand";
        return (QStyleOptionRubberBand*)object;
    }
    if (object->type == QStyleOptionComplex::Type && object->version == QStyleOptionComplex::Version) {
        *class_name = "QStyleOptionComplex";
        return (QStyleOptionComplex*)object;
    }
    if (object->type == QStyleOptionToolBox::Type && object->version == QStyleOptionToolBox::Version) {
        *class_name = "QStyleOptionToolBox";
        return (QStyleOptionToolBox*)object;
    }
    if (object->type == QStyleOptionSizeGrip::Type && object->version == QStyleOptionSizeGrip::Version) {
        *class_name = "QStyleOptionSizeGrip";
        return (QStyleOptionSizeGrip*)object;
    }
    if (object->type == QStyleOptionToolBoxV2::Type && object->version == QStyleOptionToolBoxV2::Version) {
        *class_name = "QStyleOptionToolBoxV2";
        return (QStyleOptionToolBoxV2*)object;
    }
    if (object->type == QStyleOptionFrameV2::Type && object->version == QStyleOptionFrameV2::Version) {
        *class_name = "QStyleOptionFrameV2";
        return (QStyleOptionFrameV2*)object;
    }
    if (object->type == QStyleOptionSlider::Type && object->version == QStyleOptionSlider::Version) {
        *class_name = "QStyleOptionSlider";
        return (QStyleOptionSlider*)object;
    }
    if (object->type == QStyleOptionToolButton::Type && object->version == QStyleOptionToolButton::Version) {
        *class_name = "QStyleOptionToolButton";
        return (QStyleOptionToolButton*)object;
    }
    if (object->type == QStyleOptionDockWidgetV2::Type && object->version == QStyleOptionDockWidgetV2::Version) {
        *class_name = "QStyleOptionDockWidgetV2";
        return (QStyleOptionDockWidgetV2*)object;
    }
    if (object->type == QStyleOptionViewItemV2::Type && object->version == QStyleOptionViewItemV2::Version) {
        *class_name = "QStyleOptionViewItemV2";
        return (QStyleOptionViewItemV2*)object;
    }
    if (object->type == QStyleOptionTabV2::Type && object->version == QStyleOptionTabV2::Version) {
        *class_name = "QStyleOptionTabV2";
        return (QStyleOptionTabV2*)object;
    }
    if (object->type == QStyleOptionTitleBar::Type && object->version == QStyleOptionTitleBar::Version) {
        *class_name = "QStyleOptionTitleBar";
        return (QStyleOptionTitleBar*)object;
    }
    if (object->type == QStyleOptionGroupBox::Type && object->version == QStyleOptionGroupBox::Version) {
        *class_name = "QStyleOptionGroupBox";
        return (QStyleOptionGroupBox*)object;
    }
    if (object->type == QStyleOptionSpinBox::Type && object->version == QStyleOptionSpinBox::Version) {
        *class_name = "QStyleOptionSpinBox";
        return (QStyleOptionSpinBox*)object;
    }
    if (object->type == QStyleOptionComboBox::Type && object->version == QStyleOptionComboBox::Version) {
        *class_name = "QStyleOptionComboBox";
        return (QStyleOptionComboBox*)object;
    }
    if (object->type == QStyleOptionProgressBarV2::Type && object->version == QStyleOptionProgressBarV2::Version) {
        *class_name = "QStyleOptionProgressBarV2";
        return (QStyleOptionProgressBarV2*)object;
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
    if (object->type() == QGradient::RadialGradient) {
        *class_name = "QRadialGradient";
        return (QRadialGradient*)object;
    }
    if (object->type() == QGradient::ConicalGradient) {
        *class_name = "QConicalGradient";
        return (QConicalGradient*)object;
    }
    if (object->type() == QGradient::LinearGradient) {
        *class_name = "QLinearGradient";
        return (QLinearGradient*)object;
    }
    return NULL;
}
static void* polymorphichandler_QEvent(const void *ptr, char **class_name)
{
    Q_ASSERT(ptr != 0);
    QEvent *object = (QEvent *)ptr;
    if (object->type() == QEvent::Resize) {
        *class_name = "QResizeEvent";
        return (QResizeEvent*)object;
    }
    if (object->type() == QEvent::FileOpen) {
        *class_name = "QFileOpenEvent";
        return (QFileOpenEvent*)object;
    }
    if (object->type() == QEvent::WindowStateChange) {
        *class_name = "QWindowStateChangeEvent";
        return (QWindowStateChangeEvent*)object;
    }
    if (object->type() == QEvent::Close) {
        *class_name = "QCloseEvent";
        return (QCloseEvent*)object;
    }
    if (object->type() == QEvent::AccessibilityDescription || object->type() == QEvent::AccessibilityHelp) {
        *class_name = "QAccessibleEvent";
        return (QAccessibleEvent*)object;
    }
    if (object->type() == QEvent::ToolTip || object->type() == QEvent::WhatsThis) {
        *class_name = "QHelpEvent";
        return (QHelpEvent*)object;
    }
    if (object->type() == QEvent::StatusTip) {
        *class_name = "QStatusTipEvent";
        return (QStatusTipEvent*)object;
    }
    if (object->type() == QEvent::HoverEnter || object->type() == QEvent::HoverLeave || object->type() == QEvent::HoverMove) {
        *class_name = "QHoverEvent";
        return (QHoverEvent*)object;
    }
    if (object->type() == QEvent::Paint) {
        *class_name = "QPaintEvent";
        return (QPaintEvent*)object;
    }
    if (object->type() == QEvent::Drop) {
        *class_name = "QDropEvent";
        return (QDropEvent*)object;
    }
    if (object->type() == QEvent::ActionAdded || object->type() == QEvent::ActionRemoved || object->type() == QEvent::ActionChanged) {
        *class_name = "QActionEvent";
        return (QActionEvent*)object;
    }
    if (object->type() == QEvent::IconDrag) {
        *class_name = "QIconDragEvent";
        return (QIconDragEvent*)object;
    }
    if (object->type() == QEvent::ToolBarChange) {
        *class_name = "QToolBarChangeEvent";
        return (QToolBarChangeEvent*)object;
    }
    if (object->type() == QEvent::Shortcut) {
        *class_name = "QShortcutEvent";
        return (QShortcutEvent*)object;
    }
    if (object->type() == QEvent::DragLeave) {
        *class_name = "QDragLeaveEvent";
        return (QDragLeaveEvent*)object;
    }
    if (object->type() == QEvent::WhatsThisClicked) {
        *class_name = "QWhatsThisClickedEvent";
        return (QWhatsThisClickedEvent*)object;
    }
    if (object->type() == QEvent::Show) {
        *class_name = "QShowEvent";
        return (QShowEvent*)object;
    }
    if (object->type() == QEvent::Clipboard) {
        *class_name = "QClipboardEvent";
        return (QClipboardEvent*)object;
    }
    if (object->type() == QEvent::Move) {
        *class_name = "QMoveEvent";
        return (QMoveEvent*)object;
    }
    if (object->type() == QEvent::FocusIn || object->type() == QEvent::FocusOut) {
        *class_name = "QFocusEvent";
        return (QFocusEvent*)object;
    }
    if (object->type() == QEvent::Hide) {
        *class_name = "QHideEvent";
        return (QHideEvent*)object;
    }
    if (object->type() == QEvent::DragResponse) {
        *class_name = "QDragResponseEvent";
        return (QDragResponseEvent*)object;
    }
    if (object->type() == QEvent::MouseButtonDblClick || object->type() == QEvent::MouseButtonPress || object->type() == QEvent::MouseButtonRelease || object->type() == QEvent::MouseMove) {
        *class_name = "QMouseEvent";
        return (QMouseEvent*)object;
    }
    if (object->type() == QEvent::TabletMove || object->type() == QEvent::TabletPress || object->type() == QEvent::TabletRelease) {
        *class_name = "QTabletEvent";
        return (QTabletEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneDragEnter || object->type() == QEvent::GraphicsSceneDragLeave || object->type() == QEvent::GraphicsSceneDragMove || object->type() == QEvent::GraphicsSceneDrop) {
        *class_name = "QGraphicsSceneDragDropEvent";
        return (QGraphicsSceneDragDropEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneResize) {
        *class_name = "QGraphicsSceneResizeEvent";
        return (QGraphicsSceneResizeEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneContextMenu) {
        *class_name = "QGraphicsSceneContextMenuEvent";
        return (QGraphicsSceneContextMenuEvent*)object;
    }
    if (object->type() == QEvent::DragMove) {
        *class_name = "QDragMoveEvent";
        return (QDragMoveEvent*)object;
    }
    if (object->type() == QEvent::GraphicsSceneHoverEnter || object->type() == QEvent::GraphicsSceneHoverLeave || object->type() == QEvent::GraphicsSceneHoverMove) {
        *class_name = "QGraphicsSceneHoverEvent";
        return (QGraphicsSceneHoverEvent*)object;
    }
    if (object->type() == QEvent::Wheel) {
        *class_name = "QWheelEvent";
        return (QWheelEvent*)object;
    }
    if (object->type() == QEvent::KeyPress || object->type() == QEvent::KeyRelease) {
        *class_name = "QKeyEvent";
        return (QKeyEvent*)object;
    }
    if (object->type() == QEvent::ContextMenu) {
        *class_name = "QContextMenuEvent";
        return (QContextMenuEvent*)object;
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
    if (object->type() == QEvent::GraphicsSceneMouseDoubleClick || object->type() == QEvent::GraphicsSceneMouseMove || object->type() == QEvent::GraphicsSceneMousePress || object->type() == QEvent::GraphicsSceneMouseRelease) {
        *class_name = "QGraphicsSceneMouseEvent";
        return (QGraphicsSceneMouseEvent*)object;
    }
    if (object->type() == QEvent::DragEnter) {
        *class_name = "QDragEnterEvent";
        return (QDragEnterEvent*)object;
    }
    return NULL;
}

void PythonQt_init_QtGui() {
PythonQt::self()->registerCPPClass("QTextImageFormat", "QTextCharFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextImageFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextImageFormat>);
PythonQt::self()->registerCPPClass("QStyleOptionButton", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionButton>);
PythonQt::self()->registerCPPClass("QGraphicsItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsItem>);
PythonQt::self()->registerCPPClass("QTextFrameFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFrameFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextFrameFormat>);
PythonQt::self()->registerCPPClass("QStyleOptionTabBarBase", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabBarBase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabBarBase>);
PythonQt::self()->registerClass(&QStackedLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStackedLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStackedLayout>);
PythonQt::self()->registerClass(&QProgressBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QProgressBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProgressBar>);
PythonQt::self()->registerClass(&QTextFrame::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextFrame>);
PythonQt::self()->registerClass(&QRadioButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QRadioButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRadioButton>);
PythonQt::self()->registerCPPClass("QShortcutEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QShortcutEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QShortcutEvent>);
PythonQt::self()->registerCPPClass("QStyleOptionComboBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionComboBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionComboBox>);
PythonQt::self()->registerCPPClass("QHoverEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHoverEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHoverEvent>);
PythonQt::self()->registerClass(&QPictureFormatPlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPictureFormatPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPictureFormatPlugin>);
PythonQt::self()->registerCPPClass("QGraphicsSceneHoverEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneHoverEvent>);
PythonQt::self()->registerCPPClass("QAccessibleObject", "QAccessibleInterface", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleObject>);
PythonQt::self()->registerCPPClass("QTextTableCell", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableCell>);
PythonQt::self()->registerClass(&QAbstractSpinBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractSpinBox>);
PythonQt::self()->registerClass(&QPlastiqueStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPlastiqueStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPlastiqueStyle>);
PythonQt::self()->registerCPPClass("QRadialGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRadialGradient>);
PythonQt::self()->registerCPPClass("QMoveEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMoveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMoveEvent>);
PythonQt::self()->registerClass(&QComboBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QComboBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QComboBox>);
PythonQt::self()->registerClass(&QLineEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLineEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLineEdit>);
PythonQt::self()->registerClass(&QButtonGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QButtonGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QButtonGroup>);
PythonQt::self()->registerCPPClass("QStyleOptionTabV2", "QStyleOptionTab", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabV2>);
PythonQt::self()->registerClass(&QAbstractPageSetupDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractPageSetupDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractPageSetupDialog>);
PythonQt::self()->registerCPPClass("QResizeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QResizeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QResizeEvent>);
PythonQt::self()->registerClass(&QInputDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputDialog>);
PythonQt::self()->registerClass(&QAbstractItemView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractItemView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractItemView>);
PythonQt::self()->registerCPPClass("QPainterPathStroker", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPathStroker>);
PythonQt::self()->registerClass(&QRubberBand::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QRubberBand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRubberBand>);
PythonQt::self()->registerClass(&QMotifStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMotifStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMotifStyle>);
PythonQt::self()->registerClass(&QStyledItemDelegate::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyledItemDelegate>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyledItemDelegate>);
PythonQt::self()->registerCPPClass("QIconDragEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconDragEvent>);
PythonQt::self()->registerCPPClass("QHelpEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHelpEvent>);
PythonQt::self()->registerClass(&QUndoStack::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoStack>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoStack>);
PythonQt::self()->registerCPPClass("QStyleOptionSlider", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSlider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSlider>);
PythonQt::self()->registerCPPClass("QTextBlock", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlock>);
PythonQt::self()->registerClass(&QTextList::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextList>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextList>);
PythonQt::self()->registerCPPClass("QTableWidgetSelectionRange", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidgetSelectionRange>);
PythonQt::self()->registerClass(&QStatusBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStatusBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStatusBar>);
PythonQt::self()->registerClass(&QDoubleSpinBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDoubleSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDoubleSpinBox>);
PythonQt::self()->registerCPPClass("QIconEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIconEngine>);
PythonQt::self()->registerCPPClass("QAccessibleInterface", "QAccessible", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleInterface>);
PythonQt::self()->registerCPPClass("QInputContextFactory", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputContextFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputContextFactory>);
PythonQt::self()->registerCPPClass("QClipboardEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QClipboardEvent>);
PythonQt::self()->registerCPPClass("QStyleOptionTab", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTab>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTab>);
PythonQt::self()->registerCPPClass("QContextMenuEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QContextMenuEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QContextMenuEvent>);
PythonQt::self()->registerClass(&QCompleter::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCompleter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCompleter>);
PythonQt::self()->registerCPPClass("QPicture", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPicture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPicture>);
PythonQt::self()->addParentClass("QPicture", "QPaintDevice",PythonQtUpcastingOffset<QPicture,QPaintDevice>());
PythonQt::self()->registerCPPClass("QTextCursor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextCursor>);
PythonQt::self()->registerClass(&QGroupBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGroupBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGroupBox>);
PythonQt::self()->registerClass(&QLabel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLabel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLabel>);
PythonQt::self()->registerClass(&QFrame::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFrame>);
PythonQt::self()->registerClass(&QStylePlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStylePlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStylePlugin>);
PythonQt::self()->registerClass(&QUndoGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoGroup>);
PythonQt::self()->registerCPPClass("QAbstractGraphicsShapeItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractGraphicsShapeItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractGraphicsShapeItem>);
PythonQt::self()->addParentClass("QAbstractGraphicsShapeItem", "QGraphicsItem",PythonQtUpcastingOffset<QAbstractGraphicsShapeItem,QGraphicsItem>());
PythonQt::self()->registerClass(&QTextBlockGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockGroup>);
PythonQt::self()->registerCPPClass("QGraphicsSceneEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneEvent>);
PythonQt::self()->registerCPPClass("QGraphicsSceneWheelEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneWheelEvent>);
PythonQt::self()->registerCPPClass("QStyleOptionGroupBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionGroupBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionGroupBox>);
PythonQt::self()->registerClass(&QCommonStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCommonStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCommonStyle>);
PythonQt::self()->registerClass(&QPageSetupDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPageSetupDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPageSetupDialog>);
PythonQt::self()->registerCPPClass("QGraphicsItemGroup", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsItemGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsItemGroup>);
PythonQt::self()->addParentClass("QGraphicsItemGroup", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsItemGroup,QGraphicsItem>());
PythonQt::self()->registerClass(&QFontComboBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontComboBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFontComboBox>);
PythonQt::self()->registerCPPClass("QGraphicsSceneDragDropEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneDragDropEvent>);
PythonQt::self()->registerClass(&QUndoView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoView>);
PythonQt::self()->registerCPPClass("QAccessibleInterfaceEx", "QAccessibleInterface", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleInterfaceEx>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleInterfaceEx>);
PythonQt::self()->registerClass(&QTextObject::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextObject>);
PythonQt::self()->registerClass(&QToolButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QToolButton>);
PythonQt::self()->registerCPPClass("QSpacerItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSpacerItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSpacerItem>);
PythonQt::self()->addParentClass("QSpacerItem", "QLayoutItem",PythonQtUpcastingOffset<QSpacerItem,QLayoutItem>());
PythonQt::self()->registerCPPClass("QStyleOptionMenuItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionMenuItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionMenuItem>);
PythonQt::self()->registerCPPClass("QWheelEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWheelEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWheelEvent>);
PythonQt::self()->registerCPPClass("QStyleOptionToolBox", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBox>);
PythonQt::self()->registerClass(&QIconEnginePluginV2::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconEnginePluginV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIconEnginePluginV2>);
PythonQt::self()->registerClass(&QIntValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QIntValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIntValidator>);
PythonQt::self()->registerCPPClass("QItemSelectionRange", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemSelectionRange>);
PythonQt::self()->registerClass(&QGraphicsProxyWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsProxyWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsProxyWidget>);
PythonQt::self()->registerCPPClass("QFocusEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFocusEvent>);
PythonQt::self()->registerClass(&QSplitter::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSplitter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSplitter>);
PythonQt::self()->registerClass(&QListView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QListView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QListView>);
PythonQt::self()->registerCPPClass("QAccessible", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessible>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessible>);
PythonQt::self()->registerClass(&QAbstractItemDelegate::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractItemDelegate>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractItemDelegate>);
PythonQt::self()->registerCPPClass("QDragLeaveEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragLeaveEvent>);
PythonQt::self()->registerCPPClass("QMouseEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMouseEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMouseEvent>);
PythonQt::self()->registerCPPClass("QStyleOptionDockWidget", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionDockWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionDockWidget>);
PythonQt::self()->registerCPPClass("QItemEditorCreatorBase", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemEditorCreatorBase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemEditorCreatorBase>);
PythonQt::self()->registerClass(&QLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLayout>);
PythonQt::self()->addParentClass("QLayout", "QLayoutItem",PythonQtUpcastingOffset<QLayout,QLayoutItem>());
PythonQt::self()->registerClass(&QStandardItemModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStandardItemModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStandardItemModel>);
PythonQt::self()->registerClass(&QSlider::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSlider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSlider>);
PythonQt::self()->registerCPPClass("QAccessibleTableInterface", "QAccessible2Interface", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleTableInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleTableInterface>);
PythonQt::self()->registerCPPClass("QCloseEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QCloseEvent>);
PythonQt::self()->registerCPPClass("QWindowStateChangeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWindowStateChangeEvent>);
PythonQt::self()->registerCPPClass("QTextObjectInterface", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextObjectInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextObjectInterface>);
PythonQt::self()->registerCPPClass("QShowEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QShowEvent>);
PythonQt::self()->registerCPPClass("QImageWriter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageWriter>);
PythonQt::self()->registerClass(&QInputContext::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputContext>);
PythonQt::self()->registerCPPClass("QTreeWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTreeWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTreeWidgetItem>);
PythonQt::self()->registerClass(&QGraphicsWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsWidget>);
PythonQt::self()->addParentClass("QGraphicsWidget", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsWidget,QGraphicsItem>());
PythonQt::self()->addParentClass("QGraphicsWidget", "QGraphicsLayoutItem",PythonQtUpcastingOffset<QGraphicsWidget,QGraphicsLayoutItem>());
PythonQt::self()->registerClass(&QItemDelegate::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemDelegate>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemDelegate>);
PythonQt::self()->registerCPPClass("QAccessibleWidget", "QAccessibleObject", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleWidget>);
PythonQt::self()->registerClass(&QFormLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFormLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFormLayout>);
PythonQt::self()->registerClass(&QTextDocument::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextDocument>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextDocument>);
PythonQt::self()->registerClass(&QDoubleValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDoubleValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDoubleValidator>);
PythonQt::self()->registerClass(&QCommandLinkButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCommandLinkButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCommandLinkButton>);
PythonQt::self()->registerCPPClass("QStyleHintReturnMask", "QStyleHintReturn", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturnMask>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturnMask>);
PythonQt::self()->registerCPPClass("QTransform", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTransform>);
PythonQt::self()->registerClass(&QAbstractSlider::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractSlider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractSlider>);
PythonQt::self()->registerClass(&QMovie::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMovie>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMovie>);
PythonQt::self()->registerCPPClass("QAccessibleWidgetEx", "QAccessibleObjectEx", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleWidgetEx>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleWidgetEx>);
PythonQt::self()->registerClass(&QScrollArea::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollArea>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScrollArea>);
PythonQt::self()->registerClass(&QAbstractPrintDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractPrintDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractPrintDialog>);
PythonQt::self()->registerCPPClass("QActionEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QActionEvent>);
PythonQt::self()->registerClass(&QProgressDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QProgressDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProgressDialog>);
PythonQt::self()->registerClass(&QPrintPreviewWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintPreviewWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintPreviewWidget>);
PythonQt::self()->registerCPPClass("QStyleFactory", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleFactory>);
PythonQt::self()->registerCPPClass("QDragEnterEvent", "QDragMoveEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragEnterEvent>);
PythonQt::self()->registerClass(&QWidgetAction::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidgetAction>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidgetAction>);
PythonQt::self()->registerCPPClass("QToolTip", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolTip>);
PythonQt::self()->registerCPPClass("QAccessibleBridge", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleBridge>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleBridge>);
PythonQt::self()->registerClass(&QAbstractScrollArea::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractScrollArea>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractScrollArea>);
PythonQt::self()->registerClass(&QStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyle>);
PythonQt::self()->registerClass(&QWorkspace::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWorkspace>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWorkspace>);
PythonQt::self()->registerClass(&QColorDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QColorDialog>);
PythonQt::self()->registerClass(&QStringListModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStringListModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStringListModel>);
PythonQt::self()->registerCPPClass("QTextBlockUserData", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockUserData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockUserData>);
PythonQt::self()->registerCPPClass("QStyleOptionViewItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItem>);
PythonQt::self()->registerCPPClass("QGraphicsSceneHelpEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneHelpEvent>);
PythonQt::self()->registerCPPClass("QDragResponseEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragResponseEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDragResponseEvent>);
PythonQt::self()->registerCPPClass("QKeyEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeyEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QKeyEvent>);
PythonQt::self()->registerCPPClass("QPictureIO", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPictureIO>);
PythonQt::self()->registerCPPClass("QStyleHintReturnVariant", "QStyleHintReturn", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturnVariant>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturnVariant>);
PythonQt::self()->registerCPPClass("QGraphicsLinearLayout", "QGraphicsLayout", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLinearLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLinearLayout>);
PythonQt::self()->registerCPPClass("QDesktopServices", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDesktopServices>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDesktopServices>);
PythonQt::self()->registerClass(&QSplashScreen::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSplashScreen>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSplashScreen>);
PythonQt::self()->registerClass(&QDateTimeEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDateTimeEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDateTimeEdit>);
PythonQt::self()->registerCPPClass("QPainterPath", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPath>);
PythonQt::self()->registerCPPClass("QStyleOptionFrame", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFrame>);
PythonQt::self()->registerCPPClass("QPaintEngineState", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEngineState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEngineState>);
PythonQt::self()->registerClass(&QFileDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileDialog>);
PythonQt::self()->registerCPPClass("QTextDocumentFragment", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextDocumentFragment>);
PythonQt::self()->registerCPPClass("QGraphicsLayout", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLayout>);
PythonQt::self()->addParentClass("QGraphicsLayout", "QGraphicsLayoutItem",PythonQtUpcastingOffset<QGraphicsLayout,QGraphicsLayoutItem>());
PythonQt::self()->registerCPPClass("QTextListFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextListFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextListFormat>);
PythonQt::self()->registerClass(&QMdiArea::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMdiArea>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMdiArea>);
PythonQt::self()->registerCPPClass("QItemEditorFactory", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemEditorFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemEditorFactory>);
PythonQt::self()->registerCPPClass("QTextTableCellFormat", "QTextCharFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableCellFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTableCellFormat>);
PythonQt::self()->registerCPPClass("QStylePainter", "QPainter", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStylePainter>);
PythonQt::self()->registerCPPClass("QTextCharFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextCharFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCharFormat>);
PythonQt::self()->registerCPPClass("QItemSelection", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemSelection>);
PythonQt::self()->registerCPPClass("QConicalGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QConicalGradient>);
PythonQt::self()->registerCPPClass("QStyleHintReturn", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturn>);
PythonQt::self()->registerClass(&QDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDialog>);
PythonQt::self()->registerClass(&QGridLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGridLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGridLayout>);
PythonQt::self()->registerCPPClass("QGraphicsGridLayout", "QGraphicsLayout", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsGridLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsGridLayout>);
PythonQt::self()->registerCPPClass("QPixmapCache", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPixmapCache>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPixmapCache>);
PythonQt::self()->registerCPPClass("QInputEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputEvent>);
PythonQt::self()->registerCPPClass("QLinearGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QLinearGradient>);
PythonQt::self()->registerCPPClass("QGraphicsLineItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLineItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLineItem>);
PythonQt::self()->addParentClass("QGraphicsLineItem", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsLineItem,QGraphicsItem>());
PythonQt::self()->registerClass(&QCalendarWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCalendarWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCalendarWidget>);
PythonQt::self()->registerCPPClass("QAccessibleEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleEvent>);
PythonQt::self()->registerCPPClass("QStyleOptionToolButton", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolButton>);
PythonQt::self()->registerCPPClass("QAccessible2Interface", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessible2Interface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessible2Interface>);
PythonQt::self()->registerCPPClass("QWhatsThisClickedEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWhatsThisClickedEvent>);
PythonQt::self()->registerCPPClass("QStatusTipEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStatusTipEvent>);
PythonQt::self()->registerCPPClass("QGraphicsSimpleTextItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSimpleTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsSimpleTextItem>);
PythonQt::self()->registerCPPClass("QStyleOptionSizeGrip", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSizeGrip>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSizeGrip>);
PythonQt::self()->registerClass(&QToolBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QToolBar>);
PythonQt::self()->registerClass(&QDesktopWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDesktopWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDesktopWidget>);
PythonQt::self()->registerCPPClass("QUndoCommand", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoCommand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoCommand>);
PythonQt::self()->registerClass(&QMenu::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMenu>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMenu>);
PythonQt::self()->registerCPPClass("QTextTableFormat", "QTextFrameFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTableFormat>);
PythonQt::self()->registerClass(&QPlainTextDocumentLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPlainTextDocumentLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPlainTextDocumentLayout>);
PythonQt::self()->registerClass(&QWizardPage::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWizardPage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWizardPage>);
PythonQt::self()->registerCPPClass("QPrinter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrinter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrinter>);
PythonQt::self()->addParentClass("QPrinter", "QPaintDevice",PythonQtUpcastingOffset<QPrinter,QPaintDevice>());
PythonQt::self()->registerCPPClass("QWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidgetItem>);
PythonQt::self()->addParentClass("QWidgetItem", "QLayoutItem",PythonQtUpcastingOffset<QWidgetItem,QLayoutItem>());
PythonQt::self()->registerClass(&QSound::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSound>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSound>);
PythonQt::self()->registerClass(&QMainWindow::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMainWindow>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMainWindow>);
PythonQt::self()->registerClass(&QPrintDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintDialog>);
PythonQt::self()->registerCPPClass("QFileIconProvider", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileIconProvider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileIconProvider>);
PythonQt::self()->registerClass(&QDial::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDial>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDial>);
PythonQt::self()->registerCPPClass("QTextItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextItem>);
PythonQt::self()->registerCPPClass("QStyleOption", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOption>);
PythonQt::self()->registerCPPClass("QHideEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHideEvent>);
PythonQt::self()->registerCPPClass("QPolygonF", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPolygonF>);
PythonQt::self()->registerCPPClass("QReadWriteLock", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QReadWriteLock>);
PythonQt::self()->registerClass(&QListWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QListWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QListWidget>);
PythonQt::self()->registerClass(&QTextBrowser::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBrowser>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBrowser>);
PythonQt::self()->registerCPPClass("QStyleOptionToolBar", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBar>);
PythonQt::self()->registerCPPClass("QGraphicsPathItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsPathItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsPathItem>);
PythonQt::self()->registerClass(&QPlainTextEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPlainTextEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPlainTextEdit>);
PythonQt::self()->registerClass(&QDataWidgetMapper::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDataWidgetMapper>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDataWidgetMapper>);
PythonQt::self()->registerCPPClass("QListWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QListWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QListWidgetItem>);
PythonQt::self()->registerClass(&QTableView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTableView>);
PythonQt::self()->registerCPPClass("QTextFragment", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFragment>);
PythonQt::self()->registerClass(&QMessageBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMessageBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMessageBox>);
PythonQt::self()->registerClass(&QDateEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDateEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDateEdit>);
PythonQt::self()->registerCPPClass("QStyleOptionToolBoxV2", "QStyleOptionToolBox", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBoxV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBoxV2>);
PythonQt::self()->registerClass(&QCheckBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCheckBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCheckBox>);
PythonQt::self()->registerClass(&QValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QValidator>);
PythonQt::self()->registerCPPClass("QGraphicsSceneMoveEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneMoveEvent>);
PythonQt::self()->registerClass(&QGraphicsItemAnimation::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsItemAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsItemAnimation>);
PythonQt::self()->registerClass(&QTextTable::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTable>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTable>);
PythonQt::self()->registerClass(&QAbstractButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractButton>);
PythonQt::self()->registerClass(&QRegExpValidator::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QRegExpValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRegExpValidator>);
PythonQt::self()->registerClass(&QErrorMessage::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QErrorMessage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QErrorMessage>);
PythonQt::self()->registerCPPClass("QLayoutItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QLayoutItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLayoutItem>);
PythonQt::self()->registerClass(&QHBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QHBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHBoxLayout>);
PythonQt::self()->registerClass(&QWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidget>);
PythonQt::self()->addParentClass("QWidget", "QPaintDevice",PythonQtUpcastingOffset<QWidget,QPaintDevice>());
PythonQt::self()->registerCPPClass("QImageReader", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageReader>);
PythonQt::self()->registerCPPClass("QGraphicsSceneResizeEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneResizeEvent>);
PythonQt::self()->registerCPPClass("QStyleOptionTitleBar", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTitleBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTitleBar>);
PythonQt::self()->registerCPPClass("QWhatsThis", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWhatsThis>);
PythonQt::self()->registerCPPClass("QGraphicsEllipseItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsEllipseItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsEllipseItem>);
PythonQt::self()->registerClass(&QAction::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAction>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAction>);
PythonQt::self()->registerClass(&QVBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QVBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVBoxLayout>);
PythonQt::self()->registerClass(&QShortcut::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QShortcut>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QShortcut>);
PythonQt::self()->registerClass(&QMdiSubWindow::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMdiSubWindow>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMdiSubWindow>);
PythonQt::self()->registerCPPClass("QTabletEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabletEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabletEvent>);
PythonQt::self()->registerClass(&QInputContextPlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputContextPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputContextPlugin>);
PythonQt::self()->registerCPPClass("QGraphicsSceneContextMenuEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneContextMenuEvent>);
PythonQt::self()->registerClass(&QItemSelectionModel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemSelectionModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemSelectionModel>);
PythonQt::self()->registerCPPClass("QFontMetrics", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontMetrics>);
PythonQt::self()->registerClass(&QTreeView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTreeView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTreeView>);
PythonQt::self()->registerClass(&QSystemTrayIcon::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSystemTrayIcon>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSystemTrayIcon>);
PythonQt::self()->registerClass(&QImageIOPlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageIOPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImageIOPlugin>);
PythonQt::self()->registerClass(&QPushButton::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPushButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPushButton>);
PythonQt::self()->registerCPPClass("QGraphicsSceneMouseEvent", "QGraphicsSceneEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsSceneMouseEvent>);
PythonQt::self()->registerClass(&QScrollBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScrollBar>);
PythonQt::self()->registerClass(&QSyntaxHighlighter::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSyntaxHighlighter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSyntaxHighlighter>);
PythonQt::self()->registerCPPClass("QStyleOptionProgressBar", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionProgressBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionProgressBar>);
PythonQt::self()->registerClass(&QSpinBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSpinBox>);
PythonQt::self()->registerClass(&QTimeEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTimeEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimeEdit>);
PythonQt::self()->registerCPPClass("QDropEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDropEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDropEvent>);
PythonQt::self()->registerCPPClass("QStyleOptionTabWidgetFrame", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabWidgetFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabWidgetFrame>);
PythonQt::self()->registerClass(&QSizeGrip::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSizeGrip>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSizeGrip>);
PythonQt::self()->registerCPPClass("QAccessibleObjectEx", "QAccessibleInterfaceEx", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleObjectEx>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleObjectEx>);
PythonQt::self()->registerClass(&QClipboard::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QClipboard>);
PythonQt::self()->registerClass(&QCleanlooksStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCleanlooksStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCleanlooksStyle>);
PythonQt::self()->registerCPPClass("QPainter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainter>);
PythonQt::self()->registerCPPClass("QStyleOptionHeader", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionHeader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionHeader>);
PythonQt::self()->registerCPPClass("QDragMoveEvent", "QDropEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragMoveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDragMoveEvent>);
PythonQt::self()->registerClass(&QColumnView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QColumnView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QColumnView>);
PythonQt::self()->registerClass(&QWizard::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWizard>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWizard>);
PythonQt::self()->registerCPPClass("QImageIOHandler", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageIOHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImageIOHandler>);
PythonQt::self()->registerCPPClass("QPaintDevice", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintDevice>);
PythonQt::self()->registerCPPClass("QGradient", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGradient>);
PythonQt::self()->registerClass(&QLCDNumber::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLCDNumber>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLCDNumber>);
PythonQt::self()->registerCPPClass("QGraphicsLayoutItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsLayoutItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsLayoutItem>);
PythonQt::self()->registerCPPClass("QStyleOptionViewItemV2", "QStyleOptionViewItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItemV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItemV2>);
PythonQt::self()->registerCPPClass("QStyleOptionViewItemV3", "QStyleOptionViewItemV2", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItemV3>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItemV3>);
PythonQt::self()->registerCPPClass("QStyleOptionViewItemV4", "QStyleOptionViewItemV3", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItemV4>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItemV4>);
PythonQt::self()->registerCPPClass("QPaintEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEngine>);
PythonQt::self()->registerCPPClass("QGraphicsPixmapItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsPixmapItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsPixmapItem>);
PythonQt::self()->addParentClass("QGraphicsPixmapItem", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsPixmapItem,QGraphicsItem>());
PythonQt::self()->registerClass(&QActionGroup::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QActionGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QActionGroup>);
PythonQt::self()->registerClass(&QApplication::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QApplication>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QApplication>);
PythonQt::self()->registerCPPClass("QStyleOptionSpinBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSpinBox>);
PythonQt::self()->registerCPPClass("QFontMetricsF", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontMetricsF>);
PythonQt::self()->registerCPPClass("QTextInlineObject", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextInlineObject>);
PythonQt::self()->registerCPPClass("QStyleOptionGraphicsItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionGraphicsItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionGraphicsItem>);
PythonQt::self()->registerClass(&QTabWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabWidget>);
PythonQt::self()->registerClass(&QTabBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabBar>);
PythonQt::self()->registerClass(&QTreeWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTreeWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTreeWidget>);
PythonQt::self()->registerClass(&QSplitterHandle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSplitterHandle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSplitterHandle>);
PythonQt::self()->registerCPPClass("QTableWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTableWidgetItem>);
PythonQt::self()->registerClass(&QCDEStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QCDEStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCDEStyle>);
PythonQt::self()->registerClass(&QAccessiblePlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessiblePlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessiblePlugin>);
PythonQt::self()->registerClass(&QPrintPreviewDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintPreviewDialog>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintPreviewDialog>);
PythonQt::self()->registerClass(&QDrag::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDrag>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDrag>);
PythonQt::self()->registerCPPClass("QStyleOptionRubberBand", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionRubberBand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionRubberBand>);
PythonQt::self()->registerClass(&QStackedWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStackedWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStackedWidget>);
PythonQt::self()->registerClass(&QSessionManager::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QSessionManager>);
PythonQt::self()->registerCPPClass("QStandardItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStandardItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStandardItem>);
PythonQt::self()->registerClass(&QDockWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDockWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDockWidget>);
PythonQt::self()->registerClass(&QGraphicsScene::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsScene>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsScene>);
PythonQt::self()->registerClass(&QTextEdit::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextEdit>);
PythonQt::self()->registerClass(&QDialogButtonBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QDialogButtonBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDialogButtonBox>);
PythonQt::self()->registerCPPClass("QGraphicsPolygonItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsPolygonItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsPolygonItem>);
PythonQt::self()->registerCPPClass("QPrintEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintEngine>);
PythonQt::self()->registerClass(&QHeaderView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QHeaderView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHeaderView>);
PythonQt::self()->registerClass(&QBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBoxLayout>);
PythonQt::self()->registerClass(&QFocusFrame::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFocusFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFocusFrame>);
PythonQt::self()->registerCPPClass("QTextBlockFormat", "QTextFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockFormat>);
PythonQt::self()->registerClass(&QFontDialog::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontDialog>);
PythonQt::self()->registerCPPClass("QStyleOptionProgressBarV2", "QStyleOptionProgressBar", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionProgressBarV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionProgressBarV2>);
PythonQt::self()->registerCPPClass("QPaintEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEvent>);
PythonQt::self()->registerClass(&QTableWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTableWidget>);
PythonQt::self()->registerCPPClass("QFileOpenEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileOpenEvent>);
PythonQt::self()->registerCPPClass("QStyleOptionFrameV2", "QStyleOptionFrame", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFrameV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFrameV2>);
PythonQt::self()->registerClass(&QToolBox::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QToolBox>);
PythonQt::self()->registerClass(&QGraphicsView::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsView>);
PythonQt::self()->registerCPPClass("QTextLine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLine>);
PythonQt::self()->registerCPPClass("QToolBarChangeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBarChangeEvent>);
PythonQt::self()->registerClass(&QWindowsStyle::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWindowsStyle>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWindowsStyle>);
PythonQt::self()->registerClass(&QGraphicsTextItem::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsTextItem>);
PythonQt::self()->addParentClass("QGraphicsTextItem", "QGraphicsItem",PythonQtUpcastingOffset<QGraphicsTextItem,QGraphicsItem>());
PythonQt::self()->registerCPPClass("QStyleOptionDockWidgetV2", "QStyleOptionDockWidget", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionDockWidgetV2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionDockWidgetV2>);
PythonQt::self()->registerCPPClass("QFontInfo", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontInfo>);
PythonQt::self()->registerCPPClass("QGraphicsRectItem", "QAbstractGraphicsShapeItem", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsRectItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsRectItem>);
PythonQt::self()->registerCPPClass("QStyleOptionFocusRect", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFocusRect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFocusRect>);
PythonQt::self()->registerClass(&QMenuBar::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QMenuBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMenuBar>);

PythonQt::self()->addPolymorphicHandler("QStyleOption", polymorphichandler_QStyleOption);
PythonQt::self()->addPolymorphicHandler("QGradient", polymorphichandler_QGradient);
PythonQt::self()->addPolymorphicHandler("QEvent", polymorphichandler_QEvent);
}
