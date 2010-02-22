#include <PythonQt.h>
#include <QImage>
#include <QObject>
#include <QPixmap>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgl.h>
#include <qglcolormap.h>
#include <qglframebufferobject.h>
#include <qglpixelbuffer.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>



class PythonQtShell_QGLColormap : public QGLColormap
{
public:
    PythonQtShell_QGLColormap():QGLColormap(),_wrapper(NULL) {};
    PythonQtShell_QGLColormap(const QGLColormap&  arg__1):QGLColormap(arg__1),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGLColormap : public QObject
{ Q_OBJECT
public:
public slots:
QGLColormap* new_QGLColormap();
QGLColormap* new_QGLColormap(const QGLColormap&  arg__1);
void delete_QGLColormap(QGLColormap* obj) { delete obj; } 
   unsigned int  entryRgb(QGLColormap* theWrappedObject, int  idx) const;
   void setEntries(QGLColormap* theWrappedObject, int  count, const unsigned int*  colors, int  base = 0);
   void setEntry(QGLColormap* theWrappedObject, int  idx, unsigned int  color);
   int  find(QGLColormap* theWrappedObject, unsigned int  color) const;
   void setEntry(QGLColormap* theWrappedObject, int  idx, const QColor&  color);
   int  findNearest(QGLColormap* theWrappedObject, unsigned int  color) const;
   int  size(QGLColormap* theWrappedObject) const;
   bool  isEmpty(QGLColormap* theWrappedObject) const;
   QColor  entryColor(QGLColormap* theWrappedObject, int  idx) const;
};





class PythonQtShell_QGLContext : public QGLContext
{
public:
    PythonQtShell_QGLContext(const QGLFormat&  format):QGLContext(format),_wrapper(NULL) {};
    PythonQtShell_QGLContext(const QGLFormat&  format, QPaintDevice*  device):QGLContext(format, device),_wrapper(NULL) {};

virtual void doneCurrent();
virtual bool  create(const QGLContext*  shareContext = 0);
virtual void makeCurrent();
virtual void swapBuffers() const;
virtual bool  chooseContext(const QGLContext*  shareContext = 0);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLContext : public QGLContext
{ public:
inline void promoted_doneCurrent() { QGLContext::doneCurrent(); }
inline bool  promoted_create(const QGLContext*  shareContext = 0) { return QGLContext::create(shareContext); }
inline void promoted_makeCurrent() { QGLContext::makeCurrent(); }
inline void promoted_swapBuffers() const { QGLContext::swapBuffers(); }
inline bool  promoted_chooseContext(const QGLContext*  shareContext = 0) { return QGLContext::chooseContext(shareContext); }
};

class PythonQtWrapper_QGLContext : public QObject
{ Q_OBJECT
public:
public slots:
QGLContext* new_QGLContext(const QGLFormat&  format);
QGLContext* new_QGLContext(const QGLFormat&  format, QPaintDevice*  device);
void delete_QGLContext(QGLContext* obj) { delete obj; } 
   QGLFormat  format(QGLContext* theWrappedObject) const;
   const QGLContext*  static_QGLContext_currentContext();
   QColor  overlayTransparentColor(QGLContext* theWrappedObject) const;
   QPaintDevice*  device(QGLContext* theWrappedObject) const;
   void doneCurrent(QGLContext* theWrappedObject);
   QGLFormat  requestedFormat(QGLContext* theWrappedObject) const;
   bool  isSharing(QGLContext* theWrappedObject) const;
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1, int  format = 0x1908);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QString&  fileName);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1, int  format = 0x1908);
   void static_QGLContext_setTextureCacheLimit(int  size);
   void setFormat(QGLContext* theWrappedObject, const QGLFormat&  format);
   void deleteTexture(QGLContext* theWrappedObject, unsigned int  tx_id);
   int  static_QGLContext_textureCacheLimit();
   bool  isValid(QGLContext* theWrappedObject) const;
   bool  create(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   void drawTexture(QGLContext* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void makeCurrent(QGLContext* theWrappedObject);
   void drawTexture(QGLContext* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void reset(QGLContext* theWrappedObject);
   void swapBuffers(QGLContext* theWrappedObject) const;
   bool  chooseContext(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
};





class PythonQtShell_QGLFramebufferObject : public QGLFramebufferObject
{
public:
    PythonQtShell_QGLFramebufferObject(const QSize&  size, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058):QGLFramebufferObject(size, attachment, target, internal_format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(const QSize&  size, unsigned int  target = 0x0DE1):QGLFramebufferObject(size, target),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058):QGLFramebufferObject(width, height, attachment, target, internal_format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(int  width, int  height, unsigned int  target = 0x0DE1):QGLFramebufferObject(width, height, target),_wrapper(NULL) {};

virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;
virtual int  devType() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLFramebufferObject : public QGLFramebufferObject
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QGLFramebufferObject::metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLFramebufferObject::paintEngine(); }
inline int  promoted_devType() const { return QGLFramebufferObject::devType(); }
};

class PythonQtWrapper_QGLFramebufferObject : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attachment )
enum Attachment{
  NoAttachment = QGLFramebufferObject::NoAttachment,   CombinedDepthStencil = QGLFramebufferObject::CombinedDepthStencil,   Depth = QGLFramebufferObject::Depth};
public slots:
QGLFramebufferObject* new_QGLFramebufferObject(const QSize&  size, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058);
QGLFramebufferObject* new_QGLFramebufferObject(const QSize&  size, unsigned int  target = 0x0DE1);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, unsigned int  target = 0x0DE1);
void delete_QGLFramebufferObject(QGLFramebufferObject* obj) { delete obj; } 
   QGLFramebufferObject::Attachment  attachment(QGLFramebufferObject* theWrappedObject) const;
   bool  isValid(QGLFramebufferObject* theWrappedObject) const;
   int  metric(QGLFramebufferObject* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   unsigned int  texture(QGLFramebufferObject* theWrappedObject) const;
   QImage  toImage(QGLFramebufferObject* theWrappedObject) const;
   bool  bind(QGLFramebufferObject* theWrappedObject);
   void drawTexture(QGLFramebufferObject* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   bool  release(QGLFramebufferObject* theWrappedObject);
   QPaintEngine*  paintEngine(QGLFramebufferObject* theWrappedObject) const;
   bool  static_QGLFramebufferObject_hasOpenGLFramebufferObjects();
   void drawTexture(QGLFramebufferObject* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QSize  size(QGLFramebufferObject* theWrappedObject) const;
   unsigned int  handle(QGLFramebufferObject* theWrappedObject) const;
   int  devType(QGLFramebufferObject* theWrappedObject) const;
};





class PythonQtShell_QGLPixelBuffer : public QGLPixelBuffer
{
public:
    PythonQtShell_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0):QGLPixelBuffer(size, format, shareWidget),_wrapper(NULL) {};
    PythonQtShell_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0):QGLPixelBuffer(width, height, format, shareWidget),_wrapper(NULL) {};

virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;
virtual int  devType() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLPixelBuffer : public QGLPixelBuffer
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QGLPixelBuffer::metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLPixelBuffer::paintEngine(); }
inline int  promoted_devType() const { return QGLPixelBuffer::devType(); }
};

