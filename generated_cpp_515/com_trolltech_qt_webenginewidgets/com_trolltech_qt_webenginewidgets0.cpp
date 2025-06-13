#include "com_trolltech_qt_webenginewidgets0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qaction.h>
#include <qauthenticator.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qjsonobject.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qnetworkcookie.h>
#include <qobject.h>
#include <qpagelayout.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qsslcertificate.h>
#include <qsslkey.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qthread.h>
#include <qurl.h>
#include <qvector.h>
#include <qwebchannel.h>
#include <qwebchannelabstracttransport.h>
#include <qwebenginecertificateerror.h>
#include <qwebengineclientcertificateselection.h>
#include <qwebengineclientcertificatestore.h>
#include <qwebenginecookiestore.h>
#include <qwebenginedownloaditem.h>
#include <qwebenginefindtextresult.h>
#include <qwebenginefullscreenrequest.h>
#include <qwebenginehistory.h>
#include <qwebenginehttprequest.h>
#include <qwebenginenotification.h>
#include <qwebenginepage.h>
#include <qwebengineprofile.h>
#include <qwebenginequotarequest.h>
#include <qwebengineregisterprotocolhandlerrequest.h>
#include <qwebenginescript.h>
#include <qwebenginescriptcollection.h>
#include <qwebenginesettings.h>
#include <qwebengineurlrequestinfo.h>
#include <qwebengineurlrequestinterceptor.h>
#include <qwebengineurlrequestjob.h>
#include <qwebengineurlscheme.h>
#include <qwebengineurlschemehandler.h>
#include <qwebengineview.h>
#include <qwidget.h>
#include <qwindow.h>

PythonQtShell_QWebChannel::~PythonQtShell_QWebChannel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebChannel::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannel::childEvent(event0);
}
void PythonQtShell_QWebChannel::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannel::customEvent(event0);
}
bool  PythonQtShell_QWebChannel::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebChannel::event(event0);
}
bool  PythonQtShell_QWebChannel::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebChannel::eventFilter(watched0, event1);
}
void PythonQtShell_QWebChannel::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannel::timerEvent(event0);
}
QWebChannel* PythonQtWrapper_QWebChannel::new_QWebChannel(QObject*  parent)
{ 
return new PythonQtShell_QWebChannel(parent); }

const QMetaObject* PythonQtShell_QWebChannel::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebChannel::staticMetaObject);
  } else {
    return &QWebChannel::staticMetaObject;
  }
}
int PythonQtShell_QWebChannel::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebChannel::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QWebChannel::blockUpdates(QWebChannel* theWrappedObject) const
{
  return ( theWrappedObject->blockUpdates());
}

void PythonQtWrapper_QWebChannel::deregisterObject(QWebChannel* theWrappedObject, QObject*  object)
{
  ( theWrappedObject->deregisterObject(object));
}

void PythonQtWrapper_QWebChannel::registerObject(QWebChannel* theWrappedObject, const QString&  id, QObject*  object)
{
  ( theWrappedObject->registerObject(id, object));
}

void PythonQtWrapper_QWebChannel::registerObjects(QWebChannel* theWrappedObject, const QHash<QString , QObject* >&  objects)
{
  ( theWrappedObject->registerObjects(objects));
}

QHash<QString , QObject* >  PythonQtWrapper_QWebChannel::registeredObjects(QWebChannel* theWrappedObject) const
{
  return ( theWrappedObject->registeredObjects());
}

void PythonQtWrapper_QWebChannel::setBlockUpdates(QWebChannel* theWrappedObject, bool  block)
{
  ( theWrappedObject->setBlockUpdates(block));
}



PythonQtShell_QWebChannelAbstractTransport::~PythonQtShell_QWebChannelAbstractTransport() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebChannelAbstractTransport::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannelAbstractTransport::childEvent(event0);
}
void PythonQtShell_QWebChannelAbstractTransport::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannelAbstractTransport::customEvent(event0);
}
bool  PythonQtShell_QWebChannelAbstractTransport::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebChannelAbstractTransport::event(event0);
}
bool  PythonQtShell_QWebChannelAbstractTransport::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebChannelAbstractTransport::eventFilter(watched0, event1);
}
void PythonQtShell_QWebChannelAbstractTransport::sendMessage(const QJsonObject&  message0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("sendMessage");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QJsonObject&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&message0};
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
void PythonQtShell_QWebChannelAbstractTransport::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebChannelAbstractTransport::timerEvent(event0);
}
QWebChannelAbstractTransport* PythonQtWrapper_QWebChannelAbstractTransport::new_QWebChannelAbstractTransport(QObject*  parent)
{ 
return new PythonQtShell_QWebChannelAbstractTransport(parent); }

const QMetaObject* PythonQtShell_QWebChannelAbstractTransport::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebChannelAbstractTransport::staticMetaObject);
  } else {
    return &QWebChannelAbstractTransport::staticMetaObject;
  }
}
int PythonQtShell_QWebChannelAbstractTransport::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebChannelAbstractTransport::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


QWebEngineCertificateError* PythonQtWrapper_QWebEngineCertificateError::new_QWebEngineCertificateError(const QWebEngineCertificateError&  other)
{ 
return new QWebEngineCertificateError(other); }

QWebEngineCertificateError* PythonQtWrapper_QWebEngineCertificateError::new_QWebEngineCertificateError(int  error, QUrl  url, bool  overridable, QString  errorDescription)
{ 
return new QWebEngineCertificateError(error, url, overridable, errorDescription); }

bool  PythonQtWrapper_QWebEngineCertificateError::answered(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->answered());
}

QList<QSslCertificate >  PythonQtWrapper_QWebEngineCertificateError::certificateChain(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->certificateChain());
}

void PythonQtWrapper_QWebEngineCertificateError::defer(QWebEngineCertificateError* theWrappedObject)
{
  ( theWrappedObject->defer());
}

bool  PythonQtWrapper_QWebEngineCertificateError::deferred(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->deferred());
}

QWebEngineCertificateError::Error  PythonQtWrapper_QWebEngineCertificateError::error(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QWebEngineCertificateError::errorDescription(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->errorDescription());
}

void PythonQtWrapper_QWebEngineCertificateError::ignoreCertificateError(QWebEngineCertificateError* theWrappedObject)
{
  ( theWrappedObject->ignoreCertificateError());
}

bool  PythonQtWrapper_QWebEngineCertificateError::isOverridable(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->isOverridable());
}

QWebEngineCertificateError*  PythonQtWrapper_QWebEngineCertificateError::operator_assign(QWebEngineCertificateError* theWrappedObject, const QWebEngineCertificateError&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QWebEngineCertificateError::rejectCertificate(QWebEngineCertificateError* theWrappedObject)
{
  ( theWrappedObject->rejectCertificate());
}

QUrl  PythonQtWrapper_QWebEngineCertificateError::url(QWebEngineCertificateError* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QWebEngineClientCertificateSelection* PythonQtWrapper_QWebEngineClientCertificateSelection::new_QWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection&  arg__1)
{ 
return new QWebEngineClientCertificateSelection(arg__1); }

QVector<QSslCertificate >  PythonQtWrapper_QWebEngineClientCertificateSelection::certificates(QWebEngineClientCertificateSelection* theWrappedObject) const
{
  return ( theWrappedObject->certificates());
}

QUrl  PythonQtWrapper_QWebEngineClientCertificateSelection::host(QWebEngineClientCertificateSelection* theWrappedObject) const
{
  return ( theWrappedObject->host());
}

QWebEngineClientCertificateSelection*  PythonQtWrapper_QWebEngineClientCertificateSelection::operator_assign(QWebEngineClientCertificateSelection* theWrappedObject, const QWebEngineClientCertificateSelection&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

void PythonQtWrapper_QWebEngineClientCertificateSelection::select(QWebEngineClientCertificateSelection* theWrappedObject, const QSslCertificate&  certificate)
{
  ( theWrappedObject->select(certificate));
}

void PythonQtWrapper_QWebEngineClientCertificateSelection::selectNone(QWebEngineClientCertificateSelection* theWrappedObject)
{
  ( theWrappedObject->selectNone());
}



void PythonQtWrapper_QWebEngineClientCertificateStore::add(QWebEngineClientCertificateStore* theWrappedObject, const QSslCertificate&  certificate, const QSslKey&  privateKey)
{
  ( theWrappedObject->add(certificate, privateKey));
}

QVector<QSslCertificate >  PythonQtWrapper_QWebEngineClientCertificateStore::certificates(QWebEngineClientCertificateStore* theWrappedObject) const
{
  return ( theWrappedObject->certificates());
}

void PythonQtWrapper_QWebEngineClientCertificateStore::clear(QWebEngineClientCertificateStore* theWrappedObject)
{
  ( theWrappedObject->clear());
}

void PythonQtWrapper_QWebEngineClientCertificateStore::remove(QWebEngineClientCertificateStore* theWrappedObject, const QSslCertificate&  certificate)
{
  ( theWrappedObject->remove(certificate));
}



void PythonQtWrapper_QWebEngineCookieStore::deleteAllCookies(QWebEngineCookieStore* theWrappedObject)
{
  ( theWrappedObject->deleteAllCookies());
}

void PythonQtWrapper_QWebEngineCookieStore::deleteCookie(QWebEngineCookieStore* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  origin)
{
  ( theWrappedObject->deleteCookie(cookie, origin));
}

void PythonQtWrapper_QWebEngineCookieStore::deleteSessionCookies(QWebEngineCookieStore* theWrappedObject)
{
  ( theWrappedObject->deleteSessionCookies());
}

void PythonQtWrapper_QWebEngineCookieStore::loadAllCookies(QWebEngineCookieStore* theWrappedObject)
{
  ( theWrappedObject->loadAllCookies());
}

void PythonQtWrapper_QWebEngineCookieStore::setCookie(QWebEngineCookieStore* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  origin)
{
  ( theWrappedObject->setCookie(cookie, origin));
}



PythonQtShell_QWebEngineCookieStore__FilterRequest::~PythonQtShell_QWebEngineCookieStore__FilterRequest() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebEngineCookieStore::FilterRequest* PythonQtWrapper_QWebEngineCookieStore__FilterRequest::new_QWebEngineCookieStore__FilterRequest()
{ 
return new PythonQtShell_QWebEngineCookieStore__FilterRequest(); }



QString  PythonQtWrapper_QWebEngineDownloadItem::downloadDirectory(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->downloadDirectory());
}

QString  PythonQtWrapper_QWebEngineDownloadItem::downloadFileName(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->downloadFileName());
}

