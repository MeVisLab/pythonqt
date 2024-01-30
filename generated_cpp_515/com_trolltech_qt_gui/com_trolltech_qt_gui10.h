#include <PythonQt.h>
#include <QIcon>
#include <QObject>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextDocumentFragment>
#include <QTextFormat>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qabstracttextdocumentlayout.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgesture.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpagedpaintdevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qregularexpression.h>
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstatictext.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleditemdelegate.h>
#include <qstyleoption.h>
#include <qstylepainter.h>
#include <qstyleplugin.h>
#include <qsurface.h>
#include <qsurfaceformat.h>
#include <qsyntaxhighlighter.h>
#include <qsystemtrayicon.h>
#include <qtabbar.h>
#include <qtableview.h>
#include <qtablewidget.h>
#include <qtabwidget.h>
#include <qtextbrowser.h>
#include <qtextcodec.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextdocumentwriter.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qtexttable.h>
#include <qthread.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QStyleOptionViewItemV4 : public QStyleOptionViewItemV4
{
public:
    PythonQtShell_QStyleOptionViewItemV4():QStyleOptionViewItemV4(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionViewItemV4();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionViewItemV4 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionViewItemV4* new_QStyleOptionViewItemV4();
QStyleOptionViewItemV4* new_QStyleOptionViewItemV4(const QStyleOptionViewItemV4& other) {
PythonQtShell_QStyleOptionViewItemV4* a = new PythonQtShell_QStyleOptionViewItemV4();
*((QStyleOptionViewItemV4*)a) = other;
return a; }
void delete_QStyleOptionViewItemV4(QStyleOptionViewItemV4* obj) { delete obj; }
};





class PythonQtWrapper_QStylePainter : public QObject
{ Q_OBJECT
public:
public slots:
QStylePainter* new_QStylePainter();
QStylePainter* new_QStylePainter(QPaintDevice*  pd, QWidget*  w);
QStylePainter* new_QStylePainter(QWidget*  w);
void delete_QStylePainter(QStylePainter* obj) { delete obj; }
   bool  begin(QStylePainter* theWrappedObject, QPaintDevice*  pd, QWidget*  w);
   bool  begin(QStylePainter* theWrappedObject, QWidget*  w);
   void drawComplexControl(QStylePainter* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex&  opt);
   void drawControl(QStylePainter* theWrappedObject, QStyle::ControlElement  ce, const QStyleOption&  opt);
   void drawItemPixmap(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap);
   void drawItemText(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole);
   void drawPrimitive(QStylePainter* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption&  opt);
   QStyle*  style(QStylePainter* theWrappedObject) const;
};





class PythonQtShell_QStylePlugin : public QStylePlugin
{
public:
    PythonQtShell_QStylePlugin(QObject*  parent = nullptr):QStylePlugin(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStylePlugin() override;

void childEvent(QChildEvent*  event) override;
QStyle*  create(const QString&  key) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStylePlugin : public QStylePlugin
{ public:
inline QStyle*  py_q_create(const QString&  key) { return this->create(key); }
};

class PythonQtWrapper_QStylePlugin : public QObject
{ Q_OBJECT
public:
public slots:
QStylePlugin* new_QStylePlugin(QObject*  parent = nullptr);
void delete_QStylePlugin(QStylePlugin* obj) { delete obj; }
   QStyle*  create(QStylePlugin* theWrappedObject, const QString&  key);
   QStyle*  py_q_create(QStylePlugin* theWrappedObject, const QString&  key){  return (((PythonQtPublicPromoter_QStylePlugin*)theWrappedObject)->py_q_create(key));}
};





class PythonQtShell_QStyledItemDelegate : public QStyledItemDelegate
{
public:
    PythonQtShell_QStyledItemDelegate(QObject*  parent = nullptr):QStyledItemDelegate(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QStyledItemDelegate() override;

void childEvent(QChildEvent*  event) override;
QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
void customEvent(QEvent*  event) override;
void destroyEditor(QWidget*  editor, const QModelIndex&  index) const override;
QString  displayText(const QVariant&  value, const QLocale&  locale) const override;
bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
bool  helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index) override;
void initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const override;
void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
QVector<int >  paintingRoles() const override;
void setEditorData(QWidget*  editor, const QModelIndex&  index) const override;
void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const override;
QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStyledItemDelegate : public QStyledItemDelegate
{ public:
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return this->editorEvent(event, model, option, index); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void promoted_initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const { this->initStyleOption(option, index); }
inline QWidget*  py_q_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QStyledItemDelegate::createEditor(parent, option, index); }
inline QString  py_q_displayText(const QVariant&  value, const QLocale&  locale) const { return QStyledItemDelegate::displayText(value, locale); }
inline bool  py_q_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QStyledItemDelegate::editorEvent(event, model, option, index); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QStyledItemDelegate::eventFilter(object, event); }
inline void py_q_initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const { QStyledItemDelegate::initStyleOption(option, index); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QStyledItemDelegate::paint(painter, option, index); }
inline void py_q_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QStyledItemDelegate::setEditorData(editor, index); }
inline void py_q_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QStyledItemDelegate::setModelData(editor, model, index); }
inline QSize  py_q_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QStyledItemDelegate::sizeHint(option, index); }
inline void py_q_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QStyledItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QStyledItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QStyledItemDelegate* new_QStyledItemDelegate(QObject*  parent = nullptr);
void delete_QStyledItemDelegate(QStyledItemDelegate* obj) { delete obj; }
   QWidget*  py_q_createEditor(QStyledItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_createEditor(parent, option, index));}
   QString  displayText(QStyledItemDelegate* theWrappedObject, const QVariant&  value, const QLocale&  locale) const;
   QString  py_q_displayText(QStyledItemDelegate* theWrappedObject, const QVariant&  value, const QLocale&  locale) const{  return (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_displayText(value, locale));}
   bool  py_q_editorEvent(QStyledItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index){  return (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_editorEvent(event, model, option, index));}
   bool  py_q_eventFilter(QStyledItemDelegate* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_eventFilter(object, event));}
   void initStyleOption(QStyledItemDelegate* theWrappedObject, QStyleOptionViewItem*  option, const QModelIndex&  index) const;
   void py_q_initStyleOption(QStyledItemDelegate* theWrappedObject, QStyleOptionViewItem*  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_initStyleOption(option, index));}
   QItemEditorFactory*  itemEditorFactory(QStyledItemDelegate* theWrappedObject) const;
   void py_q_paint(QStyledItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_paint(painter, option, index));}
   void py_q_setEditorData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_setEditorData(editor, index));}
   void setItemEditorFactory(QStyledItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   void py_q_setModelData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_setModelData(editor, model, index));}
   QSize  py_q_sizeHint(QStyledItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_sizeHint(option, index));}
   void py_q_updateEditorGeometry(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QStyledItemDelegate*)theWrappedObject)->py_q_updateEditorGeometry(editor, option, index));}
};





class PythonQtShell_QSurface : public QSurface
{
public:
    PythonQtShell_QSurface(QSurface::SurfaceClass  type):QSurface(type),_wrapper(nullptr) {};

   ~PythonQtShell_QSurface() override;

QSurfaceFormat  format() const override;
QSize  size() const override;
QPlatformSurface*  surfaceHandle() const override;
QSurface::SurfaceType  surfaceType() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSurface : public QSurface
{ public:
inline QSurfaceFormat  py_q_format() const { return this->format(); }
inline QSize  py_q_size() const { return this->size(); }
inline QPlatformSurface*  py_q_surfaceHandle() const { return this->surfaceHandle(); }
inline QSurface::SurfaceType  py_q_surfaceType() const { return this->surfaceType(); }
};

class PythonQtWrapper_QSurface : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SurfaceClass SurfaceType )
enum SurfaceClass{
  Window = QSurface::Window,   Offscreen = QSurface::Offscreen};
enum SurfaceType{
  RasterSurface = QSurface::RasterSurface,   OpenGLSurface = QSurface::OpenGLSurface,   RasterGLSurface = QSurface::RasterGLSurface,   OpenVGSurface = QSurface::OpenVGSurface,   VulkanSurface = QSurface::VulkanSurface,   MetalSurface = QSurface::MetalSurface};
public slots:
QSurface* new_QSurface(QSurface::SurfaceClass  type);
void delete_QSurface(QSurface* obj) { delete obj; }
   QSurfaceFormat  format(QSurface* theWrappedObject) const;
   QSurfaceFormat  py_q_format(QSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSurface*)theWrappedObject)->py_q_format());}
   QSize  size(QSurface* theWrappedObject) const;
   QSize  py_q_size(QSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSurface*)theWrappedObject)->py_q_size());}
   bool  supportsOpenGL(QSurface* theWrappedObject) const;
   QSurface::SurfaceClass  surfaceClass(QSurface* theWrappedObject) const;
   QPlatformSurface*  surfaceHandle(QSurface* theWrappedObject) const;
   QPlatformSurface*  py_q_surfaceHandle(QSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSurface*)theWrappedObject)->py_q_surfaceHandle());}
   QSurface::SurfaceType  surfaceType(QSurface* theWrappedObject) const;
   QSurface::SurfaceType  py_q_surfaceType(QSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSurface*)theWrappedObject)->py_q_surfaceType());}
};





class PythonQtWrapper_QSurfaceFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorSpace FormatOption OpenGLContextProfile RenderableType SwapBehavior )
Q_FLAGS(FormatOptions )
enum ColorSpace{
  DefaultColorSpace = QSurfaceFormat::DefaultColorSpace,   sRGBColorSpace = QSurfaceFormat::sRGBColorSpace};
enum FormatOption{
  StereoBuffers = QSurfaceFormat::StereoBuffers,   DebugContext = QSurfaceFormat::DebugContext,   DeprecatedFunctions = QSurfaceFormat::DeprecatedFunctions,   ResetNotification = QSurfaceFormat::ResetNotification};
enum OpenGLContextProfile{
  NoProfile = QSurfaceFormat::NoProfile,   CoreProfile = QSurfaceFormat::CoreProfile,   CompatibilityProfile = QSurfaceFormat::CompatibilityProfile};
enum RenderableType{
  DefaultRenderableType = QSurfaceFormat::DefaultRenderableType,   OpenGL = QSurfaceFormat::OpenGL,   OpenGLES = QSurfaceFormat::OpenGLES,   OpenVG = QSurfaceFormat::OpenVG};
enum SwapBehavior{
  DefaultSwapBehavior = QSurfaceFormat::DefaultSwapBehavior,   SingleBuffer = QSurfaceFormat::SingleBuffer,   DoubleBuffer = QSurfaceFormat::DoubleBuffer,   TripleBuffer = QSurfaceFormat::TripleBuffer};
