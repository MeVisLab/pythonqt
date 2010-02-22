#include <PythonQt.h>
#include <QObject>
#include <QPair>
#include <QUrl>
#include <QVarLengthArray>
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
#include <qgraphicsgridlayout.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicslinearlayout.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsview.h>
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
#include <qmatrix.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
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



class PythonQtShell_QFileDialog : public QFileDialog
{
public:
    PythonQtShell_QFileDialog(QWidget*  parent, Qt::WindowFlags  f):QFileDialog(parent, f),_wrapper(NULL) {};
    PythonQtShell_QFileDialog(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString()):QFileDialog(parent, caption, directory, filter),_wrapper(NULL) {};

virtual void changeEvent(QEvent*  e);
virtual void accept();
virtual void done(int  result);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void reject();
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void languageChange();
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual bool  event(QEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFileDialog : public QFileDialog
{ public:
inline void promoted_changeEvent(QEvent*  e) { QFileDialog::changeEvent(e); }
inline void promoted_accept() { QFileDialog::accept(); }
inline void promoted_done(int  result) { QFileDialog::done(result); }
};

class PythonQtWrapper_QFileDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Option DialogLabel )
Q_FLAGS(Options )
enum Option{
  ShowDirsOnly = QFileDialog::ShowDirsOnly,   DontResolveSymlinks = QFileDialog::DontResolveSymlinks,   DontConfirmOverwrite = QFileDialog::DontConfirmOverwrite,   DontUseSheet = QFileDialog::DontUseSheet,   DontUseNativeDialog = QFileDialog::DontUseNativeDialog};
enum DialogLabel{
  LookIn = QFileDialog::LookIn,   FileName = QFileDialog::FileName,   FileType = QFileDialog::FileType,   Accept = QFileDialog::Accept,   Reject = QFileDialog::Reject};
Q_DECLARE_FLAGS(Options, Option)
public slots:
QFileDialog* new_QFileDialog(QWidget*  parent, Qt::WindowFlags  f);
QFileDialog* new_QFileDialog(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString());
void delete_QFileDialog(QFileDialog* obj) { delete obj; } 
   void setNameFilterDetailsVisible(QFileDialog* theWrappedObject, bool  enabled);
   void changeEvent(QFileDialog* theWrappedObject, QEvent*  e);
   void selectFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void setFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
   QString  static_QFileDialog_getExistingDirectory(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), QFileDialog::Options  options = QFileDialog::ShowDirsOnly);
   QByteArray  saveState(QFileDialog* theWrappedObject) const;
   void setFileMode(QFileDialog* theWrappedObject, QFileDialog::FileMode  mode);
   QStringList  static_QFileDialog_getOpenFileNames(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
   void accept(QFileDialog* theWrappedObject);
   void setHistory(QFileDialog* theWrappedObject, const QStringList&  paths);
   void setIconProvider(QFileDialog* theWrappedObject, QFileIconProvider*  provider);
   void setDefaultSuffix(QFileDialog* theWrappedObject, const QString&  suffix);
   bool  isReadOnly(QFileDialog* theWrappedObject) const;
   void setViewMode(QFileDialog* theWrappedObject, QFileDialog::ViewMode  mode);
   bool  isNameFilterDetailsVisible(QFileDialog* theWrappedObject) const;
   void setResolveSymlinks(QFileDialog* theWrappedObject, bool  enabled);
   void setAcceptMode(QFileDialog* theWrappedObject, QFileDialog::AcceptMode  mode);
   bool  restoreState(QFileDialog* theWrappedObject, const QByteArray&  state);
   QFileIconProvider*  iconProvider(QFileDialog* theWrappedObject) const;
   void selectFile(QFileDialog* theWrappedObject, const QString&  filename);
   bool  resolveSymlinks(QFileDialog* theWrappedObject) const;
   void selectNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
   QAbstractProxyModel*  proxyModel(QFileDialog* theWrappedObject) const;
   QFileDialog::FileMode  fileMode(QFileDialog* theWrappedObject) const;
   QString  static_QFileDialog_getSaveFileName(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
   void done(QFileDialog* theWrappedObject, int  result);
   QStringList  history(QFileDialog* theWrappedObject) const;
   void setConfirmOverwrite(QFileDialog* theWrappedObject, bool  enabled);
   QString  static_QFileDialog_getOpenFileName(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
   void setNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
   QList<QUrl >  sidebarUrls(QFileDialog* theWrappedObject) const;
   bool  confirmOverwrite(QFileDialog* theWrappedObject) const;
   QStringList  filters(QFileDialog* theWrappedObject) const;
   QDir  directory(QFileDialog* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QFileDialog* theWrappedObject) const;
   void setProxyModel(QFileDialog* theWrappedObject, QAbstractProxyModel*  model);
   QString  selectedFilter(QFileDialog* theWrappedObject) const;
   void setDirectory(QFileDialog* theWrappedObject, const QDir&  directory);
   void setDirectory(QFileDialog* theWrappedObject, const QString&  directory);
   QString  selectedNameFilter(QFileDialog* theWrappedObject) const;
   QDir::Filters  filter(QFileDialog* theWrappedObject) const;
   void setItemDelegate(QFileDialog* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setReadOnly(QFileDialog* theWrappedObject, bool  enabled);
   void setFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void setFilter(QFileDialog* theWrappedObject, QDir::Filters  filters);
   void setNameFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
   QString  defaultSuffix(QFileDialog* theWrappedObject) const;
   void setSidebarUrls(QFileDialog* theWrappedObject, const QList<QUrl >&  urls);
   QStringList  nameFilters(QFileDialog* theWrappedObject) const;
   void setLabelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label, const QString&  text);
   QFileDialog::ViewMode  viewMode(QFileDialog* theWrappedObject) const;
   QString  labelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label) const;
   QFileDialog::AcceptMode  acceptMode(QFileDialog* theWrappedObject) const;
   QStringList  selectedFiles(QFileDialog* theWrappedObject) const;
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
void delete_QFileOpenEvent(QFileOpenEvent* obj) { delete obj; } 
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
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual QSize  sizeHint() const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

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
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void focusOutEvent(QFocusEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void hidePopup();
virtual void changeEvent(QEvent*  e);
virtual void showEvent(QShowEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void focusInEvent(QFocusEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void wheelEvent(QWheelEvent*  e);
virtual void paintEvent(QPaintEvent*  e);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void hideEvent(QHideEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void showPopup();
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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
   bool  event(QFontComboBox* theWrappedObject, QEvent*  e);
   QFont  currentFont(QFontComboBox* theWrappedObject) const;
   void setFontFilters(QFontComboBox* theWrappedObject, QFontComboBox::FontFilters  filters);
   QSize  sizeHint(QFontComboBox* theWrappedObject) const;
   QFontDatabase::WritingSystem  writingSystem(QFontComboBox* theWrappedObject) const;
   QFontComboBox::FontFilters  fontFilters(QFontComboBox* theWrappedObject) const;
   void setWritingSystem(QFontComboBox* theWrappedObject, QFontDatabase::WritingSystem  arg__1);
};





class PythonQtPublicPromoter_QFontDialog : public QFontDialog
{ public:
inline void promoted_changeEvent(QEvent*  e) { QFontDialog::changeEvent(e); }
};

class PythonQtWrapper_QFontDialog : public QObject
{ Q_OBJECT
public:
public slots:
   void changeEvent(QFontDialog* theWrappedObject, QEvent*  e);
   QFont  static_QFontDialog_getFont(bool*  ok, const QFont&  def, QWidget*  parent, const QString&  caption);
   QFont  static_QFontDialog_getFont(bool*  ok, QWidget*  parent = 0);
   QFont  static_QFontDialog_getFont(bool*  ok, const QFont&  def, QWidget*  parent = 0);
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
   QSize  size(QFontMetrics* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = 0) const;
   QString  elidedText(QFontMetrics* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, int  width, int  flags = 0) const;
   int  averageCharWidth(QFontMetrics* theWrappedObject) const;
   int  strikeOutPos(QFontMetrics* theWrappedObject) const;
   QRect  tightBoundingRect(QFontMetrics* theWrappedObject, const QString&  text) const;
   int  lineSpacing(QFontMetrics* theWrappedObject) const;
   int  minLeftBearing(QFontMetrics* theWrappedObject) const;
   int  height(QFontMetrics* theWrappedObject) const;
   int  descent(QFontMetrics* theWrappedObject) const;
   int  minRightBearing(QFontMetrics* theWrappedObject) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, const QString&  text) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, const QRect&  r, int  flags, const QString&  text, int  tabstops = 0, int*  tabarray = 0) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, int  tabstops = 0, int*  tabarray = 0) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, QChar  arg__1) const;
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
   qreal  overlinePos(QFontMetricsF* theWrappedObject) const;
   qreal  rightBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  minLeftBearing(QFontMetricsF* theWrappedObject) const;
   qreal  lineWidth(QFontMetricsF* theWrappedObject) const;
   qreal  maxWidth(QFontMetricsF* theWrappedObject) const;
   qreal  xHeight(QFontMetricsF* theWrappedObject) const;
   qreal  ascent(QFontMetricsF* theWrappedObject) const;
   qreal  width(QFontMetricsF* theWrappedObject, const QString&  string) const;
   qreal  width(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  leftBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  averageCharWidth(QFontMetricsF* theWrappedObject) const;
   qreal  strikeOutPos(QFontMetricsF* theWrappedObject) const;
   QString  elidedText(QFontMetricsF* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, qreal  width, int  flags = 0) const;
   QSizeF  size(QFontMetricsF* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = 0) const;
   qreal  lineSpacing(QFontMetricsF* theWrappedObject) const;
   QRectF  tightBoundingRect(QFontMetricsF* theWrappedObject, const QString&  text) const;
   qreal  descent(QFontMetricsF* theWrappedObject) const;
   qreal  height(QFontMetricsF* theWrappedObject) const;
   qreal  minRightBearing(QFontMetricsF* theWrappedObject) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QRectF&  r, int  flags, const QString&  string, int  tabstops = 0, int*  tabarray = 0) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QString&  string) const;
};





