#include <PythonQt.h>
#include <QObject>
#include <QPair>
#include <QUrl>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdir.h>
#include <qerrormessage.h>
#include <qevent.h>
#include <qfiledialog.h>
#include <qfileiconprovider.h>
#include <qfileinfo.h>
#include <qfocusframe.h>
#include <qfont.h>
#include <qfontcombobox.h>
#include <qfontdialog.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qformlayout.h>
#include <qframe.h>
#include <qgesture.h>
#include <qgraphicsanchorlayout.h>
#include <qgraphicseffect.h>
#include <qgraphicsgridlayout.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicslinearlayout.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtimeline.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtShell_QErrorMessage : public QErrorMessage
{
public:
    PythonQtShell_QErrorMessage(QWidget*  parent = 0):QErrorMessage(parent),_wrapper(NULL) {};

virtual void done(int  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void accept();
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QErrorMessage : public QErrorMessage
{ public:
inline void promoted_done(int  arg__1) { QErrorMessage::done(arg__1); }
inline void promoted_changeEvent(QEvent*  e) { QErrorMessage::changeEvent(e); }
};

class PythonQtWrapper_QErrorMessage : public QObject
{ Q_OBJECT
public:
public slots:
QErrorMessage* new_QErrorMessage(QWidget*  parent = 0);
void delete_QErrorMessage(QErrorMessage* obj) { delete obj; } 
   void done(QErrorMessage* theWrappedObject, int  arg__1);
   void changeEvent(QErrorMessage* theWrappedObject, QEvent*  e);
   QErrorMessage*  static_QErrorMessage_qtHandler();
};





class PythonQtShell_QFileDialog : public QFileDialog
{
public:
    PythonQtShell_QFileDialog(QWidget*  parent, Qt::WindowFlags  f):QFileDialog(parent, f),_wrapper(NULL) {};
    PythonQtShell_QFileDialog(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString()):QFileDialog(parent, caption, directory, filter),_wrapper(NULL) {};

virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void accept();
virtual void changeEvent(QEvent*  e);
virtual void done(int  result);
virtual void showEvent(QShowEvent*  arg__1);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFileDialog : public QFileDialog
{ public:
inline void promoted_accept() { QFileDialog::accept(); }
inline void promoted_changeEvent(QEvent*  e) { QFileDialog::changeEvent(e); }
inline void promoted_done(int  result) { QFileDialog::done(result); }
};

class PythonQtWrapper_QFileDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DialogLabel )
enum DialogLabel{
  LookIn = QFileDialog::LookIn,   FileName = QFileDialog::FileName,   FileType = QFileDialog::FileType,   Accept = QFileDialog::Accept,   Reject = QFileDialog::Reject};
public slots:
QFileDialog* new_QFileDialog(QWidget*  parent, Qt::WindowFlags  f);
QFileDialog* new_QFileDialog(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString());
void delete_QFileDialog(QFileDialog* obj) { delete obj; } 
   void setReadOnly(QFileDialog* theWrappedObject, bool  enabled);
   QString  selectedFilter(QFileDialog* theWrappedObject) const;
   void setAcceptMode(QFileDialog* theWrappedObject, QFileDialog::AcceptMode  mode);
   void setProxyModel(QFileDialog* theWrappedObject, QAbstractProxyModel*  model);
   bool  isNameFilterDetailsVisible(QFileDialog* theWrappedObject) const;
   bool  testOption(QFileDialog* theWrappedObject, QFileDialog::Option  option) const;
   QFileDialog::Options  options(QFileDialog* theWrappedObject) const;
   void setNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
   QByteArray  saveState(QFileDialog* theWrappedObject) const;
   void setFileMode(QFileDialog* theWrappedObject, QFileDialog::FileMode  mode);
   QDir::Filters  filter(QFileDialog* theWrappedObject) const;
   void accept(QFileDialog* theWrappedObject);
   QFileDialog::AcceptMode  acceptMode(QFileDialog* theWrappedObject) const;
   void setFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
   QString  static_QFileDialog_getOpenFileName(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
   QStringList  filters(QFileDialog* theWrappedObject) const;
   void selectFile(QFileDialog* theWrappedObject, const QString&  filename);
   void setDefaultSuffix(QFileDialog* theWrappedObject, const QString&  suffix);
   QFileDialog::ViewMode  viewMode(QFileDialog* theWrappedObject) const;
   bool  confirmOverwrite(QFileDialog* theWrappedObject) const;
   void setHistory(QFileDialog* theWrappedObject, const QStringList&  paths);
   void setFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void setFilter(QFileDialog* theWrappedObject, QDir::Filters  filters);
   QFileDialog::FileMode  fileMode(QFileDialog* theWrappedObject) const;
   QString  selectedNameFilter(QFileDialog* theWrappedObject) const;
   QStringList  nameFilters(QFileDialog* theWrappedObject) const;
   void setDirectory(QFileDialog* theWrappedObject, const QDir&  directory);
   void setDirectory(QFileDialog* theWrappedObject, const QString&  directory);
   QStringList  history(QFileDialog* theWrappedObject) const;
   void setNameFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
   void setVisible(QFileDialog* theWrappedObject, bool  visible);
   QString  static_QFileDialog_getExistingDirectory(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), QFileDialog::Options  options = QFileDialog::ShowDirsOnly);
   void setConfirmOverwrite(QFileDialog* theWrappedObject, bool  enabled);
   void setOptions(QFileDialog* theWrappedObject, QFileDialog::Options  options);
   void setOption(QFileDialog* theWrappedObject, QFileDialog::Option  option, bool  on = true);
   QString  defaultSuffix(QFileDialog* theWrappedObject) const;
   void setResolveSymlinks(QFileDialog* theWrappedObject, bool  enabled);
   void setItemDelegate(QFileDialog* theWrappedObject, QAbstractItemDelegate*  delegate);
   QList<QUrl >  sidebarUrls(QFileDialog* theWrappedObject) const;
   void setSidebarUrls(QFileDialog* theWrappedObject, const QList<QUrl >&  urls);
   void selectFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void changeEvent(QFileDialog* theWrappedObject, QEvent*  e);
   QDir  directory(QFileDialog* theWrappedObject) const;
   QFileIconProvider*  iconProvider(QFileDialog* theWrappedObject) const;
   QString  labelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label) const;
   bool  isReadOnly(QFileDialog* theWrappedObject) const;
   void open(QFileDialog* theWrappedObject);
   void setIconProvider(QFileDialog* theWrappedObject, QFileIconProvider*  provider);
   void open(QFileDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QStringList  selectedFiles(QFileDialog* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QFileDialog* theWrappedObject) const;
   void selectNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
   bool  restoreState(QFileDialog* theWrappedObject, const QByteArray&  state);
   void setNameFilterDetailsVisible(QFileDialog* theWrappedObject, bool  enabled);
   void done(QFileDialog* theWrappedObject, int  result);
   void setLabelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label, const QString&  text);
   QStringList  static_QFileDialog_getOpenFileNames(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
   QAbstractProxyModel*  proxyModel(QFileDialog* theWrappedObject) const;
   void setViewMode(QFileDialog* theWrappedObject, QFileDialog::ViewMode  mode);
   QString  static_QFileDialog_getSaveFileName(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
   bool  resolveSymlinks(QFileDialog* theWrappedObject) const;
};





class PythonQtShell_QFileIconProvider : public QFileIconProvider
{
public:
    PythonQtShell_QFileIconProvider():QFileIconProvider(),_wrapper(NULL) {};

virtual QIcon  icon(QFileIconProvider::IconType  type) const;
virtual QIcon  icon(const QFileInfo&  info) const;
virtual QString  type(const QFileInfo&  info) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFileIconProvider : public QFileIconProvider
{ public:
inline QIcon  promoted_icon(QFileIconProvider::IconType  type) const { return QFileIconProvider::icon(type); }
inline QIcon  promoted_icon(const QFileInfo&  info) const { return QFileIconProvider::icon(info); }
inline QString  promoted_type(const QFileInfo&  info) const { return QFileIconProvider::type(info); }
};

class PythonQtWrapper_QFileIconProvider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IconType )
enum IconType{
  Computer = QFileIconProvider::Computer,   Desktop = QFileIconProvider::Desktop,   Trashcan = QFileIconProvider::Trashcan,   Network = QFileIconProvider::Network,   Drive = QFileIconProvider::Drive,   Folder = QFileIconProvider::Folder,   File = QFileIconProvider::File};
public slots:
QFileIconProvider* new_QFileIconProvider();
void delete_QFileIconProvider(QFileIconProvider* obj) { delete obj; } 
   QIcon  icon(QFileIconProvider* theWrappedObject, QFileIconProvider::IconType  type) const;
   QIcon  icon(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const;
   QString  type(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const;
};





class PythonQtWrapper_QFileOpenEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFileOpenEvent* new_QFileOpenEvent(const QString&  file);
QFileOpenEvent* new_QFileOpenEvent(const QUrl&  url);
void delete_QFileOpenEvent(QFileOpenEvent* obj) { delete obj; } 
   QUrl  url(QFileOpenEvent* theWrappedObject) const;
   QString  file(QFileOpenEvent* theWrappedObject) const;
};





class PythonQtWrapper_QFocusEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFocusEvent* new_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason);
void delete_QFocusEvent(QFocusEvent* obj) { delete obj; } 
   bool  lostFocus(QFocusEvent* theWrappedObject) const;
   Qt::FocusReason  reason(QFocusEvent* theWrappedObject);
   bool  gotFocus(QFocusEvent* theWrappedObject) const;
};