Q_DECLARE_FLAGS(FormatOptions, FormatOption)
public slots:
QSurfaceFormat* new_QSurfaceFormat();
QSurfaceFormat* new_QSurfaceFormat(QSurfaceFormat::FormatOptions  options);
QSurfaceFormat* new_QSurfaceFormat(const QSurfaceFormat&  other);
void delete_QSurfaceFormat(QSurfaceFormat* obj) { delete obj; }
   int  alphaBufferSize(QSurfaceFormat* theWrappedObject) const;
   int  blueBufferSize(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat::ColorSpace  colorSpace(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat  static_QSurfaceFormat_defaultFormat();
   int  depthBufferSize(QSurfaceFormat* theWrappedObject) const;
   int  greenBufferSize(QSurfaceFormat* theWrappedObject) const;
   bool  hasAlpha(QSurfaceFormat* theWrappedObject) const;
   int  majorVersion(QSurfaceFormat* theWrappedObject) const;
   int  minorVersion(QSurfaceFormat* theWrappedObject) const;
   bool  __ne__(QSurfaceFormat* theWrappedObject, const QSurfaceFormat&  arg__2);
   QSurfaceFormat*  operator_assign(QSurfaceFormat* theWrappedObject, const QSurfaceFormat&  other);
   bool  __eq__(QSurfaceFormat* theWrappedObject, const QSurfaceFormat&  arg__2);
   QSurfaceFormat::FormatOptions  options(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat::OpenGLContextProfile  profile(QSurfaceFormat* theWrappedObject) const;
   int  redBufferSize(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat::RenderableType  renderableType(QSurfaceFormat* theWrappedObject) const;
   int  samples(QSurfaceFormat* theWrappedObject) const;
   void setAlphaBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setBlueBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setColorSpace(QSurfaceFormat* theWrappedObject, QSurfaceFormat::ColorSpace  colorSpace);
   void static_QSurfaceFormat_setDefaultFormat(const QSurfaceFormat&  format);
   void setDepthBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setGreenBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setMajorVersion(QSurfaceFormat* theWrappedObject, int  majorVersion);
   void setMinorVersion(QSurfaceFormat* theWrappedObject, int  minorVersion);
   void setOption(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOptions  opt);
   void setOption(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOption  option, bool  on = true);
   void setOptions(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOptions  options);
   void setProfile(QSurfaceFormat* theWrappedObject, QSurfaceFormat::OpenGLContextProfile  profile);
   void setRedBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setRenderableType(QSurfaceFormat* theWrappedObject, QSurfaceFormat::RenderableType  type);
   void setSamples(QSurfaceFormat* theWrappedObject, int  numSamples);
   void setStencilBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setStereo(QSurfaceFormat* theWrappedObject, bool  enable);
   void setSwapBehavior(QSurfaceFormat* theWrappedObject, QSurfaceFormat::SwapBehavior  behavior);
   void setSwapInterval(QSurfaceFormat* theWrappedObject, int  interval);
   void setVersion(QSurfaceFormat* theWrappedObject, int  major, int  minor);
   int  stencilBufferSize(QSurfaceFormat* theWrappedObject) const;
   bool  stereo(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat::SwapBehavior  swapBehavior(QSurfaceFormat* theWrappedObject) const;
   int  swapInterval(QSurfaceFormat* theWrappedObject) const;
   bool  testOption(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOptions  opt) const;
   bool  testOption(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOption  option) const;
   QPair<int , int >  version(QSurfaceFormat* theWrappedObject) const;
    QString py_toString(QSurfaceFormat*);
};





class PythonQtShell_QSwipeGesture : public QSwipeGesture
{
public:
    PythonQtShell_QSwipeGesture(QObject*  parent = nullptr):QSwipeGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSwipeGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSwipeGesture : public QObject
{ Q_OBJECT
public:
public slots:
QSwipeGesture* new_QSwipeGesture(QObject*  parent = nullptr);
void delete_QSwipeGesture(QSwipeGesture* obj) { delete obj; }
   QSwipeGesture::SwipeDirection  horizontalDirection(QSwipeGesture* theWrappedObject) const;
   void setSwipeAngle(QSwipeGesture* theWrappedObject, qreal  value);
   qreal  swipeAngle(QSwipeGesture* theWrappedObject) const;
   QSwipeGesture::SwipeDirection  verticalDirection(QSwipeGesture* theWrappedObject) const;
};





class PythonQtShell_QSyntaxHighlighter : public QSyntaxHighlighter
{
public:
    PythonQtShell_QSyntaxHighlighter(QObject*  parent):QSyntaxHighlighter(parent),_wrapper(nullptr) {};
    PythonQtShell_QSyntaxHighlighter(QTextDocument*  parent):QSyntaxHighlighter(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSyntaxHighlighter() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void highlightBlock(const QString&  text) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSyntaxHighlighter : public QSyntaxHighlighter
{ public:
inline QTextBlock  promoted_currentBlock() const { return this->currentBlock(); }
inline int  promoted_currentBlockState() const { return this->currentBlockState(); }
inline QTextBlockUserData*  promoted_currentBlockUserData() const { return this->currentBlockUserData(); }
inline QTextCharFormat  promoted_format(int  pos) const { return this->format(pos); }
inline void promoted_highlightBlock(const QString&  text) { this->highlightBlock(text); }
inline int  promoted_previousBlockState() const { return this->previousBlockState(); }
inline void promoted_setCurrentBlockState(int  newState) { this->setCurrentBlockState(newState); }
inline void promoted_setCurrentBlockUserData(QTextBlockUserData*  data) { this->setCurrentBlockUserData(data); }
inline void promoted_setFormat(int  start, int  count, const QColor&  color) { this->setFormat(start, count, color); }
inline void promoted_setFormat(int  start, int  count, const QFont&  font) { this->setFormat(start, count, font); }
inline void promoted_setFormat(int  start, int  count, const QTextCharFormat&  format) { this->setFormat(start, count, format); }
inline void py_q_highlightBlock(const QString&  text) { this->highlightBlock(text); }
};

class PythonQtWrapper_QSyntaxHighlighter : public QObject
{ Q_OBJECT
public:
public slots:
QSyntaxHighlighter* new_QSyntaxHighlighter(QObject*  parent);
QSyntaxHighlighter* new_QSyntaxHighlighter(QTextDocument*  parent);
void delete_QSyntaxHighlighter(QSyntaxHighlighter* obj) { delete obj; }
   QTextBlock  currentBlock(QSyntaxHighlighter* theWrappedObject) const;
   int  currentBlockState(QSyntaxHighlighter* theWrappedObject) const;
   QTextBlockUserData*  currentBlockUserData(QSyntaxHighlighter* theWrappedObject) const;
   QTextDocument*  document(QSyntaxHighlighter* theWrappedObject) const;
   QTextCharFormat  format(QSyntaxHighlighter* theWrappedObject, int  pos) const;
   void highlightBlock(QSyntaxHighlighter* theWrappedObject, const QString&  text);
   void py_q_highlightBlock(QSyntaxHighlighter* theWrappedObject, const QString&  text){  (((PythonQtPublicPromoter_QSyntaxHighlighter*)theWrappedObject)->py_q_highlightBlock(text));}
   int  previousBlockState(QSyntaxHighlighter* theWrappedObject) const;
   void setCurrentBlockState(QSyntaxHighlighter* theWrappedObject, int  newState);
   void setCurrentBlockUserData(QSyntaxHighlighter* theWrappedObject, QTextBlockUserData*  data);
   void setDocument(QSyntaxHighlighter* theWrappedObject, QTextDocument*  doc);
   void setFormat(QSyntaxHighlighter* theWrappedObject, int  start, int  count, const QColor&  color);
   void setFormat(QSyntaxHighlighter* theWrappedObject, int  start, int  count, const QFont&  font);
   void setFormat(QSyntaxHighlighter* theWrappedObject, int  start, int  count, const QTextCharFormat&  format);
};





class PythonQtShell_QSystemTrayIcon : public QSystemTrayIcon
{
public:
    PythonQtShell_QSystemTrayIcon(QObject*  parent = nullptr):QSystemTrayIcon(parent),_wrapper(nullptr) {};
    PythonQtShell_QSystemTrayIcon(const QIcon&  icon, QObject*  parent = nullptr):QSystemTrayIcon(icon, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSystemTrayIcon() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSystemTrayIcon : public QSystemTrayIcon
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  py_q_event(QEvent*  event) { return QSystemTrayIcon::event(event); }
};

class PythonQtWrapper_QSystemTrayIcon : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ActivationReason MessageIcon )
enum ActivationReason{
  Unknown = QSystemTrayIcon::Unknown,   Context = QSystemTrayIcon::Context,   DoubleClick = QSystemTrayIcon::DoubleClick,   Trigger = QSystemTrayIcon::Trigger,   MiddleClick = QSystemTrayIcon::MiddleClick};
enum MessageIcon{
  NoIcon = QSystemTrayIcon::NoIcon,   Information = QSystemTrayIcon::Information,   Warning = QSystemTrayIcon::Warning,   Critical = QSystemTrayIcon::Critical};
public slots:
QSystemTrayIcon* new_QSystemTrayIcon(QObject*  parent = nullptr);
QSystemTrayIcon* new_QSystemTrayIcon(const QIcon&  icon, QObject*  parent = nullptr);
void delete_QSystemTrayIcon(QSystemTrayIcon* obj) { delete obj; }
   QMenu*  contextMenu(QSystemTrayIcon* theWrappedObject) const;
   bool  py_q_event(QSystemTrayIcon* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QSystemTrayIcon*)theWrappedObject)->py_q_event(event));}
   QRect  geometry(QSystemTrayIcon* theWrappedObject) const;
   QIcon  icon(QSystemTrayIcon* theWrappedObject) const;
   bool  static_QSystemTrayIcon_isSystemTrayAvailable();
   bool  isVisible(QSystemTrayIcon* theWrappedObject) const;
   void setContextMenu(QSystemTrayIcon* theWrappedObject, QMenu*  menu);
   void setIcon(QSystemTrayIcon* theWrappedObject, const QIcon&  icon);
   void setToolTip(QSystemTrayIcon* theWrappedObject, const QString&  tip);
   bool  static_QSystemTrayIcon_supportsMessages();
   QString  toolTip(QSystemTrayIcon* theWrappedObject) const;
};





class PythonQtShell_QTabBar : public QTabBar
{
public:
    PythonQtShell_QTabBar(QWidget*  parent = nullptr):QTabBar(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTabBar() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  arg__1) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
QSize  minimumTabSizeHint(int  index) const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabInserted(int  index) override;
void tabLayoutChange() override;
void tabRemoved(int  index) override;
QSize  tabSizeHint(int  index) const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTabBar : public QTabBar
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionTab*  option, int  tabIndex) const { this->initStyleOption(option, tabIndex); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline QSize  promoted_minimumTabSizeHint(int  index) const { return this->minimumTabSizeHint(index); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_tabInserted(int  index) { this->tabInserted(index); }
inline void promoted_tabLayoutChange() { this->tabLayoutChange(); }
inline void promoted_tabRemoved(int  index) { this->tabRemoved(index); }
inline QSize  promoted_tabSizeHint(int  index) const { return this->tabSizeHint(index); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_changeEvent(QEvent*  arg__1) { QTabBar::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QTabBar::event(arg__1); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QTabBar::hideEvent(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QTabBar::keyPressEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QTabBar::minimumSizeHint(); }
inline QSize  py_q_minimumTabSizeHint(int  index) const { return QTabBar::minimumTabSizeHint(index); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QTabBar::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QTabBar::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QTabBar::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QTabBar::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QTabBar::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QTabBar::showEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QTabBar::sizeHint(); }
inline void py_q_tabInserted(int  index) { QTabBar::tabInserted(index); }
inline void py_q_tabLayoutChange() { QTabBar::tabLayoutChange(); }
inline void py_q_tabRemoved(int  index) { QTabBar::tabRemoved(index); }
inline QSize  py_q_tabSizeHint(int  index) const { return QTabBar::tabSizeHint(index); }
inline void py_q_timerEvent(QTimerEvent*  event) { QTabBar::timerEvent(event); }
inline void py_q_wheelEvent(QWheelEvent*  event) { QTabBar::wheelEvent(event); }
};

class PythonQtWrapper_QTabBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonPosition SelectionBehavior )
enum ButtonPosition{
  LeftSide = QTabBar::LeftSide,   RightSide = QTabBar::RightSide};
enum SelectionBehavior{
  SelectLeftTab = QTabBar::SelectLeftTab,   SelectRightTab = QTabBar::SelectRightTab,   SelectPreviousTab = QTabBar::SelectPreviousTab};
public slots:
QTabBar* new_QTabBar(QWidget*  parent = nullptr);
void delete_QTabBar(QTabBar* obj) { delete obj; }
   QString  accessibleTabName(QTabBar* theWrappedObject, int  index) const;
   int  addTab(QTabBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   int  addTab(QTabBar* theWrappedObject, const QString&  text);
   bool  autoHide(QTabBar* theWrappedObject) const;
   bool  changeCurrentOnDrag(QTabBar* theWrappedObject) const;
   void py_q_changeEvent(QTabBar* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_changeEvent(arg__1));}
   int  count(QTabBar* theWrappedObject) const;
   int  currentIndex(QTabBar* theWrappedObject) const;
   bool  documentMode(QTabBar* theWrappedObject) const;
   bool  drawBase(QTabBar* theWrappedObject) const;
   Qt::TextElideMode  elideMode(QTabBar* theWrappedObject) const;
   bool  py_q_event(QTabBar* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_event(arg__1));}
   bool  expanding(QTabBar* theWrappedObject) const;
   void py_q_hideEvent(QTabBar* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_hideEvent(arg__1));}
   QSize  iconSize(QTabBar* theWrappedObject) const;
   void initStyleOption(QTabBar* theWrappedObject, QStyleOptionTab*  option, int  tabIndex) const;
   int  insertTab(QTabBar* theWrappedObject, int  index, const QIcon&  icon, const QString&  text);
   int  insertTab(QTabBar* theWrappedObject, int  index, const QString&  text);
   bool  isMovable(QTabBar* theWrappedObject) const;
   bool  isTabEnabled(QTabBar* theWrappedObject, int  index) const;
   bool  isTabVisible(QTabBar* theWrappedObject, int  index) const;
   void py_q_keyPressEvent(QTabBar* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   QSize  minimumSizeHint(QTabBar* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QTabBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_minimumSizeHint());}
   QSize  minimumTabSizeHint(QTabBar* theWrappedObject, int  index) const;
   QSize  py_q_minimumTabSizeHint(QTabBar* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_minimumTabSizeHint(index));}
   void py_q_mouseMoveEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void moveTab(QTabBar* theWrappedObject, int  from, int  to);
   void py_q_paintEvent(QTabBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void removeTab(QTabBar* theWrappedObject, int  index);
   void py_q_resizeEvent(QTabBar* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   QTabBar::SelectionBehavior  selectionBehaviorOnRemove(QTabBar* theWrappedObject) const;
   void setAccessibleTabName(QTabBar* theWrappedObject, int  index, const QString&  name);
   void setAutoHide(QTabBar* theWrappedObject, bool  hide);
   void setChangeCurrentOnDrag(QTabBar* theWrappedObject, bool  change);
   void setDocumentMode(QTabBar* theWrappedObject, bool  set);
   void setDrawBase(QTabBar* theWrappedObject, bool  drawTheBase);
   void setElideMode(QTabBar* theWrappedObject, Qt::TextElideMode  mode);
   void setExpanding(QTabBar* theWrappedObject, bool  enabled);
   void setIconSize(QTabBar* theWrappedObject, const QSize&  size);
   void setMovable(QTabBar* theWrappedObject, bool  movable);
   void setSelectionBehaviorOnRemove(QTabBar* theWrappedObject, QTabBar::SelectionBehavior  behavior);
   void setShape(QTabBar* theWrappedObject, QTabBar::Shape  shape);
   void setTabButton(QTabBar* theWrappedObject, int  index, QTabBar::ButtonPosition  position, QWidget*  widget);
   void setTabData(QTabBar* theWrappedObject, int  index, const QVariant&  data);
   void setTabEnabled(QTabBar* theWrappedObject, int  index, bool  enabled);
   void setTabIcon(QTabBar* theWrappedObject, int  index, const QIcon&  icon);
   void setTabText(QTabBar* theWrappedObject, int  index, const QString&  text);
   void setTabTextColor(QTabBar* theWrappedObject, int  index, const QColor&  color);
   void setTabToolTip(QTabBar* theWrappedObject, int  index, const QString&  tip);
   void setTabVisible(QTabBar* theWrappedObject, int  index, bool  visible);
   void setTabWhatsThis(QTabBar* theWrappedObject, int  index, const QString&  text);
   void setTabsClosable(QTabBar* theWrappedObject, bool  closable);
   void setUsesScrollButtons(QTabBar* theWrappedObject, bool  useButtons);
   QTabBar::Shape  shape(QTabBar* theWrappedObject) const;
   void py_q_showEvent(QTabBar* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  sizeHint(QTabBar* theWrappedObject) const;
   QSize  py_q_sizeHint(QTabBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_sizeHint());}
   int  tabAt(QTabBar* theWrappedObject, const QPoint&  pos) const;
   QWidget*  tabButton(QTabBar* theWrappedObject, int  index, QTabBar::ButtonPosition  position) const;
   QVariant  tabData(QTabBar* theWrappedObject, int  index) const;
   QIcon  tabIcon(QTabBar* theWrappedObject, int  index) const;
   void tabInserted(QTabBar* theWrappedObject, int  index);
   void py_q_tabInserted(QTabBar* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_tabInserted(index));}
   void tabLayoutChange(QTabBar* theWrappedObject);
   void py_q_tabLayoutChange(QTabBar* theWrappedObject){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_tabLayoutChange());}
   QRect  tabRect(QTabBar* theWrappedObject, int  index) const;
   void tabRemoved(QTabBar* theWrappedObject, int  index);
   void py_q_tabRemoved(QTabBar* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_tabRemoved(index));}
   QSize  tabSizeHint(QTabBar* theWrappedObject, int  index) const;
   QSize  py_q_tabSizeHint(QTabBar* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_tabSizeHint(index));}
   QString  tabText(QTabBar* theWrappedObject, int  index) const;
   QColor  tabTextColor(QTabBar* theWrappedObject, int  index) const;
   QString  tabToolTip(QTabBar* theWrappedObject, int  index) const;
   QString  tabWhatsThis(QTabBar* theWrappedObject, int  index) const;
   bool  tabsClosable(QTabBar* theWrappedObject) const;
   void py_q_timerEvent(QTabBar* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_timerEvent(event));}
   bool  usesScrollButtons(QTabBar* theWrappedObject) const;
   void py_q_wheelEvent(QTabBar* theWrappedObject, QWheelEvent*  event){  (((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->py_q_wheelEvent(event));}
};





class PythonQtShell_QTabWidget : public QTabWidget
{
public:
    PythonQtShell_QTabWidget(QWidget*  parent = nullptr):QTabWidget(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTabWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  width) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabInserted(int  index) override;
void tabRemoved(int  index) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTabWidget : public QTabWidget
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_initStyleOption(QStyleOptionTabWidgetFrame*  option) const { this->initStyleOption(option); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_setTabBar(QTabBar*  arg__1) { this->setTabBar(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_tabInserted(int  index) { this->tabInserted(index); }
inline void promoted_tabRemoved(int  index) { this->tabRemoved(index); }
inline void py_q_changeEvent(QEvent*  arg__1) { QTabWidget::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QTabWidget::event(arg__1); }
inline bool  py_q_hasHeightForWidth() const { return QTabWidget::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  width) const { return QTabWidget::heightForWidth(width); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QTabWidget::keyPressEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QTabWidget::minimumSizeHint(); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QTabWidget::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QTabWidget::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QTabWidget::showEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QTabWidget::sizeHint(); }
inline void py_q_tabInserted(int  index) { QTabWidget::tabInserted(index); }
inline void py_q_tabRemoved(int  index) { QTabWidget::tabRemoved(index); }
};

class PythonQtWrapper_QTabWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTabWidget* new_QTabWidget(QWidget*  parent = nullptr);
void delete_QTabWidget(QTabWidget* obj) { delete obj; }
   int  addTab(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  label);
   int  addTab(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  arg__2);
   void py_q_changeEvent(QTabWidget* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void clear(QTabWidget* theWrappedObject);
   QWidget*  cornerWidget(QTabWidget* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   int  count(QTabWidget* theWrappedObject) const;
   int  currentIndex(QTabWidget* theWrappedObject) const;
   QWidget*  currentWidget(QTabWidget* theWrappedObject) const;
   bool  documentMode(QTabWidget* theWrappedObject) const;
   Qt::TextElideMode  elideMode(QTabWidget* theWrappedObject) const;
   bool  py_q_event(QTabWidget* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_hasHeightForWidth(QTabWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  py_q_heightForWidth(QTabWidget* theWrappedObject, int  width) const{  return (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_heightForWidth(width));}
   QSize  iconSize(QTabWidget* theWrappedObject) const;
   int  indexOf(QTabWidget* theWrappedObject, QWidget*  widget) const;
   void initStyleOption(QTabWidget* theWrappedObject, QStyleOptionTabWidgetFrame*  option) const;
   int  insertTab(QTabWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  label);
   int  insertTab(QTabWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  arg__3);
   bool  isMovable(QTabWidget* theWrappedObject) const;
   bool  isTabEnabled(QTabWidget* theWrappedObject, int  index) const;
   bool  isTabVisible(QTabWidget* theWrappedObject, int  index) const;
   void py_q_keyPressEvent(QTabWidget* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   QSize  minimumSizeHint(QTabWidget* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QTabWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_paintEvent(QTabWidget* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void removeTab(QTabWidget* theWrappedObject, int  index);
   void py_q_resizeEvent(QTabWidget* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setCornerWidget(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w, Qt::Corner  corner = Qt::TopRightCorner);
   void setDocumentMode(QTabWidget* theWrappedObject, bool  set);
   void setElideMode(QTabWidget* theWrappedObject, Qt::TextElideMode  mode);
   void setIconSize(QTabWidget* theWrappedObject, const QSize&  size);
   void setMovable(QTabWidget* theWrappedObject, bool  movable);
   void setTabBar(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QTabBar* >  arg__1);
   void setTabBarAutoHide(QTabWidget* theWrappedObject, bool  enabled);
   void setTabEnabled(QTabWidget* theWrappedObject, int  index, bool  enabled);
   void setTabIcon(QTabWidget* theWrappedObject, int  index, const QIcon&  icon);
   void setTabPosition(QTabWidget* theWrappedObject, QTabWidget::TabPosition  position);
   void setTabShape(QTabWidget* theWrappedObject, QTabWidget::TabShape  s);
   void setTabText(QTabWidget* theWrappedObject, int  index, const QString&  text);
   void setTabToolTip(QTabWidget* theWrappedObject, int  index, const QString&  tip);
   void setTabVisible(QTabWidget* theWrappedObject, int  index, bool  visible);
   void setTabWhatsThis(QTabWidget* theWrappedObject, int  index, const QString&  text);
   void setTabsClosable(QTabWidget* theWrappedObject, bool  closeable);
   void setUsesScrollButtons(QTabWidget* theWrappedObject, bool  useButtons);
   void py_q_showEvent(QTabWidget* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  sizeHint(QTabWidget* theWrappedObject) const;
   QSize  py_q_sizeHint(QTabWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_sizeHint());}
   QTabBar*  tabBar(QTabWidget* theWrappedObject) const;
   bool  tabBarAutoHide(QTabWidget* theWrappedObject) const;
   QIcon  tabIcon(QTabWidget* theWrappedObject, int  index) const;
   void tabInserted(QTabWidget* theWrappedObject, int  index);
   void py_q_tabInserted(QTabWidget* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_tabInserted(index));}
   QTabWidget::TabPosition  tabPosition(QTabWidget* theWrappedObject) const;
   void tabRemoved(QTabWidget* theWrappedObject, int  index);
   void py_q_tabRemoved(QTabWidget* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->py_q_tabRemoved(index));}
   QTabWidget::TabShape  tabShape(QTabWidget* theWrappedObject) const;
   QString  tabText(QTabWidget* theWrappedObject, int  index) const;
   QString  tabToolTip(QTabWidget* theWrappedObject, int  index) const;
   QString  tabWhatsThis(QTabWidget* theWrappedObject, int  index) const;
   bool  tabsClosable(QTabWidget* theWrappedObject) const;
   bool  usesScrollButtons(QTabWidget* theWrappedObject) const;
   QWidget*  widget(QTabWidget* theWrappedObject, int  index) const;
};





class PythonQtShell_QTableView : public QTableView
{
public:
    PythonQtShell_QTableView(QWidget*  parent = nullptr):QTableView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTableView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  p) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setModel(QAbstractItemModel*  model) override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
QStyleOptionViewItem  viewOptions() const override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTableView : public QTableView
{ public:
inline void promoted_columnCountChanged(int  oldCount, int  newCount) { this->columnCountChanged(oldCount, newCount); }
inline void promoted_columnMoved(int  column, int  oldIndex, int  newIndex) { this->columnMoved(column, oldIndex, newIndex); }
inline void promoted_columnResized(int  column, int  oldWidth, int  newWidth) { this->columnResized(column, oldWidth, newWidth); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { this->currentChanged(current, previous); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline void promoted_horizontalScrollbarAction(int  action) { this->horizontalScrollbarAction(action); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return this->moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_rowCountChanged(int  oldCount, int  newCount) { this->rowCountChanged(oldCount, newCount); }
inline void promoted_rowMoved(int  row, int  oldIndex, int  newIndex) { this->rowMoved(row, oldIndex, newIndex); }
inline void promoted_rowResized(int  row, int  oldHeight, int  newHeight) { this->rowResized(row, oldHeight, newHeight); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return this->selectedIndexes(); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { this->selectionChanged(selected, deselected); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline int  promoted_sizeHintForColumn(int  column) const { return this->sizeHintForColumn(column); }
inline int  promoted_sizeHintForRow(int  row) const { return this->sizeHintForRow(row); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void promoted_updateGeometries() { this->updateGeometries(); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline void promoted_verticalScrollbarAction(int  action) { this->verticalScrollbarAction(action); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return this->viewOptions(); }
inline QSize  promoted_viewportSizeHint() const { return this->viewportSizeHint(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTableView::currentChanged(current, previous); }
inline void py_q_doItemsLayout() { QTableView::doItemsLayout(); }
inline int  py_q_horizontalOffset() const { return QTableView::horizontalOffset(); }
inline void py_q_horizontalScrollbarAction(int  action) { QTableView::horizontalScrollbarAction(action); }
inline QModelIndex  py_q_indexAt(const QPoint&  p) const { return QTableView::indexAt(p); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return QTableView::isIndexHidden(index); }
inline QModelIndex  py_q_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return QTableView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void py_q_paintEvent(QPaintEvent*  e) { QTableView::paintEvent(e); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QTableView::scrollContentsBy(dx, dy); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTableView::scrollTo(index, hint); }
inline QList<QModelIndex >  py_q_selectedIndexes() const { return QTableView::selectedIndexes(); }
inline void py_q_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTableView::selectionChanged(selected, deselected); }
inline void py_q_setModel(QAbstractItemModel*  model) { QTableView::setModel(model); }
inline void py_q_setRootIndex(const QModelIndex&  index) { QTableView::setRootIndex(index); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTableView::setSelection(rect, command); }
inline void py_q_setSelectionModel(QItemSelectionModel*  selectionModel) { QTableView::setSelectionModel(selectionModel); }
inline int  py_q_sizeHintForColumn(int  column) const { return QTableView::sizeHintForColumn(column); }
inline int  py_q_sizeHintForRow(int  row) const { return QTableView::sizeHintForRow(row); }
inline void py_q_timerEvent(QTimerEvent*  event) { QTableView::timerEvent(event); }
inline void py_q_updateGeometries() { QTableView::updateGeometries(); }
inline int  py_q_verticalOffset() const { return QTableView::verticalOffset(); }
inline void py_q_verticalScrollbarAction(int  action) { QTableView::verticalScrollbarAction(action); }
inline QStyleOptionViewItem  py_q_viewOptions() const { return QTableView::viewOptions(); }
inline QSize  py_q_viewportSizeHint() const { return QTableView::viewportSizeHint(); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return QTableView::visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return QTableView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QTableView : public QObject
{ Q_OBJECT
public:
public slots:
QTableView* new_QTableView(QWidget*  parent = nullptr);
void delete_QTableView(QTableView* obj) { delete obj; }
   void clearSpans(QTableView* theWrappedObject);
   int  columnAt(QTableView* theWrappedObject, int  x) const;
   int  columnSpan(QTableView* theWrappedObject, int  row, int  column) const;
   int  columnViewportPosition(QTableView* theWrappedObject, int  column) const;
   int  columnWidth(QTableView* theWrappedObject, int  column) const;
   void py_q_currentChanged(QTableView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_currentChanged(current, previous));}
   void py_q_doItemsLayout(QTableView* theWrappedObject){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_doItemsLayout());}
   Qt::PenStyle  gridStyle(QTableView* theWrappedObject) const;
   QHeaderView*  horizontalHeader(QTableView* theWrappedObject) const;
   int  py_q_horizontalOffset(QTableView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_horizontalOffset());}
   void py_q_horizontalScrollbarAction(QTableView* theWrappedObject, int  action){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_horizontalScrollbarAction(action));}
   QModelIndex  py_q_indexAt(QTableView* theWrappedObject, const QPoint&  p) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_indexAt(p));}
   bool  isColumnHidden(QTableView* theWrappedObject, int  column) const;
   bool  isCornerButtonEnabled(QTableView* theWrappedObject) const;
   bool  py_q_isIndexHidden(QTableView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_isIndexHidden(index));}
   bool  isRowHidden(QTableView* theWrappedObject, int  row) const;
   bool  isSortingEnabled(QTableView* theWrappedObject) const;
   QModelIndex  py_q_moveCursor(QTableView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers){  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_moveCursor(cursorAction, modifiers));}
   void py_q_paintEvent(QTableView* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_paintEvent(e));}
   int  rowAt(QTableView* theWrappedObject, int  y) const;
   int  rowHeight(QTableView* theWrappedObject, int  row) const;
   int  rowSpan(QTableView* theWrappedObject, int  row, int  column) const;
   int  rowViewportPosition(QTableView* theWrappedObject, int  row) const;
   void py_q_scrollContentsBy(QTableView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void py_q_scrollTo(QTableView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   QList<QModelIndex >  py_q_selectedIndexes(QTableView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_selectedIndexes());}
   void py_q_selectionChanged(QTableView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_selectionChanged(selected, deselected));}
   void setColumnHidden(QTableView* theWrappedObject, int  column, bool  hide);
   void setColumnWidth(QTableView* theWrappedObject, int  column, int  width);
   void setCornerButtonEnabled(QTableView* theWrappedObject, bool  enable);
   void setGridStyle(QTableView* theWrappedObject, Qt::PenStyle  style);
   void setHorizontalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   void py_q_setModel(QTableView* theWrappedObject, QAbstractItemModel*  model){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_setModel(model));}
   void py_q_setRootIndex(QTableView* theWrappedObject, const QModelIndex&  index){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_setRootIndex(index));}
   void setRowHeight(QTableView* theWrappedObject, int  row, int  height);
   void setRowHidden(QTableView* theWrappedObject, int  row, bool  hide);
   void py_q_setSelection(QTableView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_setSelection(rect, command));}
   void py_q_setSelectionModel(QTableView* theWrappedObject, QItemSelectionModel*  selectionModel){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_setSelectionModel(selectionModel));}
   void setSortingEnabled(QTableView* theWrappedObject, bool  enable);
   void setSpan(QTableView* theWrappedObject, int  row, int  column, int  rowSpan, int  columnSpan);
   void setVerticalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   void setWordWrap(QTableView* theWrappedObject, bool  on);
   bool  showGrid(QTableView* theWrappedObject) const;
   int  py_q_sizeHintForColumn(QTableView* theWrappedObject, int  column) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_sizeHintForColumn(column));}
   int  py_q_sizeHintForRow(QTableView* theWrappedObject, int  row) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_sizeHintForRow(row));}
   void py_q_timerEvent(QTableView* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_timerEvent(event));}
   void py_q_updateGeometries(QTableView* theWrappedObject){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_updateGeometries());}
   QHeaderView*  verticalHeader(QTableView* theWrappedObject) const;
   int  py_q_verticalOffset(QTableView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_verticalOffset());}
   void py_q_verticalScrollbarAction(QTableView* theWrappedObject, int  action){  (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_verticalScrollbarAction(action));}
   QStyleOptionViewItem  py_q_viewOptions(QTableView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_viewOptions());}
   QSize  py_q_viewportSizeHint(QTableView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_viewportSizeHint());}
   QRect  py_q_visualRect(QTableView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  py_q_visualRegionForSelection(QTableView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QTableView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
   bool  wordWrap(QTableView* theWrappedObject) const;
};





class PythonQtShell_QTableWidget : public QTableWidget
{
public:
    PythonQtShell_QTableWidget(QWidget*  parent = nullptr):QTableWidget(parent),_wrapper(nullptr) {};
    PythonQtShell_QTableWidget(int  rows, int  columns, QWidget*  parent = nullptr):QTableWidget(rows, columns, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTableWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
bool  dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  p) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QMimeData*  mimeData(const QList<QTableWidgetItem* >  items) const override;
QStringList  mimeTypes() const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
Qt::DropActions  supportedDropActions() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
QStyleOptionViewItem  viewOptions() const override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTableWidget : public QTableWidget
{ public:
inline void promoted_dropEvent(QDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action) { return this->dropMimeData(row, column, data, action); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline QModelIndex  promoted_indexFromItem(QTableWidgetItem*  item) const { return this->indexFromItem(item); }
inline QModelIndex  promoted_indexFromItem(const QTableWidgetItem*  item) const { return this->indexFromItem(item); }
inline QTableWidgetItem*  promoted_itemFromIndex(const QModelIndex&  index) const { return this->itemFromIndex(index); }
inline QList<QTableWidgetItem* >  promoted_items(const QMimeData*  data) const { return this->items(data); }
inline QMimeData*  promoted_mimeData(const QList<QTableWidgetItem* >  items) const { return this->mimeData(items); }
inline QStringList  promoted_mimeTypes() const { return this->mimeTypes(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return this->supportedDropActions(); }
inline void py_q_dropEvent(QDropEvent*  event) { QTableWidget::dropEvent(event); }
inline bool  py_q_dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action) { return QTableWidget::dropMimeData(row, column, data, action); }
inline bool  py_q_event(QEvent*  e) { return QTableWidget::event(e); }
inline QMimeData*  py_q_mimeData(const QList<QTableWidgetItem* >  items) const { return QTableWidget::mimeData(items); }
inline QStringList  py_q_mimeTypes() const { return QTableWidget::mimeTypes(); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QTableWidget::supportedDropActions(); }
};

class PythonQtWrapper_QTableWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidget* new_QTableWidget(QWidget*  parent = nullptr);
QTableWidget* new_QTableWidget(int  rows, int  columns, QWidget*  parent = nullptr);
void delete_QTableWidget(QTableWidget* obj) { delete obj; }
   QWidget*  cellWidget(QTableWidget* theWrappedObject, int  row, int  column) const;
   void closePersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   int  column(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  columnCount(QTableWidget* theWrappedObject) const;
   int  currentColumn(QTableWidget* theWrappedObject) const;
   QTableWidgetItem*  currentItem(QTableWidget* theWrappedObject) const;
   int  currentRow(QTableWidget* theWrappedObject) const;
   void py_q_dropEvent(QTableWidget* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_dropEvent(event));}
   bool  dropMimeData(QTableWidget* theWrappedObject, int  row, int  column, const QMimeData*  data, Qt::DropAction  action);
   bool  py_q_dropMimeData(QTableWidget* theWrappedObject, int  row, int  column, const QMimeData*  data, Qt::DropAction  action){  return (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_dropMimeData(row, column, data, action));}
   void editItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   bool  py_q_event(QTableWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_event(e));}
   QList<QTableWidgetItem* >  findItems(QTableWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const;
   QTableWidgetItem*  horizontalHeaderItem(QTableWidget* theWrappedObject, int  column) const;
   QModelIndex  indexFromItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item) const;
   QModelIndex  indexFromItem(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   bool  isPersistentEditorOpen(QTableWidget* theWrappedObject, QTableWidgetItem*  item) const;
   QTableWidgetItem*  item(QTableWidget* theWrappedObject, int  row, int  column) const;
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, const QPoint&  p) const;
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, int  x, int  y) const;
   QTableWidgetItem*  itemFromIndex(QTableWidget* theWrappedObject, const QModelIndex&  index) const;
   const QTableWidgetItem*  itemPrototype(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetItem* >  items(QTableWidget* theWrappedObject, const QMimeData*  data) const;
   PythonQtPassOwnershipToPython<QMimeData*  > mimeData(QTableWidget* theWrappedObject, const QList<QTableWidgetItem* >  items) const;
   PythonQtPassOwnershipToPython<QMimeData*  > py_q_mimeData(QTableWidget* theWrappedObject, const QList<QTableWidgetItem* >  items) const{  return (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_mimeData(items));}
   QStringList  mimeTypes(QTableWidget* theWrappedObject) const;
   QStringList  py_q_mimeTypes(QTableWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_mimeTypes());}
   void openPersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   void removeCellWidget(QTableWidget* theWrappedObject, int  row, int  column);
   int  row(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  rowCount(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetItem* >  selectedItems(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetSelectionRange >  selectedRanges(QTableWidget* theWrappedObject) const;
   void setCellWidget(QTableWidget* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setColumnCount(QTableWidget* theWrappedObject, int  columns);
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column);
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column, QItemSelectionModel::SelectionFlags  command);
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item, QItemSelectionModel::SelectionFlags  command);
   void setHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item);
   void setHorizontalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   void setItem(QTableWidget* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item);
   void setItemPrototype(QTableWidget* theWrappedObject, PythonQtPassOwnershipToCPP<const QTableWidgetItem* >  item);
   void setRangeSelected(QTableWidget* theWrappedObject, const QTableWidgetSelectionRange&  range, bool  select);
   void setRowCount(QTableWidget* theWrappedObject, int  rows);
   void setVerticalHeaderItem(QTableWidget* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item);
   void setVerticalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   void sortItems(QTableWidget* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   Qt::DropActions  supportedDropActions(QTableWidget* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QTableWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->py_q_supportedDropActions());}
   PythonQtPassOwnershipToPython<QTableWidgetItem*  > takeHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column);
   PythonQtPassOwnershipToPython<QTableWidgetItem*  > takeItem(QTableWidget* theWrappedObject, int  row, int  column);
   PythonQtPassOwnershipToPython<QTableWidgetItem*  > takeVerticalHeaderItem(QTableWidget* theWrappedObject, int  row);
   QTableWidgetItem*  verticalHeaderItem(QTableWidget* theWrappedObject, int  row) const;
   int  visualColumn(QTableWidget* theWrappedObject, int  logicalColumn) const;
   QRect  visualItemRect(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   int  visualRow(QTableWidget* theWrappedObject, int  logicalRow) const;
};





