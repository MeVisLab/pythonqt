#include "PythonQtWrapper_QWebPage.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qundostack.h>
#include <qurl.h>
#include <qwebframe.h>
#include <qwebpage.h>
#include <qwebpluginfactory.h>
#include <qwebsettings.h>
#include <qwidget.h>

bool  PythonQtShell_QWebPage::acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "acceptNavigationRequest");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "acceptNavigationRequest(QWebPage*,QWebFrame* ,const QNetworkRequest& ,QWebPage::NavigationType )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&frame, (void*)&request, (void*)&type};
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
  return QWebPage::acceptNavigationRequest(frame, request, type);
}
void PythonQtShell_QWebPage::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "childEvent(QWebPage*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::childEvent(arg__1);
}
QString  PythonQtShell_QWebPage::chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "chooseFile");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "chooseFile(QWebPage*,QWebFrame* ,const QString& )");
      QString  returnValue;
    void* args[3] = {NULL, (void*)&originatingFrame, (void*)&oldFile};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QString *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::chooseFile(originatingFrame, oldFile);
}
QObject*  PythonQtShell_QWebPage::createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createPlugin");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "createPlugin(QWebPage*,const QString& ,const QUrl& ,const QStringList& ,const QStringList& )");
      QObject*  returnValue;
    void* args[5] = {NULL, (void*)&classid, (void*)&url, (void*)&paramNames, (void*)&paramValues};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QObject* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::createPlugin(classid, url, paramNames, paramValues);
}
QWebPage*  PythonQtShell_QWebPage::createWindow(QWebPage::WebWindowType  type)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createWindow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "createWindow(QWebPage*,QWebPage::WebWindowType )");
      QWebPage*  returnValue;
    void* args[2] = {NULL, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QWebPage* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::createWindow(type);
}
void PythonQtShell_QWebPage::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "customEvent(QWebPage*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::customEvent(arg__1);
}
bool  PythonQtShell_QWebPage::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "event(QWebPage*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QWebPage::event(arg__1);
}
bool  PythonQtShell_QWebPage::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "eventFilter(QWebPage*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QWebPage::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QWebPage::javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "javaScriptAlert");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "javaScriptAlert(QWebPage*,QWebFrame* ,const QString& )");
    void* args[3] = {NULL, (void*)&originatingFrame, (void*)&msg};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::javaScriptAlert(originatingFrame, msg);
}
bool  PythonQtShell_QWebPage::javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "javaScriptConfirm");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "javaScriptConfirm(QWebPage*,QWebFrame* ,const QString& )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&originatingFrame, (void*)&msg};
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
  return QWebPage::javaScriptConfirm(originatingFrame, msg);
}
void PythonQtShell_QWebPage::javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "javaScriptConsoleMessage");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "javaScriptConsoleMessage(QWebPage*,const QString& ,int ,const QString& )");
    void* args[4] = {NULL, (void*)&message, (void*)&lineNumber, (void*)&sourceID};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::javaScriptConsoleMessage(message, lineNumber, sourceID);
}
bool  PythonQtShell_QWebPage::javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "javaScriptPrompt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "javaScriptPrompt(QWebPage*,QWebFrame* ,const QString& ,const QString& ,QString* )");
      bool  returnValue;
    void* args[5] = {NULL, (void*)&originatingFrame, (void*)&msg, (void*)&defaultValue, (void*)&result};
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
  return QWebPage::javaScriptPrompt(originatingFrame, msg, defaultValue, result);
}
bool  PythonQtShell_QWebPage::supportsExtension(QWebPage::Extension  extension) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportsExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "supportsExtension(QWebPage*,QWebPage::Extension )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&extension};
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
  return QWebPage::supportsExtension(extension);
}
void PythonQtShell_QWebPage::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "timerEvent(QWebPage*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::timerEvent(arg__1);
}
void PythonQtShell_QWebPage::triggerAction(QWebPage::WebAction  action, bool  checked)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "triggerAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "triggerAction(QWebPage*,QWebPage::WebAction ,bool )");
    void* args[3] = {NULL, (void*)&action, (void*)&checked};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::triggerAction(action, checked);
}
QString  PythonQtShell_QWebPage::userAgentForUrl(const QUrl&  url) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "userAgentForUrl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebPage::staticMetaObject,
      "userAgentForUrl(QWebPage*,const QUrl& )");
      QString  returnValue;
    void* args[2] = {NULL, (void*)&url};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QString *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::userAgentForUrl(url);
}
QWebPage* PythonQtWrapper_QWebPage::new_QWebPage(QObject*  parent)
{ 
return new PythonQtShell_QWebPage(parent); }

