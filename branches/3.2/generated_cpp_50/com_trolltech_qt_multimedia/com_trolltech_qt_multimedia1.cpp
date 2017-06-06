#include "com_trolltech_qt_multimedia1.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmediaencodersettings.h>
#include <qmediaobject.h>
#include <qmediarecorder.h>
#include <qmediaservice.h>
#include <qmediatimerange.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qradiodata.h>
#include <qradiotuner.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qsoundeffect.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qurl.h>
#include <qvideoframe.h>
#include <qvideosurfaceformat.h>
#include <qwidget.h>
#include <qwindow.h>

QMediaTimeInterval* PythonQtWrapper_QMediaTimeInterval::new_QMediaTimeInterval()
{ 
return new QMediaTimeInterval(); }

QMediaTimeInterval* PythonQtWrapper_QMediaTimeInterval::new_QMediaTimeInterval(const QMediaTimeInterval&  arg__1)
{ 
return new QMediaTimeInterval(arg__1); }

QMediaTimeInterval* PythonQtWrapper_QMediaTimeInterval::new_QMediaTimeInterval(qint64  start, qint64  end)
{ 
return new QMediaTimeInterval(start, end); }

bool  PythonQtWrapper_QMediaTimeInterval::contains(QMediaTimeInterval* theWrappedObject, qint64  time) const
{
  return ( theWrappedObject->contains(time));
}

qint64  PythonQtWrapper_QMediaTimeInterval::end(QMediaTimeInterval* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

bool  PythonQtWrapper_QMediaTimeInterval::isNormal(QMediaTimeInterval* theWrappedObject) const
{
  return ( theWrappedObject->isNormal());
}

QMediaTimeInterval  PythonQtWrapper_QMediaTimeInterval::normalized(QMediaTimeInterval* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

bool  PythonQtWrapper_QMediaTimeInterval::__eq__(QMediaTimeInterval* theWrappedObject, const QMediaTimeInterval&  arg__2)
{
  return ( (*theWrappedObject)== arg__2);
}

qint64  PythonQtWrapper_QMediaTimeInterval::start(QMediaTimeInterval* theWrappedObject) const
{
  return ( theWrappedObject->start());
}

QMediaTimeInterval  PythonQtWrapper_QMediaTimeInterval::translated(QMediaTimeInterval* theWrappedObject, qint64  offset) const
{
  return ( theWrappedObject->translated(offset));
}



QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange()
{ 
return new QMediaTimeRange(); }

QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange(const QMediaTimeInterval&  arg__1)
{ 
return new QMediaTimeRange(arg__1); }

QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange(const QMediaTimeRange&  range)
{ 
return new QMediaTimeRange(range); }

QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange(qint64  start, qint64  end)
{ 
return new QMediaTimeRange(start, end); }

void PythonQtWrapper_QMediaTimeRange::addInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeInterval&  interval)
{
  ( theWrappedObject->addInterval(interval));
}

void PythonQtWrapper_QMediaTimeRange::addInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end)
{
  ( theWrappedObject->addInterval(start, end));
}

void PythonQtWrapper_QMediaTimeRange::addTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  ( theWrappedObject->addTimeRange(arg__1));
}

void PythonQtWrapper_QMediaTimeRange::clear(QMediaTimeRange* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QMediaTimeRange::contains(QMediaTimeRange* theWrappedObject, qint64  time) const
{
  return ( theWrappedObject->contains(time));
}

qint64  PythonQtWrapper_QMediaTimeRange::earliestTime(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->earliestTime());
}

QList<QMediaTimeInterval >  PythonQtWrapper_QMediaTimeRange::intervals(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->intervals());
}

bool  PythonQtWrapper_QMediaTimeRange::isContinuous(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->isContinuous());
}

bool  PythonQtWrapper_QMediaTimeRange::isEmpty(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

qint64  PythonQtWrapper_QMediaTimeRange::latestTime(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->latestTime());
}

QMediaTimeRange  PythonQtWrapper_QMediaTimeRange::__add__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2)
{
  return ( (*theWrappedObject)+ arg__2);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeInterval&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

QMediaTimeRange  PythonQtWrapper_QMediaTimeRange::__sub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2)
{
  return ( (*theWrappedObject)- arg__2);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeInterval&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeInterval&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QMediaTimeRange::__eq__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2)
{
  return ( (*theWrappedObject)== arg__2);
}

void PythonQtWrapper_QMediaTimeRange::removeInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeInterval&  interval)
{
  ( theWrappedObject->removeInterval(interval));
}

void PythonQtWrapper_QMediaTimeRange::removeInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end)
{
  ( theWrappedObject->removeInterval(start, end));
}

