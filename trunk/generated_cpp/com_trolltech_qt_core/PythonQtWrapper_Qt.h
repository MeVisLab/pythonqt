#ifndef PYTHONQTWRAPPER_QT_H
#define PYTHONQTWRAPPER_QT_H

#include <qnamespace.h>
#include <QObject>

#include <QTextDocument>
#include <QVariant>

class PythonQtWrapper_Qt : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Corner Axis SizeMode WindowType ItemDataRole SortOrder MatchFlag FocusReason KeyboardModifier WhiteSpaceMode EventPriority MaskMode UIEffect AnchorAttribute TextFlag SizeHint ToolBarAreaSizes WindowFrameSection InputMethodQuery DropAction ConnectionType TransformationMode DockWidgetAreaSizes ApplicationAttribute CheckState ImageConversionFlag Modifier AlignmentFlag WidgetAttribute MouseButton WindowState ItemFlag HitTestAccuracy )
enum Corner{
  TopLeftCorner = Qt::TopLeftCorner,   TopRightCorner = Qt::TopRightCorner,   BottomLeftCorner = Qt::BottomLeftCorner,   BottomRightCorner = Qt::BottomRightCorner};
enum Axis{
  XAxis = Qt::XAxis,   YAxis = Qt::YAxis,   ZAxis = Qt::ZAxis};
enum SizeMode{
  AbsoluteSize = Qt::AbsoluteSize,   RelativeSize = Qt::RelativeSize};
enum WindowType{
  Widget = Qt::Widget,   Window = Qt::Window,   Dialog = Qt::Dialog,   Sheet = Qt::Sheet,   Drawer = Qt::Drawer,   Popup = Qt::Popup,   Tool = Qt::Tool,   ToolTip = Qt::ToolTip,   SplashScreen = Qt::SplashScreen,   Desktop = Qt::Desktop,   SubWindow = Qt::SubWindow,   WindowType_Mask = Qt::WindowType_Mask,   MSWindowsFixedSizeDialogHint = Qt::MSWindowsFixedSizeDialogHint,   MSWindowsOwnDC = Qt::MSWindowsOwnDC,   X11BypassWindowManagerHint = Qt::X11BypassWindowManagerHint,   FramelessWindowHint = Qt::FramelessWindowHint,   WindowTitleHint = Qt::WindowTitleHint,   WindowSystemMenuHint = Qt::WindowSystemMenuHint,   WindowMinimizeButtonHint = Qt::WindowMinimizeButtonHint,   WindowMaximizeButtonHint = Qt::WindowMaximizeButtonHint,   WindowMinMaxButtonsHint = Qt::WindowMinMaxButtonsHint,   WindowContextHelpButtonHint = Qt::WindowContextHelpButtonHint,   WindowShadeButtonHint = Qt::WindowShadeButtonHint,   WindowStaysOnTopHint = Qt::WindowStaysOnTopHint,   WindowOkButtonHint = Qt::WindowOkButtonHint,   WindowCancelButtonHint = Qt::WindowCancelButtonHint,   CustomizeWindowHint = Qt::CustomizeWindowHint};
enum ItemDataRole{
  DisplayRole = Qt::DisplayRole,   DecorationRole = Qt::DecorationRole,   EditRole = Qt::EditRole,   ToolTipRole = Qt::ToolTipRole,   StatusTipRole = Qt::StatusTipRole,   WhatsThisRole = Qt::WhatsThisRole,   FontRole = Qt::FontRole,   TextAlignmentRole = Qt::TextAlignmentRole,   BackgroundColorRole = Qt::BackgroundColorRole,   BackgroundRole = Qt::BackgroundRole,   TextColorRole = Qt::TextColorRole,   ForegroundRole = Qt::ForegroundRole,   CheckStateRole = Qt::CheckStateRole,   AccessibleTextRole = Qt::AccessibleTextRole,   AccessibleDescriptionRole = Qt::AccessibleDescriptionRole,   SizeHintRole = Qt::SizeHintRole,   UserRole = Qt::UserRole};
enum SortOrder{
  AscendingOrder = Qt::AscendingOrder,   DescendingOrder = Qt::DescendingOrder};
