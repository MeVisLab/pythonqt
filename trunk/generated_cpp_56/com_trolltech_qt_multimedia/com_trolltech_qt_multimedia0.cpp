#include "com_trolltech_qt_multimedia0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include <qabstractvideosurface.h>
#include <qaudiobuffer.h>
#include <qaudiodecoder.h>
#include <qaudiodeviceinfo.h>
#include <qaudioformat.h>
#include <qaudioinput.h>
#include <qaudiooutput.h>
#include <qaudiorecorder.h>
#include <qaudiosystem.h>
#include <qbytearray.h>
#include <qcamera.h>
#include <qcameraexposure.h>
#include <qcamerafocus.h>
#include <qcameraimageprocessing.h>
#include <qcamerainfo.h>
#include <qcameraviewfindersettings.h>
#include <qcoreevent.h>
#include <qgraphicsvideoitem.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmediaencodersettings.h>
#include <qmediaobject.h>
#include <qmediarecorder.h>
#include <qmediaservice.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpoint.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvideoframe.h>
#include <qvideosurfaceformat.h>
#include <qvideowidget.h>

PythonQtShell_QAbstractAudioDeviceInfo::~PythonQtShell_QAbstractAudioDeviceInfo() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAbstractAudioDeviceInfo::childEvent(QChildEvent*  event0)
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
  QAbstractAudioDeviceInfo::childEvent(event0);
}
void PythonQtShell_QAbstractAudioDeviceInfo::customEvent(QEvent*  event0)
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
  QAbstractAudioDeviceInfo::customEvent(event0);
}
QString  PythonQtShell_QAbstractAudioDeviceInfo::deviceName() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("deviceName");
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
bool  PythonQtShell_QAbstractAudioDeviceInfo::event(QEvent*  event0)
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
  return QAbstractAudioDeviceInfo::event(event0);
}
bool  PythonQtShell_QAbstractAudioDeviceInfo::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractAudioDeviceInfo::eventFilter(watched0, event1);
}
bool  PythonQtShell_QAbstractAudioDeviceInfo::isFormatSupported(const QAudioFormat&  format0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isFormatSupported");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QAudioFormat&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&format0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isFormatSupported", methodInfo, result);
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
QAudioFormat  PythonQtShell_QAbstractAudioDeviceInfo::preferredFormat() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("preferredFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudioFormat"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudioFormat returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("preferredFormat", methodInfo, result);
          } else {
            returnValue = *((QAudioFormat*)args[0]);
          }
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
  return QAudioFormat();
}
QList<QAudioFormat::Endian >  PythonQtShell_QAbstractAudioDeviceInfo::supportedByteOrders()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedByteOrders");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QAudioFormat::Endian >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QAudioFormat::Endian > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedByteOrders", methodInfo, result);
          } else {
            returnValue = *((QList<QAudioFormat::Endian >*)args[0]);
          }
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
  return QList<QAudioFormat::Endian >();
}
QList<int >  PythonQtShell_QAbstractAudioDeviceInfo::supportedChannelCounts()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedChannelCounts");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<int >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<int > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedChannelCounts", methodInfo, result);
          } else {
            returnValue = *((QList<int >*)args[0]);
          }
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
  return QList<int >();
}
QStringList  PythonQtShell_QAbstractAudioDeviceInfo::supportedCodecs()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedCodecs");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedCodecs", methodInfo, result);
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
QList<int >  PythonQtShell_QAbstractAudioDeviceInfo::supportedSampleRates()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedSampleRates");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<int >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<int > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedSampleRates", methodInfo, result);
          } else {
            returnValue = *((QList<int >*)args[0]);
          }
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
  return QList<int >();
}
QList<int >  PythonQtShell_QAbstractAudioDeviceInfo::supportedSampleSizes()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedSampleSizes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<int >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<int > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedSampleSizes", methodInfo, result);
          } else {
            returnValue = *((QList<int >*)args[0]);
          }
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
  return QList<int >();
}
QList<QAudioFormat::SampleType >  PythonQtShell_QAbstractAudioDeviceInfo::supportedSampleTypes()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedSampleTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QAudioFormat::SampleType >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QAudioFormat::SampleType > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedSampleTypes", methodInfo, result);
          } else {
            returnValue = *((QList<QAudioFormat::SampleType >*)args[0]);
          }
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
  return QList<QAudioFormat::SampleType >();
}
void PythonQtShell_QAbstractAudioDeviceInfo::timerEvent(QTimerEvent*  event0)
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
  QAbstractAudioDeviceInfo::timerEvent(event0);
}
QAbstractAudioDeviceInfo* PythonQtWrapper_QAbstractAudioDeviceInfo::new_QAbstractAudioDeviceInfo()
{ 
return new PythonQtShell_QAbstractAudioDeviceInfo(); }

const QMetaObject* PythonQtShell_QAbstractAudioDeviceInfo::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractAudioDeviceInfo::staticMetaObject);
  } else {
    return &QAbstractAudioDeviceInfo::staticMetaObject;
  }
}
int PythonQtShell_QAbstractAudioDeviceInfo::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractAudioDeviceInfo::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QAbstractAudioDeviceInfo::deviceName(QAbstractAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->deviceName());
}

bool  PythonQtWrapper_QAbstractAudioDeviceInfo::isFormatSupported(QAbstractAudioDeviceInfo* theWrappedObject, const QAudioFormat&  format) const
{
  return ( theWrappedObject->isFormatSupported(format));
}

QAudioFormat  PythonQtWrapper_QAbstractAudioDeviceInfo::preferredFormat(QAbstractAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->preferredFormat());
}

QList<QAudioFormat::Endian >  PythonQtWrapper_QAbstractAudioDeviceInfo::supportedByteOrders(QAbstractAudioDeviceInfo* theWrappedObject)
{
  return ( theWrappedObject->supportedByteOrders());
}

QList<int >  PythonQtWrapper_QAbstractAudioDeviceInfo::supportedChannelCounts(QAbstractAudioDeviceInfo* theWrappedObject)
{
  return ( theWrappedObject->supportedChannelCounts());
}

QStringList  PythonQtWrapper_QAbstractAudioDeviceInfo::supportedCodecs(QAbstractAudioDeviceInfo* theWrappedObject)
{
  return ( theWrappedObject->supportedCodecs());
}

QList<int >  PythonQtWrapper_QAbstractAudioDeviceInfo::supportedSampleRates(QAbstractAudioDeviceInfo* theWrappedObject)
{
  return ( theWrappedObject->supportedSampleRates());
}

QList<int >  PythonQtWrapper_QAbstractAudioDeviceInfo::supportedSampleSizes(QAbstractAudioDeviceInfo* theWrappedObject)
{
  return ( theWrappedObject->supportedSampleSizes());
}

QList<QAudioFormat::SampleType >  PythonQtWrapper_QAbstractAudioDeviceInfo::supportedSampleTypes(QAbstractAudioDeviceInfo* theWrappedObject)
{
  return ( theWrappedObject->supportedSampleTypes());
}



PythonQtShell_QAbstractAudioInput::~PythonQtShell_QAbstractAudioInput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QAbstractAudioInput::bufferSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bufferSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("bufferSize", methodInfo, result);
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
int  PythonQtShell_QAbstractAudioInput::bytesReady() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesReady");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesReady", methodInfo, result);
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
void PythonQtShell_QAbstractAudioInput::childEvent(QChildEvent*  event0)
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
  QAbstractAudioInput::childEvent(event0);
}
void PythonQtShell_QAbstractAudioInput::customEvent(QEvent*  event0)
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
  QAbstractAudioInput::customEvent(event0);
}
qint64  PythonQtShell_QAbstractAudioInput::elapsedUSecs() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("elapsedUSecs");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("elapsedUSecs", methodInfo, result);
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
QAudio::Error  PythonQtShell_QAbstractAudioInput::error() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("error");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudio::Error"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudio::Error returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("error", methodInfo, result);
          } else {
            returnValue = *((QAudio::Error*)args[0]);
          }
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
  return QAudio::Error();
}
bool  PythonQtShell_QAbstractAudioInput::event(QEvent*  event0)
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
  return QAbstractAudioInput::event(event0);
}
bool  PythonQtShell_QAbstractAudioInput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractAudioInput::eventFilter(watched0, event1);
}
QAudioFormat  PythonQtShell_QAbstractAudioInput::format() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("format");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudioFormat"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudioFormat returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("format", methodInfo, result);
          } else {
            returnValue = *((QAudioFormat*)args[0]);
          }
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
  return QAudioFormat();
}
int  PythonQtShell_QAbstractAudioInput::notifyInterval() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("notifyInterval");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("notifyInterval", methodInfo, result);
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
int  PythonQtShell_QAbstractAudioInput::periodSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("periodSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("periodSize", methodInfo, result);
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
qint64  PythonQtShell_QAbstractAudioInput::processedUSecs() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("processedUSecs");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("processedUSecs", methodInfo, result);
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
void PythonQtShell_QAbstractAudioInput::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
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
void PythonQtShell_QAbstractAudioInput::resume()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resume");
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
void PythonQtShell_QAbstractAudioInput::setBufferSize(int  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setBufferSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&value0};
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
void PythonQtShell_QAbstractAudioInput::setFormat(const QAudioFormat&  fmt0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QAudioFormat&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&fmt0};
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
void PythonQtShell_QAbstractAudioInput::setNotifyInterval(int  milliSeconds0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setNotifyInterval");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&milliSeconds0};
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
void PythonQtShell_QAbstractAudioInput::setVolume(qreal  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVolume");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qreal"};
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
  
}
QIODevice*  PythonQtShell_QAbstractAudioInput::start()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("start");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QIODevice* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("start", methodInfo, result);
          } else {
            returnValue = *((QIODevice**)args[0]);
          }
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
void PythonQtShell_QAbstractAudioInput::start(QIODevice*  device0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("start");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&device0};
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
QAudio::State  PythonQtShell_QAbstractAudioInput::state() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("state");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudio::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudio::State returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("state", methodInfo, result);
          } else {
            returnValue = *((QAudio::State*)args[0]);
          }
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
  return QAudio::State();
}
void PythonQtShell_QAbstractAudioInput::stop()
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
void PythonQtShell_QAbstractAudioInput::suspend()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("suspend");
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
void PythonQtShell_QAbstractAudioInput::timerEvent(QTimerEvent*  event0)
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
  QAbstractAudioInput::timerEvent(event0);
}
qreal  PythonQtShell_QAbstractAudioInput::volume() const
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
QAbstractAudioInput* PythonQtWrapper_QAbstractAudioInput::new_QAbstractAudioInput()
{ 
return new PythonQtShell_QAbstractAudioInput(); }

const QMetaObject* PythonQtShell_QAbstractAudioInput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractAudioInput::staticMetaObject);
  } else {
    return &QAbstractAudioInput::staticMetaObject;
  }
}
int PythonQtShell_QAbstractAudioInput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractAudioInput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QAbstractAudioInput::bufferSize(QAbstractAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->bufferSize());
}

int  PythonQtWrapper_QAbstractAudioInput::bytesReady(QAbstractAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->bytesReady());
}

qint64  PythonQtWrapper_QAbstractAudioInput::elapsedUSecs(QAbstractAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->elapsedUSecs());
}

QAudio::Error  PythonQtWrapper_QAbstractAudioInput::error(QAbstractAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QAudioFormat  PythonQtWrapper_QAbstractAudioInput::format(QAbstractAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QAbstractAudioInput::notifyInterval(QAbstractAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->notifyInterval());
}

int  PythonQtWrapper_QAbstractAudioInput::periodSize(QAbstractAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->periodSize());
}

qint64  PythonQtWrapper_QAbstractAudioInput::processedUSecs(QAbstractAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->processedUSecs());
}

void PythonQtWrapper_QAbstractAudioInput::reset(QAbstractAudioInput* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QAbstractAudioInput::resume(QAbstractAudioInput* theWrappedObject)
{
  ( theWrappedObject->resume());
}

void PythonQtWrapper_QAbstractAudioInput::setBufferSize(QAbstractAudioInput* theWrappedObject, int  value)
{
  ( theWrappedObject->setBufferSize(value));
}

void PythonQtWrapper_QAbstractAudioInput::setFormat(QAbstractAudioInput* theWrappedObject, const QAudioFormat&  fmt)
{
  ( theWrappedObject->setFormat(fmt));
}

void PythonQtWrapper_QAbstractAudioInput::setNotifyInterval(QAbstractAudioInput* theWrappedObject, int  milliSeconds)
{
  ( theWrappedObject->setNotifyInterval(milliSeconds));
}

void PythonQtWrapper_QAbstractAudioInput::setVolume(QAbstractAudioInput* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setVolume(arg__1));
}

QIODevice*  PythonQtWrapper_QAbstractAudioInput::start(QAbstractAudioInput* theWrappedObject)
{
  return ( theWrappedObject->start());
}

void PythonQtWrapper_QAbstractAudioInput::start(QAbstractAudioInput* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->start(device));
}

