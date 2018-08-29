#include "com_trolltech_qt_opengl0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QImage>
#include <QPixmap>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgl.h>
#include <qglbuffer.h>
#include <qglcolormap.h>
#include <qglframebufferobject.h>
#include <qglfunctions.h>
#include <qglpixelbuffer.h>
#include <qglshaderprogram.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qopenglcontext.h>
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
#include <qsurfaceformat.h>
#include <qtransform.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>
#include <qwindow.h>

QGLBuffer* PythonQtWrapper_QGLBuffer::new_QGLBuffer()
{ 
return new QGLBuffer(); }

QGLBuffer* PythonQtWrapper_QGLBuffer::new_QGLBuffer(QGLBuffer::Type  type)
{ 
return new QGLBuffer(type); }

QGLBuffer* PythonQtWrapper_QGLBuffer::new_QGLBuffer(const QGLBuffer&  other)
{ 
return new QGLBuffer(other); }

void PythonQtWrapper_QGLBuffer::allocate(QGLBuffer* theWrappedObject, const void*  data, int  count)
{
  ( theWrappedObject->allocate(data, count));
}

void PythonQtWrapper_QGLBuffer::allocate(QGLBuffer* theWrappedObject, int  count)
{
  ( theWrappedObject->allocate(count));
}

bool  PythonQtWrapper_QGLBuffer::bind(QGLBuffer* theWrappedObject)
{
  return ( theWrappedObject->bind());
}

uint  PythonQtWrapper_QGLBuffer::bufferId(QGLBuffer* theWrappedObject) const
{
  return ( theWrappedObject->bufferId());
}

bool  PythonQtWrapper_QGLBuffer::create(QGLBuffer* theWrappedObject)
{
  return ( theWrappedObject->create());
}

void PythonQtWrapper_QGLBuffer::destroy(QGLBuffer* theWrappedObject)
{
  ( theWrappedObject->destroy());
}

bool  PythonQtWrapper_QGLBuffer::isCreated(QGLBuffer* theWrappedObject) const
{
  return ( theWrappedObject->isCreated());
}

void*  PythonQtWrapper_QGLBuffer::map(QGLBuffer* theWrappedObject, QGLBuffer::Access  access)
{
  return ( theWrappedObject->map(access));
}

QGLBuffer*  PythonQtWrapper_QGLBuffer::operator_assign(QGLBuffer* theWrappedObject, const QGLBuffer&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QGLBuffer::read(QGLBuffer* theWrappedObject, int  offset, void*  data, int  count)
{
  return ( theWrappedObject->read(offset, data, count));
}

void PythonQtWrapper_QGLBuffer::release(QGLBuffer* theWrappedObject)
{
  ( theWrappedObject->release());
}

void PythonQtWrapper_QGLBuffer::static_QGLBuffer_release(QGLBuffer::Type  type)
{
  (QGLBuffer::release(type));
}

void PythonQtWrapper_QGLBuffer::setUsagePattern(QGLBuffer* theWrappedObject, QGLBuffer::UsagePattern  value)
{
  ( theWrappedObject->setUsagePattern(value));
}

int  PythonQtWrapper_QGLBuffer::size(QGLBuffer* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QGLBuffer::Type  PythonQtWrapper_QGLBuffer::type(QGLBuffer* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

bool  PythonQtWrapper_QGLBuffer::unmap(QGLBuffer* theWrappedObject)
{
  return ( theWrappedObject->unmap());
}

QGLBuffer::UsagePattern  PythonQtWrapper_QGLBuffer::usagePattern(QGLBuffer* theWrappedObject) const
{
  return ( theWrappedObject->usagePattern());
}

void PythonQtWrapper_QGLBuffer::write(QGLBuffer* theWrappedObject, int  offset, const void*  data, int  count)
{
  ( theWrappedObject->write(offset, data, count));
}



PythonQtShell_QGLColormap::~PythonQtShell_QGLColormap() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QGLColormap* PythonQtWrapper_QGLColormap::new_QGLColormap()
{ 
return new PythonQtShell_QGLColormap(); }

QGLColormap* PythonQtWrapper_QGLColormap::new_QGLColormap(const QGLColormap&  arg__1)
{ 
return new PythonQtShell_QGLColormap(arg__1); }

QColor  PythonQtWrapper_QGLColormap::entryColor(QGLColormap* theWrappedObject, int  idx) const
{
  return ( theWrappedObject->entryColor(idx));
}

unsigned int  PythonQtWrapper_QGLColormap::entryRgb(QGLColormap* theWrappedObject, int  idx) const
{
  return ( theWrappedObject->entryRgb(idx));
}

int  PythonQtWrapper_QGLColormap::find(QGLColormap* theWrappedObject, unsigned int  color) const
{
  return ( theWrappedObject->find(color));
}

int  PythonQtWrapper_QGLColormap::findNearest(QGLColormap* theWrappedObject, unsigned int  color) const
{
  return ( theWrappedObject->findNearest(color));
}

Qt::HANDLE  PythonQtWrapper_QGLColormap::handle(QGLColormap* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QGLColormap*)theWrappedObject)->promoted_handle());
}

bool  PythonQtWrapper_QGLColormap::isEmpty(QGLColormap* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

void PythonQtWrapper_QGLColormap::setEntry(QGLColormap* theWrappedObject, int  idx, const QColor&  color)
{
  ( theWrappedObject->setEntry(idx, color));
}

void PythonQtWrapper_QGLColormap::setEntry(QGLColormap* theWrappedObject, int  idx, unsigned int  color)
{
  ( theWrappedObject->setEntry(idx, color));
}

void PythonQtWrapper_QGLColormap::setHandle(QGLColormap* theWrappedObject, Qt::HANDLE  ahandle)
{
  ( ((PythonQtPublicPromoter_QGLColormap*)theWrappedObject)->promoted_setHandle(ahandle));
}

int  PythonQtWrapper_QGLColormap::size(QGLColormap* theWrappedObject) const
{
  return ( theWrappedObject->size());
}



PythonQtShell_QGLContext::~PythonQtShell_QGLContext() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGLContext::chooseContext(const QGLContext*  shareContext0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("chooseContext");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGLContext*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&shareContext0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("chooseContext", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLContext::chooseContext(shareContext0);
}
bool  PythonQtShell_QGLContext::create(const QGLContext*  shareContext0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("create");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGLContext*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&shareContext0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLContext::create(shareContext0);
}
void PythonQtShell_QGLContext::doneCurrent()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("doneCurrent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLContext::doneCurrent();
}
void PythonQtShell_QGLContext::makeCurrent()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("makeCurrent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLContext::makeCurrent();
}
void PythonQtShell_QGLContext::swapBuffers() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("swapBuffers");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLContext::swapBuffers();
}
QGLContext* PythonQtWrapper_QGLContext::new_QGLContext(const QGLFormat&  format)
{ 
return new PythonQtShell_QGLContext(format); }

QGLContext* PythonQtWrapper_QGLContext::new_QGLContext(const QGLFormat&  format, QPaintDevice*  device)
{ 
return new PythonQtShell_QGLContext(format, device); }

bool  PythonQtWrapper_QGLContext::static_QGLContext_areSharing(const QGLContext*  context1, const QGLContext*  context2)
{
  return (QGLContext::areSharing(context1, context2));
}

uint  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QImage&  image, GLenum  target, GLint  format)
{
  return ( theWrappedObject->bindTexture(image, target, format));
}

uint  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QImage&  image, GLenum  target, GLint  format, QGLContext::BindOptions  options)
{
  return ( theWrappedObject->bindTexture(image, target, format, options));
}

uint  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, GLenum  target, GLint  format)
{
  return ( theWrappedObject->bindTexture(pixmap, target, format));
}

uint  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, GLenum  target, GLint  format, QGLContext::BindOptions  options)
{
  return ( theWrappedObject->bindTexture(pixmap, target, format, options));
}

uint  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->bindTexture(fileName));
}

bool  PythonQtWrapper_QGLContext::chooseContext(QGLContext* theWrappedObject, const QGLContext*  shareContext)
{
  return ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_chooseContext(shareContext));
}

uint  PythonQtWrapper_QGLContext::colorIndex(QGLContext* theWrappedObject, const QColor&  c) const
{
  return ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_colorIndex(c));
}

QOpenGLContext*  PythonQtWrapper_QGLContext::contextHandle(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->contextHandle());
}

bool  PythonQtWrapper_QGLContext::create(QGLContext* theWrappedObject, const QGLContext*  shareContext)
{
  return ( theWrappedObject->create(shareContext));
}

const QGLContext*  PythonQtWrapper_QGLContext::static_QGLContext_currentContext()
{
  return (QGLContext::currentContext());
}

void PythonQtWrapper_QGLContext::deleteTexture(QGLContext* theWrappedObject, uint  tx_id)
{
  ( theWrappedObject->deleteTexture(tx_id));
}

QPaintDevice*  PythonQtWrapper_QGLContext::device(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

bool  PythonQtWrapper_QGLContext::deviceIsPixmap(QGLContext* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_deviceIsPixmap());
}

void PythonQtWrapper_QGLContext::doneCurrent(QGLContext* theWrappedObject)
{
  ( theWrappedObject->doneCurrent());
}

void PythonQtWrapper_QGLContext::drawTexture(QGLContext* theWrappedObject, const QPointF&  point, uint  textureId, GLenum  textureTarget)
{
  ( theWrappedObject->drawTexture(point, textureId, textureTarget));
}

void PythonQtWrapper_QGLContext::drawTexture(QGLContext* theWrappedObject, const QRectF&  target, uint  textureId, GLenum  textureTarget)
{
  ( theWrappedObject->drawTexture(target, textureId, textureTarget));
}

QGLFormat  PythonQtWrapper_QGLContext::format(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QGLContext*  PythonQtWrapper_QGLContext::static_QGLContext_fromOpenGLContext(QOpenGLContext*  platformContext)
{
  return (QGLContext::fromOpenGLContext(platformContext));
}

QGLFunctions*  PythonQtWrapper_QGLContext::functions(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->functions());
}

bool  PythonQtWrapper_QGLContext::initialized(QGLContext* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_initialized());
}

bool  PythonQtWrapper_QGLContext::isSharing(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->isSharing());
}

