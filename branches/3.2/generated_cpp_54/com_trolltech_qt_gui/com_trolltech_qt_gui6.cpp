#include "com_trolltech_qt_gui6.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QAbstractTextDocumentLayout>
#include <QPainterPath>
#include <QPixmap>
#include <QTextEdit>
#include <QVarLengthArray>
#include <QVariant>
#include <QWidget>
#include <qaction.h>
#include <qapplication.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlabel.h>
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
#include <qpagelayout.h>
#include <qpagesize.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpdfwriter.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qplaintextedit.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qproxystyle.h>
#include <qpushbutton.h>
#include <qquaternion.h>
#include <qradiobutton.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qregularexpression.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstatictext.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>
#include <qwindow.h>

PythonQtShell_QPaintDevice::~PythonQtShell_QPaintDevice() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QPaintDevice::devType() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("devType");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
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
  return QPaintDevice::devType();
}
void PythonQtShell_QPaintDevice::initPainter(QPainter*  painter0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPaintDevice::initPainter(painter0);
}
int  PythonQtShell_QPaintDevice::metric(QPaintDevice::PaintDeviceMetric  metric0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QPaintDevice::metric(metric0);
}
QPaintEngine*  PythonQtShell_QPaintDevice::paintEngine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return 0;
}
QPaintDevice*  PythonQtShell_QPaintDevice::redirected(QPoint*  offset0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPaintDevice::redirected(offset0);
}
QPainter*  PythonQtShell_QPaintDevice::sharedPainter() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPaintDevice::sharedPainter();
}
QPaintDevice* PythonQtWrapper_QPaintDevice::new_QPaintDevice()
{ 
return new PythonQtShell_QPaintDevice(); }

int  PythonQtWrapper_QPaintDevice::colorCount(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->colorCount());
}

int  PythonQtWrapper_QPaintDevice::depth(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->depth());
}

int  PythonQtWrapper_QPaintDevice::devType(QPaintDevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->promoted_devType());
}

int  PythonQtWrapper_QPaintDevice::devicePixelRatio(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->devicePixelRatio());
}

int  PythonQtWrapper_QPaintDevice::height(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

int  PythonQtWrapper_QPaintDevice::heightMM(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->heightMM());
}

void PythonQtWrapper_QPaintDevice::initPainter(QPaintDevice* theWrappedObject, QPainter*  painter) const
{
  ( ((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->promoted_initPainter(painter));
}

int  PythonQtWrapper_QPaintDevice::logicalDpiX(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->logicalDpiX());
}

int  PythonQtWrapper_QPaintDevice::logicalDpiY(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->logicalDpiY());
}

int  PythonQtWrapper_QPaintDevice::metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
  return ( ((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->promoted_metric(metric));
}

QPaintEngine*  PythonQtWrapper_QPaintDevice::paintEngine(QPaintDevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->promoted_paintEngine());
}

bool  PythonQtWrapper_QPaintDevice::paintingActive(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->paintingActive());
}

int  PythonQtWrapper_QPaintDevice::physicalDpiX(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->physicalDpiX());
}

int  PythonQtWrapper_QPaintDevice::physicalDpiY(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->physicalDpiY());
}

QPaintDevice*  PythonQtWrapper_QPaintDevice::redirected(QPaintDevice* theWrappedObject, QPoint*  offset) const
{
  return ( ((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->promoted_redirected(offset));
}

QPainter*  PythonQtWrapper_QPaintDevice::sharedPainter(QPaintDevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->promoted_sharedPainter());
}

int  PythonQtWrapper_QPaintDevice::width(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

int  PythonQtWrapper_QPaintDevice::widthMM(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->widthMM());
}



PythonQtShell_QPaintEngine::~PythonQtShell_QPaintEngine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QPaintEngine::begin(QPaintDevice*  pdev0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("begin");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QPaintDevice*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pdev0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("begin", methodInfo, result);
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
  return bool();
}
QPoint  PythonQtShell_QPaintEngine::coordinateOffset() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("coordinateOffset");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPoint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPoint returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("coordinateOffset", methodInfo, result);
        } else {
          returnValue = *((QPoint*)args[0]);
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
  return QPaintEngine::coordinateOffset();
}
void PythonQtShell_QPaintEngine::drawEllipse(const QRect&  r0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawEllipse");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRect&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&r0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawEllipse(r0);
}
void PythonQtShell_QPaintEngine::drawEllipse(const QRectF&  r0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawEllipse");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&r0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawEllipse(r0);
}
void PythonQtShell_QPaintEngine::drawImage(const QRectF&  r0, const QImage&  pm1, const QRectF&  sr2, Qt::ImageConversionFlags  flags3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawImage");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF&" , "const QImage&" , "const QRectF&" , "Qt::ImageConversionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&r0, (void*)&pm1, (void*)&sr2, (void*)&flags3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawImage(r0, pm1, sr2, flags3);
}
void PythonQtShell_QPaintEngine::drawLines(const QLine*  lines0, int  lineCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawLines");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QLine*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&lines0, (void*)&lineCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawLines(lines0, lineCount1);
}
void PythonQtShell_QPaintEngine::drawLines(const QLineF*  lines0, int  lineCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawLines");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QLineF*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&lines0, (void*)&lineCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawLines(lines0, lineCount1);
}
void PythonQtShell_QPaintEngine::drawPath(const QPainterPath&  path0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPath");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPainterPath&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&path0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawPath(path0);
}
void PythonQtShell_QPaintEngine::drawPixmap(const QRectF&  r0, const QPixmap&  pm1, const QRectF&  sr2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPixmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF&" , "const QPixmap&" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&r0, (void*)&pm1, (void*)&sr2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
void PythonQtShell_QPaintEngine::drawPoints(const QPoint*  points0, int  pointCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPoints");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPoint*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&points0, (void*)&pointCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawPoints(points0, pointCount1);
}
void PythonQtShell_QPaintEngine::drawPoints(const QPointF*  points0, int  pointCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPoints");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPointF*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&points0, (void*)&pointCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawPoints(points0, pointCount1);
}
void PythonQtShell_QPaintEngine::drawPolygon(const QPoint*  points0, int  pointCount1, QPaintEngine::PolygonDrawMode  mode2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPolygon");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPoint*" , "int" , "QPaintEngine::PolygonDrawMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&points0, (void*)&pointCount1, (void*)&mode2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawPolygon(points0, pointCount1, mode2);
}
void PythonQtShell_QPaintEngine::drawPolygon(const QPointF*  points0, int  pointCount1, QPaintEngine::PolygonDrawMode  mode2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPolygon");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPointF*" , "int" , "QPaintEngine::PolygonDrawMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&points0, (void*)&pointCount1, (void*)&mode2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawPolygon(points0, pointCount1, mode2);
}
void PythonQtShell_QPaintEngine::drawRects(const QRect*  rects0, int  rectCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawRects");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRect*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&rects0, (void*)&rectCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawRects(rects0, rectCount1);
}
void PythonQtShell_QPaintEngine::drawRects(const QRectF*  rects0, int  rectCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawRects");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&rects0, (void*)&rectCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawRects(rects0, rectCount1);
}
void PythonQtShell_QPaintEngine::drawTextItem(const QPointF&  p0, const QTextItem&  textItem1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawTextItem");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPointF&" , "const QTextItem&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&p0, (void*)&textItem1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawTextItem(p0, textItem1);
}
void PythonQtShell_QPaintEngine::drawTiledPixmap(const QRectF&  r0, const QPixmap&  pixmap1, const QPointF&  s2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawTiledPixmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF&" , "const QPixmap&" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&r0, (void*)&pixmap1, (void*)&s2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawTiledPixmap(r0, pixmap1, s2);
}
bool  PythonQtShell_QPaintEngine::end()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("end");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("end", methodInfo, result);
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
  return bool();
}
QPaintEngine::Type  PythonQtShell_QPaintEngine::type() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("type");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPaintEngine::Type"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine::Type returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine::Type*)args[0]);
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
  return QPaintEngine::Type();
}
void PythonQtShell_QPaintEngine::updateState(const QPaintEngineState&  state0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateState");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPaintEngineState&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&state0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
QPaintEngine* PythonQtWrapper_QPaintEngine::new_QPaintEngine(QPaintEngine::PaintEngineFeatures  features)
{ 
return new PythonQtShell_QPaintEngine(features); }

bool  PythonQtWrapper_QPaintEngine::begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev)
{
  return ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_begin(pdev));
}

void PythonQtWrapper_QPaintEngine::clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
  ( theWrappedObject->clearDirty(df));
}

QPoint  PythonQtWrapper_QPaintEngine::coordinateOffset(QPaintEngine* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_coordinateOffset());
}

void PythonQtWrapper_QPaintEngine::drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawEllipse(r));
}

void PythonQtWrapper_QPaintEngine::drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawEllipse(r));
}

void PythonQtWrapper_QPaintEngine::drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawImage(r, pm, sr, flags));
}

void PythonQtWrapper_QPaintEngine::drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawLines(lines, lineCount));
}

void PythonQtWrapper_QPaintEngine::drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawLines(lines, lineCount));
}

void PythonQtWrapper_QPaintEngine::drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPath(path));
}

void PythonQtWrapper_QPaintEngine::drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPixmap(r, pm, sr));
}

void PythonQtWrapper_QPaintEngine::drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPoints(points, pointCount));
}

void PythonQtWrapper_QPaintEngine::drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPoints(points, pointCount));
}

void PythonQtWrapper_QPaintEngine::drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPolygon(points, pointCount, mode));
}

void PythonQtWrapper_QPaintEngine::drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPolygon(points, pointCount, mode));
}

void PythonQtWrapper_QPaintEngine::drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawRects(rects, rectCount));
}

void PythonQtWrapper_QPaintEngine::drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawRects(rects, rectCount));
}

void PythonQtWrapper_QPaintEngine::drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawTextItem(p, textItem));
}

void PythonQtWrapper_QPaintEngine::drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawTiledPixmap(r, pixmap, s));
}

bool  PythonQtWrapper_QPaintEngine::end(QPaintEngine* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_end());
}

bool  PythonQtWrapper_QPaintEngine::hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const
{
  return ( theWrappedObject->hasFeature(feature));
}

bool  PythonQtWrapper_QPaintEngine::isActive(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QPaintEngine::isExtended(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->isExtended());
}

QPaintDevice*  PythonQtWrapper_QPaintEngine::paintDevice(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->paintDevice());
}

QPainter*  PythonQtWrapper_QPaintEngine::painter(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->painter());
}

void PythonQtWrapper_QPaintEngine::setActive(QPaintEngine* theWrappedObject, bool  newState)
{
  ( theWrappedObject->setActive(newState));
}

void PythonQtWrapper_QPaintEngine::setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
  ( theWrappedObject->setDirty(df));
}

void PythonQtWrapper_QPaintEngine::setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip)
{
  ( theWrappedObject->setSystemClip(baseClip));
}

void PythonQtWrapper_QPaintEngine::setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect)
{
  ( theWrappedObject->setSystemRect(rect));
}

void PythonQtWrapper_QPaintEngine::syncState(QPaintEngine* theWrappedObject)
{
  ( theWrappedObject->syncState());
}

QRegion  PythonQtWrapper_QPaintEngine::systemClip(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->systemClip());
}

QRect  PythonQtWrapper_QPaintEngine::systemRect(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->systemRect());
}

bool  PythonQtWrapper_QPaintEngine::testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
  return ( theWrappedObject->testDirty(df));
}

QPaintEngine::Type  PythonQtWrapper_QPaintEngine::type(QPaintEngine* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_type());
}

void PythonQtWrapper_QPaintEngine::updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_updateState(state));
}



PythonQtShell_QPaintEngineState::~PythonQtShell_QPaintEngineState() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QPaintEngineState* PythonQtWrapper_QPaintEngineState::new_QPaintEngineState()
{ 
return new PythonQtShell_QPaintEngineState(); }

QBrush  PythonQtWrapper_QPaintEngineState::backgroundBrush(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->backgroundBrush());
}

Qt::BGMode  PythonQtWrapper_QPaintEngineState::backgroundMode(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->backgroundMode());
}

QBrush  PythonQtWrapper_QPaintEngineState::brush(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->brush());
}

bool  PythonQtWrapper_QPaintEngineState::brushNeedsResolving(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->brushNeedsResolving());
}

QPointF  PythonQtWrapper_QPaintEngineState::brushOrigin(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->brushOrigin());
}

Qt::ClipOperation  PythonQtWrapper_QPaintEngineState::clipOperation(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->clipOperation());
}

QPainterPath  PythonQtWrapper_QPaintEngineState::clipPath(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->clipPath());
}

QRegion  PythonQtWrapper_QPaintEngineState::clipRegion(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->clipRegion());
}

QPainter::CompositionMode  PythonQtWrapper_QPaintEngineState::compositionMode(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->compositionMode());
}

QFont  PythonQtWrapper_QPaintEngineState::font(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

bool  PythonQtWrapper_QPaintEngineState::isClipEnabled(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->isClipEnabled());
}

QMatrix  PythonQtWrapper_QPaintEngineState::matrix(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->matrix());
}

qreal  PythonQtWrapper_QPaintEngineState::opacity(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QPainter*  PythonQtWrapper_QPaintEngineState::painter(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->painter());
}

QPen  PythonQtWrapper_QPaintEngineState::pen(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->pen());
}

bool  PythonQtWrapper_QPaintEngineState::penNeedsResolving(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->penNeedsResolving());
}

QPainter::RenderHints  PythonQtWrapper_QPaintEngineState::renderHints(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->renderHints());
}

QPaintEngine::DirtyFlags  PythonQtWrapper_QPaintEngineState::state(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QTransform  PythonQtWrapper_QPaintEngineState::transform(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->transform());
}



PythonQtShell_QPaintEvent::~PythonQtShell_QPaintEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QPaintEvent* PythonQtWrapper_QPaintEvent::new_QPaintEvent(const QRect&  paintRect)
{ 
return new PythonQtShell_QPaintEvent(paintRect); }

QPaintEvent* PythonQtWrapper_QPaintEvent::new_QPaintEvent(const QRegion&  paintRegion)
{ 
return new PythonQtShell_QPaintEvent(paintRegion); }

const QRect*  PythonQtWrapper_QPaintEvent::rect(QPaintEvent* theWrappedObject) const
{
  return &( theWrappedObject->rect());
}

const QRegion*  PythonQtWrapper_QPaintEvent::region(QPaintEvent* theWrappedObject) const
{
  return &( theWrappedObject->region());
}



QPainter* PythonQtWrapper_QPainter::new_QPainter()
{ 
return new QPainter(); }

QPainter* PythonQtWrapper_QPainter::new_QPainter(QPaintDevice*  arg__1)
{ 
return new QPainter(arg__1); }

const QBrush*  PythonQtWrapper_QPainter::background(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->background());
}

Qt::BGMode  PythonQtWrapper_QPainter::backgroundMode(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->backgroundMode());
}

bool  PythonQtWrapper_QPainter::begin(QPainter* theWrappedObject, QPaintDevice*  arg__1)
{
  return ( theWrappedObject->begin(arg__1));
}

void PythonQtWrapper_QPainter::beginNativePainting(QPainter* theWrappedObject)
{
  ( theWrappedObject->beginNativePainting());
}

QRect  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text)
{
  return ( theWrappedObject->boundingRect(rect, flags, text));
}

QRectF  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o)
{
  return ( theWrappedObject->boundingRect(rect, text, o));
}

QRectF  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text)
{
  return ( theWrappedObject->boundingRect(rect, flags, text));
}

QRect  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text)
{
  return ( theWrappedObject->boundingRect(x, y, w, h, flags, text));
}

const QBrush*  PythonQtWrapper_QPainter::brush(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->brush());
}

QPoint  PythonQtWrapper_QPainter::brushOrigin(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->brushOrigin());
}

QRectF  PythonQtWrapper_QPainter::clipBoundingRect(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->clipBoundingRect());
}

QPainterPath  PythonQtWrapper_QPainter::clipPath(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->clipPath());
}

QRegion  PythonQtWrapper_QPainter::clipRegion(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->clipRegion());
}

QMatrix  PythonQtWrapper_QPainter::combinedMatrix(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->combinedMatrix());
}

QTransform  PythonQtWrapper_QPainter::combinedTransform(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->combinedTransform());
}

QPainter::CompositionMode  PythonQtWrapper_QPainter::compositionMode(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->compositionMode());
}

QPaintDevice*  PythonQtWrapper_QPainter::device(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

const QMatrix*  PythonQtWrapper_QPainter::deviceMatrix(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->deviceMatrix());
}

const QTransform*  PythonQtWrapper_QPainter::deviceTransform(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->deviceTransform());
}

void PythonQtWrapper_QPainter::drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen)
{
  ( theWrappedObject->drawArc(arg__1, a, alen));
}

void PythonQtWrapper_QPainter::drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen)
{
  ( theWrappedObject->drawArc(rect, a, alen));
}

void PythonQtWrapper_QPainter::drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen)
{
  ( theWrappedObject->drawArc(x, y, w, h, a, alen));
}

void PythonQtWrapper_QPainter::drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen)
{
  ( theWrappedObject->drawChord(arg__1, a, alen));
}

void PythonQtWrapper_QPainter::drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen)
{
  ( theWrappedObject->drawChord(rect, a, alen));
}

void PythonQtWrapper_QPainter::drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen)
{
  ( theWrappedObject->drawChord(x, y, w, h, a, alen));
}

void PythonQtWrapper_QPainter::drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon)
{
  ( theWrappedObject->drawConvexPolygon(polygon));
}

void PythonQtWrapper_QPainter::drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon)
{
  ( theWrappedObject->drawConvexPolygon(polygon));
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry)
{
  ( theWrappedObject->drawEllipse(center, rx, ry));
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry)
{
  ( theWrappedObject->drawEllipse(center, rx, ry));
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QRect&  r)
{
  ( theWrappedObject->drawEllipse(r));
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QRectF&  r)
{
  ( theWrappedObject->drawEllipse(r));
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->drawEllipse(x, y, w, h));
}

void PythonQtWrapper_QPainter::drawGlyphRun(QPainter* theWrappedObject, const QPointF&  position, const QGlyphRun&  glyphRun)
{
  ( theWrappedObject->drawGlyphRun(position, glyphRun));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image)
{
  ( theWrappedObject->drawImage(p, image));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags)
{
  ( theWrappedObject->drawImage(p, image, sr, flags));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image)
{
  ( theWrappedObject->drawImage(p, image));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags)
{
  ( theWrappedObject->drawImage(p, image, sr, flags));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image)
{
  ( theWrappedObject->drawImage(r, image));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags)
{
  ( theWrappedObject->drawImage(targetRect, image, sourceRect, flags));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image)
{
  ( theWrappedObject->drawImage(r, image));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags)
{
  ( theWrappedObject->drawImage(targetRect, image, sourceRect, flags));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx, int  sy, int  sw, int  sh, Qt::ImageConversionFlags  flags)
{
  ( theWrappedObject->drawImage(x, y, image, sx, sy, sw, sh, flags));
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QLine&  line)
{
  ( theWrappedObject->drawLine(line));
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QLineF&  line)
{
  ( theWrappedObject->drawLine(line));
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2)
{
  ( theWrappedObject->drawLine(p1, p2));
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2)
{
  ( theWrappedObject->drawLine(p1, p2));
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
  ( theWrappedObject->drawLine(x1, y1, x2, y2));
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QLine >&  lines)
{
  ( theWrappedObject->drawLines(lines));
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QLineF >&  lines)
{
  ( theWrappedObject->drawLines(lines));
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QPoint >&  pointPairs)
{
  ( theWrappedObject->drawLines(pointPairs));
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QPointF >&  pointPairs)
{
  ( theWrappedObject->drawLines(pointPairs));
}

void PythonQtWrapper_QPainter::drawPath(QPainter* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->drawPath(path));
}

void PythonQtWrapper_QPainter::drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture)
{
  ( theWrappedObject->drawPicture(p, picture));
}