class PythonQtShell_QFocusFrame : public QFocusFrame
{
public:
    PythonQtShell_QFocusFrame(QWidget*  parent = 0):QFocusFrame(parent),_wrapper(NULL) {};

virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  event(QEvent*  e);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void changeEvent(QEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFocusFrame : public QFocusFrame
{ public:
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QFocusFrame::eventFilter(arg__1, arg__2); }
inline bool  promoted_event(QEvent*  e) { return QFocusFrame::event(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QFocusFrame::paintEvent(arg__1); }
};

class PythonQtWrapper_QFocusFrame : public QObject
{ Q_OBJECT
public:
public slots:
QFocusFrame* new_QFocusFrame(QWidget*  parent = 0);
void delete_QFocusFrame(QFocusFrame* obj) { delete obj; } 
   void setWidget(QFocusFrame* theWrappedObject, QWidget*  widget);
   QWidget*  widget(QFocusFrame* theWrappedObject) const;
   bool  eventFilter(QFocusFrame* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   bool  event(QFocusFrame* theWrappedObject, QEvent*  e);
   void paintEvent(QFocusFrame* theWrappedObject, QPaintEvent*  arg__1);
};





class PythonQtShell_QFontComboBox : public QFontComboBox
{
public:
    PythonQtShell_QFontComboBox(QWidget*  parent = 0):QFontComboBox(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void showEvent(QShowEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void hidePopup();
virtual void focusInEvent(QFocusEvent*  e);
virtual void paintEvent(QPaintEvent*  e);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void showPopup();
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void wheelEvent(QWheelEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void hideEvent(QHideEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void languageChange();
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual bool  focusNextPrevChild(bool  next);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFontComboBox : public QFontComboBox
{ public:
inline bool  promoted_event(QEvent*  e) { return QFontComboBox::event(e); }
};

class PythonQtWrapper_QFontComboBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontFilter )
Q_FLAGS(FontFilters )
enum FontFilter{
  AllFonts = QFontComboBox::AllFonts,   ScalableFonts = QFontComboBox::ScalableFonts,   NonScalableFonts = QFontComboBox::NonScalableFonts,   MonospacedFonts = QFontComboBox::MonospacedFonts,   ProportionalFonts = QFontComboBox::ProportionalFonts};
Q_DECLARE_FLAGS(FontFilters, FontFilter)
public slots:
QFontComboBox* new_QFontComboBox(QWidget*  parent = 0);
void delete_QFontComboBox(QFontComboBox* obj) { delete obj; } 
   void setWritingSystem(QFontComboBox* theWrappedObject, QFontDatabase::WritingSystem  arg__1);
   QFontComboBox::FontFilters  fontFilters(QFontComboBox* theWrappedObject) const;
   QFontDatabase::WritingSystem  writingSystem(QFontComboBox* theWrappedObject) const;
   bool  event(QFontComboBox* theWrappedObject, QEvent*  e);
   QFont  currentFont(QFontComboBox* theWrappedObject) const;
   void setFontFilters(QFontComboBox* theWrappedObject, QFontComboBox::FontFilters  filters);
   QSize  sizeHint(QFontComboBox* theWrappedObject) const;
};





class PythonQtShell_QFontDialog : public QFontDialog
{
public:
    PythonQtShell_QFontDialog(QWidget*  parent = 0):QFontDialog(parent),_wrapper(NULL) {};
    PythonQtShell_QFontDialog(const QFont&  initial, QWidget*  parent = 0):QFontDialog(initial, parent),_wrapper(NULL) {};

virtual void hideEvent(QHideEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void done(int  result);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void accept();
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFontDialog : public QFontDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { QFontDialog::changeEvent(event); }
inline void promoted_done(int  result) { QFontDialog::done(result); }
};

class PythonQtWrapper_QFontDialog : public QObject
{ Q_OBJECT
public:
public slots:
QFontDialog* new_QFontDialog(QWidget*  parent = 0);
QFontDialog* new_QFontDialog(const QFont&  initial, QWidget*  parent = 0);
void delete_QFontDialog(QFontDialog* obj) { delete obj; } 
   QFont  static_QFontDialog_getFont(bool*  ok, QWidget*  parent = 0);
   void setOption(QFontDialog* theWrappedObject, QFontDialog::FontDialogOption  option, bool  on = true);
   void open(QFontDialog* theWrappedObject);
   void open(QFontDialog* theWrappedObject, QObject*  receiver, const char*  member);
   void setVisible(QFontDialog* theWrappedObject, bool  visible);
   void setOptions(QFontDialog* theWrappedObject, QFontDialog::FontDialogOptions  options);
   bool  testOption(QFontDialog* theWrappedObject, QFontDialog::FontDialogOption  option) const;
   void changeEvent(QFontDialog* theWrappedObject, QEvent*  event);
   QFont  selectedFont(QFontDialog* theWrappedObject) const;
   void setCurrentFont(QFontDialog* theWrappedObject, const QFont&  font);
   void done(QFontDialog* theWrappedObject, int  result);
   QFont  static_QFontDialog_getFont(bool*  ok, const QFont&  initial, QWidget*  parent, const QString&  title);
   QFont  static_QFontDialog_getFont(bool*  ok, const QFont&  initial, QWidget*  parent = 0);
   QFontDialog::FontDialogOptions  options(QFontDialog* theWrappedObject) const;
   QFont  currentFont(QFontDialog* theWrappedObject) const;
   QFont  static_QFontDialog_getFont(bool*  ok, const QFont&  initial, QWidget*  parent, const QString&  title, QFontDialog::FontDialogOptions  options);
};





class PythonQtWrapper_QFontInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFontInfo* new_QFontInfo(const QFont&  arg__1);
QFontInfo* new_QFontInfo(const QFontInfo&  arg__1);
void delete_QFontInfo(QFontInfo* obj) { delete obj; } 
   QFont::Style  style(QFontInfo* theWrappedObject) const;
   bool  strikeOut(QFontInfo* theWrappedObject) const;
   int  weight(QFontInfo* theWrappedObject) const;
   bool  bold(QFontInfo* theWrappedObject) const;
   int  pixelSize(QFontInfo* theWrappedObject) const;
   QFont::StyleHint  styleHint(QFontInfo* theWrappedObject) const;
   bool  italic(QFontInfo* theWrappedObject) const;
   bool  rawMode(QFontInfo* theWrappedObject) const;
   int  pointSize(QFontInfo* theWrappedObject) const;
   bool  underline(QFontInfo* theWrappedObject) const;
   bool  exactMatch(QFontInfo* theWrappedObject) const;
   QString  family(QFontInfo* theWrappedObject) const;
   qreal  pointSizeF(QFontInfo* theWrappedObject) const;
   bool  fixedPitch(QFontInfo* theWrappedObject) const;
   bool  overline(QFontInfo* theWrappedObject) const;
};





class PythonQtWrapper_QFontMetrics : public QObject
{ Q_OBJECT
public:
public slots:
QFontMetrics* new_QFontMetrics(const QFont&  arg__1);
QFontMetrics* new_QFontMetrics(const QFont&  arg__1, QPaintDevice*  pd);
void delete_QFontMetrics(QFontMetrics* obj) { delete obj; } 
   int  underlinePos(QFontMetrics* theWrappedObject) const;
   int  charWidth(QFontMetrics* theWrappedObject, const QString&  str, int  pos) const;
   int  leading(QFontMetrics* theWrappedObject) const;
   bool  inFont(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   int  rightBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   int  overlinePos(QFontMetrics* theWrappedObject) const;
   int  lineWidth(QFontMetrics* theWrappedObject) const;
   int  xHeight(QFontMetrics* theWrappedObject) const;
   int  maxWidth(QFontMetrics* theWrappedObject) const;
   int  ascent(QFontMetrics* theWrappedObject) const;
   int  width(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   int  width(QFontMetrics* theWrappedObject, const QString&  arg__1, int  len = -1) const;
   int  leftBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   int  strikeOutPos(QFontMetrics* theWrappedObject) const;
   QString  elidedText(QFontMetrics* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, int  width, int  flags = 0) const;
   int  averageCharWidth(QFontMetrics* theWrappedObject) const;
   QSize  size(QFontMetrics* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = 0) const;
   int  descent(QFontMetrics* theWrappedObject) const;
   QRect  tightBoundingRect(QFontMetrics* theWrappedObject, const QString&  text) const;
   int  lineSpacing(QFontMetrics* theWrappedObject) const;
   int  height(QFontMetrics* theWrappedObject) const;
   int  minLeftBearing(QFontMetrics* theWrappedObject) const;
   int  minRightBearing(QFontMetrics* theWrappedObject) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, const QString&  text) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, const QRect&  r, int  flags, const QString&  text, int  tabstops = 0, int*  tabarray = 0) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, int  tabstops = 0, int*  tabarray = 0) const;
};





class PythonQtWrapper_QFontMetricsF : public QObject
{ Q_OBJECT
public:
public slots:
QFontMetricsF* new_QFontMetricsF(const QFont&  arg__1);
QFontMetricsF* new_QFontMetricsF(const QFont&  arg__1, QPaintDevice*  pd);
void delete_QFontMetricsF(QFontMetricsF* obj) { delete obj; } 
   qreal  underlinePos(QFontMetricsF* theWrappedObject) const;
   qreal  leading(QFontMetricsF* theWrappedObject) const;
   bool  inFont(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  rightBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  overlinePos(QFontMetricsF* theWrappedObject) const;
   qreal  minLeftBearing(QFontMetricsF* theWrappedObject) const;
   qreal  lineWidth(QFontMetricsF* theWrappedObject) const;
   qreal  xHeight(QFontMetricsF* theWrappedObject) const;
   qreal  maxWidth(QFontMetricsF* theWrappedObject) const;
   qreal  width(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  ascent(QFontMetricsF* theWrappedObject) const;
   qreal  leftBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  width(QFontMetricsF* theWrappedObject, const QString&  string) const;
   qreal  averageCharWidth(QFontMetricsF* theWrappedObject) const;
   QString  elidedText(QFontMetricsF* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, qreal  width, int  flags = 0) const;
   qreal  strikeOutPos(QFontMetricsF* theWrappedObject) const;
   QSizeF  size(QFontMetricsF* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = 0) const;
   QRectF  tightBoundingRect(QFontMetricsF* theWrappedObject, const QString&  text) const;
   qreal  lineSpacing(QFontMetricsF* theWrappedObject) const;
   qreal  height(QFontMetricsF* theWrappedObject) const;
   qreal  descent(QFontMetricsF* theWrappedObject) const;
   qreal  minRightBearing(QFontMetricsF* theWrappedObject) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QString&  string) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QRectF&  r, int  flags, const QString&  string, int  tabstops = 0, int*  tabarray = 0) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
};





class PythonQtShell_QFormLayout : public QFormLayout
{
public:
    PythonQtShell_QFormLayout(QWidget*  parent = 0):QFormLayout(parent),_wrapper(NULL) {};

virtual QSize  maximumSize() const;
virtual void addItem(QLayoutItem*  item);
virtual int  count() const;
virtual QSize  minimumSize() const;
virtual QLayoutItem*  takeAt(int  index);
virtual Qt::Orientations  expandingDirections() const;
virtual void setGeometry(const QRect&  rect);
virtual QLayoutItem*  itemAt(int  index) const;
virtual void invalidate();
virtual void childEvent(QChildEvent*  e);
virtual QLayout*  layout();
virtual QRect  geometry() const;
virtual bool  isEmpty() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFormLayout : public QFormLayout
{ public:
inline void promoted_addItem(QLayoutItem*  item) { QFormLayout::addItem(item); }
inline int  promoted_count() const { return QFormLayout::count(); }
inline QSize  promoted_minimumSize() const { return QFormLayout::minimumSize(); }
inline QLayoutItem*  promoted_takeAt(int  index) { return QFormLayout::takeAt(index); }
inline Qt::Orientations  promoted_expandingDirections() const { return QFormLayout::expandingDirections(); }
inline void promoted_setGeometry(const QRect&  rect) { QFormLayout::setGeometry(rect); }
inline QLayoutItem*  promoted_itemAt(int  index) const { return QFormLayout::itemAt(index); }
inline void promoted_invalidate() { QFormLayout::invalidate(); }
};

class PythonQtWrapper_QFormLayout : public QObject
{ Q_OBJECT
public:
public slots:
QFormLayout* new_QFormLayout(QWidget*  parent = 0);
void delete_QFormLayout(QFormLayout* obj) { delete obj; } 
   QFormLayout::FieldGrowthPolicy  fieldGrowthPolicy(QFormLayout* theWrappedObject) const;
   void setHorizontalSpacing(QFormLayout* theWrappedObject, int  spacing);
   void addItem(QFormLayout* theWrappedObject, QLayoutItem*  item);
   int  count(QFormLayout* theWrappedObject) const;
   void getItemPosition(QFormLayout* theWrappedObject, int  index, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   bool  hasHeightForWidth(QFormLayout* theWrappedObject) const;
   void addRow(QFormLayout* theWrappedObject, const QString&  labelText, QLayout*  field);
   void getWidgetPosition(QFormLayout* theWrappedObject, QWidget*  widget, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   int  heightForWidth(QFormLayout* theWrappedObject, int  width) const;
   QWidget*  labelForField(QFormLayout* theWrappedObject, QWidget*  field) const;
   QWidget*  labelForField(QFormLayout* theWrappedObject, QLayout*  field) const;
   Qt::Alignment  formAlignment(QFormLayout* theWrappedObject) const;
   void addRow(QFormLayout* theWrappedObject, QWidget*  label, QWidget*  field);
   void addRow(QFormLayout* theWrappedObject, QLayout*  layout);
   void addRow(QFormLayout* theWrappedObject, const QString&  labelText, QWidget*  field);
   QSize  sizeHint(QFormLayout* theWrappedObject) const;
   void insertRow(QFormLayout* theWrappedObject, int  row, QLayout*  layout);
   void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  widget);
   QSize  minimumSize(QFormLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QFormLayout* theWrappedObject, int  index);
   QFormLayout::RowWrapPolicy  rowWrapPolicy(QFormLayout* theWrappedObject) const;
   void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QWidget*  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QLayout*  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QWidget*  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QLayout*  field);
   void addRow(QFormLayout* theWrappedObject, QWidget*  widget);
   int  horizontalSpacing(QFormLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role) const;
   void getLayoutPosition(QFormLayout* theWrappedObject, QLayout*  layout, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   void setLayout(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayout*  layout);
   Qt::Orientations  expandingDirections(QFormLayout* theWrappedObject) const;
   void setWidget(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QWidget*  widget);
   int  spacing(QFormLayout* theWrappedObject) const;
   void setGeometry(QFormLayout* theWrappedObject, const QRect&  rect);
   int  rowCount(QFormLayout* theWrappedObject) const;
   Qt::Alignment  labelAlignment(QFormLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QFormLayout* theWrappedObject, int  index) const;
   void setLabelAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
   void setVerticalSpacing(QFormLayout* theWrappedObject, int  spacing);
   void setRowWrapPolicy(QFormLayout* theWrappedObject, QFormLayout::RowWrapPolicy  policy);
   void setItem(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayoutItem*  item);
   void addRow(QFormLayout* theWrappedObject, QWidget*  label, QLayout*  field);
   int  verticalSpacing(QFormLayout* theWrappedObject) const;
   void setFieldGrowthPolicy(QFormLayout* theWrappedObject, QFormLayout::FieldGrowthPolicy  policy);
   void setFormAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
   void setSpacing(QFormLayout* theWrappedObject, int  arg__1);
   void invalidate(QFormLayout* theWrappedObject);
};





class PythonQtShell_QFrame : public QFrame
{
public:
    PythonQtShell_QFrame(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QFrame(parent, f),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void changeEvent(QEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual QSize  minimumSizeHint() const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFrame : public QFrame
{ public:
inline bool  promoted_event(QEvent*  e) { return QFrame::event(e); }
inline void promoted_changeEvent(QEvent*  arg__1) { QFrame::changeEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QFrame::paintEvent(arg__1); }
};

class PythonQtWrapper_QFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleMask )
enum StyleMask{
  Shadow_Mask = QFrame::Shadow_Mask,   Shape_Mask = QFrame::Shape_Mask};
public slots:
QFrame* new_QFrame(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QFrame(QFrame* obj) { delete obj; } 
   bool  event(QFrame* theWrappedObject, QEvent*  e);
   QFrame::Shadow  frameShadow(QFrame* theWrappedObject) const;
   int  frameStyle(QFrame* theWrappedObject) const;
   void setMidLineWidth(QFrame* theWrappedObject, int  arg__1);
   void setFrameShadow(QFrame* theWrappedObject, QFrame::Shadow  arg__1);
   void changeEvent(QFrame* theWrappedObject, QEvent*  arg__1);
   QFrame::Shape  frameShape(QFrame* theWrappedObject) const;
   QRect  frameRect(QFrame* theWrappedObject) const;
   int  frameWidth(QFrame* theWrappedObject) const;
   int  midLineWidth(QFrame* theWrappedObject) const;
   int  lineWidth(QFrame* theWrappedObject) const;
   void setFrameRect(QFrame* theWrappedObject, const QRect&  arg__1);
   void setFrameShape(QFrame* theWrappedObject, QFrame::Shape  arg__1);
   QSize  sizeHint(QFrame* theWrappedObject) const;
   void setLineWidth(QFrame* theWrappedObject, int  arg__1);
   void setFrameStyle(QFrame* theWrappedObject, int  arg__1);
   void paintEvent(QFrame* theWrappedObject, QPaintEvent*  arg__1);
};





class PythonQtShell_QGesture : public QGesture
{
public:
    PythonQtShell_QGesture(QObject*  parent = 0):QGesture(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGesture : public QObject
{ Q_OBJECT
public:
public slots:
QGesture* new_QGesture(QObject*  parent = 0);
void delete_QGesture(QGesture* obj) { delete obj; } 
   void setHotSpot(QGesture* theWrappedObject, const QPointF&  value);
   void unsetHotSpot(QGesture* theWrappedObject);
   QPointF  hotSpot(QGesture* theWrappedObject) const;
   bool  hasHotSpot(QGesture* theWrappedObject) const;
   Qt::GestureState  state(QGesture* theWrappedObject) const;
};





class PythonQtWrapper_QGradient : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CoordinateMode Spread Type )
enum CoordinateMode{
  LogicalMode = QGradient::LogicalMode,   StretchToDeviceMode = QGradient::StretchToDeviceMode,   ObjectBoundingMode = QGradient::ObjectBoundingMode};
enum Spread{
  PadSpread = QGradient::PadSpread,   ReflectSpread = QGradient::ReflectSpread,   RepeatSpread = QGradient::RepeatSpread};
enum Type{
  LinearGradient = QGradient::LinearGradient,   RadialGradient = QGradient::RadialGradient,   ConicalGradient = QGradient::ConicalGradient,   NoGradient = QGradient::NoGradient};
public slots:
QGradient* new_QGradient();
QGradient* new_QGradient(const QGradient& other) {
QGradient* a = new QGradient();
*((QGradient*)a) = other;
return a; }
void delete_QGradient(QGradient* obj) { delete obj; } 
   void setStops(QGradient* theWrappedObject, const QVector<QPair<qreal , QColor >  >&  stops);
   void setColorAt(QGradient* theWrappedObject, qreal  pos, const QColor&  color);
   QGradient::Spread  spread(QGradient* theWrappedObject) const;
   void setCoordinateMode(QGradient* theWrappedObject, QGradient::CoordinateMode  mode);
   bool  __ne__(QGradient* theWrappedObject, const QGradient&  other) const;
   QGradient::CoordinateMode  coordinateMode(QGradient* theWrappedObject) const;
   QVector<QPair<qreal , QColor >  >  stops(QGradient* theWrappedObject) const;
   QGradient::Type  type(QGradient* theWrappedObject) const;
   bool  __eq__(QGradient* theWrappedObject, const QGradient&  gradient) const;
   void setSpread(QGradient* theWrappedObject, QGradient::Spread  spread);
};





class PythonQtWrapper_QGraphicsAnchor : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QGraphicsAnchor(QGraphicsAnchor* obj) { delete obj; } 
   void setSizePolicy(QGraphicsAnchor* theWrappedObject, QSizePolicy::Policy  policy);
   qreal  spacing(QGraphicsAnchor* theWrappedObject) const;
   void setSpacing(QGraphicsAnchor* theWrappedObject, qreal  spacing);
   void unsetSpacing(QGraphicsAnchor* theWrappedObject);
   QSizePolicy::Policy  sizePolicy(QGraphicsAnchor* theWrappedObject) const;
};





class PythonQtShell_QGraphicsAnchorLayout : public QGraphicsAnchorLayout
{
public:
    PythonQtShell_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsAnchorLayout(parent),_wrapper(NULL) {};

virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual int  count() const;
virtual void removeAt(int  index);
virtual void invalidate();
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsAnchorLayout : public QGraphicsAnchorLayout
{ public:
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsAnchorLayout::itemAt(index); }
inline int  promoted_count() const { return QGraphicsAnchorLayout::count(); }
inline void promoted_removeAt(int  index) { QGraphicsAnchorLayout::removeAt(index); }
inline void promoted_invalidate() { QGraphicsAnchorLayout::invalidate(); }
};

class PythonQtWrapper_QGraphicsAnchorLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsAnchorLayout* new_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsAnchorLayout(QGraphicsAnchorLayout* obj) { delete obj; } 
   void setVerticalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   void setGeometry(QGraphicsAnchorLayout* theWrappedObject, const QRectF&  rect);
   void setSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   void addCornerAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::Corner  firstCorner, QGraphicsLayoutItem*  secondItem, Qt::Corner  secondCorner);
   qreal  horizontalSpacing(QGraphicsAnchorLayout* theWrappedObject) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsAnchorLayout* theWrappedObject, int  index) const;
   int  count(QGraphicsAnchorLayout* theWrappedObject) const;
   QGraphicsAnchor*  anchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge);
   void setHorizontalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   QGraphicsAnchor*  addAnchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge);
   void addAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, QGraphicsLayoutItem*  secondItem, Qt::Orientations  orientations = Qt::Horizontal | Qt::Vertical);
   qreal  verticalSpacing(QGraphicsAnchorLayout* theWrappedObject) const;
   void removeAt(QGraphicsAnchorLayout* theWrappedObject, int  index);
   void invalidate(QGraphicsAnchorLayout* theWrappedObject);
};





class PythonQtShell_QGraphicsEffect : public QGraphicsEffect
{
public:
    PythonQtShell_QGraphicsEffect(QObject*  parent = 0):QGraphicsEffect(parent),_wrapper(NULL) {};

virtual QRectF  boundingRectFor(const QRectF&  sourceRect) const;
virtual void draw(QPainter*  painter);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsEffect : public QGraphicsEffect
{ public:
inline QRectF  promoted_boundingRectFor(const QRectF&  sourceRect) const { return QGraphicsEffect::boundingRectFor(sourceRect); }
inline void promoted_sourceChanged(QGraphicsEffect::ChangeFlags  flags) { QGraphicsEffect::sourceChanged(flags); }
};

class PythonQtWrapper_QGraphicsEffect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChangeFlag )
Q_FLAGS(ChangeFlags )
enum ChangeFlag{
  SourceAttached = QGraphicsEffect::SourceAttached,   SourceDetached = QGraphicsEffect::SourceDetached,   SourceBoundingRectChanged = QGraphicsEffect::SourceBoundingRectChanged,   SourceInvalidated = QGraphicsEffect::SourceInvalidated};
Q_DECLARE_FLAGS(ChangeFlags, ChangeFlag)
public slots:
QGraphicsEffect* new_QGraphicsEffect(QObject*  parent = 0);
void delete_QGraphicsEffect(QGraphicsEffect* obj) { delete obj; } 
   QRectF  boundingRectFor(QGraphicsEffect* theWrappedObject, const QRectF&  sourceRect) const;
   bool  isEnabled(QGraphicsEffect* theWrappedObject) const;
   void sourceChanged(QGraphicsEffect* theWrappedObject, QGraphicsEffect::ChangeFlags  flags);
   QRectF  boundingRect(QGraphicsEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsEllipseItem : public QGraphicsEllipseItem
{
public:
    PythonQtShell_QGraphicsEllipseItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsEllipseItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsEllipseItem(rect, parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsEllipseItem(x, y, w, h, parent, scene),_wrapper(NULL) {};

virtual QPainterPath  opaqueArea() const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsEllipseItem : public QGraphicsEllipseItem
{ public:
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsEllipseItem::opaqueArea(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsEllipseItem::isObscuredBy(item); }
};

class PythonQtWrapper_QGraphicsEllipseItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsEllipseItem::Type};
public slots:
QGraphicsEllipseItem* new_QGraphicsEllipseItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsEllipseItem* new_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsEllipseItem* new_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsEllipseItem(QGraphicsEllipseItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsEllipseItem* theWrappedObject) const;
   void setRect(QGraphicsEllipseItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   int  type(QGraphicsEllipseItem* theWrappedObject) const;
   QRectF  rect(QGraphicsEllipseItem* theWrappedObject) const;
   QPainterPath  shape(QGraphicsEllipseItem* theWrappedObject) const;
   int  startAngle(QGraphicsEllipseItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsEllipseItem* theWrappedObject) const;
   int  spanAngle(QGraphicsEllipseItem* theWrappedObject) const;
   void setSpanAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   bool  isObscuredBy(QGraphicsEllipseItem* theWrappedObject, const QGraphicsItem*  item) const;
   void setStartAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   void paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   bool  contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const;
   void setRect(QGraphicsEllipseItem* theWrappedObject, const QRectF&  rect);
};





class PythonQtShell_QGraphicsGridLayout : public QGraphicsGridLayout
{
public:
    PythonQtShell_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsGridLayout(parent),_wrapper(NULL) {};

virtual void widgetEvent(QEvent*  e);
virtual void removeAt(int  index);
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void invalidate();
virtual int  count() const;
virtual void updateGeometry();
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsGridLayout : public QGraphicsGridLayout
{ public:
inline void promoted_removeAt(int  index) { QGraphicsGridLayout::removeAt(index); }
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsGridLayout::itemAt(index); }
inline void promoted_invalidate() { QGraphicsGridLayout::invalidate(); }
inline int  promoted_count() const { return QGraphicsGridLayout::count(); }
};

class PythonQtWrapper_QGraphicsGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsGridLayout* new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsGridLayout(QGraphicsGridLayout* obj) { delete obj; } 
   void setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment);
   void setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   int  rowCount(QGraphicsGridLayout* theWrappedObject) const;
   void setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   Qt::Alignment  rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment);
   void setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   qreal  rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing);
   qreal  rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   QSizeF  sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   qreal  horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const;
   void setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect);
   int  rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   Qt::Alignment  alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   void setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   qreal  columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void removeAt(QGraphicsGridLayout* theWrappedObject, int  index);
   QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  index) const;
   void setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   Qt::Alignment  columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   qreal  rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void invalidate(QGraphicsGridLayout* theWrappedObject);
   void setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   int  columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const;
   qreal  columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   int  columnCount(QGraphicsGridLayout* theWrappedObject) const;
   void setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   qreal  rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   void setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch);
   void setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing);
   qreal  columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   int  count(QGraphicsGridLayout* theWrappedObject) const;
   qreal  verticalSpacing(QGraphicsGridLayout* theWrappedObject) const;
   void setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment = 0);
   void addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, Qt::Alignment  alignment = 0);
   void setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch);
   qreal  columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
};