void PythonQtWrapper_QWebPage::javaScriptAlert(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg)
{
 (*((PythonQtPublicPromoter_QWebPage*)theWrappedObject)).javaScriptAlert(originatingFrame, msg);
}

QObject*  PythonQtWrapper_QWebPage::createPlugin(QWebPage* theWrappedObject, const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues)
{
return  (*((PythonQtPublicPromoter_QWebPage*)theWrappedObject)).createPlugin(classid, url, paramNames, paramValues);
}

bool  PythonQtWrapper_QWebPage::javaScriptPrompt(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result)
{
return  (*((PythonQtPublicPromoter_QWebPage*)theWrappedObject)).javaScriptPrompt(originatingFrame, msg, defaultValue, result);
}

QAction*  PythonQtWrapper_QWebPage::action(QWebPage* theWrappedObject, QWebPage::WebAction  action) const
{
return  (*theWrappedObject).action(action);
}

bool  PythonQtWrapper_QWebPage::acceptNavigationRequest(QWebPage* theWrappedObject, QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type)
{
return  (*((PythonQtPublicPromoter_QWebPage*)theWrappedObject)).acceptNavigationRequest(frame, request, type);
}

void PythonQtWrapper_QWebPage::setViewportSize(QWebPage* theWrappedObject, const QSize&  size) const
{
 (*theWrappedObject).setViewportSize(size);
}

bool  PythonQtWrapper_QWebPage::supportsExtension(QWebPage* theWrappedObject, QWebPage::Extension  extension) const
{
return  (*theWrappedObject).supportsExtension(extension);
}

void PythonQtWrapper_QWebPage::setPluginFactory(QWebPage* theWrappedObject, QWebPluginFactory*  factory)
{
 (*theWrappedObject).setPluginFactory(factory);
}

void PythonQtWrapper_QWebPage::setForwardUnsupportedContent(QWebPage* theWrappedObject, bool  forward)
{
 (*theWrappedObject).setForwardUnsupportedContent(forward);
}

QNetworkAccessManager*  PythonQtWrapper_QWebPage::networkAccessManager(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).networkAccessManager();
}

quint64  PythonQtWrapper_QWebPage::totalBytes(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).totalBytes();
}

bool  PythonQtWrapper_QWebPage::javaScriptConfirm(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg)
{
return  (*((PythonQtPublicPromoter_QWebPage*)theWrappedObject)).javaScriptConfirm(originatingFrame, msg);
}

QString  PythonQtWrapper_QWebPage::userAgentForUrl(QWebPage* theWrappedObject, const QUrl&  url) const
{
return  (*((PythonQtPublicPromoter_QWebPage*)theWrappedObject)).userAgentForUrl(url);
}

QWidget*  PythonQtWrapper_QWebPage::view(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).view();
}

void PythonQtWrapper_QWebPage::setLinkDelegationPolicy(QWebPage* theWrappedObject, QWebPage::LinkDelegationPolicy  policy)
{
 (*theWrappedObject).setLinkDelegationPolicy(policy);
}

void PythonQtWrapper_QWebPage::triggerAction(QWebPage* theWrappedObject, QWebPage::WebAction  action, bool  checked)
{
 (*theWrappedObject).triggerAction(action, checked);
}