unsigned int  PythonQtWrapper_QWebEngineDownloadItem::id(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

QWebEngineDownloadItem::DownloadInterruptReason  PythonQtWrapper_QWebEngineDownloadItem::interruptReason(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->interruptReason());
}

QString  PythonQtWrapper_QWebEngineDownloadItem::interruptReasonString(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->interruptReasonString());
}

bool  PythonQtWrapper_QWebEngineDownloadItem::isFinished(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->isFinished());
}

bool  PythonQtWrapper_QWebEngineDownloadItem::isPaused(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->isPaused());
}

bool  PythonQtWrapper_QWebEngineDownloadItem::isSavePageDownload(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->isSavePageDownload());
}

QString  PythonQtWrapper_QWebEngineDownloadItem::mimeType(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->mimeType());
}

QWebEnginePage*  PythonQtWrapper_QWebEngineDownloadItem::page(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->page());
}

QString  PythonQtWrapper_QWebEngineDownloadItem::path(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

qint64  PythonQtWrapper_QWebEngineDownloadItem::receivedBytes(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->receivedBytes());
}

QWebEngineDownloadItem::SavePageFormat  PythonQtWrapper_QWebEngineDownloadItem::savePageFormat(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->savePageFormat());
}

void PythonQtWrapper_QWebEngineDownloadItem::setDownloadDirectory(QWebEngineDownloadItem* theWrappedObject, const QString&  directory)
{
  ( theWrappedObject->setDownloadDirectory(directory));
}

void PythonQtWrapper_QWebEngineDownloadItem::setDownloadFileName(QWebEngineDownloadItem* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setDownloadFileName(fileName));
}

void PythonQtWrapper_QWebEngineDownloadItem::setPath(QWebEngineDownloadItem* theWrappedObject, QString  path)
{
  ( theWrappedObject->setPath(path));
}

void PythonQtWrapper_QWebEngineDownloadItem::setSavePageFormat(QWebEngineDownloadItem* theWrappedObject, QWebEngineDownloadItem::SavePageFormat  format)
{
  ( theWrappedObject->setSavePageFormat(format));
}

QWebEngineDownloadItem::DownloadState  PythonQtWrapper_QWebEngineDownloadItem::state(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QString  PythonQtWrapper_QWebEngineDownloadItem::suggestedFileName(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->suggestedFileName());
}

qint64  PythonQtWrapper_QWebEngineDownloadItem::totalBytes(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->totalBytes());
}

QWebEngineDownloadItem::DownloadType  PythonQtWrapper_QWebEngineDownloadItem::type(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QUrl  PythonQtWrapper_QWebEngineDownloadItem::url(QWebEngineDownloadItem* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QWebEngineFindTextResult* PythonQtWrapper_QWebEngineFindTextResult::new_QWebEngineFindTextResult()
{ 
return new QWebEngineFindTextResult(); }

QWebEngineFindTextResult* PythonQtWrapper_QWebEngineFindTextResult::new_QWebEngineFindTextResult(const QWebEngineFindTextResult&  other)
{ 
return new QWebEngineFindTextResult(other); }

int  PythonQtWrapper_QWebEngineFindTextResult::activeMatch(QWebEngineFindTextResult* theWrappedObject) const
{
  return ( theWrappedObject->activeMatch());
}

int  PythonQtWrapper_QWebEngineFindTextResult::numberOfMatches(QWebEngineFindTextResult* theWrappedObject) const
{
  return ( theWrappedObject->numberOfMatches());
}

QWebEngineFindTextResult*  PythonQtWrapper_QWebEngineFindTextResult::operator_assign(QWebEngineFindTextResult* theWrappedObject, const QWebEngineFindTextResult&  other)
{
  return &( (*theWrappedObject)= other);
}



void PythonQtWrapper_QWebEngineFullScreenRequest::accept(QWebEngineFullScreenRequest* theWrappedObject)
{
  ( theWrappedObject->accept());
}

const QUrl*  PythonQtWrapper_QWebEngineFullScreenRequest::origin(QWebEngineFullScreenRequest* theWrappedObject) const
{
  return &( theWrappedObject->origin());
}

void PythonQtWrapper_QWebEngineFullScreenRequest::reject(QWebEngineFullScreenRequest* theWrappedObject)
{
  ( theWrappedObject->reject());
}

bool  PythonQtWrapper_QWebEngineFullScreenRequest::toggleOn(QWebEngineFullScreenRequest* theWrappedObject) const
{
  return ( theWrappedObject->toggleOn());
}



void PythonQtWrapper_QWebEngineHistory::back(QWebEngineHistory* theWrappedObject)
{
  ( theWrappedObject->back());
}

QWebEngineHistoryItem  PythonQtWrapper_QWebEngineHistory::backItem(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->backItem());
}

QList<QWebEngineHistoryItem >  PythonQtWrapper_QWebEngineHistory::backItems(QWebEngineHistory* theWrappedObject, int  maxItems) const
{
  return ( theWrappedObject->backItems(maxItems));
}

bool  PythonQtWrapper_QWebEngineHistory::canGoBack(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->canGoBack());
}

bool  PythonQtWrapper_QWebEngineHistory::canGoForward(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->canGoForward());
}

void PythonQtWrapper_QWebEngineHistory::clear(QWebEngineHistory* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QWebEngineHistory::count(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QWebEngineHistoryItem  PythonQtWrapper_QWebEngineHistory::currentItem(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->currentItem());
}

int  PythonQtWrapper_QWebEngineHistory::currentItemIndex(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->currentItemIndex());
}

void PythonQtWrapper_QWebEngineHistory::forward(QWebEngineHistory* theWrappedObject)
{
  ( theWrappedObject->forward());
}

QWebEngineHistoryItem  PythonQtWrapper_QWebEngineHistory::forwardItem(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->forwardItem());
}

QList<QWebEngineHistoryItem >  PythonQtWrapper_QWebEngineHistory::forwardItems(QWebEngineHistory* theWrappedObject, int  maxItems) const
{
  return ( theWrappedObject->forwardItems(maxItems));
}

void PythonQtWrapper_QWebEngineHistory::goToItem(QWebEngineHistory* theWrappedObject, const QWebEngineHistoryItem&  item)
{
  ( theWrappedObject->goToItem(item));
}

QWebEngineHistoryItem  PythonQtWrapper_QWebEngineHistory::itemAt(QWebEngineHistory* theWrappedObject, int  i) const
{
  return ( theWrappedObject->itemAt(i));
}

QList<QWebEngineHistoryItem >  PythonQtWrapper_QWebEngineHistory::items(QWebEngineHistory* theWrappedObject) const
{
  return ( theWrappedObject->items());
}

void PythonQtWrapper_QWebEngineHistory::writeTo(QWebEngineHistory* theWrappedObject, QDataStream&  stream)
{
  stream <<  (*theWrappedObject);
}

void PythonQtWrapper_QWebEngineHistory::readFrom(QWebEngineHistory* theWrappedObject, QDataStream&  stream)
{
  stream >>  (*theWrappedObject);
}



QWebEngineHistoryItem* PythonQtWrapper_QWebEngineHistoryItem::new_QWebEngineHistoryItem(const QWebEngineHistoryItem&  other)
{ 
return new QWebEngineHistoryItem(other); }

QUrl  PythonQtWrapper_QWebEngineHistoryItem::iconUrl(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->iconUrl());
}