class PythonQtShell_QGraphicsItem : public QGraphicsItem
{
public:
    PythonQtShell_QGraphicsItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsItem(parent, scene),_wrapper(NULL) {};

virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual QRectF  boundingRect() const;
virtual QVariant  extension(const QVariant&  variant) const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual QPainterPath  shape() const;
virtual bool  contains(const QPointF&  point) const;
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual void advance(int  phase);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual int  type() const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItem : public QGraphicsItem
{ public:
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsItem::inputMethodQuery(query); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsItem::keyPressEvent(event); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsItem::contextMenuEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverEnterEvent(event); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItem::isObscuredBy(item); }
inline bool  promoted_sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) { return QGraphicsItem::sceneEventFilter(watched, event); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsItem::itemChange(change, value); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragEnterEvent(event); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsItem::opaqueArea(); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsItem::focusOutEvent(event); }
inline bool  promoted_collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithPath(path, mode); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseMoveEvent(event); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsItem::extension(variant); }
inline QPainterPath  promoted_shape() const { return QGraphicsItem::shape(); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsItem::contains(point); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverLeaveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dropEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseReleaseEvent(event); }
inline bool  promoted_sceneEvent(QEvent*  event) { return QGraphicsItem::sceneEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsItem::focusInEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsItem::keyReleaseEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragMoveEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseDoubleClickEvent(event); }
inline bool  promoted_collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithItem(other, mode); }
inline void promoted_advance(int  phase) { QGraphicsItem::advance(phase); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverMoveEvent(event); }
inline int  promoted_type() const { return QGraphicsItem::type(); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsItem::inputMethodEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsItem::wheelEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mousePressEvent(event); }
};

