#include <PythonQt.h>
#include <QDateTime>
#include <QDir>
#include <QObject>
#include <QStringList>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdir.h>
#include <qdiriterator.h>
#include <qeasingcurve.h>
#include <qelapsedtimer.h>
#include <qeventloop.h>
#include <qeventtransition.h>
#include <qfactoryinterface.h>
#include <qfile.h>
#include <qfiledevice.h>
#include <qfileinfo.h>
#include <qfileselector.h>
#include <qfilesystemwatcher.h>
#include <qfinalstate.h>
#include <qhistorystate.h>
#include <qidentityproxymodel.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qjsonarray.h>
#include <qjsondocument.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>
#include <qlibrary.h>
#include <qlibraryinfo.h>
#include <qlist.h>
#include <qlockfile.h>
#include <qloggingcategory.h>
#include <qmargins.h>
#include <qmessageauthenticationcode.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qthread.h>
#include <qurl.h>
#include <qvector.h>



class PythonQtWrapper_QDeferredDeleteEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDeferredDeleteEvent* new_QDeferredDeleteEvent();
void delete_QDeferredDeleteEvent(QDeferredDeleteEvent* obj) { delete obj; }
   int  loopLevel(QDeferredDeleteEvent* theWrappedObject) const;
};





class PythonQtWrapper_QDir : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Filter SortFlag )
Q_FLAGS(Filters SortFlags )
enum Filter{
  Dirs = QDir::Dirs,   Files = QDir::Files,   Drives = QDir::Drives,   NoSymLinks = QDir::NoSymLinks,   AllEntries = QDir::AllEntries,   TypeMask = QDir::TypeMask,   Readable = QDir::Readable,   Writable = QDir::Writable,   Executable = QDir::Executable,   PermissionMask = QDir::PermissionMask,   Modified = QDir::Modified,   Hidden = QDir::Hidden,   System = QDir::System,   AccessMask = QDir::AccessMask,   AllDirs = QDir::AllDirs,   CaseSensitive = QDir::CaseSensitive,   NoDot = QDir::NoDot,   NoDotDot = QDir::NoDotDot,   NoDotAndDotDot = QDir::NoDotAndDotDot,   NoFilter = QDir::NoFilter};
enum SortFlag{
  Name = QDir::Name,   Time = QDir::Time,   Size = QDir::Size,   Unsorted = QDir::Unsorted,   SortByMask = QDir::SortByMask,   DirsFirst = QDir::DirsFirst,   Reversed = QDir::Reversed,   IgnoreCase = QDir::IgnoreCase,   DirsLast = QDir::DirsLast,   LocaleAware = QDir::LocaleAware,   Type = QDir::Type,   NoSort = QDir::NoSort};
Q_DECLARE_FLAGS(Filters, Filter)
Q_DECLARE_FLAGS(SortFlags, SortFlag)
public slots:
QDir* new_QDir(const QDir&  arg__1);
QDir* new_QDir(const QString&  path = QString());
QDir* new_QDir(const QString&  path, const QString&  nameFilter, QDir::SortFlags  sort = QDir::SortFlags(Name | IgnoreCase), QDir::Filters  filter = QDir::AllEntries);
void delete_QDir(QDir* obj) { delete obj; }
   QString  absoluteFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   QString  absolutePath(QDir* theWrappedObject) const;
   void static_QDir_addSearchPath(const QString&  prefix, const QString&  path);
   QString  canonicalPath(QDir* theWrappedObject) const;
   bool  cd(QDir* theWrappedObject, const QString&  dirName);
   bool  cdUp(QDir* theWrappedObject);
   QString  static_QDir_cleanPath(const QString&  path);
   uint  count(QDir* theWrappedObject) const;
   QDir  static_QDir_current();
   QString  static_QDir_currentPath();
   QString  dirName(QDir* theWrappedObject) const;
   QList<QFileInfo >  static_QDir_drives();
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  entryList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  entryList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   bool  exists(QDir* theWrappedObject) const;
   bool  exists(QDir* theWrappedObject, const QString&  name) const;
   QString  filePath(QDir* theWrappedObject, const QString&  fileName) const;
   QDir::Filters  filter(QDir* theWrappedObject) const;
   QString  static_QDir_fromNativeSeparators(const QString&  pathName);
   QDir  static_QDir_home();
   QString  static_QDir_homePath();
   bool  isAbsolute(QDir* theWrappedObject) const;
   bool  static_QDir_isAbsolutePath(const QString&  path);
   bool  isEmpty(QDir* theWrappedObject, QDir::Filters  filters = QDir::Filters(AllEntries | NoDotAndDotDot)) const;
   bool  isReadable(QDir* theWrappedObject) const;
   bool  isRelative(QDir* theWrappedObject) const;
   bool  static_QDir_isRelativePath(const QString&  path);
   bool  isRoot(QDir* theWrappedObject) const;
   QChar  static_QDir_listSeparator();
   bool  makeAbsolute(QDir* theWrappedObject);
   bool  static_QDir_match(const QString&  filter, const QString&  fileName);
   bool  static_QDir_match(const QStringList&  filters, const QString&  fileName);
   bool  mkdir(QDir* theWrappedObject, const QString&  dirName) const;
   bool  mkpath(QDir* theWrappedObject, const QString&  dirPath) const;
   QStringList  nameFilters(QDir* theWrappedObject) const;
   QStringList  static_QDir_nameFiltersFromString(const QString&  nameFilter);
   bool  __ne__(QDir* theWrappedObject, const QDir&  dir) const;
   bool  __eq__(QDir* theWrappedObject, const QDir&  dir) const;
   QString  operator_subscript(QDir* theWrappedObject, int  arg__1) const;
   QString  path(QDir* theWrappedObject) const;
   void refresh(QDir* theWrappedObject) const;
   QString  relativeFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   bool  remove(QDir* theWrappedObject, const QString&  fileName);
   bool  removeRecursively(QDir* theWrappedObject);
   bool  rename(QDir* theWrappedObject, const QString&  oldName, const QString&  newName);
   bool  rmdir(QDir* theWrappedObject, const QString&  dirName) const;
   bool  rmpath(QDir* theWrappedObject, const QString&  dirPath) const;
   QDir  static_QDir_root();
   QString  static_QDir_rootPath();
   QStringList  static_QDir_searchPaths(const QString&  prefix);
   QChar  static_QDir_separator();
   bool  static_QDir_setCurrent(const QString&  path);
   void setFilter(QDir* theWrappedObject, QDir::Filters  filter);
   void setNameFilters(QDir* theWrappedObject, const QStringList&  nameFilters);
   void setPath(QDir* theWrappedObject, const QString&  path);
   void static_QDir_setSearchPaths(const QString&  prefix, const QStringList&  searchPaths);
   void setSorting(QDir* theWrappedObject, QDir::SortFlags  sort);
   QDir::SortFlags  sorting(QDir* theWrappedObject) const;
   void swap(QDir* theWrappedObject, QDir&  other);
   QDir  static_QDir_temp();
   QString  static_QDir_tempPath();
   QString  static_QDir_toNativeSeparators(const QString&  pathName);
    QString py_toString(QDir*);
    bool __nonzero__(QDir* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QDirIterator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IteratorFlag )
Q_FLAGS(IteratorFlags )
enum IteratorFlag{
  NoIteratorFlags = QDirIterator::NoIteratorFlags,   FollowSymlinks = QDirIterator::FollowSymlinks,   Subdirectories = QDirIterator::Subdirectories};
Q_DECLARE_FLAGS(IteratorFlags, IteratorFlag)
public slots:
QDirIterator* new_QDirIterator(const QDir&  dir, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, QDir::Filters  filter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
void delete_QDirIterator(QDirIterator* obj) { delete obj; }
   QFileInfo  fileInfo(QDirIterator* theWrappedObject) const;
   QString  fileName(QDirIterator* theWrappedObject) const;
   QString  filePath(QDirIterator* theWrappedObject) const;
   bool  hasNext(QDirIterator* theWrappedObject) const;
   QString  next(QDirIterator* theWrappedObject);
   QString  path(QDirIterator* theWrappedObject) const;
};





class PythonQtWrapper_QDynamicPropertyChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDynamicPropertyChangeEvent* new_QDynamicPropertyChangeEvent(const QByteArray&  name);
void delete_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent* obj) { delete obj; }
   QByteArray  propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const;
};