bool  PythonQtWrapper_QWebEngineHistoryItem::isValid(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QDateTime  PythonQtWrapper_QWebEngineHistoryItem::lastVisited(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->lastVisited());
}

QWebEngineHistoryItem*  PythonQtWrapper_QWebEngineHistoryItem::operator_assign(QWebEngineHistoryItem* theWrappedObject, const QWebEngineHistoryItem&  other)
{
  return &( (*theWrappedObject)= other);
}

QUrl  PythonQtWrapper_QWebEngineHistoryItem::originalUrl(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->originalUrl());
}

void PythonQtWrapper_QWebEngineHistoryItem::swap(QWebEngineHistoryItem* theWrappedObject, QWebEngineHistoryItem&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QWebEngineHistoryItem::title(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

QUrl  PythonQtWrapper_QWebEngineHistoryItem::url(QWebEngineHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QWebEngineHttpRequest* PythonQtWrapper_QWebEngineHttpRequest::new_QWebEngineHttpRequest(const QUrl&  url, const QWebEngineHttpRequest::Method&  method)
{ 
return new QWebEngineHttpRequest(url, method); }

QWebEngineHttpRequest* PythonQtWrapper_QWebEngineHttpRequest::new_QWebEngineHttpRequest(const QWebEngineHttpRequest&  other)
{ 
return new QWebEngineHttpRequest(other); }

bool  PythonQtWrapper_QWebEngineHttpRequest::hasHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->hasHeader(headerName));
}

QByteArray  PythonQtWrapper_QWebEngineHttpRequest::header(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->header(headerName));
}

QVector<QByteArray >  PythonQtWrapper_QWebEngineHttpRequest::headers(QWebEngineHttpRequest* theWrappedObject) const
{
  return ( theWrappedObject->headers());
}

QWebEngineHttpRequest::Method  PythonQtWrapper_QWebEngineHttpRequest::method(QWebEngineHttpRequest* theWrappedObject) const
{
  return ( theWrappedObject->method());
}

bool  PythonQtWrapper_QWebEngineHttpRequest::__ne__(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QWebEngineHttpRequest*  PythonQtWrapper_QWebEngineHttpRequest::operator_assign(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QWebEngineHttpRequest::__eq__(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other) const
{
  return ( (*theWrappedObject)== other);
}

QByteArray  PythonQtWrapper_QWebEngineHttpRequest::postData(QWebEngineHttpRequest* theWrappedObject) const
{
  return ( theWrappedObject->postData());
}

QWebEngineHttpRequest  PythonQtWrapper_QWebEngineHttpRequest::static_QWebEngineHttpRequest_postRequest(const QUrl&  url, const QMap<QString , QString >&  postData)
{
  return (QWebEngineHttpRequest::postRequest(url, postData));
}

void PythonQtWrapper_QWebEngineHttpRequest::setHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value)
{
  ( theWrappedObject->setHeader(headerName, value));
}

void PythonQtWrapper_QWebEngineHttpRequest::setMethod(QWebEngineHttpRequest* theWrappedObject, QWebEngineHttpRequest::Method  method)
{
  ( theWrappedObject->setMethod(method));
}

void PythonQtWrapper_QWebEngineHttpRequest::setPostData(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  postData)
{
  ( theWrappedObject->setPostData(postData));
}

void PythonQtWrapper_QWebEngineHttpRequest::setUrl(QWebEngineHttpRequest* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QWebEngineHttpRequest::swap(QWebEngineHttpRequest* theWrappedObject, QWebEngineHttpRequest&  other)
{
  ( theWrappedObject->swap(other));
}

void PythonQtWrapper_QWebEngineHttpRequest::unsetHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName)
{
  ( theWrappedObject->unsetHeader(headerName));
}

QUrl  PythonQtWrapper_QWebEngineHttpRequest::url(QWebEngineHttpRequest* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



Qt::LayoutDirection  PythonQtWrapper_QWebEngineNotification::direction(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->direction());
}

QImage  PythonQtWrapper_QWebEngineNotification::icon(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

QString  PythonQtWrapper_QWebEngineNotification::language(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->language());
}

bool  PythonQtWrapper_QWebEngineNotification::matches(QWebEngineNotification* theWrappedObject, const QWebEngineNotification*  other) const
{
  return ( theWrappedObject->matches(other));
}

QString  PythonQtWrapper_QWebEngineNotification::message(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->message());
}

QUrl  PythonQtWrapper_QWebEngineNotification::origin(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

QString  PythonQtWrapper_QWebEngineNotification::tag(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->tag());
}

QString  PythonQtWrapper_QWebEngineNotification::title(QWebEngineNotification* theWrappedObject) const
{
  return ( theWrappedObject->title());
}



PythonQtShell_QWebEnginePage::~PythonQtShell_QWebEnginePage() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QWebEnginePage::acceptNavigationRequest(const QUrl&  url0, QWebEnginePage::NavigationType  type1, bool  isMainFrame2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("acceptNavigationRequest");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUrl&" , "QWebEnginePage::NavigationType" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&url0, (void*)&type1, (void*)&isMainFrame2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("acceptNavigationRequest", methodInfo, result);
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
  return QWebEnginePage::acceptNavigationRequest(url0, type1, isMainFrame2);
}
bool  PythonQtShell_QWebEnginePage::certificateError(const QWebEngineCertificateError&  certificateError0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("certificateError");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QWebEngineCertificateError&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&certificateError0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("certificateError", methodInfo, result);
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
  return QWebEnginePage::certificateError(certificateError0);
}
void PythonQtShell_QWebEnginePage::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::childEvent(event0);
}
QStringList  PythonQtShell_QWebEnginePage::chooseFiles(QWebEnginePage::FileSelectionMode  mode0, const QStringList&  oldFiles1, const QStringList&  acceptedMimeTypes2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("chooseFiles");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList" , "QWebEnginePage::FileSelectionMode" , "const QStringList&" , "const QStringList&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QStringList returnValue{};
      void* args[4] = {nullptr, (void*)&mode0, (void*)&oldFiles1, (void*)&acceptedMimeTypes2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("chooseFiles", methodInfo, result);
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
  return QWebEnginePage::chooseFiles(mode0, oldFiles1, acceptedMimeTypes2);
}
QWebEnginePage*  PythonQtShell_QWebEnginePage::createWindow(QWebEnginePage::WebWindowType  type0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("createWindow");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWebEnginePage*" , "QWebEnginePage::WebWindowType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QWebEnginePage* returnValue{};
      void* args[2] = {nullptr, (void*)&type0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createWindow", methodInfo, result);
          } else {
            returnValue = *((QWebEnginePage**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEnginePage::createWindow(type0);
}
void PythonQtShell_QWebEnginePage::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::customEvent(event0);
}
bool  PythonQtShell_QWebEnginePage::event(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEnginePage::event(arg__1);
}
bool  PythonQtShell_QWebEnginePage::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEnginePage::eventFilter(watched0, event1);
}
void PythonQtShell_QWebEnginePage::javaScriptAlert(const QUrl&  securityOrigin0, const QString&  msg1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("javaScriptAlert");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QUrl&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&securityOrigin0, (void*)&msg1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::javaScriptAlert(securityOrigin0, msg1);
}
bool  PythonQtShell_QWebEnginePage::javaScriptConfirm(const QUrl&  securityOrigin0, const QString&  msg1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("javaScriptConfirm");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUrl&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&securityOrigin0, (void*)&msg1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("javaScriptConfirm", methodInfo, result);
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
  return QWebEnginePage::javaScriptConfirm(securityOrigin0, msg1);
}
void PythonQtShell_QWebEnginePage::javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level0, const QString&  message1, int  lineNumber2, const QString&  sourceID3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("javaScriptConsoleMessage");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWebEnginePage::JavaScriptConsoleMessageLevel" , "const QString&" , "int" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      void* args[5] = {nullptr, (void*)&level0, (void*)&message1, (void*)&lineNumber2, (void*)&sourceID3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::javaScriptConsoleMessage(level0, message1, lineNumber2, sourceID3);
}
bool  PythonQtShell_QWebEnginePage::javaScriptPrompt(const QUrl&  securityOrigin0, const QString&  msg1, const QString&  defaultValue2, QString*  result3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("javaScriptPrompt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUrl&" , "const QString&" , "const QString&" , "QString*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue{};
      void* args[5] = {nullptr, (void*)&securityOrigin0, (void*)&msg1, (void*)&defaultValue2, (void*)&result3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("javaScriptPrompt", methodInfo, result);
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
  return QWebEnginePage::javaScriptPrompt(securityOrigin0, msg1, defaultValue2, result3);
}
void PythonQtShell_QWebEnginePage::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::timerEvent(event0);
}
void PythonQtShell_QWebEnginePage::triggerAction(QWebEnginePage::WebAction  action0, bool  checked1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("triggerAction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWebEnginePage::WebAction" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&action0, (void*)&checked1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEnginePage::triggerAction(action0, checked1);
}
QWebEnginePage* PythonQtWrapper_QWebEnginePage::new_QWebEnginePage(QObject*  parent)
{ 
return new PythonQtShell_QWebEnginePage(parent); }

QWebEnginePage* PythonQtWrapper_QWebEnginePage::new_QWebEnginePage(QWebEngineProfile*  profile, QObject*  parent)
{ 
return new PythonQtShell_QWebEnginePage(profile, parent); }

const QMetaObject* PythonQtShell_QWebEnginePage::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebEnginePage::staticMetaObject);
  } else {
    return &QWebEnginePage::staticMetaObject;
  }
}
int PythonQtShell_QWebEnginePage::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebEnginePage::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QWebEnginePage::acceptNavigationRequest(QWebEnginePage* theWrappedObject, const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_acceptNavigationRequest(url, type, isMainFrame));
}

