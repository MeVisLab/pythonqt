#include "com_trolltech_qt_multimedia2.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qmediacontent.h>
#include <qmediacontrol.h>
#include <qmediaencodersettings.h>
#include <qmediaobject.h>
#include <qmediarecorder.h>
#include <qmediaresource.h>
#include <qmediaservice.h>
#include <qmediaserviceproviderplugin.h>
#include <qmediatimerange.h>
#include <qmetaobject.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpair.h>
#include <qradiodata.h>
#include <qradiotuner.h>
#include <qsize.h>
#include <qsoundeffect.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvideoframe.h>

PythonQtShell_QMediaPlaylist::~PythonQtShell_QMediaPlaylist() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaPlaylist::childEvent(QChildEvent*  event0)
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
  QMediaPlaylist::childEvent(event0);
}
void PythonQtShell_QMediaPlaylist::customEvent(QEvent*  event0)
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
  QMediaPlaylist::customEvent(event0);
}
bool  PythonQtShell_QMediaPlaylist::event(QEvent*  event0)
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
  return QMediaPlaylist::event(event0);
}
bool  PythonQtShell_QMediaPlaylist::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMediaPlaylist::eventFilter(watched0, event1);
}
QMediaObject*  PythonQtShell_QMediaPlaylist::mediaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QMediaPlaylist::mediaObject();
}
bool  PythonQtShell_QMediaPlaylist::setMediaObject(QMediaObject*  object0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setMediaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QMediaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QMediaPlaylist::setMediaObject(object0);
}
void PythonQtShell_QMediaPlaylist::timerEvent(QTimerEvent*  event0)
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
  QMediaPlaylist::timerEvent(event0);
}
QMediaPlaylist* PythonQtWrapper_QMediaPlaylist::new_QMediaPlaylist(QObject*  parent)
{ 
return new PythonQtShell_QMediaPlaylist(parent); }

const QMetaObject* PythonQtShell_QMediaPlaylist::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaPlaylist::staticMetaObject);
  } else {
    return &QMediaPlaylist::staticMetaObject;
  }
}
int PythonQtShell_QMediaPlaylist::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaPlaylist::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QMediaPlaylist::addMedia(QMediaPlaylist* theWrappedObject, const QList<QMediaContent >&  items)
{
  return ( theWrappedObject->addMedia(items));
}

bool  PythonQtWrapper_QMediaPlaylist::addMedia(QMediaPlaylist* theWrappedObject, const QMediaContent&  content)
{
  return ( theWrappedObject->addMedia(content));
}

bool  PythonQtWrapper_QMediaPlaylist::clear(QMediaPlaylist* theWrappedObject)
{
  return ( theWrappedObject->clear());
}

int  PythonQtWrapper_QMediaPlaylist::currentIndex(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->currentIndex());
}

QMediaContent  PythonQtWrapper_QMediaPlaylist::currentMedia(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->currentMedia());
}

QMediaPlaylist::Error  PythonQtWrapper_QMediaPlaylist::error(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QMediaPlaylist::errorString(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QMediaPlaylist::insertMedia(QMediaPlaylist* theWrappedObject, int  index, const QList<QMediaContent >&  items)
{
  return ( theWrappedObject->insertMedia(index, items));
}

bool  PythonQtWrapper_QMediaPlaylist::insertMedia(QMediaPlaylist* theWrappedObject, int  index, const QMediaContent&  content)
{
  return ( theWrappedObject->insertMedia(index, content));
}

bool  PythonQtWrapper_QMediaPlaylist::isEmpty(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QMediaPlaylist::isReadOnly(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

void PythonQtWrapper_QMediaPlaylist::load(QMediaPlaylist* theWrappedObject, QIODevice*  device, const char*  format)
{
  ( theWrappedObject->load(device, format));
}

void PythonQtWrapper_QMediaPlaylist::load(QMediaPlaylist* theWrappedObject, const QNetworkRequest&  request, const char*  format)
{
  ( theWrappedObject->load(request, format));
}

void PythonQtWrapper_QMediaPlaylist::load(QMediaPlaylist* theWrappedObject, const QUrl&  location, const char*  format)
{
  ( theWrappedObject->load(location, format));
}

QMediaContent  PythonQtWrapper_QMediaPlaylist::media(QMediaPlaylist* theWrappedObject, int  index) const
{
  return ( theWrappedObject->media(index));
}

int  PythonQtWrapper_QMediaPlaylist::mediaCount(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->mediaCount());
}

bool  PythonQtWrapper_QMediaPlaylist::moveMedia(QMediaPlaylist* theWrappedObject, int  from, int  to)
{
  return ( theWrappedObject->moveMedia(from, to));
}

int  PythonQtWrapper_QMediaPlaylist::nextIndex(QMediaPlaylist* theWrappedObject, int  steps) const
{
  return ( theWrappedObject->nextIndex(steps));
}

QMediaPlaylist::PlaybackMode  PythonQtWrapper_QMediaPlaylist::playbackMode(QMediaPlaylist* theWrappedObject) const
{
  return ( theWrappedObject->playbackMode());
}

int  PythonQtWrapper_QMediaPlaylist::previousIndex(QMediaPlaylist* theWrappedObject, int  steps) const
{
  return ( theWrappedObject->previousIndex(steps));
}

bool  PythonQtWrapper_QMediaPlaylist::removeMedia(QMediaPlaylist* theWrappedObject, int  pos)
{
  return ( theWrappedObject->removeMedia(pos));
}

bool  PythonQtWrapper_QMediaPlaylist::removeMedia(QMediaPlaylist* theWrappedObject, int  start, int  end)
{
  return ( theWrappedObject->removeMedia(start, end));
}

bool  PythonQtWrapper_QMediaPlaylist::save(QMediaPlaylist* theWrappedObject, QIODevice*  device, const char*  format)
{
  return ( theWrappedObject->save(device, format));
}

bool  PythonQtWrapper_QMediaPlaylist::save(QMediaPlaylist* theWrappedObject, const QUrl&  location, const char*  format)
{
  return ( theWrappedObject->save(location, format));
}

void PythonQtWrapper_QMediaPlaylist::setPlaybackMode(QMediaPlaylist* theWrappedObject, QMediaPlaylist::PlaybackMode  mode)
{
  ( theWrappedObject->setPlaybackMode(mode));
}



PythonQtShell_QMediaRecorder::~PythonQtShell_QMediaRecorder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaRecorder::childEvent(QChildEvent*  event0)
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
  QMediaRecorder::childEvent(event0);
}
void PythonQtShell_QMediaRecorder::customEvent(QEvent*  event0)
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
  QMediaRecorder::customEvent(event0);
}
bool  PythonQtShell_QMediaRecorder::event(QEvent*  event0)
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
  return QMediaRecorder::event(event0);
}
bool  PythonQtShell_QMediaRecorder::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMediaRecorder::eventFilter(watched0, event1);
}
QMediaObject*  PythonQtShell_QMediaRecorder::mediaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QMediaRecorder::mediaObject();
}
bool  PythonQtShell_QMediaRecorder::setMediaObject(QMediaObject*  object0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setMediaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QMediaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QMediaRecorder::setMediaObject(object0);
}
void PythonQtShell_QMediaRecorder::timerEvent(QTimerEvent*  event0)
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
  QMediaRecorder::timerEvent(event0);
}
QMediaRecorder* PythonQtWrapper_QMediaRecorder::new_QMediaRecorder(QMediaObject*  mediaObject, QObject*  parent)
{ 
return new PythonQtShell_QMediaRecorder(mediaObject, parent); }

const QMetaObject* PythonQtShell_QMediaRecorder::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaRecorder::staticMetaObject);
  } else {
    return &QMediaRecorder::staticMetaObject;
  }
}
int PythonQtShell_QMediaRecorder::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaRecorder::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QUrl  PythonQtWrapper_QMediaRecorder::actualLocation(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->actualLocation());
}

QString  PythonQtWrapper_QMediaRecorder::audioCodecDescription(QMediaRecorder* theWrappedObject, const QString&  codecName) const
{
  return ( theWrappedObject->audioCodecDescription(codecName));
}

QAudioEncoderSettings  PythonQtWrapper_QMediaRecorder::audioSettings(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->audioSettings());
}

QMultimedia::AvailabilityStatus  PythonQtWrapper_QMediaRecorder::availability(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->availability());
}

QStringList  PythonQtWrapper_QMediaRecorder::availableMetaData(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->availableMetaData());
}

QString  PythonQtWrapper_QMediaRecorder::containerDescription(QMediaRecorder* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->containerDescription(format));
}

QString  PythonQtWrapper_QMediaRecorder::containerFormat(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->containerFormat());
}