void PythonQtWrapper_QMediaTimeRange::removeTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  ( theWrappedObject->removeTimeRange(arg__1));
}

QString PythonQtWrapper_QMediaTimeRange::py_toString(QMediaTimeRange* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}





PythonQtShell_QRadioData::~PythonQtShell_QRadioData() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRadioData::childEvent(QChildEvent*  arg__1)
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
  QRadioData::childEvent(arg__1);
}
void PythonQtShell_QRadioData::customEvent(QEvent*  arg__1)
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
  QRadioData::customEvent(arg__1);
}
bool  PythonQtShell_QRadioData::event(QEvent*  arg__1)
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
  return QRadioData::event(arg__1);
}
bool  PythonQtShell_QRadioData::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QRadioData::eventFilter(arg__1, arg__2);
}
QMediaObject*  PythonQtShell_QRadioData::mediaObject() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaObject* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mediaObject", methodInfo, result);
        } else {
          returnValue = *((QMediaObject**)args[0]);
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
  return QRadioData::mediaObject();
}
bool  PythonQtShell_QRadioData::setMediaObject(QMediaObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setMediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setMediaObject", methodInfo, result);
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
  return QRadioData::setMediaObject(arg__1);
}
void PythonQtShell_QRadioData::timerEvent(QTimerEvent*  arg__1)
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
  QRadioData::timerEvent(arg__1);
}
QRadioData* PythonQtWrapper_QRadioData::new_QRadioData(QMediaObject*  mediaObject, QObject*  parent)
{ 
return new PythonQtShell_QRadioData(mediaObject, parent); }

QMultimedia::AvailabilityStatus  PythonQtWrapper_QRadioData::availability(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->availability());
}

QRadioData::Error  PythonQtWrapper_QRadioData::error(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QRadioData::errorString(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QRadioData::isAlternativeFrequenciesEnabled(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->isAlternativeFrequenciesEnabled());
}

QMediaObject*  PythonQtWrapper_QRadioData::mediaObject(QRadioData* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QRadioData*)theWrappedObject)->promoted_mediaObject());
}

QRadioData::ProgramType  PythonQtWrapper_QRadioData::programType(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->programType());
}

QString  PythonQtWrapper_QRadioData::programTypeName(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->programTypeName());
}

QString  PythonQtWrapper_QRadioData::radioText(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->radioText());
}

bool  PythonQtWrapper_QRadioData::setMediaObject(QRadioData* theWrappedObject, QMediaObject*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QRadioData*)theWrappedObject)->promoted_setMediaObject(arg__1));
}

QString  PythonQtWrapper_QRadioData::stationId(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->stationId());
}

QString  PythonQtWrapper_QRadioData::stationName(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->stationName());
}



PythonQtShell_QRadioTuner::~PythonQtShell_QRadioTuner() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMultimedia::AvailabilityStatus  PythonQtShell_QRadioTuner::availability() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("availability");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMultimedia::AvailabilityStatus"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMultimedia::AvailabilityStatus returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("availability", methodInfo, result);
        } else {
          returnValue = *((QMultimedia::AvailabilityStatus*)args[0]);
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
  return QRadioTuner::availability();
}
bool  PythonQtShell_QRadioTuner::bind(QObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("bind", methodInfo, result);
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
  return QRadioTuner::bind(arg__1);
}
void PythonQtShell_QRadioTuner::childEvent(QChildEvent*  arg__1)
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
  QRadioTuner::childEvent(arg__1);
}
void PythonQtShell_QRadioTuner::customEvent(QEvent*  arg__1)
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
  QRadioTuner::customEvent(arg__1);
}
bool  PythonQtShell_QRadioTuner::event(QEvent*  arg__1)
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
  return QRadioTuner::event(arg__1);
}
bool  PythonQtShell_QRadioTuner::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QRadioTuner::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QRadioTuner::isAvailable() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isAvailable");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("isAvailable", methodInfo, result);
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
  return QRadioTuner::isAvailable();
}
QMediaService*  PythonQtShell_QRadioTuner::service() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("service");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaService*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaService* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("service", methodInfo, result);
        } else {
          returnValue = *((QMediaService**)args[0]);
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
  return QRadioTuner::service();
}
void PythonQtShell_QRadioTuner::timerEvent(QTimerEvent*  arg__1)
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
  QRadioTuner::timerEvent(arg__1);
}
void PythonQtShell_QRadioTuner::unbind(QObject*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unbind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QObject*"};
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
  QRadioTuner::unbind(arg__1);
}
QRadioTuner* PythonQtWrapper_QRadioTuner::new_QRadioTuner(QObject*  parent)
{ 
return new PythonQtShell_QRadioTuner(parent); }