QAudio::State  PythonQtWrapper_QAbstractAudioInput::state(QAbstractAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAbstractAudioInput::stop(QAbstractAudioInput* theWrappedObject)
{
  ( theWrappedObject->stop());
}

void PythonQtWrapper_QAbstractAudioInput::suspend(QAbstractAudioInput* theWrappedObject)
{
  ( theWrappedObject->suspend());
}

qreal  PythonQtWrapper_QAbstractAudioInput::volume(QAbstractAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QAbstractAudioOutput::~PythonQtShell_QAbstractAudioOutput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QAbstractAudioOutput::bufferSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bufferSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("bufferSize", methodInfo, result);
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
int  PythonQtShell_QAbstractAudioOutput::bytesFree() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesFree");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesFree", methodInfo, result);
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
QString  PythonQtShell_QAbstractAudioOutput::category() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("category");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("category", methodInfo, result);
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
  return QAbstractAudioOutput::category();
}
void PythonQtShell_QAbstractAudioOutput::childEvent(QChildEvent*  event0)
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
  QAbstractAudioOutput::childEvent(event0);
}
void PythonQtShell_QAbstractAudioOutput::customEvent(QEvent*  event0)
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
  QAbstractAudioOutput::customEvent(event0);
}
qint64  PythonQtShell_QAbstractAudioOutput::elapsedUSecs() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("elapsedUSecs");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("elapsedUSecs", methodInfo, result);
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
QAudio::Error  PythonQtShell_QAbstractAudioOutput::error() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("error");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudio::Error"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudio::Error returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("error", methodInfo, result);
          } else {
            returnValue = *((QAudio::Error*)args[0]);
          }
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
  return QAudio::Error();
}
bool  PythonQtShell_QAbstractAudioOutput::event(QEvent*  event0)
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
  return QAbstractAudioOutput::event(event0);
}
bool  PythonQtShell_QAbstractAudioOutput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractAudioOutput::eventFilter(watched0, event1);
}
QAudioFormat  PythonQtShell_QAbstractAudioOutput::format() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("format");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudioFormat"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudioFormat returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("format", methodInfo, result);
          } else {
            returnValue = *((QAudioFormat*)args[0]);
          }
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
  return QAudioFormat();
}
int  PythonQtShell_QAbstractAudioOutput::notifyInterval() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("notifyInterval");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("notifyInterval", methodInfo, result);
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
int  PythonQtShell_QAbstractAudioOutput::periodSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("periodSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("periodSize", methodInfo, result);
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
qint64  PythonQtShell_QAbstractAudioOutput::processedUSecs() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("processedUSecs");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("processedUSecs", methodInfo, result);
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
void PythonQtShell_QAbstractAudioOutput::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
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
void PythonQtShell_QAbstractAudioOutput::resume()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resume");
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
void PythonQtShell_QAbstractAudioOutput::setBufferSize(int  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setBufferSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&value0};
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
void PythonQtShell_QAbstractAudioOutput::setCategory(const QString&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setCategory");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&"};
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
  QAbstractAudioOutput::setCategory(arg__1);
}
void PythonQtShell_QAbstractAudioOutput::setFormat(const QAudioFormat&  fmt0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QAudioFormat&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&fmt0};
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
void PythonQtShell_QAbstractAudioOutput::setNotifyInterval(int  milliSeconds0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setNotifyInterval");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&milliSeconds0};
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
void PythonQtShell_QAbstractAudioOutput::setVolume(qreal  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVolume");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qreal"};
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
  QAbstractAudioOutput::setVolume(arg__1);
}
QIODevice*  PythonQtShell_QAbstractAudioOutput::start()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("start");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QIODevice* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("start", methodInfo, result);
          } else {
            returnValue = *((QIODevice**)args[0]);
          }
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
void PythonQtShell_QAbstractAudioOutput::start(QIODevice*  device0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("start");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&device0};
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
QAudio::State  PythonQtShell_QAbstractAudioOutput::state() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("state");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudio::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudio::State returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("state", methodInfo, result);
          } else {
            returnValue = *((QAudio::State*)args[0]);
          }
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
  return QAudio::State();
}
void PythonQtShell_QAbstractAudioOutput::stop()
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
void PythonQtShell_QAbstractAudioOutput::suspend()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("suspend");
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
void PythonQtShell_QAbstractAudioOutput::timerEvent(QTimerEvent*  event0)
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
  QAbstractAudioOutput::timerEvent(event0);
}
qreal  PythonQtShell_QAbstractAudioOutput::volume() const
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
  return QAbstractAudioOutput::volume();
}
QAbstractAudioOutput* PythonQtWrapper_QAbstractAudioOutput::new_QAbstractAudioOutput()
{ 
return new PythonQtShell_QAbstractAudioOutput(); }

const QMetaObject* PythonQtShell_QAbstractAudioOutput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractAudioOutput::staticMetaObject);
  } else {
    return &QAbstractAudioOutput::staticMetaObject;
  }
}
int PythonQtShell_QAbstractAudioOutput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractAudioOutput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QAbstractAudioOutput::bufferSize(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->bufferSize());
}

int  PythonQtWrapper_QAbstractAudioOutput::bytesFree(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->bytesFree());
}

QString  PythonQtWrapper_QAbstractAudioOutput::category(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->category());
}

qint64  PythonQtWrapper_QAbstractAudioOutput::elapsedUSecs(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->elapsedUSecs());
}

QAudio::Error  PythonQtWrapper_QAbstractAudioOutput::error(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QAudioFormat  PythonQtWrapper_QAbstractAudioOutput::format(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QAbstractAudioOutput::notifyInterval(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->notifyInterval());
}

int  PythonQtWrapper_QAbstractAudioOutput::periodSize(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->periodSize());
}

qint64  PythonQtWrapper_QAbstractAudioOutput::processedUSecs(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->processedUSecs());
}

void PythonQtWrapper_QAbstractAudioOutput::reset(QAbstractAudioOutput* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QAbstractAudioOutput::resume(QAbstractAudioOutput* theWrappedObject)
{
  ( theWrappedObject->resume());
}

void PythonQtWrapper_QAbstractAudioOutput::setBufferSize(QAbstractAudioOutput* theWrappedObject, int  value)
{
  ( theWrappedObject->setBufferSize(value));
}

void PythonQtWrapper_QAbstractAudioOutput::setCategory(QAbstractAudioOutput* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setCategory(arg__1));
}

void PythonQtWrapper_QAbstractAudioOutput::setFormat(QAbstractAudioOutput* theWrappedObject, const QAudioFormat&  fmt)
{
  ( theWrappedObject->setFormat(fmt));
}

void PythonQtWrapper_QAbstractAudioOutput::setNotifyInterval(QAbstractAudioOutput* theWrappedObject, int  milliSeconds)
{
  ( theWrappedObject->setNotifyInterval(milliSeconds));
}

void PythonQtWrapper_QAbstractAudioOutput::setVolume(QAbstractAudioOutput* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setVolume(arg__1));
}

QIODevice*  PythonQtWrapper_QAbstractAudioOutput::start(QAbstractAudioOutput* theWrappedObject)
{
  return ( theWrappedObject->start());
}

void PythonQtWrapper_QAbstractAudioOutput::start(QAbstractAudioOutput* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->start(device));
}

QAudio::State  PythonQtWrapper_QAbstractAudioOutput::state(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAbstractAudioOutput::stop(QAbstractAudioOutput* theWrappedObject)
{
  ( theWrappedObject->stop());
}

void PythonQtWrapper_QAbstractAudioOutput::suspend(QAbstractAudioOutput* theWrappedObject)
{
  ( theWrappedObject->suspend());
}

qreal  PythonQtWrapper_QAbstractAudioOutput::volume(QAbstractAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QAbstractVideoBuffer::~PythonQtShell_QAbstractVideoBuffer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QVariant  PythonQtShell_QAbstractVideoBuffer::handle() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("handle");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVariant returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("handle", methodInfo, result);
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
  return QAbstractVideoBuffer::handle();
}
uchar*  PythonQtShell_QAbstractVideoBuffer::map(QAbstractVideoBuffer::MapMode  mode0, int*  numBytes1, int*  bytesPerLine2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("map");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"uchar*" , "QAbstractVideoBuffer::MapMode" , "int*" , "int*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      uchar* returnValue;
      void* args[4] = {NULL, (void*)&mode0, (void*)&numBytes1, (void*)&bytesPerLine2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("map", methodInfo, result);
          } else {
            returnValue = *((uchar**)args[0]);
          }
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
QAbstractVideoBuffer::MapMode  PythonQtShell_QAbstractVideoBuffer::mapMode() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mapMode");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAbstractVideoBuffer::MapMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAbstractVideoBuffer::MapMode returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mapMode", methodInfo, result);
          } else {
            returnValue = *((QAbstractVideoBuffer::MapMode*)args[0]);
          }
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
  return QAbstractVideoBuffer::MapMode();
}
void PythonQtShell_QAbstractVideoBuffer::release()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("release");
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
  QAbstractVideoBuffer::release();
}
void PythonQtShell_QAbstractVideoBuffer::unmap()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("unmap");
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
QAbstractVideoBuffer* PythonQtWrapper_QAbstractVideoBuffer::new_QAbstractVideoBuffer(QAbstractVideoBuffer::HandleType  type)
{ 
return new PythonQtShell_QAbstractVideoBuffer(type); }

QVariant  PythonQtWrapper_QAbstractVideoBuffer::handle(QAbstractVideoBuffer* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

QAbstractVideoBuffer::HandleType  PythonQtWrapper_QAbstractVideoBuffer::handleType(QAbstractVideoBuffer* theWrappedObject) const
{
  return ( theWrappedObject->handleType());
}

uchar*  PythonQtWrapper_QAbstractVideoBuffer::map(QAbstractVideoBuffer* theWrappedObject, QAbstractVideoBuffer::MapMode  mode, int*  numBytes, int*  bytesPerLine)
{
  return ( theWrappedObject->map(mode, numBytes, bytesPerLine));
}

QAbstractVideoBuffer::MapMode  PythonQtWrapper_QAbstractVideoBuffer::mapMode(QAbstractVideoBuffer* theWrappedObject) const
{
  return ( theWrappedObject->mapMode());
}

void PythonQtWrapper_QAbstractVideoBuffer::release(QAbstractVideoBuffer* theWrappedObject)
{
  ( theWrappedObject->release());
}

void PythonQtWrapper_QAbstractVideoBuffer::unmap(QAbstractVideoBuffer* theWrappedObject)
{
  ( theWrappedObject->unmap());
}



PythonQtShell_QAbstractVideoSurface::~PythonQtShell_QAbstractVideoSurface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAbstractVideoSurface::childEvent(QChildEvent*  event0)
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
  QAbstractVideoSurface::childEvent(event0);
}
void PythonQtShell_QAbstractVideoSurface::customEvent(QEvent*  event0)
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
  QAbstractVideoSurface::customEvent(event0);
}
bool  PythonQtShell_QAbstractVideoSurface::event(QEvent*  event0)
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
  return QAbstractVideoSurface::event(event0);
}
bool  PythonQtShell_QAbstractVideoSurface::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractVideoSurface::eventFilter(watched0, event1);
}
bool  PythonQtShell_QAbstractVideoSurface::isFormatSupported(const QVideoSurfaceFormat&  format0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isFormatSupported");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QVideoSurfaceFormat&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&format0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isFormatSupported", methodInfo, result);
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
  return QAbstractVideoSurface::isFormatSupported(format0);
}
QVideoSurfaceFormat  PythonQtShell_QAbstractVideoSurface::nearestFormat(const QVideoSurfaceFormat&  format0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nearestFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVideoSurfaceFormat" , "const QVideoSurfaceFormat&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVideoSurfaceFormat returnValue;
      void* args[2] = {NULL, (void*)&format0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("nearestFormat", methodInfo, result);
          } else {
            returnValue = *((QVideoSurfaceFormat*)args[0]);
          }
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
  return QAbstractVideoSurface::nearestFormat(format0);
}
bool  PythonQtShell_QAbstractVideoSurface::present(const QVideoFrame&  frame0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("present");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QVideoFrame&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&frame0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("present", methodInfo, result);
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
bool  PythonQtShell_QAbstractVideoSurface::start(const QVideoSurfaceFormat&  format0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("start");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QVideoSurfaceFormat&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&format0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("start", methodInfo, result);
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
  return QAbstractVideoSurface::start(format0);
}
void PythonQtShell_QAbstractVideoSurface::stop()
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
  QAbstractVideoSurface::stop();
}
QList<QVideoFrame::PixelFormat >  PythonQtShell_QAbstractVideoSurface::supportedPixelFormats(QAbstractVideoBuffer::HandleType  handleType0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedPixelFormats");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QVideoFrame::PixelFormat >" , "QAbstractVideoBuffer::HandleType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QVideoFrame::PixelFormat > returnValue;
      void* args[2] = {NULL, (void*)&handleType0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedPixelFormats", methodInfo, result);
          } else {
            returnValue = *((QList<QVideoFrame::PixelFormat >*)args[0]);
          }
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
  return QList<QVideoFrame::PixelFormat >();
}
void PythonQtShell_QAbstractVideoSurface::timerEvent(QTimerEvent*  event0)
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
  QAbstractVideoSurface::timerEvent(event0);
}
QAbstractVideoSurface* PythonQtWrapper_QAbstractVideoSurface::new_QAbstractVideoSurface(QObject*  parent)
{ 
return new PythonQtShell_QAbstractVideoSurface(parent); }