class PythonQtShell_QTableWidgetItem : public QTableWidgetItem
{
public:
    PythonQtShell_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type):QTableWidgetItem(icon, text, type),_wrapper(nullptr) {};
    PythonQtShell_QTableWidgetItem(const QString&  text, int  type = Type):QTableWidgetItem(text, type),_wrapper(nullptr) {};
    PythonQtShell_QTableWidgetItem(int  type = Type):QTableWidgetItem(type),_wrapper(nullptr) {};

   ~PythonQtShell_QTableWidgetItem() override;

QTableWidgetItem*  clone() const override;
QVariant  data(int  role) const override;
void read(QDataStream&  in) override;
void setData(int  role, const QVariant&  value) override;
void write(QDataStream&  out) const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTableWidgetItem : public QTableWidgetItem
{ public:
inline QTableWidgetItem*  py_q_clone() const { return QTableWidgetItem::clone(); }
inline QVariant  py_q_data(int  role) const { return QTableWidgetItem::data(role); }
inline void py_q_read(QDataStream&  in) { QTableWidgetItem::read(in); }
inline void py_q_setData(int  role, const QVariant&  value) { QTableWidgetItem::setData(role, value); }
inline void py_q_write(QDataStream&  out) const { QTableWidgetItem::write(out); }
};