class PythonQtWrapper_QEasingCurve : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Linear = QEasingCurve::Linear,   InQuad = QEasingCurve::InQuad,   OutQuad = QEasingCurve::OutQuad,   InOutQuad = QEasingCurve::InOutQuad,   OutInQuad = QEasingCurve::OutInQuad,   InCubic = QEasingCurve::InCubic,   OutCubic = QEasingCurve::OutCubic,   InOutCubic = QEasingCurve::InOutCubic,   OutInCubic = QEasingCurve::OutInCubic,   InQuart = QEasingCurve::InQuart,   OutQuart = QEasingCurve::OutQuart,   InOutQuart = QEasingCurve::InOutQuart,   OutInQuart = QEasingCurve::OutInQuart,   InQuint = QEasingCurve::InQuint,   OutQuint = QEasingCurve::OutQuint,   InOutQuint = QEasingCurve::InOutQuint,   OutInQuint = QEasingCurve::OutInQuint,   InSine = QEasingCurve::InSine,   OutSine = QEasingCurve::OutSine,   InOutSine = QEasingCurve::InOutSine,   OutInSine = QEasingCurve::OutInSine,   InExpo = QEasingCurve::InExpo,   OutExpo = QEasingCurve::OutExpo,   InOutExpo = QEasingCurve::InOutExpo,   OutInExpo = QEasingCurve::OutInExpo,   InCirc = QEasingCurve::InCirc,   OutCirc = QEasingCurve::OutCirc,   InOutCirc = QEasingCurve::InOutCirc,   OutInCirc = QEasingCurve::OutInCirc,   InElastic = QEasingCurve::InElastic,   OutElastic = QEasingCurve::OutElastic,   InOutElastic = QEasingCurve::InOutElastic,   OutInElastic = QEasingCurve::OutInElastic,   InBack = QEasingCurve::InBack,   OutBack = QEasingCurve::OutBack,   InOutBack = QEasingCurve::InOutBack,   OutInBack = QEasingCurve::OutInBack,   InBounce = QEasingCurve::InBounce,   OutBounce = QEasingCurve::OutBounce,   InOutBounce = QEasingCurve::InOutBounce,   OutInBounce = QEasingCurve::OutInBounce,   InCurve = QEasingCurve::InCurve,   OutCurve = QEasingCurve::OutCurve,   SineCurve = QEasingCurve::SineCurve,   CosineCurve = QEasingCurve::CosineCurve,   BezierSpline = QEasingCurve::BezierSpline,   TCBSpline = QEasingCurve::TCBSpline,   Custom = QEasingCurve::Custom,   NCurveTypes = QEasingCurve::NCurveTypes};
public slots:
QEasingCurve* new_QEasingCurve(QEasingCurve::Type  type = QEasingCurve::Linear);
QEasingCurve* new_QEasingCurve(const QEasingCurve&  other);
void delete_QEasingCurve(QEasingCurve* obj) { delete obj; }
   void addCubicBezierSegment(QEasingCurve* theWrappedObject, const QPointF&  c1, const QPointF&  c2, const QPointF&  endPoint);
   void addTCBSegment(QEasingCurve* theWrappedObject, const QPointF&  nextPoint, qreal  t, qreal  c, qreal  b);
   qreal  amplitude(QEasingCurve* theWrappedObject) const;
   bool  __ne__(QEasingCurve* theWrappedObject, const QEasingCurve&  other) const;
   void writeTo(QEasingCurve* theWrappedObject, QDataStream&  arg__1);
   QEasingCurve*  operator_assign(QEasingCurve* theWrappedObject, const QEasingCurve&  other);
   bool  __eq__(QEasingCurve* theWrappedObject, const QEasingCurve&  other) const;
   void readFrom(QEasingCurve* theWrappedObject, QDataStream&  arg__1);
   qreal  overshoot(QEasingCurve* theWrappedObject) const;
   qreal  period(QEasingCurve* theWrappedObject) const;
   void setAmplitude(QEasingCurve* theWrappedObject, qreal  amplitude);
   void setOvershoot(QEasingCurve* theWrappedObject, qreal  overshoot);
   void setPeriod(QEasingCurve* theWrappedObject, qreal  period);
   void setType(QEasingCurve* theWrappedObject, QEasingCurve::Type  type);
   void swap(QEasingCurve* theWrappedObject, QEasingCurve&  other);
   QVector<QPointF >  toCubicSpline(QEasingCurve* theWrappedObject) const;
   QEasingCurve::Type  type(QEasingCurve* theWrappedObject) const;
   qreal  valueForProgress(QEasingCurve* theWrappedObject, qreal  progress) const;
    QString py_toString(QEasingCurve*);
};





class PythonQtWrapper_QElapsedTimer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ClockType )
enum ClockType{
  SystemTime = QElapsedTimer::SystemTime,   MonotonicClock = QElapsedTimer::MonotonicClock,   TickCounter = QElapsedTimer::TickCounter,   MachAbsoluteTime = QElapsedTimer::MachAbsoluteTime,   PerformanceCounter = QElapsedTimer::PerformanceCounter};
public slots:
QElapsedTimer* new_QElapsedTimer();
void delete_QElapsedTimer(QElapsedTimer* obj) { delete obj; }
   QElapsedTimer::ClockType  static_QElapsedTimer_clockType();
   qint64  elapsed(QElapsedTimer* theWrappedObject) const;
   bool  hasExpired(QElapsedTimer* theWrappedObject, qint64  timeout) const;
   void invalidate(QElapsedTimer* theWrappedObject);
   bool  static_QElapsedTimer_isMonotonic();
   bool  isValid(QElapsedTimer* theWrappedObject) const;
   qint64  msecsSinceReference(QElapsedTimer* theWrappedObject) const;
   qint64  msecsTo(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const;
   qint64  nsecsElapsed(QElapsedTimer* theWrappedObject) const;
   bool  __ne__(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const;
   bool  __eq__(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const;
   qint64  restart(QElapsedTimer* theWrappedObject);
   qint64  secsTo(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const;
   void start(QElapsedTimer* theWrappedObject);
    bool __nonzero__(QElapsedTimer* obj) { return obj->isValid(); }
};





class PythonQtShell_QEvent : public QEvent
{
public:
    PythonQtShell_QEvent(QEvent::Type  type):QEvent(type),_wrapper(nullptr) {};
    PythonQtShell_QEvent(const QEvent&  other):QEvent(other),_wrapper(nullptr) {};

   ~PythonQtShell_QEvent() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  None = QEvent::None,   Timer = QEvent::Timer,   MouseButtonPress = QEvent::MouseButtonPress,   MouseButtonRelease = QEvent::MouseButtonRelease,   MouseButtonDblClick = QEvent::MouseButtonDblClick,   MouseMove = QEvent::MouseMove,   KeyPress = QEvent::KeyPress,   KeyRelease = QEvent::KeyRelease,   FocusIn = QEvent::FocusIn,   FocusOut = QEvent::FocusOut,   FocusAboutToChange = QEvent::FocusAboutToChange,   Enter = QEvent::Enter,   Leave = QEvent::Leave,   Paint = QEvent::Paint,   Move = QEvent::Move,   Resize = QEvent::Resize,   Create = QEvent::Create,   Destroy = QEvent::Destroy,   Show = QEvent::Show,   Hide = QEvent::Hide,   Close = QEvent::Close,   Quit = QEvent::Quit,   ParentChange = QEvent::ParentChange,   ParentAboutToChange = QEvent::ParentAboutToChange,   ThreadChange = QEvent::ThreadChange,   WindowActivate = QEvent::WindowActivate,   WindowDeactivate = QEvent::WindowDeactivate,   ShowToParent = QEvent::ShowToParent,   HideToParent = QEvent::HideToParent,   Wheel = QEvent::Wheel,   WindowTitleChange = QEvent::WindowTitleChange,   WindowIconChange = QEvent::WindowIconChange,   ApplicationWindowIconChange = QEvent::ApplicationWindowIconChange,   ApplicationFontChange = QEvent::ApplicationFontChange,   ApplicationLayoutDirectionChange = QEvent::ApplicationLayoutDirectionChange,   ApplicationPaletteChange = QEvent::ApplicationPaletteChange,   PaletteChange = QEvent::PaletteChange,   Clipboard = QEvent::Clipboard,   Speech = QEvent::Speech,   MetaCall = QEvent::MetaCall,   SockAct = QEvent::SockAct,   WinEventAct = QEvent::WinEventAct,   DeferredDelete = QEvent::DeferredDelete,   DragEnter = QEvent::DragEnter,   DragMove = QEvent::DragMove,   DragLeave = QEvent::DragLeave,   Drop = QEvent::Drop,   DragResponse = QEvent::DragResponse,   ChildAdded = QEvent::ChildAdded,   ChildPolished = QEvent::ChildPolished,   ChildRemoved = QEvent::ChildRemoved,   ShowWindowRequest = QEvent::ShowWindowRequest,   PolishRequest = QEvent::PolishRequest,   Polish = QEvent::Polish,   LayoutRequest = QEvent::LayoutRequest,   UpdateRequest = QEvent::UpdateRequest,   UpdateLater = QEvent::UpdateLater,   EmbeddingControl = QEvent::EmbeddingControl,   ActivateControl = QEvent::ActivateControl,   DeactivateControl = QEvent::DeactivateControl,   ContextMenu = QEvent::ContextMenu,   InputMethod = QEvent::InputMethod,   TabletMove = QEvent::TabletMove,   LocaleChange = QEvent::LocaleChange,   LanguageChange = QEvent::LanguageChange,   LayoutDirectionChange = QEvent::LayoutDirectionChange,   Style = QEvent::Style,   TabletPress = QEvent::TabletPress,   TabletRelease = QEvent::TabletRelease,   OkRequest = QEvent::OkRequest,   HelpRequest = QEvent::HelpRequest,   IconDrag = QEvent::IconDrag,   FontChange = QEvent::FontChange,   EnabledChange = QEvent::EnabledChange,   ActivationChange = QEvent::ActivationChange,   StyleChange = QEvent::StyleChange,   IconTextChange = QEvent::IconTextChange,   ModifiedChange = QEvent::ModifiedChange,   MouseTrackingChange = QEvent::MouseTrackingChange,   WindowBlocked = QEvent::WindowBlocked,   WindowUnblocked = QEvent::WindowUnblocked,   WindowStateChange = QEvent::WindowStateChange,   ReadOnlyChange = QEvent::ReadOnlyChange,   ToolTip = QEvent::ToolTip,   WhatsThis = QEvent::WhatsThis,   StatusTip = QEvent::StatusTip,   ActionChanged = QEvent::ActionChanged,   ActionAdded = QEvent::ActionAdded,   ActionRemoved = QEvent::ActionRemoved,   FileOpen = QEvent::FileOpen,   Shortcut = QEvent::Shortcut,   ShortcutOverride = QEvent::ShortcutOverride,   WhatsThisClicked = QEvent::WhatsThisClicked,   ToolBarChange = QEvent::ToolBarChange,   ApplicationActivate = QEvent::ApplicationActivate,   ApplicationActivated = QEvent::ApplicationActivated,   ApplicationDeactivate = QEvent::ApplicationDeactivate,   ApplicationDeactivated = QEvent::ApplicationDeactivated,   QueryWhatsThis = QEvent::QueryWhatsThis,   EnterWhatsThisMode = QEvent::EnterWhatsThisMode,   LeaveWhatsThisMode = QEvent::LeaveWhatsThisMode,   ZOrderChange = QEvent::ZOrderChange,   HoverEnter = QEvent::HoverEnter,   HoverLeave = QEvent::HoverLeave,   HoverMove = QEvent::HoverMove,   AcceptDropsChange = QEvent::AcceptDropsChange,   ZeroTimerEvent = QEvent::ZeroTimerEvent,   GraphicsSceneMouseMove = QEvent::GraphicsSceneMouseMove,   GraphicsSceneMousePress = QEvent::GraphicsSceneMousePress,   GraphicsSceneMouseRelease = QEvent::GraphicsSceneMouseRelease,   GraphicsSceneMouseDoubleClick = QEvent::GraphicsSceneMouseDoubleClick,   GraphicsSceneContextMenu = QEvent::GraphicsSceneContextMenu,   GraphicsSceneHoverEnter = QEvent::GraphicsSceneHoverEnter,   GraphicsSceneHoverMove = QEvent::GraphicsSceneHoverMove,   GraphicsSceneHoverLeave = QEvent::GraphicsSceneHoverLeave,   GraphicsSceneHelp = QEvent::GraphicsSceneHelp,   GraphicsSceneDragEnter = QEvent::GraphicsSceneDragEnter,   GraphicsSceneDragMove = QEvent::GraphicsSceneDragMove,   GraphicsSceneDragLeave = QEvent::GraphicsSceneDragLeave,   GraphicsSceneDrop = QEvent::GraphicsSceneDrop,   GraphicsSceneWheel = QEvent::GraphicsSceneWheel,   KeyboardLayoutChange = QEvent::KeyboardLayoutChange,   DynamicPropertyChange = QEvent::DynamicPropertyChange,   TabletEnterProximity = QEvent::TabletEnterProximity,   TabletLeaveProximity = QEvent::TabletLeaveProximity,   NonClientAreaMouseMove = QEvent::NonClientAreaMouseMove,   NonClientAreaMouseButtonPress = QEvent::NonClientAreaMouseButtonPress,   NonClientAreaMouseButtonRelease = QEvent::NonClientAreaMouseButtonRelease,   NonClientAreaMouseButtonDblClick = QEvent::NonClientAreaMouseButtonDblClick,   MacSizeChange = QEvent::MacSizeChange,   ContentsRectChange = QEvent::ContentsRectChange,   MacGLWindowChange = QEvent::MacGLWindowChange,   FutureCallOut = QEvent::FutureCallOut,   GraphicsSceneResize = QEvent::GraphicsSceneResize,   GraphicsSceneMove = QEvent::GraphicsSceneMove,   CursorChange = QEvent::CursorChange,   ToolTipChange = QEvent::ToolTipChange,   NetworkReplyUpdated = QEvent::NetworkReplyUpdated,   GrabMouse = QEvent::GrabMouse,   UngrabMouse = QEvent::UngrabMouse,   GrabKeyboard = QEvent::GrabKeyboard,   UngrabKeyboard = QEvent::UngrabKeyboard,   MacGLClearDrawable = QEvent::MacGLClearDrawable,   StateMachineSignal = QEvent::StateMachineSignal,   StateMachineWrapped = QEvent::StateMachineWrapped,   TouchBegin = QEvent::TouchBegin,   TouchUpdate = QEvent::TouchUpdate,   TouchEnd = QEvent::TouchEnd,   NativeGesture = QEvent::NativeGesture,   RequestSoftwareInputPanel = QEvent::RequestSoftwareInputPanel,   CloseSoftwareInputPanel = QEvent::CloseSoftwareInputPanel,   WinIdChange = QEvent::WinIdChange,   Gesture = QEvent::Gesture,   GestureOverride = QEvent::GestureOverride,   ScrollPrepare = QEvent::ScrollPrepare,   Scroll = QEvent::Scroll,   Expose = QEvent::Expose,   InputMethodQuery = QEvent::InputMethodQuery,   OrientationChange = QEvent::OrientationChange,   TouchCancel = QEvent::TouchCancel,   ThemeChange = QEvent::ThemeChange,   SockClose = QEvent::SockClose,   PlatformPanel = QEvent::PlatformPanel,   StyleAnimationUpdate = QEvent::StyleAnimationUpdate,   ApplicationStateChange = QEvent::ApplicationStateChange,   WindowChangeInternal = QEvent::WindowChangeInternal,   ScreenChangeInternal = QEvent::ScreenChangeInternal,   PlatformSurface = QEvent::PlatformSurface,   Pointer = QEvent::Pointer,   TabletTrackingChange = QEvent::TabletTrackingChange,   User = QEvent::User,   MaxUser = QEvent::MaxUser};
public slots:
QEvent* new_QEvent(QEvent::Type  type);
QEvent* new_QEvent(const QEvent&  other);
void delete_QEvent(QEvent* obj) { delete obj; }
   void accept(QEvent* theWrappedObject);
   void ignore(QEvent* theWrappedObject);
   bool  isAccepted(QEvent* theWrappedObject) const;
   QEvent*  operator_assign(QEvent* theWrappedObject, const QEvent&  other);
   int  static_QEvent_registerEventType(int  hint = -1);
   void setAccepted(QEvent* theWrappedObject, bool  accepted);
   bool  spontaneous(QEvent* theWrappedObject) const;
   QEvent::Type  type(QEvent* theWrappedObject) const;
    QString py_toString(QEvent*);
};





class PythonQtShell_QEventLoop : public QEventLoop
{
public:
    PythonQtShell_QEventLoop(QObject*  parent = nullptr):QEventLoop(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QEventLoop() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QEventLoop : public QEventLoop
{ public:
inline bool  py_q_event(QEvent*  event) { return QEventLoop::event(event); }
};

class PythonQtWrapper_QEventLoop : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProcessEventsFlag )
Q_FLAGS(ProcessEventsFlags )
enum ProcessEventsFlag{
  AllEvents = QEventLoop::AllEvents,   ExcludeUserInputEvents = QEventLoop::ExcludeUserInputEvents,   ExcludeSocketNotifiers = QEventLoop::ExcludeSocketNotifiers,   WaitForMoreEvents = QEventLoop::WaitForMoreEvents,   X11ExcludeTimers = QEventLoop::X11ExcludeTimers,   EventLoopExec = QEventLoop::EventLoopExec,   DialogExec = QEventLoop::DialogExec};
Q_DECLARE_FLAGS(ProcessEventsFlags, ProcessEventsFlag)
public slots:
QEventLoop* new_QEventLoop(QObject*  parent = nullptr);
void delete_QEventLoop(QEventLoop* obj) { delete obj; }
   bool  py_q_event(QEventLoop* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QEventLoop*)theWrappedObject)->py_q_event(event));}
   int  exec(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void exit(QEventLoop* theWrappedObject, int  returnCode = 0);
   bool  isRunning(QEventLoop* theWrappedObject) const;
   bool  processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags, int  maximumTime);
   void wakeUp(QEventLoop* theWrappedObject);
};