enum MatchFlag{
  MatchExactly = Qt::MatchExactly,   MatchContains = Qt::MatchContains,   MatchStartsWith = Qt::MatchStartsWith,   MatchEndsWith = Qt::MatchEndsWith,   MatchRegExp = Qt::MatchRegExp,   MatchWildcard = Qt::MatchWildcard,   MatchFixedString = Qt::MatchFixedString,   MatchCaseSensitive = Qt::MatchCaseSensitive,   MatchWrap = Qt::MatchWrap,   MatchRecursive = Qt::MatchRecursive};
enum FocusReason{
  MouseFocusReason = Qt::MouseFocusReason,   TabFocusReason = Qt::TabFocusReason,   BacktabFocusReason = Qt::BacktabFocusReason,   ActiveWindowFocusReason = Qt::ActiveWindowFocusReason,   PopupFocusReason = Qt::PopupFocusReason,   ShortcutFocusReason = Qt::ShortcutFocusReason,   MenuBarFocusReason = Qt::MenuBarFocusReason,   OtherFocusReason = Qt::OtherFocusReason,   NoFocusReason = Qt::NoFocusReason};
enum KeyboardModifier{
  NoModifier = Qt::NoModifier,   ShiftModifier = Qt::ShiftModifier,   ControlModifier = Qt::ControlModifier,   AltModifier = Qt::AltModifier,   MetaModifier = Qt::MetaModifier,   KeypadModifier = Qt::KeypadModifier,   GroupSwitchModifier = Qt::GroupSwitchModifier,   KeyboardModifierMask = Qt::KeyboardModifierMask};
enum WhiteSpaceMode{
  WhiteSpaceNormal = Qt::WhiteSpaceNormal,   WhiteSpacePre = Qt::WhiteSpacePre,   WhiteSpaceNoWrap = Qt::WhiteSpaceNoWrap,   WhiteSpaceModeUndefined = Qt::WhiteSpaceModeUndefined};
enum EventPriority{
  HighEventPriority = Qt::HighEventPriority,   NormalEventPriority = Qt::NormalEventPriority,   LowEventPriority = Qt::LowEventPriority};
enum MaskMode{
  MaskInColor = Qt::MaskInColor,   MaskOutColor = Qt::MaskOutColor};
enum UIEffect{
  UI_General = Qt::UI_General,   UI_AnimateMenu = Qt::UI_AnimateMenu,   UI_FadeMenu = Qt::UI_FadeMenu,   UI_AnimateCombo = Qt::UI_AnimateCombo,   UI_AnimateTooltip = Qt::UI_AnimateTooltip,   UI_FadeTooltip = Qt::UI_FadeTooltip,   UI_AnimateToolBox = Qt::UI_AnimateToolBox};
enum AnchorAttribute{
  AnchorName = Qt::AnchorName,   AnchorHref = Qt::AnchorHref};
enum TextFlag{
  TextSingleLine = Qt::TextSingleLine,   TextDontClip = Qt::TextDontClip,   TextExpandTabs = Qt::TextExpandTabs,   TextShowMnemonic = Qt::TextShowMnemonic,   TextWordWrap = Qt::TextWordWrap,   TextWrapAnywhere = Qt::TextWrapAnywhere,   TextDontPrint = Qt::TextDontPrint,   TextIncludeTrailingSpaces = Qt::TextIncludeTrailingSpaces,   TextHideMnemonic = Qt::TextHideMnemonic,   TextJustificationForced = Qt::TextJustificationForced,   TextForceLeftToRight = Qt::TextForceLeftToRight,   TextForceRightToLeft = Qt::TextForceRightToLeft};
enum SizeHint{
  MinimumSize = Qt::MinimumSize,   PreferredSize = Qt::PreferredSize,   MaximumSize = Qt::MaximumSize,   MinimumDescent = Qt::MinimumDescent,   NSizeHints = Qt::NSizeHints};
enum ToolBarAreaSizes{
  NToolBarAreas = Qt::NToolBarAreas};
enum WindowFrameSection{
  NoSection = Qt::NoSection,   LeftSection = Qt::LeftSection,   TopLeftSection = Qt::TopLeftSection,   TopSection = Qt::TopSection,   TopRightSection = Qt::TopRightSection,   RightSection = Qt::RightSection,   BottomRightSection = Qt::BottomRightSection,   BottomSection = Qt::BottomSection,   BottomLeftSection = Qt::BottomLeftSection,   TitleBarArea = Qt::TitleBarArea};