class PythonQtWrapper_QTableWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QTableWidgetItem::Type,   UserType = QTableWidgetItem::UserType};
public slots:
QTableWidgetItem* new_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(int  type = Type);
void delete_QTableWidgetItem(QTableWidgetItem* obj) { delete obj; }
   QBrush  background(QTableWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QTableWidgetItem* theWrappedObject) const;
   QTableWidgetItem*  clone(QTableWidgetItem* theWrappedObject) const;
   QTableWidgetItem*  py_q_clone(QTableWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->py_q_clone());}
   int  column(QTableWidgetItem* theWrappedObject) const;
   QVariant  data(QTableWidgetItem* theWrappedObject, int  role) const;
   QVariant  py_q_data(QTableWidgetItem* theWrappedObject, int  role) const{  return (((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->py_q_data(role));}
   Qt::ItemFlags  flags(QTableWidgetItem* theWrappedObject) const;
   QFont  font(QTableWidgetItem* theWrappedObject) const;
   QBrush  foreground(QTableWidgetItem* theWrappedObject) const;
   QIcon  icon(QTableWidgetItem* theWrappedObject) const;
   bool  isSelected(QTableWidgetItem* theWrappedObject) const;
   void writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in);
   void read(QTableWidgetItem* theWrappedObject, QDataStream&  in);
   void py_q_read(QTableWidgetItem* theWrappedObject, QDataStream&  in){  (((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->py_q_read(in));}
   int  row(QTableWidgetItem* theWrappedObject) const;
   void setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   void py_q_setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value){  (((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->py_q_setData(role, value));}
   void setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QTableWidgetItem* theWrappedObject, const QFont&  font);
   void setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon);
   void setSelected(QTableWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size);
   void setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip);
   void setText(QTableWidgetItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment);
   void setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip);
   void setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QTableWidgetItem* theWrappedObject) const;
   QString  statusTip(QTableWidgetItem* theWrappedObject) const;
   QTableWidget*  tableWidget(QTableWidgetItem* theWrappedObject) const;
   QString  text(QTableWidgetItem* theWrappedObject) const;
   int  textAlignment(QTableWidgetItem* theWrappedObject) const;
   QString  toolTip(QTableWidgetItem* theWrappedObject) const;
   int  type(QTableWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTableWidgetItem* theWrappedObject) const;
   void write(QTableWidgetItem* theWrappedObject, QDataStream&  out) const;
   void py_q_write(QTableWidgetItem* theWrappedObject, QDataStream&  out) const{  (((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->py_q_write(out));}
};





class PythonQtWrapper_QTableWidgetSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange();
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange(const QTableWidgetSelectionRange&  other);
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange(int  top, int  left, int  bottom, int  right);
void delete_QTableWidgetSelectionRange(QTableWidgetSelectionRange* obj) { delete obj; }
   int  bottomRow(QTableWidgetSelectionRange* theWrappedObject) const;
   int  columnCount(QTableWidgetSelectionRange* theWrappedObject) const;
   int  leftColumn(QTableWidgetSelectionRange* theWrappedObject) const;
   QTableWidgetSelectionRange*  operator_assign(QTableWidgetSelectionRange* theWrappedObject, const QTableWidgetSelectionRange&  other);
   int  rightColumn(QTableWidgetSelectionRange* theWrappedObject) const;
   int  rowCount(QTableWidgetSelectionRange* theWrappedObject) const;
   int  topRow(QTableWidgetSelectionRange* theWrappedObject) const;
};