class PythonQtShell_QEventTransition : public QEventTransition
{
public:
    PythonQtShell_QEventTransition(QObject*  object, QEvent::Type  type, QState*  sourceState = nullptr):QEventTransition(object, type, sourceState),_wrapper(nullptr) {};
    PythonQtShell_QEventTransition(QState*  sourceState = nullptr):QEventTransition(sourceState),_wrapper(nullptr) {};

   ~PythonQtShell_QEventTransition() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  eventTest(QEvent*  event) override;
void onTransition(QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QEventTransition : public QEventTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { this->onTransition(event); }
inline bool  py_q_event(QEvent*  e) { return QEventTransition::event(e); }
inline bool  py_q_eventTest(QEvent*  event) { return QEventTransition::eventTest(event); }
inline void py_q_onTransition(QEvent*  event) { QEventTransition::onTransition(event); }
};

class PythonQtWrapper_QEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QEventTransition* new_QEventTransition(QObject*  object, QEvent::Type  type, QState*  sourceState = nullptr);
QEventTransition* new_QEventTransition(QState*  sourceState = nullptr);
void delete_QEventTransition(QEventTransition* obj) { delete obj; }
   bool  py_q_event(QEventTransition* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QEventTransition*)theWrappedObject)->py_q_event(e));}
   QObject*  eventSource(QEventTransition* theWrappedObject) const;
   bool  py_q_eventTest(QEventTransition* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QEventTransition*)theWrappedObject)->py_q_eventTest(event));}
   QEvent::Type  eventType(QEventTransition* theWrappedObject) const;
   void py_q_onTransition(QEventTransition* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QEventTransition*)theWrappedObject)->py_q_onTransition(event));}
   void setEventSource(QEventTransition* theWrappedObject, QObject*  object);
   void setEventType(QEventTransition* theWrappedObject, QEvent::Type  type);
};





class PythonQtShell_QFactoryInterface : public QFactoryInterface
{
public:
    PythonQtShell_QFactoryInterface():QFactoryInterface(),_wrapper(nullptr) {};

   ~PythonQtShell_QFactoryInterface() override;

QStringList  keys() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFactoryInterface : public QFactoryInterface
{ public:
inline QStringList  py_q_keys() const { return this->keys(); }
};

class PythonQtWrapper_QFactoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QFactoryInterface* new_QFactoryInterface();
void delete_QFactoryInterface(QFactoryInterface* obj) { delete obj; }
   QStringList  keys(QFactoryInterface* theWrappedObject) const;
   QStringList  py_q_keys(QFactoryInterface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFactoryInterface*)theWrappedObject)->py_q_keys());}
};





