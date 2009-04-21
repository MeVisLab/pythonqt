#include "PythonQtWrapper_QPaintEngine.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVarLengthArray>
#include <QVariant>
#include <qimage.h>
#include <qline.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>

bool  PythonQtShell_QPaintEngine::begin(QPaintDevice*  pdev)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "begin");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "begin(QPaintEngine*,QPaintDevice* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&pdev};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  bool  result;
return result;
}
QPoint  PythonQtShell_QPaintEngine::coordinateOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "coordinateOffset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "coordinateOffset(QPaintEngine*)");
      QPoint  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QPoint *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QPaintEngine::coordinateOffset();
}
void PythonQtShell_QPaintEngine::drawEllipse(const QRect&  r)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawEllipse");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawEllipse(QPaintEngine*,const QRect& )");
    void* args[2] = {NULL, (void*)&r};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawEllipse(r);
}
void PythonQtShell_QPaintEngine::drawEllipse(const QRectF&  r)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawEllipse");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawEllipse(QPaintEngine*,const QRectF& )");
    void* args[2] = {NULL, (void*)&r};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawEllipse(r);
}
void PythonQtShell_QPaintEngine::drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawImage");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawImage(QPaintEngine*,const QRectF& ,const QImage& ,const QRectF& ,Qt::ImageConversionFlags )");
    void* args[5] = {NULL, (void*)&r, (void*)&pm, (void*)&sr, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawImage(r, pm, sr, flags);
}
void PythonQtShell_QPaintEngine::drawLines(const QLine*  lines, int  lineCount)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawLines");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawLines(QPaintEngine*,const QLine* ,int )");
    void* args[3] = {NULL, (void*)&lines, (void*)&lineCount};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawLines(lines, lineCount);
}
void PythonQtShell_QPaintEngine::drawLines(const QLineF*  lines, int  lineCount)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawLines");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawLines(QPaintEngine*,const QLineF* ,int )");
    void* args[3] = {NULL, (void*)&lines, (void*)&lineCount};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawLines(lines, lineCount);
}
void PythonQtShell_QPaintEngine::drawPath(const QPainterPath&  path)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawPath(QPaintEngine*,const QPainterPath& )");
    void* args[2] = {NULL, (void*)&path};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawPath(path);
}
void PythonQtShell_QPaintEngine::drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawPixmap(QPaintEngine*,const QRectF& ,const QPixmap& ,const QRectF& )");
    void* args[4] = {NULL, (void*)&r, (void*)&pm, (void*)&sr};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QPaintEngine::drawPoints(const QPoint*  points, int  pointCount)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawPoints");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawPoints(QPaintEngine*,const QPoint* ,int )");
    void* args[3] = {NULL, (void*)&points, (void*)&pointCount};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawPoints(points, pointCount);
}
void PythonQtShell_QPaintEngine::drawPoints(const QPointF*  points, int  pointCount)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawPoints");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawPoints(QPaintEngine*,const QPointF* ,int )");
    void* args[3] = {NULL, (void*)&points, (void*)&pointCount};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawPoints(points, pointCount);
}
void PythonQtShell_QPaintEngine::drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawPolygon");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawPolygon(QPaintEngine*,const QPoint* ,int ,QPaintEngine::PolygonDrawMode )");
    void* args[4] = {NULL, (void*)&points, (void*)&pointCount, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawPolygon(points, pointCount, mode);
}
void PythonQtShell_QPaintEngine::drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawPolygon");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawPolygon(QPaintEngine*,const QPointF* ,int ,QPaintEngine::PolygonDrawMode )");
    void* args[4] = {NULL, (void*)&points, (void*)&pointCount, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawPolygon(points, pointCount, mode);
}
void PythonQtShell_QPaintEngine::drawRects(const QRect*  rects, int  rectCount)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawRects");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawRects(QPaintEngine*,const QRect* ,int )");
    void* args[3] = {NULL, (void*)&rects, (void*)&rectCount};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawRects(rects, rectCount);
}
void PythonQtShell_QPaintEngine::drawRects(const QRectF*  rects, int  rectCount)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawRects");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawRects(QPaintEngine*,const QRectF* ,int )");
    void* args[3] = {NULL, (void*)&rects, (void*)&rectCount};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawRects(rects, rectCount);
}
void PythonQtShell_QPaintEngine::drawTextItem(const QPointF&  p, const QTextItem&  textItem)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawTextItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawTextItem(QPaintEngine*,const QPointF& ,const QTextItem& )");
    void* args[3] = {NULL, (void*)&p, (void*)&textItem};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawTextItem(p, textItem);
}
void PythonQtShell_QPaintEngine::drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawTiledPixmap");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "drawTiledPixmap(QPaintEngine*,const QRectF& ,const QPixmap& ,const QPointF& )");
    void* args[4] = {NULL, (void*)&r, (void*)&pixmap, (void*)&s};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPaintEngine::drawTiledPixmap(r, pixmap, s);
}
bool  PythonQtShell_QPaintEngine::end()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "end");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "end(QPaintEngine*)");
      bool  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  bool  result;