void PythonQtWrapper_QPainter::drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture)
{
  ( theWrappedObject->drawPicture(p, picture));
}

void PythonQtWrapper_QPainter::drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture)
{
  ( theWrappedObject->drawPicture(x, y, picture));
}

void PythonQtWrapper_QPainter::drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen)
{
  ( theWrappedObject->drawPie(arg__1, a, alen));
}

void PythonQtWrapper_QPainter::drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen)
{
  ( theWrappedObject->drawPie(rect, a, alen));
}

void PythonQtWrapper_QPainter::drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen)
{
  ( theWrappedObject->drawPie(x, y, w, h, a, alen));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm)
{
  ( theWrappedObject->drawPixmap(p, pm));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr)
{
  ( theWrappedObject->drawPixmap(p, pm, sr));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm)
{
  ( theWrappedObject->drawPixmap(p, pm));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr)
{
  ( theWrappedObject->drawPixmap(p, pm, sr));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm)
{
  ( theWrappedObject->drawPixmap(r, pm));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect)
{
  ( theWrappedObject->drawPixmap(targetRect, pixmap, sourceRect));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect)
{
  ( theWrappedObject->drawPixmap(targetRect, pixmap, sourceRect));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm)
{
  ( theWrappedObject->drawPixmap(x, y, pm));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh)
{
  ( theWrappedObject->drawPixmap(x, y, pm, sx, sy, sw, sh));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm)
{
  ( theWrappedObject->drawPixmap(x, y, w, h, pm));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh)
{
  ( theWrappedObject->drawPixmap(x, y, w, h, pm, sx, sy, sw, sh));
}

void PythonQtWrapper_QPainter::drawPixmapFragments(QPainter* theWrappedObject, const QPainter::PixmapFragment*  fragments, int  fragmentCount, const QPixmap&  pixmap, QPainter::PixmapFragmentHints  hints)
{
  ( theWrappedObject->drawPixmapFragments(fragments, fragmentCount, pixmap, hints));
}

void PythonQtWrapper_QPainter::drawPoint(QPainter* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->drawPoint(p));
}

void PythonQtWrapper_QPainter::drawPoint(QPainter* theWrappedObject, const QPointF&  pt)
{
  ( theWrappedObject->drawPoint(pt));
}

void PythonQtWrapper_QPainter::drawPoint(QPainter* theWrappedObject, int  x, int  y)
{
  ( theWrappedObject->drawPoint(x, y));
}

void PythonQtWrapper_QPainter::drawPoints(QPainter* theWrappedObject, const QPolygon&  points)
{
  ( theWrappedObject->drawPoints(points));
}

void PythonQtWrapper_QPainter::drawPoints(QPainter* theWrappedObject, const QPolygonF&  points)
{
  ( theWrappedObject->drawPoints(points));
}

void PythonQtWrapper_QPainter::drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule)
{
  ( theWrappedObject->drawPolygon(polygon, fillRule));
}

void PythonQtWrapper_QPainter::drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule)
{
  ( theWrappedObject->drawPolygon(polygon, fillRule));
}

void PythonQtWrapper_QPainter::drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon)
{
  ( theWrappedObject->drawPolyline(polygon));
}

void PythonQtWrapper_QPainter::drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline)
{
  ( theWrappedObject->drawPolyline(polyline));
}

void PythonQtWrapper_QPainter::drawRect(QPainter* theWrappedObject, const QRect&  rect)
{
  ( theWrappedObject->drawRect(rect));
}

void PythonQtWrapper_QPainter::drawRect(QPainter* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->drawRect(rect));
}

void PythonQtWrapper_QPainter::drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h)
{
  ( theWrappedObject->drawRect(x1, y1, w, h));
}

void PythonQtWrapper_QPainter::drawRects(QPainter* theWrappedObject, const QVector<QRect >&  rectangles)
{
  ( theWrappedObject->drawRects(rectangles));
}

void PythonQtWrapper_QPainter::drawRects(QPainter* theWrappedObject, const QVector<QRectF >&  rectangles)
{
  ( theWrappedObject->drawRects(rectangles));
}

void PythonQtWrapper_QPainter::drawRoundRect(QPainter* theWrappedObject, const QRect&  r, int  xround, int  yround)
{
  ( theWrappedObject->drawRoundRect(r, xround, yround));
}

void PythonQtWrapper_QPainter::drawRoundRect(QPainter* theWrappedObject, const QRectF&  r, int  xround, int  yround)
{
  ( theWrappedObject->drawRoundRect(r, xround, yround));
}

void PythonQtWrapper_QPainter::drawRoundRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  arg__5, int  arg__6)
{
  ( theWrappedObject->drawRoundRect(x, y, w, h, arg__5, arg__6));
}

void PythonQtWrapper_QPainter::drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
  ( theWrappedObject->drawRoundedRect(rect, xRadius, yRadius, mode));
}

void PythonQtWrapper_QPainter::drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
  ( theWrappedObject->drawRoundedRect(rect, xRadius, yRadius, mode));
}

void PythonQtWrapper_QPainter::drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
  ( theWrappedObject->drawRoundedRect(x, y, w, h, xRadius, yRadius, mode));
}

void PythonQtWrapper_QPainter::drawStaticText(QPainter* theWrappedObject, const QPoint&  topLeftPosition, const QStaticText&  staticText)
{
  ( theWrappedObject->drawStaticText(topLeftPosition, staticText));
}

void PythonQtWrapper_QPainter::drawStaticText(QPainter* theWrappedObject, const QPointF&  topLeftPosition, const QStaticText&  staticText)
{
  ( theWrappedObject->drawStaticText(topLeftPosition, staticText));
}

void PythonQtWrapper_QPainter::drawStaticText(QPainter* theWrappedObject, int  left, int  top, const QStaticText&  staticText)
{
  ( theWrappedObject->drawStaticText(left, top, staticText));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s)
{
  ( theWrappedObject->drawText(p, s));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s)
{
  ( theWrappedObject->drawText(p, s));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br)
{
  ( theWrappedObject->drawText(r, flags, text, br));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o)
{
  ( theWrappedObject->drawText(r, text, o));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br)
{
  ( theWrappedObject->drawText(r, flags, text, br));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s)
{
  ( theWrappedObject->drawText(x, y, s));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br)
{
  ( theWrappedObject->drawText(x, y, w, h, flags, text, br));
}

void PythonQtWrapper_QPainter::drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti)
{
  ( theWrappedObject->drawTextItem(p, ti));
}

void PythonQtWrapper_QPainter::drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti)
{
  ( theWrappedObject->drawTextItem(p, ti));
}

void PythonQtWrapper_QPainter::drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti)
{
  ( theWrappedObject->drawTextItem(x, y, ti));
}

void PythonQtWrapper_QPainter::drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3)
{
  ( theWrappedObject->drawTiledPixmap(arg__1, arg__2, arg__3));
}

void PythonQtWrapper_QPainter::drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset)
{
  ( theWrappedObject->drawTiledPixmap(rect, pm, offset));
}

void PythonQtWrapper_QPainter::drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx, int  sy)
{
  ( theWrappedObject->drawTiledPixmap(x, y, w, h, arg__5, sx, sy));
}

bool  PythonQtWrapper_QPainter::end(QPainter* theWrappedObject)
{
  return ( theWrappedObject->end());
}

void PythonQtWrapper_QPainter::endNativePainting(QPainter* theWrappedObject)
{
  ( theWrappedObject->endNativePainting());
}

void PythonQtWrapper_QPainter::eraseRect(QPainter* theWrappedObject, const QRect&  arg__1)
{
  ( theWrappedObject->eraseRect(arg__1));
}

void PythonQtWrapper_QPainter::eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1)
{
  ( theWrappedObject->eraseRect(arg__1));
}

void PythonQtWrapper_QPainter::eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->eraseRect(x, y, w, h));
}

void PythonQtWrapper_QPainter::fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush)
{
  ( theWrappedObject->fillPath(path, brush));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2)
{
  ( theWrappedObject->fillRect(arg__1, arg__2));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QColor&  color)
{
  ( theWrappedObject->fillRect(arg__1, color));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::BrushStyle  style)
{
  ( theWrappedObject->fillRect(r, style));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::GlobalColor  c)
{
  ( theWrappedObject->fillRect(r, c));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2)
{
  ( theWrappedObject->fillRect(arg__1, arg__2));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QColor&  color)
{
  ( theWrappedObject->fillRect(arg__1, color));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::BrushStyle  style)
{
  ( theWrappedObject->fillRect(r, style));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::GlobalColor  c)
{
  ( theWrappedObject->fillRect(r, c));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::BrushStyle  style)
{
  ( theWrappedObject->fillRect(x, y, w, h, style));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::GlobalColor  c)
{
  ( theWrappedObject->fillRect(x, y, w, h, c));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5)
{
  ( theWrappedObject->fillRect(x, y, w, h, arg__5));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QColor&  color)
{
  ( theWrappedObject->fillRect(x, y, w, h, color));
}

const QFont*  PythonQtWrapper_QPainter::font(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->font());
}

QFontInfo  PythonQtWrapper_QPainter::fontInfo(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->fontInfo());
}

QFontMetrics  PythonQtWrapper_QPainter::fontMetrics(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->fontMetrics());
}

bool  PythonQtWrapper_QPainter::hasClipping(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->hasClipping());
}

void PythonQtWrapper_QPainter::initFrom(QPainter* theWrappedObject, const QPaintDevice*  device)
{
  ( theWrappedObject->initFrom(device));
}

bool  PythonQtWrapper_QPainter::isActive(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

Qt::LayoutDirection  PythonQtWrapper_QPainter::layoutDirection(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->layoutDirection());
}

qreal  PythonQtWrapper_QPainter::opacity(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QPaintEngine*  PythonQtWrapper_QPainter::paintEngine(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->paintEngine());
}

const QPen*  PythonQtWrapper_QPainter::pen(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->pen());
}

QPaintDevice*  PythonQtWrapper_QPainter::static_QPainter_redirected(const QPaintDevice*  device, QPoint*  offset)
{
  return (QPainter::redirected(device, offset));
}

QPainter::RenderHints  PythonQtWrapper_QPainter::renderHints(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->renderHints());
}

void PythonQtWrapper_QPainter::resetMatrix(QPainter* theWrappedObject)
{
  ( theWrappedObject->resetMatrix());
}

void PythonQtWrapper_QPainter::resetTransform(QPainter* theWrappedObject)
{
  ( theWrappedObject->resetTransform());
}

void PythonQtWrapper_QPainter::restore(QPainter* theWrappedObject)
{
  ( theWrappedObject->restore());
}

void PythonQtWrapper_QPainter::static_QPainter_restoreRedirected(const QPaintDevice*  device)
{
  (QPainter::restoreRedirected(device));
}

void PythonQtWrapper_QPainter::rotate(QPainter* theWrappedObject, qreal  a)
{
  ( theWrappedObject->rotate(a));
}

void PythonQtWrapper_QPainter::save(QPainter* theWrappedObject)
{
  ( theWrappedObject->save());
}

void PythonQtWrapper_QPainter::scale(QPainter* theWrappedObject, qreal  sx, qreal  sy)
{
  ( theWrappedObject->scale(sx, sy));
}

void PythonQtWrapper_QPainter::setBackground(QPainter* theWrappedObject, const QBrush&  bg)
{
  ( theWrappedObject->setBackground(bg));
}

void PythonQtWrapper_QPainter::setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode)
{
  ( theWrappedObject->setBackgroundMode(mode));
}

void PythonQtWrapper_QPainter::setBrush(QPainter* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBrush(brush));
}

void PythonQtWrapper_QPainter::setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1)
{
  ( theWrappedObject->setBrushOrigin(arg__1));
}

void PythonQtWrapper_QPainter::setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1)
{
  ( theWrappedObject->setBrushOrigin(arg__1));
}

void PythonQtWrapper_QPainter::setBrushOrigin(QPainter* theWrappedObject, int  x, int  y)
{
  ( theWrappedObject->setBrushOrigin(x, y));
}

void PythonQtWrapper_QPainter::setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op)
{
  ( theWrappedObject->setClipPath(path, op));
}

void PythonQtWrapper_QPainter::setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op)
{
  ( theWrappedObject->setClipRect(arg__1, op));
}

void PythonQtWrapper_QPainter::setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op)
{
  ( theWrappedObject->setClipRect(arg__1, op));
}

void PythonQtWrapper_QPainter::setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op)
{
  ( theWrappedObject->setClipRect(x, y, w, h, op));
}

void PythonQtWrapper_QPainter::setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op)
{
  ( theWrappedObject->setClipRegion(arg__1, op));
}

void PythonQtWrapper_QPainter::setClipping(QPainter* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setClipping(enable));
}

void PythonQtWrapper_QPainter::setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode)
{
  ( theWrappedObject->setCompositionMode(mode));
}

void PythonQtWrapper_QPainter::setFont(QPainter* theWrappedObject, const QFont&  f)
{
  ( theWrappedObject->setFont(f));
}

void PythonQtWrapper_QPainter::setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction)
{
  ( theWrappedObject->setLayoutDirection(direction));
}

void PythonQtWrapper_QPainter::setOpacity(QPainter* theWrappedObject, qreal  opacity)
{
  ( theWrappedObject->setOpacity(opacity));
}

void PythonQtWrapper_QPainter::setPen(QPainter* theWrappedObject, Qt::PenStyle  style)
{
  ( theWrappedObject->setPen(style));
}

void PythonQtWrapper_QPainter::setPen(QPainter* theWrappedObject, const QColor&  color)
{
  ( theWrappedObject->setPen(color));
}

void PythonQtWrapper_QPainter::setPen(QPainter* theWrappedObject, const QPen&  pen)
{
  ( theWrappedObject->setPen(pen));
}

void PythonQtWrapper_QPainter::static_QPainter_setRedirected(const QPaintDevice*  device, QPaintDevice*  replacement, const QPoint&  offset)
{
  (QPainter::setRedirected(device, replacement, offset));
}

void PythonQtWrapper_QPainter::setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on)
{
  ( theWrappedObject->setRenderHint(hint, on));
}

void PythonQtWrapper_QPainter::setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on)
{
  ( theWrappedObject->setRenderHints(hints, on));
}

void PythonQtWrapper_QPainter::setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine)
{
  ( theWrappedObject->setTransform(transform, combine));
}

void PythonQtWrapper_QPainter::setViewTransformEnabled(QPainter* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setViewTransformEnabled(enable));
}

void PythonQtWrapper_QPainter::setViewport(QPainter* theWrappedObject, const QRect&  viewport)
{
  ( theWrappedObject->setViewport(viewport));
}

void PythonQtWrapper_QPainter::setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->setViewport(x, y, w, h));
}

void PythonQtWrapper_QPainter::setWindow(QPainter* theWrappedObject, const QRect&  window)
{
  ( theWrappedObject->setWindow(window));
}

void PythonQtWrapper_QPainter::setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->setWindow(x, y, w, h));
}

void PythonQtWrapper_QPainter::setWorldMatrix(QPainter* theWrappedObject, const QMatrix&  matrix, bool  combine)
{
  ( theWrappedObject->setWorldMatrix(matrix, combine));
}

void PythonQtWrapper_QPainter::setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setWorldMatrixEnabled(enabled));
}

void PythonQtWrapper_QPainter::setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine)
{
  ( theWrappedObject->setWorldTransform(matrix, combine));
}

void PythonQtWrapper_QPainter::shear(QPainter* theWrappedObject, qreal  sh, qreal  sv)
{
  ( theWrappedObject->shear(sh, sv));
}

void PythonQtWrapper_QPainter::strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen)
{
  ( theWrappedObject->strokePath(path, pen));
}

bool  PythonQtWrapper_QPainter::testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const
{
  return ( theWrappedObject->testRenderHint(hint));
}

const QTransform*  PythonQtWrapper_QPainter::transform(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->transform());
}

void PythonQtWrapper_QPainter::translate(QPainter* theWrappedObject, const QPoint&  offset)
{
  ( theWrappedObject->translate(offset));
}

void PythonQtWrapper_QPainter::translate(QPainter* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->translate(offset));
}

void PythonQtWrapper_QPainter::translate(QPainter* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

bool  PythonQtWrapper_QPainter::viewTransformEnabled(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->viewTransformEnabled());
}

QRect  PythonQtWrapper_QPainter::viewport(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->viewport());
}

QRect  PythonQtWrapper_QPainter::window(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->window());
}

const QMatrix*  PythonQtWrapper_QPainter::worldMatrix(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->worldMatrix());
}

bool  PythonQtWrapper_QPainter::worldMatrixEnabled(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->worldMatrixEnabled());
}

const QTransform*  PythonQtWrapper_QPainter::worldTransform(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->worldTransform());
}



QPainterPath* PythonQtWrapper_QPainterPath::new_QPainterPath()
{ 
return new QPainterPath(); }

QPainterPath* PythonQtWrapper_QPainterPath::new_QPainterPath(const QPainterPath&  other)
{ 
return new QPainterPath(other); }

QPainterPath* PythonQtWrapper_QPainterPath::new_QPainterPath(const QPointF&  startPoint)
{ 
return new QPainterPath(startPoint); }

void PythonQtWrapper_QPainterPath::addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry)
{
  ( theWrappedObject->addEllipse(center, rx, ry));
}

void PythonQtWrapper_QPainterPath::addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->addEllipse(rect));
}

void PythonQtWrapper_QPainterPath::addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->addEllipse(x, y, w, h));
}

void PythonQtWrapper_QPainterPath::addPath(QPainterPath* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->addPath(path));
}

void PythonQtWrapper_QPainterPath::addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon)
{
  ( theWrappedObject->addPolygon(polygon));
}

void PythonQtWrapper_QPainterPath::addRect(QPainterPath* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->addRect(rect));
}

void PythonQtWrapper_QPainterPath::addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->addRect(x, y, w, h));
}

void PythonQtWrapper_QPainterPath::addRegion(QPainterPath* theWrappedObject, const QRegion&  region)
{
  ( theWrappedObject->addRegion(region));
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness)
{
  ( theWrappedObject->addRoundRect(rect, roundness));
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd)
{
  ( theWrappedObject->addRoundRect(rect, xRnd, yRnd));
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness)
{
  ( theWrappedObject->addRoundRect(x, y, w, h, roundness));
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd)
{
  ( theWrappedObject->addRoundRect(x, y, w, h, xRnd, yRnd));
}

void PythonQtWrapper_QPainterPath::addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
  ( theWrappedObject->addRoundedRect(rect, xRadius, yRadius, mode));
}

void PythonQtWrapper_QPainterPath::addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
  ( theWrappedObject->addRoundedRect(x, y, w, h, xRadius, yRadius, mode));
}

void PythonQtWrapper_QPainterPath::addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text)
{
  ( theWrappedObject->addText(point, f, text));
}

void PythonQtWrapper_QPainterPath::addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text)
{
  ( theWrappedObject->addText(x, y, f, text));
}

qreal  PythonQtWrapper_QPainterPath::angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->angleAtPercent(t));
}

void PythonQtWrapper_QPainterPath::arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle)
{
  ( theWrappedObject->arcMoveTo(rect, angle));
}

void PythonQtWrapper_QPainterPath::arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle)
{
  ( theWrappedObject->arcMoveTo(x, y, w, h, angle));
}

void PythonQtWrapper_QPainterPath::arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength)
{
  ( theWrappedObject->arcTo(rect, startAngle, arcLength));
}

void PythonQtWrapper_QPainterPath::arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength)
{
  ( theWrappedObject->arcTo(x, y, w, h, startAngle, arcLength));
}

QRectF  PythonQtWrapper_QPainterPath::boundingRect(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

void PythonQtWrapper_QPainterPath::closeSubpath(QPainterPath* theWrappedObject)
{
  ( theWrappedObject->closeSubpath());
}

void PythonQtWrapper_QPainterPath::connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->connectPath(path));
}

bool  PythonQtWrapper_QPainterPath::contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const
{
  return ( theWrappedObject->contains(p));
}