class PythonQtShell_QFile : public QFile
{
public:
    PythonQtShell_QFile():QFile(),_wrapper(nullptr) {};
    PythonQtShell_QFile(QObject*  parent):QFile(parent),_wrapper(nullptr) {};
    PythonQtShell_QFile(const QString&  name):QFile(name),_wrapper(nullptr) {};
    PythonQtShell_QFile(const QString&  name, QObject*  parent):QFile(name, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFile() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QString  fileName() const override;
bool  isSequential() const override;
bool  open(QIODevice::OpenMode  flags) override;
QFileDevice::Permissions  permissions() const override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  resize(qint64  sz) override;
bool  seek(qint64  offset) override;
bool  setPermissions(QFileDevice::Permissions  permissionSpec) override;
qint64  size() const override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFile : public QFile
{ public:
inline QString  py_q_fileName() const { return QFile::fileName(); }
inline bool  py_q_open(QIODevice::OpenMode  flags) { return QFile::open(flags); }
inline QFileDevice::Permissions  py_q_permissions() const { return QFile::permissions(); }
inline bool  py_q_resize(qint64  sz) { return QFile::resize(sz); }
inline bool  py_q_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFile::setPermissions(permissionSpec); }
inline qint64  py_q_size() const { return QFile::size(); }
};

class PythonQtWrapper_QFile : public QObject
{ Q_OBJECT
public:
public slots:
QFile* new_QFile();
QFile* new_QFile(QObject*  parent);
QFile* new_QFile(const QString&  name);
QFile* new_QFile(const QString&  name, QObject*  parent);
void delete_QFile(QFile* obj) { delete obj; }
   bool  static_QFile_copy(const QString&  fileName, const QString&  newName);
   bool  copy(QFile* theWrappedObject, const QString&  newName);
   QString  static_QFile_decodeName(const QByteArray&  localFileName);
   QByteArray  static_QFile_encodeName(const QString&  fileName);
   bool  exists(QFile* theWrappedObject) const;
   bool  static_QFile_exists(const QString&  fileName);
   QString  py_q_fileName(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_fileName());}
   bool  link(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_link(const QString&  oldname, const QString&  newName);
   bool  moveToTrash(QFile* theWrappedObject);
   bool  static_QFile_moveToTrash(const QString&  fileName, QString*  pathInTrash = nullptr);
   bool  py_q_open(QFile* theWrappedObject, QIODevice::OpenMode  flags){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_open(flags));}
   bool  open(QFile* theWrappedObject, int  fd, QIODevice::OpenMode  ioFlags, QFileDevice::FileHandleFlags  handleFlags = QFileDevice::DontCloseHandle);
   QFileDevice::Permissions  py_q_permissions(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_permissions());}
   QFileDevice::Permissions  static_QFile_permissions(const QString&  filename);
   bool  remove(QFile* theWrappedObject);
   bool  static_QFile_remove(const QString&  fileName);
   bool  rename(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_rename(const QString&  oldName, const QString&  newName);
   bool  static_QFile_resize(const QString&  filename, qint64  sz);
   bool  py_q_resize(QFile* theWrappedObject, qint64  sz){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_resize(sz));}
   void setFileName(QFile* theWrappedObject, const QString&  name);
   bool  py_q_setPermissions(QFile* theWrappedObject, QFileDevice::Permissions  permissionSpec){  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_setPermissions(permissionSpec));}
   bool  static_QFile_setPermissions(const QString&  filename, QFileDevice::Permissions  permissionSpec);
   qint64  py_q_size(QFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFile*)theWrappedObject)->py_q_size());}
   QString  symLinkTarget(QFile* theWrappedObject) const;
   QString  static_QFile_symLinkTarget(const QString&  fileName);
};





class PythonQtShell_QFileDevice : public QFileDevice
{
public:
    PythonQtShell_QFileDevice():QFileDevice(),_wrapper(nullptr) {};
    PythonQtShell_QFileDevice(QObject*  parent):QFileDevice(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFileDevice() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QString  fileName() const override;
bool  isSequential() const override;
bool  open(QIODevice::OpenMode  mode) override;
QFileDevice::Permissions  permissions() const override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  resize(qint64  sz) override;
bool  seek(qint64  offset) override;
bool  setPermissions(QFileDevice::Permissions  permissionSpec) override;
qint64  size() const override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFileDevice : public QFileDevice
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QFileDevice::atEnd(); }
inline void py_q_close() { QFileDevice::close(); }
inline QString  py_q_fileName() const { return QFileDevice::fileName(); }
inline bool  py_q_isSequential() const { return QFileDevice::isSequential(); }
inline QFileDevice::Permissions  py_q_permissions() const { return QFileDevice::permissions(); }
inline qint64  py_q_pos() const { return QFileDevice::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QFileDevice::readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QFileDevice::readLineData(data, maxlen); }
inline bool  py_q_resize(qint64  sz) { return QFileDevice::resize(sz); }
inline bool  py_q_seek(qint64  offset) { return QFileDevice::seek(offset); }
inline bool  py_q_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFileDevice::setPermissions(permissionSpec); }
inline qint64  py_q_size() const { return QFileDevice::size(); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QFileDevice::writeData(data, len); }
};

class PythonQtWrapper_QFileDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FileError FileHandleFlag FileTime MemoryMapFlags Permission )
Q_FLAGS(FileHandleFlags Permissions )
enum FileError{
  NoError = QFileDevice::NoError,   ReadError = QFileDevice::ReadError,   WriteError = QFileDevice::WriteError,   FatalError = QFileDevice::FatalError,   ResourceError = QFileDevice::ResourceError,   OpenError = QFileDevice::OpenError,   AbortError = QFileDevice::AbortError,   TimeOutError = QFileDevice::TimeOutError,   UnspecifiedError = QFileDevice::UnspecifiedError,   RemoveError = QFileDevice::RemoveError,   RenameError = QFileDevice::RenameError,   PositionError = QFileDevice::PositionError,   ResizeError = QFileDevice::ResizeError,   PermissionsError = QFileDevice::PermissionsError,   CopyError = QFileDevice::CopyError};
enum FileHandleFlag{
  AutoCloseHandle = QFileDevice::AutoCloseHandle,   DontCloseHandle = QFileDevice::DontCloseHandle};
enum FileTime{
  FileAccessTime = QFileDevice::FileAccessTime,   FileBirthTime = QFileDevice::FileBirthTime,   FileMetadataChangeTime = QFileDevice::FileMetadataChangeTime,   FileModificationTime = QFileDevice::FileModificationTime};
enum MemoryMapFlags{
  NoOptions = QFileDevice::NoOptions,   MapPrivateOption = QFileDevice::MapPrivateOption};
enum Permission{
  ReadOwner = QFileDevice::ReadOwner,   WriteOwner = QFileDevice::WriteOwner,   ExeOwner = QFileDevice::ExeOwner,   ReadUser = QFileDevice::ReadUser,   WriteUser = QFileDevice::WriteUser,   ExeUser = QFileDevice::ExeUser,   ReadGroup = QFileDevice::ReadGroup,   WriteGroup = QFileDevice::WriteGroup,   ExeGroup = QFileDevice::ExeGroup,   ReadOther = QFileDevice::ReadOther,   WriteOther = QFileDevice::WriteOther,   ExeOther = QFileDevice::ExeOther};
Q_DECLARE_FLAGS(FileHandleFlags, FileHandleFlag)
Q_DECLARE_FLAGS(Permissions, Permission)
public slots:
QFileDevice* new_QFileDevice();
QFileDevice* new_QFileDevice(QObject*  parent);
void delete_QFileDevice(QFileDevice* obj) { delete obj; }
   bool  py_q_atEnd(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_atEnd());}
   void py_q_close(QFileDevice* theWrappedObject){  (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_close());}
   QFileDevice::FileError  error(QFileDevice* theWrappedObject) const;
   QString  fileName(QFileDevice* theWrappedObject) const;
   QString  py_q_fileName(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_fileName());}
   QDateTime  fileTime(QFileDevice* theWrappedObject, QFileDevice::FileTime  time) const;
   bool  flush(QFileDevice* theWrappedObject);
   int  handle(QFileDevice* theWrappedObject) const;
   bool  py_q_isSequential(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_isSequential());}
   uchar*  map(QFileDevice* theWrappedObject, qint64  offset, qint64  size, QFileDevice::MemoryMapFlags  flags = QFileDevice::NoOptions);
   QFileDevice::Permissions  permissions(QFileDevice* theWrappedObject) const;
   QFileDevice::Permissions  py_q_permissions(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_permissions());}
   qint64  py_q_pos(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_pos());}
   qint64  py_q_readData(QFileDevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_readData(data, maxlen));}
   qint64  py_q_readLineData(QFileDevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   bool  resize(QFileDevice* theWrappedObject, qint64  sz);
   bool  py_q_resize(QFileDevice* theWrappedObject, qint64  sz){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_resize(sz));}
   bool  py_q_seek(QFileDevice* theWrappedObject, qint64  offset){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_seek(offset));}
   bool  setFileTime(QFileDevice* theWrappedObject, const QDateTime&  newDate, QFileDevice::FileTime  fileTime);
   bool  setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec);
   bool  py_q_setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_setPermissions(permissionSpec));}
   qint64  py_q_size(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_size());}
   bool  unmap(QFileDevice* theWrappedObject, uchar*  address);
   void unsetError(QFileDevice* theWrappedObject);
   qint64  py_q_writeData(QFileDevice* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QFileInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFileInfo* new_QFileInfo();
QFileInfo* new_QFileInfo(const QDir&  dir, const QString&  file);
QFileInfo* new_QFileInfo(const QFile&  file);
QFileInfo* new_QFileInfo(const QFileInfo&  fileinfo);
QFileInfo* new_QFileInfo(const QString&  file);
void delete_QFileInfo(QFileInfo* obj) { delete obj; }
   QDir  absoluteDir(QFileInfo* theWrappedObject) const;
   QString  absoluteFilePath(QFileInfo* theWrappedObject) const;
   QString  absolutePath(QFileInfo* theWrappedObject) const;
   QString  baseName(QFileInfo* theWrappedObject) const;
   QDateTime  birthTime(QFileInfo* theWrappedObject) const;
   QString  bundleName(QFileInfo* theWrappedObject) const;
   bool  caching(QFileInfo* theWrappedObject) const;
   QString  canonicalFilePath(QFileInfo* theWrappedObject) const;
   QString  canonicalPath(QFileInfo* theWrappedObject) const;
   QString  completeBaseName(QFileInfo* theWrappedObject) const;
   QString  completeSuffix(QFileInfo* theWrappedObject) const;
   QDateTime  created(QFileInfo* theWrappedObject) const;
   QDir  dir(QFileInfo* theWrappedObject) const;
   bool  exists(QFileInfo* theWrappedObject) const;
   bool  static_QFileInfo_exists(const QString&  file);
   QString  fileName(QFileInfo* theWrappedObject) const;
   QString  filePath(QFileInfo* theWrappedObject) const;
   QString  group(QFileInfo* theWrappedObject) const;
   uint  groupId(QFileInfo* theWrappedObject) const;
   bool  isAbsolute(QFileInfo* theWrappedObject) const;
   bool  isBundle(QFileInfo* theWrappedObject) const;
   bool  isDir(QFileInfo* theWrappedObject) const;
   bool  isExecutable(QFileInfo* theWrappedObject) const;
   bool  isFile(QFileInfo* theWrappedObject) const;
   bool  isHidden(QFileInfo* theWrappedObject) const;
   bool  isJunction(QFileInfo* theWrappedObject) const;
   bool  isNativePath(QFileInfo* theWrappedObject) const;
   bool  isReadable(QFileInfo* theWrappedObject) const;
   bool  isRelative(QFileInfo* theWrappedObject) const;
   bool  isRoot(QFileInfo* theWrappedObject) const;
   bool  isShortcut(QFileInfo* theWrappedObject) const;
   bool  isSymLink(QFileInfo* theWrappedObject) const;
   bool  isSymbolicLink(QFileInfo* theWrappedObject) const;
   bool  isWritable(QFileInfo* theWrappedObject) const;
   QDateTime  lastModified(QFileInfo* theWrappedObject) const;
   QDateTime  lastRead(QFileInfo* theWrappedObject) const;
   bool  makeAbsolute(QFileInfo* theWrappedObject);
   QDateTime  metadataChangeTime(QFileInfo* theWrappedObject) const;
   QString  owner(QFileInfo* theWrappedObject) const;
   uint  ownerId(QFileInfo* theWrappedObject) const;
   QString  path(QFileInfo* theWrappedObject) const;
   bool  permission(QFileInfo* theWrappedObject, QFile::Permissions  permissions) const;
   QFile::Permissions  permissions(QFileInfo* theWrappedObject) const;
   void refresh(QFileInfo* theWrappedObject);
   void setCaching(QFileInfo* theWrappedObject, bool  on);
   void setFile(QFileInfo* theWrappedObject, const QDir&  dir, const QString&  file);
   void setFile(QFileInfo* theWrappedObject, const QFile&  file);
   void setFile(QFileInfo* theWrappedObject, const QString&  file);
   qint64  size(QFileInfo* theWrappedObject) const;
   QString  suffix(QFileInfo* theWrappedObject) const;
   void swap(QFileInfo* theWrappedObject, QFileInfo&  other);
   QString  symLinkTarget(QFileInfo* theWrappedObject) const;
    QString py_toString(QFileInfo*);
};