QMultimedia::AvailabilityStatus  PythonQtWrapper_QRadioTuner::availability(QRadioTuner* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QRadioTuner*)theWrappedObject)->promoted_availability());
}

QRadioTuner::Band  PythonQtWrapper_QRadioTuner::band(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->band());
}

QRadioTuner::Error  PythonQtWrapper_QRadioTuner::error(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QRadioTuner::errorString(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

int  PythonQtWrapper_QRadioTuner::frequency(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->frequency());
}

QPair<int , int >  PythonQtWrapper_QRadioTuner::frequencyRange(QRadioTuner* theWrappedObject, QRadioTuner::Band  band) const
{
  return ( theWrappedObject->frequencyRange(band));
}

int  PythonQtWrapper_QRadioTuner::frequencyStep(QRadioTuner* theWrappedObject, QRadioTuner::Band  band) const
{
  return ( theWrappedObject->frequencyStep(band));
}

bool  PythonQtWrapper_QRadioTuner::isAntennaConnected(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->isAntennaConnected());
}

bool  PythonQtWrapper_QRadioTuner::isBandSupported(QRadioTuner* theWrappedObject, QRadioTuner::Band  b) const
{
  return ( theWrappedObject->isBandSupported(b));
}

bool  PythonQtWrapper_QRadioTuner::isMuted(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

bool  PythonQtWrapper_QRadioTuner::isSearching(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->isSearching());
}

bool  PythonQtWrapper_QRadioTuner::isStereo(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->isStereo());
}

QRadioData*  PythonQtWrapper_QRadioTuner::radioData(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->radioData());
}

void PythonQtWrapper_QRadioTuner::setStereoMode(QRadioTuner* theWrappedObject, QRadioTuner::StereoMode  mode)
{
  ( theWrappedObject->setStereoMode(mode));
}

int  PythonQtWrapper_QRadioTuner::signalStrength(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->signalStrength());
}

QRadioTuner::State  PythonQtWrapper_QRadioTuner::state(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QRadioTuner::StereoMode  PythonQtWrapper_QRadioTuner::stereoMode(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->stereoMode());
}

int  PythonQtWrapper_QRadioTuner::volume(QRadioTuner* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QSoundEffect::~PythonQtShell_QSoundEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSoundEffect::childEvent(QChildEvent*  arg__1)
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
  QSoundEffect::childEvent(arg__1);
}
void PythonQtShell_QSoundEffect::customEvent(QEvent*  arg__1)
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
  QSoundEffect::customEvent(arg__1);
}
bool  PythonQtShell_QSoundEffect::event(QEvent*  arg__1)
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
  return QSoundEffect::event(arg__1);
}
bool  PythonQtShell_QSoundEffect::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSoundEffect::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSoundEffect::timerEvent(QTimerEvent*  arg__1)
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
  QSoundEffect::timerEvent(arg__1);
}
QSoundEffect* PythonQtWrapper_QSoundEffect::new_QSoundEffect(QObject*  parent)
{ 
return new PythonQtShell_QSoundEffect(parent); }

QString  PythonQtWrapper_QSoundEffect::category(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->category());
}

bool  PythonQtWrapper_QSoundEffect::isLoaded(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->isLoaded());
}

bool  PythonQtWrapper_QSoundEffect::isMuted(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

bool  PythonQtWrapper_QSoundEffect::isPlaying(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->isPlaying());
}

int  PythonQtWrapper_QSoundEffect::loopCount(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

int  PythonQtWrapper_QSoundEffect::loopsRemaining(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->loopsRemaining());
}

void PythonQtWrapper_QSoundEffect::setCategory(QSoundEffect* theWrappedObject, const QString&  category)
{
  ( theWrappedObject->setCategory(category));
}

void PythonQtWrapper_QSoundEffect::setLoopCount(QSoundEffect* theWrappedObject, int  loopCount)
{
  ( theWrappedObject->setLoopCount(loopCount));
}

void PythonQtWrapper_QSoundEffect::setMuted(QSoundEffect* theWrappedObject, bool  muted)
{
  ( theWrappedObject->setMuted(muted));
}

void PythonQtWrapper_QSoundEffect::setSource(QSoundEffect* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setSource(url));
}

void PythonQtWrapper_QSoundEffect::setVolume(QSoundEffect* theWrappedObject, qreal  volume)
{
  ( theWrappedObject->setVolume(volume));
}

QUrl  PythonQtWrapper_QSoundEffect::source(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->source());
}