bool  PythonQtWrapper_QGLContext::isValid(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QGLContext::makeCurrent(QGLContext* theWrappedObject)
{
  ( theWrappedObject->makeCurrent());
}

void PythonQtWrapper_QGLContext::moveToThread(QGLContext* theWrappedObject, QThread*  thread)
{
  ( theWrappedObject->moveToThread(thread));
}

QColor  PythonQtWrapper_QGLContext::overlayTransparentColor(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->overlayTransparentColor());
}

QGLFormat  PythonQtWrapper_QGLContext::requestedFormat(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->requestedFormat());
}

void PythonQtWrapper_QGLContext::reset(QGLContext* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QGLContext::setFormat(QGLContext* theWrappedObject, const QGLFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QGLContext::setInitialized(QGLContext* theWrappedObject, bool  on)
{
  ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_setInitialized(on));
}

void PythonQtWrapper_QGLContext::static_QGLContext_setTextureCacheLimit(int  size)
{
  (QGLContext::setTextureCacheLimit(size));
}

void PythonQtWrapper_QGLContext::setValid(QGLContext* theWrappedObject, bool  valid)
{
  ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_setValid(valid));
}

void PythonQtWrapper_QGLContext::setWindowCreated(QGLContext* theWrappedObject, bool  on)
{
  ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_setWindowCreated(on));
}

void PythonQtWrapper_QGLContext::swapBuffers(QGLContext* theWrappedObject) const
{
  ( theWrappedObject->swapBuffers());
}

int  PythonQtWrapper_QGLContext::static_QGLContext_textureCacheLimit()
{
  return (QGLContext::textureCacheLimit());
}

bool  PythonQtWrapper_QGLContext::windowCreated(QGLContext* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_windowCreated());
}



QGLFormat* PythonQtWrapper_QGLFormat::new_QGLFormat()
{ 
return new QGLFormat(); }

QGLFormat* PythonQtWrapper_QGLFormat::new_QGLFormat(QGL::FormatOptions  options, int  plane)
{ 
return new QGLFormat(options, plane); }

QGLFormat* PythonQtWrapper_QGLFormat::new_QGLFormat(const QGLFormat&  other)
{ 
return new QGLFormat(other); }

bool  PythonQtWrapper_QGLFormat::accum(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->accum());
}

int  PythonQtWrapper_QGLFormat::accumBufferSize(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->accumBufferSize());
}

bool  PythonQtWrapper_QGLFormat::alpha(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->alpha());
}

int  PythonQtWrapper_QGLFormat::alphaBufferSize(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->alphaBufferSize());
}

int  PythonQtWrapper_QGLFormat::blueBufferSize(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->blueBufferSize());
}

QGLFormat  PythonQtWrapper_QGLFormat::static_QGLFormat_defaultFormat()
{
  return (QGLFormat::defaultFormat());
}

QGLFormat  PythonQtWrapper_QGLFormat::static_QGLFormat_defaultOverlayFormat()
{
  return (QGLFormat::defaultOverlayFormat());
}

bool  PythonQtWrapper_QGLFormat::depth(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->depth());
}

int  PythonQtWrapper_QGLFormat::depthBufferSize(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->depthBufferSize());
}

bool  PythonQtWrapper_QGLFormat::directRendering(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->directRendering());
}

bool  PythonQtWrapper_QGLFormat::doubleBuffer(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->doubleBuffer());
}

QGLFormat  PythonQtWrapper_QGLFormat::static_QGLFormat_fromSurfaceFormat(const QSurfaceFormat&  format)
{
  return (QGLFormat::fromSurfaceFormat(format));
}

int  PythonQtWrapper_QGLFormat::greenBufferSize(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->greenBufferSize());
}

bool  PythonQtWrapper_QGLFormat::static_QGLFormat_hasOpenGL()
{
  return (QGLFormat::hasOpenGL());
}

bool  PythonQtWrapper_QGLFormat::static_QGLFormat_hasOpenGLOverlays()
{
  return (QGLFormat::hasOpenGLOverlays());
}

bool  PythonQtWrapper_QGLFormat::hasOverlay(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->hasOverlay());
}

int  PythonQtWrapper_QGLFormat::majorVersion(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->majorVersion());
}

int  PythonQtWrapper_QGLFormat::minorVersion(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->minorVersion());
}

QGLFormat::OpenGLVersionFlags  PythonQtWrapper_QGLFormat::static_QGLFormat_openGLVersionFlags()
{
  return (QGLFormat::openGLVersionFlags());
}

bool  PythonQtWrapper_QGLFormat::__eq__(QGLFormat* theWrappedObject, const QGLFormat&  arg__2)
{
  return ( (*theWrappedObject)== arg__2);
}

int  PythonQtWrapper_QGLFormat::plane(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->plane());
}

QGLFormat::OpenGLContextProfile  PythonQtWrapper_QGLFormat::profile(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->profile());
}

int  PythonQtWrapper_QGLFormat::redBufferSize(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->redBufferSize());
}

bool  PythonQtWrapper_QGLFormat::rgba(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->rgba());
}

bool  PythonQtWrapper_QGLFormat::sampleBuffers(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->sampleBuffers());
}

int  PythonQtWrapper_QGLFormat::samples(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->samples());
}

void PythonQtWrapper_QGLFormat::setAccum(QGLFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setAccum(enable));
}

void PythonQtWrapper_QGLFormat::setAccumBufferSize(QGLFormat* theWrappedObject, int  size)
{
  ( theWrappedObject->setAccumBufferSize(size));
}

void PythonQtWrapper_QGLFormat::setAlpha(QGLFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setAlpha(enable));
}

void PythonQtWrapper_QGLFormat::setAlphaBufferSize(QGLFormat* theWrappedObject, int  size)
{
  ( theWrappedObject->setAlphaBufferSize(size));
}

void PythonQtWrapper_QGLFormat::setBlueBufferSize(QGLFormat* theWrappedObject, int  size)
{
  ( theWrappedObject->setBlueBufferSize(size));
}

void PythonQtWrapper_QGLFormat::static_QGLFormat_setDefaultFormat(const QGLFormat&  f)
{
  (QGLFormat::setDefaultFormat(f));
}

void PythonQtWrapper_QGLFormat::static_QGLFormat_setDefaultOverlayFormat(const QGLFormat&  f)
{
  (QGLFormat::setDefaultOverlayFormat(f));
}

void PythonQtWrapper_QGLFormat::setDepth(QGLFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setDepth(enable));
}

void PythonQtWrapper_QGLFormat::setDepthBufferSize(QGLFormat* theWrappedObject, int  size)
{
  ( theWrappedObject->setDepthBufferSize(size));
}

void PythonQtWrapper_QGLFormat::setDirectRendering(QGLFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setDirectRendering(enable));
}

void PythonQtWrapper_QGLFormat::setDoubleBuffer(QGLFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setDoubleBuffer(enable));
}

void PythonQtWrapper_QGLFormat::setGreenBufferSize(QGLFormat* theWrappedObject, int  size)
{
  ( theWrappedObject->setGreenBufferSize(size));
}

void PythonQtWrapper_QGLFormat::setOption(QGLFormat* theWrappedObject, QGL::FormatOptions  opt)
{
  ( theWrappedObject->setOption(opt));
}

void PythonQtWrapper_QGLFormat::setOverlay(QGLFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setOverlay(enable));
}

void PythonQtWrapper_QGLFormat::setPlane(QGLFormat* theWrappedObject, int  plane)
{
  ( theWrappedObject->setPlane(plane));
}

void PythonQtWrapper_QGLFormat::setProfile(QGLFormat* theWrappedObject, QGLFormat::OpenGLContextProfile  profile)
{
  ( theWrappedObject->setProfile(profile));
}

void PythonQtWrapper_QGLFormat::setRedBufferSize(QGLFormat* theWrappedObject, int  size)
{
  ( theWrappedObject->setRedBufferSize(size));
}

void PythonQtWrapper_QGLFormat::setRgba(QGLFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setRgba(enable));
}

void PythonQtWrapper_QGLFormat::setSampleBuffers(QGLFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setSampleBuffers(enable));
}

void PythonQtWrapper_QGLFormat::setSamples(QGLFormat* theWrappedObject, int  numSamples)
{
  ( theWrappedObject->setSamples(numSamples));
}

void PythonQtWrapper_QGLFormat::setStencil(QGLFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setStencil(enable));
}

void PythonQtWrapper_QGLFormat::setStencilBufferSize(QGLFormat* theWrappedObject, int  size)
{
  ( theWrappedObject->setStencilBufferSize(size));
}

void PythonQtWrapper_QGLFormat::setStereo(QGLFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setStereo(enable));
}

void PythonQtWrapper_QGLFormat::setSwapInterval(QGLFormat* theWrappedObject, int  interval)
{
  ( theWrappedObject->setSwapInterval(interval));
}

void PythonQtWrapper_QGLFormat::setVersion(QGLFormat* theWrappedObject, int  major, int  minor)
{
  ( theWrappedObject->setVersion(major, minor));
}

bool  PythonQtWrapper_QGLFormat::stencil(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->stencil());
}

int  PythonQtWrapper_QGLFormat::stencilBufferSize(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->stencilBufferSize());
}

bool  PythonQtWrapper_QGLFormat::stereo(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->stereo());
}

int  PythonQtWrapper_QGLFormat::swapInterval(QGLFormat* theWrappedObject) const
{
  return ( theWrappedObject->swapInterval());
}

bool  PythonQtWrapper_QGLFormat::testOption(QGLFormat* theWrappedObject, QGL::FormatOptions  opt) const
{
  return ( theWrappedObject->testOption(opt));
}

QSurfaceFormat  PythonQtWrapper_QGLFormat::static_QGLFormat_toSurfaceFormat(const QGLFormat&  format)
{
  return (QGLFormat::toSurfaceFormat(format));
}