const QMetaObject* PythonQtShell_QAbstractVideoSurface::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractVideoSurface::staticMetaObject);
  } else {
    return &QAbstractVideoSurface::staticMetaObject;
  }
}
int PythonQtShell_QAbstractVideoSurface::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractVideoSurface::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAbstractVideoSurface::Error  PythonQtWrapper_QAbstractVideoSurface::error(QAbstractVideoSurface* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QAbstractVideoSurface::isActive(QAbstractVideoSurface* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QAbstractVideoSurface::isFormatSupported(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format) const
{
  return ( theWrappedObject->isFormatSupported(format));
}

QSize  PythonQtWrapper_QAbstractVideoSurface::nativeResolution(QAbstractVideoSurface* theWrappedObject) const
{
  return ( theWrappedObject->nativeResolution());
}

QVideoSurfaceFormat  PythonQtWrapper_QAbstractVideoSurface::nearestFormat(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format) const
{
  return ( theWrappedObject->nearestFormat(format));
}

bool  PythonQtWrapper_QAbstractVideoSurface::present(QAbstractVideoSurface* theWrappedObject, const QVideoFrame&  frame)
{
  return ( theWrappedObject->present(frame));
}

void PythonQtWrapper_QAbstractVideoSurface::setError(QAbstractVideoSurface* theWrappedObject, QAbstractVideoSurface::Error  error)
{
  ( ((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->promoted_setError(error));
}

void PythonQtWrapper_QAbstractVideoSurface::setNativeResolution(QAbstractVideoSurface* theWrappedObject, const QSize&  resolution)
{
  ( ((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->promoted_setNativeResolution(resolution));
}

bool  PythonQtWrapper_QAbstractVideoSurface::start(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format)
{
  return ( theWrappedObject->start(format));
}

void PythonQtWrapper_QAbstractVideoSurface::stop(QAbstractVideoSurface* theWrappedObject)
{
  ( theWrappedObject->stop());
}

QList<QVideoFrame::PixelFormat >  PythonQtWrapper_QAbstractVideoSurface::supportedPixelFormats(QAbstractVideoSurface* theWrappedObject, QAbstractVideoBuffer::HandleType  handleType) const
{
  return ( theWrappedObject->supportedPixelFormats(handleType));
}

QVideoSurfaceFormat  PythonQtWrapper_QAbstractVideoSurface::surfaceFormat(QAbstractVideoSurface* theWrappedObject) const
{
  return ( theWrappedObject->surfaceFormat());
}





QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer()
{ 
return new QAudioBuffer(); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(const QAudioBuffer&  other)
{ 
return new QAudioBuffer(other); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(const QByteArray&  data, const QAudioFormat&  format, qint64  startTime)
{ 
return new QAudioBuffer(data, format, startTime); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(int  numFrames, const QAudioFormat&  format, qint64  startTime)
{ 
return new QAudioBuffer(numFrames, format, startTime); }

int  PythonQtWrapper_QAudioBuffer::byteCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->byteCount());
}

const void*  PythonQtWrapper_QAudioBuffer::constData(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->constData());
}

void*  PythonQtWrapper_QAudioBuffer::data(QAudioBuffer* theWrappedObject)
{
  return ( theWrappedObject->data());
}

const void*  PythonQtWrapper_QAudioBuffer::data(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

qint64  PythonQtWrapper_QAudioBuffer::duration(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QAudioFormat  PythonQtWrapper_QAudioBuffer::format(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QAudioBuffer::frameCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->frameCount());
}

bool  PythonQtWrapper_QAudioBuffer::isValid(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QAudioBuffer*  PythonQtWrapper_QAudioBuffer::operator_assign(QAudioBuffer* theWrappedObject, const QAudioBuffer&  other)
{
  return &( (*theWrappedObject)= other);
}

int  PythonQtWrapper_QAudioBuffer::sampleCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->sampleCount());
}

qint64  PythonQtWrapper_QAudioBuffer::startTime(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->startTime());
}



PythonQtShell_QAudioDecoder::~PythonQtShell_QAudioDecoder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMultimedia::AvailabilityStatus  PythonQtShell_QAudioDecoder::availability() const
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
  return QAudioDecoder::availability();
}
bool  PythonQtShell_QAudioDecoder::bind(QObject*  arg__1)
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
  return QAudioDecoder::bind(arg__1);
}
void PythonQtShell_QAudioDecoder::childEvent(QChildEvent*  event0)
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
  QAudioDecoder::childEvent(event0);
}
void PythonQtShell_QAudioDecoder::customEvent(QEvent*  event0)
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
  QAudioDecoder::customEvent(event0);
}
bool  PythonQtShell_QAudioDecoder::event(QEvent*  event0)
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
  return QAudioDecoder::event(event0);
}
bool  PythonQtShell_QAudioDecoder::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioDecoder::eventFilter(watched0, event1);
}
bool  PythonQtShell_QAudioDecoder::isAvailable() const
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
  return QAudioDecoder::isAvailable();
}
QMediaService*  PythonQtShell_QAudioDecoder::service() const
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
  return QAudioDecoder::service();
}
void PythonQtShell_QAudioDecoder::timerEvent(QTimerEvent*  event0)
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
  QAudioDecoder::timerEvent(event0);
}
void PythonQtShell_QAudioDecoder::unbind(QObject*  arg__1)
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
  QAudioDecoder::unbind(arg__1);
}
QAudioDecoder* PythonQtWrapper_QAudioDecoder::new_QAudioDecoder(QObject*  parent)
{ 
return new PythonQtShell_QAudioDecoder(parent); }

const QMetaObject* PythonQtShell_QAudioDecoder::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioDecoder::staticMetaObject);
  } else {
    return &QAudioDecoder::staticMetaObject;
  }
}
int PythonQtShell_QAudioDecoder::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioDecoder::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudioFormat  PythonQtWrapper_QAudioDecoder::audioFormat(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->audioFormat());
}

bool  PythonQtWrapper_QAudioDecoder::bufferAvailable(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->bufferAvailable());
}

qint64  PythonQtWrapper_QAudioDecoder::duration(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QAudioDecoder::Error  PythonQtWrapper_QAudioDecoder::error(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QAudioDecoder::errorString(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QMultimedia::SupportEstimate  PythonQtWrapper_QAudioDecoder::static_QAudioDecoder_hasSupport(const QString&  mimeType, const QStringList&  codecs)
{
  return (QAudioDecoder::hasSupport(mimeType, codecs));
}

qint64  PythonQtWrapper_QAudioDecoder::position(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QAudioBuffer  PythonQtWrapper_QAudioDecoder::read(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->read());
}

void PythonQtWrapper_QAudioDecoder::setAudioFormat(QAudioDecoder* theWrappedObject, const QAudioFormat&  format)
{
  ( theWrappedObject->setAudioFormat(format));
}

void PythonQtWrapper_QAudioDecoder::setSourceDevice(QAudioDecoder* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setSourceDevice(device));
}

void PythonQtWrapper_QAudioDecoder::setSourceFilename(QAudioDecoder* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setSourceFilename(fileName));
}

QIODevice*  PythonQtWrapper_QAudioDecoder::sourceDevice(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->sourceDevice());
}

QString  PythonQtWrapper_QAudioDecoder::sourceFilename(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->sourceFilename());
}

QAudioDecoder::State  PythonQtWrapper_QAudioDecoder::state(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->state());
}



PythonQtShell_QAudioDecoderControl::~PythonQtShell_QAudioDecoderControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QAudioFormat  PythonQtShell_QAudioDecoderControl::audioFormat() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("audioFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudioFormat"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudioFormat returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("audioFormat", methodInfo, result);
          } else {
            returnValue = *((QAudioFormat*)args[0]);
          }
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
  return QAudioFormat();
}
bool  PythonQtShell_QAudioDecoderControl::bufferAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bufferAvailable");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("bufferAvailable", methodInfo, result);
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
void PythonQtShell_QAudioDecoderControl::childEvent(QChildEvent*  event0)
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
  QAudioDecoderControl::childEvent(event0);
}
void PythonQtShell_QAudioDecoderControl::customEvent(QEvent*  event0)
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
  QAudioDecoderControl::customEvent(event0);
}
qint64  PythonQtShell_QAudioDecoderControl::duration() const
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
bool  PythonQtShell_QAudioDecoderControl::event(QEvent*  event0)
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
  return QAudioDecoderControl::event(event0);
}
bool  PythonQtShell_QAudioDecoderControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioDecoderControl::eventFilter(watched0, event1);
}
qint64  PythonQtShell_QAudioDecoderControl::position() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("position");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("position", methodInfo, result);
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
QAudioBuffer  PythonQtShell_QAudioDecoderControl::read()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("read");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudioBuffer"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudioBuffer returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("read", methodInfo, result);
          } else {
            returnValue = *((QAudioBuffer*)args[0]);
          }
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
  return QAudioBuffer();
}
void PythonQtShell_QAudioDecoderControl::setAudioFormat(const QAudioFormat&  format0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setAudioFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QAudioFormat&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&format0};
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
void PythonQtShell_QAudioDecoderControl::setSourceDevice(QIODevice*  device0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setSourceDevice");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&device0};
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
void PythonQtShell_QAudioDecoderControl::setSourceFilename(const QString&  fileName0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setSourceFilename");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&fileName0};
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
QIODevice*  PythonQtShell_QAudioDecoderControl::sourceDevice() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sourceDevice");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QIODevice* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sourceDevice", methodInfo, result);
          } else {
            returnValue = *((QIODevice**)args[0]);
          }
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
QString  PythonQtShell_QAudioDecoderControl::sourceFilename() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sourceFilename");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("sourceFilename", methodInfo, result);
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
void PythonQtShell_QAudioDecoderControl::start()
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
QAudioDecoder::State  PythonQtShell_QAudioDecoderControl::state() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("state");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudioDecoder::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudioDecoder::State returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("state", methodInfo, result);
          } else {
            returnValue = *((QAudioDecoder::State*)args[0]);
          }
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
  return QAudioDecoder::State();
}
void PythonQtShell_QAudioDecoderControl::stop()
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
void PythonQtShell_QAudioDecoderControl::timerEvent(QTimerEvent*  event0)
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
  QAudioDecoderControl::timerEvent(event0);
}
QAudioDecoderControl* PythonQtWrapper_QAudioDecoderControl::new_QAudioDecoderControl(QObject*  parent)
{ 
return new PythonQtShell_QAudioDecoderControl(parent); }

const QMetaObject* PythonQtShell_QAudioDecoderControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioDecoderControl::staticMetaObject);
  } else {
    return &QAudioDecoderControl::staticMetaObject;
  }
}
int PythonQtShell_QAudioDecoderControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioDecoderControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudioFormat  PythonQtWrapper_QAudioDecoderControl::audioFormat(QAudioDecoderControl* theWrappedObject) const
{
  return ( theWrappedObject->audioFormat());
}

bool  PythonQtWrapper_QAudioDecoderControl::bufferAvailable(QAudioDecoderControl* theWrappedObject) const
{
  return ( theWrappedObject->bufferAvailable());
}

qint64  PythonQtWrapper_QAudioDecoderControl::duration(QAudioDecoderControl* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

qint64  PythonQtWrapper_QAudioDecoderControl::position(QAudioDecoderControl* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QAudioBuffer  PythonQtWrapper_QAudioDecoderControl::read(QAudioDecoderControl* theWrappedObject)
{
  return ( theWrappedObject->read());
}

void PythonQtWrapper_QAudioDecoderControl::setAudioFormat(QAudioDecoderControl* theWrappedObject, const QAudioFormat&  format)
{
  ( theWrappedObject->setAudioFormat(format));
}

void PythonQtWrapper_QAudioDecoderControl::setSourceDevice(QAudioDecoderControl* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setSourceDevice(device));
}

void PythonQtWrapper_QAudioDecoderControl::setSourceFilename(QAudioDecoderControl* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setSourceFilename(fileName));
}

QIODevice*  PythonQtWrapper_QAudioDecoderControl::sourceDevice(QAudioDecoderControl* theWrappedObject) const
{
  return ( theWrappedObject->sourceDevice());
}

QString  PythonQtWrapper_QAudioDecoderControl::sourceFilename(QAudioDecoderControl* theWrappedObject) const
{
  return ( theWrappedObject->sourceFilename());
}

void PythonQtWrapper_QAudioDecoderControl::start(QAudioDecoderControl* theWrappedObject)
{
  ( theWrappedObject->start());
}

QAudioDecoder::State  PythonQtWrapper_QAudioDecoderControl::state(QAudioDecoderControl* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAudioDecoderControl::stop(QAudioDecoderControl* theWrappedObject)
{
  ( theWrappedObject->stop());
}



QAudioDeviceInfo* PythonQtWrapper_QAudioDeviceInfo::new_QAudioDeviceInfo()
{ 
return new QAudioDeviceInfo(); }

QAudioDeviceInfo* PythonQtWrapper_QAudioDeviceInfo::new_QAudioDeviceInfo(const QAudioDeviceInfo&  other)
{ 
return new QAudioDeviceInfo(other); }

QList<QAudioDeviceInfo >  PythonQtWrapper_QAudioDeviceInfo::static_QAudioDeviceInfo_availableDevices(QAudio::Mode  mode)
{
  return (QAudioDeviceInfo::availableDevices(mode));
}

QAudioDeviceInfo  PythonQtWrapper_QAudioDeviceInfo::static_QAudioDeviceInfo_defaultInputDevice()
{
  return (QAudioDeviceInfo::defaultInputDevice());
}

QAudioDeviceInfo  PythonQtWrapper_QAudioDeviceInfo::static_QAudioDeviceInfo_defaultOutputDevice()
{
  return (QAudioDeviceInfo::defaultOutputDevice());
}

QString  PythonQtWrapper_QAudioDeviceInfo::deviceName(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->deviceName());
}

bool  PythonQtWrapper_QAudioDeviceInfo::isFormatSupported(QAudioDeviceInfo* theWrappedObject, const QAudioFormat&  format) const
{
  return ( theWrappedObject->isFormatSupported(format));
}