bool  PythonQtWrapper_QPainterPath::contains(QPainterPath* theWrappedObject, const QPointF&  pt) const
{
  return ( theWrappedObject->contains(pt));
}

bool  PythonQtWrapper_QPainterPath::contains(QPainterPath* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->contains(rect));
}

QRectF  PythonQtWrapper_QPainterPath::controlPointRect(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->controlPointRect());
}

void PythonQtWrapper_QPainterPath::cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt)
{
  ( theWrappedObject->cubicTo(ctrlPt1, ctrlPt2, endPt));
}

void PythonQtWrapper_QPainterPath::cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty)
{
  ( theWrappedObject->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty));
}

QPointF  PythonQtWrapper_QPainterPath::currentPosition(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->currentPosition());
}

QPainterPath::Element  PythonQtWrapper_QPainterPath::elementAt(QPainterPath* theWrappedObject, int  i) const
{
  return ( theWrappedObject->elementAt(i));
}

int  PythonQtWrapper_QPainterPath::elementCount(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->elementCount());
}

Qt::FillRule  PythonQtWrapper_QPainterPath::fillRule(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->fillRule());
}

QPainterPath  PythonQtWrapper_QPainterPath::intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
  return ( theWrappedObject->intersected(r));
}

bool  PythonQtWrapper_QPainterPath::intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const
{
  return ( theWrappedObject->intersects(p));
}

bool  PythonQtWrapper_QPainterPath::intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->intersects(rect));
}

bool  PythonQtWrapper_QPainterPath::isEmpty(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

qreal  PythonQtWrapper_QPainterPath::length(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

void PythonQtWrapper_QPainterPath::lineTo(QPainterPath* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->lineTo(p));
}

void PythonQtWrapper_QPainterPath::lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->lineTo(x, y));
}

void PythonQtWrapper_QPainterPath::moveTo(QPainterPath* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTo(p));
}

void PythonQtWrapper_QPainterPath::moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->moveTo(x, y));
}

bool  PythonQtWrapper_QPainterPath::__ne__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QPainterPath  PythonQtWrapper_QPainterPath::__and__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)& other);
}

QPainterPath*  PythonQtWrapper_QPainterPath::__iand__(QPainterPath* theWrappedObject, const QPainterPath&  other)
{
  return &( (*theWrappedObject)&= other);
}

QPainterPath  PythonQtWrapper_QPainterPath::__mul__(QPainterPath* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QPainterPath  PythonQtWrapper_QPainterPath::__mul__(QPainterPath* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

QPainterPath  PythonQtWrapper_QPainterPath::__add__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)+ other);
}

QPainterPath*  PythonQtWrapper_QPainterPath::__iadd__(QPainterPath* theWrappedObject, const QPainterPath&  other)
{
  return &( (*theWrappedObject)+= other);
}

QPainterPath  PythonQtWrapper_QPainterPath::__sub__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)- other);
}

QPainterPath*  PythonQtWrapper_QPainterPath::__isub__(QPainterPath* theWrappedObject, const QPainterPath&  other)
{
  return &( (*theWrappedObject)-= other);
}

void PythonQtWrapper_QPainterPath::writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QPainterPath::__eq__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QPainterPath::readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPainterPath  PythonQtWrapper_QPainterPath::__or__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)| other);
}

QPainterPath*  PythonQtWrapper_QPainterPath::__ior__(QPainterPath* theWrappedObject, const QPainterPath&  other)
{
  return &( (*theWrappedObject)|= other);
}

qreal  PythonQtWrapper_QPainterPath::percentAtLength(QPainterPath* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->percentAtLength(t));
}

QPointF  PythonQtWrapper_QPainterPath::pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->pointAtPercent(t));
}

void PythonQtWrapper_QPainterPath::quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt)
{
  ( theWrappedObject->quadTo(ctrlPt, endPt));
}

void PythonQtWrapper_QPainterPath::quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty)
{
  ( theWrappedObject->quadTo(ctrlPtx, ctrlPty, endPtx, endPty));
}

void PythonQtWrapper_QPainterPath::setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y)
{
  ( theWrappedObject->setElementPositionAt(i, x, y));
}

void PythonQtWrapper_QPainterPath::setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule)
{
  ( theWrappedObject->setFillRule(fillRule));
}

QPainterPath  PythonQtWrapper_QPainterPath::simplified(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->simplified());
}

qreal  PythonQtWrapper_QPainterPath::slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->slopeAtPercent(t));
}

QPainterPath  PythonQtWrapper_QPainterPath::subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
  return ( theWrappedObject->subtracted(r));
}

QPainterPath  PythonQtWrapper_QPainterPath::subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
  return ( theWrappedObject->subtractedInverted(r));
}

void PythonQtWrapper_QPainterPath::swap(QPainterPath* theWrappedObject, QPainterPath&  other)
{
  ( theWrappedObject->swap(other));
}

QPolygonF  PythonQtWrapper_QPainterPath::toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix) const
{
  return ( theWrappedObject->toFillPolygon(matrix));
}

QPolygonF  PythonQtWrapper_QPainterPath::toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const
{
  return ( theWrappedObject->toFillPolygon(matrix));
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix) const
{
  return ( theWrappedObject->toFillPolygons(matrix));
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const
{
  return ( theWrappedObject->toFillPolygons(matrix));
}

QPainterPath  PythonQtWrapper_QPainterPath::toReversed(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->toReversed());
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix) const
{
  return ( theWrappedObject->toSubpathPolygons(matrix));
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const
{
  return ( theWrappedObject->toSubpathPolygons(matrix));
}

void PythonQtWrapper_QPainterPath::translate(QPainterPath* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->translate(offset));
}

void PythonQtWrapper_QPainterPath::translate(QPainterPath* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QPainterPath  PythonQtWrapper_QPainterPath::translated(QPainterPath* theWrappedObject, const QPointF&  offset) const
{
  return ( theWrappedObject->translated(offset));
}

QPainterPath  PythonQtWrapper_QPainterPath::translated(QPainterPath* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QPainterPath  PythonQtWrapper_QPainterPath::united(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
  return ( theWrappedObject->united(r));
}

QString PythonQtWrapper_QPainterPath::py_toString(QPainterPath* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QPainterPathStroker* PythonQtWrapper_QPainterPathStroker::new_QPainterPathStroker()
{ 
return new QPainterPathStroker(); }

QPainterPathStroker* PythonQtWrapper_QPainterPathStroker::new_QPainterPathStroker(const QPen&  pen)
{ 
return new QPainterPathStroker(pen); }

Qt::PenCapStyle  PythonQtWrapper_QPainterPathStroker::capStyle(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->capStyle());
}

QPainterPath  PythonQtWrapper_QPainterPathStroker::createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->createStroke(path));
}

qreal  PythonQtWrapper_QPainterPathStroker::curveThreshold(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->curveThreshold());
}

qreal  PythonQtWrapper_QPainterPathStroker::dashOffset(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->dashOffset());
}

QVector<qreal >  PythonQtWrapper_QPainterPathStroker::dashPattern(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->dashPattern());
}

Qt::PenJoinStyle  PythonQtWrapper_QPainterPathStroker::joinStyle(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->joinStyle());
}

qreal  PythonQtWrapper_QPainterPathStroker::miterLimit(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->miterLimit());
}

void PythonQtWrapper_QPainterPathStroker::setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style)
{
  ( theWrappedObject->setCapStyle(style));
}

void PythonQtWrapper_QPainterPathStroker::setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold)
{
  ( theWrappedObject->setCurveThreshold(threshold));
}

void PythonQtWrapper_QPainterPathStroker::setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset)
{
  ( theWrappedObject->setDashOffset(offset));
}

void PythonQtWrapper_QPainterPathStroker::setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1)
{
  ( theWrappedObject->setDashPattern(arg__1));
}

void PythonQtWrapper_QPainterPathStroker::setDashPattern(QPainterPathStroker* theWrappedObject, const QVector<qreal >&  dashPattern)
{
  ( theWrappedObject->setDashPattern(dashPattern));
}

void PythonQtWrapper_QPainterPathStroker::setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style)
{
  ( theWrappedObject->setJoinStyle(style));
}

void PythonQtWrapper_QPainterPathStroker::setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length)
{
  ( theWrappedObject->setMiterLimit(length));
}

void PythonQtWrapper_QPainterPathStroker::setWidth(QPainterPathStroker* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setWidth(width));
}

qreal  PythonQtWrapper_QPainterPathStroker::width(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



PythonQtShell_QPainterPath__Element::~PythonQtShell_QPainterPath__Element() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QPainterPath::Element* PythonQtWrapper_QPainterPath__Element::new_QPainterPath__Element()
{ 
return new PythonQtShell_QPainterPath__Element(); }

bool  PythonQtWrapper_QPainterPath__Element::isCurveTo(QPainterPath::Element* theWrappedObject) const
{
  return ( theWrappedObject->isCurveTo());
}

bool  PythonQtWrapper_QPainterPath__Element::isLineTo(QPainterPath::Element* theWrappedObject) const
{
  return ( theWrappedObject->isLineTo());
}

bool  PythonQtWrapper_QPainterPath__Element::isMoveTo(QPainterPath::Element* theWrappedObject) const
{
  return ( theWrappedObject->isMoveTo());
}

QPointF  PythonQtWrapper_QPainterPath__Element::operator_cast_QPointF(QPainterPath::Element* theWrappedObject) const
{
  return ( theWrappedObject->operator QPointF());
}

bool  PythonQtWrapper_QPainterPath__Element::__ne__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const
{
  return ( (*theWrappedObject)!= e);
}

bool  PythonQtWrapper_QPainterPath__Element::__eq__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const
{
  return ( (*theWrappedObject)== e);
}



PythonQtShell_QPainter__PixmapFragment::~PythonQtShell_QPainter__PixmapFragment() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QPainter::PixmapFragment* PythonQtWrapper_QPainter__PixmapFragment::new_QPainter__PixmapFragment()
{ 
return new PythonQtShell_QPainter__PixmapFragment(); }

QPainter::PixmapFragment  PythonQtWrapper_QPainter__PixmapFragment::static_QPainter__PixmapFragment_create(const QPointF&  pos, const QRectF&  sourceRect, qreal  scaleX, qreal  scaleY, qreal  rotation, qreal  opacity)
{
  return (QPainter::PixmapFragment::create(pos, sourceRect, scaleX, scaleY, rotation, opacity));
}



PythonQtShell_QPanGesture::~PythonQtShell_QPanGesture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPanGesture::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QPanGesture::childEvent(arg__1);
}
void PythonQtShell_QPanGesture::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QPanGesture::customEvent(arg__1);
}
bool  PythonQtShell_QPanGesture::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QPanGesture::event(arg__1);
}
bool  PythonQtShell_QPanGesture::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QPanGesture::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPanGesture::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QPanGesture::timerEvent(arg__1);
}
QPanGesture* PythonQtWrapper_QPanGesture::new_QPanGesture(QObject*  parent)
{ 
return new PythonQtShell_QPanGesture(parent); }

qreal  PythonQtWrapper_QPanGesture::acceleration(QPanGesture* theWrappedObject) const
{
  return ( theWrappedObject->acceleration());
}

QPointF  PythonQtWrapper_QPanGesture::delta(QPanGesture* theWrappedObject) const
{
  return ( theWrappedObject->delta());
}

QPointF  PythonQtWrapper_QPanGesture::lastOffset(QPanGesture* theWrappedObject) const
{
  return ( theWrappedObject->lastOffset());
}

QPointF  PythonQtWrapper_QPanGesture::offset(QPanGesture* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

void PythonQtWrapper_QPanGesture::setAcceleration(QPanGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setAcceleration(value));
}

void PythonQtWrapper_QPanGesture::setLastOffset(QPanGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setLastOffset(value));
}

void PythonQtWrapper_QPanGesture::setOffset(QPanGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setOffset(value));
}



PythonQtShell_QPdfWriter::~PythonQtShell_QPdfWriter() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPdfWriter::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QPdfWriter::childEvent(arg__1);
}
void PythonQtShell_QPdfWriter::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QPdfWriter::customEvent(arg__1);
}
int  PythonQtShell_QPdfWriter::devType() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("devType");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
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
  return QPdfWriter::devType();
}
bool  PythonQtShell_QPdfWriter::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QPdfWriter::event(arg__1);
}
bool  PythonQtShell_QPdfWriter::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QPdfWriter::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPdfWriter::initPainter(QPainter*  painter0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPdfWriter::initPainter(painter0);
}
int  PythonQtShell_QPdfWriter::metric(QPaintDevice::PaintDeviceMetric  id0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&id0};
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
  return QPdfWriter::metric(id0);
}
bool  PythonQtShell_QPdfWriter::newPage()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("newPage");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("newPage", methodInfo, result);
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
  return QPdfWriter::newPage();
}
QPaintEngine*  PythonQtShell_QPdfWriter::paintEngine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPdfWriter::paintEngine();
}
QPaintDevice*  PythonQtShell_QPdfWriter::redirected(QPoint*  offset0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPdfWriter::redirected(offset0);
}
void PythonQtShell_QPdfWriter::setMargins(const QPagedPaintDevice::Margins&  m0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setMargins");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPagedPaintDevice::Margins&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&m0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPdfWriter::setMargins(m0);
}
void PythonQtShell_QPdfWriter::setPageSize(QPagedPaintDevice::PageSize  size0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setPageSize");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPagedPaintDevice::PageSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&size0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPdfWriter::setPageSize(size0);
}
void PythonQtShell_QPdfWriter::setPageSizeMM(const QSizeF&  size0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setPageSizeMM");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QSizeF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&size0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPdfWriter::setPageSizeMM(size0);
}
QPainter*  PythonQtShell_QPdfWriter::sharedPainter() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPdfWriter::sharedPainter();
}
void PythonQtShell_QPdfWriter::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QPdfWriter::timerEvent(arg__1);
}
QPdfWriter* PythonQtWrapper_QPdfWriter::new_QPdfWriter(QIODevice*  device)
{ 
return new PythonQtShell_QPdfWriter(device); }

QPdfWriter* PythonQtWrapper_QPdfWriter::new_QPdfWriter(const QString&  filename)
{ 
return new PythonQtShell_QPdfWriter(filename); }

QString  PythonQtWrapper_QPdfWriter::creator(QPdfWriter* theWrappedObject) const
{
  return ( theWrappedObject->creator());
}

int  PythonQtWrapper_QPdfWriter::metric(QPdfWriter* theWrappedObject, QPaintDevice::PaintDeviceMetric  id) const
{
  return ( ((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->promoted_metric(id));
}

bool  PythonQtWrapper_QPdfWriter::newPage(QPdfWriter* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->promoted_newPage());
}

QPaintEngine*  PythonQtWrapper_QPdfWriter::paintEngine(QPdfWriter* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->promoted_paintEngine());
}

int  PythonQtWrapper_QPdfWriter::resolution(QPdfWriter* theWrappedObject) const
{
  return ( theWrappedObject->resolution());
}

void PythonQtWrapper_QPdfWriter::setCreator(QPdfWriter* theWrappedObject, const QString&  creator)
{
  ( theWrappedObject->setCreator(creator));
}

void PythonQtWrapper_QPdfWriter::setMargins(QPdfWriter* theWrappedObject, const QPagedPaintDevice::Margins&  m)
{
  ( ((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->promoted_setMargins(m));
}

void PythonQtWrapper_QPdfWriter::setPageSize(QPdfWriter* theWrappedObject, QPagedPaintDevice::PageSize  size)
{
  ( ((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->promoted_setPageSize(size));
}

void PythonQtWrapper_QPdfWriter::setPageSizeMM(QPdfWriter* theWrappedObject, const QSizeF&  size)
{
  ( ((PythonQtPublicPromoter_QPdfWriter*)theWrappedObject)->promoted_setPageSizeMM(size));
}

void PythonQtWrapper_QPdfWriter::setResolution(QPdfWriter* theWrappedObject, int  resolution)
{
  ( theWrappedObject->setResolution(resolution));
}

void PythonQtWrapper_QPdfWriter::setTitle(QPdfWriter* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setTitle(title));
}

QString  PythonQtWrapper_QPdfWriter::title(QPdfWriter* theWrappedObject) const
{
  return ( theWrappedObject->title());
}



PythonQtShell_QPicture::~PythonQtShell_QPicture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QPicture::devType() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("devType");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
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
  return QPicture::devType();
}
void PythonQtShell_QPicture::initPainter(QPainter*  painter0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPicture::initPainter(painter0);
}
int  PythonQtShell_QPicture::metric(QPaintDevice::PaintDeviceMetric  m0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&m0};
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
  return QPicture::metric(m0);
}
QPaintEngine*  PythonQtShell_QPicture::paintEngine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPicture::paintEngine();
}
QPaintDevice*  PythonQtShell_QPicture::redirected(QPoint*  offset0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPicture::redirected(offset0);
}
void PythonQtShell_QPicture::setData(const char*  data0, uint  size1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const char*" , "uint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&data0, (void*)&size1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPicture::setData(data0, size1);
}
QPainter*  PythonQtShell_QPicture::sharedPainter() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPicture::sharedPainter();
}
QPicture* PythonQtWrapper_QPicture::new_QPicture(const QPicture&  arg__1)
{ 
return new PythonQtShell_QPicture(arg__1); }

QPicture* PythonQtWrapper_QPicture::new_QPicture(int  formatVersion)
{ 
return new PythonQtShell_QPicture(formatVersion); }

QRect  PythonQtWrapper_QPicture::boundingRect(QPicture* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

const char*  PythonQtWrapper_QPicture::data(QPicture* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

int  PythonQtWrapper_QPicture::devType(QPicture* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPicture*)theWrappedObject)->promoted_devType());
}

bool  PythonQtWrapper_QPicture::isNull(QPicture* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QPicture::load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format)
{
  return ( theWrappedObject->load(dev, format));
}

bool  PythonQtWrapper_QPicture::load(QPicture* theWrappedObject, const QString&  fileName, const char*  format)
{
  return ( theWrappedObject->load(fileName, format));
}

int  PythonQtWrapper_QPicture::metric(QPicture* theWrappedObject, QPaintDevice::PaintDeviceMetric  m) const
{
  return ( ((PythonQtPublicPromoter_QPicture*)theWrappedObject)->promoted_metric(m));
}

void PythonQtWrapper_QPicture::writeTo(QPicture* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QPicture::readFrom(QPicture* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPaintEngine*  PythonQtWrapper_QPicture::paintEngine(QPicture* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPicture*)theWrappedObject)->promoted_paintEngine());
}

bool  PythonQtWrapper_QPicture::play(QPicture* theWrappedObject, QPainter*  p)
{
  return ( theWrappedObject->play(p));
}

bool  PythonQtWrapper_QPicture::save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format)
{
  return ( theWrappedObject->save(dev, format));
}

bool  PythonQtWrapper_QPicture::save(QPicture* theWrappedObject, const QString&  fileName, const char*  format)
{
  return ( theWrappedObject->save(fileName, format));
}

void PythonQtWrapper_QPicture::setBoundingRect(QPicture* theWrappedObject, const QRect&  r)
{
  ( theWrappedObject->setBoundingRect(r));
}

uint  PythonQtWrapper_QPicture::size(QPicture* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QPicture::swap(QPicture* theWrappedObject, QPicture&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QPictureFormatPlugin::~PythonQtShell_QPictureFormatPlugin() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPictureFormatPlugin::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QPictureFormatPlugin::childEvent(arg__1);
}
void PythonQtShell_QPictureFormatPlugin::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QPictureFormatPlugin::customEvent(arg__1);
}
bool  PythonQtShell_QPictureFormatPlugin::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QPictureFormatPlugin::event(arg__1);
}
bool  PythonQtShell_QPictureFormatPlugin::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QPictureFormatPlugin::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QPictureFormatPlugin::installIOHandler(const QString&  format0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("installIOHandler");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&format0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("installIOHandler", methodInfo, result);
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
  return bool();
}
bool  PythonQtShell_QPictureFormatPlugin::loadPicture(const QString&  format0, const QString&  filename1, QPicture*  pic2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("loadPicture");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "QPicture*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&format0, (void*)&filename1, (void*)&pic2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("loadPicture", methodInfo, result);
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
  return QPictureFormatPlugin::loadPicture(format0, filename1, pic2);
}
bool  PythonQtShell_QPictureFormatPlugin::savePicture(const QString&  format0, const QString&  filename1, const QPicture&  pic2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("savePicture");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QPicture&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&format0, (void*)&filename1, (void*)&pic2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("savePicture", methodInfo, result);
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
  return QPictureFormatPlugin::savePicture(format0, filename1, pic2);
}
void PythonQtShell_QPictureFormatPlugin::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QPictureFormatPlugin::timerEvent(arg__1);
}
QPictureFormatPlugin* PythonQtWrapper_QPictureFormatPlugin::new_QPictureFormatPlugin(QObject*  parent)
{ 
return new PythonQtShell_QPictureFormatPlugin(parent); }