QAction*  PythonQtWrapper_QWebEnginePage::action(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action) const
{
  return ( theWrappedObject->action(action));
}

QColor  PythonQtWrapper_QWebEnginePage::backgroundColor(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->backgroundColor());
}

bool  PythonQtWrapper_QWebEnginePage::certificateError(QWebEnginePage* theWrappedObject, const QWebEngineCertificateError&  certificateError)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_certificateError(certificateError));
}

QStringList  PythonQtWrapper_QWebEnginePage::chooseFiles(QWebEnginePage* theWrappedObject, QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_chooseFiles(mode, oldFiles, acceptedMimeTypes));
}

QSizeF  PythonQtWrapper_QWebEnginePage::contentsSize(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->contentsSize());
}

QMenu*  PythonQtWrapper_QWebEnginePage::createStandardContextMenu(QWebEnginePage* theWrappedObject)
{
  return ( theWrappedObject->createStandardContextMenu());
}

QWebEnginePage*  PythonQtWrapper_QWebEnginePage::createWindow(QWebEnginePage* theWrappedObject, QWebEnginePage::WebWindowType  type)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_createWindow(type));
}

QWebEnginePage*  PythonQtWrapper_QWebEnginePage::devToolsPage(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->devToolsPage());
}

void PythonQtWrapper_QWebEnginePage::download(QWebEnginePage* theWrappedObject, const QUrl&  url, const QString&  filename)
{
  ( theWrappedObject->download(url, filename));
}

bool  PythonQtWrapper_QWebEnginePage::hasSelection(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->hasSelection());
}

QWebEngineHistory*  PythonQtWrapper_QWebEnginePage::history(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->history());
}

QIcon  PythonQtWrapper_QWebEnginePage::icon(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

QUrl  PythonQtWrapper_QWebEnginePage::iconUrl(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->iconUrl());
}

QWebEnginePage*  PythonQtWrapper_QWebEnginePage::inspectedPage(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->inspectedPage());
}

bool  PythonQtWrapper_QWebEnginePage::isAudioMuted(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->isAudioMuted());
}

bool  PythonQtWrapper_QWebEnginePage::isVisible(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

void PythonQtWrapper_QWebEnginePage::javaScriptAlert(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg)
{
  ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_javaScriptAlert(securityOrigin, msg));
}

bool  PythonQtWrapper_QWebEnginePage::javaScriptConfirm(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_javaScriptConfirm(securityOrigin, msg));
}

void PythonQtWrapper_QWebEnginePage::javaScriptConsoleMessage(QWebEnginePage* theWrappedObject, QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID)
{
  ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_javaScriptConsoleMessage(level, message, lineNumber, sourceID));
}

bool  PythonQtWrapper_QWebEnginePage::javaScriptPrompt(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result)
{
  return ( ((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->promoted_javaScriptPrompt(securityOrigin, msg, defaultValue, result));
}

QWebEnginePage::LifecycleState  PythonQtWrapper_QWebEnginePage::lifecycleState(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->lifecycleState());
}

void PythonQtWrapper_QWebEnginePage::load(QWebEnginePage* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->load(url));
}

void PythonQtWrapper_QWebEnginePage::load(QWebEnginePage* theWrappedObject, const QWebEngineHttpRequest&  request)
{
  ( theWrappedObject->load(request));
}

void PythonQtWrapper_QWebEnginePage::printToPdf(QWebEnginePage* theWrappedObject, const QString&  filePath, const QPageLayout&  layout)
{
  ( theWrappedObject->printToPdf(filePath, layout));
}

QWebEngineProfile*  PythonQtWrapper_QWebEnginePage::profile(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->profile());
}

bool  PythonQtWrapper_QWebEnginePage::recentlyAudible(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->recentlyAudible());
}

QWebEnginePage::LifecycleState  PythonQtWrapper_QWebEnginePage::recommendedState(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->recommendedState());
}

qint64  PythonQtWrapper_QWebEnginePage::renderProcessPid(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->renderProcessPid());
}

void PythonQtWrapper_QWebEnginePage::replaceMisspelledWord(QWebEnginePage* theWrappedObject, const QString&  replacement)
{
  ( theWrappedObject->replaceMisspelledWord(replacement));
}

QUrl  PythonQtWrapper_QWebEnginePage::requestedUrl(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->requestedUrl());
}

void PythonQtWrapper_QWebEnginePage::runJavaScript(QWebEnginePage* theWrappedObject, const QString&  scriptSource)
{
  ( theWrappedObject->runJavaScript(scriptSource));
}

void PythonQtWrapper_QWebEnginePage::runJavaScript(QWebEnginePage* theWrappedObject, const QString&  scriptSource, unsigned int  worldId)
{
  ( theWrappedObject->runJavaScript(scriptSource, worldId));
}

void PythonQtWrapper_QWebEnginePage::save(QWebEnginePage* theWrappedObject, const QString&  filePath, QWebEngineDownloadItem::SavePageFormat  format) const
{
  ( theWrappedObject->save(filePath, format));
}

QWebEngineScriptCollection*  PythonQtWrapper_QWebEnginePage::scripts(QWebEnginePage* theWrappedObject)
{
  return &( theWrappedObject->scripts());
}

QPointF  PythonQtWrapper_QWebEnginePage::scrollPosition(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->scrollPosition());
}

QString  PythonQtWrapper_QWebEnginePage::selectedText(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

void PythonQtWrapper_QWebEnginePage::setAudioMuted(QWebEnginePage* theWrappedObject, bool  muted)
{
  ( theWrappedObject->setAudioMuted(muted));
}

void PythonQtWrapper_QWebEnginePage::setBackgroundColor(QWebEnginePage* theWrappedObject, const QColor&  color)
{
  ( theWrappedObject->setBackgroundColor(color));
}

void PythonQtWrapper_QWebEnginePage::setContent(QWebEnginePage* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
  ( theWrappedObject->setContent(data, mimeType, baseUrl));
}

void PythonQtWrapper_QWebEnginePage::setDevToolsPage(QWebEnginePage* theWrappedObject, QWebEnginePage*  page)
{
  ( theWrappedObject->setDevToolsPage(page));
}

void PythonQtWrapper_QWebEnginePage::setFeaturePermission(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, QWebEnginePage::Feature  feature, QWebEnginePage::PermissionPolicy  policy)
{
  ( theWrappedObject->setFeaturePermission(securityOrigin, feature, policy));
}

void PythonQtWrapper_QWebEnginePage::setHtml(QWebEnginePage* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
  ( theWrappedObject->setHtml(html, baseUrl));
}

void PythonQtWrapper_QWebEnginePage::setInspectedPage(QWebEnginePage* theWrappedObject, QWebEnginePage*  page)
{
  ( theWrappedObject->setInspectedPage(page));
}

void PythonQtWrapper_QWebEnginePage::setLifecycleState(QWebEnginePage* theWrappedObject, QWebEnginePage::LifecycleState  state)
{
  ( theWrappedObject->setLifecycleState(state));
}

void PythonQtWrapper_QWebEnginePage::setUrl(QWebEnginePage* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QWebEnginePage::setUrlRequestInterceptor(QWebEnginePage* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor)
{
  ( theWrappedObject->setUrlRequestInterceptor(interceptor));
}

void PythonQtWrapper_QWebEnginePage::setView(QWebEnginePage* theWrappedObject, QWidget*  view)
{
  ( theWrappedObject->setView(view));
}

void PythonQtWrapper_QWebEnginePage::setVisible(QWebEnginePage* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setVisible(visible));
}

void PythonQtWrapper_QWebEnginePage::setWebChannel(QWebEnginePage* theWrappedObject, QWebChannel*  arg__1)
{
  ( theWrappedObject->setWebChannel(arg__1));
}

void PythonQtWrapper_QWebEnginePage::setWebChannel(QWebEnginePage* theWrappedObject, QWebChannel*  arg__1, uint  worldId)
{
  ( theWrappedObject->setWebChannel(arg__1, worldId));
}

void PythonQtWrapper_QWebEnginePage::setZoomFactor(QWebEnginePage* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setZoomFactor(factor));
}

QWebEngineSettings*  PythonQtWrapper_QWebEnginePage::settings(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->settings());
}