qint64  PythonQtWrapper_QMediaRecorder::duration(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QMediaRecorder::Error  PythonQtWrapper_QMediaRecorder::error(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QMediaRecorder::errorString(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QMediaRecorder::isAvailable(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

bool  PythonQtWrapper_QMediaRecorder::isMetaDataAvailable(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->isMetaDataAvailable());
}

bool  PythonQtWrapper_QMediaRecorder::isMetaDataWritable(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->isMetaDataWritable());
}

bool  PythonQtWrapper_QMediaRecorder::isMuted(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

QVariant  PythonQtWrapper_QMediaRecorder::metaData(QMediaRecorder* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->metaData(key));
}

QUrl  PythonQtWrapper_QMediaRecorder::outputLocation(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->outputLocation());
}

void PythonQtWrapper_QMediaRecorder::setAudioSettings(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  audioSettings)
{
  ( theWrappedObject->setAudioSettings(audioSettings));
}

void PythonQtWrapper_QMediaRecorder::setContainerFormat(QMediaRecorder* theWrappedObject, const QString&  container)
{
  ( theWrappedObject->setContainerFormat(container));
}

void PythonQtWrapper_QMediaRecorder::setEncodingSettings(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  audioSettings, const QVideoEncoderSettings&  videoSettings, const QString&  containerMimeType)
{
  ( theWrappedObject->setEncodingSettings(audioSettings, videoSettings, containerMimeType));
}

void PythonQtWrapper_QMediaRecorder::setMetaData(QMediaRecorder* theWrappedObject, const QString&  key, const QVariant&  value)
{
  ( theWrappedObject->setMetaData(key, value));
}

bool  PythonQtWrapper_QMediaRecorder::setOutputLocation(QMediaRecorder* theWrappedObject, const QUrl&  location)
{
  return ( theWrappedObject->setOutputLocation(location));
}

void PythonQtWrapper_QMediaRecorder::setVideoSettings(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  videoSettings)
{
  ( theWrappedObject->setVideoSettings(videoSettings));
}

QMediaRecorder::State  PythonQtWrapper_QMediaRecorder::state(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QMediaRecorder::Status  PythonQtWrapper_QMediaRecorder::status(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

QStringList  PythonQtWrapper_QMediaRecorder::supportedAudioCodecs(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->supportedAudioCodecs());
}

QList<int >  PythonQtWrapper_QMediaRecorder::supportedAudioSampleRates(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  settings, bool*  continuous) const
{
  return ( theWrappedObject->supportedAudioSampleRates(settings, continuous));
}

QStringList  PythonQtWrapper_QMediaRecorder::supportedContainers(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->supportedContainers());
}

QList<qreal >  PythonQtWrapper_QMediaRecorder::supportedFrameRates(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  settings, bool*  continuous) const
{
  return ( theWrappedObject->supportedFrameRates(settings, continuous));
}

QList<QSize >  PythonQtWrapper_QMediaRecorder::supportedResolutions(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  settings, bool*  continuous) const
{
  return ( theWrappedObject->supportedResolutions(settings, continuous));
}

QStringList  PythonQtWrapper_QMediaRecorder::supportedVideoCodecs(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->supportedVideoCodecs());
}

QString  PythonQtWrapper_QMediaRecorder::videoCodecDescription(QMediaRecorder* theWrappedObject, const QString&  codecName) const
{
  return ( theWrappedObject->videoCodecDescription(codecName));
}

QVideoEncoderSettings  PythonQtWrapper_QMediaRecorder::videoSettings(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->videoSettings());
}

qreal  PythonQtWrapper_QMediaRecorder::volume(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QMediaRecorderControl::~PythonQtShell_QMediaRecorderControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaRecorderControl::applySettings()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("applySettings");
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
  
}
void PythonQtShell_QMediaRecorderControl::childEvent(QChildEvent*  event0)
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
  QMediaRecorderControl::childEvent(event0);
}
void PythonQtShell_QMediaRecorderControl::customEvent(QEvent*  event0)
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
  QMediaRecorderControl::customEvent(event0);
}
qint64  PythonQtShell_QMediaRecorderControl::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return qint64();
}
bool  PythonQtShell_QMediaRecorderControl::event(QEvent*  event0)
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
  return QMediaRecorderControl::event(event0);
}
bool  PythonQtShell_QMediaRecorderControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMediaRecorderControl::eventFilter(watched0, event1);
}
bool  PythonQtShell_QMediaRecorderControl::isMuted() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isMuted");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isMuted", methodInfo, result);
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
  return bool();
}
QUrl  PythonQtShell_QMediaRecorderControl::outputLocation() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("outputLocation");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QUrl"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QUrl returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("outputLocation", methodInfo, result);
          } else {
            returnValue = *((QUrl*)args[0]);
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
  return QUrl();
}
void PythonQtShell_QMediaRecorderControl::setMuted(bool  muted0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setMuted");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&muted0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
bool  PythonQtShell_QMediaRecorderControl::setOutputLocation(const QUrl&  location0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setOutputLocation");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&location0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setOutputLocation", methodInfo, result);
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
  return bool();
}
void PythonQtShell_QMediaRecorderControl::setState(QMediaRecorder::State  state0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMediaRecorder::State"};
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
  
}
void PythonQtShell_QMediaRecorderControl::setVolume(qreal  volume0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVolume");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&volume0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QMediaRecorder::State  PythonQtShell_QMediaRecorderControl::state() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("state");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMediaRecorder::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaRecorder::State returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("state", methodInfo, result);
          } else {
            returnValue = *((QMediaRecorder::State*)args[0]);
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
  return QMediaRecorder::State();
}
QMediaRecorder::Status  PythonQtShell_QMediaRecorderControl::status() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("status");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMediaRecorder::Status"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMediaRecorder::Status returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("status", methodInfo, result);
          } else {
            returnValue = *((QMediaRecorder::Status*)args[0]);
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
  return QMediaRecorder::Status();
}
void PythonQtShell_QMediaRecorderControl::timerEvent(QTimerEvent*  event0)
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
  QMediaRecorderControl::timerEvent(event0);
}
qreal  PythonQtShell_QMediaRecorderControl::volume() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("volume");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qreal returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("volume", methodInfo, result);
          } else {
            returnValue = *((qreal*)args[0]);
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
  return qreal();
}
QMediaRecorderControl* PythonQtWrapper_QMediaRecorderControl::new_QMediaRecorderControl(QObject*  parent)
{ 
return new PythonQtShell_QMediaRecorderControl(parent); }

const QMetaObject* PythonQtShell_QMediaRecorderControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaRecorderControl::staticMetaObject);
  } else {
    return &QMediaRecorderControl::staticMetaObject;
  }
}
int PythonQtShell_QMediaRecorderControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaRecorderControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QMediaRecorderControl::applySettings(QMediaRecorderControl* theWrappedObject)
{
  ( theWrappedObject->applySettings());
}

qint64  PythonQtWrapper_QMediaRecorderControl::duration(QMediaRecorderControl* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

bool  PythonQtWrapper_QMediaRecorderControl::isMuted(QMediaRecorderControl* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

QUrl  PythonQtWrapper_QMediaRecorderControl::outputLocation(QMediaRecorderControl* theWrappedObject) const
{
  return ( theWrappedObject->outputLocation());
}

bool  PythonQtWrapper_QMediaRecorderControl::setOutputLocation(QMediaRecorderControl* theWrappedObject, const QUrl&  location)
{
  return ( theWrappedObject->setOutputLocation(location));
}

QMediaRecorder::State  PythonQtWrapper_QMediaRecorderControl::state(QMediaRecorderControl* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QMediaRecorder::Status  PythonQtWrapper_QMediaRecorderControl::status(QMediaRecorderControl* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

qreal  PythonQtWrapper_QMediaRecorderControl::volume(QMediaRecorderControl* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



QMediaResource* PythonQtWrapper_QMediaResource::new_QMediaResource()
{ 
return new QMediaResource(); }

QMediaResource* PythonQtWrapper_QMediaResource::new_QMediaResource(const QMediaResource&  other)
{ 
return new QMediaResource(other); }

QMediaResource* PythonQtWrapper_QMediaResource::new_QMediaResource(const QNetworkRequest&  request, const QString&  mimeType)
{ 
return new QMediaResource(request, mimeType); }

QMediaResource* PythonQtWrapper_QMediaResource::new_QMediaResource(const QUrl&  url, const QString&  mimeType)
{ 
return new QMediaResource(url, mimeType); }

int  PythonQtWrapper_QMediaResource::audioBitRate(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->audioBitRate());
}

QString  PythonQtWrapper_QMediaResource::audioCodec(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->audioCodec());
}

int  PythonQtWrapper_QMediaResource::channelCount(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->channelCount());
}

qint64  PythonQtWrapper_QMediaResource::dataSize(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->dataSize());
}

bool  PythonQtWrapper_QMediaResource::isNull(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QMediaResource::language(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->language());
}

QString  PythonQtWrapper_QMediaResource::mimeType(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->mimeType());
}

bool  PythonQtWrapper_QMediaResource::__ne__(QMediaResource* theWrappedObject, const QMediaResource&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QMediaResource*  PythonQtWrapper_QMediaResource::operator_assign(QMediaResource* theWrappedObject, const QMediaResource&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QMediaResource::__eq__(QMediaResource* theWrappedObject, const QMediaResource&  other) const
{
  return ( (*theWrappedObject)== other);
}

QNetworkRequest  PythonQtWrapper_QMediaResource::request(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->request());
}

QSize  PythonQtWrapper_QMediaResource::resolution(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->resolution());
}

int  PythonQtWrapper_QMediaResource::sampleRate(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->sampleRate());
}

void PythonQtWrapper_QMediaResource::setAudioBitRate(QMediaResource* theWrappedObject, int  rate)
{
  ( theWrappedObject->setAudioBitRate(rate));
}