class PythonQtShell_QFormLayout : public QFormLayout
{
public:
    PythonQtShell_QFormLayout(QWidget*  parent = 0):QFormLayout(parent),_wrapper(NULL) {};

virtual void invalidate();
virtual Qt::Orientations  expandingDirections() const;
virtual QSize  minimumSize() const;
virtual QLayoutItem*  takeAt(int  index);
virtual void setGeometry(const QRect&  rect);
virtual QLayoutItem*  itemAt(int  index) const;
virtual void addItem(QLayoutItem*  item);
virtual int  count() const;
virtual bool  isEmpty() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayout*  layout();
virtual void childEvent(QChildEvent*  e);
virtual QRect  geometry() const;
virtual QSize  maximumSize() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFormLayout : public QFormLayout
{ public:
inline void promoted_invalidate() { QFormLayout::invalidate(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QFormLayout::expandingDirections(); }
inline QSize  promoted_minimumSize() const { return QFormLayout::minimumSize(); }
inline QLayoutItem*  promoted_takeAt(int  index) { return QFormLayout::takeAt(index); }
inline void promoted_setGeometry(const QRect&  rect) { QFormLayout::setGeometry(rect); }
inline QLayoutItem*  promoted_itemAt(int  index) const { return QFormLayout::itemAt(index); }
inline void promoted_addItem(QLayoutItem*  item) { QFormLayout::addItem(item); }
inline int  promoted_count() const { return QFormLayout::count(); }
};

class PythonQtWrapper_QFormLayout : public QObject
{ Q_OBJECT
public:
public slots:
QFormLayout* new_QFormLayout(QWidget*  parent = 0);
void delete_QFormLayout(QFormLayout* obj) { delete obj; } 
   void invalidate(QFormLayout* theWrappedObject);
   QFormLayout::FieldGrowthPolicy  fieldGrowthPolicy(QFormLayout* theWrappedObject) const;
   void setHorizontalSpacing(QFormLayout* theWrappedObject, int  spacing);
   void addRow(QFormLayout* theWrappedObject, const QString&  labelText, QLayout*  field);
   void setFieldGrowthPolicy(QFormLayout* theWrappedObject, QFormLayout::FieldGrowthPolicy  policy);
   bool  hasHeightForWidth(QFormLayout* theWrappedObject) const;
   void getItemPosition(QFormLayout* theWrappedObject, int  index, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   int  verticalSpacing(QFormLayout* theWrappedObject) const;
   void getWidgetPosition(QFormLayout* theWrappedObject, QWidget*  widget, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   int  heightForWidth(QFormLayout* theWrappedObject, int  width) const;
   QWidget*  labelForField(QFormLayout* theWrappedObject, QWidget*  field) const;
   Qt::Alignment  formAlignment(QFormLayout* theWrappedObject) const;
   void addRow(QFormLayout* theWrappedObject, const QString&  labelText, QWidget*  field);
   void addRow(QFormLayout* theWrappedObject, QLayout*  layout);
   void getLayoutPosition(QFormLayout* theWrappedObject, QLayout*  layout, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   int  horizontalSpacing(QFormLayout* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QFormLayout* theWrappedObject) const;
   QSize  sizeHint(QFormLayout* theWrappedObject) const;
   void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  widget);
   void insertRow(QFormLayout* theWrappedObject, int  row, QLayout*  layout);
   QSize  minimumSize(QFormLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QFormLayout* theWrappedObject, int  index);
   QFormLayout::RowWrapPolicy  rowWrapPolicy(QFormLayout* theWrappedObject) const;
   void addRow(QFormLayout* theWrappedObject, QWidget*  widget);
   Qt::Alignment  labelAlignment(QFormLayout* theWrappedObject) const;
   void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QWidget*  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QLayout*  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, QWidget*  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, QWidget*  label, QLayout*  field);
   int  spacing(QFormLayout* theWrappedObject) const;
   void setLayout(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayout*  layout);
   void setGeometry(QFormLayout* theWrappedObject, const QRect&  rect);
   QLayoutItem*  itemAt(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role) const;
   void setWidget(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QWidget*  widget);
   int  rowCount(QFormLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QFormLayout* theWrappedObject, int  index) const;
   void setLabelAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
   void setVerticalSpacing(QFormLayout* theWrappedObject, int  spacing);
   void setRowWrapPolicy(QFormLayout* theWrappedObject, QFormLayout::RowWrapPolicy  policy);
   void addRow(QFormLayout* theWrappedObject, QWidget*  label, QWidget*  field);
   QWidget*  labelForField(QFormLayout* theWrappedObject, QLayout*  field) const;
   void setItem(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, QLayoutItem*  item);
   void addRow(QFormLayout* theWrappedObject, QWidget*  label, QLayout*  field);
   void addItem(QFormLayout* theWrappedObject, QLayoutItem*  item);
   int  count(QFormLayout* theWrappedObject) const;
   void setFormAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
   void setSpacing(QFormLayout* theWrappedObject, int  arg__1);
};





class PythonQtShell_QFrame : public QFrame
{
public:
    PythonQtShell_QFrame(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QFrame(parent, f),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void changeEvent(QEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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
   QGradient::Spread  spread(QGradient* theWrappedObject) const;
   void setColorAt(QGradient* theWrappedObject, qreal  pos, const QColor&  color);
   void setCoordinateMode(QGradient* theWrappedObject, QGradient::CoordinateMode  mode);
   QGradient::CoordinateMode  coordinateMode(QGradient* theWrappedObject) const;
   QGradient::Type  type(QGradient* theWrappedObject) const;
   QVector<QPair<qreal , QColor >  >  stops(QGradient* theWrappedObject) const;
   bool  operator_equal(QGradient* theWrappedObject, const QGradient&  gradient) const;
   void setSpread(QGradient* theWrappedObject, QGradient::Spread  spread);
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
   void setRect(QGraphicsEllipseItem* theWrappedObject, const QRectF&  rect);
   int  type(QGraphicsEllipseItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsEllipseItem* theWrappedObject) const;
   QRectF  rect(QGraphicsEllipseItem* theWrappedObject) const;
   void paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QPainterPath  shape(QGraphicsEllipseItem* theWrappedObject) const;
   bool  contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const;
   bool  isObscuredBy(QGraphicsEllipseItem* theWrappedObject, const QGraphicsItem*  item) const;
   int  spanAngle(QGraphicsEllipseItem* theWrappedObject) const;
   int  startAngle(QGraphicsEllipseItem* theWrappedObject) const;
   void setSpanAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   void setStartAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   void setRect(QGraphicsEllipseItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
};





class PythonQtShell_QGraphicsGridLayout : public QGraphicsGridLayout
{
public:
    PythonQtShell_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsGridLayout(parent),_wrapper(NULL) {};

virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void widgetEvent(QEvent*  e);
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual int  count() const;
virtual void invalidate();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsGridLayout : public QGraphicsGridLayout
{ public:
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsGridLayout::itemAt(index); }
inline void promoted_removeAt(int  index) { QGraphicsGridLayout::removeAt(index); }
inline int  promoted_count() const { return QGraphicsGridLayout::count(); }
inline void promoted_invalidate() { QGraphicsGridLayout::invalidate(); }
};

class PythonQtWrapper_QGraphicsGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsGridLayout* new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsGridLayout(QGraphicsGridLayout* obj) { delete obj; } 
   void setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment);
   void setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   Qt::Alignment  rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment);
   void setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   qreal  rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const;
   QSizeF  sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing);
   qreal  rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect);
   qreal  horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const;
   int  rowCount(QGraphicsGridLayout* theWrappedObject) const;
   void setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   int  rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const;
   Qt::Alignment  alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  index) const;
   qreal  columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const;
   void setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   void removeAt(QGraphicsGridLayout* theWrappedObject, int  index);
   int  count(QGraphicsGridLayout* theWrappedObject) const;
   void setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   qreal  columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing);
   qreal  columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   int  columnCount(QGraphicsGridLayout* theWrappedObject) const;
   void setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch);
   void setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   qreal  verticalSpacing(QGraphicsGridLayout* theWrappedObject) const;
   void addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment = 0);
   qreal  rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, Qt::Alignment  alignment = 0);
   int  columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const;
   Qt::Alignment  columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch);
   void setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   void setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   qreal  columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   qreal  rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   void invalidate(QGraphicsGridLayout* theWrappedObject);
};