enum InputMethodQuery{
  ImMicroFocus = Qt::ImMicroFocus,   ImFont = Qt::ImFont,   ImCursorPosition = Qt::ImCursorPosition,   ImSurroundingText = Qt::ImSurroundingText,   ImCurrentSelection = Qt::ImCurrentSelection};
enum DropAction{
  CopyAction = Qt::CopyAction,   MoveAction = Qt::MoveAction,   LinkAction = Qt::LinkAction,   ActionMask = Qt::ActionMask,   TargetMoveAction = Qt::TargetMoveAction,   IgnoreAction = Qt::IgnoreAction};
enum ConnectionType{
  AutoConnection = Qt::AutoConnection,   DirectConnection = Qt::DirectConnection,   QueuedConnection = Qt::QueuedConnection,   AutoCompatConnection = Qt::AutoCompatConnection,   BlockingQueuedConnection = Qt::BlockingQueuedConnection};
enum TransformationMode{
  FastTransformation = Qt::FastTransformation,   SmoothTransformation = Qt::SmoothTransformation};
enum DockWidgetAreaSizes{
  NDockWidgetAreas = Qt::NDockWidgetAreas};
enum ApplicationAttribute{
  AA_ImmediateWidgetCreation = Qt::AA_ImmediateWidgetCreation,   AA_MSWindowsUseDirect3DByDefault = Qt::AA_MSWindowsUseDirect3DByDefault,   AA_DontShowIconsInMenus = Qt::AA_DontShowIconsInMenus,   AA_NativeWindows = Qt::AA_NativeWindows,   AA_DontCreateNativeWidgetSiblings = Qt::AA_DontCreateNativeWidgetSiblings,   AA_AttributeCount = Qt::AA_AttributeCount};
enum CheckState{
  Unchecked = Qt::Unchecked,   PartiallyChecked = Qt::PartiallyChecked,   Checked = Qt::Checked};
enum ImageConversionFlag{
  ColorMode_Mask = Qt::ColorMode_Mask,   AutoColor = Qt::AutoColor,   ColorOnly = Qt::ColorOnly,   MonoOnly = Qt::MonoOnly,   AlphaDither_Mask = Qt::AlphaDither_Mask,   ThresholdAlphaDither = Qt::ThresholdAlphaDither,   OrderedAlphaDither = Qt::OrderedAlphaDither,   DiffuseAlphaDither = Qt::DiffuseAlphaDither,   NoAlpha = Qt::NoAlpha,   Dither_Mask = Qt::Dither_Mask,   DiffuseDither = Qt::DiffuseDither,   OrderedDither = Qt::OrderedDither,   ThresholdDither = Qt::ThresholdDither,   DitherMode_Mask = Qt::DitherMode_Mask,   AutoDither = Qt::AutoDither,   PreferDither = Qt::PreferDither,   AvoidDither = Qt::AvoidDither};
enum Modifier{
  META = Qt::META,   SHIFT = Qt::SHIFT,   CTRL = Qt::CTRL,   ALT = Qt::ALT,   MODIFIER_MASK = Qt::MODIFIER_MASK,   UNICODE_ACCEL = Qt::UNICODE_ACCEL};
enum AlignmentFlag{
  AlignLeft = Qt::AlignLeft,   AlignLeading = Qt::AlignLeading,   AlignRight = Qt::AlignRight,   AlignTrailing = Qt::AlignTrailing,   AlignHCenter = Qt::AlignHCenter,   AlignJustify = Qt::AlignJustify,   AlignAbsolute = Qt::AlignAbsolute,   AlignHorizontal_Mask = Qt::AlignHorizontal_Mask,   AlignTop = Qt::AlignTop,   AlignBottom = Qt::AlignBottom,   AlignVCenter = Qt::AlignVCenter,   AlignVertical_Mask = Qt::AlignVertical_Mask,   AlignCenter = Qt::AlignCenter};