bool  PythonQtWrapper_QPictureFormatPlugin::installIOHandler(QPictureFormatPlugin* theWrappedObject, const QString&  format)
{
  return ( ((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->promoted_installIOHandler(format));
}

bool  PythonQtWrapper_QPictureFormatPlugin::loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic)
{
  return ( ((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->promoted_loadPicture(format, filename, pic));
}

bool  PythonQtWrapper_QPictureFormatPlugin::savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic)
{
  return ( ((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->promoted_savePicture(format, filename, pic));
}



QPictureIO* PythonQtWrapper_QPictureIO::new_QPictureIO()
{ 
return new QPictureIO(); }

QPictureIO* PythonQtWrapper_QPictureIO::new_QPictureIO(QIODevice*  ioDevice, const char*  format)
{ 
return new QPictureIO(ioDevice, format); }

QPictureIO* PythonQtWrapper_QPictureIO::new_QPictureIO(const QString&  fileName, const char*  format)
{ 
return new QPictureIO(fileName, format); }

QString  PythonQtWrapper_QPictureIO::description(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->description());
}

QString  PythonQtWrapper_QPictureIO::fileName(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

const char*  PythonQtWrapper_QPictureIO::format(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

float  PythonQtWrapper_QPictureIO::gamma(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->gamma());
}

QList<QByteArray >  PythonQtWrapper_QPictureIO::static_QPictureIO_inputFormats()
{
  return (QPictureIO::inputFormats());
}

QIODevice*  PythonQtWrapper_QPictureIO::ioDevice(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->ioDevice());
}

QList<QByteArray >  PythonQtWrapper_QPictureIO::static_QPictureIO_outputFormats()
{
  return (QPictureIO::outputFormats());
}

const char*  PythonQtWrapper_QPictureIO::parameters(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->parameters());
}

const QPicture*  PythonQtWrapper_QPictureIO::picture(QPictureIO* theWrappedObject) const
{
  return &( theWrappedObject->picture());
}

QByteArray  PythonQtWrapper_QPictureIO::static_QPictureIO_pictureFormat(QIODevice*  arg__1)
{
  return (QPictureIO::pictureFormat(arg__1));
}

QByteArray  PythonQtWrapper_QPictureIO::static_QPictureIO_pictureFormat(const QString&  fileName)
{
  return (QPictureIO::pictureFormat(fileName));
}

int  PythonQtWrapper_QPictureIO::quality(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->quality());
}

bool  PythonQtWrapper_QPictureIO::read(QPictureIO* theWrappedObject)
{
  return ( theWrappedObject->read());
}

void PythonQtWrapper_QPictureIO::setDescription(QPictureIO* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setDescription(arg__1));
}

void PythonQtWrapper_QPictureIO::setFileName(QPictureIO* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setFileName(arg__1));
}

void PythonQtWrapper_QPictureIO::setFormat(QPictureIO* theWrappedObject, const char*  arg__1)
{
  ( theWrappedObject->setFormat(arg__1));
}

void PythonQtWrapper_QPictureIO::setGamma(QPictureIO* theWrappedObject, float  arg__1)
{
  ( theWrappedObject->setGamma(arg__1));
}

void PythonQtWrapper_QPictureIO::setIODevice(QPictureIO* theWrappedObject, QIODevice*  arg__1)
{
  ( theWrappedObject->setIODevice(arg__1));
}

void PythonQtWrapper_QPictureIO::setParameters(QPictureIO* theWrappedObject, const char*  arg__1)
{
  ( theWrappedObject->setParameters(arg__1));
}

void PythonQtWrapper_QPictureIO::setPicture(QPictureIO* theWrappedObject, const QPicture&  arg__1)
{
  ( theWrappedObject->setPicture(arg__1));
}

void PythonQtWrapper_QPictureIO::setQuality(QPictureIO* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setQuality(arg__1));
}

void PythonQtWrapper_QPictureIO::setStatus(QPictureIO* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setStatus(arg__1));
}

int  PythonQtWrapper_QPictureIO::status(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

bool  PythonQtWrapper_QPictureIO::write(QPictureIO* theWrappedObject)
{
  return ( theWrappedObject->write());
}



PythonQtShell_QPinchGesture::~PythonQtShell_QPinchGesture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPinchGesture::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QPinchGesture::childEvent(arg__1);
}
void PythonQtShell_QPinchGesture::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QPinchGesture::customEvent(arg__1);
}
bool  PythonQtShell_QPinchGesture::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QPinchGesture::event(arg__1);
}
bool  PythonQtShell_QPinchGesture::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QPinchGesture::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPinchGesture::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QPinchGesture::timerEvent(arg__1);
}
QPinchGesture* PythonQtWrapper_QPinchGesture::new_QPinchGesture(QObject*  parent)
{ 
return new PythonQtShell_QPinchGesture(parent); }

QPointF  PythonQtWrapper_QPinchGesture::centerPoint(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->centerPoint());
}

QPinchGesture::ChangeFlags  PythonQtWrapper_QPinchGesture::changeFlags(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->changeFlags());
}

QPointF  PythonQtWrapper_QPinchGesture::lastCenterPoint(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->lastCenterPoint());
}

qreal  PythonQtWrapper_QPinchGesture::lastRotationAngle(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->lastRotationAngle());
}

qreal  PythonQtWrapper_QPinchGesture::lastScaleFactor(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->lastScaleFactor());
}

qreal  PythonQtWrapper_QPinchGesture::rotationAngle(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->rotationAngle());
}

qreal  PythonQtWrapper_QPinchGesture::scaleFactor(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->scaleFactor());
}

void PythonQtWrapper_QPinchGesture::setCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setCenterPoint(value));
}

void PythonQtWrapper_QPinchGesture::setChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value)
{
  ( theWrappedObject->setChangeFlags(value));
}

void PythonQtWrapper_QPinchGesture::setLastCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setLastCenterPoint(value));
}

void PythonQtWrapper_QPinchGesture::setLastRotationAngle(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setLastRotationAngle(value));
}

void PythonQtWrapper_QPinchGesture::setLastScaleFactor(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setLastScaleFactor(value));
}

void PythonQtWrapper_QPinchGesture::setRotationAngle(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setRotationAngle(value));
}

void PythonQtWrapper_QPinchGesture::setScaleFactor(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setScaleFactor(value));
}

void PythonQtWrapper_QPinchGesture::setStartCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setStartCenterPoint(value));
}

void PythonQtWrapper_QPinchGesture::setTotalChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value)
{
  ( theWrappedObject->setTotalChangeFlags(value));
}

void PythonQtWrapper_QPinchGesture::setTotalRotationAngle(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setTotalRotationAngle(value));
}

void PythonQtWrapper_QPinchGesture::setTotalScaleFactor(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setTotalScaleFactor(value));
}

QPointF  PythonQtWrapper_QPinchGesture::startCenterPoint(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->startCenterPoint());
}

QPinchGesture::ChangeFlags  PythonQtWrapper_QPinchGesture::totalChangeFlags(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->totalChangeFlags());
}

qreal  PythonQtWrapper_QPinchGesture::totalRotationAngle(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->totalRotationAngle());
}

qreal  PythonQtWrapper_QPinchGesture::totalScaleFactor(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->totalScaleFactor());
}



PythonQtShell_QPixmapCache::~PythonQtShell_QPixmapCache() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QPixmapCache* PythonQtWrapper_QPixmapCache::new_QPixmapCache()
{ 
return new PythonQtShell_QPixmapCache(); }

int  PythonQtWrapper_QPixmapCache::static_QPixmapCache_cacheLimit()
{
  return (QPixmapCache::cacheLimit());
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_clear()
{
  (QPixmapCache::clear());
}

bool  PythonQtWrapper_QPixmapCache::static_QPixmapCache_find(const QPixmapCache::Key&  key, QPixmap*  pixmap)
{
  return (QPixmapCache::find(key, pixmap));
}

bool  PythonQtWrapper_QPixmapCache::static_QPixmapCache_find(const QString&  key, QPixmap&  pixmap)
{
  return (QPixmapCache::find(key, pixmap));
}

QPixmapCache::Key  PythonQtWrapper_QPixmapCache::static_QPixmapCache_insert(const QPixmap&  pixmap)
{
  return (QPixmapCache::insert(pixmap));
}

bool  PythonQtWrapper_QPixmapCache::static_QPixmapCache_insert(const QString&  key, const QPixmap&  pixmap)
{
  return (QPixmapCache::insert(key, pixmap));
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_remove(const QPixmapCache::Key&  key)
{
  (QPixmapCache::remove(key));
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_remove(const QString&  key)
{
  (QPixmapCache::remove(key));
}

bool  PythonQtWrapper_QPixmapCache::static_QPixmapCache_replace(const QPixmapCache::Key&  key, const QPixmap&  pixmap)
{
  return (QPixmapCache::replace(key, pixmap));
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_setCacheLimit(int  arg__1)
{
  (QPixmapCache::setCacheLimit(arg__1));
}



QPixmapCache::Key* PythonQtWrapper_QPixmapCache__Key::new_QPixmapCache__Key()
{ 
return new QPixmapCache::Key(); }

QPixmapCache::Key* PythonQtWrapper_QPixmapCache__Key::new_QPixmapCache__Key(const QPixmapCache::Key&  other)
{ 
return new QPixmapCache::Key(other); }

bool  PythonQtWrapper_QPixmapCache__Key::__ne__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const
{
  return ( (*theWrappedObject)!= key);
}

QPixmapCache::Key*  PythonQtWrapper_QPixmapCache__Key::operator_assign(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QPixmapCache__Key::__eq__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const
{
  return ( (*theWrappedObject)== key);
}



PythonQtShell_QPlainTextDocumentLayout::~PythonQtShell_QPlainTextDocumentLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QPlainTextDocumentLayout::blockBoundingRect(const QTextBlock&  block0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("blockBoundingRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRectF" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
    void* args[2] = {NULL, (void*)&block0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("blockBoundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
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
  return QPlainTextDocumentLayout::blockBoundingRect(block0);
}
void PythonQtShell_QPlainTextDocumentLayout::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QPlainTextDocumentLayout::childEvent(arg__1);
}
void PythonQtShell_QPlainTextDocumentLayout::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QPlainTextDocumentLayout::customEvent(arg__1);
}
void PythonQtShell_QPlainTextDocumentLayout::documentChanged(int  from0, int  arg__2, int  charsAdded2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("documentChanged");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&from0, (void*)&arg__2, (void*)&charsAdded2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextDocumentLayout::documentChanged(from0, arg__2, charsAdded2);
}
QSizeF  PythonQtShell_QPlainTextDocumentLayout::documentSize() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("documentSize");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSizeF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSizeF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("documentSize", methodInfo, result);
        } else {
          returnValue = *((QSizeF*)args[0]);
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
  return QPlainTextDocumentLayout::documentSize();
}
void PythonQtShell_QPlainTextDocumentLayout::draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("draw");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QAbstractTextDocumentLayout::PaintContext&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextDocumentLayout::draw(arg__1, arg__2);
}
void PythonQtShell_QPlainTextDocumentLayout::drawInlineObject(QPainter*  painter0, const QRectF&  rect1, QTextInlineObject  object2, int  posInDocument3, const QTextFormat&  format4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawInlineObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&" , "QTextInlineObject" , "int" , "const QTextFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
    void* args[6] = {NULL, (void*)&painter0, (void*)&rect1, (void*)&object2, (void*)&posInDocument3, (void*)&format4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextDocumentLayout::drawInlineObject(painter0, rect1, object2, posInDocument3, format4);
}
bool  PythonQtShell_QPlainTextDocumentLayout::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QPlainTextDocumentLayout::event(arg__1);
}
bool  PythonQtShell_QPlainTextDocumentLayout::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QPlainTextDocumentLayout::eventFilter(arg__1, arg__2);
}
QRectF  PythonQtShell_QPlainTextDocumentLayout::frameBoundingRect(QTextFrame*  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("frameBoundingRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRectF" , "QTextFrame*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("frameBoundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
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
  return QPlainTextDocumentLayout::frameBoundingRect(arg__1);
}
int  PythonQtShell_QPlainTextDocumentLayout::hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitTest");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QPointF&" , "Qt::HitTestAccuracy"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      int returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hitTest", methodInfo, result);
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
  return QPlainTextDocumentLayout::hitTest(arg__1, arg__2);
}
int  PythonQtShell_QPlainTextDocumentLayout::pageCount() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("pageCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("pageCount", methodInfo, result);
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
  return QPlainTextDocumentLayout::pageCount();
}
void PythonQtShell_QPlainTextDocumentLayout::positionInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("positionInlineObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTextInlineObject" , "int" , "const QTextFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&item0, (void*)&posInDocument1, (void*)&format2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextDocumentLayout::positionInlineObject(item0, posInDocument1, format2);
}
void PythonQtShell_QPlainTextDocumentLayout::resizeInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resizeInlineObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTextInlineObject" , "int" , "const QTextFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&item0, (void*)&posInDocument1, (void*)&format2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextDocumentLayout::resizeInlineObject(item0, posInDocument1, format2);
}
void PythonQtShell_QPlainTextDocumentLayout::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QPlainTextDocumentLayout::timerEvent(arg__1);
}
QPlainTextDocumentLayout* PythonQtWrapper_QPlainTextDocumentLayout::new_QPlainTextDocumentLayout(QTextDocument*  document)
{ 
return new PythonQtShell_QPlainTextDocumentLayout(document); }

QRectF  PythonQtWrapper_QPlainTextDocumentLayout::blockBoundingRect(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_blockBoundingRect(block));
}

int  PythonQtWrapper_QPlainTextDocumentLayout::cursorWidth(QPlainTextDocumentLayout* theWrappedObject) const
{
  return ( theWrappedObject->cursorWidth());
}

void PythonQtWrapper_QPlainTextDocumentLayout::documentChanged(QPlainTextDocumentLayout* theWrappedObject, int  from, int  arg__2, int  charsAdded)
{
  ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_documentChanged(from, arg__2, charsAdded));
}

QSizeF  PythonQtWrapper_QPlainTextDocumentLayout::documentSize(QPlainTextDocumentLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_documentSize());
}

void PythonQtWrapper_QPlainTextDocumentLayout::draw(QPlainTextDocumentLayout* theWrappedObject, QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2)
{
  ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_draw(arg__1, arg__2));
}

void PythonQtWrapper_QPlainTextDocumentLayout::ensureBlockLayout(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const
{
  ( theWrappedObject->ensureBlockLayout(block));
}

QRectF  PythonQtWrapper_QPlainTextDocumentLayout::frameBoundingRect(QPlainTextDocumentLayout* theWrappedObject, QTextFrame*  arg__1) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_frameBoundingRect(arg__1));
}

int  PythonQtWrapper_QPlainTextDocumentLayout::hitTest(QPlainTextDocumentLayout* theWrappedObject, const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_hitTest(arg__1, arg__2));
}

int  PythonQtWrapper_QPlainTextDocumentLayout::pageCount(QPlainTextDocumentLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_pageCount());
}

void PythonQtWrapper_QPlainTextDocumentLayout::requestUpdate(QPlainTextDocumentLayout* theWrappedObject)
{
  ( theWrappedObject->requestUpdate());
}

void PythonQtWrapper_QPlainTextDocumentLayout::setCursorWidth(QPlainTextDocumentLayout* theWrappedObject, int  width)
{
  ( theWrappedObject->setCursorWidth(width));
}