class PythonQtShell_QFileSelector : public QFileSelector
{
public:
    PythonQtShell_QFileSelector(QObject*  parent = nullptr):QFileSelector(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFileSelector() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QFileSelector : public QObject
{ Q_OBJECT
public:
public slots:
QFileSelector* new_QFileSelector(QObject*  parent = nullptr);
void delete_QFileSelector(QFileSelector* obj) { delete obj; }
   QStringList  allSelectors(QFileSelector* theWrappedObject) const;
   QStringList  extraSelectors(QFileSelector* theWrappedObject) const;
   QString  select(QFileSelector* theWrappedObject, const QString&  filePath) const;
   QUrl  select(QFileSelector* theWrappedObject, const QUrl&  filePath) const;
   void setExtraSelectors(QFileSelector* theWrappedObject, const QStringList&  list);
};





class PythonQtShell_QFileSystemWatcher : public QFileSystemWatcher
{
public:
    PythonQtShell_QFileSystemWatcher(QObject*  parent = nullptr):QFileSystemWatcher(parent),_wrapper(nullptr) {};
    PythonQtShell_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = nullptr):QFileSystemWatcher(paths, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFileSystemWatcher() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QFileSystemWatcher : public QObject
{ Q_OBJECT
public:
public slots:
QFileSystemWatcher* new_QFileSystemWatcher(QObject*  parent = nullptr);
QFileSystemWatcher* new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = nullptr);
void delete_QFileSystemWatcher(QFileSystemWatcher* obj) { delete obj; }
   bool  addPath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   QStringList  addPaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
   QStringList  directories(QFileSystemWatcher* theWrappedObject) const;
   QStringList  files(QFileSystemWatcher* theWrappedObject) const;
   bool  removePath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   QStringList  removePaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
};





class PythonQtShell_QFinalState : public QFinalState
{
public:
    PythonQtShell_QFinalState(QState*  parent = nullptr):QFinalState(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QFinalState() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void onEntry(QEvent*  event) override;
void onExit(QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFinalState : public QFinalState
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
inline bool  py_q_event(QEvent*  e) { return QFinalState::event(e); }
inline void py_q_onEntry(QEvent*  event) { QFinalState::onEntry(event); }
inline void py_q_onExit(QEvent*  event) { QFinalState::onExit(event); }
};

class PythonQtWrapper_QFinalState : public QObject
{ Q_OBJECT
public:
public slots:
QFinalState* new_QFinalState(QState*  parent = nullptr);
void delete_QFinalState(QFinalState* obj) { delete obj; }
   bool  py_q_event(QFinalState* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->py_q_event(e));}
   void py_q_onEntry(QFinalState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->py_q_onEntry(event));}
   void py_q_onExit(QFinalState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->py_q_onExit(event));}
};





class PythonQtShell_QHistoryState : public QHistoryState
{
public:
    PythonQtShell_QHistoryState(QHistoryState::HistoryType  type, QState*  parent = nullptr):QHistoryState(type, parent),_wrapper(nullptr) {};
    PythonQtShell_QHistoryState(QState*  parent = nullptr):QHistoryState(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QHistoryState() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void onEntry(QEvent*  event) override;
void onExit(QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHistoryState : public QHistoryState
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_onEntry(QEvent*  event) { this->onEntry(event); }
inline void promoted_onExit(QEvent*  event) { this->onExit(event); }
inline bool  py_q_event(QEvent*  e) { return QHistoryState::event(e); }
inline void py_q_onEntry(QEvent*  event) { QHistoryState::onEntry(event); }
inline void py_q_onExit(QEvent*  event) { QHistoryState::onExit(event); }
};

class PythonQtWrapper_QHistoryState : public QObject
{ Q_OBJECT
public:
public slots:
QHistoryState* new_QHistoryState(QHistoryState::HistoryType  type, QState*  parent = nullptr);
QHistoryState* new_QHistoryState(QState*  parent = nullptr);
void delete_QHistoryState(QHistoryState* obj) { delete obj; }
   QAbstractState*  defaultState(QHistoryState* theWrappedObject) const;
   QAbstractTransition*  defaultTransition(QHistoryState* theWrappedObject) const;
   bool  py_q_event(QHistoryState* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->py_q_event(e));}
   QHistoryState::HistoryType  historyType(QHistoryState* theWrappedObject) const;
   void py_q_onEntry(QHistoryState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->py_q_onEntry(event));}
   void py_q_onExit(QHistoryState* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->py_q_onExit(event));}
   void setDefaultState(QHistoryState* theWrappedObject, QAbstractState*  state);
   void setDefaultTransition(QHistoryState* theWrappedObject, QAbstractTransition*  transition);
   void setHistoryType(QHistoryState* theWrappedObject, QHistoryState::HistoryType  type);
};