return result;
}
QPaintEngine::Type  PythonQtShell_QPaintEngine::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "type(QPaintEngine*)");
      QPaintEngine::Type  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QPaintEngine::Type *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QPaintEngine::Type  result;
return result;
}
void PythonQtShell_QPaintEngine::updateState(const QPaintEngineState&  state)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateState");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPaintEngine::staticMetaObject,
      "updateState(QPaintEngine*,const QPaintEngineState& )");
    void* args[2] = {NULL, (void*)&state};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
QPaintEngine* PythonQtWrapper_QPaintEngine::new_QPaintEngine(QPaintEngine::PaintEngineFeatures  features)
{ 
return new PythonQtShell_QPaintEngine(features); }

void PythonQtWrapper_QPaintEngine::drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawImage(r, pm, sr, flags);
}

void PythonQtWrapper_QPaintEngine::drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPath(path);
}

void PythonQtWrapper_QPaintEngine::setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip)
{
 theWrappedObject->setSystemClip(baseClip);
}

void PythonQtWrapper_QPaintEngine::drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPoints(points, pointCount);
}

QRegion  PythonQtWrapper_QPaintEngine::systemClip(QPaintEngine* theWrappedObject) const
{
return  theWrappedObject->systemClip();
}

QPaintDevice*  PythonQtWrapper_QPaintEngine::paintDevice(QPaintEngine* theWrappedObject) const
{
return  theWrappedObject->paintDevice();
}

void PythonQtWrapper_QPaintEngine::drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawLines(lines, lineCount);
}

bool  PythonQtWrapper_QPaintEngine::isActive(QPaintEngine* theWrappedObject) const
{
return  theWrappedObject->isActive();
}

QPainter*  PythonQtWrapper_QPaintEngine::painter(QPaintEngine* theWrappedObject) const
{
return  theWrappedObject->painter();
}

void PythonQtWrapper_QPaintEngine::drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawTiledPixmap(r, pixmap, s);
}

void PythonQtWrapper_QPaintEngine::syncState(QPaintEngine* theWrappedObject)
{
 theWrappedObject->syncState();
}

QPoint  PythonQtWrapper_QPaintEngine::coordinateOffset(QPaintEngine* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_coordinateOffset();
}

void PythonQtWrapper_QPaintEngine::drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPolygon(points, pointCount, mode);
}

bool  PythonQtWrapper_QPaintEngine::hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const
{
return  theWrappedObject->hasFeature(feature);
}

void PythonQtWrapper_QPaintEngine::drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawEllipse(r);
}

void PythonQtWrapper_QPaintEngine::drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPoints(points, pointCount);
}

void PythonQtWrapper_QPaintEngine::drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawTextItem(p, textItem);
}

QRect  PythonQtWrapper_QPaintEngine::systemRect(QPaintEngine* theWrappedObject) const
{
return  theWrappedObject->systemRect();
}

void PythonQtWrapper_QPaintEngine::drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawRects(rects, rectCount);
}

bool  PythonQtWrapper_QPaintEngine::testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
return  theWrappedObject->testDirty(df);
}

void PythonQtWrapper_QPaintEngine::drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawRects(rects, rectCount);
}

void PythonQtWrapper_QPaintEngine::setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect)
{
 theWrappedObject->setSystemRect(rect);
}

void PythonQtWrapper_QPaintEngine::drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawEllipse(r);
}

void PythonQtWrapper_QPaintEngine::drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawLines(lines, lineCount);
}

void PythonQtWrapper_QPaintEngine::setActive(QPaintEngine* theWrappedObject, bool  newState)
{
 theWrappedObject->setActive(newState);
}

void PythonQtWrapper_QPaintEngine::clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
 theWrappedObject->clearDirty(df);
}

void PythonQtWrapper_QPaintEngine::drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode)
{
 ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPolygon(points, pointCount, mode);
}

void PythonQtWrapper_QPaintEngine::setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
 theWrappedObject->setDirty(df);
}