QString PythonQtWrapper_QGLFormat::py_toString(QGLFormat* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QGLFramebufferObject::~PythonQtShell_QGLFramebufferObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGLFramebufferObject::devType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("devType");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLFramebufferObject::devType();
}
void PythonQtShell_QGLFramebufferObject::initPainter(QPainter*  painter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("initPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&painter0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLFramebufferObject::initPainter(painter0);
}
int  PythonQtShell_QGLFramebufferObject::metric(QPaintDevice::PaintDeviceMetric  metric0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metric");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&metric0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLFramebufferObject::metric(metric0);
}
QPaintEngine*  PythonQtShell_QGLFramebufferObject::paintEngine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paintEngine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintEngine*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
          } else {
            returnValue = *((QPaintEngine**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLFramebufferObject::paintEngine();
}
QPaintDevice*  PythonQtShell_QGLFramebufferObject::redirected(QPoint*  offset0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("redirected");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue;
      void* args[2] = {NULL, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("redirected", methodInfo, result);
          } else {
            returnValue = *((QPaintDevice**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLFramebufferObject::redirected(offset0);
}
QPainter*  PythonQtShell_QGLFramebufferObject::sharedPainter() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sharedPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sharedPainter", methodInfo, result);
          } else {
            returnValue = *((QPainter**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLFramebufferObject::sharedPainter();
}
QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(const QSize&  size, GLenum  target)
{ 
return new PythonQtShell_QGLFramebufferObject(size, target); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(const QSize&  size, QGLFramebufferObject::Attachment  attachment, GLenum  target, GLenum  internal_format)
{ 
return new PythonQtShell_QGLFramebufferObject(size, attachment, target, internal_format); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(const QSize&  size, const QGLFramebufferObjectFormat&  format)
{ 
return new PythonQtShell_QGLFramebufferObject(size, format); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(int  width, int  height, GLenum  target)
{ 
return new PythonQtShell_QGLFramebufferObject(width, height, target); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, GLenum  target, GLenum  internal_format)
{ 
return new PythonQtShell_QGLFramebufferObject(width, height, attachment, target, internal_format); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(int  width, int  height, const QGLFramebufferObjectFormat&  format)
{ 
return new PythonQtShell_QGLFramebufferObject(width, height, format); }

QGLFramebufferObject::Attachment  PythonQtWrapper_QGLFramebufferObject::attachment(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->attachment());
}

bool  PythonQtWrapper_QGLFramebufferObject::bind(QGLFramebufferObject* theWrappedObject)
{
  return ( theWrappedObject->bind());
}

bool  PythonQtWrapper_QGLFramebufferObject::static_QGLFramebufferObject_bindDefault()
{
  return (QGLFramebufferObject::bindDefault());
}

void PythonQtWrapper_QGLFramebufferObject::static_QGLFramebufferObject_blitFramebuffer(QGLFramebufferObject*  target, const QRect&  targetRect, QGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers, GLenum  filter)
{
  (QGLFramebufferObject::blitFramebuffer(target, targetRect, source, sourceRect, buffers, filter));
}

void PythonQtWrapper_QGLFramebufferObject::drawTexture(QGLFramebufferObject* theWrappedObject, const QPointF&  point, uint  textureId, GLenum  textureTarget)
{
  ( theWrappedObject->drawTexture(point, textureId, textureTarget));
}

void PythonQtWrapper_QGLFramebufferObject::drawTexture(QGLFramebufferObject* theWrappedObject, const QRectF&  target, uint  textureId, GLenum  textureTarget)
{
  ( theWrappedObject->drawTexture(target, textureId, textureTarget));
}

QGLFramebufferObjectFormat  PythonQtWrapper_QGLFramebufferObject::format(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

uint  PythonQtWrapper_QGLFramebufferObject::handle(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

bool  PythonQtWrapper_QGLFramebufferObject::static_QGLFramebufferObject_hasOpenGLFramebufferBlit()
{
  return (QGLFramebufferObject::hasOpenGLFramebufferBlit());
}

bool  PythonQtWrapper_QGLFramebufferObject::static_QGLFramebufferObject_hasOpenGLFramebufferObjects()
{
  return (QGLFramebufferObject::hasOpenGLFramebufferObjects());
}

bool  PythonQtWrapper_QGLFramebufferObject::isBound(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->isBound());
}

bool  PythonQtWrapper_QGLFramebufferObject::isValid(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QGLFramebufferObject::release(QGLFramebufferObject* theWrappedObject)
{
  return ( theWrappedObject->release());
}

QSize  PythonQtWrapper_QGLFramebufferObject::size(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

uint  PythonQtWrapper_QGLFramebufferObject::texture(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->texture());
}

QImage  PythonQtWrapper_QGLFramebufferObject::toImage(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->toImage());
}



QGLFramebufferObjectFormat* PythonQtWrapper_QGLFramebufferObjectFormat::new_QGLFramebufferObjectFormat()
{ 
return new QGLFramebufferObjectFormat(); }

QGLFramebufferObjectFormat* PythonQtWrapper_QGLFramebufferObjectFormat::new_QGLFramebufferObjectFormat(const QGLFramebufferObjectFormat&  other)
{ 
return new QGLFramebufferObjectFormat(other); }

QGLFramebufferObject::Attachment  PythonQtWrapper_QGLFramebufferObjectFormat::attachment(QGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->attachment());
}

GLenum  PythonQtWrapper_QGLFramebufferObjectFormat::internalTextureFormat(QGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->internalTextureFormat());
}

bool  PythonQtWrapper_QGLFramebufferObjectFormat::mipmap(QGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->mipmap());
}

bool  PythonQtWrapper_QGLFramebufferObjectFormat::__ne__(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QGLFramebufferObjectFormat*  PythonQtWrapper_QGLFramebufferObjectFormat::operator_assign(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QGLFramebufferObjectFormat::__eq__(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QGLFramebufferObjectFormat::samples(QGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->samples());
}

void PythonQtWrapper_QGLFramebufferObjectFormat::setAttachment(QGLFramebufferObjectFormat* theWrappedObject, QGLFramebufferObject::Attachment  attachment)
{
  ( theWrappedObject->setAttachment(attachment));
}

void PythonQtWrapper_QGLFramebufferObjectFormat::setInternalTextureFormat(QGLFramebufferObjectFormat* theWrappedObject, GLenum  internalTextureFormat)
{
  ( theWrappedObject->setInternalTextureFormat(internalTextureFormat));
}

void PythonQtWrapper_QGLFramebufferObjectFormat::setMipmap(QGLFramebufferObjectFormat* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setMipmap(enabled));
}

void PythonQtWrapper_QGLFramebufferObjectFormat::setSamples(QGLFramebufferObjectFormat* theWrappedObject, int  samples)
{
  ( theWrappedObject->setSamples(samples));
}

void PythonQtWrapper_QGLFramebufferObjectFormat::setTextureTarget(QGLFramebufferObjectFormat* theWrappedObject, GLenum  target)
{
  ( theWrappedObject->setTextureTarget(target));
}

GLenum  PythonQtWrapper_QGLFramebufferObjectFormat::textureTarget(QGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->textureTarget());
}



QGLFunctions* PythonQtWrapper_QGLFunctions::new_QGLFunctions()
{ 
return new QGLFunctions(); }

QGLFunctions* PythonQtWrapper_QGLFunctions::new_QGLFunctions(const QGLContext*  context)
{ 
return new QGLFunctions(context); }

void PythonQtWrapper_QGLFunctions::glActiveTexture(QGLFunctions* theWrappedObject, GLenum  texture)
{
  ( theWrappedObject->glActiveTexture(texture));
}

void PythonQtWrapper_QGLFunctions::glAttachShader(QGLFunctions* theWrappedObject, uint  program, uint  shader)
{
  ( theWrappedObject->glAttachShader(program, shader));
}

void PythonQtWrapper_QGLFunctions::glBindAttribLocation(QGLFunctions* theWrappedObject, uint  program, uint  index, const char*  name)
{
  ( theWrappedObject->glBindAttribLocation(program, index, name));
}

void PythonQtWrapper_QGLFunctions::glBindBuffer(QGLFunctions* theWrappedObject, GLenum  target, uint  buffer)
{
  ( theWrappedObject->glBindBuffer(target, buffer));
}

void PythonQtWrapper_QGLFunctions::glBindFramebuffer(QGLFunctions* theWrappedObject, GLenum  target, uint  framebuffer)
{
  ( theWrappedObject->glBindFramebuffer(target, framebuffer));
}

void PythonQtWrapper_QGLFunctions::glBindRenderbuffer(QGLFunctions* theWrappedObject, GLenum  target, uint  renderbuffer)
{
  ( theWrappedObject->glBindRenderbuffer(target, renderbuffer));
}

void PythonQtWrapper_QGLFunctions::glBlendColor(QGLFunctions* theWrappedObject, GLclampf  red, GLclampf  green, GLclampf  blue, GLclampf  alpha)
{
  ( theWrappedObject->glBlendColor(red, green, blue, alpha));
}

void PythonQtWrapper_QGLFunctions::glBlendEquation(QGLFunctions* theWrappedObject, GLenum  mode)
{
  ( theWrappedObject->glBlendEquation(mode));
}

void PythonQtWrapper_QGLFunctions::glBlendEquationSeparate(QGLFunctions* theWrappedObject, GLenum  modeRGB, GLenum  modeAlpha)
{
  ( theWrappedObject->glBlendEquationSeparate(modeRGB, modeAlpha));
}

void PythonQtWrapper_QGLFunctions::glBlendFuncSeparate(QGLFunctions* theWrappedObject, GLenum  srcRGB, GLenum  dstRGB, GLenum  srcAlpha, GLenum  dstAlpha)
{
  ( theWrappedObject->glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha));
}

GLenum  PythonQtWrapper_QGLFunctions::glCheckFramebufferStatus(QGLFunctions* theWrappedObject, GLenum  target)
{
  return ( theWrappedObject->glCheckFramebufferStatus(target));
}

void PythonQtWrapper_QGLFunctions::glClearDepthf(QGLFunctions* theWrappedObject, GLclampf  depth)
{
  ( theWrappedObject->glClearDepthf(depth));
}

void PythonQtWrapper_QGLFunctions::glCompileShader(QGLFunctions* theWrappedObject, uint  shader)
{
  ( theWrappedObject->glCompileShader(shader));
}

void PythonQtWrapper_QGLFunctions::glCompressedTexImage2D(QGLFunctions* theWrappedObject, GLenum  target, GLint  level, GLenum  internalformat, GLsizei  width, GLsizei  height, GLint  border, GLsizei  imageSize, const void*  data)
{
  ( theWrappedObject->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data));
}

void PythonQtWrapper_QGLFunctions::glCompressedTexSubImage2D(QGLFunctions* theWrappedObject, GLenum  target, GLint  level, GLint  xoffset, GLint  yoffset, GLsizei  width, GLsizei  height, GLenum  format, GLsizei  imageSize, const void*  data)
{
  ( theWrappedObject->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data));
}

uint  PythonQtWrapper_QGLFunctions::glCreateProgram(QGLFunctions* theWrappedObject)
{
  return ( theWrappedObject->glCreateProgram());
}

uint  PythonQtWrapper_QGLFunctions::glCreateShader(QGLFunctions* theWrappedObject, GLenum  type)
{
  return ( theWrappedObject->glCreateShader(type));
}

void PythonQtWrapper_QGLFunctions::glDeleteBuffers(QGLFunctions* theWrappedObject, GLsizei  n, const uint*  buffers)
{
  ( theWrappedObject->glDeleteBuffers(n, buffers));
}

void PythonQtWrapper_QGLFunctions::glDeleteFramebuffers(QGLFunctions* theWrappedObject, GLsizei  n, const uint*  framebuffers)
{
  ( theWrappedObject->glDeleteFramebuffers(n, framebuffers));
}

void PythonQtWrapper_QGLFunctions::glDeleteProgram(QGLFunctions* theWrappedObject, uint  program)
{
  ( theWrappedObject->glDeleteProgram(program));
}

void PythonQtWrapper_QGLFunctions::glDeleteRenderbuffers(QGLFunctions* theWrappedObject, GLsizei  n, const uint*  renderbuffers)
{
  ( theWrappedObject->glDeleteRenderbuffers(n, renderbuffers));
}

void PythonQtWrapper_QGLFunctions::glDeleteShader(QGLFunctions* theWrappedObject, uint  shader)
{
  ( theWrappedObject->glDeleteShader(shader));
}

void PythonQtWrapper_QGLFunctions::glDepthRangef(QGLFunctions* theWrappedObject, GLclampf  zNear, GLclampf  zFar)
{
  ( theWrappedObject->glDepthRangef(zNear, zFar));
}

void PythonQtWrapper_QGLFunctions::glDetachShader(QGLFunctions* theWrappedObject, uint  program, uint  shader)
{
  ( theWrappedObject->glDetachShader(program, shader));
}

void PythonQtWrapper_QGLFunctions::glDisableVertexAttribArray(QGLFunctions* theWrappedObject, uint  index)
{
  ( theWrappedObject->glDisableVertexAttribArray(index));
}

void PythonQtWrapper_QGLFunctions::glEnableVertexAttribArray(QGLFunctions* theWrappedObject, uint  index)
{
  ( theWrappedObject->glEnableVertexAttribArray(index));
}

void PythonQtWrapper_QGLFunctions::glFramebufferRenderbuffer(QGLFunctions* theWrappedObject, GLenum  target, GLenum  attachment, GLenum  renderbuffertarget, uint  renderbuffer)
{
  ( theWrappedObject->glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer));
}

void PythonQtWrapper_QGLFunctions::glFramebufferTexture2D(QGLFunctions* theWrappedObject, GLenum  target, GLenum  attachment, GLenum  textarget, uint  texture, GLint  level)
{
  ( theWrappedObject->glFramebufferTexture2D(target, attachment, textarget, texture, level));
}

void PythonQtWrapper_QGLFunctions::glGenBuffers(QGLFunctions* theWrappedObject, GLsizei  n, uint*  buffers)
{
  ( theWrappedObject->glGenBuffers(n, buffers));
}

void PythonQtWrapper_QGLFunctions::glGenFramebuffers(QGLFunctions* theWrappedObject, GLsizei  n, uint*  framebuffers)
{
  ( theWrappedObject->glGenFramebuffers(n, framebuffers));
}

void PythonQtWrapper_QGLFunctions::glGenRenderbuffers(QGLFunctions* theWrappedObject, GLsizei  n, uint*  renderbuffers)
{
  ( theWrappedObject->glGenRenderbuffers(n, renderbuffers));
}

void PythonQtWrapper_QGLFunctions::glGenerateMipmap(QGLFunctions* theWrappedObject, GLenum  target)
{
  ( theWrappedObject->glGenerateMipmap(target));
}

void PythonQtWrapper_QGLFunctions::glGetActiveAttrib(QGLFunctions* theWrappedObject, uint  program, uint  index, GLsizei  bufsize, GLsizei*  length, GLint*  size, GLenum*  type, char*  name)
{
  ( theWrappedObject->glGetActiveAttrib(program, index, bufsize, length, size, type, name));
}

void PythonQtWrapper_QGLFunctions::glGetActiveUniform(QGLFunctions* theWrappedObject, uint  program, uint  index, GLsizei  bufsize, GLsizei*  length, GLint*  size, GLenum*  type, char*  name)
{
  ( theWrappedObject->glGetActiveUniform(program, index, bufsize, length, size, type, name));
}

void PythonQtWrapper_QGLFunctions::glGetAttachedShaders(QGLFunctions* theWrappedObject, uint  program, GLsizei  maxcount, GLsizei*  count, uint*  shaders)
{
  ( theWrappedObject->glGetAttachedShaders(program, maxcount, count, shaders));
}

int  PythonQtWrapper_QGLFunctions::glGetAttribLocation(QGLFunctions* theWrappedObject, uint  program, const char*  name)
{
  return ( theWrappedObject->glGetAttribLocation(program, name));
}

void PythonQtWrapper_QGLFunctions::glGetBufferParameteriv(QGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, GLint*  params)
{
  ( theWrappedObject->glGetBufferParameteriv(target, pname, params));
}

void PythonQtWrapper_QGLFunctions::glGetFramebufferAttachmentParameteriv(QGLFunctions* theWrappedObject, GLenum  target, GLenum  attachment, GLenum  pname, GLint*  params)
{
  ( theWrappedObject->glGetFramebufferAttachmentParameteriv(target, attachment, pname, params));
}

void PythonQtWrapper_QGLFunctions::glGetProgramInfoLog(QGLFunctions* theWrappedObject, uint  program, GLsizei  bufsize, GLsizei*  length, char*  infolog)
{
  ( theWrappedObject->glGetProgramInfoLog(program, bufsize, length, infolog));
}

void PythonQtWrapper_QGLFunctions::glGetProgramiv(QGLFunctions* theWrappedObject, uint  program, GLenum  pname, GLint*  params)
{
  ( theWrappedObject->glGetProgramiv(program, pname, params));
}

void PythonQtWrapper_QGLFunctions::glGetRenderbufferParameteriv(QGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, GLint*  params)
{
  ( theWrappedObject->glGetRenderbufferParameteriv(target, pname, params));
}

void PythonQtWrapper_QGLFunctions::glGetShaderInfoLog(QGLFunctions* theWrappedObject, uint  shader, GLsizei  bufsize, GLsizei*  length, char*  infolog)
{
  ( theWrappedObject->glGetShaderInfoLog(shader, bufsize, length, infolog));
}

void PythonQtWrapper_QGLFunctions::glGetShaderPrecisionFormat(QGLFunctions* theWrappedObject, GLenum  shadertype, GLenum  precisiontype, GLint*  range, GLint*  precision)
{
  ( theWrappedObject->glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision));
}

void PythonQtWrapper_QGLFunctions::glGetShaderSource(QGLFunctions* theWrappedObject, uint  shader, GLsizei  bufsize, GLsizei*  length, char*  source)
{
  ( theWrappedObject->glGetShaderSource(shader, bufsize, length, source));
}

void PythonQtWrapper_QGLFunctions::glGetShaderiv(QGLFunctions* theWrappedObject, uint  shader, GLenum  pname, GLint*  params)
{
  ( theWrappedObject->glGetShaderiv(shader, pname, params));
}

int  PythonQtWrapper_QGLFunctions::glGetUniformLocation(QGLFunctions* theWrappedObject, uint  program, const char*  name)
{
  return ( theWrappedObject->glGetUniformLocation(program, name));
}

void PythonQtWrapper_QGLFunctions::glGetUniformfv(QGLFunctions* theWrappedObject, uint  program, GLint  location, GLfloat*  params)
{
  ( theWrappedObject->glGetUniformfv(program, location, params));
}

void PythonQtWrapper_QGLFunctions::glGetUniformiv(QGLFunctions* theWrappedObject, uint  program, GLint  location, GLint*  params)
{
  ( theWrappedObject->glGetUniformiv(program, location, params));
}

void PythonQtWrapper_QGLFunctions::glGetVertexAttribPointerv(QGLFunctions* theWrappedObject, uint  index, GLenum  pname, void**  pointer)
{
  ( theWrappedObject->glGetVertexAttribPointerv(index, pname, pointer));
}

void PythonQtWrapper_QGLFunctions::glGetVertexAttribfv(QGLFunctions* theWrappedObject, uint  index, GLenum  pname, GLfloat*  params)
{
  ( theWrappedObject->glGetVertexAttribfv(index, pname, params));
}

void PythonQtWrapper_QGLFunctions::glGetVertexAttribiv(QGLFunctions* theWrappedObject, uint  index, GLenum  pname, GLint*  params)
{
  ( theWrappedObject->glGetVertexAttribiv(index, pname, params));
}

GLboolean  PythonQtWrapper_QGLFunctions::glIsBuffer(QGLFunctions* theWrappedObject, uint  buffer)
{
  return ( theWrappedObject->glIsBuffer(buffer));
}

GLboolean  PythonQtWrapper_QGLFunctions::glIsFramebuffer(QGLFunctions* theWrappedObject, uint  framebuffer)
{
  return ( theWrappedObject->glIsFramebuffer(framebuffer));
}

GLboolean  PythonQtWrapper_QGLFunctions::glIsProgram(QGLFunctions* theWrappedObject, uint  program)
{
  return ( theWrappedObject->glIsProgram(program));
}

GLboolean  PythonQtWrapper_QGLFunctions::glIsRenderbuffer(QGLFunctions* theWrappedObject, uint  renderbuffer)
{
  return ( theWrappedObject->glIsRenderbuffer(renderbuffer));
}

GLboolean  PythonQtWrapper_QGLFunctions::glIsShader(QGLFunctions* theWrappedObject, uint  shader)
{
  return ( theWrappedObject->glIsShader(shader));
}

void PythonQtWrapper_QGLFunctions::glLinkProgram(QGLFunctions* theWrappedObject, uint  program)
{
  ( theWrappedObject->glLinkProgram(program));
}

void PythonQtWrapper_QGLFunctions::glReleaseShaderCompiler(QGLFunctions* theWrappedObject)
{
  ( theWrappedObject->glReleaseShaderCompiler());
}

void PythonQtWrapper_QGLFunctions::glRenderbufferStorage(QGLFunctions* theWrappedObject, GLenum  target, GLenum  internalformat, GLsizei  width, GLsizei  height)
{
  ( theWrappedObject->glRenderbufferStorage(target, internalformat, width, height));
}

void PythonQtWrapper_QGLFunctions::glSampleCoverage(QGLFunctions* theWrappedObject, GLclampf  value, GLboolean  invert)
{
  ( theWrappedObject->glSampleCoverage(value, invert));
}

void PythonQtWrapper_QGLFunctions::glShaderBinary(QGLFunctions* theWrappedObject, GLint  n, const uint*  shaders, GLenum  binaryformat, const void*  binary, GLint  length)
{
  ( theWrappedObject->glShaderBinary(n, shaders, binaryformat, binary, length));
}

void PythonQtWrapper_QGLFunctions::glShaderSource(QGLFunctions* theWrappedObject, uint  shader, GLsizei  count, const char**  string, const GLint*  length)
{
  ( theWrappedObject->glShaderSource(shader, count, string, length));
}

void PythonQtWrapper_QGLFunctions::glStencilFuncSeparate(QGLFunctions* theWrappedObject, GLenum  face, GLenum  func, GLint  ref, uint  mask)
{
  ( theWrappedObject->glStencilFuncSeparate(face, func, ref, mask));
}

void PythonQtWrapper_QGLFunctions::glStencilMaskSeparate(QGLFunctions* theWrappedObject, GLenum  face, uint  mask)
{
  ( theWrappedObject->glStencilMaskSeparate(face, mask));
}

void PythonQtWrapper_QGLFunctions::glStencilOpSeparate(QGLFunctions* theWrappedObject, GLenum  face, GLenum  fail, GLenum  zfail, GLenum  zpass)
{
  ( theWrappedObject->glStencilOpSeparate(face, fail, zfail, zpass));
}

void PythonQtWrapper_QGLFunctions::glUniform1f(QGLFunctions* theWrappedObject, GLint  location, GLfloat  x)
{
  ( theWrappedObject->glUniform1f(location, x));
}

void PythonQtWrapper_QGLFunctions::glUniform1fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v)
{
  ( theWrappedObject->glUniform1fv(location, count, v));
}

void PythonQtWrapper_QGLFunctions::glUniform1i(QGLFunctions* theWrappedObject, GLint  location, GLint  x)
{
  ( theWrappedObject->glUniform1i(location, x));
}

void PythonQtWrapper_QGLFunctions::glUniform1iv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v)
{
  ( theWrappedObject->glUniform1iv(location, count, v));
}