class PythonQtShell_QTabletEvent : public QTabletEvent
{
public:
    PythonQtShell_QTabletEvent(QEvent::Type  t, const QPointF&  pos, const QPointF&  globalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID):QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID),_wrapper(nullptr) {};
    PythonQtShell_QTabletEvent(QEvent::Type  t, const QPointF&  pos, const QPointF&  globalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID, Qt::MouseButton  button, Qt::MouseButtons  buttons):QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID, button, buttons),_wrapper(nullptr) {};

   ~PythonQtShell_QTabletEvent() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTabletEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PointerType TabletDevice )
enum PointerType{
  UnknownPointer = QTabletEvent::UnknownPointer,   Pen = QTabletEvent::Pen,   Cursor = QTabletEvent::Cursor,   Eraser = QTabletEvent::Eraser};
enum TabletDevice{
  NoDevice = QTabletEvent::NoDevice,   Puck = QTabletEvent::Puck,   Stylus = QTabletEvent::Stylus,   Airbrush = QTabletEvent::Airbrush,   FourDMouse = QTabletEvent::FourDMouse,   XFreeEraser = QTabletEvent::XFreeEraser,   RotationStylus = QTabletEvent::RotationStylus};
public slots:
QTabletEvent* new_QTabletEvent(QEvent::Type  t, const QPointF&  pos, const QPointF&  globalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID);
QTabletEvent* new_QTabletEvent(QEvent::Type  t, const QPointF&  pos, const QPointF&  globalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID, Qt::MouseButton  button, Qt::MouseButtons  buttons);
void delete_QTabletEvent(QTabletEvent* obj) { delete obj; }
   Qt::MouseButton  button(QTabletEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QTabletEvent* theWrappedObject) const;
   QTabletEvent::TabletDevice  device(QTabletEvent* theWrappedObject) const;
   QTabletEvent::TabletDevice  deviceType(QTabletEvent* theWrappedObject) const;
   QPoint  globalPos(QTabletEvent* theWrappedObject) const;
   const QPointF*  globalPosF(QTabletEvent* theWrappedObject) const;
   int  globalX(QTabletEvent* theWrappedObject) const;
   int  globalY(QTabletEvent* theWrappedObject) const;
   qreal  hiResGlobalX(QTabletEvent* theWrappedObject) const;
   qreal  hiResGlobalY(QTabletEvent* theWrappedObject) const;
   QTabletEvent::PointerType  pointerType(QTabletEvent* theWrappedObject) const;
   QPoint  pos(QTabletEvent* theWrappedObject) const;
   const QPointF*  posF(QTabletEvent* theWrappedObject) const;
   qreal  pressure(QTabletEvent* theWrappedObject) const;
   qreal  rotation(QTabletEvent* theWrappedObject) const;
   qreal  tangentialPressure(QTabletEvent* theWrappedObject) const;
   qint64  uniqueId(QTabletEvent* theWrappedObject) const;
   int  x(QTabletEvent* theWrappedObject) const;
   int  xTilt(QTabletEvent* theWrappedObject) const;
   int  y(QTabletEvent* theWrappedObject) const;
   int  yTilt(QTabletEvent* theWrappedObject) const;
   int  z(QTabletEvent* theWrappedObject) const;
};