bool  PythonQtWrapper_QAudioDeviceInfo::isNull(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QAudioFormat  PythonQtWrapper_QAudioDeviceInfo::nearestFormat(QAudioDeviceInfo* theWrappedObject, const QAudioFormat&  format) const
{
  return ( theWrappedObject->nearestFormat(format));
}

bool  PythonQtWrapper_QAudioDeviceInfo::__ne__(QAudioDeviceInfo* theWrappedObject, const QAudioDeviceInfo&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QAudioDeviceInfo*  PythonQtWrapper_QAudioDeviceInfo::operator_assign(QAudioDeviceInfo* theWrappedObject, const QAudioDeviceInfo&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QAudioDeviceInfo::__eq__(QAudioDeviceInfo* theWrappedObject, const QAudioDeviceInfo&  other) const
{
  return ( (*theWrappedObject)== other);
}

QAudioFormat  PythonQtWrapper_QAudioDeviceInfo::preferredFormat(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->preferredFormat());
}

QList<QAudioFormat::Endian >  PythonQtWrapper_QAudioDeviceInfo::supportedByteOrders(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedByteOrders());
}

QList<int >  PythonQtWrapper_QAudioDeviceInfo::supportedChannelCounts(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedChannelCounts());
}

QStringList  PythonQtWrapper_QAudioDeviceInfo::supportedCodecs(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedCodecs());
}

QList<int >  PythonQtWrapper_QAudioDeviceInfo::supportedSampleRates(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedSampleRates());
}

QList<int >  PythonQtWrapper_QAudioDeviceInfo::supportedSampleSizes(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedSampleSizes());
}

QList<QAudioFormat::SampleType >  PythonQtWrapper_QAudioDeviceInfo::supportedSampleTypes(QAudioDeviceInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedSampleTypes());
}



QAudioEncoderSettings* PythonQtWrapper_QAudioEncoderSettings::new_QAudioEncoderSettings()
{ 
return new QAudioEncoderSettings(); }

QAudioEncoderSettings* PythonQtWrapper_QAudioEncoderSettings::new_QAudioEncoderSettings(const QAudioEncoderSettings&  other)
{ 
return new QAudioEncoderSettings(other); }

int  PythonQtWrapper_QAudioEncoderSettings::bitRate(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->bitRate());
}

int  PythonQtWrapper_QAudioEncoderSettings::channelCount(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->channelCount());
}

QString  PythonQtWrapper_QAudioEncoderSettings::codec(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QMultimedia::EncodingMode  PythonQtWrapper_QAudioEncoderSettings::encodingMode(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->encodingMode());
}

QVariant  PythonQtWrapper_QAudioEncoderSettings::encodingOption(QAudioEncoderSettings* theWrappedObject, const QString&  option) const
{
  return ( theWrappedObject->encodingOption(option));
}

QMap<QString , QVariant >  PythonQtWrapper_QAudioEncoderSettings::encodingOptions(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->encodingOptions());
}

bool  PythonQtWrapper_QAudioEncoderSettings::isNull(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QAudioEncoderSettings::__ne__(QAudioEncoderSettings* theWrappedObject, const QAudioEncoderSettings&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QAudioEncoderSettings*  PythonQtWrapper_QAudioEncoderSettings::operator_assign(QAudioEncoderSettings* theWrappedObject, const QAudioEncoderSettings&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QAudioEncoderSettings::__eq__(QAudioEncoderSettings* theWrappedObject, const QAudioEncoderSettings&  other) const
{
  return ( (*theWrappedObject)== other);
}

QMultimedia::EncodingQuality  PythonQtWrapper_QAudioEncoderSettings::quality(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->quality());
}

int  PythonQtWrapper_QAudioEncoderSettings::sampleRate(QAudioEncoderSettings* theWrappedObject) const
{
  return ( theWrappedObject->sampleRate());
}

void PythonQtWrapper_QAudioEncoderSettings::setBitRate(QAudioEncoderSettings* theWrappedObject, int  bitrate)
{
  ( theWrappedObject->setBitRate(bitrate));
}

void PythonQtWrapper_QAudioEncoderSettings::setChannelCount(QAudioEncoderSettings* theWrappedObject, int  channels)
{
  ( theWrappedObject->setChannelCount(channels));
}

void PythonQtWrapper_QAudioEncoderSettings::setCodec(QAudioEncoderSettings* theWrappedObject, const QString&  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QAudioEncoderSettings::setEncodingMode(QAudioEncoderSettings* theWrappedObject, QMultimedia::EncodingMode  arg__1)
{
  ( theWrappedObject->setEncodingMode(arg__1));
}

void PythonQtWrapper_QAudioEncoderSettings::setEncodingOption(QAudioEncoderSettings* theWrappedObject, const QString&  option, const QVariant&  value)
{
  ( theWrappedObject->setEncodingOption(option, value));
}

void PythonQtWrapper_QAudioEncoderSettings::setEncodingOptions(QAudioEncoderSettings* theWrappedObject, const QMap<QString , QVariant >&  options)
{
  ( theWrappedObject->setEncodingOptions(options));
}

void PythonQtWrapper_QAudioEncoderSettings::setQuality(QAudioEncoderSettings* theWrappedObject, QMultimedia::EncodingQuality  quality)
{
  ( theWrappedObject->setQuality(quality));
}

void PythonQtWrapper_QAudioEncoderSettings::setSampleRate(QAudioEncoderSettings* theWrappedObject, int  rate)
{
  ( theWrappedObject->setSampleRate(rate));
}



PythonQtShell_QAudioEncoderSettingsControl::~PythonQtShell_QAudioEncoderSettingsControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QAudioEncoderSettings  PythonQtShell_QAudioEncoderSettingsControl::audioSettings() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("audioSettings");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudioEncoderSettings"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudioEncoderSettings returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("audioSettings", methodInfo, result);
          } else {
            returnValue = *((QAudioEncoderSettings*)args[0]);
          }
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
  return QAudioEncoderSettings();
}
void PythonQtShell_QAudioEncoderSettingsControl::childEvent(QChildEvent*  event0)
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
  QAudioEncoderSettingsControl::childEvent(event0);
}
QString  PythonQtShell_QAudioEncoderSettingsControl::codecDescription(const QString&  codecName0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("codecDescription");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
      void* args[2] = {NULL, (void*)&codecName0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("codecDescription", methodInfo, result);
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
void PythonQtShell_QAudioEncoderSettingsControl::customEvent(QEvent*  event0)
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
  QAudioEncoderSettingsControl::customEvent(event0);
}
bool  PythonQtShell_QAudioEncoderSettingsControl::event(QEvent*  event0)
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
  return QAudioEncoderSettingsControl::event(event0);
}
bool  PythonQtShell_QAudioEncoderSettingsControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioEncoderSettingsControl::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioEncoderSettingsControl::setAudioSettings(const QAudioEncoderSettings&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setAudioSettings");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QAudioEncoderSettings&"};
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
  
}
QStringList  PythonQtShell_QAudioEncoderSettingsControl::supportedAudioCodecs() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedAudioCodecs");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedAudioCodecs", methodInfo, result);
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
QList<int >  PythonQtShell_QAudioEncoderSettingsControl::supportedSampleRates(const QAudioEncoderSettings&  settings0, bool*  continuous1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedSampleRates");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<int >" , "const QAudioEncoderSettings&" , "bool*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QList<int > returnValue;
      void* args[3] = {NULL, (void*)&settings0, (void*)&continuous1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedSampleRates", methodInfo, result);
          } else {
            returnValue = *((QList<int >*)args[0]);
          }
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
  return QList<int >();
}
void PythonQtShell_QAudioEncoderSettingsControl::timerEvent(QTimerEvent*  event0)
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
  QAudioEncoderSettingsControl::timerEvent(event0);
}
QAudioEncoderSettingsControl* PythonQtWrapper_QAudioEncoderSettingsControl::new_QAudioEncoderSettingsControl(QObject*  parent)
{ 
return new PythonQtShell_QAudioEncoderSettingsControl(parent); }

const QMetaObject* PythonQtShell_QAudioEncoderSettingsControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioEncoderSettingsControl::staticMetaObject);
  } else {
    return &QAudioEncoderSettingsControl::staticMetaObject;
  }
}
int PythonQtShell_QAudioEncoderSettingsControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioEncoderSettingsControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudioEncoderSettings  PythonQtWrapper_QAudioEncoderSettingsControl::audioSettings(QAudioEncoderSettingsControl* theWrappedObject) const
{
  return ( theWrappedObject->audioSettings());
}

QString  PythonQtWrapper_QAudioEncoderSettingsControl::codecDescription(QAudioEncoderSettingsControl* theWrappedObject, const QString&  codecName) const
{
  return ( theWrappedObject->codecDescription(codecName));
}

void PythonQtWrapper_QAudioEncoderSettingsControl::setAudioSettings(QAudioEncoderSettingsControl* theWrappedObject, const QAudioEncoderSettings&  arg__1)
{
  ( theWrappedObject->setAudioSettings(arg__1));
}

QStringList  PythonQtWrapper_QAudioEncoderSettingsControl::supportedAudioCodecs(QAudioEncoderSettingsControl* theWrappedObject) const
{
  return ( theWrappedObject->supportedAudioCodecs());
}

QList<int >  PythonQtWrapper_QAudioEncoderSettingsControl::supportedSampleRates(QAudioEncoderSettingsControl* theWrappedObject, const QAudioEncoderSettings&  settings, bool*  continuous) const
{
  return ( theWrappedObject->supportedSampleRates(settings, continuous));
}



QAudioFormat* PythonQtWrapper_QAudioFormat::new_QAudioFormat()
{ 
return new QAudioFormat(); }

QAudioFormat* PythonQtWrapper_QAudioFormat::new_QAudioFormat(const QAudioFormat&  other)
{ 
return new QAudioFormat(other); }

QAudioFormat::Endian  PythonQtWrapper_QAudioFormat::byteOrder(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->byteOrder());
}

int  PythonQtWrapper_QAudioFormat::bytesForDuration(QAudioFormat* theWrappedObject, qint64  duration) const
{
  return ( theWrappedObject->bytesForDuration(duration));
}

int  PythonQtWrapper_QAudioFormat::bytesForFrames(QAudioFormat* theWrappedObject, int  frameCount) const
{
  return ( theWrappedObject->bytesForFrames(frameCount));
}

int  PythonQtWrapper_QAudioFormat::bytesPerFrame(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->bytesPerFrame());
}

int  PythonQtWrapper_QAudioFormat::channelCount(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->channelCount());
}

QString  PythonQtWrapper_QAudioFormat::codec(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

qint64  PythonQtWrapper_QAudioFormat::durationForBytes(QAudioFormat* theWrappedObject, int  byteCount) const
{
  return ( theWrappedObject->durationForBytes(byteCount));
}

qint64  PythonQtWrapper_QAudioFormat::durationForFrames(QAudioFormat* theWrappedObject, int  frameCount) const
{
  return ( theWrappedObject->durationForFrames(frameCount));
}

int  PythonQtWrapper_QAudioFormat::framesForBytes(QAudioFormat* theWrappedObject, int  byteCount) const
{
  return ( theWrappedObject->framesForBytes(byteCount));
}

int  PythonQtWrapper_QAudioFormat::framesForDuration(QAudioFormat* theWrappedObject, qint64  duration) const
{
  return ( theWrappedObject->framesForDuration(duration));
}

bool  PythonQtWrapper_QAudioFormat::isValid(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QAudioFormat::__ne__(QAudioFormat* theWrappedObject, const QAudioFormat&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QAudioFormat*  PythonQtWrapper_QAudioFormat::operator_assign(QAudioFormat* theWrappedObject, const QAudioFormat&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QAudioFormat::__eq__(QAudioFormat* theWrappedObject, const QAudioFormat&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QAudioFormat::sampleRate(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->sampleRate());
}

int  PythonQtWrapper_QAudioFormat::sampleSize(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->sampleSize());
}

QAudioFormat::SampleType  PythonQtWrapper_QAudioFormat::sampleType(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->sampleType());
}

void PythonQtWrapper_QAudioFormat::setByteOrder(QAudioFormat* theWrappedObject, QAudioFormat::Endian  byteOrder)
{
  ( theWrappedObject->setByteOrder(byteOrder));
}

void PythonQtWrapper_QAudioFormat::setChannelCount(QAudioFormat* theWrappedObject, int  channelCount)
{
  ( theWrappedObject->setChannelCount(channelCount));
}

void PythonQtWrapper_QAudioFormat::setCodec(QAudioFormat* theWrappedObject, const QString&  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QAudioFormat::setSampleRate(QAudioFormat* theWrappedObject, int  sampleRate)
{
  ( theWrappedObject->setSampleRate(sampleRate));
}

void PythonQtWrapper_QAudioFormat::setSampleSize(QAudioFormat* theWrappedObject, int  sampleSize)
{
  ( theWrappedObject->setSampleSize(sampleSize));
}

void PythonQtWrapper_QAudioFormat::setSampleType(QAudioFormat* theWrappedObject, QAudioFormat::SampleType  sampleType)
{
  ( theWrappedObject->setSampleType(sampleType));
}

QString PythonQtWrapper_QAudioFormat::py_toString(QAudioFormat* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QAudioInput::~PythonQtShell_QAudioInput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioInput::childEvent(QChildEvent*  event0)
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
  QAudioInput::childEvent(event0);
}
void PythonQtShell_QAudioInput::customEvent(QEvent*  event0)
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
  QAudioInput::customEvent(event0);
}
bool  PythonQtShell_QAudioInput::event(QEvent*  event0)
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
  return QAudioInput::event(event0);
}
bool  PythonQtShell_QAudioInput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioInput::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioInput::timerEvent(QTimerEvent*  event0)
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
  QAudioInput::timerEvent(event0);
}
QAudioInput* PythonQtWrapper_QAudioInput::new_QAudioInput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioInput(audioDeviceInfo, format, parent); }