void PythonQtWrapper_QGLFunctions::glUniform2f(QGLFunctions* theWrappedObject, GLint  location, GLfloat  x, GLfloat  y)
{
  ( theWrappedObject->glUniform2f(location, x, y));
}

void PythonQtWrapper_QGLFunctions::glUniform2fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v)
{
  ( theWrappedObject->glUniform2fv(location, count, v));
}

void PythonQtWrapper_QGLFunctions::glUniform2i(QGLFunctions* theWrappedObject, GLint  location, GLint  x, GLint  y)
{
  ( theWrappedObject->glUniform2i(location, x, y));
}

void PythonQtWrapper_QGLFunctions::glUniform2iv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v)
{
  ( theWrappedObject->glUniform2iv(location, count, v));
}

void PythonQtWrapper_QGLFunctions::glUniform3f(QGLFunctions* theWrappedObject, GLint  location, GLfloat  x, GLfloat  y, GLfloat  z)
{
  ( theWrappedObject->glUniform3f(location, x, y, z));
}

void PythonQtWrapper_QGLFunctions::glUniform3fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v)
{
  ( theWrappedObject->glUniform3fv(location, count, v));
}

void PythonQtWrapper_QGLFunctions::glUniform3i(QGLFunctions* theWrappedObject, GLint  location, GLint  x, GLint  y, GLint  z)
{
  ( theWrappedObject->glUniform3i(location, x, y, z));
}