QString  PythonQtWrapper_QWebEnginePage::title(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

void PythonQtWrapper_QWebEnginePage::triggerAction(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked)
{
  ( theWrappedObject->triggerAction(action, checked));
}

QUrl  PythonQtWrapper_QWebEnginePage::url(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

QWidget*  PythonQtWrapper_QWebEnginePage::view(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->view());
}

QWebChannel*  PythonQtWrapper_QWebEnginePage::webChannel(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->webChannel());
}

qreal  PythonQtWrapper_QWebEnginePage::zoomFactor(QWebEnginePage* theWrappedObject) const
{
  return ( theWrappedObject->zoomFactor());
}



PythonQtShell_QWebEngineProfile::~PythonQtShell_QWebEngineProfile() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebEngineProfile::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineProfile::childEvent(event0);
}
void PythonQtShell_QWebEngineProfile::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineProfile::customEvent(event0);
}
bool  PythonQtShell_QWebEngineProfile::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineProfile::event(event0);
}
bool  PythonQtShell_QWebEngineProfile::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineProfile::eventFilter(watched0, event1);
}
void PythonQtShell_QWebEngineProfile::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineProfile::timerEvent(event0);
}
QWebEngineProfile* PythonQtWrapper_QWebEngineProfile::new_QWebEngineProfile(QObject*  parent)
{ 
return new PythonQtShell_QWebEngineProfile(parent); }

QWebEngineProfile* PythonQtWrapper_QWebEngineProfile::new_QWebEngineProfile(const QString&  name, QObject*  parent)
{ 
return new PythonQtShell_QWebEngineProfile(name, parent); }

const QMetaObject* PythonQtShell_QWebEngineProfile::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebEngineProfile::staticMetaObject);
  } else {
    return &QWebEngineProfile::staticMetaObject;
  }
}
int PythonQtShell_QWebEngineProfile::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebEngineProfile::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QWebEngineProfile::cachePath(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->cachePath());
}

void PythonQtWrapper_QWebEngineProfile::clearAllVisitedLinks(QWebEngineProfile* theWrappedObject)
{
  ( theWrappedObject->clearAllVisitedLinks());
}

void PythonQtWrapper_QWebEngineProfile::clearHttpCache(QWebEngineProfile* theWrappedObject)
{
  ( theWrappedObject->clearHttpCache());
}

void PythonQtWrapper_QWebEngineProfile::clearVisitedLinks(QWebEngineProfile* theWrappedObject, const QList<QUrl >&  urls)
{
  ( theWrappedObject->clearVisitedLinks(urls));
}

QWebEngineClientCertificateStore*  PythonQtWrapper_QWebEngineProfile::clientCertificateStore(QWebEngineProfile* theWrappedObject)
{
  return ( theWrappedObject->clientCertificateStore());
}

QWebEngineCookieStore*  PythonQtWrapper_QWebEngineProfile::cookieStore(QWebEngineProfile* theWrappedObject)
{
  return ( theWrappedObject->cookieStore());
}

QWebEngineProfile*  PythonQtWrapper_QWebEngineProfile::static_QWebEngineProfile_defaultProfile()
{
  return (QWebEngineProfile::defaultProfile());
}

QString  PythonQtWrapper_QWebEngineProfile::downloadPath(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->downloadPath());
}

QString  PythonQtWrapper_QWebEngineProfile::httpAcceptLanguage(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->httpAcceptLanguage());
}

int  PythonQtWrapper_QWebEngineProfile::httpCacheMaximumSize(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->httpCacheMaximumSize());
}

QWebEngineProfile::HttpCacheType  PythonQtWrapper_QWebEngineProfile::httpCacheType(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->httpCacheType());
}

QString  PythonQtWrapper_QWebEngineProfile::httpUserAgent(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->httpUserAgent());
}

void PythonQtWrapper_QWebEngineProfile::installUrlSchemeHandler(QWebEngineProfile* theWrappedObject, const QByteArray&  scheme, QWebEngineUrlSchemeHandler*  arg__2)
{
  ( theWrappedObject->installUrlSchemeHandler(scheme, arg__2));
}

bool  PythonQtWrapper_QWebEngineProfile::isOffTheRecord(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->isOffTheRecord());
}

bool  PythonQtWrapper_QWebEngineProfile::isSpellCheckEnabled(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->isSpellCheckEnabled());
}

bool  PythonQtWrapper_QWebEngineProfile::isUsedForGlobalCertificateVerification(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->isUsedForGlobalCertificateVerification());
}

QWebEngineProfile::PersistentCookiesPolicy  PythonQtWrapper_QWebEngineProfile::persistentCookiesPolicy(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->persistentCookiesPolicy());
}

QString  PythonQtWrapper_QWebEngineProfile::persistentStoragePath(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->persistentStoragePath());
}

void PythonQtWrapper_QWebEngineProfile::removeAllUrlSchemeHandlers(QWebEngineProfile* theWrappedObject)
{
  ( theWrappedObject->removeAllUrlSchemeHandlers());
}

void PythonQtWrapper_QWebEngineProfile::removeUrlScheme(QWebEngineProfile* theWrappedObject, const QByteArray&  scheme)
{
  ( theWrappedObject->removeUrlScheme(scheme));
}

void PythonQtWrapper_QWebEngineProfile::removeUrlSchemeHandler(QWebEngineProfile* theWrappedObject, QWebEngineUrlSchemeHandler*  arg__1)
{
  ( theWrappedObject->removeUrlSchemeHandler(arg__1));
}

QWebEngineScriptCollection*  PythonQtWrapper_QWebEngineProfile::scripts(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->scripts());
}

void PythonQtWrapper_QWebEngineProfile::setCachePath(QWebEngineProfile* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setCachePath(path));
}

void PythonQtWrapper_QWebEngineProfile::setDownloadPath(QWebEngineProfile* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setDownloadPath(path));
}

void PythonQtWrapper_QWebEngineProfile::setHttpAcceptLanguage(QWebEngineProfile* theWrappedObject, const QString&  httpAcceptLanguage)
{
  ( theWrappedObject->setHttpAcceptLanguage(httpAcceptLanguage));
}

void PythonQtWrapper_QWebEngineProfile::setHttpCacheMaximumSize(QWebEngineProfile* theWrappedObject, int  maxSize)
{
  ( theWrappedObject->setHttpCacheMaximumSize(maxSize));
}

void PythonQtWrapper_QWebEngineProfile::setHttpCacheType(QWebEngineProfile* theWrappedObject, QWebEngineProfile::HttpCacheType  arg__1)
{
  ( theWrappedObject->setHttpCacheType(arg__1));
}

void PythonQtWrapper_QWebEngineProfile::setHttpUserAgent(QWebEngineProfile* theWrappedObject, const QString&  userAgent)
{
  ( theWrappedObject->setHttpUserAgent(userAgent));
}

void PythonQtWrapper_QWebEngineProfile::setPersistentCookiesPolicy(QWebEngineProfile* theWrappedObject, QWebEngineProfile::PersistentCookiesPolicy  arg__1)
{
  ( theWrappedObject->setPersistentCookiesPolicy(arg__1));
}

void PythonQtWrapper_QWebEngineProfile::setPersistentStoragePath(QWebEngineProfile* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setPersistentStoragePath(path));
}

void PythonQtWrapper_QWebEngineProfile::setRequestInterceptor(QWebEngineProfile* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor)
{
  ( theWrappedObject->setRequestInterceptor(interceptor));
}

void PythonQtWrapper_QWebEngineProfile::setSpellCheckEnabled(QWebEngineProfile* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setSpellCheckEnabled(enabled));
}

void PythonQtWrapper_QWebEngineProfile::setSpellCheckLanguages(QWebEngineProfile* theWrappedObject, const QStringList&  languages)
{
  ( theWrappedObject->setSpellCheckLanguages(languages));
}

void PythonQtWrapper_QWebEngineProfile::setUrlRequestInterceptor(QWebEngineProfile* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor)
{
  ( theWrappedObject->setUrlRequestInterceptor(interceptor));
}

void PythonQtWrapper_QWebEngineProfile::setUseForGlobalCertificateVerification(QWebEngineProfile* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setUseForGlobalCertificateVerification(enabled));
}

QWebEngineSettings*  PythonQtWrapper_QWebEngineProfile::settings(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->settings());
}

QStringList  PythonQtWrapper_QWebEngineProfile::spellCheckLanguages(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->spellCheckLanguages());
}

QString  PythonQtWrapper_QWebEngineProfile::storageName(QWebEngineProfile* theWrappedObject) const
{
  return ( theWrappedObject->storageName());
}

const QWebEngineUrlSchemeHandler*  PythonQtWrapper_QWebEngineProfile::urlSchemeHandler(QWebEngineProfile* theWrappedObject, const QByteArray&  arg__1) const
{
  return ( theWrappedObject->urlSchemeHandler(arg__1));
}