class PythonQtWrapper_QGraphicsItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CacheMode PanelModality enum_1 GraphicsItemFlag GraphicsItemChange )
Q_FLAGS(GraphicsItemFlags )
enum CacheMode{
  NoCache = QGraphicsItem::NoCache,   ItemCoordinateCache = QGraphicsItem::ItemCoordinateCache,   DeviceCoordinateCache = QGraphicsItem::DeviceCoordinateCache};
enum PanelModality{
  NonModal = QGraphicsItem::NonModal,   PanelModal = QGraphicsItem::PanelModal,   SceneModal = QGraphicsItem::SceneModal};
enum enum_1{
  Type = QGraphicsItem::Type,   UserType = QGraphicsItem::UserType};
enum GraphicsItemFlag{
  ItemIsMovable = QGraphicsItem::ItemIsMovable,   ItemIsSelectable = QGraphicsItem::ItemIsSelectable,   ItemIsFocusable = QGraphicsItem::ItemIsFocusable,   ItemClipsToShape = QGraphicsItem::ItemClipsToShape,   ItemClipsChildrenToShape = QGraphicsItem::ItemClipsChildrenToShape,   ItemIgnoresTransformations = QGraphicsItem::ItemIgnoresTransformations,   ItemIgnoresParentOpacity = QGraphicsItem::ItemIgnoresParentOpacity,   ItemDoesntPropagateOpacityToChildren = QGraphicsItem::ItemDoesntPropagateOpacityToChildren,   ItemStacksBehindParent = QGraphicsItem::ItemStacksBehindParent,   ItemUsesExtendedStyleOption = QGraphicsItem::ItemUsesExtendedStyleOption,   ItemHasNoContents = QGraphicsItem::ItemHasNoContents,   ItemSendsGeometryChanges = QGraphicsItem::ItemSendsGeometryChanges,   ItemAcceptsInputMethod = QGraphicsItem::ItemAcceptsInputMethod,   ItemNegativeZStacksBehindParent = QGraphicsItem::ItemNegativeZStacksBehindParent,   ItemIsPanel = QGraphicsItem::ItemIsPanel,   ItemIsFocusScope = QGraphicsItem::ItemIsFocusScope,   ItemSendsScenePositionChanges = QGraphicsItem::ItemSendsScenePositionChanges};