void PythonQtWrapper_QGLFunctions::glUniform3iv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v)
{
  ( theWrappedObject->glUniform3iv(location, count, v));
}

void PythonQtWrapper_QGLFunctions::glUniform4f(QGLFunctions* theWrappedObject, GLint  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w)
{
  ( theWrappedObject->glUniform4f(location, x, y, z, w));
}

void PythonQtWrapper_QGLFunctions::glUniform4fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v)
{
  ( theWrappedObject->glUniform4fv(location, count, v));
}

void PythonQtWrapper_QGLFunctions::glUniform4i(QGLFunctions* theWrappedObject, GLint  location, GLint  x, GLint  y, GLint  z, GLint  w)
{
  ( theWrappedObject->glUniform4i(location, x, y, z, w));
}

void PythonQtWrapper_QGLFunctions::glUniform4iv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v)
{
  ( theWrappedObject->glUniform4iv(location, count, v));
}

void PythonQtWrapper_QGLFunctions::glUniformMatrix2fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, GLboolean  transpose, const GLfloat*  value)
{
  ( theWrappedObject->glUniformMatrix2fv(location, count, transpose, value));
}

void PythonQtWrapper_QGLFunctions::glUniformMatrix3fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, GLboolean  transpose, const GLfloat*  value)
{
  ( theWrappedObject->glUniformMatrix3fv(location, count, transpose, value));
}

void PythonQtWrapper_QGLFunctions::glUniformMatrix4fv(QGLFunctions* theWrappedObject, GLint  location, GLsizei  count, GLboolean  transpose, const GLfloat*  value)
{
  ( theWrappedObject->glUniformMatrix4fv(location, count, transpose, value));
}

void PythonQtWrapper_QGLFunctions::glUseProgram(QGLFunctions* theWrappedObject, uint  program)
{
  ( theWrappedObject->glUseProgram(program));
}

void PythonQtWrapper_QGLFunctions::glValidateProgram(QGLFunctions* theWrappedObject, uint  program)
{
  ( theWrappedObject->glValidateProgram(program));
}

void PythonQtWrapper_QGLFunctions::glVertexAttrib1f(QGLFunctions* theWrappedObject, uint  indx, GLfloat  x)
{
  ( theWrappedObject->glVertexAttrib1f(indx, x));
}

void PythonQtWrapper_QGLFunctions::glVertexAttrib1fv(QGLFunctions* theWrappedObject, uint  indx, const GLfloat*  values)
{
  ( theWrappedObject->glVertexAttrib1fv(indx, values));
}

void PythonQtWrapper_QGLFunctions::glVertexAttrib2f(QGLFunctions* theWrappedObject, uint  indx, GLfloat  x, GLfloat  y)
{
  ( theWrappedObject->glVertexAttrib2f(indx, x, y));
}

void PythonQtWrapper_QGLFunctions::glVertexAttrib2fv(QGLFunctions* theWrappedObject, uint  indx, const GLfloat*  values)
{
  ( theWrappedObject->glVertexAttrib2fv(indx, values));
}

void PythonQtWrapper_QGLFunctions::glVertexAttrib3f(QGLFunctions* theWrappedObject, uint  indx, GLfloat  x, GLfloat  y, GLfloat  z)
{
  ( theWrappedObject->glVertexAttrib3f(indx, x, y, z));
}

void PythonQtWrapper_QGLFunctions::glVertexAttrib3fv(QGLFunctions* theWrappedObject, uint  indx, const GLfloat*  values)
{
  ( theWrappedObject->glVertexAttrib3fv(indx, values));
}

void PythonQtWrapper_QGLFunctions::glVertexAttrib4f(QGLFunctions* theWrappedObject, uint  indx, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w)
{
  ( theWrappedObject->glVertexAttrib4f(indx, x, y, z, w));
}

void PythonQtWrapper_QGLFunctions::glVertexAttrib4fv(QGLFunctions* theWrappedObject, uint  indx, const GLfloat*  values)
{
  ( theWrappedObject->glVertexAttrib4fv(indx, values));
}

void PythonQtWrapper_QGLFunctions::glVertexAttribPointer(QGLFunctions* theWrappedObject, uint  indx, GLint  size, GLenum  type, GLboolean  normalized, GLsizei  stride, const void*  ptr)
{
  ( theWrappedObject->glVertexAttribPointer(indx, size, type, normalized, stride, ptr));
}

bool  PythonQtWrapper_QGLFunctions::hasOpenGLFeature(QGLFunctions* theWrappedObject, QGLFunctions::OpenGLFeature  feature) const
{
  return ( theWrappedObject->hasOpenGLFeature(feature));
}

void PythonQtWrapper_QGLFunctions::initializeGLFunctions(QGLFunctions* theWrappedObject, const QGLContext*  context)
{
  ( theWrappedObject->initializeGLFunctions(context));
}

QGLFunctions::OpenGLFeatures  PythonQtWrapper_QGLFunctions::openGLFeatures(QGLFunctions* theWrappedObject) const
{
  return ( theWrappedObject->openGLFeatures());
}