void PythonQtWrapper_QMediaResource::setAudioCodec(QMediaResource* theWrappedObject, const QString&  codec)
{
  ( theWrappedObject->setAudioCodec(codec));
}

void PythonQtWrapper_QMediaResource::setChannelCount(QMediaResource* theWrappedObject, int  channels)
{
  ( theWrappedObject->setChannelCount(channels));
}

void PythonQtWrapper_QMediaResource::setDataSize(QMediaResource* theWrappedObject, const qint64  size)
{
  ( theWrappedObject->setDataSize(size));
}

void PythonQtWrapper_QMediaResource::setLanguage(QMediaResource* theWrappedObject, const QString&  language)
{
  ( theWrappedObject->setLanguage(language));
}

void PythonQtWrapper_QMediaResource::setResolution(QMediaResource* theWrappedObject, const QSize&  resolution)
{
  ( theWrappedObject->setResolution(resolution));
}

void PythonQtWrapper_QMediaResource::setResolution(QMediaResource* theWrappedObject, int  width, int  height)
{
  ( theWrappedObject->setResolution(width, height));
}

void PythonQtWrapper_QMediaResource::setSampleRate(QMediaResource* theWrappedObject, int  frequency)
{
  ( theWrappedObject->setSampleRate(frequency));
}

void PythonQtWrapper_QMediaResource::setVideoBitRate(QMediaResource* theWrappedObject, int  rate)
{
  ( theWrappedObject->setVideoBitRate(rate));
}

void PythonQtWrapper_QMediaResource::setVideoCodec(QMediaResource* theWrappedObject, const QString&  codec)
{
  ( theWrappedObject->setVideoCodec(codec));
}

QUrl  PythonQtWrapper_QMediaResource::url(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

int  PythonQtWrapper_QMediaResource::videoBitRate(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->videoBitRate());
}

QString  PythonQtWrapper_QMediaResource::videoCodec(QMediaResource* theWrappedObject) const
{
  return ( theWrappedObject->videoCodec());
}



PythonQtShell_QMediaService::~PythonQtShell_QMediaService() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaService::childEvent(QChildEvent*  event0)
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
  QMediaService::childEvent(event0);
}
void PythonQtShell_QMediaService::customEvent(QEvent*  event0)
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
  QMediaService::customEvent(event0);
}
bool  PythonQtShell_QMediaService::event(QEvent*  event0)
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
  return QMediaService::event(event0);
}
bool  PythonQtShell_QMediaService::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMediaService::eventFilter(watched0, event1);
}
void PythonQtShell_QMediaService::releaseControl(QMediaControl*  control0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("releaseControl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMediaControl*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&control0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QMediaControl*  PythonQtShell_QMediaService::requestControl(const char*  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("requestControl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMediaControl*" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMediaControl* returnValue;
      void* args[2] = {NULL, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("requestControl", methodInfo, result);
          } else {
            returnValue = *((QMediaControl**)args[0]);
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
  return 0;
}
void PythonQtShell_QMediaService::timerEvent(QTimerEvent*  event0)
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
  QMediaService::timerEvent(event0);
}
QMediaService* PythonQtWrapper_QMediaService::new_QMediaService(QObject*  parent)
{ 
return new PythonQtShell_QMediaService(parent); }

const QMetaObject* PythonQtShell_QMediaService::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaService::staticMetaObject);
  } else {
    return &QMediaService::staticMetaObject;
  }
}
int PythonQtShell_QMediaService::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaService::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QMediaService::releaseControl(QMediaService* theWrappedObject, QMediaControl*  control)
{
  ( theWrappedObject->releaseControl(control));
}

QMediaControl*  PythonQtWrapper_QMediaService::requestControl(QMediaService* theWrappedObject, const char*  name)
{
  return ( theWrappedObject->requestControl(name));
}