class PythonQtShell_QIODevice : public QIODevice
{
public:
    PythonQtShell_QIODevice():QIODevice(),_wrapper(nullptr) {};
    PythonQtShell_QIODevice(QObject*  parent):QIODevice(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QIODevice() override;

bool  atEnd() const override;
qint64  bytesAvailable() const override;
qint64  bytesToWrite() const override;
bool  canReadLine() const override;
void childEvent(QChildEvent*  event) override;
void close() override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isSequential() const override;
bool  open(QIODevice::OpenMode  mode) override;
qint64  pos() const override;
qint64  readData(char*  data, qint64  maxlen) override;
qint64  readLineData(char*  data, qint64  maxlen) override;
bool  reset() override;
bool  seek(qint64  pos) override;
qint64  size() const override;
void timerEvent(QTimerEvent*  event) override;
bool  waitForBytesWritten(int  msecs) override;
bool  waitForReadyRead(int  msecs) override;
qint64  writeData(const char*  data, qint64  len) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIODevice : public QIODevice
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline void promoted_setErrorString(const QString&  errorString) { this->setErrorString(errorString); }
inline void promoted_setOpenMode(QIODevice::OpenMode  openMode) { this->setOpenMode(openMode); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QIODevice::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QIODevice::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QIODevice::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QIODevice::canReadLine(); }
inline void py_q_close() { QIODevice::close(); }
inline bool  py_q_isSequential() const { return QIODevice::isSequential(); }
inline bool  py_q_open(QIODevice::OpenMode  mode) { return QIODevice::open(mode); }
inline qint64  py_q_pos() const { return QIODevice::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QIODevice::readLineData(data, maxlen); }
inline bool  py_q_reset() { return QIODevice::reset(); }
inline bool  py_q_seek(qint64  pos) { return QIODevice::seek(pos); }
inline qint64  py_q_size() const { return QIODevice::size(); }
inline bool  py_q_waitForBytesWritten(int  msecs) { return QIODevice::waitForBytesWritten(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs) { return QIODevice::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
};

class PythonQtWrapper_QIODevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenModeFlag )
Q_FLAGS(OpenMode )
enum OpenModeFlag{
  NotOpen = QIODevice::NotOpen,   ReadOnly = QIODevice::ReadOnly,   WriteOnly = QIODevice::WriteOnly,   ReadWrite = QIODevice::ReadWrite,   Append = QIODevice::Append,   Truncate = QIODevice::Truncate,   Text = QIODevice::Text,   Unbuffered = QIODevice::Unbuffered,   NewOnly = QIODevice::NewOnly,   ExistingOnly = QIODevice::ExistingOnly};
Q_DECLARE_FLAGS(OpenMode, OpenModeFlag)
public slots:
QIODevice* new_QIODevice();
QIODevice* new_QIODevice(QObject*  parent);
void delete_QIODevice(QIODevice* obj) { delete obj; }
   bool  atEnd(QIODevice* theWrappedObject) const;
   bool  py_q_atEnd(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_atEnd());}
   qint64  bytesAvailable(QIODevice* theWrappedObject) const;
   qint64  py_q_bytesAvailable(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  bytesToWrite(QIODevice* theWrappedObject) const;
   qint64  py_q_bytesToWrite(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_bytesToWrite());}
   bool  canReadLine(QIODevice* theWrappedObject) const;
   bool  py_q_canReadLine(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_canReadLine());}
   void close(QIODevice* theWrappedObject);
   void py_q_close(QIODevice* theWrappedObject){  (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_close());}
   void commitTransaction(QIODevice* theWrappedObject);
   int  currentReadChannel(QIODevice* theWrappedObject) const;
   int  currentWriteChannel(QIODevice* theWrappedObject) const;
   QString  errorString(QIODevice* theWrappedObject) const;
   bool  getChar(QIODevice* theWrappedObject, char*  c);
   bool  isOpen(QIODevice* theWrappedObject) const;
   bool  isReadable(QIODevice* theWrappedObject) const;
   bool  isSequential(QIODevice* theWrappedObject) const;
   bool  py_q_isSequential(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_isSequential());}
   bool  isTextModeEnabled(QIODevice* theWrappedObject) const;
   bool  isTransactionStarted(QIODevice* theWrappedObject) const;
   bool  isWritable(QIODevice* theWrappedObject) const;
   bool  open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode);
   bool  py_q_open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_open(mode));}
   QIODevice::OpenMode  openMode(QIODevice* theWrappedObject) const;
   QByteArray  peek(QIODevice* theWrappedObject, qint64  maxlen);
   qint64  pos(QIODevice* theWrappedObject) const;
   qint64  py_q_pos(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_pos());}
   bool  putChar(QIODevice* theWrappedObject, char  c);
   QByteArray  read(QIODevice* theWrappedObject, qint64  maxlen);
   QByteArray  readAll(QIODevice* theWrappedObject);
   int  readChannelCount(QIODevice* theWrappedObject) const;
   qint64  readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  py_q_readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_readData(data, maxlen));}
   QByteArray  readLine(QIODevice* theWrappedObject, qint64  maxlen = 0);
   qint64  readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  py_q_readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   bool  reset(QIODevice* theWrappedObject);
   bool  py_q_reset(QIODevice* theWrappedObject){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_reset());}
   void rollbackTransaction(QIODevice* theWrappedObject);
   bool  seek(QIODevice* theWrappedObject, qint64  pos);
   bool  py_q_seek(QIODevice* theWrappedObject, qint64  pos){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_seek(pos));}
   void setCurrentReadChannel(QIODevice* theWrappedObject, int  channel);
   void setCurrentWriteChannel(QIODevice* theWrappedObject, int  channel);
   void setErrorString(QIODevice* theWrappedObject, const QString&  errorString);
   void setOpenMode(QIODevice* theWrappedObject, QIODevice::OpenMode  openMode);
   void setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled);
   qint64  size(QIODevice* theWrappedObject) const;
   qint64  py_q_size(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_size());}
   qint64  skip(QIODevice* theWrappedObject, qint64  maxSize);
   void startTransaction(QIODevice* theWrappedObject);
   void ungetChar(QIODevice* theWrappedObject, char  c);
   bool  waitForBytesWritten(QIODevice* theWrappedObject, int  msecs);
   bool  py_q_waitForBytesWritten(QIODevice* theWrappedObject, int  msecs){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForReadyRead(QIODevice* theWrappedObject, int  msecs);
   bool  py_q_waitForReadyRead(QIODevice* theWrappedObject, int  msecs){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  write(QIODevice* theWrappedObject, const QByteArray&  data);
   qint64  write(QIODevice* theWrappedObject, const char*  data);
   int  writeChannelCount(QIODevice* theWrappedObject) const;
   qint64  writeData(QIODevice* theWrappedObject, const char*  data, qint64  len);
   qint64  py_q_writeData(QIODevice* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtShell_QIdentityProxyModel : public QIdentityProxyModel
{
public:
    PythonQtShell_QIdentityProxyModel(QObject*  parent = nullptr):QIdentityProxyModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QIdentityProxyModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QModelIndex  mapFromSource(const QModelIndex&  sourceIndex) const override;
QItemSelection  mapSelectionFromSource(const QItemSelection&  selection) const override;
QItemSelection  mapSelectionToSource(const QItemSelection&  selection) const override;
QModelIndex  mapToSource(const QModelIndex&  proxyIndex) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
QModelIndex  parent(const QModelIndex&  child) const override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
void setSourceModel(QAbstractItemModel*  sourceModel) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIdentityProxyModel : public QIdentityProxyModel
{ public:
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::columnCount(parent); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QIdentityProxyModel::dropMimeData(data, action, row, column, parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QIdentityProxyModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::insertRows(row, count, parent); }
inline QModelIndex  py_q_mapFromSource(const QModelIndex&  sourceIndex) const { return QIdentityProxyModel::mapFromSource(sourceIndex); }
inline QItemSelection  py_q_mapSelectionFromSource(const QItemSelection&  selection) const { return QIdentityProxyModel::mapSelectionFromSource(selection); }
inline QItemSelection  py_q_mapSelectionToSource(const QItemSelection&  selection) const { return QIdentityProxyModel::mapSelectionToSource(selection); }
inline QModelIndex  py_q_mapToSource(const QModelIndex&  proxyIndex) const { return QIdentityProxyModel::mapToSource(proxyIndex); }
inline QList<QModelIndex >  py_q_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QIdentityProxyModel::match(start, role, value, hits, flags); }
inline bool  py_q_moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild); }
inline bool  py_q_moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild); }
inline QModelIndex  py_q_parent(const QModelIndex&  child) const { return QIdentityProxyModel::parent(child); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QIdentityProxyModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QIdentityProxyModel::rowCount(parent); }
inline void py_q_setSourceModel(QAbstractItemModel*  sourceModel) { QIdentityProxyModel::setSourceModel(sourceModel); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QIdentityProxyModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QIdentityProxyModel : public QObject
{ Q_OBJECT
public:
public slots:
QIdentityProxyModel* new_QIdentityProxyModel(QObject*  parent = nullptr);
void delete_QIdentityProxyModel(QIdentityProxyModel* obj) { delete obj; }
   int  py_q_columnCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_columnCount(parent));}
   bool  py_q_dropMimeData(QIdentityProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   QVariant  py_q_headerData(QIdentityProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  py_q_index(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  py_q_insertColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  py_q_insertRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QModelIndex  py_q_mapFromSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapFromSource(sourceIndex));}
   QItemSelection  py_q_mapSelectionFromSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapSelectionFromSource(selection));}
   QItemSelection  py_q_mapSelectionToSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapSelectionToSource(selection));}
   QModelIndex  py_q_mapToSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_mapToSource(proxyIndex));}
   QList<QModelIndex >  py_q_match(QIdentityProxyModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_match(start, role, value, hits, flags));}
   bool  py_q_moveColumns(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild));}
   bool  py_q_moveRows(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild));}
   QModelIndex  py_q_parent(QIdentityProxyModel* theWrappedObject, const QModelIndex&  child) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_parent(child));}
   bool  py_q_removeColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_rowCount(parent));}
   void py_q_setSourceModel(QIdentityProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel){  (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_setSourceModel(sourceModel));}
   QModelIndex  py_q_sibling(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
};