PythonQtShell_QGLPixelBuffer::~PythonQtShell_QGLPixelBuffer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGLPixelBuffer::devType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("devType");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLPixelBuffer::devType();
}
void PythonQtShell_QGLPixelBuffer::initPainter(QPainter*  painter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("initPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&painter0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLPixelBuffer::initPainter(painter0);
}
int  PythonQtShell_QGLPixelBuffer::metric(QPaintDevice::PaintDeviceMetric  metric0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metric");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&metric0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLPixelBuffer::metric(metric0);
}
QPaintEngine*  PythonQtShell_QGLPixelBuffer::paintEngine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paintEngine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintEngine*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
          } else {
            returnValue = *((QPaintEngine**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLPixelBuffer::paintEngine();
}
QPaintDevice*  PythonQtShell_QGLPixelBuffer::redirected(QPoint*  offset0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("redirected");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue;
      void* args[2] = {NULL, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("redirected", methodInfo, result);
          } else {
            returnValue = *((QPaintDevice**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLPixelBuffer::redirected(offset0);
}
QPainter*  PythonQtShell_QGLPixelBuffer::sharedPainter() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sharedPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sharedPainter", methodInfo, result);
          } else {
            returnValue = *((QPainter**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLPixelBuffer::sharedPainter();
}
QGLPixelBuffer* PythonQtWrapper_QGLPixelBuffer::new_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format, QGLWidget*  shareWidget)
{ 
return new PythonQtShell_QGLPixelBuffer(size, format, shareWidget); }

QGLPixelBuffer* PythonQtWrapper_QGLPixelBuffer::new_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format, QGLWidget*  shareWidget)
{ 
return new PythonQtShell_QGLPixelBuffer(width, height, format, shareWidget); }

uint  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QImage&  image, GLenum  target)
{
  return ( theWrappedObject->bindTexture(image, target));
}

uint  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QPixmap&  pixmap, GLenum  target)
{
  return ( theWrappedObject->bindTexture(pixmap, target));
}

uint  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->bindTexture(fileName));
}

bool  PythonQtWrapper_QGLPixelBuffer::bindToDynamicTexture(QGLPixelBuffer* theWrappedObject, uint  texture)
{
  return ( theWrappedObject->bindToDynamicTexture(texture));
}

QGLContext*  PythonQtWrapper_QGLPixelBuffer::context(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->context());
}

void PythonQtWrapper_QGLPixelBuffer::deleteTexture(QGLPixelBuffer* theWrappedObject, uint  texture_id)
{
  ( theWrappedObject->deleteTexture(texture_id));
}

bool  PythonQtWrapper_QGLPixelBuffer::doneCurrent(QGLPixelBuffer* theWrappedObject)
{
  return ( theWrappedObject->doneCurrent());
}

void PythonQtWrapper_QGLPixelBuffer::drawTexture(QGLPixelBuffer* theWrappedObject, const QPointF&  point, uint  textureId, GLenum  textureTarget)
{
  ( theWrappedObject->drawTexture(point, textureId, textureTarget));
}

void PythonQtWrapper_QGLPixelBuffer::drawTexture(QGLPixelBuffer* theWrappedObject, const QRectF&  target, uint  textureId, GLenum  textureTarget)
{
  ( theWrappedObject->drawTexture(target, textureId, textureTarget));
}

QGLFormat  PythonQtWrapper_QGLPixelBuffer::format(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

uint  PythonQtWrapper_QGLPixelBuffer::generateDynamicTexture(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->generateDynamicTexture());
}

Qt::HANDLE  PythonQtWrapper_QGLPixelBuffer::handle(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

bool  PythonQtWrapper_QGLPixelBuffer::static_QGLPixelBuffer_hasOpenGLPbuffers()
{
  return (QGLPixelBuffer::hasOpenGLPbuffers());
}

bool  PythonQtWrapper_QGLPixelBuffer::isValid(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QGLPixelBuffer::makeCurrent(QGLPixelBuffer* theWrappedObject)
{
  return ( theWrappedObject->makeCurrent());
}

void PythonQtWrapper_QGLPixelBuffer::releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject)
{
  ( theWrappedObject->releaseFromDynamicTexture());
}

QSize  PythonQtWrapper_QGLPixelBuffer::size(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QImage  PythonQtWrapper_QGLPixelBuffer::toImage(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->toImage());
}

void PythonQtWrapper_QGLPixelBuffer::updateDynamicTexture(QGLPixelBuffer* theWrappedObject, uint  texture_id) const
{
  ( theWrappedObject->updateDynamicTexture(texture_id));
}



PythonQtShell_QGLShader::~PythonQtShell_QGLShader() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGLShader::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLShader::childEvent(event0);
}
void PythonQtShell_QGLShader::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLShader::customEvent(event0);
}
bool  PythonQtShell_QGLShader::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLShader::event(event0);
}
bool  PythonQtShell_QGLShader::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLShader::eventFilter(watched0, event1);
}
void PythonQtShell_QGLShader::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLShader::timerEvent(event0);
}
QGLShader* PythonQtWrapper_QGLShader::new_QGLShader(QGLShader::ShaderType  type, QObject*  parent)
{ 
return new PythonQtShell_QGLShader(type, parent); }

QGLShader* PythonQtWrapper_QGLShader::new_QGLShader(QGLShader::ShaderType  type, const QGLContext*  context, QObject*  parent)
{ 
return new PythonQtShell_QGLShader(type, context, parent); }

const QMetaObject* PythonQtShell_QGLShader::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGLShader::staticMetaObject);
  } else {
    return &QGLShader::staticMetaObject;
  }
}
int PythonQtShell_QGLShader::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGLShader::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QGLShader::compileSourceCode(QGLShader* theWrappedObject, const QByteArray&  source)
{
  return ( theWrappedObject->compileSourceCode(source));
}

bool  PythonQtWrapper_QGLShader::compileSourceCode(QGLShader* theWrappedObject, const QString&  source)
{
  return ( theWrappedObject->compileSourceCode(source));
}

bool  PythonQtWrapper_QGLShader::compileSourceCode(QGLShader* theWrappedObject, const char*  source)
{
  return ( theWrappedObject->compileSourceCode(source));
}

bool  PythonQtWrapper_QGLShader::compileSourceFile(QGLShader* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->compileSourceFile(fileName));
}

bool  PythonQtWrapper_QGLShader::static_QGLShader_hasOpenGLShaders(QGLShader::ShaderType  type, const QGLContext*  context)
{
  return (QGLShader::hasOpenGLShaders(type, context));
}

bool  PythonQtWrapper_QGLShader::isCompiled(QGLShader* theWrappedObject) const
{
  return ( theWrappedObject->isCompiled());
}

QString  PythonQtWrapper_QGLShader::log(QGLShader* theWrappedObject) const
{
  return ( theWrappedObject->log());
}

uint  PythonQtWrapper_QGLShader::shaderId(QGLShader* theWrappedObject) const
{
  return ( theWrappedObject->shaderId());
}

QGLShader::ShaderType  PythonQtWrapper_QGLShader::shaderType(QGLShader* theWrappedObject) const
{
  return ( theWrappedObject->shaderType());
}

QByteArray  PythonQtWrapper_QGLShader::sourceCode(QGLShader* theWrappedObject) const
{
  return ( theWrappedObject->sourceCode());
}



PythonQtShell_QGLShaderProgram::~PythonQtShell_QGLShaderProgram() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGLShaderProgram::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLShaderProgram::childEvent(event0);
}
void PythonQtShell_QGLShaderProgram::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLShaderProgram::customEvent(event0);
}
bool  PythonQtShell_QGLShaderProgram::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLShaderProgram::event(event0);
}
bool  PythonQtShell_QGLShaderProgram::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLShaderProgram::eventFilter(watched0, event1);
}
bool  PythonQtShell_QGLShaderProgram::link()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("link");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("link", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLShaderProgram::link();
}
void PythonQtShell_QGLShaderProgram::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLShaderProgram::timerEvent(event0);
}
QGLShaderProgram* PythonQtWrapper_QGLShaderProgram::new_QGLShaderProgram(QObject*  parent)
{ 
return new PythonQtShell_QGLShaderProgram(parent); }

QGLShaderProgram* PythonQtWrapper_QGLShaderProgram::new_QGLShaderProgram(const QGLContext*  context, QObject*  parent)
{ 
return new PythonQtShell_QGLShaderProgram(context, parent); }

const QMetaObject* PythonQtShell_QGLShaderProgram::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGLShaderProgram::staticMetaObject);
  } else {
    return &QGLShaderProgram::staticMetaObject;
  }
}
int PythonQtShell_QGLShaderProgram::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGLShaderProgram::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QGLShaderProgram::addShader(QGLShaderProgram* theWrappedObject, QGLShader*  shader)
{
  return ( theWrappedObject->addShader(shader));
}

bool  PythonQtWrapper_QGLShaderProgram::addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QByteArray&  source)
{
  return ( theWrappedObject->addShaderFromSourceCode(type, source));
}

bool  PythonQtWrapper_QGLShaderProgram::addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QString&  source)
{
  return ( theWrappedObject->addShaderFromSourceCode(type, source));
}

bool  PythonQtWrapper_QGLShaderProgram::addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const char*  source)
{
  return ( theWrappedObject->addShaderFromSourceCode(type, source));
}

bool  PythonQtWrapper_QGLShaderProgram::addShaderFromSourceFile(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QString&  fileName)
{
  return ( theWrappedObject->addShaderFromSourceFile(type, fileName));
}

int  PythonQtWrapper_QGLShaderProgram::attributeLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name) const
{
  return ( theWrappedObject->attributeLocation(name));
}

int  PythonQtWrapper_QGLShaderProgram::attributeLocation(QGLShaderProgram* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->attributeLocation(name));
}

int  PythonQtWrapper_QGLShaderProgram::attributeLocation(QGLShaderProgram* theWrappedObject, const char*  name) const
{
  return ( theWrappedObject->attributeLocation(name));
}

bool  PythonQtWrapper_QGLShaderProgram::bind(QGLShaderProgram* theWrappedObject)
{
  return ( theWrappedObject->bind());
}

void PythonQtWrapper_QGLShaderProgram::bindAttributeLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name, int  location)
{
  ( theWrappedObject->bindAttributeLocation(name, location));
}

void PythonQtWrapper_QGLShaderProgram::bindAttributeLocation(QGLShaderProgram* theWrappedObject, const QString&  name, int  location)
{
  ( theWrappedObject->bindAttributeLocation(name, location));
}

void PythonQtWrapper_QGLShaderProgram::bindAttributeLocation(QGLShaderProgram* theWrappedObject, const char*  name, int  location)
{
  ( theWrappedObject->bindAttributeLocation(name, location));
}

void PythonQtWrapper_QGLShaderProgram::disableAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name)
{
  ( theWrappedObject->disableAttributeArray(name));
}