bool  PythonQtWrapper_QWebEngineProfile::visitedLinksContainsUrl(QWebEngineProfile* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->visitedLinksContainsUrl(url));
}



QWebEngineQuotaRequest* PythonQtWrapper_QWebEngineQuotaRequest::new_QWebEngineQuotaRequest()
{ 
return new QWebEngineQuotaRequest(); }

void PythonQtWrapper_QWebEngineQuotaRequest::accept(QWebEngineQuotaRequest* theWrappedObject)
{
  ( theWrappedObject->accept());
}

bool  PythonQtWrapper_QWebEngineQuotaRequest::__ne__(QWebEngineQuotaRequest* theWrappedObject, const QWebEngineQuotaRequest&  that) const
{
  return ( (*theWrappedObject)!= that);
}

bool  PythonQtWrapper_QWebEngineQuotaRequest::__eq__(QWebEngineQuotaRequest* theWrappedObject, const QWebEngineQuotaRequest&  that) const
{
  return ( (*theWrappedObject)== that);
}

QUrl  PythonQtWrapper_QWebEngineQuotaRequest::origin(QWebEngineQuotaRequest* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QWebEngineQuotaRequest::reject(QWebEngineQuotaRequest* theWrappedObject)
{
  ( theWrappedObject->reject());
}

qint64  PythonQtWrapper_QWebEngineQuotaRequest::requestedSize(QWebEngineQuotaRequest* theWrappedObject) const
{
  return ( theWrappedObject->requestedSize());
}



QWebEngineRegisterProtocolHandlerRequest* PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::new_QWebEngineRegisterProtocolHandlerRequest()
{ 
return new QWebEngineRegisterProtocolHandlerRequest(); }

void PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::accept(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject)
{
  ( theWrappedObject->accept());
}

bool  PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::__ne__(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject, const QWebEngineRegisterProtocolHandlerRequest&  that) const
{
  return ( (*theWrappedObject)!= that);
}

bool  PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::__eq__(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject, const QWebEngineRegisterProtocolHandlerRequest&  that) const
{
  return ( (*theWrappedObject)== that);
}

QUrl  PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::origin(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::reject(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject)
{
  ( theWrappedObject->reject());
}

QString  PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest::scheme(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject) const
{
  return ( theWrappedObject->scheme());
}



QWebEngineScript* PythonQtWrapper_QWebEngineScript::new_QWebEngineScript()
{ 
return new QWebEngineScript(); }

QWebEngineScript* PythonQtWrapper_QWebEngineScript::new_QWebEngineScript(const QWebEngineScript&  other)
{ 
return new QWebEngineScript(other); }

QWebEngineScript::InjectionPoint  PythonQtWrapper_QWebEngineScript::injectionPoint(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->injectionPoint());
}

bool  PythonQtWrapper_QWebEngineScript::isNull(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QWebEngineScript::name(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QWebEngineScript::__ne__(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QWebEngineScript*  PythonQtWrapper_QWebEngineScript::operator_assign(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QWebEngineScript::__eq__(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QWebEngineScript::runsOnSubFrames(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->runsOnSubFrames());
}

void PythonQtWrapper_QWebEngineScript::setInjectionPoint(QWebEngineScript* theWrappedObject, QWebEngineScript::InjectionPoint  arg__1)
{
  ( theWrappedObject->setInjectionPoint(arg__1));
}

void PythonQtWrapper_QWebEngineScript::setName(QWebEngineScript* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setName(arg__1));
}

void PythonQtWrapper_QWebEngineScript::setRunsOnSubFrames(QWebEngineScript* theWrappedObject, bool  on)
{
  ( theWrappedObject->setRunsOnSubFrames(on));
}

void PythonQtWrapper_QWebEngineScript::setSourceCode(QWebEngineScript* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setSourceCode(arg__1));
}

void PythonQtWrapper_QWebEngineScript::setWorldId(QWebEngineScript* theWrappedObject, unsigned int  arg__1)
{
  ( theWrappedObject->setWorldId(arg__1));
}

QString  PythonQtWrapper_QWebEngineScript::sourceCode(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->sourceCode());
}

void PythonQtWrapper_QWebEngineScript::swap(QWebEngineScript* theWrappedObject, QWebEngineScript&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QWebEngineScript::worldId(QWebEngineScript* theWrappedObject) const
{
  return ( theWrappedObject->worldId());
}

QString PythonQtWrapper_QWebEngineScript::py_toString(QWebEngineScript* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



void PythonQtWrapper_QWebEngineScriptCollection::clear(QWebEngineScriptCollection* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QWebEngineScriptCollection::contains(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  value) const
{
  return ( theWrappedObject->contains(value));
}

int  PythonQtWrapper_QWebEngineScriptCollection::count(QWebEngineScriptCollection* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QWebEngineScript  PythonQtWrapper_QWebEngineScriptCollection::findScript(QWebEngineScriptCollection* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->findScript(name));
}

QList<QWebEngineScript >  PythonQtWrapper_QWebEngineScriptCollection::findScripts(QWebEngineScriptCollection* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->findScripts(name));
}

void PythonQtWrapper_QWebEngineScriptCollection::insert(QWebEngineScriptCollection* theWrappedObject, const QList<QWebEngineScript >&  list)
{
  ( theWrappedObject->insert(list));
}

void PythonQtWrapper_QWebEngineScriptCollection::insert(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  arg__1)
{
  ( theWrappedObject->insert(arg__1));
}

bool  PythonQtWrapper_QWebEngineScriptCollection::isEmpty(QWebEngineScriptCollection* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QWebEngineScriptCollection::remove(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  arg__1)
{
  return ( theWrappedObject->remove(arg__1));
}

int  PythonQtWrapper_QWebEngineScriptCollection::size(QWebEngineScriptCollection* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QList<QWebEngineScript >  PythonQtWrapper_QWebEngineScriptCollection::toList(QWebEngineScriptCollection* theWrappedObject) const
{
  return ( theWrappedObject->toList());
}



QWebEngineSettings*  PythonQtWrapper_QWebEngineSettings::static_QWebEngineSettings_defaultSettings()
{
  return (QWebEngineSettings::defaultSettings());
}

QString  PythonQtWrapper_QWebEngineSettings::defaultTextEncoding(QWebEngineSettings* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextEncoding());
}

QString  PythonQtWrapper_QWebEngineSettings::fontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which) const
{
  return ( theWrappedObject->fontFamily(which));
}

int  PythonQtWrapper_QWebEngineSettings::fontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type) const
{
  return ( theWrappedObject->fontSize(type));
}

QWebEngineSettings*  PythonQtWrapper_QWebEngineSettings::static_QWebEngineSettings_globalSettings()
{
  return (QWebEngineSettings::globalSettings());
}

void PythonQtWrapper_QWebEngineSettings::resetAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr)
{
  ( theWrappedObject->resetAttribute(attr));
}

void PythonQtWrapper_QWebEngineSettings::resetFontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which)
{
  ( theWrappedObject->resetFontFamily(which));
}

void PythonQtWrapper_QWebEngineSettings::resetFontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type)
{
  ( theWrappedObject->resetFontSize(type));
}

void PythonQtWrapper_QWebEngineSettings::resetUnknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject)
{
  ( theWrappedObject->resetUnknownUrlSchemePolicy());
}

void PythonQtWrapper_QWebEngineSettings::setAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr, bool  on)
{
  ( theWrappedObject->setAttribute(attr, on));
}

void PythonQtWrapper_QWebEngineSettings::setDefaultTextEncoding(QWebEngineSettings* theWrappedObject, const QString&  encoding)
{
  ( theWrappedObject->setDefaultTextEncoding(encoding));
}

void PythonQtWrapper_QWebEngineSettings::setFontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which, const QString&  family)
{
  ( theWrappedObject->setFontFamily(which, family));
}

void PythonQtWrapper_QWebEngineSettings::setFontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type, int  size)
{
  ( theWrappedObject->setFontSize(type, size));
}

void PythonQtWrapper_QWebEngineSettings::setUnknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject, QWebEngineSettings::UnknownUrlSchemePolicy  policy)
{
  ( theWrappedObject->setUnknownUrlSchemePolicy(policy));
}

bool  PythonQtWrapper_QWebEngineSettings::testAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr) const
{
  return ( theWrappedObject->testAttribute(attr));
}

QWebEngineSettings::UnknownUrlSchemePolicy  PythonQtWrapper_QWebEngineSettings::unknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject) const
{
  return ( theWrappedObject->unknownUrlSchemePolicy());
}



void PythonQtWrapper_QWebEngineUrlRequestInfo::block(QWebEngineUrlRequestInfo* theWrappedObject, bool  shouldBlock)
{
  ( theWrappedObject->block(shouldBlock));
}

bool  PythonQtWrapper_QWebEngineUrlRequestInfo::changed(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->changed());
}

QUrl  PythonQtWrapper_QWebEngineUrlRequestInfo::firstPartyUrl(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->firstPartyUrl());
}