QSoundEffect::Status  PythonQtWrapper_QSoundEffect::status(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

QStringList  PythonQtWrapper_QSoundEffect::static_QSoundEffect_supportedMimeTypes()
{
  return (QSoundEffect::supportedMimeTypes());
}

qreal  PythonQtWrapper_QSoundEffect::volume(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



QVideoEncoderSettings* PythonQtWrapper_QVideoEncoderSettings::new_QVideoEncoderSettings()
{ 
return new QVideoEncoderSettings(); }

QVideoEncoderSettings* PythonQtWrapper_QVideoEncoderSettings::new_QVideoEncoderSettings(const QVideoEncoderSettings&  other)
{ 
return new QVideoEncoderSettings(other); }

int  PythonQtWrapper_QVideoEncoderSettings::bitRate(QVideoEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->bitRate());
}

QString  PythonQtWrapper_QVideoEncoderSettings::codec(QVideoEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QMultimedia::EncodingMode  PythonQtWrapper_QVideoEncoderSettings::encodingMode(QVideoEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->encodingMode());
}

QVariant  PythonQtWrapper_QVideoEncoderSettings::encodingOption(QVideoEncoderSettings* theWrappedObject, const QString&  option) const
{
  return ( theWrappedObject->encodingOption(option));
}

QMap<QString , QVariant >  PythonQtWrapper_QVideoEncoderSettings::encodingOptions(QVideoEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->encodingOptions());
}

qreal  PythonQtWrapper_QVideoEncoderSettings::frameRate(QVideoEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->frameRate());
}

bool  PythonQtWrapper_QVideoEncoderSettings::isNull(QVideoEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QVideoEncoderSettings::__ne__(QVideoEncoderSettings* theWrappedObject, const QVideoEncoderSettings&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QVideoEncoderSettings*  PythonQtWrapper_QVideoEncoderSettings::operator_assign(QVideoEncoderSettings* theWrappedObject, const QVideoEncoderSettings&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QVideoEncoderSettings::__eq__(QVideoEncoderSettings* theWrappedObject, const QVideoEncoderSettings&  other) const
{
  return ( (*theWrappedObject)== other);
}

QMultimedia::EncodingQuality  PythonQtWrapper_QVideoEncoderSettings::quality(QVideoEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->quality());
}

QSize  PythonQtWrapper_QVideoEncoderSettings::resolution(QVideoEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->resolution());
}

void PythonQtWrapper_QVideoEncoderSettings::setBitRate(QVideoEncoderSettings* theWrappedObject, int  bitrate)
{
  ( theWrappedObject->setBitRate(bitrate));
}

void PythonQtWrapper_QVideoEncoderSettings::setCodec(QVideoEncoderSettings* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setCodec(arg__1));
}

void PythonQtWrapper_QVideoEncoderSettings::setEncodingMode(QVideoEncoderSettings* theWrappedObject, QMultimedia::EncodingMode  arg__1)
{
  ( theWrappedObject->setEncodingMode(arg__1));
}

void PythonQtWrapper_QVideoEncoderSettings::setEncodingOption(QVideoEncoderSettings* theWrappedObject, const QString&  option, const QVariant&  value)
{
  ( theWrappedObject->setEncodingOption(option, value));
}

void PythonQtWrapper_QVideoEncoderSettings::setEncodingOptions(QVideoEncoderSettings* theWrappedObject, const QMap<QString , QVariant >&  options)
{
  ( theWrappedObject->setEncodingOptions(options));
}

void PythonQtWrapper_QVideoEncoderSettings::setFrameRate(QVideoEncoderSettings* theWrappedObject, qreal  rate)
{
  ( theWrappedObject->setFrameRate(rate));
}

void PythonQtWrapper_QVideoEncoderSettings::setQuality(QVideoEncoderSettings* theWrappedObject, QMultimedia::EncodingQuality  quality)
{
  ( theWrappedObject->setQuality(quality));
}

void PythonQtWrapper_QVideoEncoderSettings::setResolution(QVideoEncoderSettings* theWrappedObject, const QSize&  arg__1)
{
  ( theWrappedObject->setResolution(arg__1));
}

void PythonQtWrapper_QVideoEncoderSettings::setResolution(QVideoEncoderSettings* theWrappedObject, int  width, int  height)
{
  ( theWrappedObject->setResolution(width, height));
}



QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame()
{ 
return new QVideoFrame(); }

QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame(QAbstractVideoBuffer*  buffer, const QSize&  size, QVideoFrame::PixelFormat  format)
{ 
return new QVideoFrame(buffer, size, format); }

QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame(const QImage&  image)
{ 
return new QVideoFrame(image); }

QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame(const QVideoFrame&  other)
{ 
return new QVideoFrame(other); }

QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame(int  bytes, const QSize&  size, int  bytesPerLine, QVideoFrame::PixelFormat  format)
{ 
return new QVideoFrame(bytes, size, bytesPerLine, format); }