class PythonQtShell_QGraphicsItem : public QGraphicsItem
{
public:
    PythonQtShell_QGraphicsItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsItem(parent, scene),_wrapper(NULL) {};

virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual int  type() const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual void advance(int  phase);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void focusOutEvent(QFocusEvent*  event);
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual QRectF  boundingRect() const;
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual QPainterPath  shape() const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual bool  contains(const QPointF&  point) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItem : public QGraphicsItem
{ public:
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsItem::inputMethodEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsItem::wheelEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsItem::keyPressEvent(event); }
inline int  promoted_type() const { return QGraphicsItem::type(); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsItem::focusInEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsItem::keyReleaseEvent(event); }
inline void promoted_advance(int  phase) { QGraphicsItem::advance(phase); }
inline bool  promoted_sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) { return QGraphicsItem::sceneEventFilter(watched, event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseDoubleClickEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragMoveEvent(event); }
inline bool  promoted_sceneEvent(QEvent*  event) { return QGraphicsItem::sceneEvent(event); }
inline bool  promoted_collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithItem(other, mode); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragEnterEvent(event); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsItem::opaqueArea(); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsItem::focusOutEvent(event); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsItem::itemChange(change, value); }
inline bool  promoted_collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithPath(path, mode); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseMoveEvent(event); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsItem::extension(variant); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseReleaseEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsItem::inputMethodQuery(query); }
inline QPainterPath  promoted_shape() const { return QGraphicsItem::shape(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItem::isObscuredBy(item); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragLeaveEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverEnterEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverMoveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dropEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mousePressEvent(event); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsItem::contextMenuEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverLeaveEvent(event); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsItem::contains(point); }
};