QUrl  PythonQtWrapper_QWebEngineUrlRequestInfo::initiator(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->initiator());
}

QWebEngineUrlRequestInfo::NavigationType  PythonQtWrapper_QWebEngineUrlRequestInfo::navigationType(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->navigationType());
}

void PythonQtWrapper_QWebEngineUrlRequestInfo::redirect(QWebEngineUrlRequestInfo* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->redirect(url));
}

QByteArray  PythonQtWrapper_QWebEngineUrlRequestInfo::requestMethod(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->requestMethod());
}

QUrl  PythonQtWrapper_QWebEngineUrlRequestInfo::requestUrl(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->requestUrl());
}

QWebEngineUrlRequestInfo::ResourceType  PythonQtWrapper_QWebEngineUrlRequestInfo::resourceType(QWebEngineUrlRequestInfo* theWrappedObject) const
{
  return ( theWrappedObject->resourceType());
}

void PythonQtWrapper_QWebEngineUrlRequestInfo::setHttpHeader(QWebEngineUrlRequestInfo* theWrappedObject, const QByteArray&  name, const QByteArray&  value)
{
  ( theWrappedObject->setHttpHeader(name, value));
}



PythonQtShell_QWebEngineUrlRequestInterceptor::~PythonQtShell_QWebEngineUrlRequestInterceptor() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebEngineUrlRequestInterceptor::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineUrlRequestInterceptor::childEvent(event0);
}
void PythonQtShell_QWebEngineUrlRequestInterceptor::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineUrlRequestInterceptor::customEvent(event0);
}
bool  PythonQtShell_QWebEngineUrlRequestInterceptor::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineUrlRequestInterceptor::event(event0);
}
bool  PythonQtShell_QWebEngineUrlRequestInterceptor::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineUrlRequestInterceptor::eventFilter(watched0, event1);
}
void PythonQtShell_QWebEngineUrlRequestInterceptor::interceptRequest(QWebEngineUrlRequestInfo&  info0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("interceptRequest");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWebEngineUrlRequestInfo&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&info0};
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
void PythonQtShell_QWebEngineUrlRequestInterceptor::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineUrlRequestInterceptor::timerEvent(event0);
}
QWebEngineUrlRequestInterceptor* PythonQtWrapper_QWebEngineUrlRequestInterceptor::new_QWebEngineUrlRequestInterceptor(QObject*  p)
{ 
return new PythonQtShell_QWebEngineUrlRequestInterceptor(p); }

const QMetaObject* PythonQtShell_QWebEngineUrlRequestInterceptor::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebEngineUrlRequestInterceptor::staticMetaObject);
  } else {
    return &QWebEngineUrlRequestInterceptor::staticMetaObject;
  }
}
int PythonQtShell_QWebEngineUrlRequestInterceptor::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebEngineUrlRequestInterceptor::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QWebEngineUrlRequestInterceptor::interceptRequest(QWebEngineUrlRequestInterceptor* theWrappedObject, QWebEngineUrlRequestInfo&  info)
{
  ( theWrappedObject->interceptRequest(info));
}



void PythonQtWrapper_QWebEngineUrlRequestJob::fail(QWebEngineUrlRequestJob* theWrappedObject, QWebEngineUrlRequestJob::Error  error)
{
  ( theWrappedObject->fail(error));
}

QUrl  PythonQtWrapper_QWebEngineUrlRequestJob::initiator(QWebEngineUrlRequestJob* theWrappedObject) const
{
  return ( theWrappedObject->initiator());
}

void PythonQtWrapper_QWebEngineUrlRequestJob::redirect(QWebEngineUrlRequestJob* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->redirect(url));
}

void PythonQtWrapper_QWebEngineUrlRequestJob::reply(QWebEngineUrlRequestJob* theWrappedObject, const QByteArray&  contentType, QIODevice*  device)
{
  ( theWrappedObject->reply(contentType, device));
}

QMap<QByteArray , QByteArray >  PythonQtWrapper_QWebEngineUrlRequestJob::requestHeaders(QWebEngineUrlRequestJob* theWrappedObject) const
{
  return ( theWrappedObject->requestHeaders());
}

QByteArray  PythonQtWrapper_QWebEngineUrlRequestJob::requestMethod(QWebEngineUrlRequestJob* theWrappedObject) const
{
  return ( theWrappedObject->requestMethod());
}

QUrl  PythonQtWrapper_QWebEngineUrlRequestJob::requestUrl(QWebEngineUrlRequestJob* theWrappedObject) const
{
  return ( theWrappedObject->requestUrl());
}



QWebEngineUrlScheme* PythonQtWrapper_QWebEngineUrlScheme::new_QWebEngineUrlScheme()
{ 
return new QWebEngineUrlScheme(); }

QWebEngineUrlScheme* PythonQtWrapper_QWebEngineUrlScheme::new_QWebEngineUrlScheme(const QByteArray&  name)
{ 
return new QWebEngineUrlScheme(name); }

QWebEngineUrlScheme* PythonQtWrapper_QWebEngineUrlScheme::new_QWebEngineUrlScheme(const QWebEngineUrlScheme&  that)
{ 
return new QWebEngineUrlScheme(that); }

int  PythonQtWrapper_QWebEngineUrlScheme::defaultPort(QWebEngineUrlScheme* theWrappedObject) const
{
  return ( theWrappedObject->defaultPort());
}

QWebEngineUrlScheme::Flags  PythonQtWrapper_QWebEngineUrlScheme::flags(QWebEngineUrlScheme* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QByteArray  PythonQtWrapper_QWebEngineUrlScheme::name(QWebEngineUrlScheme* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QWebEngineUrlScheme::__ne__(QWebEngineUrlScheme* theWrappedObject, const QWebEngineUrlScheme&  that) const
{
  return ( (*theWrappedObject)!= that);
}

QWebEngineUrlScheme*  PythonQtWrapper_QWebEngineUrlScheme::operator_assign(QWebEngineUrlScheme* theWrappedObject, const QWebEngineUrlScheme&  that)
{
  return &( (*theWrappedObject)= that);
}

bool  PythonQtWrapper_QWebEngineUrlScheme::__eq__(QWebEngineUrlScheme* theWrappedObject, const QWebEngineUrlScheme&  that) const
{
  return ( (*theWrappedObject)== that);
}

void PythonQtWrapper_QWebEngineUrlScheme::static_QWebEngineUrlScheme_registerScheme(const QWebEngineUrlScheme&  scheme)
{
  (QWebEngineUrlScheme::registerScheme(scheme));
}

QWebEngineUrlScheme  PythonQtWrapper_QWebEngineUrlScheme::static_QWebEngineUrlScheme_schemeByName(const QByteArray&  name)
{
  return (QWebEngineUrlScheme::schemeByName(name));
}

void PythonQtWrapper_QWebEngineUrlScheme::setDefaultPort(QWebEngineUrlScheme* theWrappedObject, int  newValue)
{
  ( theWrappedObject->setDefaultPort(newValue));
}

void PythonQtWrapper_QWebEngineUrlScheme::setFlags(QWebEngineUrlScheme* theWrappedObject, QWebEngineUrlScheme::Flags  newValue)
{
  ( theWrappedObject->setFlags(newValue));
}

void PythonQtWrapper_QWebEngineUrlScheme::setName(QWebEngineUrlScheme* theWrappedObject, const QByteArray&  newValue)
{
  ( theWrappedObject->setName(newValue));
}

void PythonQtWrapper_QWebEngineUrlScheme::setSyntax(QWebEngineUrlScheme* theWrappedObject, QWebEngineUrlScheme::Syntax  newValue)
{
  ( theWrappedObject->setSyntax(newValue));
}

QWebEngineUrlScheme::Syntax  PythonQtWrapper_QWebEngineUrlScheme::syntax(QWebEngineUrlScheme* theWrappedObject) const
{
  return ( theWrappedObject->syntax());
}



PythonQtShell_QWebEngineUrlSchemeHandler::~PythonQtShell_QWebEngineUrlSchemeHandler() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebEngineUrlSchemeHandler::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineUrlSchemeHandler::childEvent(event0);
}
void PythonQtShell_QWebEngineUrlSchemeHandler::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineUrlSchemeHandler::customEvent(event0);
}
bool  PythonQtShell_QWebEngineUrlSchemeHandler::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineUrlSchemeHandler::event(event0);
}
bool  PythonQtShell_QWebEngineUrlSchemeHandler::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineUrlSchemeHandler::eventFilter(watched0, event1);
}
void PythonQtShell_QWebEngineUrlSchemeHandler::requestStarted(QWebEngineUrlRequestJob*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("requestStarted");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWebEngineUrlRequestJob*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
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
void PythonQtShell_QWebEngineUrlSchemeHandler::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineUrlSchemeHandler::timerEvent(event0);
}
QWebEngineUrlSchemeHandler* PythonQtWrapper_QWebEngineUrlSchemeHandler::new_QWebEngineUrlSchemeHandler(QObject*  parent)
{ 
return new PythonQtShell_QWebEngineUrlSchemeHandler(parent); }