enum GraphicsItemChange{
  ItemPositionChange = QGraphicsItem::ItemPositionChange,   ItemMatrixChange = QGraphicsItem::ItemMatrixChange,   ItemVisibleChange = QGraphicsItem::ItemVisibleChange,   ItemEnabledChange = QGraphicsItem::ItemEnabledChange,   ItemSelectedChange = QGraphicsItem::ItemSelectedChange,   ItemParentChange = QGraphicsItem::ItemParentChange,   ItemChildAddedChange = QGraphicsItem::ItemChildAddedChange,   ItemChildRemovedChange = QGraphicsItem::ItemChildRemovedChange,   ItemTransformChange = QGraphicsItem::ItemTransformChange,   ItemPositionHasChanged = QGraphicsItem::ItemPositionHasChanged,   ItemTransformHasChanged = QGraphicsItem::ItemTransformHasChanged,   ItemSceneChange = QGraphicsItem::ItemSceneChange,   ItemVisibleHasChanged = QGraphicsItem::ItemVisibleHasChanged,   ItemEnabledHasChanged = QGraphicsItem::ItemEnabledHasChanged,   ItemSelectedHasChanged = QGraphicsItem::ItemSelectedHasChanged,   ItemParentHasChanged = QGraphicsItem::ItemParentHasChanged,   ItemSceneHasChanged = QGraphicsItem::ItemSceneHasChanged,   ItemCursorChange = QGraphicsItem::ItemCursorChange,   ItemCursorHasChanged = QGraphicsItem::ItemCursorHasChanged,   ItemToolTipChange = QGraphicsItem::ItemToolTipChange,   ItemToolTipHasChanged = QGraphicsItem::ItemToolTipHasChanged,   ItemFlagsChange = QGraphicsItem::ItemFlagsChange,   ItemFlagsHaveChanged = QGraphicsItem::ItemFlagsHaveChanged,   ItemZValueChange = QGraphicsItem::ItemZValueChange,   ItemZValueHasChanged = QGraphicsItem::ItemZValueHasChanged,   ItemOpacityChange = QGraphicsItem::ItemOpacityChange,   ItemOpacityHasChanged = QGraphicsItem::ItemOpacityHasChanged,   ItemScenePositionHasChanged = QGraphicsItem::ItemScenePositionHasChanged};
