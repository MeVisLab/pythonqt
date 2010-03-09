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
#include <qglshaderprogram.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
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
#include <qtransform.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
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
   bool  isEmpty(QGLColormap* theWrappedObject) const;
   void setEntry(QGLColormap* theWrappedObject, int  idx, const QColor&  color);
   int  find(QGLColormap* theWrappedObject, unsigned int  color) const;
   void setEntry(QGLColormap* theWrappedObject, int  idx, unsigned int  color);
   int  findNearest(QGLColormap* theWrappedObject, unsigned int  color) const;
   int  size(QGLColormap* theWrappedObject) const;
   QColor  entryColor(QGLColormap* theWrappedObject, int  idx) const;
};





class PythonQtShell_QGLContext : public QGLContext
{
public:
    PythonQtShell_QGLContext(const QGLFormat&  format):QGLContext(format),_wrapper(NULL) {};
    PythonQtShell_QGLContext(const QGLFormat&  format, QPaintDevice*  device):QGLContext(format, device),_wrapper(NULL) {};

virtual void doneCurrent();
virtual bool  chooseContext(const QGLContext*  shareContext = 0);
virtual void makeCurrent();
virtual bool  create(const QGLContext*  shareContext = 0);
virtual void swapBuffers() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLContext : public QGLContext
{ public:
inline void promoted_doneCurrent() { QGLContext::doneCurrent(); }
inline bool  promoted_chooseContext(const QGLContext*  shareContext = 0) { return QGLContext::chooseContext(shareContext); }
inline void promoted_makeCurrent() { QGLContext::makeCurrent(); }
inline bool  promoted_create(const QGLContext*  shareContext = 0) { return QGLContext::create(shareContext); }
inline void promoted_swapBuffers() const { QGLContext::swapBuffers(); }
};

class PythonQtWrapper_QGLContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindOption )
Q_FLAGS(BindOptions )
enum BindOption{
  NoBindOption = QGLContext::NoBindOption,   InvertedYBindOption = QGLContext::InvertedYBindOption,   MipmapBindOption = QGLContext::MipmapBindOption,   PremultipliedAlphaBindOption = QGLContext::PremultipliedAlphaBindOption,   LinearFilteringBindOption = QGLContext::LinearFilteringBindOption,   MemoryManagedBindOption = QGLContext::MemoryManagedBindOption,   CanFlipNativePixmapBindOption = QGLContext::CanFlipNativePixmapBindOption,   DefaultBindOption = QGLContext::DefaultBindOption,   InternalBindOption = QGLContext::InternalBindOption};