PythonQtShell_QMediaServiceCameraInfoInterface::~PythonQtShell_QMediaServiceCameraInfoInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QMediaServiceCameraInfoInterface::cameraOrientation(const QByteArray&  device0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("cameraOrientation");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&device0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("cameraOrientation", methodInfo, result);
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
  return int();
}
QCamera::Position  PythonQtShell_QMediaServiceCameraInfoInterface::cameraPosition(const QByteArray&  device0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("cameraPosition");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QCamera::Position" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QCamera::Position returnValue;
      void* args[2] = {NULL, (void*)&device0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("cameraPosition", methodInfo, result);
          } else {
            returnValue = *((QCamera::Position*)args[0]);
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
  return QCamera::Position();
}
QMediaServiceCameraInfoInterface* PythonQtWrapper_QMediaServiceCameraInfoInterface::new_QMediaServiceCameraInfoInterface()
{ 
return new PythonQtShell_QMediaServiceCameraInfoInterface(); }

int  PythonQtWrapper_QMediaServiceCameraInfoInterface::cameraOrientation(QMediaServiceCameraInfoInterface* theWrappedObject, const QByteArray&  device) const
{
  return ( theWrappedObject->cameraOrientation(device));
}

QCamera::Position  PythonQtWrapper_QMediaServiceCameraInfoInterface::cameraPosition(QMediaServiceCameraInfoInterface* theWrappedObject, const QByteArray&  device) const
{
  return ( theWrappedObject->cameraPosition(device));
}



PythonQtShell_QMediaServiceDefaultDeviceInterface::~PythonQtShell_QMediaServiceDefaultDeviceInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QByteArray  PythonQtShell_QMediaServiceDefaultDeviceInterface::defaultDevice(const QByteArray&  service0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("defaultDevice");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QByteArray" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QByteArray returnValue;
      void* args[2] = {NULL, (void*)&service0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("defaultDevice", methodInfo, result);
          } else {
            returnValue = *((QByteArray*)args[0]);
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
  return QByteArray();
}
QMediaServiceDefaultDeviceInterface* PythonQtWrapper_QMediaServiceDefaultDeviceInterface::new_QMediaServiceDefaultDeviceInterface()
{ 
return new PythonQtShell_QMediaServiceDefaultDeviceInterface(); }

QByteArray  PythonQtWrapper_QMediaServiceDefaultDeviceInterface::defaultDevice(QMediaServiceDefaultDeviceInterface* theWrappedObject, const QByteArray&  service) const
{
  return ( theWrappedObject->defaultDevice(service));
}



PythonQtShell_QMediaServiceProviderFactoryInterface::~PythonQtShell_QMediaServiceProviderFactoryInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMediaService*  PythonQtShell_QMediaServiceProviderFactoryInterface::create(const QString&  key0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("create");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMediaService*" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMediaService* returnValue;
      void* args[2] = {NULL, (void*)&key0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
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
}
  return 0;
}
void PythonQtShell_QMediaServiceProviderFactoryInterface::release(QMediaService*  service0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("release");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMediaService*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&service0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QMediaServiceProviderFactoryInterface* PythonQtWrapper_QMediaServiceProviderFactoryInterface::new_QMediaServiceProviderFactoryInterface()
{ 
return new PythonQtShell_QMediaServiceProviderFactoryInterface(); }

QMediaService*  PythonQtWrapper_QMediaServiceProviderFactoryInterface::create(QMediaServiceProviderFactoryInterface* theWrappedObject, const QString&  key)
{
  return ( theWrappedObject->create(key));
}

void PythonQtWrapper_QMediaServiceProviderFactoryInterface::release(QMediaServiceProviderFactoryInterface* theWrappedObject, QMediaService*  service)
{
  ( theWrappedObject->release(service));
}



QMediaServiceProviderHint* PythonQtWrapper_QMediaServiceProviderHint::new_QMediaServiceProviderHint()
{ 
return new QMediaServiceProviderHint(); }

QMediaServiceProviderHint* PythonQtWrapper_QMediaServiceProviderHint::new_QMediaServiceProviderHint(QCamera::Position  position)
{ 
return new QMediaServiceProviderHint(position); }

QMediaServiceProviderHint* PythonQtWrapper_QMediaServiceProviderHint::new_QMediaServiceProviderHint(const QByteArray&  device)
{ 
return new QMediaServiceProviderHint(device); }

QMediaServiceProviderHint* PythonQtWrapper_QMediaServiceProviderHint::new_QMediaServiceProviderHint(const QMediaServiceProviderHint&  other)
{ 
return new QMediaServiceProviderHint(other); }

QMediaServiceProviderHint* PythonQtWrapper_QMediaServiceProviderHint::new_QMediaServiceProviderHint(const QString&  mimeType, const QStringList&  codecs)
{ 
return new QMediaServiceProviderHint(mimeType, codecs); }

QCamera::Position  PythonQtWrapper_QMediaServiceProviderHint::cameraPosition(QMediaServiceProviderHint* theWrappedObject) const
{
  return ( theWrappedObject->cameraPosition());
}

QStringList  PythonQtWrapper_QMediaServiceProviderHint::codecs(QMediaServiceProviderHint* theWrappedObject) const
{
  return ( theWrappedObject->codecs());
}

QByteArray  PythonQtWrapper_QMediaServiceProviderHint::device(QMediaServiceProviderHint* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

bool  PythonQtWrapper_QMediaServiceProviderHint::isNull(QMediaServiceProviderHint* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QMediaServiceProviderHint::mimeType(QMediaServiceProviderHint* theWrappedObject) const
{
  return ( theWrappedObject->mimeType());
}

bool  PythonQtWrapper_QMediaServiceProviderHint::__ne__(QMediaServiceProviderHint* theWrappedObject, const QMediaServiceProviderHint&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QMediaServiceProviderHint*  PythonQtWrapper_QMediaServiceProviderHint::operator_assign(QMediaServiceProviderHint* theWrappedObject, const QMediaServiceProviderHint&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QMediaServiceProviderHint::__eq__(QMediaServiceProviderHint* theWrappedObject, const QMediaServiceProviderHint&  other) const
{
  return ( (*theWrappedObject)== other);
}

QMediaServiceProviderHint::Type  PythonQtWrapper_QMediaServiceProviderHint::type(QMediaServiceProviderHint* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QMediaServiceProviderPlugin::~PythonQtShell_QMediaServiceProviderPlugin() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMediaService*  PythonQtShell_QMediaServiceProviderPlugin::create(const QString&  key0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("create");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMediaService*" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMediaService* returnValue;
      void* args[2] = {NULL, (void*)&key0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
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
}
  return 0;
}
void PythonQtShell_QMediaServiceProviderPlugin::release(QMediaService*  service0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("release");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMediaService*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&service0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QMediaServiceProviderPlugin* PythonQtWrapper_QMediaServiceProviderPlugin::new_QMediaServiceProviderPlugin()
{ 
return new PythonQtShell_QMediaServiceProviderPlugin(); }

const QMetaObject* PythonQtShell_QMediaServiceProviderPlugin::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaServiceProviderPlugin::staticMetaObject);
  } else {
    return &QMediaServiceProviderPlugin::staticMetaObject;
  }
}
int PythonQtShell_QMediaServiceProviderPlugin::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaServiceProviderPlugin::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QMediaService*  PythonQtWrapper_QMediaServiceProviderPlugin::create(QMediaServiceProviderPlugin* theWrappedObject, const QString&  key)
{
  return ( theWrappedObject->create(key));
}

void PythonQtWrapper_QMediaServiceProviderPlugin::release(QMediaServiceProviderPlugin* theWrappedObject, QMediaService*  service)
{
  ( theWrappedObject->release(service));
}



PythonQtShell_QMediaServiceSupportedDevicesInterface::~PythonQtShell_QMediaServiceSupportedDevicesInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QMediaServiceSupportedDevicesInterface::deviceDescription(const QByteArray&  service0, const QByteArray&  device1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("deviceDescription");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QByteArray&" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue;
      void* args[3] = {NULL, (void*)&service0, (void*)&device1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("deviceDescription", methodInfo, result);
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
}
  return QString();
}
QList<QByteArray >  PythonQtShell_QMediaServiceSupportedDevicesInterface::devices(const QByteArray&  service0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("devices");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QByteArray >" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QByteArray > returnValue;
      void* args[2] = {NULL, (void*)&service0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("devices", methodInfo, result);
          } else {
            returnValue = *((QList<QByteArray >*)args[0]);
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
  return QList<QByteArray >();
}
QMediaServiceSupportedDevicesInterface* PythonQtWrapper_QMediaServiceSupportedDevicesInterface::new_QMediaServiceSupportedDevicesInterface()
{ 
return new PythonQtShell_QMediaServiceSupportedDevicesInterface(); }

QString  PythonQtWrapper_QMediaServiceSupportedDevicesInterface::deviceDescription(QMediaServiceSupportedDevicesInterface* theWrappedObject, const QByteArray&  service, const QByteArray&  device)
{
  return ( theWrappedObject->deviceDescription(service, device));
}

QList<QByteArray >  PythonQtWrapper_QMediaServiceSupportedDevicesInterface::devices(QMediaServiceSupportedDevicesInterface* theWrappedObject, const QByteArray&  service) const
{
  return ( theWrappedObject->devices(service));
}



PythonQtShell_QMediaServiceSupportedFormatsInterface::~PythonQtShell_QMediaServiceSupportedFormatsInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMultimedia::SupportEstimate  PythonQtShell_QMediaServiceSupportedFormatsInterface::hasSupport(const QString&  mimeType0, const QStringList&  codecs1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasSupport");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMultimedia::SupportEstimate" , "const QString&" , "const QStringList&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QMultimedia::SupportEstimate returnValue;
      void* args[3] = {NULL, (void*)&mimeType0, (void*)&codecs1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("hasSupport", methodInfo, result);
          } else {
            returnValue = *((QMultimedia::SupportEstimate*)args[0]);
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
  return QMultimedia::SupportEstimate();
}
QStringList  PythonQtShell_QMediaServiceSupportedFormatsInterface::supportedMimeTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedMimeTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedMimeTypes", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
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
  return QStringList();
}
QMediaServiceSupportedFormatsInterface* PythonQtWrapper_QMediaServiceSupportedFormatsInterface::new_QMediaServiceSupportedFormatsInterface()
{ 
return new PythonQtShell_QMediaServiceSupportedFormatsInterface(); }

QMultimedia::SupportEstimate  PythonQtWrapper_QMediaServiceSupportedFormatsInterface::hasSupport(QMediaServiceSupportedFormatsInterface* theWrappedObject, const QString&  mimeType, const QStringList&  codecs) const
{
  return ( theWrappedObject->hasSupport(mimeType, codecs));
}

QStringList  PythonQtWrapper_QMediaServiceSupportedFormatsInterface::supportedMimeTypes(QMediaServiceSupportedFormatsInterface* theWrappedObject) const
{
  return ( theWrappedObject->supportedMimeTypes());
}



PythonQtShell_QMediaStreamsControl::~PythonQtShell_QMediaStreamsControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaStreamsControl::childEvent(QChildEvent*  event0)
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
  QMediaStreamsControl::childEvent(event0);
}
void PythonQtShell_QMediaStreamsControl::customEvent(QEvent*  event0)
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
  QMediaStreamsControl::customEvent(event0);
}
bool  PythonQtShell_QMediaStreamsControl::event(QEvent*  event0)
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
  return QMediaStreamsControl::event(event0);
}
bool  PythonQtShell_QMediaStreamsControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMediaStreamsControl::eventFilter(watched0, event1);
}
bool  PythonQtShell_QMediaStreamsControl::isActive(int  streamNumber0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isActive");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&streamNumber0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isActive", methodInfo, result);
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
  return bool();
}
QVariant  PythonQtShell_QMediaStreamsControl::metaData(int  streamNumber0, const QString&  key1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "int" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
      void* args[3] = {NULL, (void*)&streamNumber0, (void*)&key1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaData", methodInfo, result);
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
  return QVariant();
}
void PythonQtShell_QMediaStreamsControl::setActive(int  streamNumber0, bool  state1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setActive");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&streamNumber0, (void*)&state1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
int  PythonQtShell_QMediaStreamsControl::streamCount()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("streamCount");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("streamCount", methodInfo, result);
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
  return int();
}
QMediaStreamsControl::StreamType  PythonQtShell_QMediaStreamsControl::streamType(int  streamNumber0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("streamType");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMediaStreamsControl::StreamType" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMediaStreamsControl::StreamType returnValue;
      void* args[2] = {NULL, (void*)&streamNumber0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("streamType", methodInfo, result);
          } else {
            returnValue = *((QMediaStreamsControl::StreamType*)args[0]);
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
  return QMediaStreamsControl::StreamType();
}
void PythonQtShell_QMediaStreamsControl::timerEvent(QTimerEvent*  event0)
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
  QMediaStreamsControl::timerEvent(event0);
}
QMediaStreamsControl* PythonQtWrapper_QMediaStreamsControl::new_QMediaStreamsControl(QObject*  parent)
{ 
return new PythonQtShell_QMediaStreamsControl(parent); }

const QMetaObject* PythonQtShell_QMediaStreamsControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaStreamsControl::staticMetaObject);
  } else {
    return &QMediaStreamsControl::staticMetaObject;
  }
}
int PythonQtShell_QMediaStreamsControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaStreamsControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QMediaStreamsControl::isActive(QMediaStreamsControl* theWrappedObject, int  streamNumber)
{
  return ( theWrappedObject->isActive(streamNumber));
}

QVariant  PythonQtWrapper_QMediaStreamsControl::metaData(QMediaStreamsControl* theWrappedObject, int  streamNumber, const QString&  key)
{
  return ( theWrappedObject->metaData(streamNumber, key));
}

void PythonQtWrapper_QMediaStreamsControl::setActive(QMediaStreamsControl* theWrappedObject, int  streamNumber, bool  state)
{
  ( theWrappedObject->setActive(streamNumber, state));
}

int  PythonQtWrapper_QMediaStreamsControl::streamCount(QMediaStreamsControl* theWrappedObject)
{
  return ( theWrappedObject->streamCount());
}

QMediaStreamsControl::StreamType  PythonQtWrapper_QMediaStreamsControl::streamType(QMediaStreamsControl* theWrappedObject, int  streamNumber)
{
  return ( theWrappedObject->streamType(streamNumber));
}



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