QAudioInput* PythonQtWrapper_QAudioInput::new_QAudioInput(const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioInput(format, parent); }

const QMetaObject* PythonQtShell_QAudioInput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioInput::staticMetaObject);
  } else {
    return &QAudioInput::staticMetaObject;
  }
}
int PythonQtShell_QAudioInput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioInput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QAudioInput::bufferSize(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->bufferSize());
}

int  PythonQtWrapper_QAudioInput::bytesReady(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->bytesReady());
}

qint64  PythonQtWrapper_QAudioInput::elapsedUSecs(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->elapsedUSecs());
}

QAudio::Error  PythonQtWrapper_QAudioInput::error(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QAudioFormat  PythonQtWrapper_QAudioInput::format(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QAudioInput::notifyInterval(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->notifyInterval());
}

int  PythonQtWrapper_QAudioInput::periodSize(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->periodSize());
}

qint64  PythonQtWrapper_QAudioInput::processedUSecs(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->processedUSecs());
}

void PythonQtWrapper_QAudioInput::reset(QAudioInput* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QAudioInput::resume(QAudioInput* theWrappedObject)
{
  ( theWrappedObject->resume());
}

void PythonQtWrapper_QAudioInput::setBufferSize(QAudioInput* theWrappedObject, int  bytes)
{
  ( theWrappedObject->setBufferSize(bytes));
}

void PythonQtWrapper_QAudioInput::setNotifyInterval(QAudioInput* theWrappedObject, int  milliSeconds)
{
  ( theWrappedObject->setNotifyInterval(milliSeconds));
}

void PythonQtWrapper_QAudioInput::setVolume(QAudioInput* theWrappedObject, qreal  volume)
{
  ( theWrappedObject->setVolume(volume));
}

QIODevice*  PythonQtWrapper_QAudioInput::start(QAudioInput* theWrappedObject)
{
  return ( theWrappedObject->start());
}

void PythonQtWrapper_QAudioInput::start(QAudioInput* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->start(device));
}

QAudio::State  PythonQtWrapper_QAudioInput::state(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAudioInput::stop(QAudioInput* theWrappedObject)
{
  ( theWrappedObject->stop());
}

void PythonQtWrapper_QAudioInput::suspend(QAudioInput* theWrappedObject)
{
  ( theWrappedObject->suspend());
}

qreal  PythonQtWrapper_QAudioInput::volume(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QAudioInputSelectorControl::~PythonQtShell_QAudioInputSelectorControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QAudioInputSelectorControl::activeInput() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("activeInput");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("activeInput", methodInfo, result);
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
QList<QString >  PythonQtShell_QAudioInputSelectorControl::availableInputs() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("availableInputs");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QString >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QString > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("availableInputs", methodInfo, result);
          } else {
            returnValue = *((QList<QString >*)args[0]);
          }
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
  return QList<QString >();
}
void PythonQtShell_QAudioInputSelectorControl::childEvent(QChildEvent*  event0)
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
  QAudioInputSelectorControl::childEvent(event0);
}
void PythonQtShell_QAudioInputSelectorControl::customEvent(QEvent*  event0)
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
  QAudioInputSelectorControl::customEvent(event0);
}
QString  PythonQtShell_QAudioInputSelectorControl::defaultInput() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("defaultInput");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("defaultInput", methodInfo, result);
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
bool  PythonQtShell_QAudioInputSelectorControl::event(QEvent*  event0)
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
  return QAudioInputSelectorControl::event(event0);
}
bool  PythonQtShell_QAudioInputSelectorControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioInputSelectorControl::eventFilter(watched0, event1);
}
QString  PythonQtShell_QAudioInputSelectorControl::inputDescription(const QString&  name0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("inputDescription");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
      void* args[2] = {NULL, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("inputDescription", methodInfo, result);
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
void PythonQtShell_QAudioInputSelectorControl::setActiveInput(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setActiveInput");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&name0};
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
void PythonQtShell_QAudioInputSelectorControl::timerEvent(QTimerEvent*  event0)
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
  QAudioInputSelectorControl::timerEvent(event0);
}
QAudioInputSelectorControl* PythonQtWrapper_QAudioInputSelectorControl::new_QAudioInputSelectorControl(QObject*  parent)
{ 
return new PythonQtShell_QAudioInputSelectorControl(parent); }

const QMetaObject* PythonQtShell_QAudioInputSelectorControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioInputSelectorControl::staticMetaObject);
  } else {
    return &QAudioInputSelectorControl::staticMetaObject;
  }
}
int PythonQtShell_QAudioInputSelectorControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioInputSelectorControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QAudioInputSelectorControl::activeInput(QAudioInputSelectorControl* theWrappedObject) const
{
  return ( theWrappedObject->activeInput());
}

QList<QString >  PythonQtWrapper_QAudioInputSelectorControl::availableInputs(QAudioInputSelectorControl* theWrappedObject) const
{
  return ( theWrappedObject->availableInputs());
}

QString  PythonQtWrapper_QAudioInputSelectorControl::defaultInput(QAudioInputSelectorControl* theWrappedObject) const
{
  return ( theWrappedObject->defaultInput());
}

QString  PythonQtWrapper_QAudioInputSelectorControl::inputDescription(QAudioInputSelectorControl* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->inputDescription(name));
}



PythonQtShell_QAudioOutput::~PythonQtShell_QAudioOutput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioOutput::childEvent(QChildEvent*  event0)
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
  QAudioOutput::childEvent(event0);
}
void PythonQtShell_QAudioOutput::customEvent(QEvent*  event0)
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
  QAudioOutput::customEvent(event0);
}
bool  PythonQtShell_QAudioOutput::event(QEvent*  event0)
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
  return QAudioOutput::event(event0);
}
bool  PythonQtShell_QAudioOutput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioOutput::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioOutput::timerEvent(QTimerEvent*  event0)
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
  QAudioOutput::timerEvent(event0);
}
QAudioOutput* PythonQtWrapper_QAudioOutput::new_QAudioOutput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioOutput(audioDeviceInfo, format, parent); }

QAudioOutput* PythonQtWrapper_QAudioOutput::new_QAudioOutput(const QAudioFormat&  format, QObject*  parent)
{ 
return new PythonQtShell_QAudioOutput(format, parent); }

const QMetaObject* PythonQtShell_QAudioOutput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioOutput::staticMetaObject);
  } else {
    return &QAudioOutput::staticMetaObject;
  }
}
int PythonQtShell_QAudioOutput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioOutput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QAudioOutput::bufferSize(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->bufferSize());
}

int  PythonQtWrapper_QAudioOutput::bytesFree(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->bytesFree());
}

QString  PythonQtWrapper_QAudioOutput::category(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->category());
}

qint64  PythonQtWrapper_QAudioOutput::elapsedUSecs(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->elapsedUSecs());
}

QAudio::Error  PythonQtWrapper_QAudioOutput::error(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QAudioFormat  PythonQtWrapper_QAudioOutput::format(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QAudioOutput::notifyInterval(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->notifyInterval());
}

int  PythonQtWrapper_QAudioOutput::periodSize(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->periodSize());
}

qint64  PythonQtWrapper_QAudioOutput::processedUSecs(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->processedUSecs());
}

void PythonQtWrapper_QAudioOutput::reset(QAudioOutput* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QAudioOutput::resume(QAudioOutput* theWrappedObject)
{
  ( theWrappedObject->resume());
}

void PythonQtWrapper_QAudioOutput::setBufferSize(QAudioOutput* theWrappedObject, int  bytes)
{
  ( theWrappedObject->setBufferSize(bytes));
}

void PythonQtWrapper_QAudioOutput::setCategory(QAudioOutput* theWrappedObject, const QString&  category)
{
  ( theWrappedObject->setCategory(category));
}

void PythonQtWrapper_QAudioOutput::setNotifyInterval(QAudioOutput* theWrappedObject, int  milliSeconds)
{
  ( theWrappedObject->setNotifyInterval(milliSeconds));
}

void PythonQtWrapper_QAudioOutput::setVolume(QAudioOutput* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setVolume(arg__1));
}

QIODevice*  PythonQtWrapper_QAudioOutput::start(QAudioOutput* theWrappedObject)
{
  return ( theWrappedObject->start());
}

void PythonQtWrapper_QAudioOutput::start(QAudioOutput* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->start(device));
}

QAudio::State  PythonQtWrapper_QAudioOutput::state(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAudioOutput::stop(QAudioOutput* theWrappedObject)
{
  ( theWrappedObject->stop());
}

void PythonQtWrapper_QAudioOutput::suspend(QAudioOutput* theWrappedObject)
{
  ( theWrappedObject->suspend());
}

qreal  PythonQtWrapper_QAudioOutput::volume(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QAudioOutputSelectorControl::~PythonQtShell_QAudioOutputSelectorControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QAudioOutputSelectorControl::activeOutput() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("activeOutput");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("activeOutput", methodInfo, result);
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
QList<QString >  PythonQtShell_QAudioOutputSelectorControl::availableOutputs() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("availableOutputs");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QString >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QString > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("availableOutputs", methodInfo, result);
          } else {
            returnValue = *((QList<QString >*)args[0]);
          }
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
  return QList<QString >();
}
void PythonQtShell_QAudioOutputSelectorControl::childEvent(QChildEvent*  event0)
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
  QAudioOutputSelectorControl::childEvent(event0);
}
void PythonQtShell_QAudioOutputSelectorControl::customEvent(QEvent*  event0)
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
  QAudioOutputSelectorControl::customEvent(event0);
}
QString  PythonQtShell_QAudioOutputSelectorControl::defaultOutput() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("defaultOutput");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("defaultOutput", methodInfo, result);
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
bool  PythonQtShell_QAudioOutputSelectorControl::event(QEvent*  event0)
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
  return QAudioOutputSelectorControl::event(event0);
}
bool  PythonQtShell_QAudioOutputSelectorControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioOutputSelectorControl::eventFilter(watched0, event1);
}
QString  PythonQtShell_QAudioOutputSelectorControl::outputDescription(const QString&  name0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("outputDescription");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
      void* args[2] = {NULL, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("outputDescription", methodInfo, result);
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
void PythonQtShell_QAudioOutputSelectorControl::setActiveOutput(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setActiveOutput");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&name0};
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
void PythonQtShell_QAudioOutputSelectorControl::timerEvent(QTimerEvent*  event0)
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
  QAudioOutputSelectorControl::timerEvent(event0);
}
QAudioOutputSelectorControl* PythonQtWrapper_QAudioOutputSelectorControl::new_QAudioOutputSelectorControl(QObject*  parent)
{ 
return new PythonQtShell_QAudioOutputSelectorControl(parent); }

const QMetaObject* PythonQtShell_QAudioOutputSelectorControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioOutputSelectorControl::staticMetaObject);
  } else {
    return &QAudioOutputSelectorControl::staticMetaObject;
  }
}
int PythonQtShell_QAudioOutputSelectorControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioOutputSelectorControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QAudioOutputSelectorControl::activeOutput(QAudioOutputSelectorControl* theWrappedObject) const
{
  return ( theWrappedObject->activeOutput());
}

QList<QString >  PythonQtWrapper_QAudioOutputSelectorControl::availableOutputs(QAudioOutputSelectorControl* theWrappedObject) const
{
  return ( theWrappedObject->availableOutputs());
}

QString  PythonQtWrapper_QAudioOutputSelectorControl::defaultOutput(QAudioOutputSelectorControl* theWrappedObject) const
{
  return ( theWrappedObject->defaultOutput());
}

QString  PythonQtWrapper_QAudioOutputSelectorControl::outputDescription(QAudioOutputSelectorControl* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->outputDescription(name));
}



PythonQtShell_QAudioProbe::~PythonQtShell_QAudioProbe() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioProbe::childEvent(QChildEvent*  event0)
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
  QAudioProbe::childEvent(event0);
}
void PythonQtShell_QAudioProbe::customEvent(QEvent*  event0)
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
  QAudioProbe::customEvent(event0);
}
bool  PythonQtShell_QAudioProbe::event(QEvent*  event0)
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
  return QAudioProbe::event(event0);
}
bool  PythonQtShell_QAudioProbe::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioProbe::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioProbe::timerEvent(QTimerEvent*  event0)
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
  QAudioProbe::timerEvent(event0);
}
QAudioProbe* PythonQtWrapper_QAudioProbe::new_QAudioProbe(QObject*  parent)
{ 
return new PythonQtShell_QAudioProbe(parent); }