Q_DECLARE_FLAGS(BindOptions, BindOption)
public slots:
QGLContext* new_QGLContext(const QGLFormat&  format);
QGLContext* new_QGLContext(const QGLFormat&  format, QPaintDevice*  device);
void delete_QGLContext(QGLContext* obj) { delete obj; } 
   const QGLContext*  static_QGLContext_currentContext();
   QColor  overlayTransparentColor(QGLContext* theWrappedObject) const;
   QPaintDevice*  device(QGLContext* theWrappedObject) const;
   void doneCurrent(QGLContext* theWrappedObject);
   QGLFormat  requestedFormat(QGLContext* theWrappedObject) const;
   bool  static_QGLContext_areSharing(const QGLContext*  context1, const QGLContext*  context2);
   bool  isSharing(QGLContext* theWrappedObject) const;
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QString&  fileName);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1, int  format = 0x1908);
   void static_QGLContext_setTextureCacheLimit(int  size);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1, int  format = 0x1908);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, unsigned int  target, int  format, QGLContext::BindOptions  options);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QImage&  image, unsigned int  target, int  format, QGLContext::BindOptions  options);
   void setFormat(QGLContext* theWrappedObject, const QGLFormat&  format);
   void deleteTexture(QGLContext* theWrappedObject, unsigned int  tx_id);
   bool  chooseContext(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   int  static_QGLContext_textureCacheLimit();
   void makeCurrent(QGLContext* theWrappedObject);
   void drawTexture(QGLContext* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void drawTexture(QGLContext* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   bool  create(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   QGLFormat  format(QGLContext* theWrappedObject) const;
   void reset(QGLContext* theWrappedObject);
   void swapBuffers(QGLContext* theWrappedObject) const;
   bool  isValid(QGLContext* theWrappedObject) const;
};





class PythonQtShell_QGLFramebufferObject : public QGLFramebufferObject
{
public:
    PythonQtShell_QGLFramebufferObject(const QSize&  size, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058):QGLFramebufferObject(size, attachment, target, internal_format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(const QSize&  size, const QGLFramebufferObjectFormat&  format):QGLFramebufferObject(size, format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(const QSize&  size, unsigned int  target = 0x0DE1):QGLFramebufferObject(size, target),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058):QGLFramebufferObject(width, height, attachment, target, internal_format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(int  width, int  height, const QGLFramebufferObjectFormat&  format):QGLFramebufferObject(width, height, format),_wrapper(NULL) {};
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
QGLFramebufferObject* new_QGLFramebufferObject(const QSize&  size, const QGLFramebufferObjectFormat&  format);
QGLFramebufferObject* new_QGLFramebufferObject(const QSize&  size, unsigned int  target = 0x0DE1);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, const QGLFramebufferObjectFormat&  format);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, unsigned int  target = 0x0DE1);
void delete_QGLFramebufferObject(QGLFramebufferObject* obj) { delete obj; } 
   bool  static_QGLFramebufferObject_hasOpenGLFramebufferBlit();
   bool  isBound(QGLFramebufferObject* theWrappedObject) const;
   bool  isValid(QGLFramebufferObject* theWrappedObject) const;
   QGLFramebufferObject::Attachment  attachment(QGLFramebufferObject* theWrappedObject) const;
   int  metric(QGLFramebufferObject* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   QImage  toImage(QGLFramebufferObject* theWrappedObject) const;
   QGLFramebufferObjectFormat  format(QGLFramebufferObject* theWrappedObject) const;
   unsigned int  texture(QGLFramebufferObject* theWrappedObject) const;
   bool  static_QGLFramebufferObject_hasOpenGLFramebufferObjects();
   void drawTexture(QGLFramebufferObject* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   bool  bind(QGLFramebufferObject* theWrappedObject);
   bool  release(QGLFramebufferObject* theWrappedObject);
   void drawTexture(QGLFramebufferObject* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QPaintEngine*  paintEngine(QGLFramebufferObject* theWrappedObject) const;
   int  devType(QGLFramebufferObject* theWrappedObject) const;
   QSize  size(QGLFramebufferObject* theWrappedObject) const;
   void static_QGLFramebufferObject_blitFramebuffer(QGLFramebufferObject*  target, const QRect&  targetRect, QGLFramebufferObject*  source, const QRect&  sourceRect, unsigned int  buffers = 0x00004000, unsigned int  filter = 0x2600);
   unsigned int  handle(QGLFramebufferObject* theWrappedObject) const;
};





class PythonQtWrapper_QGLFramebufferObjectFormat : public QObject
{ Q_OBJECT
public:
public slots:
QGLFramebufferObjectFormat* new_QGLFramebufferObjectFormat();
QGLFramebufferObjectFormat* new_QGLFramebufferObjectFormat(const QGLFramebufferObjectFormat&  other);
void delete_QGLFramebufferObjectFormat(QGLFramebufferObjectFormat* obj) { delete obj; } 
   void setSamples(QGLFramebufferObjectFormat* theWrappedObject, int  samples);
   int  samples(QGLFramebufferObjectFormat* theWrappedObject) const;
   void setAttachment(QGLFramebufferObjectFormat* theWrappedObject, QGLFramebufferObject::Attachment  attachment);
   QGLFramebufferObjectFormat*  operator_assign(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other);
   bool  __ne__(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other) const;
   unsigned int  internalTextureFormat(QGLFramebufferObjectFormat* theWrappedObject) const;
   void setTextureTarget(QGLFramebufferObjectFormat* theWrappedObject, unsigned int  target);
   unsigned int  textureTarget(QGLFramebufferObjectFormat* theWrappedObject) const;
   bool  __eq__(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other) const;
   void setInternalTextureFormat(QGLFramebufferObjectFormat* theWrappedObject, unsigned int  internalTextureFormat);
   QGLFramebufferObject::Attachment  attachment(QGLFramebufferObjectFormat* theWrappedObject) const;
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
   void updateDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id) const;
   bool  bindToDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture);
   int  metric(QGLPixelBuffer* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   bool  isValid(QGLPixelBuffer* theWrappedObject) const;
   void releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject);
   QGLFormat  format(QGLPixelBuffer* theWrappedObject) const;
   unsigned int  generateDynamicTexture(QGLPixelBuffer* theWrappedObject) const;
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QString&  fileName);
   QImage  toImage(QGLPixelBuffer* theWrappedObject) const;
   void deleteTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id);
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1);
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1);
   void drawTexture(QGLPixelBuffer* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   bool  static_QGLPixelBuffer_hasOpenGLPbuffers();
   void drawTexture(QGLPixelBuffer* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   bool  makeCurrent(QGLPixelBuffer* theWrappedObject);
   QSize  size(QGLPixelBuffer* theWrappedObject) const;
   QPaintEngine*  paintEngine(QGLPixelBuffer* theWrappedObject) const;
   bool  doneCurrent(QGLPixelBuffer* theWrappedObject);
   Qt::HANDLE  handle(QGLPixelBuffer* theWrappedObject) const;
   int  devType(QGLPixelBuffer* theWrappedObject) const;
};





class PythonQtShell_QGLShader : public QGLShader
{
public:
    PythonQtShell_QGLShader(QGLShader::ShaderType  type, QObject*  parent = 0):QGLShader(type, parent),_wrapper(NULL) {};
    PythonQtShell_QGLShader(QGLShader::ShaderType  type, const QGLContext*  context, QObject*  parent = 0):QGLShader(type, context, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGLShader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShaderTypeBit )
Q_FLAGS(ShaderType )
enum ShaderTypeBit{
  Vertex = QGLShader::Vertex,   Fragment = QGLShader::Fragment};
Q_DECLARE_FLAGS(ShaderType, ShaderTypeBit)
public slots:
QGLShader* new_QGLShader(QGLShader::ShaderType  type, QObject*  parent = 0);
QGLShader* new_QGLShader(QGLShader::ShaderType  type, const QGLContext*  context, QObject*  parent = 0);
void delete_QGLShader(QGLShader* obj) { delete obj; } 
   bool  compileSourceCode(QGLShader* theWrappedObject, const QString&  source);
   bool  compileSourceCode(QGLShader* theWrappedObject, const QByteArray&  source);
   QByteArray  sourceCode(QGLShader* theWrappedObject) const;
   bool  compileSourceCode(QGLShader* theWrappedObject, const char*  source);
   QGLShader::ShaderType  shaderType(QGLShader* theWrappedObject) const;
   unsigned int  shaderId(QGLShader* theWrappedObject) const;
   bool  compileSourceFile(QGLShader* theWrappedObject, const QString&  fileName);
   bool  isCompiled(QGLShader* theWrappedObject) const;
   QString  log(QGLShader* theWrappedObject) const;
};





class PythonQtShell_QGLShaderProgram : public QGLShaderProgram
{
public:
    PythonQtShell_QGLShaderProgram(QObject*  parent = 0):QGLShaderProgram(parent),_wrapper(NULL) {};
    PythonQtShell_QGLShaderProgram(const QGLContext*  context, QObject*  parent = 0):QGLShaderProgram(context, parent),_wrapper(NULL) {};

virtual bool  link();
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLShaderProgram : public QGLShaderProgram
{ public:
inline bool  promoted_link() { return QGLShaderProgram::link(); }
};

class PythonQtWrapper_QGLShaderProgram : public QObject
{ Q_OBJECT
public:
public slots:
QGLShaderProgram* new_QGLShaderProgram(QObject*  parent = 0);
QGLShaderProgram* new_QGLShaderProgram(const QGLContext*  context, QObject*  parent = 0);
void delete_QGLShaderProgram(QGLShaderProgram* obj) { delete obj; } 
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, unsigned int  value);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const float*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  stride = 0);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  stride = 0);
   void disableAttributeArray(QGLShaderProgram* theWrappedObject, int  location);
   bool  addShaderFromSourceFile(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QString&  fileName);
   int  uniformLocation(QGLShaderProgram* theWrappedObject, const QString&  name) const;
   void removeShader(QGLShaderProgram* theWrappedObject, QGLShader*  shader);
   int  attributeLocation(QGLShaderProgram* theWrappedObject, const QString&  name) const;
   QList<QGLShader* >  shaders(QGLShaderProgram* theWrappedObject) const;
   void removeAllShaders(QGLShaderProgram* theWrappedObject);
   bool  isLinked(QGLShaderProgram* theWrappedObject) const;
   void release(QGLShaderProgram* theWrappedObject);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, float  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, float  x, float  y, float  z);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, float  x, float  y);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, float  x, float  y, float  z);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, float  x, float  y, float  z, float  w);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const float*  values, int  columns, int  rows);
   bool  addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const char*  source);
   bool  addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QString&  source);
   void bindAttributeLocation(QGLShaderProgram* theWrappedObject, const QString&  name, int  location);
   bool  static_QGLShaderProgram_hasOpenGLShaderPrograms(const QGLContext*  context = 0);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, float  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, int  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, float  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QColor&  color);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QPoint&  point);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QTransform&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, float  x, float  y, float  z, float  w);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, float  x, float  y);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, float  x, float  y, float  z);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QTransform&  value);
   bool  link(QGLShaderProgram* theWrappedObject);
   void enableAttributeArray(QGLShaderProgram* theWrappedObject, int  location);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const unsigned int*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const int*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const unsigned int*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const int*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const float*  values, int  count, int  tupleSize);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  count);
   unsigned int  programId(QGLShaderProgram* theWrappedObject) const;
   void enableAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const float*  values, int  count, int  tupleSize);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QSizeF&  size);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QSize&  size);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QPointF&  point);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QPoint&  point);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QColor&  color);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QColor&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, unsigned int  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, int  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QPointF&  point);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QSize&  size);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QSizeF&  size);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, float  x, float  y, float  z, float  w);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, float  x, float  y, float  z);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, float  x, float  y);
   void bindAttributeLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name, int  location);
   void bindAttributeLocation(QGLShaderProgram* theWrappedObject, const char*  name, int  location);
   bool  addShader(QGLShaderProgram* theWrappedObject, QGLShader*  shader);
   bool  addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QByteArray&  source);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   bool  bind(QGLShaderProgram* theWrappedObject);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, float  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const float*  values, int  columns, int  rows);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QColor&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, float  x, float  y, float  z, float  w);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, float  x, float  y);
   int  attributeLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   int  attributeLocation(QGLShaderProgram* theWrappedObject, const char*  name) const;
   int  uniformLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   int  uniformLocation(QGLShaderProgram* theWrappedObject, const char*  name) const;
   void disableAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const float*  values, int  tupleSize, int  stride = 0);
   QString  log(QGLShaderProgram* theWrappedObject) const;
};