PythonQtShell_QPlainTextEdit::~PythonQtShell_QPlainTextEdit() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPlainTextEdit::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("actionEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
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
  QPlainTextEdit::actionEvent(arg__1);
}
bool  PythonQtShell_QPlainTextEdit::canInsertFromMimeData(const QMimeData*  source0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canInsertFromMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QMimeData*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&source0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canInsertFromMimeData", methodInfo, result);
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
  return QPlainTextEdit::canInsertFromMimeData(source0);
}
void PythonQtShell_QPlainTextEdit::changeEvent(QEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("changeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::changeEvent(e0);
}
void PythonQtShell_QPlainTextEdit::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QPlainTextEdit::childEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("closeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
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
  QPlainTextEdit::closeEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::contextMenuEvent(QContextMenuEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("contextMenuEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::contextMenuEvent(e0);
}
QMimeData*  PythonQtShell_QPlainTextEdit::createMimeDataFromSelection() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("createMimeDataFromSelection");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMimeData*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMimeData* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createMimeDataFromSelection", methodInfo, result);
        } else {
          returnValue = *((QMimeData**)args[0]);
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
  return QPlainTextEdit::createMimeDataFromSelection();
}
void PythonQtShell_QPlainTextEdit::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QPlainTextEdit::customEvent(arg__1);
}
int  PythonQtShell_QPlainTextEdit::devType() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("devType");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
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
  return QPlainTextEdit::devType();
}
void PythonQtShell_QPlainTextEdit::doSetTextCursor(const QTextCursor&  cursor0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("doSetTextCursor");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QTextCursor&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&cursor0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::doSetTextCursor(cursor0);
}
void PythonQtShell_QPlainTextEdit::dragEnterEvent(QDragEnterEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragEnterEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::dragEnterEvent(e0);
}
void PythonQtShell_QPlainTextEdit::dragLeaveEvent(QDragLeaveEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragLeaveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::dragLeaveEvent(e0);
}
void PythonQtShell_QPlainTextEdit::dragMoveEvent(QDragMoveEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::dragMoveEvent(e0);
}
void PythonQtShell_QPlainTextEdit::dropEvent(QDropEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::dropEvent(e0);
}
void PythonQtShell_QPlainTextEdit::enterEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("enterEvent");
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
  QPlainTextEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QPlainTextEdit::event(QEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e0};
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
  return QPlainTextEdit::event(e0);
}
bool  PythonQtShell_QPlainTextEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QPlainTextEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPlainTextEdit::focusInEvent(QFocusEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusInEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::focusInEvent(e0);
}
bool  PythonQtShell_QPlainTextEdit::focusNextPrevChild(bool  next0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusNextPrevChild");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QPlainTextEdit::focusNextPrevChild(next0);
}
void PythonQtShell_QPlainTextEdit::focusOutEvent(QFocusEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusOutEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::focusOutEvent(e0);
}
bool  PythonQtShell_QPlainTextEdit::hasHeightForWidth() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasHeightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QPlainTextEdit::hasHeightForWidth();
}
int  PythonQtShell_QPlainTextEdit::heightForWidth(int  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("heightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QPlainTextEdit::heightForWidth(arg__1);
}
void PythonQtShell_QPlainTextEdit::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hideEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
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
  QPlainTextEdit::hideEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::initPainter(QPainter*  painter0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPlainTextEdit::initPainter(painter0);
}
void PythonQtShell_QPlainTextEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPlainTextEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QPlainTextEdit::inputMethodQuery(Qt::InputMethodQuery  property0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("inputMethodQuery");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&property0};
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
  return QPlainTextEdit::inputMethodQuery(property0);
}
void PythonQtShell_QPlainTextEdit::insertFromMimeData(const QMimeData*  source0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertFromMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QMimeData*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&source0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::insertFromMimeData(source0);
}
void PythonQtShell_QPlainTextEdit::keyPressEvent(QKeyEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyPressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::keyPressEvent(e0);
}
void PythonQtShell_QPlainTextEdit::keyReleaseEvent(QKeyEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::keyReleaseEvent(e0);
}
void PythonQtShell_QPlainTextEdit::leaveEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("leaveEvent");
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
  QPlainTextEdit::leaveEvent(arg__1);
}
QVariant  PythonQtShell_QPlainTextEdit::loadResource(int  type0, const QUrl&  name1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("loadResource");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "int" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&type0, (void*)&name1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("loadResource", methodInfo, result);
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
  return QPlainTextEdit::loadResource(type0, name1);
}
int  PythonQtShell_QPlainTextEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QPlainTextEdit::metric(arg__1);
}
void PythonQtShell_QPlainTextEdit::mouseDoubleClickEvent(QMouseEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::mouseDoubleClickEvent(e0);
}
void PythonQtShell_QPlainTextEdit::mouseMoveEvent(QMouseEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::mouseMoveEvent(e0);
}
void PythonQtShell_QPlainTextEdit::mousePressEvent(QMouseEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mousePressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::mousePressEvent(e0);
}
void PythonQtShell_QPlainTextEdit::mouseReleaseEvent(QMouseEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::mouseReleaseEvent(e0);
}
void PythonQtShell_QPlainTextEdit::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
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
  QPlainTextEdit::moveEvent(arg__1);
}
bool  PythonQtShell_QPlainTextEdit::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nativeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QPlainTextEdit::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QPlainTextEdit::paintEngine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPlainTextEdit::paintEngine();
}
void PythonQtShell_QPlainTextEdit::paintEvent(QPaintEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("paintEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::paintEvent(e0);
}
QPaintDevice*  PythonQtShell_QPlainTextEdit::redirected(QPoint*  offset0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPlainTextEdit::redirected(offset0);
}
void PythonQtShell_QPlainTextEdit::resizeEvent(QResizeEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resizeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::resizeEvent(e0);
}
void PythonQtShell_QPlainTextEdit::scrollContentsBy(int  dx0, int  dy1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("scrollContentsBy");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&dx0, (void*)&dy1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QPlainTextEdit::setupViewport(QWidget*  viewport0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setupViewport");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&viewport0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::setupViewport(viewport0);
}
QPainter*  PythonQtShell_QPlainTextEdit::sharedPainter() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPlainTextEdit::sharedPainter();
}
void PythonQtShell_QPlainTextEdit::showEvent(QShowEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("showEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
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
  QPlainTextEdit::showEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("tabletEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
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
  QPlainTextEdit::tabletEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::timerEvent(QTimerEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::timerEvent(e0);
}
bool  PythonQtShell_QPlainTextEdit::viewportEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("viewportEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("viewportEvent", methodInfo, result);
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
  return QPlainTextEdit::viewportEvent(arg__1);
}
QSize  PythonQtShell_QPlainTextEdit::viewportSizeHint() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("viewportSizeHint");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("viewportSizeHint", methodInfo, result);
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
  return QPlainTextEdit::viewportSizeHint();
}
void PythonQtShell_QPlainTextEdit::wheelEvent(QWheelEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("wheelEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextEdit::wheelEvent(e0);
}
QPlainTextEdit* PythonQtWrapper_QPlainTextEdit::new_QPlainTextEdit(QWidget*  parent)
{ 
return new PythonQtShell_QPlainTextEdit(parent); }

QPlainTextEdit* PythonQtWrapper_QPlainTextEdit::new_QPlainTextEdit(const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QPlainTextEdit(text, parent); }

QString  PythonQtWrapper_QPlainTextEdit::anchorAt(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->anchorAt(pos));
}

bool  PythonQtWrapper_QPlainTextEdit::backgroundVisible(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->backgroundVisible());
}

QRectF  PythonQtWrapper_QPlainTextEdit::blockBoundingGeometry(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_blockBoundingGeometry(block));
}

QRectF  PythonQtWrapper_QPlainTextEdit::blockBoundingRect(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_blockBoundingRect(block));
}

int  PythonQtWrapper_QPlainTextEdit::blockCount(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->blockCount());
}

bool  PythonQtWrapper_QPlainTextEdit::canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_canInsertFromMimeData(source));
}

bool  PythonQtWrapper_QPlainTextEdit::canPaste(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->canPaste());
}

bool  PythonQtWrapper_QPlainTextEdit::centerOnScroll(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->centerOnScroll());
}

void PythonQtWrapper_QPlainTextEdit::changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_changeEvent(e));
}

QPointF  PythonQtWrapper_QPlainTextEdit::contentOffset(QPlainTextEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_contentOffset());
}

void PythonQtWrapper_QPlainTextEdit::contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_contextMenuEvent(e));
}

QMimeData*  PythonQtWrapper_QPlainTextEdit::createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_createMimeDataFromSelection());
}

QMenu*  PythonQtWrapper_QPlainTextEdit::createStandardContextMenu(QPlainTextEdit* theWrappedObject)
{
  return ( theWrappedObject->createStandardContextMenu());
}

QTextCharFormat  PythonQtWrapper_QPlainTextEdit::currentCharFormat(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->currentCharFormat());
}

QTextCursor  PythonQtWrapper_QPlainTextEdit::cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->cursorForPosition(pos));
}

QRect  PythonQtWrapper_QPlainTextEdit::cursorRect(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->cursorRect());
}

QRect  PythonQtWrapper_QPlainTextEdit::cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const
{
  return ( theWrappedObject->cursorRect(cursor));
}

int  PythonQtWrapper_QPlainTextEdit::cursorWidth(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->cursorWidth());
}

void PythonQtWrapper_QPlainTextEdit::doSetTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_doSetTextCursor(cursor));
}

QTextDocument*  PythonQtWrapper_QPlainTextEdit::document(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QString  PythonQtWrapper_QPlainTextEdit::documentTitle(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->documentTitle());
}

void PythonQtWrapper_QPlainTextEdit::dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dragEnterEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dragLeaveEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dragMoveEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dropEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::ensureCursorVisible(QPlainTextEdit* theWrappedObject)
{
  ( theWrappedObject->ensureCursorVisible());
}

bool  PythonQtWrapper_QPlainTextEdit::event(QPlainTextEdit* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_event(e));
}

QList<QTextEdit::ExtraSelection >  PythonQtWrapper_QPlainTextEdit::extraSelections(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->extraSelections());
}

bool  PythonQtWrapper_QPlainTextEdit::find(QPlainTextEdit* theWrappedObject, const QRegExp&  exp, QTextDocument::FindFlags  options)
{
  return ( theWrappedObject->find(exp, options));
}

bool  PythonQtWrapper_QPlainTextEdit::find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options)
{
  return ( theWrappedObject->find(exp, options));
}

QTextBlock  PythonQtWrapper_QPlainTextEdit::firstVisibleBlock(QPlainTextEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_firstVisibleBlock());
}

void PythonQtWrapper_QPlainTextEdit::focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_focusInEvent(e));
}

bool  PythonQtWrapper_QPlainTextEdit::focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QPlainTextEdit::focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_focusOutEvent(e));
}

QAbstractTextDocumentLayout::PaintContext  PythonQtWrapper_QPlainTextEdit::getPaintContext(QPlainTextEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_getPaintContext());
}

void PythonQtWrapper_QPlainTextEdit::inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_inputMethodEvent(arg__1));
}

QVariant  PythonQtWrapper_QPlainTextEdit::inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_inputMethodQuery(property));
}

QVariant  PythonQtWrapper_QPlainTextEdit::inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  query, QVariant  argument) const
{
  return ( theWrappedObject->inputMethodQuery(query, argument));
}

void PythonQtWrapper_QPlainTextEdit::insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_insertFromMimeData(source));
}

bool  PythonQtWrapper_QPlainTextEdit::isReadOnly(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

bool  PythonQtWrapper_QPlainTextEdit::isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->isUndoRedoEnabled());
}

void PythonQtWrapper_QPlainTextEdit::keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_keyPressEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_keyReleaseEvent(e));
}

QPlainTextEdit::LineWrapMode  PythonQtWrapper_QPlainTextEdit::lineWrapMode(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->lineWrapMode());
}

QVariant  PythonQtWrapper_QPlainTextEdit::loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name)
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_loadResource(type, name));
}

int  PythonQtWrapper_QPlainTextEdit::maximumBlockCount(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->maximumBlockCount());
}

void PythonQtWrapper_QPlainTextEdit::mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier)
{
  ( theWrappedObject->mergeCurrentCharFormat(modifier));
}

void PythonQtWrapper_QPlainTextEdit::mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mouseDoubleClickEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mouseMoveEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mousePressEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mouseReleaseEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode)
{
  ( theWrappedObject->moveCursor(operation, mode));
}

bool  PythonQtWrapper_QPlainTextEdit::overwriteMode(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->overwriteMode());
}

void PythonQtWrapper_QPlainTextEdit::paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_paintEvent(e));
}

QString  PythonQtWrapper_QPlainTextEdit::placeholderText(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->placeholderText());
}

void PythonQtWrapper_QPlainTextEdit::print(QPlainTextEdit* theWrappedObject, QPagedPaintDevice*  printer) const
{
  ( theWrappedObject->print(printer));
}

void PythonQtWrapper_QPlainTextEdit::resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_resizeEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_scrollContentsBy(dx, dy));
}

void PythonQtWrapper_QPlainTextEdit::setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setBackgroundVisible(visible));
}

void PythonQtWrapper_QPlainTextEdit::setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setCenterOnScroll(enabled));
}

void PythonQtWrapper_QPlainTextEdit::setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setCurrentCharFormat(format));
}

void PythonQtWrapper_QPlainTextEdit::setCursorWidth(QPlainTextEdit* theWrappedObject, int  width)
{
  ( theWrappedObject->setCursorWidth(width));
}

void PythonQtWrapper_QPlainTextEdit::setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document)
{
  ( theWrappedObject->setDocument(document));
}

void PythonQtWrapper_QPlainTextEdit::setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setDocumentTitle(title));
}

void PythonQtWrapper_QPlainTextEdit::setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections)
{
  ( theWrappedObject->setExtraSelections(selections));
}

void PythonQtWrapper_QPlainTextEdit::setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode)
{
  ( theWrappedObject->setLineWrapMode(mode));
}

void PythonQtWrapper_QPlainTextEdit::setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum)
{
  ( theWrappedObject->setMaximumBlockCount(maximum));
}

void PythonQtWrapper_QPlainTextEdit::setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite)
{
  ( theWrappedObject->setOverwriteMode(overwrite));
}

void PythonQtWrapper_QPlainTextEdit::setPlaceholderText(QPlainTextEdit* theWrappedObject, const QString&  placeholderText)
{
  ( theWrappedObject->setPlaceholderText(placeholderText));
}

void PythonQtWrapper_QPlainTextEdit::setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro)
{
  ( theWrappedObject->setReadOnly(ro));
}

void PythonQtWrapper_QPlainTextEdit::setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b)
{
  ( theWrappedObject->setTabChangesFocus(b));
}

void PythonQtWrapper_QPlainTextEdit::setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width)
{
  ( theWrappedObject->setTabStopWidth(width));
}

void PythonQtWrapper_QPlainTextEdit::setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->setTextCursor(cursor));
}

void PythonQtWrapper_QPlainTextEdit::setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

void PythonQtWrapper_QPlainTextEdit::setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setUndoRedoEnabled(enable));
}

void PythonQtWrapper_QPlainTextEdit::setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy)
{
  ( theWrappedObject->setWordWrapMode(policy));
}

void PythonQtWrapper_QPlainTextEdit::showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_showEvent(arg__1));
}

bool  PythonQtWrapper_QPlainTextEdit::tabChangesFocus(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->tabChangesFocus());
}

int  PythonQtWrapper_QPlainTextEdit::tabStopWidth(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->tabStopWidth());
}

QTextCursor  PythonQtWrapper_QPlainTextEdit::textCursor(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textCursor());
}

Qt::TextInteractionFlags  PythonQtWrapper_QPlainTextEdit::textInteractionFlags(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

void PythonQtWrapper_QPlainTextEdit::timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_timerEvent(e));
}

QString  PythonQtWrapper_QPlainTextEdit::toPlainText(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

void PythonQtWrapper_QPlainTextEdit::wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_wheelEvent(e));
}

QTextOption::WrapMode  PythonQtWrapper_QPlainTextEdit::wordWrapMode(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->wordWrapMode());
}

void PythonQtWrapper_QPlainTextEdit::zoomInF(QPlainTextEdit* theWrappedObject, float  range)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_zoomInF(range));
}



QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF()
{ 
return new QPolygonF(); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QPolygon&  a)
{ 
return new QPolygonF(a); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QPolygonF&  a)
{ 
return new QPolygonF(a); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QRectF&  r)
{ 
return new QPolygonF(r); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QVector<QPointF >&  v)
{ 
return new QPolygonF(v); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(int  size)
{ 
return new QPolygonF(size); }

void PythonQtWrapper_QPolygonF::append(QPolygonF* theWrappedObject, const QPointF&  t)
{
  ( theWrappedObject->append(t));
}

const QPointF*  PythonQtWrapper_QPolygonF::at(QPolygonF* theWrappedObject, int  i) const
{
  return &( theWrappedObject->at(i));
}

QRectF  PythonQtWrapper_QPolygonF::boundingRect(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

int  PythonQtWrapper_QPolygonF::capacity(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->capacity());
}

void PythonQtWrapper_QPolygonF::clear(QPolygonF* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QPolygonF::contains(QPolygonF* theWrappedObject, const QPointF&  t) const
{
  return ( theWrappedObject->contains(t));
}

bool  PythonQtWrapper_QPolygonF::containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const
{
  return ( theWrappedObject->containsPoint(pt, fillRule));
}

int  PythonQtWrapper_QPolygonF::count(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

int  PythonQtWrapper_QPolygonF::count(QPolygonF* theWrappedObject, const QPointF&  t) const
{
  return ( theWrappedObject->count(t));
}

bool  PythonQtWrapper_QPolygonF::empty(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

bool  PythonQtWrapper_QPolygonF::endsWith(QPolygonF* theWrappedObject, const QPointF&  t) const
{
  return ( theWrappedObject->endsWith(t));
}

QVector<QPointF >*  PythonQtWrapper_QPolygonF::fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size)
{
  return &( theWrappedObject->fill(t, size));
}

const QPointF*  PythonQtWrapper_QPolygonF::first(QPolygonF* theWrappedObject) const
{
  return &( theWrappedObject->first());
}

QVector<QPointF >  PythonQtWrapper_QPolygonF::static_QPolygonF_fromList(const QList<QPointF >&  list)
{
  return (QPolygonF::fromList(list));
}

int  PythonQtWrapper_QPolygonF::indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const
{
  return ( theWrappedObject->indexOf(t, from));
}

QPolygonF  PythonQtWrapper_QPolygonF::intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const
{
  return ( theWrappedObject->intersected(r));
}

bool  PythonQtWrapper_QPolygonF::isClosed(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->isClosed());
}

bool  PythonQtWrapper_QPolygonF::isEmpty(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QPolygonF::isSharedWith(QPolygonF* theWrappedObject, const QVector<QPointF >&  other) const
{
  return ( theWrappedObject->isSharedWith(other));
}

const QPointF*  PythonQtWrapper_QPolygonF::last(QPolygonF* theWrappedObject) const
{
  return &( theWrappedObject->last());
}

int  PythonQtWrapper_QPolygonF::lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const
{
  return ( theWrappedObject->lastIndexOf(t, from));
}

int  PythonQtWrapper_QPolygonF::length(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QVector<QPointF >  PythonQtWrapper_QPolygonF::mid(QPolygonF* theWrappedObject, int  pos, int  len) const
{
  return ( theWrappedObject->mid(pos, len));
}

bool  PythonQtWrapper_QPolygonF::__ne__(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const
{
  return ( (*theWrappedObject)!= v);
}

QPolygonF  PythonQtWrapper_QPolygonF::__mul__(QPolygonF* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QPolygonF  PythonQtWrapper_QPolygonF::__mul__(QPolygonF* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QPolygonF::writeTo(QPolygonF* theWrappedObject, QDataStream&  stream)
{
  stream <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QPolygonF::__eq__(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const
{
  return ( (*theWrappedObject)== v);
}

void PythonQtWrapper_QPolygonF::readFrom(QPolygonF* theWrappedObject, QDataStream&  stream)
{
  stream >>  (*theWrappedObject);
}

void PythonQtWrapper_QPolygonF::pop_back(QPolygonF* theWrappedObject)
{
  ( theWrappedObject->pop_back());
}

void PythonQtWrapper_QPolygonF::pop_front(QPolygonF* theWrappedObject)
{
  ( theWrappedObject->pop_front());
}

void PythonQtWrapper_QPolygonF::prepend(QPolygonF* theWrappedObject, const QPointF&  t)
{
  ( theWrappedObject->prepend(t));
}

void PythonQtWrapper_QPolygonF::push_back(QPolygonF* theWrappedObject, const QPointF&  t)
{
  ( theWrappedObject->push_back(t));
}

void PythonQtWrapper_QPolygonF::push_front(QPolygonF* theWrappedObject, const QPointF&  t)
{
  ( theWrappedObject->push_front(t));
}

void PythonQtWrapper_QPolygonF::remove(QPolygonF* theWrappedObject, int  i)
{
  ( theWrappedObject->remove(i));
}

void PythonQtWrapper_QPolygonF::remove(QPolygonF* theWrappedObject, int  i, int  n)
{
  ( theWrappedObject->remove(i, n));
}

int  PythonQtWrapper_QPolygonF::removeAll(QPolygonF* theWrappedObject, const QPointF&  t)
{
  return ( theWrappedObject->removeAll(t));
}

void PythonQtWrapper_QPolygonF::removeAt(QPolygonF* theWrappedObject, int  i)
{
  ( theWrappedObject->removeAt(i));
}

void PythonQtWrapper_QPolygonF::removeFirst(QPolygonF* theWrappedObject)
{
  ( theWrappedObject->removeFirst());
}

void PythonQtWrapper_QPolygonF::removeLast(QPolygonF* theWrappedObject)
{
  ( theWrappedObject->removeLast());
}

bool  PythonQtWrapper_QPolygonF::removeOne(QPolygonF* theWrappedObject, const QPointF&  t)
{
  return ( theWrappedObject->removeOne(t));
}

void PythonQtWrapper_QPolygonF::replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t)
{
  ( theWrappedObject->replace(i, t));
}

void PythonQtWrapper_QPolygonF::reserve(QPolygonF* theWrappedObject, int  size)
{
  ( theWrappedObject->reserve(size));
}

void PythonQtWrapper_QPolygonF::resize(QPolygonF* theWrappedObject, int  size)
{
  ( theWrappedObject->resize(size));
}

void PythonQtWrapper_QPolygonF::setSharable(QPolygonF* theWrappedObject, bool  sharable)
{
  ( theWrappedObject->setSharable(sharable));
}

int  PythonQtWrapper_QPolygonF::size(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QPolygonF::squeeze(QPolygonF* theWrappedObject)
{
  ( theWrappedObject->squeeze());
}

bool  PythonQtWrapper_QPolygonF::startsWith(QPolygonF* theWrappedObject, const QPointF&  t) const
{
  return ( theWrappedObject->startsWith(t));
}

QPolygonF  PythonQtWrapper_QPolygonF::subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const
{
  return ( theWrappedObject->subtracted(r));
}

void PythonQtWrapper_QPolygonF::swap(QPolygonF* theWrappedObject, QPolygonF&  other)
{
  ( theWrappedObject->swap(other));
}

QPointF  PythonQtWrapper_QPolygonF::takeAt(QPolygonF* theWrappedObject, int  i)
{
  return ( theWrappedObject->takeAt(i));
}

QPointF  PythonQtWrapper_QPolygonF::takeFirst(QPolygonF* theWrappedObject)
{
  return ( theWrappedObject->takeFirst());
}

QPointF  PythonQtWrapper_QPolygonF::takeLast(QPolygonF* theWrappedObject)
{
  return ( theWrappedObject->takeLast());
}

QList<QPointF >  PythonQtWrapper_QPolygonF::toList(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->toList());
}

QPolygon  PythonQtWrapper_QPolygonF::toPolygon(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->toPolygon());
}

void PythonQtWrapper_QPolygonF::translate(QPolygonF* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->translate(offset));
}

void PythonQtWrapper_QPolygonF::translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QPolygonF  PythonQtWrapper_QPolygonF::translated(QPolygonF* theWrappedObject, const QPointF&  offset) const
{
  return ( theWrappedObject->translated(offset));
}

QPolygonF  PythonQtWrapper_QPolygonF::translated(QPolygonF* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QPolygonF  PythonQtWrapper_QPolygonF::united(QPolygonF* theWrappedObject, const QPolygonF&  r) const
{
  return ( theWrappedObject->united(r));
}

QPointF  PythonQtWrapper_QPolygonF::value(QPolygonF* theWrappedObject, int  i) const
{
  return ( theWrappedObject->value(i));
}

QPointF  PythonQtWrapper_QPolygonF::value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const
{
  return ( theWrappedObject->value(i, defaultValue));
}

QString PythonQtWrapper_QPolygonF::py_toString(QPolygonF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QProgressBar::~PythonQtShell_QProgressBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QProgressBar::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("actionEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
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
  QProgressBar::actionEvent(arg__1);
}
void PythonQtShell_QProgressBar::changeEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProgressBar::changeEvent(arg__1);
}
void PythonQtShell_QProgressBar::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QProgressBar::childEvent(arg__1);
}
void PythonQtShell_QProgressBar::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("closeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
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
  QProgressBar::closeEvent(arg__1);
}
void PythonQtShell_QProgressBar::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("contextMenuEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
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
  QProgressBar::contextMenuEvent(arg__1);
}
void PythonQtShell_QProgressBar::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QProgressBar::customEvent(arg__1);
}
int  PythonQtShell_QProgressBar::devType() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("devType");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
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
  return QProgressBar::devType();
}
void PythonQtShell_QProgressBar::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragEnterEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QProgressBar::dragEnterEvent(arg__1);
}
void PythonQtShell_QProgressBar::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragLeaveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
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
  QProgressBar::dragLeaveEvent(arg__1);
}
void PythonQtShell_QProgressBar::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
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
  QProgressBar::dragMoveEvent(arg__1);
}
void PythonQtShell_QProgressBar::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
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
  QProgressBar::dropEvent(arg__1);
}
void PythonQtShell_QProgressBar::enterEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("enterEvent");
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
  QProgressBar::enterEvent(arg__1);
}
bool  PythonQtShell_QProgressBar::event(QEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e0};
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
  return QProgressBar::event(e0);
}
bool  PythonQtShell_QProgressBar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QProgressBar::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QProgressBar::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusInEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QProgressBar::focusInEvent(arg__1);
}
bool  PythonQtShell_QProgressBar::focusNextPrevChild(bool  next0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusNextPrevChild");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QProgressBar::focusNextPrevChild(next0);
}
void PythonQtShell_QProgressBar::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusOutEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QProgressBar::focusOutEvent(arg__1);
}
bool  PythonQtShell_QProgressBar::hasHeightForWidth() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasHeightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QProgressBar::hasHeightForWidth();
}
int  PythonQtShell_QProgressBar::heightForWidth(int  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("heightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QProgressBar::heightForWidth(arg__1);
}
void PythonQtShell_QProgressBar::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hideEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
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
  QProgressBar::hideEvent(arg__1);
}
void PythonQtShell_QProgressBar::initPainter(QPainter*  painter0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProgressBar::initPainter(painter0);
}
void PythonQtShell_QProgressBar::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProgressBar::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QProgressBar::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QProgressBar::inputMethodQuery(arg__1);
}
void PythonQtShell_QProgressBar::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyPressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QProgressBar::keyPressEvent(arg__1);
}
void PythonQtShell_QProgressBar::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QProgressBar::keyReleaseEvent(arg__1);
}
void PythonQtShell_QProgressBar::leaveEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("leaveEvent");
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
  QProgressBar::leaveEvent(arg__1);
}
int  PythonQtShell_QProgressBar::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QProgressBar::metric(arg__1);
}
void PythonQtShell_QProgressBar::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QProgressBar::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QProgressBar::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QProgressBar::mouseMoveEvent(arg__1);
}
void PythonQtShell_QProgressBar::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mousePressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QProgressBar::mousePressEvent(arg__1);
}
void PythonQtShell_QProgressBar::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QProgressBar::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QProgressBar::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
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
  QProgressBar::moveEvent(arg__1);
}
bool  PythonQtShell_QProgressBar::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nativeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QProgressBar::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QProgressBar::paintEngine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QProgressBar::paintEngine();
}
void PythonQtShell_QProgressBar::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProgressBar::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QProgressBar::redirected(QPoint*  offset0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QProgressBar::redirected(offset0);
}
void PythonQtShell_QProgressBar::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProgressBar::resizeEvent(arg__1);
}
QPainter*  PythonQtShell_QProgressBar::sharedPainter() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QProgressBar::sharedPainter();
}
void PythonQtShell_QProgressBar::showEvent(QShowEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("showEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
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
  QProgressBar::showEvent(arg__1);
}
void PythonQtShell_QProgressBar::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("tabletEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
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
  QProgressBar::tabletEvent(arg__1);
}
QString  PythonQtShell_QProgressBar::text() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("text");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("text", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
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
  return QProgressBar::text();
}
void PythonQtShell_QProgressBar::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QProgressBar::timerEvent(arg__1);
}
void PythonQtShell_QProgressBar::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("wheelEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
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
  QProgressBar::wheelEvent(arg__1);
}
QProgressBar* PythonQtWrapper_QProgressBar::new_QProgressBar(QWidget*  parent)
{ 
return new PythonQtShell_QProgressBar(parent); }