QMap<QString , QVariant >  PythonQtWrapper_QVideoFrame::availableMetaData(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->availableMetaData());
}

uchar*  PythonQtWrapper_QVideoFrame::bits(QVideoFrame* theWrappedObject)
{
  return ( theWrappedObject->bits());
}

const uchar*  PythonQtWrapper_QVideoFrame::bits(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->bits());
}

int  PythonQtWrapper_QVideoFrame::bytesPerLine(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->bytesPerLine());
}

qint64  PythonQtWrapper_QVideoFrame::endTime(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->endTime());
}

QVideoFrame::FieldType  PythonQtWrapper_QVideoFrame::fieldType(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->fieldType());
}

QVariant  PythonQtWrapper_QVideoFrame::handle(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

QAbstractVideoBuffer::HandleType  PythonQtWrapper_QVideoFrame::handleType(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->handleType());
}

int  PythonQtWrapper_QVideoFrame::height(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

QImage::Format  PythonQtWrapper_QVideoFrame::static_QVideoFrame_imageFormatFromPixelFormat(QVideoFrame::PixelFormat  format)
{
  return (QVideoFrame::imageFormatFromPixelFormat(format));
}

bool  PythonQtWrapper_QVideoFrame::isMapped(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isMapped());
}

bool  PythonQtWrapper_QVideoFrame::isReadable(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QVideoFrame::isValid(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QVideoFrame::isWritable(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

bool  PythonQtWrapper_QVideoFrame::map(QVideoFrame* theWrappedObject, QAbstractVideoBuffer::MapMode  mode)
{
  return ( theWrappedObject->map(mode));
}

QAbstractVideoBuffer::MapMode  PythonQtWrapper_QVideoFrame::mapMode(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->mapMode());
}

int  PythonQtWrapper_QVideoFrame::mappedBytes(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->mappedBytes());
}

QVariant  PythonQtWrapper_QVideoFrame::metaData(QVideoFrame* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->metaData(key));
}

QVideoFrame*  PythonQtWrapper_QVideoFrame::operator_assign(QVideoFrame* theWrappedObject, const QVideoFrame&  other)
{
  return &( (*theWrappedObject)= other);
}

QVideoFrame::PixelFormat  PythonQtWrapper_QVideoFrame::pixelFormat(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->pixelFormat());
}

QVideoFrame::PixelFormat  PythonQtWrapper_QVideoFrame::static_QVideoFrame_pixelFormatFromImageFormat(QImage::Format  format)
{
  return (QVideoFrame::pixelFormatFromImageFormat(format));
}

void PythonQtWrapper_QVideoFrame::setEndTime(QVideoFrame* theWrappedObject, qint64  time)
{
  ( theWrappedObject->setEndTime(time));
}

void PythonQtWrapper_QVideoFrame::setFieldType(QVideoFrame* theWrappedObject, QVideoFrame::FieldType  arg__1)
{
  ( theWrappedObject->setFieldType(arg__1));
}

void PythonQtWrapper_QVideoFrame::setMetaData(QVideoFrame* theWrappedObject, const QString&  key, const QVariant&  value)
{
  ( theWrappedObject->setMetaData(key, value));
}

void PythonQtWrapper_QVideoFrame::setStartTime(QVideoFrame* theWrappedObject, qint64  time)
{
  ( theWrappedObject->setStartTime(time));
}

QSize  PythonQtWrapper_QVideoFrame::size(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

qint64  PythonQtWrapper_QVideoFrame::startTime(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->startTime());
}

void PythonQtWrapper_QVideoFrame::unmap(QVideoFrame* theWrappedObject)
{
  ( theWrappedObject->unmap());
}

int  PythonQtWrapper_QVideoFrame::width(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

QString PythonQtWrapper_QVideoFrame::py_toString(QVideoFrame* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QVideoProbe::~PythonQtShell_QVideoProbe() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVideoProbe::childEvent(QChildEvent*  arg__1)
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
  QVideoProbe::childEvent(arg__1);
}
void PythonQtShell_QVideoProbe::customEvent(QEvent*  arg__1)
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
  QVideoProbe::customEvent(arg__1);
}
bool  PythonQtShell_QVideoProbe::event(QEvent*  arg__1)
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
  return QVideoProbe::event(arg__1);
}
bool  PythonQtShell_QVideoProbe::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QVideoProbe::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QVideoProbe::timerEvent(QTimerEvent*  arg__1)
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
  QVideoProbe::timerEvent(arg__1);
}
QVideoProbe* PythonQtWrapper_QVideoProbe::new_QVideoProbe(QObject*  parent)
{ 
return new PythonQtShell_QVideoProbe(parent); }