const QMetaObject* PythonQtShell_QAudioProbe::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioProbe::staticMetaObject);
  } else {
    return &QAudioProbe::staticMetaObject;
  }
}
int PythonQtShell_QAudioProbe::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioProbe::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QAudioProbe::isActive(QAudioProbe* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QAudioProbe::setSource(QAudioProbe* theWrappedObject, QMediaObject*  source)
{
  return ( theWrappedObject->setSource(source));
}

bool  PythonQtWrapper_QAudioProbe::setSource(QAudioProbe* theWrappedObject, QMediaRecorder*  source)
{
  return ( theWrappedObject->setSource(source));
}



PythonQtShell_QAudioRecorder::~PythonQtShell_QAudioRecorder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioRecorder::childEvent(QChildEvent*  event0)
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
  QAudioRecorder::childEvent(event0);
}
void PythonQtShell_QAudioRecorder::customEvent(QEvent*  event0)
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
  QAudioRecorder::customEvent(event0);
}
bool  PythonQtShell_QAudioRecorder::event(QEvent*  event0)
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
  return QAudioRecorder::event(event0);
}
bool  PythonQtShell_QAudioRecorder::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioRecorder::eventFilter(watched0, event1);
}
QMediaObject*  PythonQtShell_QAudioRecorder::mediaObject() const
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
  return QAudioRecorder::mediaObject();
}
bool  PythonQtShell_QAudioRecorder::setMediaObject(QMediaObject*  object0)
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
  return QAudioRecorder::setMediaObject(object0);
}
void PythonQtShell_QAudioRecorder::timerEvent(QTimerEvent*  event0)
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
  QAudioRecorder::timerEvent(event0);
}
QAudioRecorder* PythonQtWrapper_QAudioRecorder::new_QAudioRecorder(QObject*  parent)
{ 
return new PythonQtShell_QAudioRecorder(parent); }

const QMetaObject* PythonQtShell_QAudioRecorder::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioRecorder::staticMetaObject);
  } else {
    return &QAudioRecorder::staticMetaObject;
  }
}
int PythonQtShell_QAudioRecorder::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioRecorder::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QAudioRecorder::audioInput(QAudioRecorder* theWrappedObject) const
{
  return ( theWrappedObject->audioInput());
}

QString  PythonQtWrapper_QAudioRecorder::audioInputDescription(QAudioRecorder* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->audioInputDescription(name));
}

QStringList  PythonQtWrapper_QAudioRecorder::audioInputs(QAudioRecorder* theWrappedObject) const
{
  return ( theWrappedObject->audioInputs());
}

QString  PythonQtWrapper_QAudioRecorder::defaultAudioInput(QAudioRecorder* theWrappedObject) const
{
  return ( theWrappedObject->defaultAudioInput());
}



PythonQtShell_QAudioRoleControl::~PythonQtShell_QAudioRoleControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QAudio::Role  PythonQtShell_QAudioRoleControl::audioRole() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("audioRole");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAudio::Role"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAudio::Role returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("audioRole", methodInfo, result);
          } else {
            returnValue = *((QAudio::Role*)args[0]);
          }
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
  return QAudio::Role();
}
void PythonQtShell_QAudioRoleControl::childEvent(QChildEvent*  event0)
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
  QAudioRoleControl::childEvent(event0);
}
void PythonQtShell_QAudioRoleControl::customEvent(QEvent*  event0)
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
  QAudioRoleControl::customEvent(event0);
}
bool  PythonQtShell_QAudioRoleControl::event(QEvent*  event0)
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
  return QAudioRoleControl::event(event0);
}
bool  PythonQtShell_QAudioRoleControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioRoleControl::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioRoleControl::setAudioRole(QAudio::Role  role0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setAudioRole");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAudio::Role"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&role0};
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
QList<QAudio::Role >  PythonQtShell_QAudioRoleControl::supportedAudioRoles() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedAudioRoles");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QAudio::Role >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QAudio::Role > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedAudioRoles", methodInfo, result);
          } else {
            returnValue = *((QList<QAudio::Role >*)args[0]);
          }
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
  return QList<QAudio::Role >();
}
void PythonQtShell_QAudioRoleControl::timerEvent(QTimerEvent*  event0)
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
  QAudioRoleControl::timerEvent(event0);
}
QAudioRoleControl* PythonQtWrapper_QAudioRoleControl::new_QAudioRoleControl(QObject*  parent)
{ 
return new PythonQtShell_QAudioRoleControl(parent); }

const QMetaObject* PythonQtShell_QAudioRoleControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioRoleControl::staticMetaObject);
  } else {
    return &QAudioRoleControl::staticMetaObject;
  }
}
int PythonQtShell_QAudioRoleControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioRoleControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudio::Role  PythonQtWrapper_QAudioRoleControl::audioRole(QAudioRoleControl* theWrappedObject) const
{
  return ( theWrappedObject->audioRole());
}

void PythonQtWrapper_QAudioRoleControl::setAudioRole(QAudioRoleControl* theWrappedObject, QAudio::Role  role)
{
  ( theWrappedObject->setAudioRole(role));
}

QList<QAudio::Role >  PythonQtWrapper_QAudioRoleControl::supportedAudioRoles(QAudioRoleControl* theWrappedObject) const
{
  return ( theWrappedObject->supportedAudioRoles());
}



PythonQtShell_QAudioSystemFactoryInterface::~PythonQtShell_QAudioSystemFactoryInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QList<QByteArray >  PythonQtShell_QAudioSystemFactoryInterface::availableDevices(QAudio::Mode  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("availableDevices");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QByteArray >" , "QAudio::Mode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QByteArray > returnValue;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("availableDevices", methodInfo, result);
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
QAbstractAudioDeviceInfo*  PythonQtShell_QAudioSystemFactoryInterface::createDeviceInfo(const QByteArray&  device0, QAudio::Mode  mode1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createDeviceInfo");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAbstractAudioDeviceInfo*" , "const QByteArray&" , "QAudio::Mode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QAbstractAudioDeviceInfo* returnValue;
      void* args[3] = {NULL, (void*)&device0, (void*)&mode1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createDeviceInfo", methodInfo, result);
          } else {
            returnValue = *((QAbstractAudioDeviceInfo**)args[0]);
          }
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
QAbstractAudioInput*  PythonQtShell_QAudioSystemFactoryInterface::createInput(const QByteArray&  device0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createInput");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAbstractAudioInput*" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QAbstractAudioInput* returnValue;
      void* args[2] = {NULL, (void*)&device0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createInput", methodInfo, result);
          } else {
            returnValue = *((QAbstractAudioInput**)args[0]);
          }
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
QAbstractAudioOutput*  PythonQtShell_QAudioSystemFactoryInterface::createOutput(const QByteArray&  device0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createOutput");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAbstractAudioOutput*" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QAbstractAudioOutput* returnValue;
      void* args[2] = {NULL, (void*)&device0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createOutput", methodInfo, result);
          } else {
            returnValue = *((QAbstractAudioOutput**)args[0]);
          }
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
QAudioSystemFactoryInterface* PythonQtWrapper_QAudioSystemFactoryInterface::new_QAudioSystemFactoryInterface()
{ 
return new PythonQtShell_QAudioSystemFactoryInterface(); }

QList<QByteArray >  PythonQtWrapper_QAudioSystemFactoryInterface::availableDevices(QAudioSystemFactoryInterface* theWrappedObject, QAudio::Mode  arg__1) const
{
  return ( theWrappedObject->availableDevices(arg__1));
}

QAbstractAudioDeviceInfo*  PythonQtWrapper_QAudioSystemFactoryInterface::createDeviceInfo(QAudioSystemFactoryInterface* theWrappedObject, const QByteArray&  device, QAudio::Mode  mode)
{
  return ( theWrappedObject->createDeviceInfo(device, mode));
}

QAbstractAudioInput*  PythonQtWrapper_QAudioSystemFactoryInterface::createInput(QAudioSystemFactoryInterface* theWrappedObject, const QByteArray&  device)
{
  return ( theWrappedObject->createInput(device));
}

QAbstractAudioOutput*  PythonQtWrapper_QAudioSystemFactoryInterface::createOutput(QAudioSystemFactoryInterface* theWrappedObject, const QByteArray&  device)
{
  return ( theWrappedObject->createOutput(device));
}



PythonQtShell_QAudioSystemPlugin::~PythonQtShell_QAudioSystemPlugin() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QList<QByteArray >  PythonQtShell_QAudioSystemPlugin::availableDevices(QAudio::Mode  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("availableDevices");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QByteArray >" , "QAudio::Mode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QByteArray > returnValue;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("availableDevices", methodInfo, result);
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
QAbstractAudioDeviceInfo*  PythonQtShell_QAudioSystemPlugin::createDeviceInfo(const QByteArray&  device0, QAudio::Mode  mode1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createDeviceInfo");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAbstractAudioDeviceInfo*" , "const QByteArray&" , "QAudio::Mode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QAbstractAudioDeviceInfo* returnValue;
      void* args[3] = {NULL, (void*)&device0, (void*)&mode1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createDeviceInfo", methodInfo, result);
          } else {
            returnValue = *((QAbstractAudioDeviceInfo**)args[0]);
          }
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
QAbstractAudioInput*  PythonQtShell_QAudioSystemPlugin::createInput(const QByteArray&  device0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createInput");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAbstractAudioInput*" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QAbstractAudioInput* returnValue;
      void* args[2] = {NULL, (void*)&device0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createInput", methodInfo, result);
          } else {
            returnValue = *((QAbstractAudioInput**)args[0]);
          }
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
QAbstractAudioOutput*  PythonQtShell_QAudioSystemPlugin::createOutput(const QByteArray&  device0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createOutput");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAbstractAudioOutput*" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QAbstractAudioOutput* returnValue;
      void* args[2] = {NULL, (void*)&device0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createOutput", methodInfo, result);
          } else {
            returnValue = *((QAbstractAudioOutput**)args[0]);
          }
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
QAudioSystemPlugin* PythonQtWrapper_QAudioSystemPlugin::new_QAudioSystemPlugin(QObject*  parent)
{ 
return new PythonQtShell_QAudioSystemPlugin(parent); }

const QMetaObject* PythonQtShell_QAudioSystemPlugin::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioSystemPlugin::staticMetaObject);
  } else {
    return &QAudioSystemPlugin::staticMetaObject;
  }
}
int PythonQtShell_QAudioSystemPlugin::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioSystemPlugin::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QByteArray >  PythonQtWrapper_QAudioSystemPlugin::availableDevices(QAudioSystemPlugin* theWrappedObject, QAudio::Mode  arg__1) const
{
  return ( theWrappedObject->availableDevices(arg__1));
}

QAbstractAudioDeviceInfo*  PythonQtWrapper_QAudioSystemPlugin::createDeviceInfo(QAudioSystemPlugin* theWrappedObject, const QByteArray&  device, QAudio::Mode  mode)
{
  return ( theWrappedObject->createDeviceInfo(device, mode));
}

QAbstractAudioInput*  PythonQtWrapper_QAudioSystemPlugin::createInput(QAudioSystemPlugin* theWrappedObject, const QByteArray&  device)
{
  return ( theWrappedObject->createInput(device));
}

QAbstractAudioOutput*  PythonQtWrapper_QAudioSystemPlugin::createOutput(QAudioSystemPlugin* theWrappedObject, const QByteArray&  device)
{
  return ( theWrappedObject->createOutput(device));
}



PythonQtShell_QCamera::~PythonQtShell_QCamera() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMultimedia::AvailabilityStatus  PythonQtShell_QCamera::availability() const
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
  return QCamera::availability();
}
bool  PythonQtShell_QCamera::bind(QObject*  arg__1)
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
  return QCamera::bind(arg__1);
}
void PythonQtShell_QCamera::childEvent(QChildEvent*  event0)
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
  QCamera::childEvent(event0);
}
void PythonQtShell_QCamera::customEvent(QEvent*  event0)
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
  QCamera::customEvent(event0);
}
bool  PythonQtShell_QCamera::event(QEvent*  event0)
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
  return QCamera::event(event0);
}
bool  PythonQtShell_QCamera::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QCamera::eventFilter(watched0, event1);
}
bool  PythonQtShell_QCamera::isAvailable() const
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
  return QCamera::isAvailable();
}
QMediaService*  PythonQtShell_QCamera::service() const
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
  return QCamera::service();
}
void PythonQtShell_QCamera::timerEvent(QTimerEvent*  event0)
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
  QCamera::timerEvent(event0);
}
void PythonQtShell_QCamera::unbind(QObject*  arg__1)
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
  QCamera::unbind(arg__1);
}
QCamera* PythonQtWrapper_QCamera::new_QCamera(QCamera::Position  position, QObject*  parent)
{ 
return new PythonQtShell_QCamera(position, parent); }

QCamera* PythonQtWrapper_QCamera::new_QCamera(QObject*  parent)
{ 
return new PythonQtShell_QCamera(parent); }

QCamera* PythonQtWrapper_QCamera::new_QCamera(const QByteArray&  deviceName, QObject*  parent)
{ 
return new PythonQtShell_QCamera(deviceName, parent); }

QCamera* PythonQtWrapper_QCamera::new_QCamera(const QCameraInfo&  cameraInfo, QObject*  parent)
{ 
return new PythonQtShell_QCamera(cameraInfo, parent); }

const QMetaObject* PythonQtShell_QCamera::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QCamera::staticMetaObject);
  } else {
    return &QCamera::staticMetaObject;
  }
}
int PythonQtShell_QCamera::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QCamera::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QByteArray >  PythonQtWrapper_QCamera::static_QCamera_availableDevices()
{
  return (QCamera::availableDevices());
}

QCamera::CaptureModes  PythonQtWrapper_QCamera::captureMode(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->captureMode());
}

QString  PythonQtWrapper_QCamera::static_QCamera_deviceDescription(const QByteArray&  device)
{
  return (QCamera::deviceDescription(device));
}