class PythonQtShell_QGLWidget : public QGLWidget
{
public:
    PythonQtShell_QGLWidget(QGLContext*  context, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(context, parent, shareWidget, f),_wrapper(NULL) {};
    PythonQtShell_QGLWidget(QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(parent, shareWidget, f),_wrapper(NULL) {};
    PythonQtShell_QGLWidget(const QGLFormat&  format, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(format, parent, shareWidget, f),_wrapper(NULL) {};

virtual void initializeGL();
virtual void glInit();
virtual void resizeGL(int  w, int  h);
virtual void glDraw();
virtual void initializeOverlayGL();
virtual void updateGL();
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void updateOverlayGL();
virtual QPaintEngine*  paintEngine() const;
virtual void resizeOverlayGL(int  w, int  h);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void paintOverlayGL();
virtual void paintGL();
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
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
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void changeEvent(QEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual void enterEvent(QEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLWidget : public QGLWidget
{ public:
inline void promoted_initializeGL() { QGLWidget::initializeGL(); }
inline void promoted_glInit() { QGLWidget::glInit(); }
inline void promoted_resizeGL(int  w, int  h) { QGLWidget::resizeGL(w, h); }
inline void promoted_glDraw() { QGLWidget::glDraw(); }
inline void promoted_initializeOverlayGL() { QGLWidget::initializeOverlayGL(); }
inline void promoted_updateGL() { QGLWidget::updateGL(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QGLWidget::paintEvent(arg__1); }
inline void promoted_updateOverlayGL() { QGLWidget::updateOverlayGL(); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLWidget::paintEngine(); }
inline void promoted_resizeOverlayGL(int  w, int  h) { QGLWidget::resizeOverlayGL(w, h); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QGLWidget::resizeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QGLWidget::event(arg__1); }
inline void promoted_paintOverlayGL() { QGLWidget::paintOverlayGL(); }
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
   const QGLContext*  context(QGLWidget* theWrappedObject) const;
   QImage  static_QGLWidget_convertToGLFormat(const QImage&  img);
   void initializeGL(QGLWidget* theWrappedObject);
   void doneCurrent(QGLWidget* theWrappedObject);
   void glInit(QGLWidget* theWrappedObject);
   const QGLContext*  overlayContext(QGLWidget* theWrappedObject) const;
   void setColormap(QGLWidget* theWrappedObject, const QGLColormap&  map);
   void resizeGL(QGLWidget* theWrappedObject, int  w, int  h);
   bool  isSharing(QGLWidget* theWrappedObject) const;
   void glDraw(QGLWidget* theWrappedObject);
   void renderText(QGLWidget* theWrappedObject, double  x, double  y, double  z, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   void renderText(QGLWidget* theWrappedObject, int  x, int  y, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1, int  format = 0x1908);
   QImage  grabFrameBuffer(QGLWidget* theWrappedObject, bool  withAlpha = false);
   bool  doubleBuffer(QGLWidget* theWrappedObject) const;
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QString&  fileName);
   void makeOverlayCurrent(QGLWidget* theWrappedObject);
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1, int  format = 0x1908);
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QImage&  image, unsigned int  target, int  format, QGLContext::BindOptions  options);
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, unsigned int  target, int  format, QGLContext::BindOptions  options);
   void initializeOverlayGL(QGLWidget* theWrappedObject);
   void deleteTexture(QGLWidget* theWrappedObject, unsigned int  tx_id);
   void paintEvent(QGLWidget* theWrappedObject, QPaintEvent*  arg__1);
   QPaintEngine*  paintEngine(QGLWidget* theWrappedObject) const;
   void resizeOverlayGL(QGLWidget* theWrappedObject, int  w, int  h);
   void drawTexture(QGLWidget* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void makeCurrent(QGLWidget* theWrappedObject);
   void drawTexture(QGLWidget* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void resizeEvent(QGLWidget* theWrappedObject, QResizeEvent*  arg__1);
   bool  event(QGLWidget* theWrappedObject, QEvent*  arg__1);
   void qglColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   QGLFormat  format(QGLWidget* theWrappedObject) const;
   void paintOverlayGL(QGLWidget* theWrappedObject);
   const QGLColormap*  colormap(QGLWidget* theWrappedObject) const;
   void swapBuffers(QGLWidget* theWrappedObject);
   QPixmap  renderPixmap(QGLWidget* theWrappedObject, int  w = 0, int  h = 0, bool  useContext = false);
   bool  isValid(QGLWidget* theWrappedObject) const;
   void qglClearColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   void paintGL(QGLWidget* theWrappedObject);
};