class PythonQtWrapper_QGraphicsItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CacheMode enum_1 GraphicsItemFlag GraphicsItemChange )
Q_FLAGS(GraphicsItemFlags )
enum CacheMode{
  NoCache = QGraphicsItem::NoCache,   ItemCoordinateCache = QGraphicsItem::ItemCoordinateCache,   DeviceCoordinateCache = QGraphicsItem::DeviceCoordinateCache};
enum enum_1{
  Type = QGraphicsItem::Type,   UserType = QGraphicsItem::UserType};
enum GraphicsItemFlag{
  ItemIsMovable = QGraphicsItem::ItemIsMovable,   ItemIsSelectable = QGraphicsItem::ItemIsSelectable,   ItemIsFocusable = QGraphicsItem::ItemIsFocusable,   ItemClipsToShape = QGraphicsItem::ItemClipsToShape,   ItemClipsChildrenToShape = QGraphicsItem::ItemClipsChildrenToShape,   ItemIgnoresTransformations = QGraphicsItem::ItemIgnoresTransformations};
enum GraphicsItemChange{
  ItemPositionChange = QGraphicsItem::ItemPositionChange,   ItemMatrixChange = QGraphicsItem::ItemMatrixChange,   ItemVisibleChange = QGraphicsItem::ItemVisibleChange,   ItemEnabledChange = QGraphicsItem::ItemEnabledChange,   ItemSelectedChange = QGraphicsItem::ItemSelectedChange,   ItemParentChange = QGraphicsItem::ItemParentChange,   ItemChildAddedChange = QGraphicsItem::ItemChildAddedChange,   ItemChildRemovedChange = QGraphicsItem::ItemChildRemovedChange,   ItemTransformChange = QGraphicsItem::ItemTransformChange,   ItemPositionHasChanged = QGraphicsItem::ItemPositionHasChanged,   ItemTransformHasChanged = QGraphicsItem::ItemTransformHasChanged,   ItemSceneChange = QGraphicsItem::ItemSceneChange,   ItemVisibleHasChanged = QGraphicsItem::ItemVisibleHasChanged,   ItemEnabledHasChanged = QGraphicsItem::ItemEnabledHasChanged,   ItemSelectedHasChanged = QGraphicsItem::ItemSelectedHasChanged,   ItemParentHasChanged = QGraphicsItem::ItemParentHasChanged,   ItemSceneHasChanged = QGraphicsItem::ItemSceneHasChanged,   ItemCursorChange = QGraphicsItem::ItemCursorChange,   ItemCursorHasChanged = QGraphicsItem::ItemCursorHasChanged,   ItemToolTipChange = QGraphicsItem::ItemToolTipChange,   ItemToolTipHasChanged = QGraphicsItem::ItemToolTipHasChanged,   ItemFlagsChange = QGraphicsItem::ItemFlagsChange,   ItemFlagsHaveChanged = QGraphicsItem::ItemFlagsHaveChanged,   ItemZValueChange = QGraphicsItem::ItemZValueChange,   ItemZValueHasChanged = QGraphicsItem::ItemZValueHasChanged};