PythonQtShell_QMediaVideoProbeControl::~PythonQtShell_QMediaVideoProbeControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaVideoProbeControl::childEvent(QChildEvent*  event0)
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
  QMediaVideoProbeControl::childEvent(event0);
}
void PythonQtShell_QMediaVideoProbeControl::customEvent(QEvent*  event0)
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
  QMediaVideoProbeControl::customEvent(event0);
}
bool  PythonQtShell_QMediaVideoProbeControl::event(QEvent*  event0)
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
  return QMediaVideoProbeControl::event(event0);
}
bool  PythonQtShell_QMediaVideoProbeControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMediaVideoProbeControl::eventFilter(watched0, event1);
}
void PythonQtShell_QMediaVideoProbeControl::timerEvent(QTimerEvent*  event0)
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
  QMediaVideoProbeControl::timerEvent(event0);
}
QMediaVideoProbeControl* PythonQtWrapper_QMediaVideoProbeControl::new_QMediaVideoProbeControl(QObject*  parent)
{ 
return new PythonQtShell_QMediaVideoProbeControl(parent); }

const QMetaObject* PythonQtShell_QMediaVideoProbeControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaVideoProbeControl::staticMetaObject);
  } else {
    return &QMediaVideoProbeControl::staticMetaObject;
  }
}
int PythonQtShell_QMediaVideoProbeControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaVideoProbeControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


PythonQtShell_QMetaDataReaderControl::~PythonQtShell_QMetaDataReaderControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStringList  PythonQtShell_QMetaDataReaderControl::availableMetaData() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("availableMetaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("availableMetaData", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
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
  return QStringList();
}
void PythonQtShell_QMetaDataReaderControl::childEvent(QChildEvent*  event0)
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
  QMetaDataReaderControl::childEvent(event0);
}
void PythonQtShell_QMetaDataReaderControl::customEvent(QEvent*  event0)
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
  QMetaDataReaderControl::customEvent(event0);
}
bool  PythonQtShell_QMetaDataReaderControl::event(QEvent*  event0)
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
  return QMetaDataReaderControl::event(event0);
}
bool  PythonQtShell_QMetaDataReaderControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMetaDataReaderControl::eventFilter(watched0, event1);
}
bool  PythonQtShell_QMetaDataReaderControl::isMetaDataAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isMetaDataAvailable");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isMetaDataAvailable", methodInfo, result);
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
  return bool();
}
QVariant  PythonQtShell_QMetaDataReaderControl::metaData(const QString&  key0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&key0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaData", methodInfo, result);
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
  return QVariant();
}
void PythonQtShell_QMetaDataReaderControl::timerEvent(QTimerEvent*  event0)
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
  QMetaDataReaderControl::timerEvent(event0);
}
QMetaDataReaderControl* PythonQtWrapper_QMetaDataReaderControl::new_QMetaDataReaderControl(QObject*  parent)
{ 
return new PythonQtShell_QMetaDataReaderControl(parent); }

const QMetaObject* PythonQtShell_QMetaDataReaderControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMetaDataReaderControl::staticMetaObject);
  } else {
    return &QMetaDataReaderControl::staticMetaObject;
  }
}
int PythonQtShell_QMetaDataReaderControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMetaDataReaderControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QStringList  PythonQtWrapper_QMetaDataReaderControl::availableMetaData(QMetaDataReaderControl* theWrappedObject) const
{
  return ( theWrappedObject->availableMetaData());
}

bool  PythonQtWrapper_QMetaDataReaderControl::isMetaDataAvailable(QMetaDataReaderControl* theWrappedObject) const
{
  return ( theWrappedObject->isMetaDataAvailable());
}

QVariant  PythonQtWrapper_QMetaDataReaderControl::metaData(QMetaDataReaderControl* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->metaData(key));
}



PythonQtShell_QMetaDataWriterControl::~PythonQtShell_QMetaDataWriterControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStringList  PythonQtShell_QMetaDataWriterControl::availableMetaData() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("availableMetaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("availableMetaData", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
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
  return QStringList();
}
void PythonQtShell_QMetaDataWriterControl::childEvent(QChildEvent*  event0)
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
  QMetaDataWriterControl::childEvent(event0);
}
void PythonQtShell_QMetaDataWriterControl::customEvent(QEvent*  event0)
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
  QMetaDataWriterControl::customEvent(event0);
}
bool  PythonQtShell_QMetaDataWriterControl::event(QEvent*  event0)
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
  return QMetaDataWriterControl::event(event0);
}
bool  PythonQtShell_QMetaDataWriterControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMetaDataWriterControl::eventFilter(watched0, event1);
}
bool  PythonQtShell_QMetaDataWriterControl::isMetaDataAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isMetaDataAvailable");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isMetaDataAvailable", methodInfo, result);
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
  return bool();
}
bool  PythonQtShell_QMetaDataWriterControl::isWritable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isWritable");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isWritable", methodInfo, result);
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
  return bool();
}
QVariant  PythonQtShell_QMetaDataWriterControl::metaData(const QString&  key0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&key0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaData", methodInfo, result);
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
  return QVariant();
}
void PythonQtShell_QMetaDataWriterControl::setMetaData(const QString&  key0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setMetaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&key0, (void*)&value1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QMetaDataWriterControl::timerEvent(QTimerEvent*  event0)
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
  QMetaDataWriterControl::timerEvent(event0);
}
QMetaDataWriterControl* PythonQtWrapper_QMetaDataWriterControl::new_QMetaDataWriterControl(QObject*  parent)
{ 
return new PythonQtShell_QMetaDataWriterControl(parent); }

const QMetaObject* PythonQtShell_QMetaDataWriterControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMetaDataWriterControl::staticMetaObject);
  } else {
    return &QMetaDataWriterControl::staticMetaObject;
  }
}
int PythonQtShell_QMetaDataWriterControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMetaDataWriterControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QStringList  PythonQtWrapper_QMetaDataWriterControl::availableMetaData(QMetaDataWriterControl* theWrappedObject) const
{
  return ( theWrappedObject->availableMetaData());
}

bool  PythonQtWrapper_QMetaDataWriterControl::isMetaDataAvailable(QMetaDataWriterControl* theWrappedObject) const
{
  return ( theWrappedObject->isMetaDataAvailable());
}

bool  PythonQtWrapper_QMetaDataWriterControl::isWritable(QMetaDataWriterControl* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QVariant  PythonQtWrapper_QMetaDataWriterControl::metaData(QMetaDataWriterControl* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->metaData(key));
}

void PythonQtWrapper_QMetaDataWriterControl::setMetaData(QMetaDataWriterControl* theWrappedObject, const QString&  key, const QVariant&  value)
{
  ( theWrappedObject->setMetaData(key, value));
}





PythonQtShell_QRadioData::~PythonQtShell_QRadioData() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRadioData::childEvent(QChildEvent*  event0)
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
  QRadioData::childEvent(event0);
}
void PythonQtShell_QRadioData::customEvent(QEvent*  event0)
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
  QRadioData::customEvent(event0);
}
bool  PythonQtShell_QRadioData::event(QEvent*  event0)
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
  return QRadioData::event(event0);
}
bool  PythonQtShell_QRadioData::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QRadioData::eventFilter(watched0, event1);
}
QMediaObject*  PythonQtShell_QRadioData::mediaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QRadioData::mediaObject();
}
bool  PythonQtShell_QRadioData::setMediaObject(QMediaObject*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setMediaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QMediaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QRadioData::setMediaObject(arg__1);
}
void PythonQtShell_QRadioData::timerEvent(QTimerEvent*  event0)
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
  QRadioData::timerEvent(event0);
}
QRadioData* PythonQtWrapper_QRadioData::new_QRadioData(QMediaObject*  mediaObject, QObject*  parent)
{ 
return new PythonQtShell_QRadioData(mediaObject, parent); }

const QMetaObject* PythonQtShell_QRadioData::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QRadioData::staticMetaObject);
  } else {
    return &QRadioData::staticMetaObject;
  }
}
int PythonQtShell_QRadioData::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QRadioData::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
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

QString  PythonQtWrapper_QRadioData::stationId(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->stationId());
}

QString  PythonQtWrapper_QRadioData::stationName(QRadioData* theWrappedObject) const
{
  return ( theWrappedObject->stationName());
}