class PythonQtShell_QTapAndHoldGesture : public QTapAndHoldGesture
{
public:
    PythonQtShell_QTapAndHoldGesture(QObject*  parent = nullptr):QTapAndHoldGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTapAndHoldGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTapAndHoldGesture : public QObject
{ Q_OBJECT
public:
public slots:
QTapAndHoldGesture* new_QTapAndHoldGesture(QObject*  parent = nullptr);
void delete_QTapAndHoldGesture(QTapAndHoldGesture* obj) { delete obj; }
   QPointF  position(QTapAndHoldGesture* theWrappedObject) const;
   void setPosition(QTapAndHoldGesture* theWrappedObject, const QPointF&  pos);
   void static_QTapAndHoldGesture_setTimeout(int  msecs);
   int  static_QTapAndHoldGesture_timeout();
};





class PythonQtShell_QTapGesture : public QTapGesture
{
public:
    PythonQtShell_QTapGesture(QObject*  parent = nullptr):QTapGesture(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTapGesture() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTapGesture : public QObject
{ Q_OBJECT
public:
public slots:
QTapGesture* new_QTapGesture(QObject*  parent = nullptr);
void delete_QTapGesture(QTapGesture* obj) { delete obj; }
   QPointF  position(QTapGesture* theWrappedObject) const;
   void setPosition(QTapGesture* theWrappedObject, const QPointF&  pos);
};





class PythonQtWrapper_QTextBlock : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlock* new_QTextBlock();
QTextBlock* new_QTextBlock(const QTextBlock&  o);
void delete_QTextBlock(QTextBlock* obj) { delete obj; }
   QTextBlock::iterator  begin(QTextBlock* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextBlock* theWrappedObject) const;
   int  blockFormatIndex(QTextBlock* theWrappedObject) const;
   int  blockNumber(QTextBlock* theWrappedObject) const;
   QTextCharFormat  charFormat(QTextBlock* theWrappedObject) const;
   int  charFormatIndex(QTextBlock* theWrappedObject) const;
   void clearLayout(QTextBlock* theWrappedObject);
   bool  contains(QTextBlock* theWrappedObject, int  position) const;
   const QTextDocument*  document(QTextBlock* theWrappedObject) const;
   QTextBlock::iterator  end(QTextBlock* theWrappedObject) const;
   int  firstLineNumber(QTextBlock* theWrappedObject) const;
   int  fragmentIndex(QTextBlock* theWrappedObject) const;
   bool  isValid(QTextBlock* theWrappedObject) const;
   bool  isVisible(QTextBlock* theWrappedObject) const;
   QTextLayout*  layout(QTextBlock* theWrappedObject) const;
   int  length(QTextBlock* theWrappedObject) const;
   int  lineCount(QTextBlock* theWrappedObject) const;
   QTextBlock  next(QTextBlock* theWrappedObject) const;
   bool  __ne__(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   bool  __lt__(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   bool  __eq__(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   int  position(QTextBlock* theWrappedObject) const;
   QTextBlock  previous(QTextBlock* theWrappedObject) const;
   int  revision(QTextBlock* theWrappedObject) const;
   void setLineCount(QTextBlock* theWrappedObject, int  count);
   void setRevision(QTextBlock* theWrappedObject, int  rev);
   void setUserData(QTextBlock* theWrappedObject, QTextBlockUserData*  data);
   void setUserState(QTextBlock* theWrappedObject, int  state);
   void setVisible(QTextBlock* theWrappedObject, bool  visible);
   QString  text(QTextBlock* theWrappedObject) const;
   Qt::LayoutDirection  textDirection(QTextBlock* theWrappedObject) const;
   QVector<QTextLayout::FormatRange >  textFormats(QTextBlock* theWrappedObject) const;
   QTextList*  textList(QTextBlock* theWrappedObject) const;
   QTextBlockUserData*  userData(QTextBlock* theWrappedObject) const;
   int  userState(QTextBlock* theWrappedObject) const;
    bool __nonzero__(QTextBlock* obj) { return obj->isValid(); }
};





class PythonQtShell_QTextBlockFormat : public QTextBlockFormat
{
public:
    PythonQtShell_QTextBlockFormat():QTextBlockFormat(),_wrapper(nullptr) {};
    PythonQtShell_QTextBlockFormat(const QTextFormat&  fmt):QTextBlockFormat(fmt),_wrapper(nullptr) {};

   ~PythonQtShell_QTextBlockFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextBlockFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LineHeightTypes MarkerType )
enum LineHeightTypes{
  SingleHeight = QTextBlockFormat::SingleHeight,   ProportionalHeight = QTextBlockFormat::ProportionalHeight,   FixedHeight = QTextBlockFormat::FixedHeight,   MinimumHeight = QTextBlockFormat::MinimumHeight,   LineDistanceHeight = QTextBlockFormat::LineDistanceHeight};
enum class MarkerType{
  NoMarker = static_cast<int>(QTextBlockFormat::MarkerType::NoMarker),   Unchecked = static_cast<int>(QTextBlockFormat::MarkerType::Unchecked),   Checked = static_cast<int>(QTextBlockFormat::MarkerType::Checked)};
public slots:
QTextBlockFormat* new_QTextBlockFormat();
QTextBlockFormat* new_QTextBlockFormat(const QTextFormat&  fmt);
QTextBlockFormat* new_QTextBlockFormat(const QTextBlockFormat& other) {
PythonQtShell_QTextBlockFormat* a = new PythonQtShell_QTextBlockFormat();
*((QTextBlockFormat*)a) = other;
return a; }
void delete_QTextBlockFormat(QTextBlockFormat* obj) { delete obj; }
   Qt::Alignment  alignment(QTextBlockFormat* theWrappedObject) const;
   qreal  bottomMargin(QTextBlockFormat* theWrappedObject) const;
   int  headingLevel(QTextBlockFormat* theWrappedObject) const;
   int  indent(QTextBlockFormat* theWrappedObject) const;
   bool  isValid(QTextBlockFormat* theWrappedObject) const;
   qreal  leftMargin(QTextBlockFormat* theWrappedObject) const;
   qreal  lineHeight(QTextBlockFormat* theWrappedObject) const;
   qreal  lineHeight(QTextBlockFormat* theWrappedObject, qreal  scriptLineHeight, qreal  scaling) const;
   int  lineHeightType(QTextBlockFormat* theWrappedObject) const;
   QTextBlockFormat::MarkerType  marker(QTextBlockFormat* theWrappedObject) const;
   bool  nonBreakableLines(QTextBlockFormat* theWrappedObject) const;
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextBlockFormat* theWrappedObject) const;
   qreal  rightMargin(QTextBlockFormat* theWrappedObject) const;
   void setAlignment(QTextBlockFormat* theWrappedObject, Qt::Alignment  alignment);
   void setBottomMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setHeadingLevel(QTextBlockFormat* theWrappedObject, int  alevel);
   void setIndent(QTextBlockFormat* theWrappedObject, int  indent);
   void setLeftMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setLineHeight(QTextBlockFormat* theWrappedObject, qreal  height, int  heightType);
   void setMarker(QTextBlockFormat* theWrappedObject, QTextBlockFormat::MarkerType  marker);
   void setNonBreakableLines(QTextBlockFormat* theWrappedObject, bool  b);
   void setPageBreakPolicy(QTextBlockFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   void setRightMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setTabPositions(QTextBlockFormat* theWrappedObject, const QList<QTextOption::Tab >&  tabs);
   void setTextIndent(QTextBlockFormat* theWrappedObject, qreal  aindent);
   void setTopMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   QList<QTextOption::Tab >  tabPositions(QTextBlockFormat* theWrappedObject) const;
   qreal  textIndent(QTextBlockFormat* theWrappedObject) const;
   qreal  topMargin(QTextBlockFormat* theWrappedObject) const;
    bool __nonzero__(QTextBlockFormat* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QTextBlockGroup : public QTextBlockGroup
{
public:
    PythonQtShell_QTextBlockGroup(QTextDocument*  doc):QTextBlockGroup(doc),_wrapper(nullptr) {};

   ~PythonQtShell_QTextBlockGroup() override;

void blockFormatChanged(const QTextBlock&  block) override;
void blockInserted(const QTextBlock&  block) override;
void blockRemoved(const QTextBlock&  block) override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTextBlockGroup : public QTextBlockGroup
{ public:
inline void promoted_blockFormatChanged(const QTextBlock&  block) { this->blockFormatChanged(block); }
inline void promoted_blockInserted(const QTextBlock&  block) { this->blockInserted(block); }
inline QList<QTextBlock >  promoted_blockList() const { return this->blockList(); }
inline void promoted_blockRemoved(const QTextBlock&  block) { this->blockRemoved(block); }
inline void py_q_blockFormatChanged(const QTextBlock&  block) { QTextBlockGroup::blockFormatChanged(block); }
inline void py_q_blockInserted(const QTextBlock&  block) { QTextBlockGroup::blockInserted(block); }
inline void py_q_blockRemoved(const QTextBlock&  block) { QTextBlockGroup::blockRemoved(block); }
};

class PythonQtWrapper_QTextBlockGroup : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlockGroup* new_QTextBlockGroup(QTextDocument*  doc);
   void blockFormatChanged(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   void py_q_blockFormatChanged(QTextBlockGroup* theWrappedObject, const QTextBlock&  block){  (((PythonQtPublicPromoter_QTextBlockGroup*)theWrappedObject)->py_q_blockFormatChanged(block));}
   void blockInserted(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   void py_q_blockInserted(QTextBlockGroup* theWrappedObject, const QTextBlock&  block){  (((PythonQtPublicPromoter_QTextBlockGroup*)theWrappedObject)->py_q_blockInserted(block));}
   QList<QTextBlock >  blockList(QTextBlockGroup* theWrappedObject) const;
   void blockRemoved(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   void py_q_blockRemoved(QTextBlockGroup* theWrappedObject, const QTextBlock&  block){  (((PythonQtPublicPromoter_QTextBlockGroup*)theWrappedObject)->py_q_blockRemoved(block));}
};





class PythonQtShell_QTextBlockUserData : public QTextBlockUserData
{
public:
    PythonQtShell_QTextBlockUserData():QTextBlockUserData(),_wrapper(nullptr) {};

   ~PythonQtShell_QTextBlockUserData() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextBlockUserData : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlockUserData* new_QTextBlockUserData();
void delete_QTextBlockUserData(QTextBlockUserData* obj) { delete obj; }
};





class PythonQtShell_QTextBrowser : public QTextBrowser
{
public:
    PythonQtShell_QTextBrowser(QWidget*  parent = nullptr):QTextBrowser(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTextBrowser() override;

void actionEvent(QActionEvent*  event) override;
void backward() override;
bool  canInsertFromMimeData(const QMimeData*  source) const override;
void changeEvent(QEvent*  e) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  e) override;
QMimeData*  createMimeDataFromSelection() const override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void doSetTextCursor(const QTextCursor&  cursor) override;
void dragEnterEvent(QDragEnterEvent*  e) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  e) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  ev) override;
void forward() override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void home() override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const override;
void insertFromMimeData(const QMimeData*  source) override;
void keyPressEvent(QKeyEvent*  ev) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
QVariant  loadResource(int  type, const QUrl&  name) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  e) override;
void mouseMoveEvent(QMouseEvent*  ev) override;
void mousePressEvent(QMouseEvent*  ev) override;
void mouseReleaseEvent(QMouseEvent*  ev) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reload() override;
void resizeEvent(QResizeEvent*  e) override;
void scrollContentsBy(int  dx, int  dy) override;
void setSource(const QUrl&  name) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
bool  viewportEvent(QEvent*  arg__1) override;
QSize  viewportSizeHint() const override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTextBrowser : public QTextBrowser
{ public:
inline void promoted_doSetSource(const QUrl&  name, QTextDocument::ResourceType  type = QTextDocument::UnknownResource) { this->doSetSource(name, type); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { this->focusOutEvent(ev); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { this->keyPressEvent(ev); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { this->mouseMoveEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { this->mousePressEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { this->mouseReleaseEvent(ev); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void py_q_backward() { QTextBrowser::backward(); }
inline bool  py_q_event(QEvent*  e) { return QTextBrowser::event(e); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QTextBrowser::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  ev) { QTextBrowser::focusOutEvent(ev); }
inline void py_q_forward() { QTextBrowser::forward(); }
inline void py_q_home() { QTextBrowser::home(); }
inline void py_q_keyPressEvent(QKeyEvent*  ev) { QTextBrowser::keyPressEvent(ev); }
inline QVariant  py_q_loadResource(int  type, const QUrl&  name) { return QTextBrowser::loadResource(type, name); }
inline void py_q_mouseMoveEvent(QMouseEvent*  ev) { QTextBrowser::mouseMoveEvent(ev); }
inline void py_q_mousePressEvent(QMouseEvent*  ev) { QTextBrowser::mousePressEvent(ev); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  ev) { QTextBrowser::mouseReleaseEvent(ev); }
inline void py_q_paintEvent(QPaintEvent*  e) { QTextBrowser::paintEvent(e); }
inline void py_q_reload() { QTextBrowser::reload(); }
inline void py_q_setSource(const QUrl&  name) { QTextBrowser::setSource(name); }
};

class PythonQtWrapper_QTextBrowser : public QObject
{ Q_OBJECT
public:
public slots:
QTextBrowser* new_QTextBrowser(QWidget*  parent = nullptr);
void delete_QTextBrowser(QTextBrowser* obj) { delete obj; }
   void py_q_backward(QTextBrowser* theWrappedObject){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_backward());}
   int  backwardHistoryCount(QTextBrowser* theWrappedObject) const;
   void clearHistory(QTextBrowser* theWrappedObject);
   void doSetSource(QTextBrowser* theWrappedObject, const QUrl&  name, QTextDocument::ResourceType  type = QTextDocument::UnknownResource);
   bool  py_q_event(QTextBrowser* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_event(e));}
   bool  py_q_focusNextPrevChild(QTextBrowser* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QTextBrowser* theWrappedObject, QFocusEvent*  ev){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_focusOutEvent(ev));}
   void py_q_forward(QTextBrowser* theWrappedObject){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_forward());}
   int  forwardHistoryCount(QTextBrowser* theWrappedObject) const;
   QString  historyTitle(QTextBrowser* theWrappedObject, int  arg__1) const;
   QUrl  historyUrl(QTextBrowser* theWrappedObject, int  arg__1) const;
   void py_q_home(QTextBrowser* theWrappedObject){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_home());}
   bool  isBackwardAvailable(QTextBrowser* theWrappedObject) const;
   bool  isForwardAvailable(QTextBrowser* theWrappedObject) const;
   void py_q_keyPressEvent(QTextBrowser* theWrappedObject, QKeyEvent*  ev){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_keyPressEvent(ev));}
   QVariant  py_q_loadResource(QTextBrowser* theWrappedObject, int  type, const QUrl&  name){  return (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_loadResource(type, name));}
   void py_q_mouseMoveEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_mouseMoveEvent(ev));}
   void py_q_mousePressEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_mousePressEvent(ev));}
   void py_q_mouseReleaseEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_mouseReleaseEvent(ev));}
   bool  openExternalLinks(QTextBrowser* theWrappedObject) const;
   bool  openLinks(QTextBrowser* theWrappedObject) const;
   void py_q_paintEvent(QTextBrowser* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_paintEvent(e));}
   void py_q_reload(QTextBrowser* theWrappedObject){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_reload());}
   QStringList  searchPaths(QTextBrowser* theWrappedObject) const;
   void setOpenExternalLinks(QTextBrowser* theWrappedObject, bool  open);
   void setOpenLinks(QTextBrowser* theWrappedObject, bool  open);
   void setSearchPaths(QTextBrowser* theWrappedObject, const QStringList&  paths);
   void py_q_setSource(QTextBrowser* theWrappedObject, const QUrl&  name){  (((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->py_q_setSource(name));}
   QUrl  source(QTextBrowser* theWrappedObject) const;
   QTextDocument::ResourceType  sourceType(QTextBrowser* theWrappedObject) const;
};





class PythonQtShell_QTextCharFormat : public QTextCharFormat
{
public:
    PythonQtShell_QTextCharFormat():QTextCharFormat(),_wrapper(nullptr) {};
    PythonQtShell_QTextCharFormat(const QTextFormat&  fmt):QTextCharFormat(fmt),_wrapper(nullptr) {};

   ~PythonQtShell_QTextCharFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextCharFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontPropertiesInheritanceBehavior UnderlineStyle VerticalAlignment )
enum FontPropertiesInheritanceBehavior{
  FontPropertiesSpecifiedOnly = QTextCharFormat::FontPropertiesSpecifiedOnly,   FontPropertiesAll = QTextCharFormat::FontPropertiesAll};
enum UnderlineStyle{
  NoUnderline = QTextCharFormat::NoUnderline,   SingleUnderline = QTextCharFormat::SingleUnderline,   DashUnderline = QTextCharFormat::DashUnderline,   DotLine = QTextCharFormat::DotLine,   DashDotLine = QTextCharFormat::DashDotLine,   DashDotDotLine = QTextCharFormat::DashDotDotLine,   WaveUnderline = QTextCharFormat::WaveUnderline,   SpellCheckUnderline = QTextCharFormat::SpellCheckUnderline};
enum VerticalAlignment{
  AlignNormal = QTextCharFormat::AlignNormal,   AlignSuperScript = QTextCharFormat::AlignSuperScript,   AlignSubScript = QTextCharFormat::AlignSubScript,   AlignMiddle = QTextCharFormat::AlignMiddle,   AlignTop = QTextCharFormat::AlignTop,   AlignBottom = QTextCharFormat::AlignBottom,   AlignBaseline = QTextCharFormat::AlignBaseline};
public slots:
QTextCharFormat* new_QTextCharFormat();
QTextCharFormat* new_QTextCharFormat(const QTextFormat&  fmt);
QTextCharFormat* new_QTextCharFormat(const QTextCharFormat& other) {
PythonQtShell_QTextCharFormat* a = new PythonQtShell_QTextCharFormat();
*((QTextCharFormat*)a) = other;
return a; }
void delete_QTextCharFormat(QTextCharFormat* obj) { delete obj; }
   QString  anchorHref(QTextCharFormat* theWrappedObject) const;
   QStringList  anchorNames(QTextCharFormat* theWrappedObject) const;
   QFont  font(QTextCharFormat* theWrappedObject) const;
   QFont::Capitalization  fontCapitalization(QTextCharFormat* theWrappedObject) const;
   QVariant  fontFamilies(QTextCharFormat* theWrappedObject) const;
   QString  fontFamily(QTextCharFormat* theWrappedObject) const;
   bool  fontFixedPitch(QTextCharFormat* theWrappedObject) const;
   QFont::HintingPreference  fontHintingPreference(QTextCharFormat* theWrappedObject) const;
   bool  fontItalic(QTextCharFormat* theWrappedObject) const;
   bool  fontKerning(QTextCharFormat* theWrappedObject) const;
   qreal  fontLetterSpacing(QTextCharFormat* theWrappedObject) const;
   QFont::SpacingType  fontLetterSpacingType(QTextCharFormat* theWrappedObject) const;
   bool  fontOverline(QTextCharFormat* theWrappedObject) const;
   qreal  fontPointSize(QTextCharFormat* theWrappedObject) const;
   int  fontStretch(QTextCharFormat* theWrappedObject) const;
   bool  fontStrikeOut(QTextCharFormat* theWrappedObject) const;
   QFont::StyleHint  fontStyleHint(QTextCharFormat* theWrappedObject) const;
   QVariant  fontStyleName(QTextCharFormat* theWrappedObject) const;
   QFont::StyleStrategy  fontStyleStrategy(QTextCharFormat* theWrappedObject) const;
   bool  fontUnderline(QTextCharFormat* theWrappedObject) const;
   int  fontWeight(QTextCharFormat* theWrappedObject) const;
   qreal  fontWordSpacing(QTextCharFormat* theWrappedObject) const;
   bool  isAnchor(QTextCharFormat* theWrappedObject) const;
   bool  isValid(QTextCharFormat* theWrappedObject) const;
   void setAnchor(QTextCharFormat* theWrappedObject, bool  anchor);
   void setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value);
   void setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names);
   void setFont(QTextCharFormat* theWrappedObject, const QFont&  font);
   void setFont(QTextCharFormat* theWrappedObject, const QFont&  font, QTextCharFormat::FontPropertiesInheritanceBehavior  behavior);
   void setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization);
   void setFontFamilies(QTextCharFormat* theWrappedObject, const QStringList&  families);
   void setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family);
   void setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch);
   void setFontHintingPreference(QTextCharFormat* theWrappedObject, QFont::HintingPreference  hintingPreference);
   void setFontItalic(QTextCharFormat* theWrappedObject, bool  italic);
   void setFontKerning(QTextCharFormat* theWrappedObject, bool  enable);
   void setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   void setFontLetterSpacingType(QTextCharFormat* theWrappedObject, QFont::SpacingType  letterSpacingType);
   void setFontOverline(QTextCharFormat* theWrappedObject, bool  overline);
   void setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size);
   void setFontStretch(QTextCharFormat* theWrappedObject, int  factor);
   void setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut);
   void setFontStyleHint(QTextCharFormat* theWrappedObject, QFont::StyleHint  hint, QFont::StyleStrategy  strategy = QFont::PreferDefault);
   void setFontStyleName(QTextCharFormat* theWrappedObject, const QString&  styleName);
   void setFontStyleStrategy(QTextCharFormat* theWrappedObject, QFont::StyleStrategy  strategy);
   void setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline);
   void setFontWeight(QTextCharFormat* theWrappedObject, int  weight);
   void setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   void setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan);
   void setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan);
   void setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen);
   void setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip);
   void setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color);
   void setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style);
   void setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment);
   int  tableCellColumnSpan(QTextCharFormat* theWrappedObject) const;
   int  tableCellRowSpan(QTextCharFormat* theWrappedObject) const;
   QPen  textOutline(QTextCharFormat* theWrappedObject) const;
   QString  toolTip(QTextCharFormat* theWrappedObject) const;
   QColor  underlineColor(QTextCharFormat* theWrappedObject) const;
   QTextCharFormat::UnderlineStyle  underlineStyle(QTextCharFormat* theWrappedObject) const;
   QTextCharFormat::VerticalAlignment  verticalAlignment(QTextCharFormat* theWrappedObject) const;
    bool __nonzero__(QTextCharFormat* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QTextCursor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MoveMode MoveOperation SelectionType )
enum MoveMode{
  MoveAnchor = QTextCursor::MoveAnchor,   KeepAnchor = QTextCursor::KeepAnchor};
enum MoveOperation{
  NoMove = QTextCursor::NoMove,   Start = QTextCursor::Start,   Up = QTextCursor::Up,   StartOfLine = QTextCursor::StartOfLine,   StartOfBlock = QTextCursor::StartOfBlock,   StartOfWord = QTextCursor::StartOfWord,   PreviousBlock = QTextCursor::PreviousBlock,   PreviousCharacter = QTextCursor::PreviousCharacter,   PreviousWord = QTextCursor::PreviousWord,   Left = QTextCursor::Left,   WordLeft = QTextCursor::WordLeft,   End = QTextCursor::End,   Down = QTextCursor::Down,   EndOfLine = QTextCursor::EndOfLine,   EndOfWord = QTextCursor::EndOfWord,   EndOfBlock = QTextCursor::EndOfBlock,   NextBlock = QTextCursor::NextBlock,   NextCharacter = QTextCursor::NextCharacter,   NextWord = QTextCursor::NextWord,   Right = QTextCursor::Right,   WordRight = QTextCursor::WordRight,   NextCell = QTextCursor::NextCell,   PreviousCell = QTextCursor::PreviousCell,   NextRow = QTextCursor::NextRow,   PreviousRow = QTextCursor::PreviousRow};