void PythonQtWrapper_QGLShaderProgram::disableAttributeArray(QGLShaderProgram* theWrappedObject, int  location)
{
  ( theWrappedObject->disableAttributeArray(location));
}

void PythonQtWrapper_QGLShaderProgram::enableAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name)
{
  ( theWrappedObject->enableAttributeArray(name));
}

void PythonQtWrapper_QGLShaderProgram::enableAttributeArray(QGLShaderProgram* theWrappedObject, int  location)
{
  ( theWrappedObject->enableAttributeArray(location));
}

GLenum  PythonQtWrapper_QGLShaderProgram::geometryInputType(QGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->geometryInputType());
}

GLenum  PythonQtWrapper_QGLShaderProgram::geometryOutputType(QGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->geometryOutputType());
}

int  PythonQtWrapper_QGLShaderProgram::geometryOutputVertexCount(QGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->geometryOutputVertexCount());
}

bool  PythonQtWrapper_QGLShaderProgram::static_QGLShaderProgram_hasOpenGLShaderPrograms(const QGLContext*  context)
{
  return (QGLShaderProgram::hasOpenGLShaderPrograms(context));
}

bool  PythonQtWrapper_QGLShaderProgram::isLinked(QGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->isLinked());
}

bool  PythonQtWrapper_QGLShaderProgram::link(QGLShaderProgram* theWrappedObject)
{
  return ( theWrappedObject->link());
}

QString  PythonQtWrapper_QGLShaderProgram::log(QGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->log());
}

int  PythonQtWrapper_QGLShaderProgram::maxGeometryOutputVertices(QGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->maxGeometryOutputVertices());
}

uint  PythonQtWrapper_QGLShaderProgram::programId(QGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->programId());
}

void PythonQtWrapper_QGLShaderProgram::release(QGLShaderProgram* theWrappedObject)
{
  ( theWrappedObject->release());
}

void PythonQtWrapper_QGLShaderProgram::removeAllShaders(QGLShaderProgram* theWrappedObject)
{
  ( theWrappedObject->removeAllShaders());
}