QCamera::Error  PythonQtWrapper_QCamera::error(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QCamera::errorString(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QCameraExposure*  PythonQtWrapper_QCamera::exposure(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->exposure());
}

QCameraFocus*  PythonQtWrapper_QCamera::focus(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->focus());
}

QCameraImageProcessing*  PythonQtWrapper_QCamera::imageProcessing(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->imageProcessing());
}

bool  PythonQtWrapper_QCamera::isCaptureModeSupported(QCamera* theWrappedObject, QCamera::CaptureModes  mode) const
{
  return ( theWrappedObject->isCaptureModeSupported(mode));
}

QCamera::LockStatus  PythonQtWrapper_QCamera::lockStatus(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->lockStatus());
}

QCamera::LockStatus  PythonQtWrapper_QCamera::lockStatus(QCamera* theWrappedObject, QCamera::LockType  lock) const
{
  return ( theWrappedObject->lockStatus(lock));
}

QCamera::LockTypes  PythonQtWrapper_QCamera::requestedLocks(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->requestedLocks());
}

void PythonQtWrapper_QCamera::setViewfinder(QCamera* theWrappedObject, QAbstractVideoSurface*  surface)
{
  ( theWrappedObject->setViewfinder(surface));
}

void PythonQtWrapper_QCamera::setViewfinder(QCamera* theWrappedObject, QGraphicsVideoItem*  viewfinder)
{
  ( theWrappedObject->setViewfinder(viewfinder));
}

void PythonQtWrapper_QCamera::setViewfinder(QCamera* theWrappedObject, QVideoWidget*  viewfinder)
{
  ( theWrappedObject->setViewfinder(viewfinder));
}

void PythonQtWrapper_QCamera::setViewfinderSettings(QCamera* theWrappedObject, const QCameraViewfinderSettings&  settings)
{
  ( theWrappedObject->setViewfinderSettings(settings));
}

QCamera::State  PythonQtWrapper_QCamera::state(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QCamera::Status  PythonQtWrapper_QCamera::status(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

QCamera::LockTypes  PythonQtWrapper_QCamera::supportedLocks(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->supportedLocks());
}

QList<QCamera::FrameRateRange >  PythonQtWrapper_QCamera::supportedViewfinderFrameRateRanges(QCamera* theWrappedObject, const QCameraViewfinderSettings&  settings) const
{
  return ( theWrappedObject->supportedViewfinderFrameRateRanges(settings));
}

QList<QVideoFrame::PixelFormat >  PythonQtWrapper_QCamera::supportedViewfinderPixelFormats(QCamera* theWrappedObject, const QCameraViewfinderSettings&  settings) const
{
  return ( theWrappedObject->supportedViewfinderPixelFormats(settings));
}

QList<QSize >  PythonQtWrapper_QCamera::supportedViewfinderResolutions(QCamera* theWrappedObject, const QCameraViewfinderSettings&  settings) const
{
  return ( theWrappedObject->supportedViewfinderResolutions(settings));
}

QList<QCameraViewfinderSettings >  PythonQtWrapper_QCamera::supportedViewfinderSettings(QCamera* theWrappedObject, const QCameraViewfinderSettings&  settings) const
{
  return ( theWrappedObject->supportedViewfinderSettings(settings));
}

QCameraViewfinderSettings  PythonQtWrapper_QCamera::viewfinderSettings(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->viewfinderSettings());
}



PythonQtShell_QCameraCaptureBufferFormatControl::~PythonQtShell_QCameraCaptureBufferFormatControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QVideoFrame::PixelFormat  PythonQtShell_QCameraCaptureBufferFormatControl::bufferFormat() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bufferFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVideoFrame::PixelFormat"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVideoFrame::PixelFormat returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bufferFormat", methodInfo, result);
          } else {
            returnValue = *((QVideoFrame::PixelFormat*)args[0]);
          }
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
  return QVideoFrame::PixelFormat();
}
void PythonQtShell_QCameraCaptureBufferFormatControl::childEvent(QChildEvent*  event0)
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
  QCameraCaptureBufferFormatControl::childEvent(event0);
}
void PythonQtShell_QCameraCaptureBufferFormatControl::customEvent(QEvent*  event0)
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
  QCameraCaptureBufferFormatControl::customEvent(event0);
}
bool  PythonQtShell_QCameraCaptureBufferFormatControl::event(QEvent*  event0)
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
  return QCameraCaptureBufferFormatControl::event(event0);
}
bool  PythonQtShell_QCameraCaptureBufferFormatControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QCameraCaptureBufferFormatControl::eventFilter(watched0, event1);
}
void PythonQtShell_QCameraCaptureBufferFormatControl::setBufferFormat(QVideoFrame::PixelFormat  format0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setBufferFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QVideoFrame::PixelFormat"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&format0};
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
QList<QVideoFrame::PixelFormat >  PythonQtShell_QCameraCaptureBufferFormatControl::supportedBufferFormats() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedBufferFormats");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QVideoFrame::PixelFormat >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QVideoFrame::PixelFormat > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedBufferFormats", methodInfo, result);
          } else {
            returnValue = *((QList<QVideoFrame::PixelFormat >*)args[0]);
          }
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
  return QList<QVideoFrame::PixelFormat >();
}
void PythonQtShell_QCameraCaptureBufferFormatControl::timerEvent(QTimerEvent*  event0)
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
  QCameraCaptureBufferFormatControl::timerEvent(event0);
}
QCameraCaptureBufferFormatControl* PythonQtWrapper_QCameraCaptureBufferFormatControl::new_QCameraCaptureBufferFormatControl(QObject*  parent)
{ 
return new PythonQtShell_QCameraCaptureBufferFormatControl(parent); }

const QMetaObject* PythonQtShell_QCameraCaptureBufferFormatControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QCameraCaptureBufferFormatControl::staticMetaObject);
  } else {
    return &QCameraCaptureBufferFormatControl::staticMetaObject;
  }
}
int PythonQtShell_QCameraCaptureBufferFormatControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QCameraCaptureBufferFormatControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QVideoFrame::PixelFormat  PythonQtWrapper_QCameraCaptureBufferFormatControl::bufferFormat(QCameraCaptureBufferFormatControl* theWrappedObject) const
{
  return ( theWrappedObject->bufferFormat());
}

void PythonQtWrapper_QCameraCaptureBufferFormatControl::setBufferFormat(QCameraCaptureBufferFormatControl* theWrappedObject, QVideoFrame::PixelFormat  format)
{
  ( theWrappedObject->setBufferFormat(format));
}

QList<QVideoFrame::PixelFormat >  PythonQtWrapper_QCameraCaptureBufferFormatControl::supportedBufferFormats(QCameraCaptureBufferFormatControl* theWrappedObject) const
{
  return ( theWrappedObject->supportedBufferFormats());
}



PythonQtShell_QCameraCaptureDestinationControl::~PythonQtShell_QCameraCaptureDestinationControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QCameraImageCapture::CaptureDestinations  PythonQtShell_QCameraCaptureDestinationControl::captureDestination() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("captureDestination");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QCameraImageCapture::CaptureDestinations"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QCameraImageCapture::CaptureDestinations returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("captureDestination", methodInfo, result);
          } else {
            returnValue = *((QCameraImageCapture::CaptureDestinations*)args[0]);
          }
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
  return QCameraImageCapture::CaptureDestinations();
}
void PythonQtShell_QCameraCaptureDestinationControl::childEvent(QChildEvent*  event0)
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
  QCameraCaptureDestinationControl::childEvent(event0);
}
void PythonQtShell_QCameraCaptureDestinationControl::customEvent(QEvent*  event0)
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
  QCameraCaptureDestinationControl::customEvent(event0);
}
bool  PythonQtShell_QCameraCaptureDestinationControl::event(QEvent*  event0)
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
  return QCameraCaptureDestinationControl::event(event0);
}
bool  PythonQtShell_QCameraCaptureDestinationControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QCameraCaptureDestinationControl::eventFilter(watched0, event1);
}
bool  PythonQtShell_QCameraCaptureDestinationControl::isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations  destination0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isCaptureDestinationSupported");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QCameraImageCapture::CaptureDestinations"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&destination0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isCaptureDestinationSupported", methodInfo, result);
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
void PythonQtShell_QCameraCaptureDestinationControl::setCaptureDestination(QCameraImageCapture::CaptureDestinations  destination0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setCaptureDestination");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QCameraImageCapture::CaptureDestinations"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&destination0};
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
void PythonQtShell_QCameraCaptureDestinationControl::timerEvent(QTimerEvent*  event0)
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
  QCameraCaptureDestinationControl::timerEvent(event0);
}
QCameraCaptureDestinationControl* PythonQtWrapper_QCameraCaptureDestinationControl::new_QCameraCaptureDestinationControl(QObject*  parent)
{ 
return new PythonQtShell_QCameraCaptureDestinationControl(parent); }

const QMetaObject* PythonQtShell_QCameraCaptureDestinationControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QCameraCaptureDestinationControl::staticMetaObject);
  } else {
    return &QCameraCaptureDestinationControl::staticMetaObject;
  }
}
int PythonQtShell_QCameraCaptureDestinationControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QCameraCaptureDestinationControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QCameraImageCapture::CaptureDestinations  PythonQtWrapper_QCameraCaptureDestinationControl::captureDestination(QCameraCaptureDestinationControl* theWrappedObject) const
{
  return ( theWrappedObject->captureDestination());
}

bool  PythonQtWrapper_QCameraCaptureDestinationControl::isCaptureDestinationSupported(QCameraCaptureDestinationControl* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination) const
{
  return ( theWrappedObject->isCaptureDestinationSupported(destination));
}

void PythonQtWrapper_QCameraCaptureDestinationControl::setCaptureDestination(QCameraCaptureDestinationControl* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination)
{
  ( theWrappedObject->setCaptureDestination(destination));
}



PythonQtShell_QCameraControl::~PythonQtShell_QCameraControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QCameraControl::canChangeProperty(QCameraControl::PropertyChangeType  changeType0, QCamera::Status  status1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canChangeProperty");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QCameraControl::PropertyChangeType" , "QCamera::Status"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&changeType0, (void*)&status1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canChangeProperty", methodInfo, result);
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
QCamera::CaptureModes  PythonQtShell_QCameraControl::captureMode() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("captureMode");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QCamera::CaptureModes"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QCamera::CaptureModes returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("captureMode", methodInfo, result);
          } else {
            returnValue = *((QCamera::CaptureModes*)args[0]);
          }
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
  return QCamera::CaptureModes();
}
void PythonQtShell_QCameraControl::childEvent(QChildEvent*  event0)
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
  QCameraControl::childEvent(event0);
}
void PythonQtShell_QCameraControl::customEvent(QEvent*  event0)
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
  QCameraControl::customEvent(event0);
}
bool  PythonQtShell_QCameraControl::event(QEvent*  event0)
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
  return QCameraControl::event(event0);
}
bool  PythonQtShell_QCameraControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QCameraControl::eventFilter(watched0, event1);
}
bool  PythonQtShell_QCameraControl::isCaptureModeSupported(QCamera::CaptureModes  mode0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isCaptureModeSupported");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QCamera::CaptureModes"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isCaptureModeSupported", methodInfo, result);
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
void PythonQtShell_QCameraControl::setCaptureMode(QCamera::CaptureModes  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setCaptureMode");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QCamera::CaptureModes"};
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
  
}
void PythonQtShell_QCameraControl::setState(QCamera::State  state0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QCamera::State"};
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
QCamera::State  PythonQtShell_QCameraControl::state() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("state");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QCamera::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QCamera::State returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("state", methodInfo, result);
          } else {
            returnValue = *((QCamera::State*)args[0]);
          }
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
  return QCamera::State();
}
QCamera::Status  PythonQtShell_QCameraControl::status() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("status");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QCamera::Status"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QCamera::Status returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("status", methodInfo, result);
          } else {
            returnValue = *((QCamera::Status*)args[0]);
          }
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
  return QCamera::Status();
}
void PythonQtShell_QCameraControl::timerEvent(QTimerEvent*  event0)
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
  QCameraControl::timerEvent(event0);
}
QCameraControl* PythonQtWrapper_QCameraControl::new_QCameraControl(QObject*  parent)
{ 
return new PythonQtShell_QCameraControl(parent); }

const QMetaObject* PythonQtShell_QCameraControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QCameraControl::staticMetaObject);
  } else {
    return &QCameraControl::staticMetaObject;
  }
}
int PythonQtShell_QCameraControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QCameraControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QCameraControl::canChangeProperty(QCameraControl* theWrappedObject, QCameraControl::PropertyChangeType  changeType, QCamera::Status  status) const
{
  return ( theWrappedObject->canChangeProperty(changeType, status));
}

QCamera::CaptureModes  PythonQtWrapper_QCameraControl::captureMode(QCameraControl* theWrappedObject) const
{
  return ( theWrappedObject->captureMode());
}

bool  PythonQtWrapper_QCameraControl::isCaptureModeSupported(QCameraControl* theWrappedObject, QCamera::CaptureModes  mode) const
{
  return ( theWrappedObject->isCaptureModeSupported(mode));
}

void PythonQtWrapper_QCameraControl::setCaptureMode(QCameraControl* theWrappedObject, QCamera::CaptureModes  arg__1)
{
  ( theWrappedObject->setCaptureMode(arg__1));
}

void PythonQtWrapper_QCameraControl::setState(QCameraControl* theWrappedObject, QCamera::State  state)
{
  ( theWrappedObject->setState(state));
}