PythonQtShell_QRadioDataControl::~PythonQtShell_QRadioDataControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRadioDataControl::childEvent(QChildEvent*  event0)
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
  QRadioDataControl::childEvent(event0);
}
void PythonQtShell_QRadioDataControl::customEvent(QEvent*  event0)
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
  QRadioDataControl::customEvent(event0);
}
QRadioData::Error  PythonQtShell_QRadioDataControl::error() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("error");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRadioData::Error"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRadioData::Error returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("error", methodInfo, result);
          } else {
            returnValue = *((QRadioData::Error*)args[0]);
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
  return QRadioData::Error();
}
QString  PythonQtShell_QRadioDataControl::errorString() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("errorString");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("errorString", methodInfo, result);
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
}
  return QString();
}
bool  PythonQtShell_QRadioDataControl::event(QEvent*  event0)
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
  return QRadioDataControl::event(event0);
}
bool  PythonQtShell_QRadioDataControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QRadioDataControl::eventFilter(watched0, event1);
}
bool  PythonQtShell_QRadioDataControl::isAlternativeFrequenciesEnabled() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isAlternativeFrequenciesEnabled");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isAlternativeFrequenciesEnabled", methodInfo, result);
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
  return bool();
}
QRadioData::ProgramType  PythonQtShell_QRadioDataControl::programType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("programType");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRadioData::ProgramType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRadioData::ProgramType returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("programType", methodInfo, result);
          } else {
            returnValue = *((QRadioData::ProgramType*)args[0]);
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
  return QRadioData::ProgramType();
}
QString  PythonQtShell_QRadioDataControl::programTypeName() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("programTypeName");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("programTypeName", methodInfo, result);
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
}
  return QString();
}
QString  PythonQtShell_QRadioDataControl::radioText() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("radioText");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("radioText", methodInfo, result);
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
}
  return QString();
}
void PythonQtShell_QRadioDataControl::setAlternativeFrequenciesEnabled(bool  enabled0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setAlternativeFrequenciesEnabled");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&enabled0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QString  PythonQtShell_QRadioDataControl::stationId() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("stationId");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("stationId", methodInfo, result);
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
}
  return QString();
}
QString  PythonQtShell_QRadioDataControl::stationName() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("stationName");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("stationName", methodInfo, result);
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
}
  return QString();
}
void PythonQtShell_QRadioDataControl::timerEvent(QTimerEvent*  event0)
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
  QRadioDataControl::timerEvent(event0);
}
QRadioDataControl* PythonQtWrapper_QRadioDataControl::new_QRadioDataControl(QObject*  parent)
{ 
return new PythonQtShell_QRadioDataControl(parent); }

const QMetaObject* PythonQtShell_QRadioDataControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QRadioDataControl::staticMetaObject);
  } else {
    return &QRadioDataControl::staticMetaObject;
  }
}
int PythonQtShell_QRadioDataControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QRadioDataControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QRadioData::Error  PythonQtWrapper_QRadioDataControl::error(QRadioDataControl* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QRadioDataControl::errorString(QRadioDataControl* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QRadioDataControl::isAlternativeFrequenciesEnabled(QRadioDataControl* theWrappedObject) const
{
  return ( theWrappedObject->isAlternativeFrequenciesEnabled());
}

QRadioData::ProgramType  PythonQtWrapper_QRadioDataControl::programType(QRadioDataControl* theWrappedObject) const
{
  return ( theWrappedObject->programType());
}

QString  PythonQtWrapper_QRadioDataControl::programTypeName(QRadioDataControl* theWrappedObject) const
{
  return ( theWrappedObject->programTypeName());
}

QString  PythonQtWrapper_QRadioDataControl::radioText(QRadioDataControl* theWrappedObject) const
{
  return ( theWrappedObject->radioText());
}

void PythonQtWrapper_QRadioDataControl::setAlternativeFrequenciesEnabled(QRadioDataControl* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAlternativeFrequenciesEnabled(enabled));
}

QString  PythonQtWrapper_QRadioDataControl::stationId(QRadioDataControl* theWrappedObject) const
{
  return ( theWrappedObject->stationId());
}

QString  PythonQtWrapper_QRadioDataControl::stationName(QRadioDataControl* theWrappedObject) const
{
  return ( theWrappedObject->stationName());
}



PythonQtShell_QRadioTuner::~PythonQtShell_QRadioTuner() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMultimedia::AvailabilityStatus  PythonQtShell_QRadioTuner::availability() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QRadioTuner::availability();
}
bool  PythonQtShell_QRadioTuner::bind(QObject*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bind");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QRadioTuner::bind(arg__1);
}
void PythonQtShell_QRadioTuner::childEvent(QChildEvent*  event0)
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
  QRadioTuner::childEvent(event0);
}
void PythonQtShell_QRadioTuner::customEvent(QEvent*  event0)
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
  QRadioTuner::customEvent(event0);
}
bool  PythonQtShell_QRadioTuner::event(QEvent*  event0)
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
  return QRadioTuner::event(event0);
}
bool  PythonQtShell_QRadioTuner::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QRadioTuner::eventFilter(watched0, event1);
}
bool  PythonQtShell_QRadioTuner::isAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isAvailable");
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
}
  return QRadioTuner::isAvailable();
}
QMediaService*  PythonQtShell_QRadioTuner::service() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QRadioTuner::service();
}
void PythonQtShell_QRadioTuner::timerEvent(QTimerEvent*  event0)
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
  QRadioTuner::timerEvent(event0);
}
void PythonQtShell_QRadioTuner::unbind(QObject*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QRadioTuner::unbind(arg__1);
}
QRadioTuner* PythonQtWrapper_QRadioTuner::new_QRadioTuner(QObject*  parent)
{ 
return new PythonQtShell_QRadioTuner(parent); }

const QMetaObject* PythonQtShell_QRadioTuner::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QRadioTuner::staticMetaObject);
  } else {
    return &QRadioTuner::staticMetaObject;
  }
}
int PythonQtShell_QRadioTuner::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QRadioTuner::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
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



PythonQtShell_QRadioTunerControl::~PythonQtShell_QRadioTunerControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRadioTuner::Band  PythonQtShell_QRadioTunerControl::band() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("band");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRadioTuner::Band"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRadioTuner::Band returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("band", methodInfo, result);
          } else {
            returnValue = *((QRadioTuner::Band*)args[0]);
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
  return QRadioTuner::Band();
}
void PythonQtShell_QRadioTunerControl::cancelSearch()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("cancelSearch");
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
  
}
void PythonQtShell_QRadioTunerControl::childEvent(QChildEvent*  event0)
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
  QRadioTunerControl::childEvent(event0);
}
void PythonQtShell_QRadioTunerControl::customEvent(QEvent*  event0)
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
  QRadioTunerControl::customEvent(event0);
}
QRadioTuner::Error  PythonQtShell_QRadioTunerControl::error() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("error");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRadioTuner::Error"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRadioTuner::Error returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("error", methodInfo, result);
          } else {
            returnValue = *((QRadioTuner::Error*)args[0]);
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
  return QRadioTuner::Error();
}
QString  PythonQtShell_QRadioTunerControl::errorString() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("errorString");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("errorString", methodInfo, result);
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
}
  return QString();
}
bool  PythonQtShell_QRadioTunerControl::event(QEvent*  event0)
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
  return QRadioTunerControl::event(event0);
}
bool  PythonQtShell_QRadioTunerControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QRadioTunerControl::eventFilter(watched0, event1);
}
int  PythonQtShell_QRadioTunerControl::frequency() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("frequency");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("frequency", methodInfo, result);
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
  return int();
}
QPair<int , int >  PythonQtShell_QRadioTunerControl::frequencyRange(QRadioTuner::Band  b0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("frequencyRange");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPair<int , int >" , "QRadioTuner::Band"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPair<int , int > returnValue;
      void* args[2] = {NULL, (void*)&b0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("frequencyRange", methodInfo, result);
          } else {
            returnValue = *((QPair<int , int >*)args[0]);
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
  return QPair<int , int >();
}
int  PythonQtShell_QRadioTunerControl::frequencyStep(QRadioTuner::Band  b0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("frequencyStep");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QRadioTuner::Band"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&b0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("frequencyStep", methodInfo, result);
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
  return int();
}
bool  PythonQtShell_QRadioTunerControl::isAntennaConnected() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isAntennaConnected");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isAntennaConnected", methodInfo, result);
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
  return QRadioTunerControl::isAntennaConnected();
}
bool  PythonQtShell_QRadioTunerControl::isBandSupported(QRadioTuner::Band  b0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isBandSupported");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QRadioTuner::Band"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&b0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isBandSupported", methodInfo, result);
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
  return bool();
}
bool  PythonQtShell_QRadioTunerControl::isMuted() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isMuted");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isMuted", methodInfo, result);
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
  return bool();
}
bool  PythonQtShell_QRadioTunerControl::isSearching() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isSearching");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isSearching", methodInfo, result);
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
  return bool();
}
bool  PythonQtShell_QRadioTunerControl::isStereo() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isStereo");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isStereo", methodInfo, result);
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
  return bool();
}
void PythonQtShell_QRadioTunerControl::searchAllStations(QRadioTuner::SearchMode  searchMode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("searchAllStations");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QRadioTuner::SearchMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&searchMode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QRadioTunerControl::searchBackward()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("searchBackward");
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
  
}
void PythonQtShell_QRadioTunerControl::searchForward()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("searchForward");
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
  
}
void PythonQtShell_QRadioTunerControl::setBand(QRadioTuner::Band  b0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setBand");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QRadioTuner::Band"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&b0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QRadioTunerControl::setFrequency(int  frequency0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setFrequency");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&frequency0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QRadioTunerControl::setMuted(bool  muted0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setMuted");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&muted0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QRadioTunerControl::setStereoMode(QRadioTuner::StereoMode  mode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setStereoMode");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QRadioTuner::StereoMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QRadioTunerControl::setVolume(int  volume0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVolume");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&volume0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
int  PythonQtShell_QRadioTunerControl::signalStrength() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("signalStrength");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("signalStrength", methodInfo, result);
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
  return int();
}
void PythonQtShell_QRadioTunerControl::start()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("start");
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
  
}
QRadioTuner::State  PythonQtShell_QRadioTunerControl::state() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("state");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRadioTuner::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRadioTuner::State returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("state", methodInfo, result);
          } else {
            returnValue = *((QRadioTuner::State*)args[0]);
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
  return QRadioTuner::State();
}
QRadioTuner::StereoMode  PythonQtShell_QRadioTunerControl::stereoMode() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("stereoMode");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRadioTuner::StereoMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRadioTuner::StereoMode returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("stereoMode", methodInfo, result);
          } else {
            returnValue = *((QRadioTuner::StereoMode*)args[0]);
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
  return QRadioTuner::StereoMode();
}
void PythonQtShell_QRadioTunerControl::stop()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("stop");
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
  
}
void PythonQtShell_QRadioTunerControl::timerEvent(QTimerEvent*  event0)
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
  QRadioTunerControl::timerEvent(event0);
}
int  PythonQtShell_QRadioTunerControl::volume() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("volume");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("volume", methodInfo, result);
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
  return int();
}
QRadioTunerControl* PythonQtWrapper_QRadioTunerControl::new_QRadioTunerControl(QObject*  parent)
{ 
return new PythonQtShell_QRadioTunerControl(parent); }