void PythonQtWrapper_QGLShaderProgram::removeShader(QGLShaderProgram* theWrappedObject, QGLShader*  shader)
{
  ( theWrappedObject->removeShader(shader));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, const void*  values, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeArray(name, type, values, tupleSize, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeArray(name, values, tupleSize, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(name, values, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(name, values, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(name, values, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, GLenum  type, const void*  values, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeArray(location, type, values, tupleSize, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeArray(location, values, tupleSize, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(location, values, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(location, values, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  stride)
{
  ( theWrappedObject->setAttributeArray(location, values, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeBuffer(QGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, int  offset, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeBuffer(name, type, offset, tupleSize, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeBuffer(QGLShaderProgram* theWrappedObject, int  location, GLenum  type, int  offset, int  tupleSize, int  stride)
{
  ( theWrappedObject->setAttributeBuffer(location, type, offset, tupleSize, stride));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value)
{
  ( theWrappedObject->setAttributeValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y)
{
  ( theWrappedObject->setAttributeValue(name, x, y));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z)
{
  ( theWrappedObject->setAttributeValue(name, x, y, z));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w)
{
  ( theWrappedObject->setAttributeValue(name, x, y, z, w));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  columns, int  rows)
{
  ( theWrappedObject->setAttributeValue(name, values, columns, rows));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QColor&  value)
{
  ( theWrappedObject->setAttributeValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value)
{
  ( theWrappedObject->setAttributeValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value)
{
  ( theWrappedObject->setAttributeValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value)
{
  ( theWrappedObject->setAttributeValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  value)
{
  ( theWrappedObject->setAttributeValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y)
{
  ( theWrappedObject->setAttributeValue(location, x, y));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z)
{
  ( theWrappedObject->setAttributeValue(location, x, y, z));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w)
{
  ( theWrappedObject->setAttributeValue(location, x, y, z, w));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  columns, int  rows)
{
  ( theWrappedObject->setAttributeValue(location, values, columns, rows));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QColor&  value)
{
  ( theWrappedObject->setAttributeValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value)
{
  ( theWrappedObject->setAttributeValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value)
{
  ( theWrappedObject->setAttributeValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value)
{
  ( theWrappedObject->setAttributeValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setGeometryInputType(QGLShaderProgram* theWrappedObject, GLenum  inputType)
{
  ( theWrappedObject->setGeometryInputType(inputType));
}

void PythonQtWrapper_QGLShaderProgram::setGeometryOutputType(QGLShaderProgram* theWrappedObject, GLenum  outputType)
{
  ( theWrappedObject->setGeometryOutputType(outputType));
}

void PythonQtWrapper_QGLShaderProgram::setGeometryOutputVertexCount(QGLShaderProgram* theWrappedObject, int  count)
{
  ( theWrappedObject->setGeometryOutputVertexCount(count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y)
{
  ( theWrappedObject->setUniformValue(name, x, y));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z)
{
  ( theWrappedObject->setUniformValue(name, x, y, z));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w)
{
  ( theWrappedObject->setUniformValue(name, x, y, z, w));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, GLint  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QColor&  color)
{
  ( theWrappedObject->setUniformValue(name, color));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4&  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QPoint&  point)
{
  ( theWrappedObject->setUniformValue(name, point));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QPointF&  point)
{
  ( theWrappedObject->setUniformValue(name, point));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QSize&  size)
{
  ( theWrappedObject->setUniformValue(name, size));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QSizeF&  size)
{
  ( theWrappedObject->setUniformValue(name, size));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QTransform&  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, uint  value)
{
  ( theWrappedObject->setUniformValue(name, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y)
{
  ( theWrappedObject->setUniformValue(location, x, y));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z)
{
  ( theWrappedObject->setUniformValue(location, x, y, z));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w)
{
  ( theWrappedObject->setUniformValue(location, x, y, z, w));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, GLint  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QColor&  color)
{
  ( theWrappedObject->setUniformValue(location, color));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4&  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QPoint&  point)
{
  ( theWrappedObject->setUniformValue(location, point));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QPointF&  point)
{
  ( theWrappedObject->setUniformValue(location, point));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QSize&  size)
{
  ( theWrappedObject->setUniformValue(location, size));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QSizeF&  size)
{
  ( theWrappedObject->setUniformValue(location, size));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QTransform&  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValue(QGLShaderProgram* theWrappedObject, int  location, uint  value)
{
  ( theWrappedObject->setUniformValue(location, value));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  count, int  tupleSize)
{
  ( theWrappedObject->setUniformValueArray(name, values, count, tupleSize));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const GLint*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const uint*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(name, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  count, int  tupleSize)
{
  ( theWrappedObject->setUniformValueArray(location, values, count, tupleSize));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const GLint*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

void PythonQtWrapper_QGLShaderProgram::setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const uint*  values, int  count)
{
  ( theWrappedObject->setUniformValueArray(location, values, count));
}

QList<QGLShader* >  PythonQtWrapper_QGLShaderProgram::shaders(QGLShaderProgram* theWrappedObject) const
{
  return ( theWrappedObject->shaders());
}

int  PythonQtWrapper_QGLShaderProgram::uniformLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name) const
{
  return ( theWrappedObject->uniformLocation(name));
}

int  PythonQtWrapper_QGLShaderProgram::uniformLocation(QGLShaderProgram* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->uniformLocation(name));
}

int  PythonQtWrapper_QGLShaderProgram::uniformLocation(QGLShaderProgram* theWrappedObject, const char*  name) const
{
  return ( theWrappedObject->uniformLocation(name));
}



PythonQtShell_QGLWidget::~PythonQtShell_QGLWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGLWidget::actionEvent(QActionEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("actionEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QActionEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::actionEvent(event0);
}
void PythonQtShell_QGLWidget::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("changeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::changeEvent(arg__1);
}
void PythonQtShell_QGLWidget::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::childEvent(event0);
}
void PythonQtShell_QGLWidget::closeEvent(QCloseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("closeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QCloseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::closeEvent(event0);
}
void PythonQtShell_QGLWidget::contextMenuEvent(QContextMenuEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::contextMenuEvent(event0);
}
void PythonQtShell_QGLWidget::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::customEvent(event0);
}
int  PythonQtShell_QGLWidget::devType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("devType");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::devType();
}
void PythonQtShell_QGLWidget::dragEnterEvent(QDragEnterEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragEnterEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::dragEnterEvent(event0);
}
void PythonQtShell_QGLWidget::dragLeaveEvent(QDragLeaveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::dragLeaveEvent(event0);
}
void PythonQtShell_QGLWidget::dragMoveEvent(QDragMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::dragMoveEvent(event0);
}
void PythonQtShell_QGLWidget::dropEvent(QDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::dropEvent(event0);
}
void PythonQtShell_QGLWidget::enterEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("enterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::enterEvent(event0);
}
bool  PythonQtShell_QGLWidget::event(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::event(arg__1);
}
bool  PythonQtShell_QGLWidget::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::eventFilter(watched0, event1);
}
void PythonQtShell_QGLWidget::focusInEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("focusInEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::focusInEvent(event0);
}
bool  PythonQtShell_QGLWidget::focusNextPrevChild(bool  next0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("focusNextPrevChild");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&next0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::focusNextPrevChild(next0);
}
void PythonQtShell_QGLWidget::focusOutEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("focusOutEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::focusOutEvent(event0);
}
void PythonQtShell_QGLWidget::glDraw()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("glDraw");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::glDraw();
}
void PythonQtShell_QGLWidget::glInit()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("glInit");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::glInit();
}
bool  PythonQtShell_QGLWidget::hasHeightForWidth() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasHeightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("hasHeightForWidth", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::hasHeightForWidth();
}
int  PythonQtShell_QGLWidget::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("heightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::heightForWidth(arg__1);
}
void PythonQtShell_QGLWidget::hideEvent(QHideEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hideEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QHideEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::hideEvent(event0);
}
void PythonQtShell_QGLWidget::initPainter(QPainter*  painter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("initPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&painter0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::initPainter(painter0);
}
void PythonQtShell_QGLWidget::initializeGL()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("initializeGL");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::initializeGL();
}
void PythonQtShell_QGLWidget::initializeOverlayGL()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("initializeOverlayGL");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::initializeOverlayGL();
}
void PythonQtShell_QGLWidget::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("inputMethodEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QInputMethodEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QGLWidget::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("inputMethodQuery");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::inputMethodQuery(arg__1);
}
void PythonQtShell_QGLWidget::keyPressEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::keyPressEvent(event0);
}
void PythonQtShell_QGLWidget::keyReleaseEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("keyReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::keyReleaseEvent(event0);
}
void PythonQtShell_QGLWidget::leaveEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("leaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::leaveEvent(event0);
}
int  PythonQtShell_QGLWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metric");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::metric(arg__1);
}
QSize  PythonQtShell_QGLWidget::minimumSizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("getMinimumSizeHint");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("getMinimumSizeHint", methodInfo, result);
          } else {
            returnValue = *((QSize*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::minimumSizeHint();
}
void PythonQtShell_QGLWidget::mouseDoubleClickEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGLWidget::mouseMoveEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::mouseMoveEvent(event0);
}
void PythonQtShell_QGLWidget::mousePressEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::mousePressEvent(event0);
}
void PythonQtShell_QGLWidget::mouseReleaseEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::mouseReleaseEvent(event0);
}
void PythonQtShell_QGLWidget::moveEvent(QMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("moveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::moveEvent(event0);
}
bool  PythonQtShell_QGLWidget::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nativeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
      void* args[4] = {NULL, (void*)&eventType0, (void*)&message1, (void*)&result2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("nativeEvent", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QGLWidget::paintEngine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paintEngine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintEngine*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
          } else {
            returnValue = *((QPaintEngine**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::paintEngine();
}
void PythonQtShell_QGLWidget::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::paintEvent(arg__1);
}
void PythonQtShell_QGLWidget::paintGL()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paintGL");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::paintGL();
}
void PythonQtShell_QGLWidget::paintOverlayGL()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paintOverlayGL");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::paintOverlayGL();
}
QPaintDevice*  PythonQtShell_QGLWidget::redirected(QPoint*  offset0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("redirected");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue;
      void* args[2] = {NULL, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("redirected", methodInfo, result);
          } else {
            returnValue = *((QPaintDevice**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::redirected(offset0);
}
void PythonQtShell_QGLWidget::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resizeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QResizeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::resizeEvent(arg__1);
}
void PythonQtShell_QGLWidget::resizeGL(int  w0, int  h1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resizeGL");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&w0, (void*)&h1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::resizeGL(w0, h1);
}
void PythonQtShell_QGLWidget::resizeOverlayGL(int  w0, int  h1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resizeOverlayGL");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&w0, (void*)&h1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::resizeOverlayGL(w0, h1);
}
void PythonQtShell_QGLWidget::setVisible(bool  visible0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVisible");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&visible0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::setVisible(visible0);
}
QPainter*  PythonQtShell_QGLWidget::sharedPainter() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sharedPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sharedPainter", methodInfo, result);
          } else {
            returnValue = *((QPainter**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::sharedPainter();
}
void PythonQtShell_QGLWidget::showEvent(QShowEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("showEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QShowEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::showEvent(event0);
}
QSize  PythonQtShell_QGLWidget::sizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("getSizeHint");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("getSizeHint", methodInfo, result);
          } else {
            returnValue = *((QSize*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGLWidget::sizeHint();
}
void PythonQtShell_QGLWidget::tabletEvent(QTabletEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("tabletEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTabletEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::tabletEvent(event0);
}
void PythonQtShell_QGLWidget::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::timerEvent(event0);
}
void PythonQtShell_QGLWidget::updateGL()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateGL");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::updateGL();
}
void PythonQtShell_QGLWidget::updateOverlayGL()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateOverlayGL");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::updateOverlayGL();
}
void PythonQtShell_QGLWidget::wheelEvent(QWheelEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWheelEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGLWidget::wheelEvent(event0);
}
QGLWidget* PythonQtWrapper_QGLWidget::new_QGLWidget(QGLContext*  context, QWidget*  parent, const QGLWidget*  shareWidget, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QGLWidget(context, parent, shareWidget, f); }

QGLWidget* PythonQtWrapper_QGLWidget::new_QGLWidget(QWidget*  parent, const QGLWidget*  shareWidget, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QGLWidget(parent, shareWidget, f); }

QGLWidget* PythonQtWrapper_QGLWidget::new_QGLWidget(const QGLFormat&  format, QWidget*  parent, const QGLWidget*  shareWidget, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QGLWidget(format, parent, shareWidget, f); }

const QMetaObject* PythonQtShell_QGLWidget::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGLWidget::staticMetaObject);
  } else {
    return &QGLWidget::staticMetaObject;
  }
}
int PythonQtShell_QGLWidget::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGLWidget::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QGLWidget::autoBufferSwap(QGLWidget* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_autoBufferSwap());
}

uint  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QImage&  image, GLenum  target, GLint  format)
{
  return ( theWrappedObject->bindTexture(image, target, format));
}

uint  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QImage&  image, GLenum  target, GLint  format, QGLContext::BindOptions  options)
{
  return ( theWrappedObject->bindTexture(image, target, format, options));
}

uint  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, GLenum  target, GLint  format)
{
  return ( theWrappedObject->bindTexture(pixmap, target, format));
}

uint  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, GLenum  target, GLint  format, QGLContext::BindOptions  options)
{
  return ( theWrappedObject->bindTexture(pixmap, target, format, options));
}

uint  PythonQtWrapper_QGLWidget::bindTexture(QGLWidget* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->bindTexture(fileName));
}

const QGLColormap*  PythonQtWrapper_QGLWidget::colormap(QGLWidget* theWrappedObject) const
{
  return &( theWrappedObject->colormap());
}

QGLContext*  PythonQtWrapper_QGLWidget::context(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->context());
}

QImage  PythonQtWrapper_QGLWidget::static_QGLWidget_convertToGLFormat(const QImage&  img)
{
  return (QGLWidget::convertToGLFormat(img));
}

void PythonQtWrapper_QGLWidget::deleteTexture(QGLWidget* theWrappedObject, uint  tx_id)
{
  ( theWrappedObject->deleteTexture(tx_id));
}

void PythonQtWrapper_QGLWidget::doneCurrent(QGLWidget* theWrappedObject)
{
  ( theWrappedObject->doneCurrent());
}

bool  PythonQtWrapper_QGLWidget::doubleBuffer(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->doubleBuffer());
}

void PythonQtWrapper_QGLWidget::drawTexture(QGLWidget* theWrappedObject, const QPointF&  point, uint  textureId, GLenum  textureTarget)
{
  ( theWrappedObject->drawTexture(point, textureId, textureTarget));
}

void PythonQtWrapper_QGLWidget::drawTexture(QGLWidget* theWrappedObject, const QRectF&  target, uint  textureId, GLenum  textureTarget)
{
  ( theWrappedObject->drawTexture(target, textureId, textureTarget));
}

QGLFormat  PythonQtWrapper_QGLWidget::format(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

void PythonQtWrapper_QGLWidget::glDraw(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_glDraw());
}

void PythonQtWrapper_QGLWidget::glInit(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_glInit());
}

QImage  PythonQtWrapper_QGLWidget::grabFrameBuffer(QGLWidget* theWrappedObject, bool  withAlpha)
{
  return ( theWrappedObject->grabFrameBuffer(withAlpha));
}

void PythonQtWrapper_QGLWidget::initializeGL(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_initializeGL());
}

void PythonQtWrapper_QGLWidget::initializeOverlayGL(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_initializeOverlayGL());
}

bool  PythonQtWrapper_QGLWidget::isSharing(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->isSharing());
}

bool  PythonQtWrapper_QGLWidget::isValid(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QGLWidget::makeCurrent(QGLWidget* theWrappedObject)
{
  ( theWrappedObject->makeCurrent());
}

void PythonQtWrapper_QGLWidget::makeOverlayCurrent(QGLWidget* theWrappedObject)
{
  ( theWrappedObject->makeOverlayCurrent());
}

const QGLContext*  PythonQtWrapper_QGLWidget::overlayContext(QGLWidget* theWrappedObject) const
{
  return ( theWrappedObject->overlayContext());
}

void PythonQtWrapper_QGLWidget::paintGL(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_paintGL());
}

void PythonQtWrapper_QGLWidget::paintOverlayGL(QGLWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_paintOverlayGL());
}

void PythonQtWrapper_QGLWidget::qglClearColor(QGLWidget* theWrappedObject, const QColor&  c) const
{
  ( theWrappedObject->qglClearColor(c));
}

void PythonQtWrapper_QGLWidget::qglColor(QGLWidget* theWrappedObject, const QColor&  c) const
{
  ( theWrappedObject->qglColor(c));
}

QPixmap  PythonQtWrapper_QGLWidget::renderPixmap(QGLWidget* theWrappedObject, int  w, int  h, bool  useContext)
{
  return ( theWrappedObject->renderPixmap(w, h, useContext));
}

void PythonQtWrapper_QGLWidget::renderText(QGLWidget* theWrappedObject, double  x, double  y, double  z, const QString&  str, const QFont&  fnt)
{
  ( theWrappedObject->renderText(x, y, z, str, fnt));
}

void PythonQtWrapper_QGLWidget::renderText(QGLWidget* theWrappedObject, int  x, int  y, const QString&  str, const QFont&  fnt)
{
  ( theWrappedObject->renderText(x, y, str, fnt));
}

void PythonQtWrapper_QGLWidget::resizeGL(QGLWidget* theWrappedObject, int  w, int  h)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_resizeGL(w, h));
}

void PythonQtWrapper_QGLWidget::resizeOverlayGL(QGLWidget* theWrappedObject, int  w, int  h)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_resizeOverlayGL(w, h));
}

void PythonQtWrapper_QGLWidget::setAutoBufferSwap(QGLWidget* theWrappedObject, bool  on)
{
  ( ((PythonQtPublicPromoter_QGLWidget*)theWrappedObject)->promoted_setAutoBufferSwap(on));
}

void PythonQtWrapper_QGLWidget::setColormap(QGLWidget* theWrappedObject, const QGLColormap&  map)
{
  ( theWrappedObject->setColormap(map));
}

void PythonQtWrapper_QGLWidget::swapBuffers(QGLWidget* theWrappedObject)
{
  ( theWrappedObject->swapBuffers());
}