Q_DECLARE_FLAGS(GraphicsItemFlags, GraphicsItemFlag)
public slots:
QGraphicsItem* new_QGraphicsItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsItem(QGraphicsItem* obj) { delete obj; } 
bool hasOwner(QGraphicsItem* theWrappedObject) { return theWrappedObject->scene()!=NULL || theWrappedObject->parentItem()!=NULL; }
   void setAcceptedMouseButtons(QGraphicsItem* theWrappedObject, Qt::MouseButtons  buttons);
   void hide(QGraphicsItem* theWrappedObject);
   void installSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   QGraphicsWidget*  parentWidget(QGraphicsItem* theWrappedObject) const;
   void inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event);
   void wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   void keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   int  type(QGraphicsItem* theWrappedObject) const;
   bool  isAncestorOf(QGraphicsItem* theWrappedObject, const QGraphicsItem*  child) const;
   QPainterPath  mapFromScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   void focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   void keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   QGraphicsItemGroup*  group(QGraphicsItem* theWrappedObject) const;
   qreal  boundingRegionGranularity(QGraphicsItem* theWrappedObject) const;
   void rotate(QGraphicsItem* theWrappedObject, qreal  angle);
   void setFlag(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled = true);
   void advance(QGraphicsItem* theWrappedObject, int  phase);
   void setAcceptsHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   bool  sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event);
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   qreal  y(QGraphicsItem* theWrappedObject) const;
   void mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   qreal  x(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  topLevelItem(QGraphicsItem* theWrappedObject) const;
   void setZValue(QGraphicsItem* theWrappedObject, qreal  z);
   void dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QVariant  data(QGraphicsItem* theWrappedObject, int  key) const;
   void removeSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   bool  sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event);
   bool  collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setPos(QGraphicsItem* theWrappedObject, qreal  x, qreal  y);
   void setPos(QGraphicsItem* theWrappedObject, const QPointF&  pos);
   QGraphicsItem*  commonAncestorItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other) const;
   void scroll(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect = QRectF());
   QPainterPath  mapFromParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  pos(QGraphicsItem* theWrappedObject) const;
   QTransform  transform(QGraphicsItem* theWrappedObject) const;
   void ungrabMouse(QGraphicsItem* theWrappedObject);
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsItem* theWrappedObject) const;
   void setSelected(QGraphicsItem* theWrappedObject, bool  selected);
   qreal  zValue(QGraphicsItem* theWrappedObject) const;
   void ungrabKeyboard(QGraphicsItem* theWrappedObject);
   void dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QGraphicsScene*  scene(QGraphicsItem* theWrappedObject) const;
   bool  hasFocus(QGraphicsItem* theWrappedObject) const;
   QString  toolTip(QGraphicsItem* theWrappedObject) const;
   bool  isEnabled(QGraphicsItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsItem* theWrappedObject) const;
   void setFlags(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   void translate(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
   void grabKeyboard(QGraphicsItem* theWrappedObject);
   void moveBy(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
   QTransform  sceneTransform(QGraphicsItem* theWrappedObject) const;
   void ensureVisible(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF(), int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   void shear(QGraphicsItem* theWrappedObject, qreal  sh, qreal  sv);
   QGraphicsItem::CacheMode  cacheMode(QGraphicsItem* theWrappedObject) const;
   void setFocus(QGraphicsItem* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   QRegion  boundingRegion(QGraphicsItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   bool  isVisible(QGraphicsItem* theWrappedObject) const;
   void scale(QGraphicsItem* theWrappedObject, qreal  sx, qreal  sy);
   void setTransform(QGraphicsItem* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void unsetCursor(QGraphicsItem* theWrappedObject);
   bool  handlesChildEvents(QGraphicsItem* theWrappedObject) const;
   QVariant  itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   bool  collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QRectF  childrenBoundingRect(QGraphicsItem* theWrappedObject) const;
   void setCursor(QGraphicsItem* theWrappedObject, const QCursor&  cursor);
   QRectF  sceneBoundingRect(QGraphicsItem* theWrappedObject) const;
   void setVisible(QGraphicsItem* theWrappedObject, bool  visible);
   QGraphicsWidget*  topLevelWidget(QGraphicsItem* theWrappedObject) const;
   QList<QGraphicsItem* >  collidingItems(QGraphicsItem* theWrappedObject, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setAcceptHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QTransform  deviceTransform(QGraphicsItem* theWrappedObject, const QTransform&  viewportTransform) const;
   void setEnabled(QGraphicsItem* theWrappedObject, bool  enabled);
   QGraphicsItem*  parentItem(QGraphicsItem* theWrappedObject) const;
   void resetTransform(QGraphicsItem* theWrappedObject);
   void setParentItem(QGraphicsItem* theWrappedObject, QGraphicsItem*  parent);
   QVariant  extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const;
   void setBoundingRegionGranularity(QGraphicsItem* theWrappedObject, qreal  granularity);
   QPainterPath  mapToParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPainterPath  mapToScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPointF  scenePos(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   bool  acceptHoverEvents(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   void mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QList<QGraphicsItem* >  childItems(QGraphicsItem* theWrappedObject) const;
   bool  isUnderMouse(QGraphicsItem* theWrappedObject) const;
   void setAcceptDrops(QGraphicsItem* theWrappedObject, bool  on);
   void grabMouse(QGraphicsItem* theWrappedObject);
   void setToolTip(QGraphicsItem* theWrappedObject, const QString&  toolTip);
   void setData(QGraphicsItem* theWrappedObject, int  key, const QVariant&  value);
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QCursor  cursor(QGraphicsItem* theWrappedObject) const;
   QVariant  inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   QPainterPath  shape(QGraphicsItem* theWrappedObject) const;
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   bool  hasCursor(QGraphicsItem* theWrappedObject) const;
   QPainterPath  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   bool  isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const;
   void dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   bool  acceptsHoverEvents(QGraphicsItem* theWrappedObject) const;
   bool  acceptDrops(QGraphicsItem* theWrappedObject) const;
   bool  isVisibleTo(QGraphicsItem* theWrappedObject, const QGraphicsItem*  parent) const;
   void hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void setHandlesChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   void setCacheMode(QGraphicsItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize = QSize());
   void update(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   void update(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF());
   bool  isObscured(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   bool  isObscured(QGraphicsItem* theWrappedObject) const;
   bool  isObscured(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   void setGroup(QGraphicsItem* theWrappedObject, QGraphicsItemGroup*  group);
   void show(QGraphicsItem* theWrappedObject);
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPainterPath  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   void clearFocus(QGraphicsItem* theWrappedObject);
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   void hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   bool  contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  isSelected(QGraphicsItem* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsItem* theWrappedObject) const;
   bool  isWidget(QGraphicsItem* theWrappedObject) const;
   QGraphicsWidget*  window(QGraphicsItem* theWrappedObject) const;
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   bool  isWindow(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
    QString toString(QGraphicsItem*);
};





class PythonQtShell_QGraphicsItemAnimation : public QGraphicsItemAnimation
{
public:
    PythonQtShell_QGraphicsItemAnimation(QObject*  parent = 0):QGraphicsItemAnimation(parent),_wrapper(NULL) {};

virtual void beforeAnimationStep(qreal  step);
virtual void afterAnimationStep(qreal  step);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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
   void setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy);
   QGraphicsItem*  item(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  translationList(QGraphicsItemAnimation* theWrappedObject) const;
   void setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item);
   qreal  verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  scaleList(QGraphicsItemAnimation* theWrappedObject) const;
   QList<QPair<qreal , QPointF >  >  posList(QGraphicsItemAnimation* theWrappedObject) const;
   QPointF  posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QMatrix  matrixAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   void beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   QTimeLine*  timeLine(QGraphicsItemAnimation* theWrappedObject) const;
   void setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy);
   void setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine);
   void setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv);
   void setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle);
   qreal  yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   void afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   qreal  horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , qreal >  >  rotationList(QGraphicsItemAnimation* theWrappedObject) const;
   QList<QPair<qreal , QPointF >  >  shearList(QGraphicsItemAnimation* theWrappedObject) const;
   void setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos);
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
virtual bool  sceneEvent(QEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void advance(int  phase);
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual void focusOutEvent(QFocusEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;

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
virtual void invalidate();
virtual void removeAt(int  index);
virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void widgetEvent(QEvent*  e);
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const;
virtual void updateGeometry();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLayout : public QGraphicsLayout
{ public:
inline void promoted_invalidate() { QGraphicsLayout::invalidate(); }
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayout::getContentsMargins(left, top, right, bottom); }
inline void promoted_widgetEvent(QEvent*  e) { QGraphicsLayout::widgetEvent(e); }
};

class PythonQtWrapper_QGraphicsLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLayout* new_QGraphicsLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsLayout(QGraphicsLayout* obj) { delete obj; } 
   void activate(QGraphicsLayout* theWrappedObject);
   void setContentsMargins(QGraphicsLayout* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void invalidate(QGraphicsLayout* theWrappedObject);
   bool  isActivated(QGraphicsLayout* theWrappedObject) const;
   void getContentsMargins(QGraphicsLayout* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e);
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
   qreal  preferredHeight(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  maximumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent);
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   QSizePolicy  sizePolicy(QGraphicsLayoutItem* theWrappedObject) const;
   QRectF  geometry(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  maximumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  preferredSize(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   QRectF  contentsRect(QGraphicsLayoutItem* theWrappedObject) const;
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy);
   void setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   bool  isLayout(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  minimumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  minimumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   void setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect);
   void setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   QSizeF  minimumSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void updateGeometry(QGraphicsLayoutItem* theWrappedObject);
   QGraphicsLayoutItem*  parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  preferredWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType = QSizePolicy::DefaultType);
   void getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   QSizeF  maximumSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
};





class PythonQtShell_QGraphicsLineItem : public QGraphicsLineItem
{
public:
    PythonQtShell_QGraphicsLineItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsLineItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsLineItem(line, parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsLineItem(x1, y1, x2, y2, parent, scene),_wrapper(NULL) {};

virtual QPainterPath  shape() const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual bool  contains(const QPointF&  point) const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual QVariant  extension(const QVariant&  variant) const;
virtual QPainterPath  opaqueArea() const;
virtual int  type() const;
virtual QRectF  boundingRect() const;
virtual void advance(int  phase);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLineItem : public QGraphicsLineItem
{ public:
inline QPainterPath  promoted_shape() const { return QGraphicsLineItem::shape(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsLineItem::isObscuredBy(item); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsLineItem::contains(point); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsLineItem::paint(painter, option, widget); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsLineItem::extension(variant); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsLineItem::opaqueArea(); }
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
   QPainterPath  shape(QGraphicsLineItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  contains(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const;
   QPen  pen(QGraphicsLineItem* theWrappedObject) const;
   void paint(QGraphicsLineItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QLineF  line(QGraphicsLineItem* theWrappedObject) const;
   QVariant  extension(QGraphicsLineItem* theWrappedObject, const QVariant&  variant) const;
   QPainterPath  opaqueArea(QGraphicsLineItem* theWrappedObject) const;
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

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void invalidate();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLinearLayout : public QGraphicsLinearLayout
{ public:
inline int  promoted_count() const { return QGraphicsLinearLayout::count(); }
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsLinearLayout::itemAt(index); }
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
   int  count(QGraphicsLinearLayout* theWrappedObject) const;
   void setStretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  stretch);
   void setAlignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   void setSpacing(QGraphicsLinearLayout* theWrappedObject, qreal  spacing);
   void setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect);
   void insertItem(QGraphicsLinearLayout* theWrappedObject, int  index, QGraphicsLayoutItem*  item);
   Qt::Alignment  alignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsLinearLayout* theWrappedObject, int  index) const;
   qreal  itemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index) const;
   void addStretch(QGraphicsLinearLayout* theWrappedObject, int  stretch = 1);
   void insertStretch(QGraphicsLinearLayout* theWrappedObject, int  index, int  stretch = 1);
   qreal  spacing(QGraphicsLinearLayout* theWrappedObject) const;
   Qt::Orientation  orientation(QGraphicsLinearLayout* theWrappedObject) const;
   void addItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item);
   void setItemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index, qreal  spacing);
   QSizeF  sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void removeItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item);
   void removeAt(QGraphicsLinearLayout* theWrappedObject, int  index);
   void setOrientation(QGraphicsLinearLayout* theWrappedObject, Qt::Orientation  orientation);
   int  stretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   void invalidate(QGraphicsLinearLayout* theWrappedObject);
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
   bool  contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const;
   void paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   bool  isObscuredBy(QGraphicsPathItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPainterPath  opaqueArea(QGraphicsPathItem* theWrappedObject) const;
   QPainterPath  path(QGraphicsPathItem* theWrappedObject) const;
   void setPath(QGraphicsPathItem* theWrappedObject, const QPainterPath&  path);
   int  type(QGraphicsPathItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsPathItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsPixmapItem : public QGraphicsPixmapItem
{
public:
    PythonQtShell_QGraphicsPixmapItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPixmapItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPixmapItem(pixmap, parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  shape() const;
virtual bool  contains(const QPointF&  point) const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual QVariant  extension(const QVariant&  variant) const;
virtual int  type() const;
virtual QPainterPath  opaqueArea() const;
virtual QRectF  boundingRect() const;
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual void advance(int  phase);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual bool  sceneEvent(QEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPixmapItem : public QGraphicsPixmapItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPixmapItem::isObscuredBy(item); }
inline QPainterPath  promoted_shape() const { return QGraphicsPixmapItem::shape(); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsPixmapItem::contains(point); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsPixmapItem::paint(painter, option, widget); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsPixmapItem::extension(variant); }
inline int  promoted_type() const { return QGraphicsPixmapItem::type(); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsPixmapItem::opaqueArea(); }
inline QRectF  promoted_boundingRect() const { return QGraphicsPixmapItem::boundingRect(); }
};

class PythonQtWrapper_QGraphicsPixmapItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShapeMode enum_1 )
enum ShapeMode{
  MaskShape = QGraphicsPixmapItem::MaskShape,   BoundingRectShape = QGraphicsPixmapItem::BoundingRectShape,   HeuristicMaskShape = QGraphicsPixmapItem::HeuristicMaskShape};
enum enum_1{
  Type = QGraphicsPixmapItem::Type};
public slots:
QGraphicsPixmapItem* new_QGraphicsPixmapItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsPixmapItem* new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsPixmapItem(QGraphicsPixmapItem* obj) { delete obj; } 
   bool  isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const;
   void setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset);
   void setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode);
   QPainterPath  shape(QGraphicsPixmapItem* theWrappedObject) const;
   bool  contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const;
   Qt::TransformationMode  transformationMode(QGraphicsPixmapItem* theWrappedObject) const;
   void paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap);
   QGraphicsPixmapItem::ShapeMode  shapeMode(QGraphicsPixmapItem* theWrappedObject) const;
   QVariant  extension(QGraphicsPixmapItem* theWrappedObject, const QVariant&  variant) const;
   int  type(QGraphicsPixmapItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsPixmapItem* theWrappedObject) const;
   QPixmap  pixmap(QGraphicsPixmapItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsPixmapItem* theWrappedObject) const;
   QPointF  offset(QGraphicsPixmapItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsPolygonItem : public QGraphicsPolygonItem
{
public:
    PythonQtShell_QGraphicsPolygonItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPolygonItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPolygonItem(polygon, parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPolygonItem : public QGraphicsPolygonItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPolygonItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsPolygonItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsPolygonItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPolygonItem::Type};
public slots:
QGraphicsPolygonItem* new_QGraphicsPolygonItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsPolygonItem* new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsPolygonItem(QGraphicsPolygonItem* obj) { delete obj; } 
   Qt::FillRule  fillRule(QGraphicsPolygonItem* theWrappedObject) const;
   void setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon);
   QPainterPath  shape(QGraphicsPolygonItem* theWrappedObject) const;
   bool  contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  polygon(QGraphicsPolygonItem* theWrappedObject) const;
   void paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   void setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule);
   bool  isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const;
   int  type(QGraphicsPolygonItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsPolygonItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsPolygonItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsProxyWidget : public QGraphicsProxyWidget
{
public:
    PythonQtShell_QGraphicsProxyWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0):QGraphicsProxyWidget(parent, wFlags),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void setGeometry(const QRectF&  rect);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void hideEvent(QHideEvent*  event);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual int  type() const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void grabKeyboardEvent(QEvent*  event);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  windowFrameEvent(QEvent*  e);
virtual void changeEvent(QEvent*  event);
virtual void polishEvent();
virtual void initStyleOption(QStyleOption*  option) const;
virtual void closeEvent(QCloseEvent*  event);
virtual QRectF  boundingRect() const;
virtual QPainterPath  shape() const;
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void updateGeometry();
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsProxyWidget : public QGraphicsProxyWidget
{ public:
inline bool  promoted_event(QEvent*  event) { return QGraphicsProxyWidget::event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsProxyWidget::focusInEvent(event); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsProxyWidget::setGeometry(rect); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::ungrabMouseEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverMoveEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsProxyWidget::focusOutEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsProxyWidget::showEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsProxyWidget::focusNextPrevChild(next); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsProxyWidget::sizeHint(which, constraint); }
inline void promoted_hideEvent(QHideEvent*  event) { QGraphicsProxyWidget::hideEvent(event); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsProxyWidget::paint(painter, option, widget); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QGraphicsProxyWidget::eventFilter(object, event); }
inline void promoted_grabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::grabMouseEvent(event); }
inline int  promoted_type() const { return QGraphicsProxyWidget::type(); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsProxyWidget::itemChange(change, value); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsProxyWidget::resizeEvent(event); }
};

class PythonQtWrapper_QGraphicsProxyWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsProxyWidget::Type};
public slots:
QGraphicsProxyWidget* new_QGraphicsProxyWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0);
void delete_QGraphicsProxyWidget(QGraphicsProxyWidget* obj) { delete obj; } 
   bool  event(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
   void focusInEvent(QGraphicsProxyWidget* theWrappedObject, QFocusEvent*  event);
   void setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect);
   void ungrabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
   void hoverLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void hoverMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   QRectF  subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const;
   QWidget*  widget(QGraphicsProxyWidget* theWrappedObject) const;
   void focusOutEvent(QGraphicsProxyWidget* theWrappedObject, QFocusEvent*  event);
   void showEvent(QGraphicsProxyWidget* theWrappedObject, QShowEvent*  event);
   bool  focusNextPrevChild(QGraphicsProxyWidget* theWrappedObject, bool  next);
   QSizeF  sizeHint(QGraphicsProxyWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void hideEvent(QGraphicsProxyWidget* theWrappedObject, QHideEvent*  event);
   void paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   bool  eventFilter(QGraphicsProxyWidget* theWrappedObject, QObject*  object, QEvent*  event);
   void grabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
   int  type(QGraphicsProxyWidget* theWrappedObject) const;
   QVariant  itemChange(QGraphicsProxyWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   void resizeEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
   void setWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  widget);
};





class PythonQtShell_QGraphicsRectItem : public QGraphicsRectItem
{
public:
    PythonQtShell_QGraphicsRectItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsRectItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsRectItem(rect, parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsRectItem(x, y, w, h, parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsRectItem : public QGraphicsRectItem
{ public:
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsRectItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsRectItem::opaqueArea(); }
};

class PythonQtWrapper_QGraphicsRectItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsRectItem::Type};
public slots:
QGraphicsRectItem* new_QGraphicsRectItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsRectItem* new_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsRectItem* new_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsRectItem(QGraphicsRectItem* obj) { delete obj; } 
   QPainterPath  shape(QGraphicsRectItem* theWrappedObject) const;
   bool  contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const;
   void paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   bool  isObscuredBy(QGraphicsRectItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPainterPath  opaqueArea(QGraphicsRectItem* theWrappedObject) const;
   QRectF  rect(QGraphicsRectItem* theWrappedObject) const;
   int  type(QGraphicsRectItem* theWrappedObject) const;
   void setRect(QGraphicsRectItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setRect(QGraphicsRectItem* theWrappedObject, const QRectF&  rect);
   QRectF  boundingRect(QGraphicsRectItem* theWrappedObject) const;
};





class PythonQtShell_QGraphicsScene : public QGraphicsScene
{
public:
    PythonQtShell_QGraphicsScene(QObject*  parent = 0):QGraphicsScene(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = 0):QGraphicsScene(sceneRect, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = 0):QGraphicsScene(x, y, width, height, parent),_wrapper(NULL) {};

virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
virtual void focusInEvent(QFocusEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void helpEvent(QGraphicsSceneHelpEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual bool  event(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsScene : public QGraphicsScene
{ public:
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsScene::inputMethodQuery(query); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawForeground(painter, rect); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QGraphicsScene::eventFilter(watched, event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseReleaseEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsScene::keyPressEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mousePressEvent(event); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0) { QGraphicsScene::drawItems(painter, numItems, items, options, widget); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsScene::focusInEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragEnterEvent(event); }
inline void promoted_helpEvent(QGraphicsSceneHelpEvent*  event) { QGraphicsScene::helpEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dropEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseDoubleClickEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragMoveEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsScene::keyReleaseEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsScene::inputMethodEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragLeaveEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsScene::focusOutEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawBackground(painter, rect); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsScene::contextMenuEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsScene::wheelEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsScene::event(event); }
};

class PythonQtWrapper_QGraphicsScene : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SceneLayer ItemIndexMethod )
Q_FLAGS(SceneLayers )
enum SceneLayer{
  ItemLayer = QGraphicsScene::ItemLayer,   BackgroundLayer = QGraphicsScene::BackgroundLayer,   ForegroundLayer = QGraphicsScene::ForegroundLayer,   AllLayers = QGraphicsScene::AllLayers};
enum ItemIndexMethod{
  BspTreeIndex = QGraphicsScene::BspTreeIndex,   NoIndex = QGraphicsScene::NoIndex};
Q_DECLARE_FLAGS(SceneLayers, SceneLayer)
public slots:
QGraphicsScene* new_QGraphicsScene(QObject*  parent = 0);
QGraphicsScene* new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = 0);
QGraphicsScene* new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = 0);
void delete_QGraphicsScene(QGraphicsScene* obj) { delete obj; } 
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QVariant  inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const;
   void update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QGraphicsPolygonItem*  addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPointF&  pos) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void addItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
   void setStyle(QGraphicsScene* theWrappedObject, QStyle*  style);
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y) const;
   void drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QList<QGraphicsView* >  views(QGraphicsScene* theWrappedObject) const;
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path);
   QGraphicsItem*  focusItem(QGraphicsScene* theWrappedObject) const;
   QRectF  sceneRect(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsItem* >  selectedItems(QGraphicsScene* theWrappedObject) const;
   void render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRectF&  source = QRectF(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   void clearFocus(QGraphicsScene* theWrappedObject);
   QStyle*  style(QGraphicsScene* theWrappedObject) const;
   bool  eventFilter(QGraphicsScene* theWrappedObject, QObject*  watched, QEvent*  event);
   QPalette  palette(QGraphicsScene* theWrappedObject) const;
   QGraphicsSimpleTextItem*  addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   int  bspTreeDepth(QGraphicsScene* theWrappedObject) const;
   void mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QGraphicsItemGroup*  createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items);
   void keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   qreal  width(QGraphicsScene* theWrappedObject) const;
   QGraphicsItem*  mouseGrabberItem(QGraphicsScene* theWrappedObject) const;
   void mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  arg__2);
   bool  hasFocus(QGraphicsScene* theWrappedObject) const;
   QBrush  foregroundBrush(QGraphicsScene* theWrappedObject) const;
   void drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
   void destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group);
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QGraphicsWidget*  activeWindow(QGraphicsScene* theWrappedObject) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos) const;
   QPainterPath  selectionArea(QGraphicsScene* theWrappedObject) const;
   void focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event);
   QGraphicsTextItem*  addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   void setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method);
   void dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QFont  font(QGraphicsScene* theWrappedObject) const;
   void dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   void mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QGraphicsScene::ItemIndexMethod  itemIndexMethod(QGraphicsScene* theWrappedObject) const;
   void setFont(QGraphicsScene* theWrappedObject, const QFont&  font);
   void setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect);
   QGraphicsPixmapItem*  addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap);
   void inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event);
   void invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers = QGraphicsScene::AllLayers);
   void setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget);
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen = QPen());
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen = QPen());
   void setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   void setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth);
   void setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette);
   void dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   void drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   void contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   QBrush  backgroundBrush(QGraphicsScene* theWrappedObject) const;
   void setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   QRectF  itemsBoundingRect(QGraphicsScene* theWrappedObject) const;
   QGraphicsPathItem*  addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QList<QGraphicsItem* >  collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QGraphicsProxyWidget*  addWidget(QGraphicsScene* theWrappedObject, QWidget*  widget, Qt::WindowFlags  wFlags = 0);
   qreal  height(QGraphicsScene* theWrappedObject) const;
   bool  event(QGraphicsScene* theWrappedObject, QEvent*  event);
   void removeItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
};