enum WidgetAttribute{
  WA_Disabled = Qt::WA_Disabled,   WA_UnderMouse = Qt::WA_UnderMouse,   WA_MouseTracking = Qt::WA_MouseTracking,   WA_ContentsPropagated = Qt::WA_ContentsPropagated,   WA_OpaquePaintEvent = Qt::WA_OpaquePaintEvent,   WA_NoBackground = Qt::WA_NoBackground,   WA_StaticContents = Qt::WA_StaticContents,   WA_LaidOut = Qt::WA_LaidOut,   WA_PaintOnScreen = Qt::WA_PaintOnScreen,   WA_NoSystemBackground = Qt::WA_NoSystemBackground,   WA_UpdatesDisabled = Qt::WA_UpdatesDisabled,   WA_Mapped = Qt::WA_Mapped,   WA_MacNoClickThrough = Qt::WA_MacNoClickThrough,   WA_PaintOutsidePaintEvent = Qt::WA_PaintOutsidePaintEvent,   WA_InputMethodEnabled = Qt::WA_InputMethodEnabled,   WA_WState_Visible = Qt::WA_WState_Visible,   WA_WState_Hidden = Qt::WA_WState_Hidden,   WA_ForceDisabled = Qt::WA_ForceDisabled,   WA_KeyCompression = Qt::WA_KeyCompression,   WA_PendingMoveEvent = Qt::WA_PendingMoveEvent,   WA_PendingResizeEvent = Qt::WA_PendingResizeEvent,   WA_SetPalette = Qt::WA_SetPalette,   WA_SetFont = Qt::WA_SetFont,   WA_SetCursor = Qt::WA_SetCursor,   WA_NoChildEventsFromChildren = Qt::WA_NoChildEventsFromChildren,   WA_WindowModified = Qt::WA_WindowModified,   WA_Resized = Qt::WA_Resized,   WA_Moved = Qt::WA_Moved,   WA_PendingUpdate = Qt::WA_PendingUpdate,   WA_InvalidSize = Qt::WA_InvalidSize,   WA_MacBrushedMetal = Qt::WA_MacBrushedMetal,   WA_MacMetalStyle = Qt::WA_MacMetalStyle,   WA_CustomWhatsThis = Qt::WA_CustomWhatsThis,   WA_LayoutOnEntireRect = Qt::WA_LayoutOnEntireRect,   WA_OutsideWSRange = Qt::WA_OutsideWSRange,   WA_GrabbedShortcut = Qt::WA_GrabbedShortcut,   WA_TransparentForMouseEvents = Qt::WA_TransparentForMouseEvents,   WA_PaintUnclipped = Qt::WA_PaintUnclipped,   WA_SetWindowIcon = Qt::WA_SetWindowIcon,   WA_NoMouseReplay = Qt::WA_NoMouseReplay,   WA_DeleteOnClose = Qt::WA_DeleteOnClose,   WA_RightToLeft = Qt::WA_RightToLeft,   WA_SetLayoutDirection = Qt::WA_SetLayoutDirection,   WA_NoChildEventsForParent = Qt::WA_NoChildEventsForParent,   WA_ForceUpdatesDisabled = Qt::WA_ForceUpdatesDisabled,   WA_WState_Created = Qt::WA_WState_Created,   WA_WState_CompressKeys = Qt::WA_WState_CompressKeys,   WA_WState_InPaintEvent = Qt::WA_WState_InPaintEvent,   WA_WState_Reparented = Qt::WA_WState_Reparented,   WA_WState_ConfigPending = Qt::WA_WState_ConfigPending,   WA_WState_Polished = Qt::WA_WState_Polished,   WA_WState_DND = Qt::WA_WState_DND,   WA_WState_OwnSizePolicy = Qt::WA_WState_OwnSizePolicy,   WA_WState_ExplicitShowHide = Qt::WA_WState_ExplicitShowHide,   WA_ShowModal = Qt::WA_ShowModal,   WA_MouseNoMask = Qt::WA_MouseNoMask,   WA_GroupLeader = Qt::WA_GroupLeader,   WA_NoMousePropagation = Qt::WA_NoMousePropagation,   WA_Hover = Qt::WA_Hover,   WA_InputMethodTransparent = Qt::WA_InputMethodTransparent,   WA_QuitOnClose = Qt::WA_QuitOnClose,   WA_KeyboardFocusChange = Qt::WA_KeyboardFocusChange,   WA_AcceptDrops = Qt::WA_AcceptDrops,   WA_DropSiteRegistered = Qt::WA_DropSiteRegistered,   WA_ForceAcceptDrops = Qt::WA_ForceAcceptDrops,   WA_WindowPropagation = Qt::WA_WindowPropagation,   WA_NoX11EventCompression = Qt::WA_NoX11EventCompression,   WA_TintedBackground = Qt::WA_TintedBackground,   WA_X11OpenGLOverlay = Qt::WA_X11OpenGLOverlay,   WA_AlwaysShowToolTips = Qt::WA_AlwaysShowToolTips,   WA_MacOpaqueSizeGrip = Qt::WA_MacOpaqueSizeGrip,   WA_SetStyle = Qt::WA_SetStyle,   WA_SetLocale = Qt::WA_SetLocale,   WA_MacShowFocusRect = Qt::WA_MacShowFocusRect,   WA_MacNormalSize = Qt::WA_MacNormalSize,   WA_MacSmallSize = Qt::WA_MacSmallSize,   WA_MacMiniSize = Qt::WA_MacMiniSize,   WA_LayoutUsesWidgetRect = Qt::WA_LayoutUsesWidgetRect,   WA_StyledBackground = Qt::WA_StyledBackground,   WA_MSWindowsUseDirect3D = Qt::WA_MSWindowsUseDirect3D,   WA_CanHostQMdiSubWindowTitleBar = Qt::WA_CanHostQMdiSubWindowTitleBar,   WA_MacAlwaysShowToolWindow = Qt::WA_MacAlwaysShowToolWindow,   WA_StyleSheet = Qt::WA_StyleSheet,   WA_ShowWithoutActivating = Qt::WA_ShowWithoutActivating,   WA_X11BypassTransientForHint = Qt::WA_X11BypassTransientForHint,   WA_NativeWindow = Qt::WA_NativeWindow,   WA_DontCreateNativeAncestors = Qt::WA_DontCreateNativeAncestors,   WA_MacVariableSize = Qt::WA_MacVariableSize,   WA_DontShowOnScreen = Qt::WA_DontShowOnScreen,   WA_X11NetWmWindowTypeDesktop = Qt::WA_X11NetWmWindowTypeDesktop,   WA_X11NetWmWindowTypeDock = Qt::WA_X11NetWmWindowTypeDock,   WA_X11NetWmWindowTypeToolBar = Qt::WA_X11NetWmWindowTypeToolBar,   WA_X11NetWmWindowTypeMenu = Qt::WA_X11NetWmWindowTypeMenu,   WA_X11NetWmWindowTypeUtility = Qt::WA_X11NetWmWindowTypeUtility,   WA_X11NetWmWindowTypeSplash = Qt::WA_X11NetWmWindowTypeSplash,   WA_X11NetWmWindowTypeDialog = Qt::WA_X11NetWmWindowTypeDialog,   WA_X11NetWmWindowTypeDropDownMenu = Qt::WA_X11NetWmWindowTypeDropDownMenu,   WA_X11NetWmWindowTypePopupMenu = Qt::WA_X11NetWmWindowTypePopupMenu,   WA_X11NetWmWindowTypeToolTip = Qt::WA_X11NetWmWindowTypeToolTip,   WA_X11NetWmWindowTypeNotification = Qt::WA_X11NetWmWindowTypeNotification,   WA_X11NetWmWindowTypeCombo = Qt::WA_X11NetWmWindowTypeCombo,   WA_X11NetWmWindowTypeDND = Qt::WA_X11NetWmWindowTypeDND,   WA_AttributeCount = Qt::WA_AttributeCount};