Q_DECLARE_FLAGS(GraphicsItemFlags, GraphicsItemFlag)
public slots:
QGraphicsItem* new_QGraphicsItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsItem(QGraphicsItem* obj) { delete obj; } 
bool py_hasOwner(QGraphicsItem* theWrappedObject) { return theWrappedObject->scene()!=NULL || theWrappedObject->parentItem()!=NULL; }
   QVariant  data(QGraphicsItem* theWrappedObject, int  key) const;
   bool  isWindow(QGraphicsItem* theWrappedObject) const;
   void setScale(QGraphicsItem* theWrappedObject, qreal  scale);
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QRectF  mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  isSelected(QGraphicsItem* theWrappedObject) const;
   bool  isWidget(QGraphicsItem* theWrappedObject) const;
   QVariant  inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   QPointF  pos(QGraphicsItem* theWrappedObject) const;
   QRectF  mapRectFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   bool  isClipped(QGraphicsItem* theWrappedObject) const;
   void clearFocus(QGraphicsItem* theWrappedObject);
   QRectF  mapRectFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QRectF  mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QRectF  mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  acceptTouchEvents(QGraphicsItem* theWrappedObject) const;
   void keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QGraphicsItem*  panel(QGraphicsItem* theWrappedObject) const;
   bool  acceptDrops(QGraphicsItem* theWrappedObject) const;
   void setFlag(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled = true);
   void stackBefore(QGraphicsItem* theWrappedObject, const QGraphicsItem*  sibling);
   QRectF  mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   Qt::InputMethodHints  inputMethodHints(QGraphicsItem* theWrappedObject) const;
   void contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   bool  handlesChildEvents(QGraphicsItem* theWrappedObject) const;
   void hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   qreal  boundingRegionGranularity(QGraphicsItem* theWrappedObject) const;
   void setFiltersChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void setAcceptsHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   bool  isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event);
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   qreal  x(QGraphicsItem* theWrappedObject) const;
   void removeSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   QGraphicsItem::PanelModality  panelModality(QGraphicsItem* theWrappedObject) const;
   void setPos(QGraphicsItem* theWrappedObject, const QPointF&  pos);
   QGraphicsItem*  focusScopeItem(QGraphicsItem* theWrappedObject) const;
   void setTransformOriginPoint(QGraphicsItem* theWrappedObject, qreal  ax, qreal  ay);
   void setData(QGraphicsItem* theWrappedObject, int  key, const QVariant&  value);
   void setPos(QGraphicsItem* theWrappedObject, qreal  x, qreal  y);
   QList<QGraphicsItem* >  collidingItems(QGraphicsItem* theWrappedObject, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QVariant  itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   QPointF  scenePos(QGraphicsItem* theWrappedObject) const;
   void grabMouse(QGraphicsItem* theWrappedObject);
   bool  isUnderMouse(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void scroll(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect = QRectF());
   void ungrabMouse(QGraphicsItem* theWrappedObject);
   void setSelected(QGraphicsItem* theWrappedObject, bool  selected);
   void dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void setFocusProxy(QGraphicsItem* theWrappedObject, QGraphicsItem*  item);
   void setOpacity(QGraphicsItem* theWrappedObject, qreal  opacity);
   QGraphicsScene*  scene(QGraphicsItem* theWrappedObject) const;
   qreal  opacity(QGraphicsItem* theWrappedObject) const;
   bool  hasFocus(QGraphicsItem* theWrappedObject) const;
   void translate(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  opaqueArea(QGraphicsItem* theWrappedObject) const;
   void grabKeyboard(QGraphicsItem* theWrappedObject);
   void ensureVisible(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF(), int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   void focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   void shear(QGraphicsItem* theWrappedObject, qreal  sh, qreal  sv);
   void moveBy(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
   QGraphicsItem::CacheMode  cacheMode(QGraphicsItem* theWrappedObject) const;
   void setFocus(QGraphicsItem* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   QGraphicsItem*  focusItem(QGraphicsItem* theWrappedObject) const;
   QRegion  boundingRegion(QGraphicsItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   bool  isVisible(QGraphicsItem* theWrappedObject) const;
   qreal  scale(QGraphicsItem* theWrappedObject) const;
   void setY(QGraphicsItem* theWrappedObject, qreal  y);
   bool  collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setTransform(QGraphicsItem* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void setInputMethodHints(QGraphicsItem* theWrappedObject, Qt::InputMethodHints  hints);
   void ungrabKeyboard(QGraphicsItem* theWrappedObject);
   void unsetCursor(QGraphicsItem* theWrappedObject);
   void setX(QGraphicsItem* theWrappedObject, qreal  x);
   void scale(QGraphicsItem* theWrappedObject, qreal  sx, qreal  sy);
   void mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setAcceptTouchEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   QTransform  sceneTransform(QGraphicsItem* theWrappedObject) const;
   QRectF  sceneBoundingRect(QGraphicsItem* theWrappedObject) const;
   QRectF  childrenBoundingRect(QGraphicsItem* theWrappedObject) const;
   QPointF  transformOriginPoint(QGraphicsItem* theWrappedObject) const;
   void setTransformations(QGraphicsItem* theWrappedObject, const QList<QGraphicsTransform* >&  transformations);
   void setCursor(QGraphicsItem* theWrappedObject, const QCursor&  cursor);
   void setFlags(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   bool  isEnabled(QGraphicsItem* theWrappedObject) const;
   QString  toolTip(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsItem* theWrappedObject) const;
   qreal  zValue(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  commonAncestorItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other) const;
   void setEnabled(QGraphicsItem* theWrappedObject, bool  enabled);
   QGraphicsItem*  parentItem(QGraphicsItem* theWrappedObject) const;
   QVariant  extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const;
   void resetTransform(QGraphicsItem* theWrappedObject);
   QPainterPath  mapToScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   void setParentItem(QGraphicsItem* theWrappedObject, QGraphicsItem*  parent);
   QGraphicsItem*  focusProxy(QGraphicsItem* theWrappedObject) const;
   QPainterPath  shape(QGraphicsItem* theWrappedObject) const;
   bool  contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   void hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   bool  acceptHoverEvents(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPainterPath  mapToParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   void setBoundingRegionGranularity(QGraphicsItem* theWrappedObject, qreal  granularity);
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   void dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   void setVisible(QGraphicsItem* theWrappedObject, bool  visible);
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QTransform  deviceTransform(QGraphicsItem* theWrappedObject, const QTransform&  viewportTransform) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   void mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setAcceptHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   QGraphicsWidget*  topLevelWidget(QGraphicsItem* theWrappedObject) const;
   QList<QGraphicsItem* >  childItems(QGraphicsItem* theWrappedObject) const;
   void setAcceptDrops(QGraphicsItem* theWrappedObject, bool  on);
   void setToolTip(QGraphicsItem* theWrappedObject, const QString&  toolTip);
   bool  isPanel(QGraphicsItem* theWrappedObject) const;
   void setTransformOriginPoint(QGraphicsItem* theWrappedObject, const QPointF&  origin);
   void setPanelModality(QGraphicsItem* theWrappedObject, QGraphicsItem::PanelModality  panelModality);
   void setGraphicsEffect(QGraphicsItem* theWrappedObject, QGraphicsEffect*  effect);
   bool  sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event);
   QGraphicsObject*  toGraphicsObject(QGraphicsItem* theWrappedObject);
   qreal  effectiveOpacity(QGraphicsItem* theWrappedObject) const;
   qreal  y(QGraphicsItem* theWrappedObject) const;
   QCursor  cursor(QGraphicsItem* theWrappedObject) const;
   QGraphicsObject*  parentObject(QGraphicsItem* theWrappedObject) const;
   QRectF  mapRectToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void setZValue(QGraphicsItem* theWrappedObject, qreal  z);
   void setActive(QGraphicsItem* theWrappedObject, bool  active);
   QRectF  mapRectFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void installSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   void focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   void keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   void dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QRectF  mapRectFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   void mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QGraphicsItem*  topLevelItem(QGraphicsItem* theWrappedObject) const;
   bool  collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   bool  isActive(QGraphicsItem* theWrappedObject) const;
   qreal  rotation(QGraphicsItem* theWrappedObject) const;
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QRectF  mapRectToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   void advance(QGraphicsItem* theWrappedObject, int  phase);
   QPainterPath  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   void rotate(QGraphicsItem* theWrappedObject, qreal  angle);
   void dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QRectF  mapRectToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   bool  acceptsHoverEvents(QGraphicsItem* theWrappedObject) const;
   QPainterPath  clipPath(QGraphicsItem* theWrappedObject) const;
   bool  isVisibleTo(QGraphicsItem* theWrappedObject, const QGraphicsItem*  parent) const;
   void setRotation(QGraphicsItem* theWrappedObject, qreal  angle);
   void hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void show(QGraphicsItem* theWrappedObject);
   QPainterPath  mapFromScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   int  type(QGraphicsItem* theWrappedObject) const;
   bool  isAncestorOf(QGraphicsItem* theWrappedObject, const QGraphicsItem*  child) const;
   void setHandlesChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   QGraphicsItemGroup*  group(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   bool  isObscured(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   void inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event);
   bool  isBlockedByModalPanel(QGraphicsItem* theWrappedObject, QGraphicsItem**  blockingPanel = 0) const;
   QGraphicsWidget*  parentWidget(QGraphicsItem* theWrappedObject) const;
   void wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   bool  filtersChildEvents(QGraphicsItem* theWrappedObject) const;
   QTransform  transform(QGraphicsItem* theWrappedObject) const;
   void setAcceptedMouseButtons(QGraphicsItem* theWrappedObject, Qt::MouseButtons  buttons);
   void setCacheMode(QGraphicsItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize = QSize());
   void hide(QGraphicsItem* theWrappedObject);
   void update(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   bool  hasCursor(QGraphicsItem* theWrappedObject) const;
   void update(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF());
   void setGroup(QGraphicsItem* theWrappedObject, QGraphicsItemGroup*  group);
   QTransform  itemTransform(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, bool*  ok = 0) const;
   QList<QGraphicsTransform* >  transformations(QGraphicsItem* theWrappedObject) const;
   bool  isObscured(QGraphicsItem* theWrappedObject) const;
   void mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   bool  isObscured(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsItem* theWrappedObject) const;
   QGraphicsEffect*  graphicsEffect(QGraphicsItem* theWrappedObject) const;
   QGraphicsWidget*  window(QGraphicsItem* theWrappedObject) const;
   QPainterPath  mapFromParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
    QString py_toString(QGraphicsItem*);
};





class PythonQtShell_QGraphicsItemAnimation : public QGraphicsItemAnimation
{
public:
    PythonQtShell_QGraphicsItemAnimation(QObject*  parent = 0):QGraphicsItemAnimation(parent),_wrapper(NULL) {};

virtual void beforeAnimationStep(qreal  step);
virtual void afterAnimationStep(qreal  step);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItemAnimation : public QGraphicsItemAnimation
{ public:
inline void promoted_beforeAnimationStep(qreal  step) { QGraphicsItemAnimation::beforeAnimationStep(step); }
inline void promoted_afterAnimationStep(qreal  step) { QGraphicsItemAnimation::afterAnimationStep(step); }
};

class PythonQtWrapper_QGraphicsItemAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsItemAnimation* new_QGraphicsItemAnimation(QObject*  parent = 0);
void delete_QGraphicsItemAnimation(QGraphicsItemAnimation* obj) { delete obj; } 
   qreal  horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QGraphicsItem*  item(QGraphicsItemAnimation* theWrappedObject) const;
   QList<QPair<qreal , QPointF >  >  translationList(QGraphicsItemAnimation* theWrappedObject) const;
   void setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item);
   qreal  verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  scaleList(QGraphicsItemAnimation* theWrappedObject) const;
   QList<QPair<qreal , QPointF >  >  posList(QGraphicsItemAnimation* theWrappedObject) const;
   QPointF  posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QMatrix  matrixAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   void beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   QTimeLine*  timeLine(QGraphicsItemAnimation* theWrappedObject) const;
   void setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy);
   QList<QPair<qreal , QPointF >  >  shearList(QGraphicsItemAnimation* theWrappedObject) const;
   void setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine);
   void setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy);
   QList<QPair<qreal , qreal >  >  rotationList(QGraphicsItemAnimation* theWrappedObject) const;
   void afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   qreal  yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   void setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv);
   qreal  rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   void setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos);
   void setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle);
   qreal  horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   void clear(QGraphicsItemAnimation* theWrappedObject);
};





class PythonQtShell_QGraphicsItemGroup : public QGraphicsItemGroup
{
public:
    PythonQtShell_QGraphicsItemGroup(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsItemGroup(parent, scene),_wrapper(NULL) {};

virtual QPainterPath  opaqueArea() const;
virtual int  type() const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual QRectF  boundingRect() const;
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual void advance(int  phase);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItemGroup : public QGraphicsItemGroup
{ public:
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsItemGroup::opaqueArea(); }
inline int  promoted_type() const { return QGraphicsItemGroup::type(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItemGroup::isObscuredBy(item); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsItemGroup::paint(painter, option, widget); }
inline QRectF  promoted_boundingRect() const { return QGraphicsItemGroup::boundingRect(); }
};

class PythonQtWrapper_QGraphicsItemGroup : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsItemGroup::Type};
public slots:
QGraphicsItemGroup* new_QGraphicsItemGroup(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsItemGroup(QGraphicsItemGroup* obj) { delete obj; } 
   QPainterPath  opaqueArea(QGraphicsItemGroup* theWrappedObject) const;
   int  type(QGraphicsItemGroup* theWrappedObject) const;
   void addToGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item);
   bool  isObscuredBy(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item) const;
   void removeFromGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item);
   void paint(QGraphicsItemGroup* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QRectF  boundingRect(QGraphicsItemGroup* theWrappedObject) const;
};





class PythonQtShell_QGraphicsLayout : public QGraphicsLayout
{
public:
    PythonQtShell_QGraphicsLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsLayout(parent),_wrapper(NULL) {};

virtual QGraphicsLayoutItem*  itemAt(int  i) const;
virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);
virtual void removeAt(int  index);
virtual void invalidate();
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLayout : public QGraphicsLayout
{ public:
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayout::getContentsMargins(left, top, right, bottom); }
inline void promoted_updateGeometry() { QGraphicsLayout::updateGeometry(); }
inline void promoted_widgetEvent(QEvent*  e) { QGraphicsLayout::widgetEvent(e); }
inline void promoted_invalidate() { QGraphicsLayout::invalidate(); }
};

class PythonQtWrapper_QGraphicsLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLayout* new_QGraphicsLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsLayout(QGraphicsLayout* obj) { delete obj; } 
   void getContentsMargins(QGraphicsLayout* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void setContentsMargins(QGraphicsLayout* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void updateGeometry(QGraphicsLayout* theWrappedObject);
   void widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e);
   void activate(QGraphicsLayout* theWrappedObject);
   bool  isActivated(QGraphicsLayout* theWrappedObject) const;
   void invalidate(QGraphicsLayout* theWrappedObject);
};





class PythonQtShell_QGraphicsLayoutItem : public QGraphicsLayoutItem
{
public:
    PythonQtShell_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = 0, bool  isLayout = false):QGraphicsLayoutItem(parent, isLayout),_wrapper(NULL) {};

virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void updateGeometry();
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLayoutItem : public QGraphicsLayoutItem
{ public:
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsLayoutItem::setGeometry(rect); }
inline void promoted_updateGeometry() { QGraphicsLayoutItem::updateGeometry(); }
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom); }
};