class PythonQtWrapper_QGraphicsSceneContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QGraphicsSceneContextMenuEvent::Mouse,   Keyboard = QGraphicsSceneContextMenuEvent::Keyboard,   Other = QGraphicsSceneContextMenuEvent::Other};
public slots:
QGraphicsSceneContextMenuEvent* new_QGraphicsSceneContextMenuEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneContextMenuEvent(QGraphicsSceneContextMenuEvent* obj) { delete obj; } 
   QPoint  screenPos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   void setReason(QGraphicsSceneContextMenuEvent* theWrappedObject, QGraphicsSceneContextMenuEvent::Reason  reason);
   QGraphicsSceneContextMenuEvent::Reason  reason(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   void setPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
   QPointF  pos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneContextMenuEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setScenePos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPoint&  pos);
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
};





class PythonQtWrapper_QGraphicsSceneDragDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneDragDropEvent* new_QGraphicsSceneDragDropEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneDragDropEvent(QGraphicsSceneDragDropEvent* obj) { delete obj; } 
   QPointF  pos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   QWidget*  source(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
   void setPossibleActions(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropActions  actions);
   QPointF  scenePos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void acceptProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject);
   Qt::DropAction  dropAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setDropAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
   void setProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
   void setModifiers(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   QPoint  screenPos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setButtons(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::MouseButtons  buttons);
   Qt::DropAction  proposedAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setScreenPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPoint&  pos);
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
};