Qt::Alignment  PythonQtWrapper_QProgressBar::alignment(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

bool  PythonQtWrapper_QProgressBar::event(QProgressBar* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->promoted_event(e));
}

QString  PythonQtWrapper_QProgressBar::format(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

void PythonQtWrapper_QProgressBar::initStyleOption(QProgressBar* theWrappedObject, QStyleOptionProgressBar*  option) const
{
  ( ((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->promoted_initStyleOption(option));
}

bool  PythonQtWrapper_QProgressBar::invertedAppearance(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->invertedAppearance());
}

bool  PythonQtWrapper_QProgressBar::isTextVisible(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->isTextVisible());
}

int  PythonQtWrapper_QProgressBar::maximum(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->maximum());
}

int  PythonQtWrapper_QProgressBar::minimum(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->minimum());
}

QSize  PythonQtWrapper_QProgressBar::minimumSizeHint(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

Qt::Orientation  PythonQtWrapper_QProgressBar::orientation(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

void PythonQtWrapper_QProgressBar::paintEvent(QProgressBar* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->promoted_paintEvent(arg__1));
}

void PythonQtWrapper_QProgressBar::resetFormat(QProgressBar* theWrappedObject)
{
  ( theWrappedObject->resetFormat());
}

void PythonQtWrapper_QProgressBar::setAlignment(QProgressBar* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QProgressBar::setFormat(QProgressBar* theWrappedObject, const QString&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QProgressBar::setInvertedAppearance(QProgressBar* theWrappedObject, bool  invert)
{
  ( theWrappedObject->setInvertedAppearance(invert));
}

void PythonQtWrapper_QProgressBar::setTextDirection(QProgressBar* theWrappedObject, QProgressBar::Direction  textDirection)
{
  ( theWrappedObject->setTextDirection(textDirection));
}

void PythonQtWrapper_QProgressBar::setTextVisible(QProgressBar* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setTextVisible(visible));
}

QSize  PythonQtWrapper_QProgressBar::sizeHint(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QString  PythonQtWrapper_QProgressBar::text(QProgressBar* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->promoted_text());
}

QProgressBar::Direction  PythonQtWrapper_QProgressBar::textDirection(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

int  PythonQtWrapper_QProgressBar::value(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



PythonQtShell_QProgressDialog::~PythonQtShell_QProgressDialog() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QProgressDialog::accept()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("accept");
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
  QProgressDialog::accept();
}
void PythonQtShell_QProgressDialog::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("actionEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
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
  QProgressDialog::actionEvent(arg__1);
}
void PythonQtShell_QProgressDialog::changeEvent(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("changeEvent");
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
  QProgressDialog::changeEvent(event0);
}
void PythonQtShell_QProgressDialog::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QProgressDialog::childEvent(arg__1);
}
void PythonQtShell_QProgressDialog::closeEvent(QCloseEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProgressDialog::closeEvent(event0);
}
void PythonQtShell_QProgressDialog::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("contextMenuEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
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
  QProgressDialog::contextMenuEvent(arg__1);
}
void PythonQtShell_QProgressDialog::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QProgressDialog::customEvent(arg__1);
}
int  PythonQtShell_QProgressDialog::devType() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("devType");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
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
  return QProgressDialog::devType();
}
void PythonQtShell_QProgressDialog::done(int  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("done");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int"};
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
  QProgressDialog::done(arg__1);
}
void PythonQtShell_QProgressDialog::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragEnterEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QProgressDialog::dragEnterEvent(arg__1);
}
void PythonQtShell_QProgressDialog::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragLeaveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
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
  QProgressDialog::dragLeaveEvent(arg__1);
}
void PythonQtShell_QProgressDialog::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
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
  QProgressDialog::dragMoveEvent(arg__1);
}
void PythonQtShell_QProgressDialog::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
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
  QProgressDialog::dropEvent(arg__1);
}
void PythonQtShell_QProgressDialog::enterEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("enterEvent");
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
  QProgressDialog::enterEvent(arg__1);
}
bool  PythonQtShell_QProgressDialog::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QProgressDialog::event(arg__1);
}
bool  PythonQtShell_QProgressDialog::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QProgressDialog::eventFilter(arg__1, arg__2);
}
int  PythonQtShell_QProgressDialog::exec()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("exec");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("exec", methodInfo, result);
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
  return QProgressDialog::exec();
}
void PythonQtShell_QProgressDialog::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusInEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QProgressDialog::focusInEvent(arg__1);
}
bool  PythonQtShell_QProgressDialog::focusNextPrevChild(bool  next0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusNextPrevChild");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QProgressDialog::focusNextPrevChild(next0);
}
void PythonQtShell_QProgressDialog::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusOutEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QProgressDialog::focusOutEvent(arg__1);
}
bool  PythonQtShell_QProgressDialog::hasHeightForWidth() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasHeightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QProgressDialog::hasHeightForWidth();
}
int  PythonQtShell_QProgressDialog::heightForWidth(int  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("heightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QProgressDialog::heightForWidth(arg__1);
}
void PythonQtShell_QProgressDialog::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hideEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
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
  QProgressDialog::hideEvent(arg__1);
}
void PythonQtShell_QProgressDialog::initPainter(QPainter*  painter0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProgressDialog::initPainter(painter0);
}
void PythonQtShell_QProgressDialog::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProgressDialog::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QProgressDialog::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QProgressDialog::inputMethodQuery(arg__1);
}
void PythonQtShell_QProgressDialog::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyPressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QProgressDialog::keyPressEvent(arg__1);
}
void PythonQtShell_QProgressDialog::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QProgressDialog::keyReleaseEvent(arg__1);
}
void PythonQtShell_QProgressDialog::leaveEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("leaveEvent");
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
  QProgressDialog::leaveEvent(arg__1);
}
int  PythonQtShell_QProgressDialog::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QProgressDialog::metric(arg__1);
}
void PythonQtShell_QProgressDialog::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QProgressDialog::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QProgressDialog::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QProgressDialog::mouseMoveEvent(arg__1);
}
void PythonQtShell_QProgressDialog::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mousePressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QProgressDialog::mousePressEvent(arg__1);
}
void PythonQtShell_QProgressDialog::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QProgressDialog::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QProgressDialog::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
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
  QProgressDialog::moveEvent(arg__1);
}
bool  PythonQtShell_QProgressDialog::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nativeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QProgressDialog::nativeEvent(eventType0, message1, result2);
}
void PythonQtShell_QProgressDialog::open()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("open");
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
  QProgressDialog::open();
}
QPaintEngine*  PythonQtShell_QProgressDialog::paintEngine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QProgressDialog::paintEngine();
}
void PythonQtShell_QProgressDialog::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProgressDialog::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QProgressDialog::redirected(QPoint*  offset0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QProgressDialog::redirected(offset0);
}
void PythonQtShell_QProgressDialog::reject()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("reject");
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
  QProgressDialog::reject();
}
void PythonQtShell_QProgressDialog::resizeEvent(QResizeEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resizeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
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
  QProgressDialog::resizeEvent(event0);
}
QPainter*  PythonQtShell_QProgressDialog::sharedPainter() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QProgressDialog::sharedPainter();
}
void PythonQtShell_QProgressDialog::showEvent(QShowEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProgressDialog::showEvent(event0);
}
void PythonQtShell_QProgressDialog::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("tabletEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
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
  QProgressDialog::tabletEvent(arg__1);
}
void PythonQtShell_QProgressDialog::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QProgressDialog::timerEvent(arg__1);
}
void PythonQtShell_QProgressDialog::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("wheelEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
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
  QProgressDialog::wheelEvent(arg__1);
}
QProgressDialog* PythonQtWrapper_QProgressDialog::new_QProgressDialog(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QProgressDialog(parent, flags); }

QProgressDialog* PythonQtWrapper_QProgressDialog::new_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags); }

bool  PythonQtWrapper_QProgressDialog::autoClose(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->autoClose());
}

bool  PythonQtWrapper_QProgressDialog::autoReset(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->autoReset());
}

void PythonQtWrapper_QProgressDialog::changeEvent(QProgressDialog* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->promoted_changeEvent(event));
}

void PythonQtWrapper_QProgressDialog::closeEvent(QProgressDialog* theWrappedObject, QCloseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->promoted_closeEvent(event));
}

QString  PythonQtWrapper_QProgressDialog::labelText(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->labelText());
}

int  PythonQtWrapper_QProgressDialog::maximum(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->maximum());
}

int  PythonQtWrapper_QProgressDialog::minimum(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->minimum());
}

int  PythonQtWrapper_QProgressDialog::minimumDuration(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->minimumDuration());
}

void PythonQtWrapper_QProgressDialog::open(QProgressDialog* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->promoted_open());
}

void PythonQtWrapper_QProgressDialog::open(QProgressDialog* theWrappedObject, QObject*  receiver, const char*  member)
{
  ( theWrappedObject->open(receiver, member));
}

void PythonQtWrapper_QProgressDialog::resizeEvent(QProgressDialog* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QProgressDialog::setAutoClose(QProgressDialog* theWrappedObject, bool  close)
{
  ( theWrappedObject->setAutoClose(close));
}

void PythonQtWrapper_QProgressDialog::setAutoReset(QProgressDialog* theWrappedObject, bool  reset)
{
  ( theWrappedObject->setAutoReset(reset));
}

void PythonQtWrapper_QProgressDialog::setBar(QProgressDialog* theWrappedObject, QProgressBar*  bar)
{
  ( theWrappedObject->setBar(bar));
}

void PythonQtWrapper_QProgressDialog::setCancelButton(QProgressDialog* theWrappedObject, QPushButton*  button)
{
  ( theWrappedObject->setCancelButton(button));
}

void PythonQtWrapper_QProgressDialog::setLabel(QProgressDialog* theWrappedObject, QLabel*  label)
{
  ( theWrappedObject->setLabel(label));
}

void PythonQtWrapper_QProgressDialog::showEvent(QProgressDialog* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->promoted_showEvent(event));
}