class PythonQtWrapper_QGraphicsLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLayoutItem* new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = 0, bool  isLayout = false);
void delete_QGraphicsLayoutItem(QGraphicsLayoutItem* obj) { delete obj; } 
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent);
   qreal  maximumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   QRectF  geometry(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   QSizeF  preferredSize(QGraphicsLayoutItem* theWrappedObject) const;
   QRectF  contentsRect(QGraphicsLayoutItem* theWrappedObject) const;
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   qreal  minimumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   bool  isLayout(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  minimumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   void setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   qreal  preferredWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect);
   bool  ownedByLayout(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  minimumSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   QGraphicsItem*  graphicsItem(QGraphicsLayoutItem* theWrappedObject) const;
   void setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void updateGeometry(QGraphicsLayoutItem* theWrappedObject);
   QGraphicsLayoutItem*  parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const;
   void setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   qreal  maximumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType = QSizePolicy::DefaultType);
   void getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy);
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   qreal  preferredHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizePolicy  sizePolicy(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  maximumSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
};





class PythonQtShell_QGraphicsLineItem : public QGraphicsLineItem
{
public:
    PythonQtShell_QGraphicsLineItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsLineItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsLineItem(line, parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsLineItem(x1, y1, x2, y2, parent, scene),_wrapper(NULL) {};

virtual QPainterPath  opaqueArea() const;
virtual QPainterPath  shape() const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual bool  contains(const QPointF&  point) const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual QVariant  extension(const QVariant&  variant) const;
virtual int  type() const;
virtual QRectF  boundingRect() const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual void advance(int  phase);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLineItem : public QGraphicsLineItem
{ public:
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsLineItem::opaqueArea(); }
inline QPainterPath  promoted_shape() const { return QGraphicsLineItem::shape(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsLineItem::isObscuredBy(item); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsLineItem::contains(point); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsLineItem::paint(painter, option, widget); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsLineItem::extension(variant); }
inline int  promoted_type() const { return QGraphicsLineItem::type(); }
inline QRectF  promoted_boundingRect() const { return QGraphicsLineItem::boundingRect(); }
};

class PythonQtWrapper_QGraphicsLineItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsLineItem::Type};
public slots:
QGraphicsLineItem* new_QGraphicsLineItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsLineItem* new_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsLineItem* new_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsLineItem(QGraphicsLineItem* obj) { delete obj; } 
   QPainterPath  opaqueArea(QGraphicsLineItem* theWrappedObject) const;
   QPainterPath  shape(QGraphicsLineItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  contains(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const;
   QPen  pen(QGraphicsLineItem* theWrappedObject) const;
   void paint(QGraphicsLineItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QLineF  line(QGraphicsLineItem* theWrappedObject) const;
   QVariant  extension(QGraphicsLineItem* theWrappedObject, const QVariant&  variant) const;
   int  type(QGraphicsLineItem* theWrappedObject) const;
   void setPen(QGraphicsLineItem* theWrappedObject, const QPen&  pen);
   void setLine(QGraphicsLineItem* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setLine(QGraphicsLineItem* theWrappedObject, const QLineF&  line);
   QRectF  boundingRect(QGraphicsLineItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsLinearLayout : public QGraphicsLinearLayout
{
public:
    PythonQtShell_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsLinearLayout(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent = 0):QGraphicsLinearLayout(orientation, parent),_wrapper(NULL) {};

virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual int  count() const;
virtual void removeAt(int  index);
virtual void invalidate();
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLinearLayout : public QGraphicsLinearLayout
{ public:
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsLinearLayout::itemAt(index); }
inline int  promoted_count() const { return QGraphicsLinearLayout::count(); }
inline void promoted_removeAt(int  index) { QGraphicsLinearLayout::removeAt(index); }
inline void promoted_invalidate() { QGraphicsLinearLayout::invalidate(); }
};

class PythonQtWrapper_QGraphicsLinearLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLinearLayout* new_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent = 0);
QGraphicsLinearLayout* new_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsLinearLayout(QGraphicsLinearLayout* obj) { delete obj; } 
   void setStretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  stretch);
   void setAlignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   void setSpacing(QGraphicsLinearLayout* theWrappedObject, qreal  spacing);
   void setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect);
   void insertItem(QGraphicsLinearLayout* theWrappedObject, int  index, QGraphicsLayoutItem*  item);
   QGraphicsLayoutItem*  itemAt(QGraphicsLinearLayout* theWrappedObject, int  index) const;
   Qt::Alignment  alignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   qreal  itemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index) const;
   void addStretch(QGraphicsLinearLayout* theWrappedObject, int  stretch = 1);
   void insertStretch(QGraphicsLinearLayout* theWrappedObject, int  index, int  stretch = 1);
   qreal  spacing(QGraphicsLinearLayout* theWrappedObject) const;
   int  count(QGraphicsLinearLayout* theWrappedObject) const;
   void addItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item);
   void setItemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index, qreal  spacing);
   QSizeF  sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   Qt::Orientation  orientation(QGraphicsLinearLayout* theWrappedObject) const;
   void removeItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item);
   void removeAt(QGraphicsLinearLayout* theWrappedObject, int  index);
   int  stretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   void setOrientation(QGraphicsLinearLayout* theWrappedObject, Qt::Orientation  orientation);
   void dump(QGraphicsLinearLayout* theWrappedObject, int  indent = 0) const;
   void invalidate(QGraphicsLinearLayout* theWrappedObject);
};