bool  PythonQtWrapper_QVideoProbe::isActive(QVideoProbe* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QVideoProbe::setSource(QVideoProbe* theWrappedObject, QMediaObject*  source)
{
  return ( theWrappedObject->setSource(source));
}

bool  PythonQtWrapper_QVideoProbe::setSource(QVideoProbe* theWrappedObject, QMediaRecorder*  source)
{
  return ( theWrappedObject->setSource(source));
}



QVideoSurfaceFormat* PythonQtWrapper_QVideoSurfaceFormat::new_QVideoSurfaceFormat()
{ 
return new QVideoSurfaceFormat(); }

QVideoSurfaceFormat* PythonQtWrapper_QVideoSurfaceFormat::new_QVideoSurfaceFormat(const QSize&  size, QVideoFrame::PixelFormat  pixelFormat, QAbstractVideoBuffer::HandleType  handleType)
{ 
return new QVideoSurfaceFormat(size, pixelFormat, handleType); }

QVideoSurfaceFormat* PythonQtWrapper_QVideoSurfaceFormat::new_QVideoSurfaceFormat(const QVideoSurfaceFormat&  format)
{ 
return new QVideoSurfaceFormat(format); }

int  PythonQtWrapper_QVideoSurfaceFormat::frameHeight(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->frameHeight());
}

qreal  PythonQtWrapper_QVideoSurfaceFormat::frameRate(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->frameRate());
}

QSize  PythonQtWrapper_QVideoSurfaceFormat::frameSize(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->frameSize());
}

int  PythonQtWrapper_QVideoSurfaceFormat::frameWidth(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->frameWidth());
}

QAbstractVideoBuffer::HandleType  PythonQtWrapper_QVideoSurfaceFormat::handleType(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->handleType());
}

bool  PythonQtWrapper_QVideoSurfaceFormat::isValid(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QVideoSurfaceFormat::__ne__(QVideoSurfaceFormat* theWrappedObject, const QVideoSurfaceFormat&  format) const
{
  return ( (*theWrappedObject)!= format);
}

QVideoSurfaceFormat*  PythonQtWrapper_QVideoSurfaceFormat::operator_assign(QVideoSurfaceFormat* theWrappedObject, const QVideoSurfaceFormat&  format)
{
  return &( (*theWrappedObject)= format);
}

bool  PythonQtWrapper_QVideoSurfaceFormat::__eq__(QVideoSurfaceFormat* theWrappedObject, const QVideoSurfaceFormat&  format) const
{
  return ( (*theWrappedObject)== format);
}

QSize  PythonQtWrapper_QVideoSurfaceFormat::pixelAspectRatio(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->pixelAspectRatio());
}

QVideoFrame::PixelFormat  PythonQtWrapper_QVideoSurfaceFormat::pixelFormat(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->pixelFormat());
}

QVariant  PythonQtWrapper_QVideoSurfaceFormat::property(QVideoSurfaceFormat* theWrappedObject, const char*  name) const
{
  return ( theWrappedObject->property(name));
}

QList<QByteArray >  PythonQtWrapper_QVideoSurfaceFormat::propertyNames(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->propertyNames());
}

QVideoSurfaceFormat::Direction  PythonQtWrapper_QVideoSurfaceFormat::scanLineDirection(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->scanLineDirection());
}

void PythonQtWrapper_QVideoSurfaceFormat::setFrameRate(QVideoSurfaceFormat* theWrappedObject, qreal  rate)
{
  ( theWrappedObject->setFrameRate(rate));
}

void PythonQtWrapper_QVideoSurfaceFormat::setFrameSize(QVideoSurfaceFormat* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setFrameSize(size));
}

void PythonQtWrapper_QVideoSurfaceFormat::setFrameSize(QVideoSurfaceFormat* theWrappedObject, int  width, int  height)
{
  ( theWrappedObject->setFrameSize(width, height));
}

void PythonQtWrapper_QVideoSurfaceFormat::setPixelAspectRatio(QVideoSurfaceFormat* theWrappedObject, const QSize&  ratio)
{
  ( theWrappedObject->setPixelAspectRatio(ratio));
}

void PythonQtWrapper_QVideoSurfaceFormat::setPixelAspectRatio(QVideoSurfaceFormat* theWrappedObject, int  width, int  height)
{
  ( theWrappedObject->setPixelAspectRatio(width, height));
}

void PythonQtWrapper_QVideoSurfaceFormat::setProperty(QVideoSurfaceFormat* theWrappedObject, const char*  name, const QVariant&  value)
{
  ( theWrappedObject->setProperty(name, value));
}

void PythonQtWrapper_QVideoSurfaceFormat::setScanLineDirection(QVideoSurfaceFormat* theWrappedObject, QVideoSurfaceFormat::Direction  direction)
{
  ( theWrappedObject->setScanLineDirection(direction));
}