const QMetaObject* PythonQtShell_QWebEngineUrlSchemeHandler::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebEngineUrlSchemeHandler::staticMetaObject);
  } else {
    return &QWebEngineUrlSchemeHandler::staticMetaObject;
  }
}
int PythonQtShell_QWebEngineUrlSchemeHandler::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebEngineUrlSchemeHandler::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QWebEngineUrlSchemeHandler::requestStarted(QWebEngineUrlSchemeHandler* theWrappedObject, QWebEngineUrlRequestJob*  arg__1)
{
  ( theWrappedObject->requestStarted(arg__1));
}



PythonQtShell_QWebEngineView::~PythonQtShell_QWebEngineView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebEngineView::actionEvent(QActionEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("actionEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QActionEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::actionEvent(event0);
}
void PythonQtShell_QWebEngineView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("changeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::changeEvent(arg__1);
}
void PythonQtShell_QWebEngineView::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::childEvent(event0);
}
void PythonQtShell_QWebEngineView::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("closeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QCloseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::closeEvent(arg__1);
}
void PythonQtShell_QWebEngineView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::contextMenuEvent(arg__1);
}
QWebEngineView*  PythonQtShell_QWebEngineView::createWindow(QWebEnginePage::WebWindowType  type0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("createWindow");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWebEngineView*" , "QWebEnginePage::WebWindowType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QWebEngineView* returnValue{};
      void* args[2] = {nullptr, (void*)&type0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createWindow", methodInfo, result);
          } else {
            returnValue = *((QWebEngineView**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWebEngineView::createWindow(type0);
}
void PythonQtShell_QWebEngineView::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::customEvent(event0);
}
int  PythonQtShell_QWebEngineView::devType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("devType");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::devType();
}
void PythonQtShell_QWebEngineView::dragEnterEvent(QDragEnterEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragEnterEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::dragEnterEvent(e0);
}
void PythonQtShell_QWebEngineView::dragLeaveEvent(QDragLeaveEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::dragLeaveEvent(e0);
}
void PythonQtShell_QWebEngineView::dragMoveEvent(QDragMoveEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::dragMoveEvent(e0);
}
void PythonQtShell_QWebEngineView::dropEvent(QDropEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::dropEvent(e0);
}
void PythonQtShell_QWebEngineView::enterEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("enterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::enterEvent(event0);
}
bool  PythonQtShell_QWebEngineView::event(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::event(arg__1);
}
bool  PythonQtShell_QWebEngineView::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::eventFilter(watched0, event1);
}
void PythonQtShell_QWebEngineView::focusInEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("focusInEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::focusInEvent(event0);
}
bool  PythonQtShell_QWebEngineView::focusNextPrevChild(bool  next0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("focusNextPrevChild");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&next0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::focusNextPrevChild(next0);
}
void PythonQtShell_QWebEngineView::focusOutEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("focusOutEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::focusOutEvent(event0);
}
bool  PythonQtShell_QWebEngineView::hasHeightForWidth() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("hasHeightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::hasHeightForWidth();
}
int  PythonQtShell_QWebEngineView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("heightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::heightForWidth(arg__1);
}
void PythonQtShell_QWebEngineView::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("hideEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QHideEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::hideEvent(arg__1);
}
void PythonQtShell_QWebEngineView::initPainter(QPainter*  painter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("initPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&painter0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::initPainter(painter0);
}
void PythonQtShell_QWebEngineView::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("inputMethodEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QInputMethodEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QWebEngineView::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("inputMethodQuery");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::inputMethodQuery(arg__1);
}
void PythonQtShell_QWebEngineView::keyPressEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::keyPressEvent(event0);
}
void PythonQtShell_QWebEngineView::keyReleaseEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("keyReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::keyReleaseEvent(event0);
}
void PythonQtShell_QWebEngineView::leaveEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("leaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::leaveEvent(event0);
}
int  PythonQtShell_QWebEngineView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("metric");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::metric(arg__1);
}
QSize  PythonQtShell_QWebEngineView::minimumSizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("getMinimumSizeHint");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::minimumSizeHint();
}
void PythonQtShell_QWebEngineView::mouseDoubleClickEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QWebEngineView::mouseMoveEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::mouseMoveEvent(event0);
}
void PythonQtShell_QWebEngineView::mousePressEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::mousePressEvent(event0);
}
void PythonQtShell_QWebEngineView::mouseReleaseEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::mouseReleaseEvent(event0);
}
void PythonQtShell_QWebEngineView::moveEvent(QMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("moveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::moveEvent(event0);
}
bool  PythonQtShell_QWebEngineView::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("nativeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&eventType0, (void*)&message1, (void*)&result2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QWebEngineView::paintEngine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("paintEngine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintEngine*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::paintEngine();
}
void PythonQtShell_QWebEngineView::paintEvent(QPaintEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("paintEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPaintEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QWebEngineView::redirected(QPoint*  offset0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("redirected");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue{};
      void* args[2] = {nullptr, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::redirected(offset0);
}
void PythonQtShell_QWebEngineView::resizeEvent(QResizeEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("resizeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QResizeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::resizeEvent(event0);
}
void PythonQtShell_QWebEngineView::setVisible(bool  visible0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setVisible");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&visible0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::setVisible(visible0);
}
QPainter*  PythonQtShell_QWebEngineView::sharedPainter() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("sharedPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QWebEngineView::sharedPainter();
}
void PythonQtShell_QWebEngineView::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("showEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QShowEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::showEvent(arg__1);
}
QSize  PythonQtShell_QWebEngineView::sizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("sizeHint");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
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
  return QWebEngineView::sizeHint();
}
void PythonQtShell_QWebEngineView::tabletEvent(QTabletEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("tabletEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTabletEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::tabletEvent(event0);
}
void PythonQtShell_QWebEngineView::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::timerEvent(event0);
}
void PythonQtShell_QWebEngineView::wheelEvent(QWheelEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWheelEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWebEngineView::wheelEvent(event0);
}
QWebEngineView* PythonQtWrapper_QWebEngineView::new_QWebEngineView(QWidget*  parent)
{ 
return new PythonQtShell_QWebEngineView(parent); }

const QMetaObject* PythonQtShell_QWebEngineView::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWebEngineView::staticMetaObject);
  } else {
    return &QWebEngineView::staticMetaObject;
  }
}
int PythonQtShell_QWebEngineView::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWebEngineView::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QWebEngineView*  PythonQtWrapper_QWebEngineView::createWindow(QWebEngineView* theWrappedObject, QWebEnginePage::WebWindowType  type)
{
  return ( ((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->promoted_createWindow(type));
}

bool  PythonQtWrapper_QWebEngineView::hasSelection(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->hasSelection());
}

QWebEngineHistory*  PythonQtWrapper_QWebEngineView::history(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->history());
}

QIcon  PythonQtWrapper_QWebEngineView::icon(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

QUrl  PythonQtWrapper_QWebEngineView::iconUrl(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->iconUrl());
}

void PythonQtWrapper_QWebEngineView::load(QWebEngineView* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->load(url));
}

void PythonQtWrapper_QWebEngineView::load(QWebEngineView* theWrappedObject, const QWebEngineHttpRequest&  request)
{
  ( theWrappedObject->load(request));
}

QWebEnginePage*  PythonQtWrapper_QWebEngineView::page(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->page());
}

QAction*  PythonQtWrapper_QWebEngineView::pageAction(QWebEngineView* theWrappedObject, QWebEnginePage::WebAction  action) const
{
  return ( theWrappedObject->pageAction(action));
}

QString  PythonQtWrapper_QWebEngineView::selectedText(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

void PythonQtWrapper_QWebEngineView::setContent(QWebEngineView* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
  ( theWrappedObject->setContent(data, mimeType, baseUrl));
}

void PythonQtWrapper_QWebEngineView::setHtml(QWebEngineView* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
  ( theWrappedObject->setHtml(html, baseUrl));
}

void PythonQtWrapper_QWebEngineView::setPage(QWebEngineView* theWrappedObject, QWebEnginePage*  page)
{
  ( theWrappedObject->setPage(page));
}

void PythonQtWrapper_QWebEngineView::setUrl(QWebEngineView* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QWebEngineView::setZoomFactor(QWebEngineView* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setZoomFactor(factor));
}

QWebEngineSettings*  PythonQtWrapper_QWebEngineView::settings(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->settings());
}

QSize  PythonQtWrapper_QWebEngineView::sizeHint(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QString  PythonQtWrapper_QWebEngineView::title(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

void PythonQtWrapper_QWebEngineView::triggerPageAction(QWebEngineView* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked)
{
  ( theWrappedObject->triggerPageAction(action, checked));
}

QUrl  PythonQtWrapper_QWebEngineView::url(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

qreal  PythonQtWrapper_QWebEngineView::zoomFactor(QWebEngineView* theWrappedObject) const
{
  return ( theWrappedObject->zoomFactor());
}