void PythonQtWrapper_QWebPage::updatePositionDependentActions(QWebPage* theWrappedObject, const QPoint&  pos)
{
 (*theWrappedObject).updatePositionDependentActions(pos);
}

void PythonQtWrapper_QWebPage::setView(QWebPage* theWrappedObject, QWidget*  view)
{
 (*theWrappedObject).setView(view);
}

quint64  PythonQtWrapper_QWebPage::bytesReceived(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).bytesReceived();
}

QWebHistory*  PythonQtWrapper_QWebPage::history(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).history();
}

QWebPage::LinkDelegationPolicy  PythonQtWrapper_QWebPage::linkDelegationPolicy(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).linkDelegationPolicy();
}

bool  PythonQtWrapper_QWebPage::swallowContextMenuEvent(QWebPage* theWrappedObject, QContextMenuEvent*  event)
{
return  (*theWrappedObject).swallowContextMenuEvent(event);
}

void PythonQtWrapper_QWebPage::javaScriptConsoleMessage(QWebPage* theWrappedObject, const QString&  message, int  lineNumber, const QString&  sourceID)
{
 (*((PythonQtPublicPromoter_QWebPage*)theWrappedObject)).javaScriptConsoleMessage(message, lineNumber, sourceID);
}

QWebFrame*  PythonQtWrapper_QWebPage::currentFrame(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).currentFrame();
}

QString  PythonQtWrapper_QWebPage::chooseFile(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  oldFile)
{
return  (*((PythonQtPublicPromoter_QWebPage*)theWrappedObject)).chooseFile(originatingFrame, oldFile);
}

void PythonQtWrapper_QWebPage::setPalette(QWebPage* theWrappedObject, const QPalette&  palette)
{
 (*theWrappedObject).setPalette(palette);
}

QWebPage*  PythonQtWrapper_QWebPage::createWindow(QWebPage* theWrappedObject, QWebPage::WebWindowType  type)
{
return  (*((PythonQtPublicPromoter_QWebPage*)theWrappedObject)).createWindow(type);
}

QString  PythonQtWrapper_QWebPage::selectedText(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).selectedText();
}

bool  PythonQtWrapper_QWebPage::isModified(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).isModified();
}

QVariant  PythonQtWrapper_QWebPage::inputMethodQuery(QWebPage* theWrappedObject, Qt::InputMethodQuery  property) const
{
return  (*theWrappedObject).inputMethodQuery(property);
}

QSize  PythonQtWrapper_QWebPage::viewportSize(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).viewportSize();
}

bool  PythonQtWrapper_QWebPage::findText(QWebPage* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options)
{
return  (*theWrappedObject).findText(subString, options);
}

bool  PythonQtWrapper_QWebPage::event(QWebPage* theWrappedObject, QEvent*  arg__1)
{
return  (*theWrappedObject).event(arg__1);
}

bool  PythonQtWrapper_QWebPage::focusNextPrevChild(QWebPage* theWrappedObject, bool  next)
{
return  (*theWrappedObject).focusNextPrevChild(next);
}

QWebPluginFactory*  PythonQtWrapper_QWebPage::pluginFactory(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).pluginFactory();
}

QWebSettings*  PythonQtWrapper_QWebPage::settings(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).settings();
}

void PythonQtWrapper_QWebPage::setNetworkAccessManager(QWebPage* theWrappedObject, QNetworkAccessManager*  manager)
{
 (*theWrappedObject).setNetworkAccessManager(manager);
}

QPalette  PythonQtWrapper_QWebPage::palette(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).palette();
}

bool  PythonQtWrapper_QWebPage::forwardUnsupportedContent(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).forwardUnsupportedContent();
}

QWebFrame*  PythonQtWrapper_QWebPage::mainFrame(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).mainFrame();
}

QUndoStack*  PythonQtWrapper_QWebPage::undoStack(QWebPage* theWrappedObject) const
{
return  (*theWrappedObject).undoStack();
}