void PythonQtWrapper_QVideoSurfaceFormat::setViewport(QVideoSurfaceFormat* theWrappedObject, const QRect&  viewport)
{
  ( theWrappedObject->setViewport(viewport));
}

void PythonQtWrapper_QVideoSurfaceFormat::setYCbCrColorSpace(QVideoSurfaceFormat* theWrappedObject, QVideoSurfaceFormat::YCbCrColorSpace  colorSpace)
{
  ( theWrappedObject->setYCbCrColorSpace(colorSpace));
}

QSize  PythonQtWrapper_QVideoSurfaceFormat::sizeHint(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QRect  PythonQtWrapper_QVideoSurfaceFormat::viewport(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->viewport());
}

QVideoSurfaceFormat::YCbCrColorSpace  PythonQtWrapper_QVideoSurfaceFormat::yCbCrColorSpace(QVideoSurfaceFormat* theWrappedObject) const
{
  return ( theWrappedObject->yCbCrColorSpace());
}

QString PythonQtWrapper_QVideoSurfaceFormat::py_toString(QVideoSurfaceFormat* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QVideoWidget::~PythonQtShell_QVideoWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVideoWidget::actionEvent(QActionEvent*  arg__1)
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
  QVideoWidget::actionEvent(arg__1);
}
void PythonQtShell_QVideoWidget::changeEvent(QEvent*  arg__1)
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
  QVideoWidget::changeEvent(arg__1);
}
void PythonQtShell_QVideoWidget::childEvent(QChildEvent*  arg__1)
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
  QVideoWidget::childEvent(arg__1);
}
void PythonQtShell_QVideoWidget::closeEvent(QCloseEvent*  arg__1)
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
  QVideoWidget::closeEvent(arg__1);
}
void PythonQtShell_QVideoWidget::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QVideoWidget::contextMenuEvent(arg__1);
}
void PythonQtShell_QVideoWidget::customEvent(QEvent*  arg__1)
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
  QVideoWidget::customEvent(arg__1);
}
int  PythonQtShell_QVideoWidget::devType() const
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
  return QVideoWidget::devType();
}
void PythonQtShell_QVideoWidget::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QVideoWidget::dragEnterEvent(arg__1);
}
void PythonQtShell_QVideoWidget::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QVideoWidget::dragLeaveEvent(arg__1);
}
void PythonQtShell_QVideoWidget::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QVideoWidget::dragMoveEvent(arg__1);
}
void PythonQtShell_QVideoWidget::dropEvent(QDropEvent*  arg__1)
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
  QVideoWidget::dropEvent(arg__1);
}
void PythonQtShell_QVideoWidget::enterEvent(QEvent*  arg__1)
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
  QVideoWidget::enterEvent(arg__1);
}
bool  PythonQtShell_QVideoWidget::event(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QVideoWidget::event(event0);
}
bool  PythonQtShell_QVideoWidget::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QVideoWidget::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QVideoWidget::focusInEvent(QFocusEvent*  arg__1)
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
  QVideoWidget::focusInEvent(arg__1);
}
bool  PythonQtShell_QVideoWidget::focusNextPrevChild(bool  next0)
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
  return QVideoWidget::focusNextPrevChild(next0);
}
void PythonQtShell_QVideoWidget::focusOutEvent(QFocusEvent*  arg__1)
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
  QVideoWidget::focusOutEvent(arg__1);
}
bool  PythonQtShell_QVideoWidget::hasHeightForWidth() const
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
  return QVideoWidget::hasHeightForWidth();
}
int  PythonQtShell_QVideoWidget::heightForWidth(int  arg__1) const
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
  return QVideoWidget::heightForWidth(arg__1);
}
void PythonQtShell_QVideoWidget::hideEvent(QHideEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QVideoWidget::hideEvent(event0);
}
void PythonQtShell_QVideoWidget::initPainter(QPainter*  painter0) const
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
  QVideoWidget::initPainter(painter0);
}
void PythonQtShell_QVideoWidget::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QVideoWidget::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QVideoWidget::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QVideoWidget::inputMethodQuery(arg__1);
}
void PythonQtShell_QVideoWidget::keyPressEvent(QKeyEvent*  arg__1)
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
  QVideoWidget::keyPressEvent(arg__1);
}
void PythonQtShell_QVideoWidget::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QVideoWidget::keyReleaseEvent(arg__1);
}
void PythonQtShell_QVideoWidget::leaveEvent(QEvent*  arg__1)
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
  QVideoWidget::leaveEvent(arg__1);
}
QMediaObject*  PythonQtShell_QVideoWidget::mediaObject() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaObject* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mediaObject", methodInfo, result);
        } else {
          returnValue = *((QMediaObject**)args[0]);
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
  return QVideoWidget::mediaObject();
}
int  PythonQtShell_QVideoWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QVideoWidget::metric(arg__1);
}
QSize  PythonQtShell_QVideoWidget::minimumSizeHint() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QVideoWidget::minimumSizeHint();
}
void PythonQtShell_QVideoWidget::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QVideoWidget::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QVideoWidget::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QVideoWidget::mouseMoveEvent(arg__1);
}
void PythonQtShell_QVideoWidget::mousePressEvent(QMouseEvent*  arg__1)
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
  QVideoWidget::mousePressEvent(arg__1);
}
void PythonQtShell_QVideoWidget::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QVideoWidget::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QVideoWidget::moveEvent(QMoveEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QVideoWidget::moveEvent(event0);
}
bool  PythonQtShell_QVideoWidget::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QVideoWidget::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QVideoWidget::paintEngine() const
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
  return QVideoWidget::paintEngine();
}
void PythonQtShell_QVideoWidget::paintEvent(QPaintEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("paintEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
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
  QVideoWidget::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QVideoWidget::redirected(QPoint*  offset0) const
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
  return QVideoWidget::redirected(offset0);
}
void PythonQtShell_QVideoWidget::resizeEvent(QResizeEvent*  event0)
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
  QVideoWidget::resizeEvent(event0);
}
bool  PythonQtShell_QVideoWidget::setMediaObject(QMediaObject*  object0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setMediaObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QMediaObject*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&object0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setMediaObject", methodInfo, result);
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
  return QVideoWidget::setMediaObject(object0);
}
QPainter*  PythonQtShell_QVideoWidget::sharedPainter() const
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
  return QVideoWidget::sharedPainter();
}
void PythonQtShell_QVideoWidget::showEvent(QShowEvent*  event0)
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
  QVideoWidget::showEvent(event0);
}
void PythonQtShell_QVideoWidget::tabletEvent(QTabletEvent*  arg__1)
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
  QVideoWidget::tabletEvent(arg__1);
}
void PythonQtShell_QVideoWidget::timerEvent(QTimerEvent*  arg__1)
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
  QVideoWidget::timerEvent(arg__1);
}
void PythonQtShell_QVideoWidget::wheelEvent(QWheelEvent*  arg__1)
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
  QVideoWidget::wheelEvent(arg__1);
}
QVideoWidget* PythonQtWrapper_QVideoWidget::new_QVideoWidget(QWidget*  parent)
{ 
return new PythonQtShell_QVideoWidget(parent); }