enum SelectionType{
  WordUnderCursor = QTextCursor::WordUnderCursor,   LineUnderCursor = QTextCursor::LineUnderCursor,   BlockUnderCursor = QTextCursor::BlockUnderCursor,   Document = QTextCursor::Document};
public slots:
QTextCursor* new_QTextCursor();
QTextCursor* new_QTextCursor(QTextDocument*  document);
QTextCursor* new_QTextCursor(QTextFrame*  frame);
QTextCursor* new_QTextCursor(const QTextBlock&  block);
QTextCursor* new_QTextCursor(const QTextCursor&  cursor);
void delete_QTextCursor(QTextCursor* obj) { delete obj; }
   int  anchor(QTextCursor* theWrappedObject) const;
   bool  atBlockEnd(QTextCursor* theWrappedObject) const;
   bool  atBlockStart(QTextCursor* theWrappedObject) const;
   bool  atEnd(QTextCursor* theWrappedObject) const;
   bool  atStart(QTextCursor* theWrappedObject) const;
   void beginEditBlock(QTextCursor* theWrappedObject);
   QTextBlock  block(QTextCursor* theWrappedObject) const;
   QTextCharFormat  blockCharFormat(QTextCursor* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextCursor* theWrappedObject) const;
   int  blockNumber(QTextCursor* theWrappedObject) const;
   QTextCharFormat  charFormat(QTextCursor* theWrappedObject) const;
   void clearSelection(QTextCursor* theWrappedObject);
   int  columnNumber(QTextCursor* theWrappedObject) const;
   QTextList*  createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   QTextList*  createList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   QTextFrame*  currentFrame(QTextCursor* theWrappedObject) const;
   QTextList*  currentList(QTextCursor* theWrappedObject) const;
   QTextTable*  currentTable(QTextCursor* theWrappedObject) const;
   void deleteChar(QTextCursor* theWrappedObject);
   void deletePreviousChar(QTextCursor* theWrappedObject);
   QTextDocument*  document(QTextCursor* theWrappedObject) const;
   void endEditBlock(QTextCursor* theWrappedObject);
   bool  hasComplexSelection(QTextCursor* theWrappedObject) const;
   bool  hasSelection(QTextCursor* theWrappedObject) const;
   void insertBlock(QTextCursor* theWrappedObject);
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat);
   void insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment);
   QTextFrame*  insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format);
   void insertHtml(QTextCursor* theWrappedObject, const QString&  html);
   void insertImage(QTextCursor* theWrappedObject, const QImage&  image, const QString&  name = QString());
   void insertImage(QTextCursor* theWrappedObject, const QString&  name);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment);
   QTextList*  insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   QTextList*  insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols);
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format);
   void insertText(QTextCursor* theWrappedObject, const QString&  text);
   void insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format);
   bool  isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const;
   bool  isNull(QTextCursor* theWrappedObject) const;
   void joinPreviousEditBlock(QTextCursor* theWrappedObject);
   bool  keepPositionOnInsert(QTextCursor* theWrappedObject) const;
   void mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   void mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier);
   void mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   bool  movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2 = QTextCursor::MoveAnchor, int  n = 1);
   bool  __ne__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   bool  __lt__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   bool  __le__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   bool  __eq__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   bool  __gt__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   bool  __ge__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   int  position(QTextCursor* theWrappedObject) const;
   int  positionInBlock(QTextCursor* theWrappedObject) const;
   void removeSelectedText(QTextCursor* theWrappedObject);
   void select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection);
   QString  selectedText(QTextCursor* theWrappedObject) const;
   QTextDocumentFragment  selection(QTextCursor* theWrappedObject) const;
   int  selectionEnd(QTextCursor* theWrappedObject) const;
   int  selectionStart(QTextCursor* theWrappedObject) const;
   void setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   void setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   void setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   void setKeepPositionOnInsert(QTextCursor* theWrappedObject, bool  b);
   void setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   void setVerticalMovementX(QTextCursor* theWrappedObject, int  x);
   void setVisualNavigation(QTextCursor* theWrappedObject, bool  b);
   void swap(QTextCursor* theWrappedObject, QTextCursor&  other);
   int  verticalMovementX(QTextCursor* theWrappedObject) const;
   bool  visualNavigation(QTextCursor* theWrappedObject) const;
    bool __nonzero__(QTextCursor* obj) { return !obj->isNull(); }
};