const QMetaObject* PythonQtShell_QRadioTunerControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QRadioTunerControl::staticMetaObject);
  } else {
    return &QRadioTunerControl::staticMetaObject;
  }
}
int PythonQtShell_QRadioTunerControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QRadioTunerControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QRadioTuner::Band  PythonQtWrapper_QRadioTunerControl::band(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->band());
}

void PythonQtWrapper_QRadioTunerControl::cancelSearch(QRadioTunerControl* theWrappedObject)
{
  ( theWrappedObject->cancelSearch());
}

QRadioTuner::Error  PythonQtWrapper_QRadioTunerControl::error(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QRadioTunerControl::errorString(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

int  PythonQtWrapper_QRadioTunerControl::frequency(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->frequency());
}

QPair<int , int >  PythonQtWrapper_QRadioTunerControl::frequencyRange(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b) const
{
  return ( theWrappedObject->frequencyRange(b));
}

int  PythonQtWrapper_QRadioTunerControl::frequencyStep(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b) const
{
  return ( theWrappedObject->frequencyStep(b));
}

bool  PythonQtWrapper_QRadioTunerControl::isAntennaConnected(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->isAntennaConnected());
}

bool  PythonQtWrapper_QRadioTunerControl::isBandSupported(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b) const
{
  return ( theWrappedObject->isBandSupported(b));
}

bool  PythonQtWrapper_QRadioTunerControl::isMuted(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

bool  PythonQtWrapper_QRadioTunerControl::isSearching(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->isSearching());
}

bool  PythonQtWrapper_QRadioTunerControl::isStereo(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->isStereo());
}

void PythonQtWrapper_QRadioTunerControl::searchAllStations(QRadioTunerControl* theWrappedObject, QRadioTuner::SearchMode  searchMode)
{
  ( theWrappedObject->searchAllStations(searchMode));
}

void PythonQtWrapper_QRadioTunerControl::searchBackward(QRadioTunerControl* theWrappedObject)
{
  ( theWrappedObject->searchBackward());
}

void PythonQtWrapper_QRadioTunerControl::searchForward(QRadioTunerControl* theWrappedObject)
{
  ( theWrappedObject->searchForward());
}

void PythonQtWrapper_QRadioTunerControl::setBand(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b)
{
  ( theWrappedObject->setBand(b));
}

void PythonQtWrapper_QRadioTunerControl::setFrequency(QRadioTunerControl* theWrappedObject, int  frequency)
{
  ( theWrappedObject->setFrequency(frequency));
}

void PythonQtWrapper_QRadioTunerControl::setMuted(QRadioTunerControl* theWrappedObject, bool  muted)
{
  ( theWrappedObject->setMuted(muted));
}

void PythonQtWrapper_QRadioTunerControl::setStereoMode(QRadioTunerControl* theWrappedObject, QRadioTuner::StereoMode  mode)
{
  ( theWrappedObject->setStereoMode(mode));
}

void PythonQtWrapper_QRadioTunerControl::setVolume(QRadioTunerControl* theWrappedObject, int  volume)
{
  ( theWrappedObject->setVolume(volume));
}

int  PythonQtWrapper_QRadioTunerControl::signalStrength(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->signalStrength());
}

void PythonQtWrapper_QRadioTunerControl::start(QRadioTunerControl* theWrappedObject)
{
  ( theWrappedObject->start());
}

QRadioTuner::State  PythonQtWrapper_QRadioTunerControl::state(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QRadioTuner::StereoMode  PythonQtWrapper_QRadioTunerControl::stereoMode(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->stereoMode());
}

void PythonQtWrapper_QRadioTunerControl::stop(QRadioTunerControl* theWrappedObject)
{
  ( theWrappedObject->stop());
}

int  PythonQtWrapper_QRadioTunerControl::volume(QRadioTunerControl* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QSound::~PythonQtShell_QSound() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSound::childEvent(QChildEvent*  event0)
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
  QSound::childEvent(event0);
}
void PythonQtShell_QSound::customEvent(QEvent*  event0)
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
  QSound::customEvent(event0);
}
bool  PythonQtShell_QSound::event(QEvent*  event0)
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
  return QSound::event(event0);
}
bool  PythonQtShell_QSound::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QSound::eventFilter(watched0, event1);
}
void PythonQtShell_QSound::timerEvent(QTimerEvent*  event0)
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
  QSound::timerEvent(event0);
}
QSound* PythonQtWrapper_QSound::new_QSound(const QString&  filename, QObject*  parent)
{ 
return new PythonQtShell_QSound(filename, parent); }

const QMetaObject* PythonQtShell_QSound::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSound::staticMetaObject);
  } else {
    return &QSound::staticMetaObject;
  }
}
int PythonQtShell_QSound::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSound::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QSound::fileName(QSound* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

bool  PythonQtWrapper_QSound::isFinished(QSound* theWrappedObject) const
{
  return ( theWrappedObject->isFinished());
}

int  PythonQtWrapper_QSound::loops(QSound* theWrappedObject) const
{
  return ( theWrappedObject->loops());
}

int  PythonQtWrapper_QSound::loopsRemaining(QSound* theWrappedObject) const
{
  return ( theWrappedObject->loopsRemaining());
}

void PythonQtWrapper_QSound::static_QSound_play(const QString&  filename)
{
  (QSound::play(filename));
}

void PythonQtWrapper_QSound::setLoops(QSound* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setLoops(arg__1));
}



PythonQtShell_QSoundEffect::~PythonQtShell_QSoundEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSoundEffect::childEvent(QChildEvent*  event0)
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
  QSoundEffect::childEvent(event0);
}
void PythonQtShell_QSoundEffect::customEvent(QEvent*  event0)
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
  QSoundEffect::customEvent(event0);
}
bool  PythonQtShell_QSoundEffect::event(QEvent*  event0)
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
  return QSoundEffect::event(event0);
}
bool  PythonQtShell_QSoundEffect::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QSoundEffect::eventFilter(watched0, event1);
}
void PythonQtShell_QSoundEffect::timerEvent(QTimerEvent*  event0)
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
  QSoundEffect::timerEvent(event0);
}
QSoundEffect* PythonQtWrapper_QSoundEffect::new_QSoundEffect(QObject*  parent)
{ 
return new PythonQtShell_QSoundEffect(parent); }

const QMetaObject* PythonQtShell_QSoundEffect::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSoundEffect::staticMetaObject);
  } else {
    return &QSoundEffect::staticMetaObject;
  }
}
int PythonQtShell_QSoundEffect::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSoundEffect::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
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



PythonQtShell_QVideoDeviceSelectorControl::~PythonQtShell_QVideoDeviceSelectorControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVideoDeviceSelectorControl::childEvent(QChildEvent*  event0)
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
  QVideoDeviceSelectorControl::childEvent(event0);
}
void PythonQtShell_QVideoDeviceSelectorControl::customEvent(QEvent*  event0)
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
  QVideoDeviceSelectorControl::customEvent(event0);
}
int  PythonQtShell_QVideoDeviceSelectorControl::defaultDevice() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("defaultDevice");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("defaultDevice", methodInfo, result);
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
  return int();
}
int  PythonQtShell_QVideoDeviceSelectorControl::deviceCount() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("deviceCount");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("deviceCount", methodInfo, result);
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
  return int();
}
QString  PythonQtShell_QVideoDeviceSelectorControl::deviceDescription(int  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("deviceDescription");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("deviceDescription", methodInfo, result);
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
}
  return QString();
}
QString  PythonQtShell_QVideoDeviceSelectorControl::deviceName(int  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("deviceName");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("deviceName", methodInfo, result);
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
}
  return QString();
}
bool  PythonQtShell_QVideoDeviceSelectorControl::event(QEvent*  event0)
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
  return QVideoDeviceSelectorControl::event(event0);
}
bool  PythonQtShell_QVideoDeviceSelectorControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QVideoDeviceSelectorControl::eventFilter(watched0, event1);
}
int  PythonQtShell_QVideoDeviceSelectorControl::selectedDevice() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("selectedDevice");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("selectedDevice", methodInfo, result);
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
  return int();
}
void PythonQtShell_QVideoDeviceSelectorControl::setSelectedDevice(int  index0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setSelectedDevice");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QVideoDeviceSelectorControl::timerEvent(QTimerEvent*  event0)
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
  QVideoDeviceSelectorControl::timerEvent(event0);
}
QVideoDeviceSelectorControl* PythonQtWrapper_QVideoDeviceSelectorControl::new_QVideoDeviceSelectorControl(QObject*  parent)
{ 
return new PythonQtShell_QVideoDeviceSelectorControl(parent); }