class PythonQtWrapper_QJsonArray : public QObject
{ Q_OBJECT
public:
public slots:
QJsonArray* new_QJsonArray();
QJsonArray* new_QJsonArray(const QJsonArray&  other);
void delete_QJsonArray(QJsonArray* obj) { delete obj; }
   void append(QJsonArray* theWrappedObject, const QJsonValue&  value);
   QJsonValue  at(QJsonArray* theWrappedObject, int  i) const;
   bool  contains(QJsonArray* theWrappedObject, const QJsonValue&  element) const;
   int  count(QJsonArray* theWrappedObject) const;
   bool  empty(QJsonArray* theWrappedObject) const;
   QJsonValue  first(QJsonArray* theWrappedObject) const;
   QJsonArray  static_QJsonArray_fromStringList(const QStringList&  list);
   QJsonArray  static_QJsonArray_fromVariantList(const QList<QVariant >&  list);
   bool  isEmpty(QJsonArray* theWrappedObject) const;
   QJsonValue  last(QJsonArray* theWrappedObject) const;
   bool  __ne__(QJsonArray* theWrappedObject, const QJsonArray&  other) const;
   QJsonArray  __add__(QJsonArray* theWrappedObject, const QJsonValue&  v) const;
   QJsonArray*  __iadd__(QJsonArray* theWrappedObject, const QJsonValue&  v);
   void writeTo(QJsonArray* theWrappedObject, QDataStream&  arg__1);
   QJsonArray*  __lshift__(QJsonArray* theWrappedObject, const QJsonValue&  v);
   QJsonArray*  operator_assign(QJsonArray* theWrappedObject, const QJsonArray&  other);
   bool  __eq__(QJsonArray* theWrappedObject, const QJsonArray&  other) const;
   void readFrom(QJsonArray* theWrappedObject, QDataStream&  arg__1);
   QJsonValue  operator_subscript(QJsonArray* theWrappedObject, int  i) const;
   void pop_back(QJsonArray* theWrappedObject);
   void pop_front(QJsonArray* theWrappedObject);
   void prepend(QJsonArray* theWrappedObject, const QJsonValue&  value);
   void push_back(QJsonArray* theWrappedObject, const QJsonValue&  t);
   void push_front(QJsonArray* theWrappedObject, const QJsonValue&  t);
   void removeAt(QJsonArray* theWrappedObject, int  i);
   void removeFirst(QJsonArray* theWrappedObject);
   void removeLast(QJsonArray* theWrappedObject);
   void replace(QJsonArray* theWrappedObject, int  i, const QJsonValue&  value);
   int  size(QJsonArray* theWrappedObject) const;
   void swap(QJsonArray* theWrappedObject, QJsonArray&  other);
   QJsonValue  takeAt(QJsonArray* theWrappedObject, int  i);
   QList<QVariant >  toVariantList(QJsonArray* theWrappedObject) const;
    QString py_toString(QJsonArray*);
    bool __nonzero__(QJsonArray* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QJsonDocument : public QJsonDocument
{
public:
    PythonQtShell_QJsonDocument():QJsonDocument(),_wrapper(nullptr) {};
    PythonQtShell_QJsonDocument(const QJsonArray&  array):QJsonDocument(array),_wrapper(nullptr) {};
    PythonQtShell_QJsonDocument(const QJsonDocument&  other):QJsonDocument(other),_wrapper(nullptr) {};
    PythonQtShell_QJsonDocument(const QJsonObject&  object):QJsonDocument(object),_wrapper(nullptr) {};

   ~PythonQtShell_QJsonDocument();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QJsonDocument : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DataValidation JsonFormat )
enum DataValidation{
  Validate = QJsonDocument::Validate,   BypassValidation = QJsonDocument::BypassValidation};
enum JsonFormat{
  Indented = QJsonDocument::Indented,   Compact = QJsonDocument::Compact};
public slots:
QJsonDocument* new_QJsonDocument();
QJsonDocument* new_QJsonDocument(const QJsonArray&  array);
QJsonDocument* new_QJsonDocument(const QJsonDocument&  other);
QJsonDocument* new_QJsonDocument(const QJsonObject&  object);
void delete_QJsonDocument(QJsonDocument* obj) { delete obj; }
   QJsonArray  array(QJsonDocument* theWrappedObject) const;
   QJsonDocument  static_QJsonDocument_fromBinaryData(const QByteArray&  data, QJsonDocument::DataValidation  validation = QJsonDocument::Validate);
   QJsonDocument  static_QJsonDocument_fromJson(const QByteArray&  json, QJsonParseError*  error = nullptr);
   QJsonDocument  static_QJsonDocument_fromRawData(const char*  data, int  size, QJsonDocument::DataValidation  validation = QJsonDocument::Validate);
   QJsonDocument  static_QJsonDocument_fromVariant(const QVariant&  variant);
   bool  isArray(QJsonDocument* theWrappedObject) const;
   bool  isEmpty(QJsonDocument* theWrappedObject) const;
   bool  isNull(QJsonDocument* theWrappedObject) const;
   bool  isObject(QJsonDocument* theWrappedObject) const;
   QJsonObject  object(QJsonDocument* theWrappedObject) const;
   bool  __ne__(QJsonDocument* theWrappedObject, const QJsonDocument&  other) const;
   void writeTo(QJsonDocument* theWrappedObject, QDataStream&  arg__1);
   QJsonDocument*  operator_assign(QJsonDocument* theWrappedObject, const QJsonDocument&  other);
   bool  __eq__(QJsonDocument* theWrappedObject, const QJsonDocument&  other) const;
   void readFrom(QJsonDocument* theWrappedObject, QDataStream&  arg__1);
   const QJsonValue  operator_subscript(QJsonDocument* theWrappedObject, const QString&  key) const;
   const QJsonValue  operator_subscript(QJsonDocument* theWrappedObject, int  i) const;
   const char*  rawData(QJsonDocument* theWrappedObject, int*  size) const;
   void setArray(QJsonDocument* theWrappedObject, const QJsonArray&  array);
   void setObject(QJsonDocument* theWrappedObject, const QJsonObject&  object);
   void swap(QJsonDocument* theWrappedObject, QJsonDocument&  other);
   QByteArray  toBinaryData(QJsonDocument* theWrappedObject) const;
   QByteArray  toJson(QJsonDocument* theWrappedObject) const;
   QByteArray  toJson(QJsonDocument* theWrappedObject, QJsonDocument::JsonFormat  format) const;
   QVariant  toVariant(QJsonDocument* theWrappedObject) const;
    QString py_toString(QJsonDocument*);
    bool __nonzero__(QJsonDocument* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QJsonObject : public QObject
{ Q_OBJECT
public:
public slots:
QJsonObject* new_QJsonObject();
QJsonObject* new_QJsonObject(const QJsonObject&  other);
void delete_QJsonObject(QJsonObject* obj) { delete obj; }
   bool  contains(QJsonObject* theWrappedObject, const QString&  key) const;
   int  count(QJsonObject* theWrappedObject) const;
   bool  empty(QJsonObject* theWrappedObject) const;
   QJsonObject  static_QJsonObject_fromVariantHash(const QHash<QString , QVariant >&  map);
   QJsonObject  static_QJsonObject_fromVariantMap(const QMap<QString , QVariant >&  map);
   bool  isEmpty(QJsonObject* theWrappedObject) const;
   QStringList  keys(QJsonObject* theWrappedObject) const;
   int  length(QJsonObject* theWrappedObject) const;
   bool  __ne__(QJsonObject* theWrappedObject, const QJsonObject&  other) const;
   void writeTo(QJsonObject* theWrappedObject, QDataStream&  arg__1);
   QJsonObject*  operator_assign(QJsonObject* theWrappedObject, const QJsonObject&  other);
   bool  __eq__(QJsonObject* theWrappedObject, const QJsonObject&  other) const;
   void readFrom(QJsonObject* theWrappedObject, QDataStream&  arg__1);
   QJsonValue  operator_subscript(QJsonObject* theWrappedObject, const QString&  key) const;
   void remove(QJsonObject* theWrappedObject, const QString&  key);
   int  size(QJsonObject* theWrappedObject) const;
   void swap(QJsonObject* theWrappedObject, QJsonObject&  other);
   QJsonValue  take(QJsonObject* theWrappedObject, const QString&  key);
   QHash<QString , QVariant >  toVariantHash(QJsonObject* theWrappedObject) const;
   QMap<QString , QVariant >  toVariantMap(QJsonObject* theWrappedObject) const;
   QJsonValue  value(QJsonObject* theWrappedObject, const QString&  key) const;
    QString py_toString(QJsonObject*);
    bool __nonzero__(QJsonObject* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QJsonParseError : public QJsonParseError
{
public:
    PythonQtShell_QJsonParseError():QJsonParseError(),_wrapper(nullptr) {};

   ~PythonQtShell_QJsonParseError();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QJsonParseError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ParseError )
enum ParseError{
  NoError = QJsonParseError::NoError,   UnterminatedObject = QJsonParseError::UnterminatedObject,   MissingNameSeparator = QJsonParseError::MissingNameSeparator,   UnterminatedArray = QJsonParseError::UnterminatedArray,   MissingValueSeparator = QJsonParseError::MissingValueSeparator,   IllegalValue = QJsonParseError::IllegalValue,   TerminationByNumber = QJsonParseError::TerminationByNumber,   IllegalNumber = QJsonParseError::IllegalNumber,   IllegalEscapeSequence = QJsonParseError::IllegalEscapeSequence,   IllegalUTF8String = QJsonParseError::IllegalUTF8String,   UnterminatedString = QJsonParseError::UnterminatedString,   MissingObject = QJsonParseError::MissingObject,   DeepNesting = QJsonParseError::DeepNesting,   DocumentTooLarge = QJsonParseError::DocumentTooLarge,   GarbageAtEnd = QJsonParseError::GarbageAtEnd};
public slots:
QJsonParseError* new_QJsonParseError();
void delete_QJsonParseError(QJsonParseError* obj) { delete obj; }
   QString  errorString(QJsonParseError* theWrappedObject) const;
void py_set_error(QJsonParseError* theWrappedObject, QJsonParseError::ParseError  error){ theWrappedObject->error = error; }
QJsonParseError::ParseError  py_get_error(QJsonParseError* theWrappedObject){ return theWrappedObject->error; }
void py_set_offset(QJsonParseError* theWrappedObject, int  offset){ theWrappedObject->offset = offset; }
int  py_get_offset(QJsonParseError* theWrappedObject){ return theWrappedObject->offset; }
};





class PythonQtWrapper_QJsonValue : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Null = QJsonValue::Null,   Bool = QJsonValue::Bool,   Double = QJsonValue::Double,   String = QJsonValue::String,   Array = QJsonValue::Array,   Object = QJsonValue::Object,   Undefined = QJsonValue::Undefined};
public slots:
QJsonValue* new_QJsonValue(QJsonValue::Type  arg__1 = QJsonValue::Null);
QJsonValue* new_QJsonValue(bool  b);
QJsonValue* new_QJsonValue(const QJsonArray&  a);
QJsonValue* new_QJsonValue(const QJsonObject&  o);
QJsonValue* new_QJsonValue(const QJsonValue&  other);
QJsonValue* new_QJsonValue(const QString&  s);
QJsonValue* new_QJsonValue(const char*  s);
QJsonValue* new_QJsonValue(double  n);
QJsonValue* new_QJsonValue(int  n);
QJsonValue* new_QJsonValue(qint64  v);
void delete_QJsonValue(QJsonValue* obj) { delete obj; }
   QJsonValue  static_QJsonValue_fromVariant(const QVariant&  variant);
   bool  isArray(QJsonValue* theWrappedObject) const;
   bool  isBool(QJsonValue* theWrappedObject) const;
   bool  isDouble(QJsonValue* theWrappedObject) const;
   bool  isNull(QJsonValue* theWrappedObject) const;
   bool  isObject(QJsonValue* theWrappedObject) const;
   bool  isString(QJsonValue* theWrappedObject) const;
   bool  isUndefined(QJsonValue* theWrappedObject) const;
   bool  __ne__(QJsonValue* theWrappedObject, const QJsonValue&  other) const;
   void writeTo(QJsonValue* theWrappedObject, QDataStream&  arg__1);
   QJsonValue*  operator_assign(QJsonValue* theWrappedObject, const QJsonValue&  other);
   bool  __eq__(QJsonValue* theWrappedObject, const QJsonValue&  other) const;
   void readFrom(QJsonValue* theWrappedObject, QDataStream&  arg__1);
   const QJsonValue  operator_subscript(QJsonValue* theWrappedObject, const QString&  key) const;
   const QJsonValue  operator_subscript(QJsonValue* theWrappedObject, int  i) const;
   void swap(QJsonValue* theWrappedObject, QJsonValue&  other);
   QJsonArray  toArray(QJsonValue* theWrappedObject) const;
   QJsonArray  toArray(QJsonValue* theWrappedObject, const QJsonArray&  defaultValue) const;
   bool  toBool(QJsonValue* theWrappedObject, bool  defaultValue = false) const;
   double  toDouble(QJsonValue* theWrappedObject, double  defaultValue = 0) const;
   int  toInt(QJsonValue* theWrappedObject, int  defaultValue = 0) const;
   QJsonObject  toObject(QJsonValue* theWrappedObject) const;
   QJsonObject  toObject(QJsonValue* theWrappedObject, const QJsonObject&  defaultValue) const;
   QString  toString(QJsonValue* theWrappedObject) const;
   QString  toString(QJsonValue* theWrappedObject, const QString&  defaultValue) const;
   QVariant  toVariant(QJsonValue* theWrappedObject) const;
   QJsonValue::Type  type(QJsonValue* theWrappedObject) const;
    QString py_toString(QJsonValue*);
    bool __nonzero__(QJsonValue* obj) { return !obj->isNull(); }
};





class PythonQtShell_QLibrary : public QLibrary
{
public:
    PythonQtShell_QLibrary(QObject*  parent = nullptr):QLibrary(parent),_wrapper(nullptr) {};
    PythonQtShell_QLibrary(const QString&  fileName, QObject*  parent = nullptr):QLibrary(fileName, parent),_wrapper(nullptr) {};
    PythonQtShell_QLibrary(const QString&  fileName, const QString&  version, QObject*  parent = nullptr):QLibrary(fileName, version, parent),_wrapper(nullptr) {};
    PythonQtShell_QLibrary(const QString&  fileName, int  verNum, QObject*  parent = nullptr):QLibrary(fileName, verNum, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QLibrary() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QLibrary : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LoadHint )
Q_FLAGS(LoadHints )
enum LoadHint{
  ResolveAllSymbolsHint = QLibrary::ResolveAllSymbolsHint,   ExportExternalSymbolsHint = QLibrary::ExportExternalSymbolsHint,   LoadArchiveMemberHint = QLibrary::LoadArchiveMemberHint,   PreventUnloadHint = QLibrary::PreventUnloadHint,   DeepBindHint = QLibrary::DeepBindHint};
Q_DECLARE_FLAGS(LoadHints, LoadHint)
public slots:
QLibrary* new_QLibrary(QObject*  parent = nullptr);
QLibrary* new_QLibrary(const QString&  fileName, QObject*  parent = nullptr);
QLibrary* new_QLibrary(const QString&  fileName, const QString&  version, QObject*  parent = nullptr);
QLibrary* new_QLibrary(const QString&  fileName, int  verNum, QObject*  parent = nullptr);
void delete_QLibrary(QLibrary* obj) { delete obj; }
   QString  errorString(QLibrary* theWrappedObject) const;
   QString  fileName(QLibrary* theWrappedObject) const;
   bool  static_QLibrary_isLibrary(const QString&  fileName);
   bool  isLoaded(QLibrary* theWrappedObject) const;
   bool  load(QLibrary* theWrappedObject);
   QLibrary::LoadHints  loadHints(QLibrary* theWrappedObject) const;
   void setFileName(QLibrary* theWrappedObject, const QString&  fileName);
   void setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, const QString&  version);
   void setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, int  verNum);
   void setLoadHints(QLibrary* theWrappedObject, QLibrary::LoadHints  hints);
   bool  unload(QLibrary* theWrappedObject);
};