class PythonQtShell_QTextDocument : public QTextDocument
{
public:
    PythonQtShell_QTextDocument(QObject*  parent = nullptr):QTextDocument(parent),_wrapper(nullptr) {};
    PythonQtShell_QTextDocument(const QString&  text, QObject*  parent = nullptr):QTextDocument(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTextDocument() override;

void childEvent(QChildEvent*  event) override;
void clear() override;
QTextObject*  createObject(const QTextFormat&  f) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  loadResource(int  type, const QUrl&  name) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTextDocument : public QTextDocument
{ public:
inline QTextObject*  promoted_createObject(const QTextFormat&  f) { return this->createObject(f); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return this->loadResource(type, name); }
inline void py_q_clear() { QTextDocument::clear(); }
inline QTextObject*  py_q_createObject(const QTextFormat&  f) { return QTextDocument::createObject(f); }
inline QVariant  py_q_loadResource(int  type, const QUrl&  name) { return QTextDocument::loadResource(type, name); }
};

class PythonQtWrapper_QTextDocument : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FindFlag MarkdownFeature MetaInformation Stacks )
Q_FLAGS(FindFlags MarkdownFeatures )
enum FindFlag{
  FindBackward = QTextDocument::FindBackward,   FindCaseSensitively = QTextDocument::FindCaseSensitively,   FindWholeWords = QTextDocument::FindWholeWords};
enum MarkdownFeature{
  MarkdownNoHTML = QTextDocument::MarkdownNoHTML,   MarkdownDialectCommonMark = QTextDocument::MarkdownDialectCommonMark,   MarkdownDialectGitHub = QTextDocument::MarkdownDialectGitHub};
enum MetaInformation{
  DocumentTitle = QTextDocument::DocumentTitle,   DocumentUrl = QTextDocument::DocumentUrl};
enum Stacks{
  UndoStack = QTextDocument::UndoStack,   RedoStack = QTextDocument::RedoStack,   UndoAndRedoStacks = QTextDocument::UndoAndRedoStacks};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
Q_DECLARE_FLAGS(MarkdownFeatures, MarkdownFeature)
public slots:
QTextDocument* new_QTextDocument(QObject*  parent = nullptr);
QTextDocument* new_QTextDocument(const QString&  text, QObject*  parent = nullptr);
void delete_QTextDocument(QTextDocument* obj) { delete obj; }
   void addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource);
   void adjustSize(QTextDocument* theWrappedObject);
   QVector<QTextFormat >  allFormats(QTextDocument* theWrappedObject) const;
   int  availableRedoSteps(QTextDocument* theWrappedObject) const;
   int  availableUndoSteps(QTextDocument* theWrappedObject) const;
   QUrl  baseUrl(QTextDocument* theWrappedObject) const;
   QTextBlock  begin(QTextDocument* theWrappedObject) const;
   int  blockCount(QTextDocument* theWrappedObject) const;
   QChar  characterAt(QTextDocument* theWrappedObject, int  pos) const;
   int  characterCount(QTextDocument* theWrappedObject) const;
   void clear(QTextDocument* theWrappedObject);
   void py_q_clear(QTextDocument* theWrappedObject){  (((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->py_q_clear());}
   void clearUndoRedoStacks(QTextDocument* theWrappedObject, QTextDocument::Stacks  historyToClear = QTextDocument::UndoAndRedoStacks);
   QTextDocument*  clone(QTextDocument* theWrappedObject, QObject*  parent = nullptr) const;
   QTextObject*  createObject(QTextDocument* theWrappedObject, const QTextFormat&  f);
   QTextObject*  py_q_createObject(QTextDocument* theWrappedObject, const QTextFormat&  f){  return (((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->py_q_createObject(f));}
   Qt::CursorMoveStyle  defaultCursorMoveStyle(QTextDocument* theWrappedObject) const;
   QFont  defaultFont(QTextDocument* theWrappedObject) const;
   QString  defaultStyleSheet(QTextDocument* theWrappedObject) const;
   QTextOption  defaultTextOption(QTextDocument* theWrappedObject) const;
   QAbstractTextDocumentLayout*  documentLayout(QTextDocument* theWrappedObject) const;
   qreal  documentMargin(QTextDocument* theWrappedObject) const;
   void drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect = QRectF());
   QTextBlock  end(QTextDocument* theWrappedObject) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  cursor, QTextDocument::FindFlags  options = QTextDocument::FindFlags()) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from = 0, QTextDocument::FindFlags  options = QTextDocument::FindFlags()) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegularExpression&  expr, const QTextCursor&  cursor, QTextDocument::FindFlags  options = QTextDocument::FindFlags()) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegularExpression&  expr, int  from = 0, QTextDocument::FindFlags  options = QTextDocument::FindFlags()) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  cursor, QTextDocument::FindFlags  options = QTextDocument::FindFlags()) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, int  from = 0, QTextDocument::FindFlags  options = QTextDocument::FindFlags()) const;
   QTextBlock  findBlock(QTextDocument* theWrappedObject, int  pos) const;
   QTextBlock  findBlockByLineNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   QTextBlock  findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   QTextBlock  firstBlock(QTextDocument* theWrappedObject) const;
   QTextFrame*  frameAt(QTextDocument* theWrappedObject, int  pos) const;
   qreal  idealWidth(QTextDocument* theWrappedObject) const;
   qreal  indentWidth(QTextDocument* theWrappedObject) const;
   bool  isEmpty(QTextDocument* theWrappedObject) const;
   bool  isModified(QTextDocument* theWrappedObject) const;
   bool  isRedoAvailable(QTextDocument* theWrappedObject) const;
   bool  isUndoAvailable(QTextDocument* theWrappedObject) const;
   bool  isUndoRedoEnabled(QTextDocument* theWrappedObject) const;
   QTextBlock  lastBlock(QTextDocument* theWrappedObject) const;
   int  lineCount(QTextDocument* theWrappedObject) const;
   QVariant  loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name);
   QVariant  py_q_loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name){  return (((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->py_q_loadResource(type, name));}
   void markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length);
   int  maximumBlockCount(QTextDocument* theWrappedObject) const;
   QString  metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const;
   QTextObject*  object(QTextDocument* theWrappedObject, int  objectIndex) const;
   QTextObject*  objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const;
   int  pageCount(QTextDocument* theWrappedObject) const;
   QSizeF  pageSize(QTextDocument* theWrappedObject) const;
   void print(QTextDocument* theWrappedObject, QPagedPaintDevice*  printer) const;
   void redo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   QVariant  resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const;
   int  revision(QTextDocument* theWrappedObject) const;
   QTextFrame*  rootFrame(QTextDocument* theWrappedObject) const;
   void setBaseUrl(QTextDocument* theWrappedObject, const QUrl&  url);
   void setDefaultCursorMoveStyle(QTextDocument* theWrappedObject, Qt::CursorMoveStyle  style);
   void setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font);
   void setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet);
   void setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option);
   void setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout);
   void setDocumentMargin(QTextDocument* theWrappedObject, qreal  margin);
   void setHtml(QTextDocument* theWrappedObject, const QString&  html);
   void setIndentWidth(QTextDocument* theWrappedObject, qreal  width);
   void setMarkdown(QTextDocument* theWrappedObject, const QString&  markdown, QTextDocument::MarkdownFeatures  features = QTextDocument::MarkdownDialectGitHub);
   void setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum);
   void setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2);
   void setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size);
   void setPlainText(QTextDocument* theWrappedObject, const QString&  text);
   void setTextWidth(QTextDocument* theWrappedObject, qreal  width);
   void setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable);
   void setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b);
   QSizeF  size(QTextDocument* theWrappedObject) const;
   qreal  textWidth(QTextDocument* theWrappedObject) const;
   QString  toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding = QByteArray()) const;
   QString  toMarkdown(QTextDocument* theWrappedObject, QTextDocument::MarkdownFeatures  features = QTextDocument::MarkdownDialectGitHub) const;
   QString  toPlainText(QTextDocument* theWrappedObject) const;
   QString  toRawText(QTextDocument* theWrappedObject) const;
   void undo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   bool  useDesignMetrics(QTextDocument* theWrappedObject) const;
    bool __nonzero__(QTextDocument* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QTextDocumentFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextDocumentFragment* new_QTextDocumentFragment();
QTextDocumentFragment* new_QTextDocumentFragment(const QTextCursor&  range);
QTextDocumentFragment* new_QTextDocumentFragment(const QTextDocument*  document);
QTextDocumentFragment* new_QTextDocumentFragment(const QTextDocumentFragment&  rhs);
void delete_QTextDocumentFragment(QTextDocumentFragment* obj) { delete obj; }
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html);
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html, const QTextDocument*  resourceProvider);
   QTextDocumentFragment  static_QTextDocumentFragment_fromPlainText(const QString&  plainText);
   bool  isEmpty(QTextDocumentFragment* theWrappedObject) const;
   QString  toHtml(QTextDocumentFragment* theWrappedObject, const QByteArray&  encoding = QByteArray()) const;
   QString  toPlainText(QTextDocumentFragment* theWrappedObject) const;
    bool __nonzero__(QTextDocumentFragment* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QTextDocumentWriter : public QObject
{ Q_OBJECT
public:
public slots:
QTextDocumentWriter* new_QTextDocumentWriter();
QTextDocumentWriter* new_QTextDocumentWriter(QIODevice*  device, const QByteArray&  format);
QTextDocumentWriter* new_QTextDocumentWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QTextDocumentWriter(QTextDocumentWriter* obj) { delete obj; }
   QTextCodec*  codec(QTextDocumentWriter* theWrappedObject) const;
   QIODevice*  device(QTextDocumentWriter* theWrappedObject) const;
   QString  fileName(QTextDocumentWriter* theWrappedObject) const;
   QByteArray  format(QTextDocumentWriter* theWrappedObject) const;
   void setCodec(QTextDocumentWriter* theWrappedObject, QTextCodec*  codec);
   void setDevice(QTextDocumentWriter* theWrappedObject, QIODevice*  device);
   void setFileName(QTextDocumentWriter* theWrappedObject, const QString&  fileName);
   void setFormat(QTextDocumentWriter* theWrappedObject, const QByteArray&  format);
   QList<QByteArray >  static_QTextDocumentWriter_supportedDocumentFormats();
   bool  write(QTextDocumentWriter* theWrappedObject, const QTextDocument*  document);
   bool  write(QTextDocumentWriter* theWrappedObject, const QTextDocumentFragment&  fragment);
};





class PythonQtShell_QTextEdit : public QTextEdit
{
public:
    PythonQtShell_QTextEdit(QWidget*  parent = nullptr):QTextEdit(parent),_wrapper(nullptr) {};
    PythonQtShell_QTextEdit(const QString&  text, QWidget*  parent = nullptr):QTextEdit(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTextEdit() override;

void actionEvent(QActionEvent*  event) override;
bool  canInsertFromMimeData(const QMimeData*  source) const override;
void changeEvent(QEvent*  e) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  e) override;
QMimeData*  createMimeDataFromSelection() const override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void doSetTextCursor(const QTextCursor&  cursor) override;
void dragEnterEvent(QDragEnterEvent*  e) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  e) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const override;
void insertFromMimeData(const QMimeData*  source) override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
QVariant  loadResource(int  type, const QUrl&  name) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  e) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  e) override;
void scrollContentsBy(int  dx, int  dy) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
bool  viewportEvent(QEvent*  arg__1) override;
QSize  viewportSizeHint() const override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTextEdit : public QTextEdit
{ public:
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return this->canInsertFromMimeData(source); }
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { this->contextMenuEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return this->createMimeDataFromSelection(); }
inline void promoted_doSetTextCursor(const QTextCursor&  cursor) { this->doSetTextCursor(cursor); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { this->dragEnterEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { this->dropEvent(e); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { this->focusInEvent(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { this->focusOutEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { this->insertFromMimeData(source); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { this->keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { this->keyReleaseEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { this->mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { this->mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { this->mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  e) { this->timerEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { this->wheelEvent(e); }
inline void promoted_zoomInF(float  range) { this->zoomInF(range); }
inline bool  py_q_canInsertFromMimeData(const QMimeData*  source) const { return QTextEdit::canInsertFromMimeData(source); }
inline void py_q_changeEvent(QEvent*  e) { QTextEdit::changeEvent(e); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  e) { QTextEdit::contextMenuEvent(e); }
inline QMimeData*  py_q_createMimeDataFromSelection() const { return QTextEdit::createMimeDataFromSelection(); }
inline void py_q_doSetTextCursor(const QTextCursor&  cursor) { QTextEdit::doSetTextCursor(cursor); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  e) { QTextEdit::dragEnterEvent(e); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QTextEdit::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QTextEdit::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  e) { QTextEdit::dropEvent(e); }
inline bool  py_q_event(QEvent*  e) { return QTextEdit::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  e) { QTextEdit::focusInEvent(e); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QTextEdit::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  e) { QTextEdit::focusOutEvent(e); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QTextEdit::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  property) const { return QTextEdit::inputMethodQuery(property); }
inline void py_q_insertFromMimeData(const QMimeData*  source) { QTextEdit::insertFromMimeData(source); }
inline void py_q_keyPressEvent(QKeyEvent*  e) { QTextEdit::keyPressEvent(e); }
inline void py_q_keyReleaseEvent(QKeyEvent*  e) { QTextEdit::keyReleaseEvent(e); }
inline QVariant  py_q_loadResource(int  type, const QUrl&  name) { return QTextEdit::loadResource(type, name); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  e) { QTextEdit::mouseDoubleClickEvent(e); }
inline void py_q_mouseMoveEvent(QMouseEvent*  e) { QTextEdit::mouseMoveEvent(e); }
inline void py_q_mousePressEvent(QMouseEvent*  e) { QTextEdit::mousePressEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QTextEdit::mouseReleaseEvent(e); }
inline void py_q_paintEvent(QPaintEvent*  e) { QTextEdit::paintEvent(e); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QTextEdit::resizeEvent(e); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QTextEdit::scrollContentsBy(dx, dy); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QTextEdit::showEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  e) { QTextEdit::timerEvent(e); }
inline void py_q_wheelEvent(QWheelEvent*  e) { QTextEdit::wheelEvent(e); }
};

class PythonQtWrapper_QTextEdit : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AutoFormattingFlag )
Q_FLAGS(AutoFormatting )
enum AutoFormattingFlag{
  AutoNone = QTextEdit::AutoNone,   AutoBulletList = QTextEdit::AutoBulletList,   AutoAll = QTextEdit::AutoAll};
Q_DECLARE_FLAGS(AutoFormatting, AutoFormattingFlag)
public slots:
QTextEdit* new_QTextEdit(QWidget*  parent = nullptr);
QTextEdit* new_QTextEdit(const QString&  text, QWidget*  parent = nullptr);
void delete_QTextEdit(QTextEdit* obj) { delete obj; }
   bool  acceptRichText(QTextEdit* theWrappedObject) const;
   Qt::Alignment  alignment(QTextEdit* theWrappedObject) const;
   QString  anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   QTextEdit::AutoFormatting  autoFormatting(QTextEdit* theWrappedObject) const;
   bool  canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const;
   bool  py_q_canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const{  return (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_canInsertFromMimeData(source));}
   bool  canPaste(QTextEdit* theWrappedObject) const;
   void py_q_changeEvent(QTextEdit* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_changeEvent(e));}
   void py_q_contextMenuEvent(QTextEdit* theWrappedObject, QContextMenuEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_contextMenuEvent(e));}
   QMimeData*  createMimeDataFromSelection(QTextEdit* theWrappedObject) const;
   QMimeData*  py_q_createMimeDataFromSelection(QTextEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_createMimeDataFromSelection());}
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject);
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position);
   QTextCharFormat  currentCharFormat(QTextEdit* theWrappedObject) const;
   QFont  currentFont(QTextEdit* theWrappedObject) const;
   QTextCursor  cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   QRect  cursorRect(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   int  cursorWidth(QTextEdit* theWrappedObject) const;
   void doSetTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void py_q_doSetTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_doSetTextCursor(cursor));}
   QTextDocument*  document(QTextEdit* theWrappedObject) const;
   QString  documentTitle(QTextEdit* theWrappedObject) const;
   void py_q_dragEnterEvent(QTextEdit* theWrappedObject, QDragEnterEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_dragEnterEvent(e));}
   void py_q_dragLeaveEvent(QTextEdit* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QTextEdit* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QTextEdit* theWrappedObject, QDropEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_dropEvent(e));}
   void ensureCursorVisible(QTextEdit* theWrappedObject);
   bool  py_q_event(QTextEdit* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_event(e));}
   QList<QTextEdit::ExtraSelection >  extraSelections(QTextEdit* theWrappedObject) const;
   bool  find(QTextEdit* theWrappedObject, const QRegExp&  exp, QTextDocument::FindFlags  options = QTextDocument::FindFlags());
   bool  find(QTextEdit* theWrappedObject, const QRegularExpression&  exp, QTextDocument::FindFlags  options = QTextDocument::FindFlags());
   bool  find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = QTextDocument::FindFlags());
   void py_q_focusInEvent(QTextEdit* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_focusInEvent(e));}
   bool  py_q_focusNextPrevChild(QTextEdit* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QTextEdit* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_focusOutEvent(e));}
   QString  fontFamily(QTextEdit* theWrappedObject) const;
   bool  fontItalic(QTextEdit* theWrappedObject) const;
   qreal  fontPointSize(QTextEdit* theWrappedObject) const;
   bool  fontUnderline(QTextEdit* theWrappedObject) const;
   int  fontWeight(QTextEdit* theWrappedObject) const;
   void py_q_inputMethodEvent(QTextEdit* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   QVariant  py_q_inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const{  return (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_inputMethodQuery(property));}
   QVariant  inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  query, QVariant  argument) const;
   void insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source);
   void py_q_insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_insertFromMimeData(source));}
   bool  isReadOnly(QTextEdit* theWrappedObject) const;
   bool  isUndoRedoEnabled(QTextEdit* theWrappedObject) const;
   void py_q_keyPressEvent(QTextEdit* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_keyPressEvent(e));}
   void py_q_keyReleaseEvent(QTextEdit* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_keyReleaseEvent(e));}
   int  lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const;
   QTextEdit::LineWrapMode  lineWrapMode(QTextEdit* theWrappedObject) const;
   QVariant  loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name);
   QVariant  py_q_loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name){  return (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_loadResource(type, name));}
   void mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   void py_q_mouseDoubleClickEvent(QTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_mouseDoubleClickEvent(e));}
   void py_q_mouseMoveEvent(QTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_mouseMoveEvent(e));}
   void py_q_mousePressEvent(QTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_mousePressEvent(e));}
   void py_q_mouseReleaseEvent(QTextEdit* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   void moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   bool  overwriteMode(QTextEdit* theWrappedObject) const;
   void py_q_paintEvent(QTextEdit* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_paintEvent(e));}
   QString  placeholderText(QTextEdit* theWrappedObject) const;
   void print(QTextEdit* theWrappedObject, QPagedPaintDevice*  printer) const;
   void py_q_resizeEvent(QTextEdit* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_resizeEvent(e));}
   void py_q_scrollContentsBy(QTextEdit* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void setAcceptRichText(QTextEdit* theWrappedObject, bool  accept);
   void setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features);
   void setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void setCursorWidth(QTextEdit* theWrappedObject, int  width);
   void setDocument(QTextEdit* theWrappedObject, QTextDocument*  document);
   void setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title);
   void setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w);
   void setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode);
   void setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite);
   void setPlaceholderText(QTextEdit* theWrappedObject, const QString&  placeholderText);
   void setReadOnly(QTextEdit* theWrappedObject, bool  ro);
   void setTabChangesFocus(QTextEdit* theWrappedObject, bool  b);
   void setTabStopDistance(QTextEdit* theWrappedObject, qreal  distance);
   void setTabStopWidth(QTextEdit* theWrappedObject, int  width);
   void setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable);
   void setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void py_q_showEvent(QTextEdit* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_showEvent(arg__1));}
   bool  tabChangesFocus(QTextEdit* theWrappedObject) const;
   qreal  tabStopDistance(QTextEdit* theWrappedObject) const;
   int  tabStopWidth(QTextEdit* theWrappedObject) const;
   QColor  textBackgroundColor(QTextEdit* theWrappedObject) const;
   QColor  textColor(QTextEdit* theWrappedObject) const;
   QTextCursor  textCursor(QTextEdit* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QTextEdit* theWrappedObject) const;
   void py_q_timerEvent(QTextEdit* theWrappedObject, QTimerEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_timerEvent(e));}
   QString  toHtml(QTextEdit* theWrappedObject) const;
   QString  toMarkdown(QTextEdit* theWrappedObject, QTextDocument::MarkdownFeatures  features = QTextDocument::MarkdownDialectGitHub) const;
   QString  toPlainText(QTextEdit* theWrappedObject) const;
   void py_q_wheelEvent(QTextEdit* theWrappedObject, QWheelEvent*  e){  (((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->py_q_wheelEvent(e));}
   QTextOption::WrapMode  wordWrapMode(QTextEdit* theWrappedObject) const;
   void zoomInF(QTextEdit* theWrappedObject, float  range);
};





class PythonQtShell_QTextEdit__ExtraSelection : public QTextEdit::ExtraSelection
{
public:
    PythonQtShell_QTextEdit__ExtraSelection():QTextEdit::ExtraSelection(),_wrapper(nullptr) {};

   ~PythonQtShell_QTextEdit__ExtraSelection();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextEdit__ExtraSelection : public QObject
{ Q_OBJECT
public:
public slots:
QTextEdit::ExtraSelection* new_QTextEdit__ExtraSelection();
QTextEdit::ExtraSelection* new_QTextEdit__ExtraSelection(const QTextEdit::ExtraSelection& other) {
PythonQtShell_QTextEdit__ExtraSelection* a = new PythonQtShell_QTextEdit__ExtraSelection();
*((QTextEdit::ExtraSelection*)a) = other;
return a; }
void delete_QTextEdit__ExtraSelection(QTextEdit::ExtraSelection* obj) { delete obj; }
void py_set_cursor(QTextEdit::ExtraSelection* theWrappedObject, QTextCursor  cursor){ theWrappedObject->cursor = cursor; }
QTextCursor  py_get_cursor(QTextEdit::ExtraSelection* theWrappedObject){ return theWrappedObject->cursor; }
void py_set_format(QTextEdit::ExtraSelection* theWrappedObject, QTextCharFormat  format){ theWrappedObject->format = format; }
QTextCharFormat  py_get_format(QTextEdit::ExtraSelection* theWrappedObject){ return theWrappedObject->format; }
};