class PythonQtShell_QGraphicsObject : public QGraphicsObject
{
public:
    PythonQtShell_QGraphicsObject(QGraphicsItem*  parent = 0):QGraphicsObject(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual bool  contains(const QPointF&  point) const;
virtual QRectF  boundingRect() const;
virtual void advance(int  phase);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual QVariant  extension(const QVariant&  variant) const;
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual bool  sceneEvent(QEvent*  event);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual int  type() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual QPainterPath  shape() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGraphicsObject : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsObject* new_QGraphicsObject(QGraphicsItem*  parent = 0);
void delete_QGraphicsObject(QGraphicsObject* obj) { delete obj; } 
    QString py_toString(QGraphicsObject*);
};





class PythonQtShell_QGraphicsOpacityEffect : public QGraphicsOpacityEffect
{
public:
    PythonQtShell_QGraphicsOpacityEffect(QObject*  parent = 0):QGraphicsOpacityEffect(parent),_wrapper(NULL) {};

virtual void draw(QPainter*  painter);
virtual QRectF  boundingRectFor(const QRectF&  sourceRect) const;
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsOpacityEffect : public QGraphicsOpacityEffect
{ public:
inline void promoted_draw(QPainter*  painter) { QGraphicsOpacityEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsOpacityEffect : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsOpacityEffect* new_QGraphicsOpacityEffect(QObject*  parent = 0);
void delete_QGraphicsOpacityEffect(QGraphicsOpacityEffect* obj) { delete obj; } 
   qreal  opacity(QGraphicsOpacityEffect* theWrappedObject) const;
   void draw(QGraphicsOpacityEffect* theWrappedObject, QPainter*  painter);
   QBrush  opacityMask(QGraphicsOpacityEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsPathItem : public QGraphicsPathItem
{
public:
    PythonQtShell_QGraphicsPathItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPathItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPathItem(path, parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPathItem : public QGraphicsPathItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPathItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsPathItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsPathItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPathItem::Type};
public slots:
QGraphicsPathItem* new_QGraphicsPathItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsPathItem* new_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsPathItem(QGraphicsPathItem* obj) { delete obj; } 
   QPainterPath  shape(QGraphicsPathItem* theWrappedObject) const;
   void paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   bool  contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const;
   bool  isObscuredBy(QGraphicsPathItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPainterPath  opaqueArea(QGraphicsPathItem* theWrappedObject) const;
   QPainterPath  path(QGraphicsPathItem* theWrappedObject) const;
   void setPath(QGraphicsPathItem* theWrappedObject, const QPainterPath&  path);
   int  type(QGraphicsPathItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsPathItem* theWrappedObject) const;
};


