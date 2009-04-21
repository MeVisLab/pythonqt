#ifndef PYTHONQTWRAPPER_QACCESSIBLE_H
#define PYTHONQTWRAPPER_QACCESSIBLE_H

#include <qaccessible.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaccessible.h>
#include <qobject.h>

class PythonQtShell_QAccessible : public QAccessible
{
public:
    PythonQtShell_QAccessible():QAccessible(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessible : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Method Role Action Event RelationFlag StateFlag Text )
enum Method{
  ListSupportedMethods = QAccessible::ListSupportedMethods,   SetCursorPosition = QAccessible::SetCursorPosition,   GetCursorPosition = QAccessible::GetCursorPosition,   ForegroundColor = QAccessible::ForegroundColor,   BackgroundColor = QAccessible::BackgroundColor};
enum Role{
  NoRole = QAccessible::NoRole,   TitleBar = QAccessible::TitleBar,   MenuBar = QAccessible::MenuBar,   ScrollBar = QAccessible::ScrollBar,   Grip = QAccessible::Grip,   Sound = QAccessible::Sound,   Cursor = QAccessible::Cursor,   Caret = QAccessible::Caret,   AlertMessage = QAccessible::AlertMessage,   Window = QAccessible::Window,   Client = QAccessible::Client,   PopupMenu = QAccessible::PopupMenu,   MenuItem = QAccessible::MenuItem,   ToolTip = QAccessible::ToolTip,   Application = QAccessible::Application,   Document = QAccessible::Document,   Pane = QAccessible::Pane,   Chart = QAccessible::Chart,   Dialog = QAccessible::Dialog,   Border = QAccessible::Border,   Grouping = QAccessible::Grouping,   Separator = QAccessible::Separator,   ToolBar = QAccessible::ToolBar,   StatusBar = QAccessible::StatusBar,   Table = QAccessible::Table,   ColumnHeader = QAccessible::ColumnHeader,   RowHeader = QAccessible::RowHeader,   Column = QAccessible::Column,   Row = QAccessible::Row,   Cell = QAccessible::Cell,   Link = QAccessible::Link,   HelpBalloon = QAccessible::HelpBalloon,   Assistant = QAccessible::Assistant,   List = QAccessible::List,   ListItem = QAccessible::ListItem,   Tree = QAccessible::Tree,   TreeItem = QAccessible::TreeItem,   PageTab = QAccessible::PageTab,   PropertyPage = QAccessible::PropertyPage,   Indicator = QAccessible::Indicator,   Graphic = QAccessible::Graphic,   StaticText = QAccessible::StaticText,   EditableText = QAccessible::EditableText,   PushButton = QAccessible::PushButton,   CheckBox = QAccessible::CheckBox,   RadioButton = QAccessible::RadioButton,   ComboBox = QAccessible::ComboBox,   ProgressBar = QAccessible::ProgressBar,   Dial = QAccessible::Dial,   HotkeyField = QAccessible::HotkeyField,   Slider = QAccessible::Slider,   SpinBox = QAccessible::SpinBox,   Canvas = QAccessible::Canvas,   Animation = QAccessible::Animation,   Equation = QAccessible::Equation,   ButtonDropDown = QAccessible::ButtonDropDown,   ButtonMenu = QAccessible::ButtonMenu,   ButtonDropGrid = QAccessible::ButtonDropGrid,   Whitespace = QAccessible::Whitespace,   PageTabList = QAccessible::PageTabList,   Clock = QAccessible::Clock,   Splitter = QAccessible::Splitter,   LayeredPane = QAccessible::LayeredPane,   UserRole = QAccessible::UserRole};
enum Action{
  DefaultAction = QAccessible::DefaultAction,   Press = QAccessible::Press,   FirstStandardAction = QAccessible::FirstStandardAction,   SetFocus = QAccessible::SetFocus,   Increase = QAccessible::Increase,   Decrease = QAccessible::Decrease,   Accept = QAccessible::Accept,   Cancel = QAccessible::Cancel,   Select = QAccessible::Select,   ClearSelection = QAccessible::ClearSelection,   RemoveSelection = QAccessible::RemoveSelection,   ExtendSelection = QAccessible::ExtendSelection,   AddToSelection = QAccessible::AddToSelection,   LastStandardAction = QAccessible::LastStandardAction};
enum Event{
  SoundPlayed = QAccessible::SoundPlayed,   Alert = QAccessible::Alert,   ForegroundChanged = QAccessible::ForegroundChanged,   MenuStart = QAccessible::MenuStart,   MenuEnd = QAccessible::MenuEnd,   PopupMenuStart = QAccessible::PopupMenuStart,   PopupMenuEnd = QAccessible::PopupMenuEnd,   ContextHelpStart = QAccessible::ContextHelpStart,   ContextHelpEnd = QAccessible::ContextHelpEnd,   DragDropStart = QAccessible::DragDropStart,   DragDropEnd = QAccessible::DragDropEnd,   DialogStart = QAccessible::DialogStart,   DialogEnd = QAccessible::DialogEnd,   ScrollingStart = QAccessible::ScrollingStart,   ScrollingEnd = QAccessible::ScrollingEnd,   MenuCommand = QAccessible::MenuCommand,   ObjectCreated = QAccessible::ObjectCreated,   ObjectDestroyed = QAccessible::ObjectDestroyed,   ObjectShow = QAccessible::ObjectShow,   ObjectHide = QAccessible::ObjectHide,   ObjectReorder = QAccessible::ObjectReorder,   Focus = QAccessible::Focus,   Selection = QAccessible::Selection,   SelectionAdd = QAccessible::SelectionAdd,   SelectionRemove = QAccessible::SelectionRemove,   SelectionWithin = QAccessible::SelectionWithin,   StateChanged = QAccessible::StateChanged,   LocationChanged = QAccessible::LocationChanged,   NameChanged = QAccessible::NameChanged,   DescriptionChanged = QAccessible::DescriptionChanged,   ValueChanged = QAccessible::ValueChanged,   ParentChanged = QAccessible::ParentChanged,   HelpChanged = QAccessible::HelpChanged,   DefaultActionChanged = QAccessible::DefaultActionChanged,   AcceleratorChanged = QAccessible::AcceleratorChanged};
enum RelationFlag{
  Unrelated = QAccessible::Unrelated,   Self = QAccessible::Self,   Ancestor = QAccessible::Ancestor,   Child = QAccessible::Child,   Descendent = QAccessible::Descendent,   Sibling = QAccessible::Sibling,   HierarchyMask = QAccessible::HierarchyMask,   Up = QAccessible::Up,   Down = QAccessible::Down,   Left = QAccessible::Left,   Right = QAccessible::Right,   Covers = QAccessible::Covers,   Covered = QAccessible::Covered,   GeometryMask = QAccessible::GeometryMask,   FocusChild = QAccessible::FocusChild,   Label = QAccessible::Label,   Labelled = QAccessible::Labelled,   Controller = QAccessible::Controller,   Controlled = QAccessible::Controlled,   LogicalMask = QAccessible::LogicalMask};
enum StateFlag{
  Normal = QAccessible::Normal,   Unavailable = QAccessible::Unavailable,   Selected = QAccessible::Selected,   Focused = QAccessible::Focused,   Pressed = QAccessible::Pressed,   Checked = QAccessible::Checked,   Mixed = QAccessible::Mixed,   ReadOnly = QAccessible::ReadOnly,   HotTracked = QAccessible::HotTracked,   DefaultButton = QAccessible::DefaultButton,   Expanded = QAccessible::Expanded,   Collapsed = QAccessible::Collapsed,   Busy = QAccessible::Busy,   Marqueed = QAccessible::Marqueed,   Animated = QAccessible::Animated,   Invisible = QAccessible::Invisible,   Offscreen = QAccessible::Offscreen,   Sizeable = QAccessible::Sizeable,   Movable = QAccessible::Movable,   SelfVoicing = QAccessible::SelfVoicing,   Focusable = QAccessible::Focusable,   Selectable = QAccessible::Selectable,   Linked = QAccessible::Linked,   Traversed = QAccessible::Traversed,   MultiSelectable = QAccessible::MultiSelectable,   ExtSelectable = QAccessible::ExtSelectable,   Protected = QAccessible::Protected,   HasPopup = QAccessible::HasPopup,   Modal = QAccessible::Modal,   HasInvokeExtension = QAccessible::HasInvokeExtension};
enum Text{
  Name = QAccessible::Name,   Description = QAccessible::Description,   Value = QAccessible::Value,   Help = QAccessible::Help,   Accelerator = QAccessible::Accelerator,   UserText = QAccessible::UserText};
public slots:
QAccessible* new_QAccessible();
void delete_QAccessible(QAccessible* obj) { delete obj; } 
   void static_QAccessible_setRootObject(QObject*  arg__1);
   void static_QAccessible_updateAccessibility(QObject*  arg__1, int  who, QAccessible::Event  reason);
   QAccessibleInterface*  static_QAccessible_queryAccessibleInterface(QObject*  arg__1);
   bool  static_QAccessible_isActive();
};

#endif // PYTHONQTWRAPPER_QACCESSIBLE_H