enum MouseButton{
  NoButton = Qt::NoButton,   LeftButton = Qt::LeftButton,   RightButton = Qt::RightButton,   MidButton = Qt::MidButton,   XButton1 = Qt::XButton1,   XButton2 = Qt::XButton2,   MouseButtonMask = Qt::MouseButtonMask};
enum WindowState{
  WindowNoState = Qt::WindowNoState,   WindowMinimized = Qt::WindowMinimized,   WindowMaximized = Qt::WindowMaximized,   WindowFullScreen = Qt::WindowFullScreen,   WindowActive = Qt::WindowActive};
enum ItemFlag{
  NoItemFlags = Qt::NoItemFlags,   ItemIsSelectable = Qt::ItemIsSelectable,   ItemIsEditable = Qt::ItemIsEditable,   ItemIsDragEnabled = Qt::ItemIsDragEnabled,   ItemIsDropEnabled = Qt::ItemIsDropEnabled,   ItemIsUserCheckable = Qt::ItemIsUserCheckable,   ItemIsEnabled = Qt::ItemIsEnabled,   ItemIsTristate = Qt::ItemIsTristate};
enum HitTestAccuracy{
  ExactHit = Qt::ExactHit,   FuzzyHit = Qt::FuzzyHit};
public slots:
};

#endif // PYTHONQTWRAPPER_QT_H