class PythonQtWrapper_QGLPixelBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QGLPixelBuffer* new_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0);
QGLPixelBuffer* new_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0);
void delete_QGLPixelBuffer(QGLPixelBuffer* obj) { delete obj; } 
   void releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject);
   bool  makeCurrent(QGLPixelBuffer* theWrappedObject);
   int  metric(QGLPixelBuffer* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   bool  bindToDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture);
   void updateDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id) const;
   bool  isValid(QGLPixelBuffer* theWrappedObject) const;
   QGLFormat  format(QGLPixelBuffer* theWrappedObject) const;
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1);
   unsigned int  generateDynamicTexture(QGLPixelBuffer* theWrappedObject) const;
   QImage  toImage(QGLPixelBuffer* theWrappedObject) const;
   void deleteTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id);
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QString&  fileName);
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1);
   void drawTexture(QGLPixelBuffer* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   bool  static_QGLPixelBuffer_hasOpenGLPbuffers();
   void drawTexture(QGLPixelBuffer* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QPaintEngine*  paintEngine(QGLPixelBuffer* theWrappedObject) const;
   QSize  size(QGLPixelBuffer* theWrappedObject) const;
   bool  doneCurrent(QGLPixelBuffer* theWrappedObject);
   Qt::HANDLE  handle(QGLPixelBuffer* theWrappedObject) const;
   int  devType(QGLPixelBuffer* theWrappedObject) const;
};





class PythonQtShell_QGLWidget : public QGLWidget
{
public:
    PythonQtShell_QGLWidget(QGLContext*  context, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(context, parent, shareWidget, f),_wrapper(NULL) {};
    PythonQtShell_QGLWidget(QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(parent, shareWidget, f),_wrapper(NULL) {};
    PythonQtShell_QGLWidget(const QGLFormat&  format, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(format, parent, shareWidget, f),_wrapper(NULL) {};

virtual void glInit();
virtual void initializeGL();
virtual void resizeGL(int  w, int  h);
virtual void updateOverlayGL();
virtual void updateGL();
virtual void initializeOverlayGL();
virtual void resizeOverlayGL(int  w, int  h);
virtual QPaintEngine*  paintEngine() const;
virtual void glDraw();
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void paintOverlayGL();
virtual bool  event(QEvent*  arg__1);
virtual void paintGL();
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
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
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLWidget : public QGLWidget
{ public:
inline void promoted_glInit() { QGLWidget::glInit(); }
inline void promoted_initializeGL() { QGLWidget::initializeGL(); }
inline void promoted_resizeGL(int  w, int  h) { QGLWidget::resizeGL(w, h); }
inline void promoted_updateOverlayGL() { QGLWidget::updateOverlayGL(); }
inline void promoted_updateGL() { QGLWidget::updateGL(); }
inline void promoted_initializeOverlayGL() { QGLWidget::initializeOverlayGL(); }
inline void promoted_resizeOverlayGL(int  w, int  h) { QGLWidget::resizeOverlayGL(w, h); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLWidget::paintEngine(); }
inline void promoted_glDraw() { QGLWidget::glDraw(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QGLWidget::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QGLWidget::resizeEvent(arg__1); }
inline void promoted_paintOverlayGL() { QGLWidget::paintOverlayGL(); }
inline bool  promoted_event(QEvent*  arg__1) { return QGLWidget::event(arg__1); }
inline void promoted_paintGL() { QGLWidget::paintGL(); }
};

class PythonQtWrapper_QGLWidget : public QObject
{ Q_OBJECT
public:
public slots:
QGLWidget* new_QGLWidget(QGLContext*  context, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
QGLWidget* new_QGLWidget(QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
QGLWidget* new_QGLWidget(const QGLFormat&  format, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
void delete_QGLWidget(QGLWidget* obj) { delete obj; } 
   void glInit(QGLWidget* theWrappedObject);
   const QGLContext*  overlayContext(QGLWidget* theWrappedObject) const;
   void doneCurrent(QGLWidget* theWrappedObject);
   const QGLContext*  context(QGLWidget* theWrappedObject) const;
   void setColormap(QGLWidget* theWrappedObject, const QGLColormap&  map);
   void initializeGL(QGLWidget* theWrappedObject);
   void resizeGL(QGLWidget* theWrappedObject, int  w, int  h);
   bool  isSharing(QGLWidget* theWrappedObject) const;
   void renderText(QGLWidget* theWrappedObject, double  x, double  y, double  z, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   void renderText(QGLWidget* theWrappedObject, int  x, int  y, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   QImage  grabFrameBuffer(QGLWidget* theWrappedObject, bool  withAlpha = false);
   bool  doubleBuffer(QGLWidget* theWrappedObject) const;
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QString&  fileName);
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1, int  format = 0x1908);
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1, int  format = 0x1908);
   void makeOverlayCurrent(QGLWidget* theWrappedObject);
   void initializeOverlayGL(QGLWidget* theWrappedObject);
   void deleteTexture(QGLWidget* theWrappedObject, unsigned int  tx_id);
   void resizeOverlayGL(QGLWidget* theWrappedObject, int  w, int  h);
   QPaintEngine*  paintEngine(QGLWidget* theWrappedObject) const;
   void glDraw(QGLWidget* theWrappedObject);
   void paintEvent(QGLWidget* theWrappedObject, QPaintEvent*  arg__1);
   bool  isValid(QGLWidget* theWrappedObject) const;
   void drawTexture(QGLWidget* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QImage  static_QGLWidget_convertToGLFormat(const QImage&  img);
   void drawTexture(QGLWidget* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void resizeEvent(QGLWidget* theWrappedObject, QResizeEvent*  arg__1);
   void makeCurrent(QGLWidget* theWrappedObject);
   void paintOverlayGL(QGLWidget* theWrappedObject);
   QGLFormat  format(QGLWidget* theWrappedObject) const;
   bool  event(QGLWidget* theWrappedObject, QEvent*  arg__1);
   void qglColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   void swapBuffers(QGLWidget* theWrappedObject);
   void paintGL(QGLWidget* theWrappedObject);
   const QGLColormap*  colormap(QGLWidget* theWrappedObject) const;
   QPixmap  renderPixmap(QGLWidget* theWrappedObject, int  w = 0, int  h = 0, bool  useContext = false);
   void qglClearColor(QGLWidget* theWrappedObject, const QColor&  c) const;
};