QCamera::State  PythonQtWrapper_QCameraControl::state(QCameraControl* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QCamera::Status  PythonQtWrapper_QCameraControl::status(QCameraControl* theWrappedObject) const
{
  return ( theWrappedObject->status());
}



qreal  PythonQtWrapper_QCameraExposure::aperture(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->aperture());
}

qreal  PythonQtWrapper_QCameraExposure::exposureCompensation(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->exposureCompensation());
}

QCameraExposure::ExposureMode  PythonQtWrapper_QCameraExposure::exposureMode(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->exposureMode());
}

QCameraExposure::FlashModes  PythonQtWrapper_QCameraExposure::flashMode(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->flashMode());
}

bool  PythonQtWrapper_QCameraExposure::isAvailable(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

bool  PythonQtWrapper_QCameraExposure::isExposureModeSupported(QCameraExposure* theWrappedObject, QCameraExposure::ExposureMode  mode) const
{
  return ( theWrappedObject->isExposureModeSupported(mode));
}

bool  PythonQtWrapper_QCameraExposure::isFlashModeSupported(QCameraExposure* theWrappedObject, QCameraExposure::FlashModes  mode) const
{
  return ( theWrappedObject->isFlashModeSupported(mode));
}

bool  PythonQtWrapper_QCameraExposure::isFlashReady(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->isFlashReady());
}

bool  PythonQtWrapper_QCameraExposure::isMeteringModeSupported(QCameraExposure* theWrappedObject, QCameraExposure::MeteringMode  mode) const
{
  return ( theWrappedObject->isMeteringModeSupported(mode));
}

int  PythonQtWrapper_QCameraExposure::isoSensitivity(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->isoSensitivity());
}

QCameraExposure::MeteringMode  PythonQtWrapper_QCameraExposure::meteringMode(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->meteringMode());
}

qreal  PythonQtWrapper_QCameraExposure::requestedAperture(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->requestedAperture());
}

int  PythonQtWrapper_QCameraExposure::requestedIsoSensitivity(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->requestedIsoSensitivity());
}

qreal  PythonQtWrapper_QCameraExposure::requestedShutterSpeed(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->requestedShutterSpeed());
}

void PythonQtWrapper_QCameraExposure::setSpotMeteringPoint(QCameraExposure* theWrappedObject, const QPointF&  point)
{
  ( theWrappedObject->setSpotMeteringPoint(point));
}

qreal  PythonQtWrapper_QCameraExposure::shutterSpeed(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->shutterSpeed());
}

QPointF  PythonQtWrapper_QCameraExposure::spotMeteringPoint(QCameraExposure* theWrappedObject) const
{
  return ( theWrappedObject->spotMeteringPoint());
}

QList<qreal >  PythonQtWrapper_QCameraExposure::supportedApertures(QCameraExposure* theWrappedObject, bool*  continuous) const
{
  return ( theWrappedObject->supportedApertures(continuous));
}

QList<int >  PythonQtWrapper_QCameraExposure::supportedIsoSensitivities(QCameraExposure* theWrappedObject, bool*  continuous) const
{
  return ( theWrappedObject->supportedIsoSensitivities(continuous));
}

QList<qreal >  PythonQtWrapper_QCameraExposure::supportedShutterSpeeds(QCameraExposure* theWrappedObject, bool*  continuous) const
{
  return ( theWrappedObject->supportedShutterSpeeds(continuous));
}



PythonQtShell_QCameraExposureControl::~PythonQtShell_QCameraExposureControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QVariant  PythonQtShell_QCameraExposureControl::actualValue(QCameraExposureControl::ExposureParameter  parameter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("actualValue");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "QCameraExposureControl::ExposureParameter"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&parameter0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("actualValue", methodInfo, result);
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
void PythonQtShell_QCameraExposureControl::childEvent(QChildEvent*  event0)
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
  QCameraExposureControl::childEvent(event0);
}
void PythonQtShell_QCameraExposureControl::customEvent(QEvent*  event0)
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
  QCameraExposureControl::customEvent(event0);
}
bool  PythonQtShell_QCameraExposureControl::event(QEvent*  event0)
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
  return QCameraExposureControl::event(event0);
}
bool  PythonQtShell_QCameraExposureControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QCameraExposureControl::eventFilter(watched0, event1);
}
bool  PythonQtShell_QCameraExposureControl::isParameterSupported(QCameraExposureControl::ExposureParameter  parameter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isParameterSupported");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QCameraExposureControl::ExposureParameter"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&parameter0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isParameterSupported", methodInfo, result);
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
QVariant  PythonQtShell_QCameraExposureControl::requestedValue(QCameraExposureControl::ExposureParameter  parameter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("requestedValue");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "QCameraExposureControl::ExposureParameter"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&parameter0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("requestedValue", methodInfo, result);
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
bool  PythonQtShell_QCameraExposureControl::setValue(QCameraExposureControl::ExposureParameter  parameter0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setValue");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QCameraExposureControl::ExposureParameter" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&parameter0, (void*)&value1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setValue", methodInfo, result);
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
QList<QVariant >  PythonQtShell_QCameraExposureControl::supportedParameterRange(QCameraExposureControl::ExposureParameter  parameter0, bool*  continuous1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedParameterRange");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QVariant >" , "QCameraExposureControl::ExposureParameter" , "bool*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QList<QVariant > returnValue;
      void* args[3] = {NULL, (void*)&parameter0, (void*)&continuous1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedParameterRange", methodInfo, result);
          } else {
            returnValue = *((QList<QVariant >*)args[0]);
          }
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
  return QList<QVariant >();
}
void PythonQtShell_QCameraExposureControl::timerEvent(QTimerEvent*  event0)
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
  QCameraExposureControl::timerEvent(event0);
}
QCameraExposureControl* PythonQtWrapper_QCameraExposureControl::new_QCameraExposureControl(QObject*  parent)
{ 
return new PythonQtShell_QCameraExposureControl(parent); }

const QMetaObject* PythonQtShell_QCameraExposureControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QCameraExposureControl::staticMetaObject);
  } else {
    return &QCameraExposureControl::staticMetaObject;
  }
}
int PythonQtShell_QCameraExposureControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QCameraExposureControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QVariant  PythonQtWrapper_QCameraExposureControl::actualValue(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter) const
{
  return ( theWrappedObject->actualValue(parameter));
}

bool  PythonQtWrapper_QCameraExposureControl::isParameterSupported(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter) const
{
  return ( theWrappedObject->isParameterSupported(parameter));
}

QVariant  PythonQtWrapper_QCameraExposureControl::requestedValue(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter) const
{
  return ( theWrappedObject->requestedValue(parameter));
}

bool  PythonQtWrapper_QCameraExposureControl::setValue(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter, const QVariant&  value)
{
  return ( theWrappedObject->setValue(parameter, value));
}

QList<QVariant >  PythonQtWrapper_QCameraExposureControl::supportedParameterRange(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter, bool*  continuous) const
{
  return ( theWrappedObject->supportedParameterRange(parameter, continuous));
}



PythonQtShell_QCameraFeedbackControl::~PythonQtShell_QCameraFeedbackControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QCameraFeedbackControl::childEvent(QChildEvent*  event0)
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
  QCameraFeedbackControl::childEvent(event0);
}
void PythonQtShell_QCameraFeedbackControl::customEvent(QEvent*  event0)
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
  QCameraFeedbackControl::customEvent(event0);
}
bool  PythonQtShell_QCameraFeedbackControl::event(QEvent*  event0)
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
  return QCameraFeedbackControl::event(event0);
}
bool  PythonQtShell_QCameraFeedbackControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QCameraFeedbackControl::eventFilter(watched0, event1);
}
bool  PythonQtShell_QCameraFeedbackControl::isEventFeedbackEnabled(QCameraFeedbackControl::EventType  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isEventFeedbackEnabled");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QCameraFeedbackControl::EventType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isEventFeedbackEnabled", methodInfo, result);
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
bool  PythonQtShell_QCameraFeedbackControl::isEventFeedbackLocked(QCameraFeedbackControl::EventType  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isEventFeedbackLocked");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QCameraFeedbackControl::EventType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isEventFeedbackLocked", methodInfo, result);
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
void PythonQtShell_QCameraFeedbackControl::resetEventFeedback(QCameraFeedbackControl::EventType  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resetEventFeedback");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QCameraFeedbackControl::EventType"};
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
  
}
bool  PythonQtShell_QCameraFeedbackControl::setEventFeedbackEnabled(QCameraFeedbackControl::EventType  arg__1, bool  arg__2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setEventFeedbackEnabled");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QCameraFeedbackControl::EventType" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setEventFeedbackEnabled", methodInfo, result);
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
bool  PythonQtShell_QCameraFeedbackControl::setEventFeedbackSound(QCameraFeedbackControl::EventType  arg__1, const QString&  filePath1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setEventFeedbackSound");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QCameraFeedbackControl::EventType" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&arg__1, (void*)&filePath1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setEventFeedbackSound", methodInfo, result);
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
void PythonQtShell_QCameraFeedbackControl::timerEvent(QTimerEvent*  event0)
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
  QCameraFeedbackControl::timerEvent(event0);
}
QCameraFeedbackControl* PythonQtWrapper_QCameraFeedbackControl::new_QCameraFeedbackControl(QObject*  parent)
{ 
return new PythonQtShell_QCameraFeedbackControl(parent); }

const QMetaObject* PythonQtShell_QCameraFeedbackControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QCameraFeedbackControl::staticMetaObject);
  } else {
    return &QCameraFeedbackControl::staticMetaObject;
  }
}
int PythonQtShell_QCameraFeedbackControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QCameraFeedbackControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QCameraFeedbackControl::isEventFeedbackEnabled(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1) const
{
  return ( theWrappedObject->isEventFeedbackEnabled(arg__1));
}

bool  PythonQtWrapper_QCameraFeedbackControl::isEventFeedbackLocked(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1) const
{
  return ( theWrappedObject->isEventFeedbackLocked(arg__1));
}

void PythonQtWrapper_QCameraFeedbackControl::resetEventFeedback(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1)
{
  ( theWrappedObject->resetEventFeedback(arg__1));
}

bool  PythonQtWrapper_QCameraFeedbackControl::setEventFeedbackEnabled(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1, bool  arg__2)
{
  return ( theWrappedObject->setEventFeedbackEnabled(arg__1, arg__2));
}

bool  PythonQtWrapper_QCameraFeedbackControl::setEventFeedbackSound(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1, const QString&  filePath)
{
  return ( theWrappedObject->setEventFeedbackSound(arg__1, filePath));
}



PythonQtShell_QCameraFlashControl::~PythonQtShell_QCameraFlashControl() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QCameraFlashControl::childEvent(QChildEvent*  event0)
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
  QCameraFlashControl::childEvent(event0);
}
void PythonQtShell_QCameraFlashControl::customEvent(QEvent*  event0)
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
  QCameraFlashControl::customEvent(event0);
}
bool  PythonQtShell_QCameraFlashControl::event(QEvent*  event0)
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
  return QCameraFlashControl::event(event0);
}
bool  PythonQtShell_QCameraFlashControl::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QCameraFlashControl::eventFilter(watched0, event1);
}
QCameraExposure::FlashModes  PythonQtShell_QCameraFlashControl::flashMode() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("flashMode");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QCameraExposure::FlashModes"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QCameraExposure::FlashModes returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("flashMode", methodInfo, result);
          } else {
            returnValue = *((QCameraExposure::FlashModes*)args[0]);
          }
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
  return QCameraExposure::FlashModes();
}
bool  PythonQtShell_QCameraFlashControl::isFlashModeSupported(QCameraExposure::FlashModes  mode0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isFlashModeSupported");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QCameraExposure::FlashModes"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isFlashModeSupported", methodInfo, result);
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
bool  PythonQtShell_QCameraFlashControl::isFlashReady() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isFlashReady");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isFlashReady", methodInfo, result);
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
void PythonQtShell_QCameraFlashControl::setFlashMode(QCameraExposure::FlashModes  mode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setFlashMode");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QCameraExposure::FlashModes"};
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
void PythonQtShell_QCameraFlashControl::timerEvent(QTimerEvent*  event0)
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
  QCameraFlashControl::timerEvent(event0);
}
QCameraFlashControl* PythonQtWrapper_QCameraFlashControl::new_QCameraFlashControl(QObject*  parent)
{ 
return new PythonQtShell_QCameraFlashControl(parent); }

const QMetaObject* PythonQtShell_QCameraFlashControl::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QCameraFlashControl::staticMetaObject);
  } else {
    return &QCameraFlashControl::staticMetaObject;
  }
}
int PythonQtShell_QCameraFlashControl::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QCameraFlashControl::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QCameraExposure::FlashModes  PythonQtWrapper_QCameraFlashControl::flashMode(QCameraFlashControl* theWrappedObject) const
{
  return ( theWrappedObject->flashMode());
}

bool  PythonQtWrapper_QCameraFlashControl::isFlashModeSupported(QCameraFlashControl* theWrappedObject, QCameraExposure::FlashModes  mode) const
{
  return ( theWrappedObject->isFlashModeSupported(mode));
}

bool  PythonQtWrapper_QCameraFlashControl::isFlashReady(QCameraFlashControl* theWrappedObject) const
{
  return ( theWrappedObject->isFlashReady());
}

void PythonQtWrapper_QCameraFlashControl::setFlashMode(QCameraFlashControl* theWrappedObject, QCameraExposure::FlashModes  mode)
{
  ( theWrappedObject->setFlashMode(mode));
}