Qt::AspectRatioMode  PythonQtWrapper_QVideoWidget::aspectRatioMode(QVideoWidget* theWrappedObject) const
{
  return ( theWrappedObject->aspectRatioMode());
}

int  PythonQtWrapper_QVideoWidget::brightness(QVideoWidget* theWrappedObject) const
{
  return ( theWrappedObject->brightness());
}

int  PythonQtWrapper_QVideoWidget::contrast(QVideoWidget* theWrappedObject) const
{
  return ( theWrappedObject->contrast());
}

bool  PythonQtWrapper_QVideoWidget::event(QVideoWidget* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->promoted_event(event));
}

void PythonQtWrapper_QVideoWidget::hideEvent(QVideoWidget* theWrappedObject, QHideEvent*  event)
{
  ( ((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->promoted_hideEvent(event));
}

int  PythonQtWrapper_QVideoWidget::hue(QVideoWidget* theWrappedObject) const
{
  return ( theWrappedObject->hue());
}

QMediaObject*  PythonQtWrapper_QVideoWidget::mediaObject(QVideoWidget* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->promoted_mediaObject());
}

void PythonQtWrapper_QVideoWidget::moveEvent(QVideoWidget* theWrappedObject, QMoveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->promoted_moveEvent(event));
}

void PythonQtWrapper_QVideoWidget::paintEvent(QVideoWidget* theWrappedObject, QPaintEvent*  event)
{
  ( ((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->promoted_paintEvent(event));
}

void PythonQtWrapper_QVideoWidget::resizeEvent(QVideoWidget* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->promoted_resizeEvent(event));
}

int  PythonQtWrapper_QVideoWidget::saturation(QVideoWidget* theWrappedObject) const
{
  return ( theWrappedObject->saturation());
}

bool  PythonQtWrapper_QVideoWidget::setMediaObject(QVideoWidget* theWrappedObject, QMediaObject*  object)
{
  return ( ((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->promoted_setMediaObject(object));
}

void PythonQtWrapper_QVideoWidget::showEvent(QVideoWidget* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->promoted_showEvent(event));
}

QSize  PythonQtWrapper_QVideoWidget::sizeHint(QVideoWidget* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}