class PythonQtWrapper_QLibraryInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LibraryLocation )
enum LibraryLocation{
  PrefixPath = QLibraryInfo::PrefixPath,   DocumentationPath = QLibraryInfo::DocumentationPath,   HeadersPath = QLibraryInfo::HeadersPath,   LibrariesPath = QLibraryInfo::LibrariesPath,   LibraryExecutablesPath = QLibraryInfo::LibraryExecutablesPath,   BinariesPath = QLibraryInfo::BinariesPath,   PluginsPath = QLibraryInfo::PluginsPath,   ImportsPath = QLibraryInfo::ImportsPath,   Qml2ImportsPath = QLibraryInfo::Qml2ImportsPath,   ArchDataPath = QLibraryInfo::ArchDataPath,   DataPath = QLibraryInfo::DataPath,   TranslationsPath = QLibraryInfo::TranslationsPath,   ExamplesPath = QLibraryInfo::ExamplesPath,   TestsPath = QLibraryInfo::TestsPath,   SettingsPath = QLibraryInfo::SettingsPath};
public slots:
void delete_QLibraryInfo(QLibraryInfo* obj) { delete obj; }
   const char*  static_QLibraryInfo_build();
   QDate  static_QLibraryInfo_buildDate();
   bool  static_QLibraryInfo_isDebugBuild();
   QString  static_QLibraryInfo_licensedProducts();
   QString  static_QLibraryInfo_licensee();
   QString  static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  arg__1);
   QStringList  static_QLibraryInfo_platformPluginArguments(const QString&  platformName);
};





class PythonQtWrapper_QLockFile : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LockError )
enum LockError{
  NoError = QLockFile::NoError,   LockFailedError = QLockFile::LockFailedError,   PermissionError = QLockFile::PermissionError,   UnknownError = QLockFile::UnknownError};
public slots:
QLockFile* new_QLockFile(const QString&  fileName);
void delete_QLockFile(QLockFile* obj) { delete obj; }
   QLockFile::LockError  error(QLockFile* theWrappedObject) const;
   bool  getLockInfo(QLockFile* theWrappedObject, qint64*  pid, QString*  hostname, QString*  appname) const;
   bool  isLocked(QLockFile* theWrappedObject) const;
   bool  lock(QLockFile* theWrappedObject);
   bool  removeStaleLockFile(QLockFile* theWrappedObject);
   void setStaleLockTime(QLockFile* theWrappedObject, int  arg__1);
   int  staleLockTime(QLockFile* theWrappedObject) const;
   bool  tryLock(QLockFile* theWrappedObject, int  timeout = 0);
   void unlock(QLockFile* theWrappedObject);
};





class PythonQtWrapper_QLoggingCategory : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QLoggingCategory(QLoggingCategory* obj) { delete obj; }
   const char*  categoryName(QLoggingCategory* theWrappedObject) const;
   QLoggingCategory*  static_QLoggingCategory_defaultCategory();
   bool  isCriticalEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isDebugEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type) const;
   bool  isInfoEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isWarningEnabled(QLoggingCategory* theWrappedObject) const;
   void setEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type, bool  enable);
   void static_QLoggingCategory_setFilterRules(const QString&  rules);
};





class PythonQtWrapper_QMarginsF : public QObject
{ Q_OBJECT
public:
public slots:
QMarginsF* new_QMarginsF();
QMarginsF* new_QMarginsF(const QMargins&  margins);
QMarginsF* new_QMarginsF(qreal  left, qreal  top, qreal  right, qreal  bottom);
void delete_QMarginsF(QMarginsF* obj) { delete obj; }
   qreal  bottom(QMarginsF* theWrappedObject) const;
   bool  isNull(QMarginsF* theWrappedObject) const;
   qreal  left(QMarginsF* theWrappedObject) const;
   bool  __ne__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   QMarginsF  __mul__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __imul__(QMarginsF* theWrappedObject, qreal  factor);
   QMarginsF  __add__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   QRectF  __add__(QMarginsF* theWrappedObject, const QRectF&  rhs);
   QMarginsF  __add__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __iadd__(QMarginsF* theWrappedObject, const QMarginsF&  margins);
   QMarginsF*  __iadd__(QMarginsF* theWrappedObject, qreal  addend);
   QMarginsF  __sub__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   QMarginsF  __sub__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __isub__(QMarginsF* theWrappedObject, const QMarginsF&  margins);
   QMarginsF*  __isub__(QMarginsF* theWrappedObject, qreal  subtrahend);
   QMarginsF  __div__(QMarginsF* theWrappedObject, qreal  divisor);
   QMarginsF*  __idiv__(QMarginsF* theWrappedObject, qreal  divisor);
   void writeTo(QMarginsF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   void readFrom(QMarginsF* theWrappedObject, QDataStream&  arg__1);
   qreal  right(QMarginsF* theWrappedObject) const;
   void setBottom(QMarginsF* theWrappedObject, qreal  bottom);
   void setLeft(QMarginsF* theWrappedObject, qreal  left);
   void setRight(QMarginsF* theWrappedObject, qreal  right);
   void setTop(QMarginsF* theWrappedObject, qreal  top);
   QMargins  toMargins(QMarginsF* theWrappedObject) const;
   qreal  top(QMarginsF* theWrappedObject) const;
    QString py_toString(QMarginsF*);
    bool __nonzero__(QMarginsF* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QMessageAuthenticationCode : public QObject
{ Q_OBJECT
public:
public slots:
QMessageAuthenticationCode* new_QMessageAuthenticationCode(QCryptographicHash::Algorithm  method, const QByteArray&  key = QByteArray());
void delete_QMessageAuthenticationCode(QMessageAuthenticationCode* obj) { delete obj; }
   bool  addData(QMessageAuthenticationCode* theWrappedObject, QIODevice*  device);
   void addData(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  data);
   void addData(QMessageAuthenticationCode* theWrappedObject, const char*  data, int  length);
   QByteArray  static_QMessageAuthenticationCode_hash(const QByteArray&  message, const QByteArray&  key, QCryptographicHash::Algorithm  method);
   void reset(QMessageAuthenticationCode* theWrappedObject);
   QByteArray  result(QMessageAuthenticationCode* theWrappedObject) const;
   void setKey(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  key);
};