QSize  PythonQtWrapper_QProgressDialog::sizeHint(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

int  PythonQtWrapper_QProgressDialog::value(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

bool  PythonQtWrapper_QProgressDialog::wasCanceled(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->wasCanceled());
}



PythonQtShell_QProxyStyle::~PythonQtShell_QProxyStyle() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QProxyStyle::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QProxyStyle::childEvent(arg__1);
}
void PythonQtShell_QProxyStyle::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QProxyStyle::customEvent(arg__1);
}
void PythonQtShell_QProxyStyle::drawComplexControl(QStyle::ComplexControl  control0, const QStyleOptionComplex*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawComplexControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&control0, (void*)&option1, (void*)&painter2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::drawComplexControl(control0, option1, painter2, widget3);
}
void PythonQtShell_QProxyStyle::drawControl(QStyle::ControlElement  element0, const QStyleOption*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::ControlElement" , "const QStyleOption*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&element0, (void*)&option1, (void*)&painter2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::drawControl(element0, option1, painter2, widget3);
}
void PythonQtShell_QProxyStyle::drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawItemPixmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRect&" , "int" , "const QPixmap&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&painter0, (void*)&rect1, (void*)&alignment2, (void*)&pixmap3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::drawItemPixmap(painter0, rect1, alignment2, pixmap3);
}
void PythonQtShell_QProxyStyle::drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, QPalette::ColorRole  textRole6) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawItemText");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRect&" , "int" , "const QPalette&" , "bool" , "const QString&" , "QPalette::ColorRole"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(8, argumentList);
    void* args[8] = {NULL, (void*)&painter0, (void*)&rect1, (void*)&flags2, (void*)&pal3, (void*)&enabled4, (void*)&text5, (void*)&textRole6};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::drawItemText(painter0, rect1, flags2, pal3, enabled4, text5, textRole6);
}
void PythonQtShell_QProxyStyle::drawPrimitive(QStyle::PrimitiveElement  element0, const QStyleOption*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPrimitive");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::PrimitiveElement" , "const QStyleOption*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&element0, (void*)&option1, (void*)&painter2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::drawPrimitive(element0, option1, painter2, widget3);
}
bool  PythonQtShell_QProxyStyle::event(QEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e0};
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
  return QProxyStyle::event(e0);
}
bool  PythonQtShell_QProxyStyle::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QProxyStyle::eventFilter(arg__1, arg__2);
}
QPixmap  PythonQtShell_QProxyStyle::generatedIconPixmap(QIcon::Mode  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("generatedIconPixmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPixmap" , "QIcon::Mode" , "const QPixmap&" , "const QStyleOption*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QPixmap returnValue;
    void* args[4] = {NULL, (void*)&iconMode0, (void*)&pixmap1, (void*)&opt2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("generatedIconPixmap", methodInfo, result);
        } else {
          returnValue = *((QPixmap*)args[0]);
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
  return QProxyStyle::generatedIconPixmap(iconMode0, pixmap1, opt2);
}
QStyle::SubControl  PythonQtShell_QProxyStyle::hitTestComplexControl(QStyle::ComplexControl  control0, const QStyleOptionComplex*  option1, const QPoint&  pos2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitTestComplexControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QStyle::SubControl" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "const QPoint&" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QStyle::SubControl returnValue;
    void* args[5] = {NULL, (void*)&control0, (void*)&option1, (void*)&pos2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hitTestComplexControl", methodInfo, result);
        } else {
          returnValue = *((QStyle::SubControl*)args[0]);
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
  return QProxyStyle::hitTestComplexControl(control0, option1, pos2, widget3);
}
QRect  PythonQtShell_QProxyStyle::itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("itemPixmapRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRect" , "const QRect&" , "int" , "const QPixmap&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QRect returnValue;
    void* args[4] = {NULL, (void*)&r0, (void*)&flags1, (void*)&pixmap2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemPixmapRect", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
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
  return QProxyStyle::itemPixmapRect(r0, flags1, pixmap2);
}
int  PythonQtShell_QProxyStyle::layoutSpacing(QSizePolicy::ControlType  control10, QSizePolicy::ControlType  control21, Qt::Orientation  orientation2, const QStyleOption*  option3, const QWidget*  widget4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("layoutSpacing");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QSizePolicy::ControlType" , "QSizePolicy::ControlType" , "Qt::Orientation" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      int returnValue;
    void* args[6] = {NULL, (void*)&control10, (void*)&control21, (void*)&orientation2, (void*)&option3, (void*)&widget4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("layoutSpacing", methodInfo, result);
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
  return QProxyStyle::layoutSpacing(control10, control21, orientation2, option3, widget4);
}
int  PythonQtShell_QProxyStyle::pixelMetric(QStyle::PixelMetric  metric0, const QStyleOption*  option1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("pixelMetric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QStyle::PixelMetric" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      int returnValue;
    void* args[4] = {NULL, (void*)&metric0, (void*)&option1, (void*)&widget2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("pixelMetric", methodInfo, result);
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
  return QProxyStyle::pixelMetric(metric0, option1, widget2);
}
void PythonQtShell_QProxyStyle::polish(QApplication*  app0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QApplication*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&app0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::polish(app0);
}
void PythonQtShell_QProxyStyle::polish(QPalette&  pal0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPalette&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&pal0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::polish(pal0);
}
void PythonQtShell_QProxyStyle::polish(QWidget*  widget0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&widget0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::polish(widget0);
}
QSize  PythonQtShell_QProxyStyle::sizeFromContents(QStyle::ContentsType  type0, const QStyleOption*  option1, const QSize&  size2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sizeFromContents");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSize" , "QStyle::ContentsType" , "const QStyleOption*" , "const QSize&" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QSize returnValue;
    void* args[5] = {NULL, (void*)&type0, (void*)&option1, (void*)&size2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeFromContents", methodInfo, result);
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
  return QProxyStyle::sizeFromContents(type0, option1, size2, widget3);
}
QIcon  PythonQtShell_QProxyStyle::standardIcon(QStyle::StandardPixmap  standardIcon0, const QStyleOption*  option1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("standardIcon");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QIcon" , "QStyle::StandardPixmap" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QIcon returnValue;
    void* args[4] = {NULL, (void*)&standardIcon0, (void*)&option1, (void*)&widget2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("standardIcon", methodInfo, result);
        } else {
          returnValue = *((QIcon*)args[0]);
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
  return QProxyStyle::standardIcon(standardIcon0, option1, widget2);
}
QPalette  PythonQtShell_QProxyStyle::standardPalette() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("standardPalette");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPalette"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPalette returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("standardPalette", methodInfo, result);
        } else {
          returnValue = *((QPalette*)args[0]);
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
  return QProxyStyle::standardPalette();
}
QPixmap  PythonQtShell_QProxyStyle::standardPixmap(QStyle::StandardPixmap  standardPixmap0, const QStyleOption*  opt1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("standardPixmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPixmap" , "QStyle::StandardPixmap" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QPixmap returnValue;
    void* args[4] = {NULL, (void*)&standardPixmap0, (void*)&opt1, (void*)&widget2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("standardPixmap", methodInfo, result);
        } else {
          returnValue = *((QPixmap*)args[0]);
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
  return QProxyStyle::standardPixmap(standardPixmap0, opt1, widget2);
}
int  PythonQtShell_QProxyStyle::styleHint(QStyle::StyleHint  hint0, const QStyleOption*  option1, const QWidget*  widget2, QStyleHintReturn*  returnData3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("styleHint");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QStyle::StyleHint" , "const QStyleOption*" , "const QWidget*" , "QStyleHintReturn*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      int returnValue;
    void* args[5] = {NULL, (void*)&hint0, (void*)&option1, (void*)&widget2, (void*)&returnData3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("styleHint", methodInfo, result);
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
  return QProxyStyle::styleHint(hint0, option1, widget2, returnData3);
}
QRect  PythonQtShell_QProxyStyle::subControlRect(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QStyle::SubControl  sc2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("subControlRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRect" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "QStyle::SubControl" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QRect returnValue;
    void* args[5] = {NULL, (void*)&cc0, (void*)&opt1, (void*)&sc2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("subControlRect", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
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
  return QProxyStyle::subControlRect(cc0, opt1, sc2, widget3);
}
QRect  PythonQtShell_QProxyStyle::subElementRect(QStyle::SubElement  element0, const QStyleOption*  option1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("subElementRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRect" , "QStyle::SubElement" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QRect returnValue;
    void* args[4] = {NULL, (void*)&element0, (void*)&option1, (void*)&widget2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("subElementRect", methodInfo, result);
        } else {
          returnValue = *((QRect*)args[0]);
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
  return QProxyStyle::subElementRect(element0, option1, widget2);
}
void PythonQtShell_QProxyStyle::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QProxyStyle::timerEvent(arg__1);
}
void PythonQtShell_QProxyStyle::unpolish(QApplication*  app0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unpolish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QApplication*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&app0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::unpolish(app0);
}
void PythonQtShell_QProxyStyle::unpolish(QWidget*  widget0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unpolish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&widget0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::unpolish(widget0);
}
QProxyStyle* PythonQtWrapper_QProxyStyle::new_QProxyStyle(QStyle*  style)
{ 
return new PythonQtShell_QProxyStyle(style); }

QProxyStyle* PythonQtWrapper_QProxyStyle::new_QProxyStyle(const QString&  key)
{ 
return new PythonQtShell_QProxyStyle(key); }

QStyle*  PythonQtWrapper_QProxyStyle::baseStyle(QProxyStyle* theWrappedObject) const
{
  return ( theWrappedObject->baseStyle());
}

void PythonQtWrapper_QProxyStyle::drawComplexControl(QProxyStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_drawComplexControl(control, option, painter, widget));
}

void PythonQtWrapper_QProxyStyle::drawControl(QProxyStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_drawControl(element, option, painter, widget));
}

void PythonQtWrapper_QProxyStyle::drawItemPixmap(QProxyStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_drawItemPixmap(painter, rect, alignment, pixmap));
}

void PythonQtWrapper_QProxyStyle::drawItemText(QProxyStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_drawItemText(painter, rect, flags, pal, enabled, text, textRole));
}

void PythonQtWrapper_QProxyStyle::drawPrimitive(QProxyStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_drawPrimitive(element, option, painter, widget));
}

bool  PythonQtWrapper_QProxyStyle::event(QProxyStyle* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_event(e));
}

QPixmap  PythonQtWrapper_QProxyStyle::generatedIconPixmap(QProxyStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_generatedIconPixmap(iconMode, pixmap, opt));
}

QStyle::SubControl  PythonQtWrapper_QProxyStyle::hitTestComplexControl(QProxyStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_hitTestComplexControl(control, option, pos, widget));
}

QRect  PythonQtWrapper_QProxyStyle::itemPixmapRect(QProxyStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_itemPixmapRect(r, flags, pixmap));
}

QRect  PythonQtWrapper_QProxyStyle::itemTextRect(QProxyStyle* theWrappedObject, const QFontMetrics&  fm, const QRect&  r, int  flags, bool  enabled, const QString&  text) const
{
  return ( theWrappedObject->itemTextRect(fm, r, flags, enabled, text));
}

int  PythonQtWrapper_QProxyStyle::layoutSpacing(QProxyStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_layoutSpacing(control1, control2, orientation, option, widget));
}

int  PythonQtWrapper_QProxyStyle::pixelMetric(QProxyStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_pixelMetric(metric, option, widget));
}

void PythonQtWrapper_QProxyStyle::polish(QProxyStyle* theWrappedObject, QApplication*  app)
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_polish(app));
}

void PythonQtWrapper_QProxyStyle::polish(QProxyStyle* theWrappedObject, QPalette&  pal)
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_polish(pal));
}

void PythonQtWrapper_QProxyStyle::polish(QProxyStyle* theWrappedObject, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_polish(widget));
}

void PythonQtWrapper_QProxyStyle::setBaseStyle(QProxyStyle* theWrappedObject, QStyle*  style)
{
  ( theWrappedObject->setBaseStyle(style));
}

QSize  PythonQtWrapper_QProxyStyle::sizeFromContents(QProxyStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_sizeFromContents(type, option, size, widget));
}

QIcon  PythonQtWrapper_QProxyStyle::standardIcon(QProxyStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_standardIcon(standardIcon, option, widget));
}

QPalette  PythonQtWrapper_QProxyStyle::standardPalette(QProxyStyle* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_standardPalette());
}

QPixmap  PythonQtWrapper_QProxyStyle::standardPixmap(QProxyStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_standardPixmap(standardPixmap, opt, widget));
}

int  PythonQtWrapper_QProxyStyle::styleHint(QProxyStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_styleHint(hint, option, widget, returnData));
}

QRect  PythonQtWrapper_QProxyStyle::subControlRect(QProxyStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_subControlRect(cc, opt, sc, widget));
}

QRect  PythonQtWrapper_QProxyStyle::subElementRect(QProxyStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_subElementRect(element, option, widget));
}

void PythonQtWrapper_QProxyStyle::unpolish(QProxyStyle* theWrappedObject, QApplication*  app)
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_unpolish(app));
}

void PythonQtWrapper_QProxyStyle::unpolish(QProxyStyle* theWrappedObject, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_unpolish(widget));
}



PythonQtShell_QPushButton::~PythonQtShell_QPushButton() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPushButton::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("actionEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
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
  QPushButton::actionEvent(arg__1);
}
void PythonQtShell_QPushButton::changeEvent(QEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("changeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPushButton::changeEvent(e0);
}
void PythonQtShell_QPushButton::checkStateSet()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("checkStateSet");
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
  QPushButton::checkStateSet();
}
void PythonQtShell_QPushButton::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QPushButton::childEvent(arg__1);
}
void PythonQtShell_QPushButton::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("closeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
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
  QPushButton::closeEvent(arg__1);
}
void PythonQtShell_QPushButton::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("contextMenuEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
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
  QPushButton::contextMenuEvent(arg__1);
}
void PythonQtShell_QPushButton::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QPushButton::customEvent(arg__1);
}
int  PythonQtShell_QPushButton::devType() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("devType");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
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
  return QPushButton::devType();
}
void PythonQtShell_QPushButton::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragEnterEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QPushButton::dragEnterEvent(arg__1);
}
void PythonQtShell_QPushButton::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragLeaveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
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
  QPushButton::dragLeaveEvent(arg__1);
}
void PythonQtShell_QPushButton::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
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
  QPushButton::dragMoveEvent(arg__1);
}
void PythonQtShell_QPushButton::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
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
  QPushButton::dropEvent(arg__1);
}
void PythonQtShell_QPushButton::enterEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("enterEvent");
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
  QPushButton::enterEvent(arg__1);
}
bool  PythonQtShell_QPushButton::event(QEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e0};
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
  return QPushButton::event(e0);
}
bool  PythonQtShell_QPushButton::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QPushButton::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPushButton::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusInEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QPushButton::focusInEvent(arg__1);
}
bool  PythonQtShell_QPushButton::focusNextPrevChild(bool  next0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusNextPrevChild");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QPushButton::focusNextPrevChild(next0);
}
void PythonQtShell_QPushButton::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusOutEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
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
  QPushButton::focusOutEvent(arg__1);
}
bool  PythonQtShell_QPushButton::hasHeightForWidth() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasHeightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QPushButton::hasHeightForWidth();
}
int  PythonQtShell_QPushButton::heightForWidth(int  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("heightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QPushButton::heightForWidth(arg__1);
}
void PythonQtShell_QPushButton::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hideEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
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
  QPushButton::hideEvent(arg__1);
}
bool  PythonQtShell_QPushButton::hitButton(const QPoint&  pos0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitButton");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pos0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hitButton", methodInfo, result);
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
  return QPushButton::hitButton(pos0);
}
void PythonQtShell_QPushButton::initPainter(QPainter*  painter0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPushButton::initPainter(painter0);
}
void PythonQtShell_QPushButton::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPushButton::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QPushButton::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPushButton::inputMethodQuery(arg__1);
}
void PythonQtShell_QPushButton::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyPressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
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
  QPushButton::keyPressEvent(arg__1);
}
void PythonQtShell_QPushButton::keyReleaseEvent(QKeyEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPushButton::keyReleaseEvent(e0);
}
void PythonQtShell_QPushButton::leaveEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("leaveEvent");
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
  QPushButton::leaveEvent(arg__1);
}
int  PythonQtShell_QPushButton::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QPushButton::metric(arg__1);
}
void PythonQtShell_QPushButton::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QPushButton::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QPushButton::mouseMoveEvent(QMouseEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPushButton::mouseMoveEvent(e0);
}
void PythonQtShell_QPushButton::mousePressEvent(QMouseEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mousePressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPushButton::mousePressEvent(e0);
}
void PythonQtShell_QPushButton::mouseReleaseEvent(QMouseEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPushButton::mouseReleaseEvent(e0);
}
void PythonQtShell_QPushButton::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
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
  QPushButton::moveEvent(arg__1);
}
bool  PythonQtShell_QPushButton::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nativeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QPushButton::nativeEvent(eventType0, message1, result2);
}
void PythonQtShell_QPushButton::nextCheckState()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nextCheckState");
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
  QPushButton::nextCheckState();
}
QPaintEngine*  PythonQtShell_QPushButton::paintEngine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPushButton::paintEngine();
}
void PythonQtShell_QPushButton::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPushButton::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QPushButton::redirected(QPoint*  offset0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPushButton::redirected(offset0);
}
void PythonQtShell_QPushButton::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPushButton::resizeEvent(arg__1);
}
QPainter*  PythonQtShell_QPushButton::sharedPainter() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QPushButton::sharedPainter();
}
void PythonQtShell_QPushButton::showEvent(QShowEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("showEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
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
  QPushButton::showEvent(arg__1);
}
void PythonQtShell_QPushButton::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("tabletEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
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
  QPushButton::tabletEvent(arg__1);
}
void PythonQtShell_QPushButton::timerEvent(QTimerEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPushButton::timerEvent(e0);
}
void PythonQtShell_QPushButton::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("wheelEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
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
  QPushButton::wheelEvent(arg__1);
}
QPushButton* PythonQtWrapper_QPushButton::new_QPushButton(QWidget*  parent)
{ 
return new PythonQtShell_QPushButton(parent); }

QPushButton* PythonQtWrapper_QPushButton::new_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QPushButton(icon, text, parent); }

QPushButton* PythonQtWrapper_QPushButton::new_QPushButton(const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QPushButton(text, parent); }

bool  PythonQtWrapper_QPushButton::autoDefault(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->autoDefault());
}

bool  PythonQtWrapper_QPushButton::event(QPushButton* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QPushButton::focusInEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_focusInEvent(arg__1));
}

void PythonQtWrapper_QPushButton::focusOutEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_focusOutEvent(arg__1));
}

void PythonQtWrapper_QPushButton::initStyleOption(QPushButton* theWrappedObject, QStyleOptionButton*  option) const
{
  ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_initStyleOption(option));
}

bool  PythonQtWrapper_QPushButton::isDefault(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

bool  PythonQtWrapper_QPushButton::isFlat(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->isFlat());
}

void PythonQtWrapper_QPushButton::keyPressEvent(QPushButton* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_keyPressEvent(arg__1));
}

QMenu*  PythonQtWrapper_QPushButton::menu(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->menu());
}

QSize  PythonQtWrapper_QPushButton::minimumSizeHint(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QPushButton::paintEvent(QPushButton* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_paintEvent(arg__1));
}

void PythonQtWrapper_QPushButton::setAutoDefault(QPushButton* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setAutoDefault(arg__1));
}

void PythonQtWrapper_QPushButton::setDefault(QPushButton* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setDefault(arg__1));
}

void PythonQtWrapper_QPushButton::setFlat(QPushButton* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setFlat(arg__1));
}

void PythonQtWrapper_QPushButton::setMenu(QPushButton* theWrappedObject, QMenu*  menu)
{
  ( theWrappedObject->setMenu(menu));
}

QSize  PythonQtWrapper_QPushButton::sizeHint(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}



QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion()
{ 
return new QQuaternion(); }

QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion(const QVector4D&  vector)
{ 
return new QQuaternion(vector); }

QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion(float  scalar, const QVector3D&  vector)
{ 
return new QQuaternion(scalar, vector); }

QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion(float  scalar, float  xpos, float  ypos, float  zpos)
{ 
return new QQuaternion(scalar, xpos, ypos, zpos); }

QQuaternion  PythonQtWrapper_QQuaternion::conjugate(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->conjugate());
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_fromAxisAndAngle(const QVector3D&  axis, float  angle)
{
  return (QQuaternion::fromAxisAndAngle(axis, angle));
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_fromAxisAndAngle(float  x, float  y, float  z, float  angle)
{
  return (QQuaternion::fromAxisAndAngle(x, y, z, angle));
}

bool  PythonQtWrapper_QQuaternion::isIdentity(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->isIdentity());
}

bool  PythonQtWrapper_QQuaternion::isNull(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

float  PythonQtWrapper_QQuaternion::length(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

float  PythonQtWrapper_QQuaternion::lengthSquared(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->lengthSquared());
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_nlerp(const QQuaternion&  q1, const QQuaternion&  q2, float  t)
{
  return (QQuaternion::nlerp(q1, q2, t));
}

void PythonQtWrapper_QQuaternion::normalize(QQuaternion* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

QQuaternion  PythonQtWrapper_QQuaternion::normalized(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

const QQuaternion  PythonQtWrapper_QQuaternion::__mul__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)* q2);
}

const QQuaternion  PythonQtWrapper_QQuaternion::__mul__(QQuaternion* theWrappedObject, float  factor)
{
  return ( (*theWrappedObject)* factor);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__imul__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion)
{
  return &( (*theWrappedObject)*= quaternion);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__imul__(QQuaternion* theWrappedObject, float  factor)
{
  return &( (*theWrappedObject)*= factor);
}

const QQuaternion  PythonQtWrapper_QQuaternion::__add__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)+ q2);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__iadd__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion)
{
  return &( (*theWrappedObject)+= quaternion);
}

const QQuaternion  PythonQtWrapper_QQuaternion::__sub__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)- q2);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__isub__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion)
{
  return &( (*theWrappedObject)-= quaternion);
}

const QQuaternion  PythonQtWrapper_QQuaternion::__div__(QQuaternion* theWrappedObject, float  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__idiv__(QQuaternion* theWrappedObject, float  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QQuaternion::writeTo(QQuaternion* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QQuaternion::__eq__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)== q2);
}

void PythonQtWrapper_QQuaternion::readFrom(QQuaternion* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QVector3D  PythonQtWrapper_QQuaternion::rotatedVector(QQuaternion* theWrappedObject, const QVector3D&  vector) const
{
  return ( theWrappedObject->rotatedVector(vector));
}

float  PythonQtWrapper_QQuaternion::scalar(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->scalar());
}

void PythonQtWrapper_QQuaternion::setScalar(QQuaternion* theWrappedObject, float  scalar)
{
  ( theWrappedObject->setScalar(scalar));
}

void PythonQtWrapper_QQuaternion::setVector(QQuaternion* theWrappedObject, const QVector3D&  vector)
{
  ( theWrappedObject->setVector(vector));
}

void PythonQtWrapper_QQuaternion::setVector(QQuaternion* theWrappedObject, float  x, float  y, float  z)
{
  ( theWrappedObject->setVector(x, y, z));
}

void PythonQtWrapper_QQuaternion::setX(QQuaternion* theWrappedObject, float  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QQuaternion::setY(QQuaternion* theWrappedObject, float  y)
{
  ( theWrappedObject->setY(y));
}

void PythonQtWrapper_QQuaternion::setZ(QQuaternion* theWrappedObject, float  z)
{
  ( theWrappedObject->setZ(z));
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_slerp(const QQuaternion&  q1, const QQuaternion&  q2, float  t)
{
  return (QQuaternion::slerp(q1, q2, t));
}

QVector4D  PythonQtWrapper_QQuaternion::toVector4D(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->toVector4D());
}

QVector3D  PythonQtWrapper_QQuaternion::vector(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->vector());
}