const QMetaObject* PythonQtShell_QVideoDeviceSelectorControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QVideoDeviceSelectorControl::staticMetaObject);
  } else {
    return &QVideoDeviceSelectorControl::staticMetaObject;
  }
}
int PythonQtShell_QVideoDeviceSelectorControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QVideoDeviceSelectorControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QVideoDeviceSelectorControl::defaultDevice(QVideoDeviceSelectorControl* theWrappedObject) const
{
  return ( theWrappedObject->defaultDevice());
}

int  PythonQtWrapper_QVideoDeviceSelectorControl::deviceCount(QVideoDeviceSelectorControl* theWrappedObject) const
{
  return ( theWrappedObject->deviceCount());
}

QString  PythonQtWrapper_QVideoDeviceSelectorControl::deviceDescription(QVideoDeviceSelectorControl* theWrappedObject, int  index) const
{
  return ( theWrappedObject->deviceDescription(index));
}

QString  PythonQtWrapper_QVideoDeviceSelectorControl::deviceName(QVideoDeviceSelectorControl* theWrappedObject, int  index) const
{
  return ( theWrappedObject->deviceName(index));
}

int  PythonQtWrapper_QVideoDeviceSelectorControl::selectedDevice(QVideoDeviceSelectorControl* theWrappedObject) const
{
  return ( theWrappedObject->selectedDevice());
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



PythonQtShell_QVideoEncoderSettingsControl::~PythonQtShell_QVideoEncoderSettingsControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVideoEncoderSettingsControl::childEvent(QChildEvent*  event0)
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
  QVideoEncoderSettingsControl::childEvent(event0);
}
void PythonQtShell_QVideoEncoderSettingsControl::customEvent(QEvent*  event0)
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
  QVideoEncoderSettingsControl::customEvent(event0);
}
bool  PythonQtShell_QVideoEncoderSettingsControl::event(QEvent*  event0)
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
  return QVideoEncoderSettingsControl::event(event0);
}
bool  PythonQtShell_QVideoEncoderSettingsControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QVideoEncoderSettingsControl::eventFilter(watched0, event1);
}
void PythonQtShell_QVideoEncoderSettingsControl::setVideoSettings(const QVideoEncoderSettings&  settings0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVideoSettings");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QVideoEncoderSettings&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&settings0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QList<qreal >  PythonQtShell_QVideoEncoderSettingsControl::supportedFrameRates(const QVideoEncoderSettings&  settings0, bool*  continuous1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedFrameRates");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<qreal >" , "const QVideoEncoderSettings&" , "bool*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QList<qreal > returnValue;
      void* args[3] = {NULL, (void*)&settings0, (void*)&continuous1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedFrameRates", methodInfo, result);
          } else {
            returnValue = *((QList<qreal >*)args[0]);
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
  return QList<qreal >();
}
QList<QSize >  PythonQtShell_QVideoEncoderSettingsControl::supportedResolutions(const QVideoEncoderSettings&  settings0, bool*  continuous1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedResolutions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QSize >" , "const QVideoEncoderSettings&" , "bool*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QList<QSize > returnValue;
      void* args[3] = {NULL, (void*)&settings0, (void*)&continuous1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedResolutions", methodInfo, result);
          } else {
            returnValue = *((QList<QSize >*)args[0]);
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
  return QList<QSize >();
}
QStringList  PythonQtShell_QVideoEncoderSettingsControl::supportedVideoCodecs() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedVideoCodecs");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedVideoCodecs", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
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
  return QStringList();
}
void PythonQtShell_QVideoEncoderSettingsControl::timerEvent(QTimerEvent*  event0)
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
  QVideoEncoderSettingsControl::timerEvent(event0);
}
QString  PythonQtShell_QVideoEncoderSettingsControl::videoCodecDescription(const QString&  codec0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("videoCodecDescription");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
      void* args[2] = {NULL, (void*)&codec0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("videoCodecDescription", methodInfo, result);
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
}
  return QString();
}
QVideoEncoderSettings  PythonQtShell_QVideoEncoderSettingsControl::videoSettings() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("videoSettings");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVideoEncoderSettings"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVideoEncoderSettings returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("videoSettings", methodInfo, result);
          } else {
            returnValue = *((QVideoEncoderSettings*)args[0]);
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
  return QVideoEncoderSettings();
}
QVideoEncoderSettingsControl* PythonQtWrapper_QVideoEncoderSettingsControl::new_QVideoEncoderSettingsControl(QObject*  parent)
{ 
return new PythonQtShell_QVideoEncoderSettingsControl(parent); }

const QMetaObject* PythonQtShell_QVideoEncoderSettingsControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QVideoEncoderSettingsControl::staticMetaObject);
  } else {
    return &QVideoEncoderSettingsControl::staticMetaObject;
  }
}
int PythonQtShell_QVideoEncoderSettingsControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QVideoEncoderSettingsControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QVideoEncoderSettingsControl::setVideoSettings(QVideoEncoderSettingsControl* theWrappedObject, const QVideoEncoderSettings&  settings)
{
  ( theWrappedObject->setVideoSettings(settings));
}

QList<qreal >  PythonQtWrapper_QVideoEncoderSettingsControl::supportedFrameRates(QVideoEncoderSettingsControl* theWrappedObject, const QVideoEncoderSettings&  settings, bool*  continuous) const
{
  return ( theWrappedObject->supportedFrameRates(settings, continuous));
}

QList<QSize >  PythonQtWrapper_QVideoEncoderSettingsControl::supportedResolutions(QVideoEncoderSettingsControl* theWrappedObject, const QVideoEncoderSettings&  settings, bool*  continuous) const
{
  return ( theWrappedObject->supportedResolutions(settings, continuous));
}

QStringList  PythonQtWrapper_QVideoEncoderSettingsControl::supportedVideoCodecs(QVideoEncoderSettingsControl* theWrappedObject) const
{
  return ( theWrappedObject->supportedVideoCodecs());
}

QString  PythonQtWrapper_QVideoEncoderSettingsControl::videoCodecDescription(QVideoEncoderSettingsControl* theWrappedObject, const QString&  codec) const
{
  return ( theWrappedObject->videoCodecDescription(codec));
}

QVideoEncoderSettings  PythonQtWrapper_QVideoEncoderSettingsControl::videoSettings(QVideoEncoderSettingsControl* theWrappedObject) const
{
  return ( theWrappedObject->videoSettings());
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

uchar*  PythonQtWrapper_QVideoFrame::bits(QVideoFrame* theWrappedObject, int  plane)
{
  return ( theWrappedObject->bits(plane));
}

const uchar*  PythonQtWrapper_QVideoFrame::bits(QVideoFrame* theWrappedObject, int  plane) const
{
  return ( theWrappedObject->bits(plane));
}

int  PythonQtWrapper_QVideoFrame::bytesPerLine(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->bytesPerLine());
}

int  PythonQtWrapper_QVideoFrame::bytesPerLine(QVideoFrame* theWrappedObject, int  plane) const
{
  return ( theWrappedObject->bytesPerLine(plane));
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

bool  PythonQtWrapper_QVideoFrame::__ne__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QVideoFrame*  PythonQtWrapper_QVideoFrame::operator_assign(QVideoFrame* theWrappedObject, const QVideoFrame&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QVideoFrame::__eq__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const
{
  return ( (*theWrappedObject)== other);
}

QVideoFrame::PixelFormat  PythonQtWrapper_QVideoFrame::pixelFormat(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->pixelFormat());
}

QVideoFrame::PixelFormat  PythonQtWrapper_QVideoFrame::static_QVideoFrame_pixelFormatFromImageFormat(QImage::Format  format)
{
  return (QVideoFrame::pixelFormatFromImageFormat(format));
}

int  PythonQtWrapper_QVideoFrame::planeCount(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->planeCount());
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
void PythonQtShell_QVideoProbe::childEvent(QChildEvent*  event0)
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
  QVideoProbe::childEvent(event0);
}
void PythonQtShell_QVideoProbe::customEvent(QEvent*  event0)
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
  QVideoProbe::customEvent(event0);
}
bool  PythonQtShell_QVideoProbe::event(QEvent*  event0)
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
  return QVideoProbe::event(event0);
}
bool  PythonQtShell_QVideoProbe::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QVideoProbe::eventFilter(watched0, event1);
}
void PythonQtShell_QVideoProbe::timerEvent(QTimerEvent*  event0)
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
  QVideoProbe::timerEvent(event0);
}
QVideoProbe* PythonQtWrapper_QVideoProbe::new_QVideoProbe(QObject*  parent)
{ 
return new PythonQtShell_QVideoProbe(parent); }

const QMetaObject* PythonQtShell_QVideoProbe::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QVideoProbe::staticMetaObject);
  } else {
    return &QVideoProbe::staticMetaObject;
  }
}
int PythonQtShell_QVideoProbe::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QVideoProbe::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
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