float  PythonQtWrapper_QQuaternion::x(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

float  PythonQtWrapper_QQuaternion::y(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

float  PythonQtWrapper_QQuaternion::z(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->z());
}

QString PythonQtWrapper_QQuaternion::py_toString(QQuaternion* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient()
{ 
return new QRadialGradient(); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(const QPointF&  center, qreal  centerRadius, const QPointF&  focalPoint, qreal  focalRadius)
{ 
return new QRadialGradient(center, centerRadius, focalPoint, focalRadius); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(const QPointF&  center, qreal  radius)
{ 
return new QRadialGradient(center, radius); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(const QPointF&  center, qreal  radius, const QPointF&  focalPoint)
{ 
return new QRadialGradient(center, radius, focalPoint); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(qreal  cx, qreal  cy, qreal  centerRadius, qreal  fx, qreal  fy, qreal  focalRadius)
{ 
return new QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius)
{ 
return new QRadialGradient(cx, cy, radius); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius, qreal  fx, qreal  fy)
{ 
return new QRadialGradient(cx, cy, radius, fx, fy); }

QPointF  PythonQtWrapper_QRadialGradient::center(QRadialGradient* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

qreal  PythonQtWrapper_QRadialGradient::centerRadius(QRadialGradient* theWrappedObject) const
{
  return ( theWrappedObject->centerRadius());
}

QPointF  PythonQtWrapper_QRadialGradient::focalPoint(QRadialGradient* theWrappedObject) const
{
  return ( theWrappedObject->focalPoint());
}

qreal  PythonQtWrapper_QRadialGradient::focalRadius(QRadialGradient* theWrappedObject) const
{
  return ( theWrappedObject->focalRadius());
}

qreal  PythonQtWrapper_QRadialGradient::radius(QRadialGradient* theWrappedObject) const
{
  return ( theWrappedObject->radius());
}

void PythonQtWrapper_QRadialGradient::setCenter(QRadialGradient* theWrappedObject, const QPointF&  center)
{
  ( theWrappedObject->setCenter(center));
}

void PythonQtWrapper_QRadialGradient::setCenter(QRadialGradient* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setCenter(x, y));
}

void PythonQtWrapper_QRadialGradient::setCenterRadius(QRadialGradient* theWrappedObject, qreal  radius)
{
  ( theWrappedObject->setCenterRadius(radius));
}

void PythonQtWrapper_QRadialGradient::setFocalPoint(QRadialGradient* theWrappedObject, const QPointF&  focalPoint)
{
  ( theWrappedObject->setFocalPoint(focalPoint));
}

void PythonQtWrapper_QRadialGradient::setFocalPoint(QRadialGradient* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setFocalPoint(x, y));
}

void PythonQtWrapper_QRadialGradient::setFocalRadius(QRadialGradient* theWrappedObject, qreal  radius)
{
  ( theWrappedObject->setFocalRadius(radius));
}

void PythonQtWrapper_QRadialGradient::setRadius(QRadialGradient* theWrappedObject, qreal  radius)
{
  ( theWrappedObject->setRadius(radius));
}



PythonQtShell_QRadioButton::~PythonQtShell_QRadioButton() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRadioButton::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("actionEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
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
  QRadioButton::actionEvent(arg__1);
}
void PythonQtShell_QRadioButton::changeEvent(QEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("changeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QRadioButton::changeEvent(e0);
}
void PythonQtShell_QRadioButton::checkStateSet()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("checkStateSet");
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
  QRadioButton::checkStateSet();
}
void PythonQtShell_QRadioButton::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QRadioButton::childEvent(arg__1);
}
void PythonQtShell_QRadioButton::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("closeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
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
  QRadioButton::closeEvent(arg__1);
}
void PythonQtShell_QRadioButton::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("contextMenuEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
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
  QRadioButton::contextMenuEvent(arg__1);
}
void PythonQtShell_QRadioButton::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QRadioButton::customEvent(arg__1);
}
int  PythonQtShell_QRadioButton::devType() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("devType");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
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
  return QRadioButton::devType();
}
void PythonQtShell_QRadioButton::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragEnterEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QRadioButton::dragEnterEvent(arg__1);
}
void PythonQtShell_QRadioButton::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragLeaveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
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
  QRadioButton::dragLeaveEvent(arg__1);
}
void PythonQtShell_QRadioButton::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
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
  QRadioButton::dragMoveEvent(arg__1);
}
void PythonQtShell_QRadioButton::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
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
  QRadioButton::dropEvent(arg__1);
}
void PythonQtShell_QRadioButton::enterEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("enterEvent");
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
  QRadioButton::enterEvent(arg__1);
}
bool  PythonQtShell_QRadioButton::event(QEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e0};
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
  return QRadioButton::event(e0);
}
bool  PythonQtShell_QRadioButton::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QRadioButton::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QRadioButton::focusInEvent(QFocusEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusInEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QRadioButton::focusInEvent(e0);
}
bool  PythonQtShell_QRadioButton::focusNextPrevChild(bool  next0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusNextPrevChild");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QRadioButton::focusNextPrevChild(next0);
}
void PythonQtShell_QRadioButton::focusOutEvent(QFocusEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusOutEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QRadioButton::focusOutEvent(e0);
}
bool  PythonQtShell_QRadioButton::hasHeightForWidth() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasHeightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QRadioButton::hasHeightForWidth();
}
int  PythonQtShell_QRadioButton::heightForWidth(int  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("heightForWidth");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QRadioButton::heightForWidth(arg__1);
}
void PythonQtShell_QRadioButton::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hideEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
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
  QRadioButton::hideEvent(arg__1);
}
bool  PythonQtShell_QRadioButton::hitButton(const QPoint&  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitButton");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hitButton", methodInfo, result);
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
  return QRadioButton::hitButton(arg__1);
}
void PythonQtShell_QRadioButton::initPainter(QPainter*  painter0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QRadioButton::initPainter(painter0);
}
void PythonQtShell_QRadioButton::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QRadioButton::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QRadioButton::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QRadioButton::inputMethodQuery(arg__1);
}
void PythonQtShell_QRadioButton::keyPressEvent(QKeyEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyPressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QRadioButton::keyPressEvent(e0);
}
void PythonQtShell_QRadioButton::keyReleaseEvent(QKeyEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QRadioButton::keyReleaseEvent(e0);
}
void PythonQtShell_QRadioButton::leaveEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("leaveEvent");
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
  QRadioButton::leaveEvent(arg__1);
}
int  PythonQtShell_QRadioButton::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QRadioButton::metric(arg__1);
}
void PythonQtShell_QRadioButton::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QRadioButton::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QRadioButton::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
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
  QRadioButton::mouseMoveEvent(arg__1);
}
void PythonQtShell_QRadioButton::mousePressEvent(QMouseEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mousePressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QRadioButton::mousePressEvent(e0);
}
void PythonQtShell_QRadioButton::mouseReleaseEvent(QMouseEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QRadioButton::mouseReleaseEvent(e0);
}
void PythonQtShell_QRadioButton::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
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
  QRadioButton::moveEvent(arg__1);
}
bool  PythonQtShell_QRadioButton::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nativeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QRadioButton::nativeEvent(eventType0, message1, result2);
}
void PythonQtShell_QRadioButton::nextCheckState()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nextCheckState");
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
  QRadioButton::nextCheckState();
}
QPaintEngine*  PythonQtShell_QRadioButton::paintEngine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QRadioButton::paintEngine();
}
void PythonQtShell_QRadioButton::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QRadioButton::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QRadioButton::redirected(QPoint*  offset0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QRadioButton::redirected(offset0);
}
void PythonQtShell_QRadioButton::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QRadioButton::resizeEvent(arg__1);
}
QPainter*  PythonQtShell_QRadioButton::sharedPainter() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QRadioButton::sharedPainter();
}
void PythonQtShell_QRadioButton::showEvent(QShowEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("showEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
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
  QRadioButton::showEvent(arg__1);
}
void PythonQtShell_QRadioButton::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("tabletEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
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
  QRadioButton::tabletEvent(arg__1);
}
void PythonQtShell_QRadioButton::timerEvent(QTimerEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QRadioButton::timerEvent(e0);
}
void PythonQtShell_QRadioButton::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("wheelEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
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
  QRadioButton::wheelEvent(arg__1);
}
QRadioButton* PythonQtWrapper_QRadioButton::new_QRadioButton(QWidget*  parent)
{ 
return new PythonQtShell_QRadioButton(parent); }

QRadioButton* PythonQtWrapper_QRadioButton::new_QRadioButton(const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QRadioButton(text, parent); }

bool  PythonQtWrapper_QRadioButton::event(QRadioButton* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->promoted_event(e));
}

bool  PythonQtWrapper_QRadioButton::hitButton(QRadioButton* theWrappedObject, const QPoint&  arg__1) const
{
  return ( ((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->promoted_hitButton(arg__1));
}

void PythonQtWrapper_QRadioButton::initStyleOption(QRadioButton* theWrappedObject, QStyleOptionButton*  button) const
{
  ( ((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->promoted_initStyleOption(button));
}

QSize  PythonQtWrapper_QRadioButton::minimumSizeHint(QRadioButton* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QRadioButton::mouseMoveEvent(QRadioButton* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->promoted_mouseMoveEvent(arg__1));
}

void PythonQtWrapper_QRadioButton::paintEvent(QRadioButton* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->promoted_paintEvent(arg__1));
}

QSize  PythonQtWrapper_QRadioButton::sizeHint(QRadioButton* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}



QRawFont* PythonQtWrapper_QRawFont::new_QRawFont()
{ 
return new QRawFont(); }

QRawFont* PythonQtWrapper_QRawFont::new_QRawFont(const QByteArray&  fontData, qreal  pixelSize, QFont::HintingPreference  hintingPreference)
{ 
return new QRawFont(fontData, pixelSize, hintingPreference); }

QRawFont* PythonQtWrapper_QRawFont::new_QRawFont(const QRawFont&  other)
{ 
return new QRawFont(other); }

QRawFont* PythonQtWrapper_QRawFont::new_QRawFont(const QString&  fileName, qreal  pixelSize, QFont::HintingPreference  hintingPreference)
{ 
return new QRawFont(fileName, pixelSize, hintingPreference); }

QVector<QPointF >  PythonQtWrapper_QRawFont::advancesForGlyphIndexes(QRawFont* theWrappedObject, const QVector<unsigned int >&  glyphIndexes) const
{
  return ( theWrappedObject->advancesForGlyphIndexes(glyphIndexes));
}

QVector<QPointF >  PythonQtWrapper_QRawFont::advancesForGlyphIndexes(QRawFont* theWrappedObject, const QVector<unsigned int >&  glyphIndexes, QRawFont::LayoutFlags  layoutFlags) const
{
  return ( theWrappedObject->advancesForGlyphIndexes(glyphIndexes, layoutFlags));
}

bool  PythonQtWrapper_QRawFont::advancesForGlyphIndexes(QRawFont* theWrappedObject, const unsigned int*  glyphIndexes, QPointF*  advances, int  numGlyphs) const
{
  return ( theWrappedObject->advancesForGlyphIndexes(glyphIndexes, advances, numGlyphs));
}

bool  PythonQtWrapper_QRawFont::advancesForGlyphIndexes(QRawFont* theWrappedObject, const unsigned int*  glyphIndexes, QPointF*  advances, int  numGlyphs, QRawFont::LayoutFlags  layoutFlags) const
{
  return ( theWrappedObject->advancesForGlyphIndexes(glyphIndexes, advances, numGlyphs, layoutFlags));
}

QImage  PythonQtWrapper_QRawFont::alphaMapForGlyph(QRawFont* theWrappedObject, unsigned int  glyphIndex, QRawFont::AntialiasingType  antialiasingType, const QTransform&  transform) const
{
  return ( theWrappedObject->alphaMapForGlyph(glyphIndex, antialiasingType, transform));
}

qreal  PythonQtWrapper_QRawFont::ascent(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QRawFont::averageCharWidth(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->averageCharWidth());
}

QRectF  PythonQtWrapper_QRawFont::boundingRect(QRawFont* theWrappedObject, unsigned int  glyphIndex) const
{
  return ( theWrappedObject->boundingRect(glyphIndex));
}

qreal  PythonQtWrapper_QRawFont::descent(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QString  PythonQtWrapper_QRawFont::familyName(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->familyName());
}

QByteArray  PythonQtWrapper_QRawFont::fontTable(QRawFont* theWrappedObject, const char*  tagName) const
{
  return ( theWrappedObject->fontTable(tagName));
}

QRawFont  PythonQtWrapper_QRawFont::static_QRawFont_fromFont(const QFont&  font, QFontDatabase::WritingSystem  writingSystem)
{
  return (QRawFont::fromFont(font, writingSystem));
}

bool  PythonQtWrapper_QRawFont::glyphIndexesForChars(QRawFont* theWrappedObject, const QChar*  chars, int  numChars, unsigned int*  glyphIndexes, int*  numGlyphs) const
{
  return ( theWrappedObject->glyphIndexesForChars(chars, numChars, glyphIndexes, numGlyphs));
}

QVector<unsigned int >  PythonQtWrapper_QRawFont::glyphIndexesForString(QRawFont* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->glyphIndexesForString(text));
}

QFont::HintingPreference  PythonQtWrapper_QRawFont::hintingPreference(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->hintingPreference());
}

bool  PythonQtWrapper_QRawFont::isValid(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QRawFont::leading(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->leading());
}

qreal  PythonQtWrapper_QRawFont::lineThickness(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->lineThickness());
}

void PythonQtWrapper_QRawFont::loadFromData(QRawFont* theWrappedObject, const QByteArray&  fontData, qreal  pixelSize, QFont::HintingPreference  hintingPreference)
{
  ( theWrappedObject->loadFromData(fontData, pixelSize, hintingPreference));
}

void PythonQtWrapper_QRawFont::loadFromFile(QRawFont* theWrappedObject, const QString&  fileName, qreal  pixelSize, QFont::HintingPreference  hintingPreference)
{
  ( theWrappedObject->loadFromFile(fileName, pixelSize, hintingPreference));
}

qreal  PythonQtWrapper_QRawFont::maxCharWidth(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->maxCharWidth());
}

bool  PythonQtWrapper_QRawFont::__ne__(QRawFont* theWrappedObject, const QRawFont&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QRawFont*  PythonQtWrapper_QRawFont::operator_assign(QRawFont* theWrappedObject, const QRawFont&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QRawFont::__eq__(QRawFont* theWrappedObject, const QRawFont&  other) const
{
  return ( (*theWrappedObject)== other);
}

QPainterPath  PythonQtWrapper_QRawFont::pathForGlyph(QRawFont* theWrappedObject, unsigned int  glyphIndex) const
{
  return ( theWrappedObject->pathForGlyph(glyphIndex));
}

qreal  PythonQtWrapper_QRawFont::pixelSize(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->pixelSize());
}

void PythonQtWrapper_QRawFont::setPixelSize(QRawFont* theWrappedObject, qreal  pixelSize)
{
  ( theWrappedObject->setPixelSize(pixelSize));
}

QFont::Style  PythonQtWrapper_QRawFont::style(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

QString  PythonQtWrapper_QRawFont::styleName(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->styleName());
}

QList<QFontDatabase::WritingSystem >  PythonQtWrapper_QRawFont::supportedWritingSystems(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->supportedWritingSystems());
}

bool  PythonQtWrapper_QRawFont::supportsCharacter(QRawFont* theWrappedObject, QChar  character) const
{
  return ( theWrappedObject->supportsCharacter(character));
}

bool  PythonQtWrapper_QRawFont::supportsCharacter(QRawFont* theWrappedObject, uint  ucs4) const
{
  return ( theWrappedObject->supportsCharacter(ucs4));
}

void PythonQtWrapper_QRawFont::swap(QRawFont* theWrappedObject, QRawFont&  other)
{
  ( theWrappedObject->swap(other));
}

qreal  PythonQtWrapper_QRawFont::underlinePosition(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->underlinePosition());
}

qreal  PythonQtWrapper_QRawFont::unitsPerEm(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->unitsPerEm());
}

int  PythonQtWrapper_QRawFont::weight(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->weight());
}

qreal  PythonQtWrapper_QRawFont::xHeight(QRawFont* theWrappedObject) const
{
  return ( theWrappedObject->xHeight());
}



PythonQtShell_QRegExpValidator::~PythonQtShell_QRegExpValidator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRegExpValidator::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QRegExpValidator::childEvent(arg__1);
}
void PythonQtShell_QRegExpValidator::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QRegExpValidator::customEvent(arg__1);
}
bool  PythonQtShell_QRegExpValidator::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QRegExpValidator::event(arg__1);
}
bool  PythonQtShell_QRegExpValidator::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QRegExpValidator::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QRegExpValidator::fixup(QString&  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fixup");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QString&"};
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
  QRegExpValidator::fixup(arg__1);
}
void PythonQtShell_QRegExpValidator::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QRegExpValidator::timerEvent(arg__1);
}
QValidator::State  PythonQtShell_QRegExpValidator::validate(QString&  input0, int&  pos1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("validate");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QValidator::State" , "QString&" , "int&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QValidator::State returnValue;
    void* args[3] = {NULL, (void*)&input0, (void*)&pos1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("validate", methodInfo, result);
        } else {
          returnValue = *((QValidator::State*)args[0]);
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
  return QRegExpValidator::validate(input0, pos1);
}
QRegExpValidator* PythonQtWrapper_QRegExpValidator::new_QRegExpValidator(QObject*  parent)
{ 
return new PythonQtShell_QRegExpValidator(parent); }

QRegExpValidator* PythonQtWrapper_QRegExpValidator::new_QRegExpValidator(const QRegExp&  rx, QObject*  parent)
{ 
return new PythonQtShell_QRegExpValidator(rx, parent); }

const QRegExp*  PythonQtWrapper_QRegExpValidator::regExp(QRegExpValidator* theWrappedObject) const
{
  return &( theWrappedObject->regExp());
}

void PythonQtWrapper_QRegExpValidator::setRegExp(QRegExpValidator* theWrappedObject, const QRegExp&  rx)
{
  ( theWrappedObject->setRegExp(rx));
}

QValidator::State  PythonQtWrapper_QRegExpValidator::validate(QRegExpValidator* theWrappedObject, QString&  input, int&  pos) const
{
  return ( ((PythonQtPublicPromoter_QRegExpValidator*)theWrappedObject)->promoted_validate(input, pos));
}



PythonQtShell_QRegularExpressionValidator::~PythonQtShell_QRegularExpressionValidator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRegularExpressionValidator::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QRegularExpressionValidator::childEvent(arg__1);
}
void PythonQtShell_QRegularExpressionValidator::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
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
  QRegularExpressionValidator::customEvent(arg__1);
}
bool  PythonQtShell_QRegularExpressionValidator::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QRegularExpressionValidator::event(arg__1);
}
bool  PythonQtShell_QRegularExpressionValidator::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QRegularExpressionValidator::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QRegularExpressionValidator::fixup(QString&  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fixup");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QString&"};
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
  QRegularExpressionValidator::fixup(arg__1);
}
void PythonQtShell_QRegularExpressionValidator::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QRegularExpressionValidator::timerEvent(arg__1);
}
QValidator::State  PythonQtShell_QRegularExpressionValidator::validate(QString&  input0, int&  pos1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("validate");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QValidator::State" , "QString&" , "int&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QValidator::State returnValue;
    void* args[3] = {NULL, (void*)&input0, (void*)&pos1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("validate", methodInfo, result);
        } else {
          returnValue = *((QValidator::State*)args[0]);
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
  return QRegularExpressionValidator::validate(input0, pos1);
}
QRegularExpressionValidator* PythonQtWrapper_QRegularExpressionValidator::new_QRegularExpressionValidator(QObject*  parent)
{ 
return new PythonQtShell_QRegularExpressionValidator(parent); }

QRegularExpressionValidator* PythonQtWrapper_QRegularExpressionValidator::new_QRegularExpressionValidator(const QRegularExpression&  re, QObject*  parent)
{ 
return new PythonQtShell_QRegularExpressionValidator(re, parent); }

QRegularExpression  PythonQtWrapper_QRegularExpressionValidator::regularExpression(QRegularExpressionValidator* theWrappedObject) const
{
  return ( theWrappedObject->regularExpression());
}

QValidator::State  PythonQtWrapper_QRegularExpressionValidator::validate(QRegularExpressionValidator* theWrappedObject, QString&  input, int&  pos) const
{
  return ( ((PythonQtPublicPromoter_QRegularExpressionValidator*)theWrappedObject)->promoted_validate(input, pos));
}


