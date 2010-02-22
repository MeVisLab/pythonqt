#include "com_trolltech_qt_webkit0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qundostack.h>
#include <qurl.h>
#include <qwebframe.h>
#include <qwebhistoryinterface.h>
#include <qwebpage.h>
#include <qwebpluginfactory.h>
#include <qwebsettings.h>
#include <qwebview.h>
#include <qwidget.h>

void PythonQtWrapper_QWebFrame::render(QWebFrame* theWrappedObject, QPainter*  painter)
{
  ( theWrappedObject->render(painter));
}

void PythonQtWrapper_QWebFrame::render(QWebFrame* theWrappedObject, QPainter*  painter, const QRegion&  clip)
{
  ( theWrappedObject->render(painter, clip));
}

QSize  PythonQtWrapper_QWebFrame::contentsSize(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->contentsSize());
}

void PythonQtWrapper_QWebFrame::setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
  ( theWrappedObject->setHtml(html, baseUrl));
}

QList<QWebFrame* >  PythonQtWrapper_QWebFrame::childFrames(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->childFrames());
}

int  PythonQtWrapper_QWebFrame::scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarValue(orientation));
}

void PythonQtWrapper_QWebFrame::setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setTextSizeMultiplier(factor));
}

QString  PythonQtWrapper_QWebFrame::toHtml(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QPoint  PythonQtWrapper_QWebFrame::pos(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

int  PythonQtWrapper_QWebFrame::scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarMinimum(orientation));
}

QWebHitTestResult  PythonQtWrapper_QWebFrame::hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->hitTestContent(pos));
}

QString  PythonQtWrapper_QWebFrame::title(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

void PythonQtWrapper_QWebFrame::setUrl(QWebFrame* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

QUrl  PythonQtWrapper_QWebFrame::url(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

bool  PythonQtWrapper_QWebFrame::event(QWebFrame* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QWebFrame*)theWrappedObject)->promoted_event(arg__1));
}

void PythonQtWrapper_QWebFrame::load(QWebFrame* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->load(url));
}

void PythonQtWrapper_QWebFrame::load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation, const QByteArray&  body)
{
  ( theWrappedObject->load(request, operation, body));
}

qreal  PythonQtWrapper_QWebFrame::textSizeMultiplier(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->textSizeMultiplier());
}

void PythonQtWrapper_QWebFrame::setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy)
{
  ( theWrappedObject->setScrollBarPolicy(orientation, policy));
}

void PythonQtWrapper_QWebFrame::setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
  ( theWrappedObject->setContent(data, mimeType, baseUrl));
}

QWebFrame*  PythonQtWrapper_QWebFrame::parentFrame(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->parentFrame());
}

int  PythonQtWrapper_QWebFrame::scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarMaximum(orientation));
}

void PythonQtWrapper_QWebFrame::addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object)
{
  ( theWrappedObject->addToJavaScriptWindowObject(name, object));
}

QString  PythonQtWrapper_QWebFrame::renderTreeDump(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->renderTreeDump());
}

void PythonQtWrapper_QWebFrame::setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value)
{
  ( theWrappedObject->setScrollBarValue(orientation, value));
}

Qt::ScrollBarPolicy  PythonQtWrapper_QWebFrame::scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarPolicy(orientation));
}

QIcon  PythonQtWrapper_QWebFrame::icon(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

QString  PythonQtWrapper_QWebFrame::frameName(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameName());
}

QRect  PythonQtWrapper_QWebFrame::geometry(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->geometry());
}

QWebPage*  PythonQtWrapper_QWebFrame::page(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->page());
}

QString  PythonQtWrapper_QWebFrame::toPlainText(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}



bool  PythonQtShell_QWebHistoryInterface::historyContains(const QString&  url) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "historyContains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&url};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("historyContains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  bool result;
return result;
}
void PythonQtShell_QWebHistoryInterface::addHistoryEntry(const QString&  url)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "addHistoryEntry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&url};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QWebHistoryInterface::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebHistoryInterface::timerEvent(arg__1);
}
bool  PythonQtShell_QWebHistoryInterface::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebHistoryInterface::event(arg__1);
}
void PythonQtShell_QWebHistoryInterface::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebHistoryInterface::childEvent(arg__1);
}
void PythonQtShell_QWebHistoryInterface::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebHistoryInterface::customEvent(arg__1);
}
bool  PythonQtShell_QWebHistoryInterface::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebHistoryInterface::eventFilter(arg__1, arg__2);
}
QWebHistoryInterface* PythonQtWrapper_QWebHistoryInterface::new_QWebHistoryInterface(QObject*  parent)
{ 
return new PythonQtShell_QWebHistoryInterface(parent); }

void PythonQtWrapper_QWebHistoryInterface::static_QWebHistoryInterface_setDefaultInterface(QWebHistoryInterface*  defaultInterface)
{
  (QWebHistoryInterface::setDefaultInterface(defaultInterface));
}

QWebHistoryInterface*  PythonQtWrapper_QWebHistoryInterface::static_QWebHistoryInterface_defaultInterface()
{
  return (QWebHistoryInterface::defaultInterface());
}



QWebHitTestResult* PythonQtWrapper_QWebHitTestResult::new_QWebHitTestResult()
{ 
return new QWebHitTestResult(); }

QWebHitTestResult* PythonQtWrapper_QWebHitTestResult::new_QWebHitTestResult(const QWebHitTestResult&  other)
{ 
return new QWebHitTestResult(other); }

QString  PythonQtWrapper_QWebHitTestResult::title(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

QString  PythonQtWrapper_QWebHitTestResult::alternateText(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->alternateText());
}

QPoint  PythonQtWrapper_QWebHitTestResult::pos(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

bool  PythonQtWrapper_QWebHitTestResult::isContentSelected(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->isContentSelected());
}

QString  PythonQtWrapper_QWebHitTestResult::linkText(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkText());
}

QWebFrame*  PythonQtWrapper_QWebHitTestResult::linkTargetFrame(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkTargetFrame());
}

bool  PythonQtWrapper_QWebHitTestResult::isNull(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QPixmap  PythonQtWrapper_QWebHitTestResult::pixmap(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->pixmap());
}

bool  PythonQtWrapper_QWebHitTestResult::isContentEditable(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->isContentEditable());
}

QUrl  PythonQtWrapper_QWebHitTestResult::linkTitle(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkTitle());
}

QUrl  PythonQtWrapper_QWebHitTestResult::imageUrl(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->imageUrl());
}

QUrl  PythonQtWrapper_QWebHitTestResult::linkUrl(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkUrl());
}

QWebFrame*  PythonQtWrapper_QWebHitTestResult::frame(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->frame());
}



QString  PythonQtShell_QWebPage::userAgentForUrl(const QUrl&  url) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "userAgentForUrl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
    void* args[2] = {NULL, (void*)&url};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("userAgentForUrl", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::userAgentForUrl(url);
}
bool  PythonQtShell_QWebPage::acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "acceptNavigationRequest");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QWebFrame*" , "const QNetworkRequest&" , "QWebPage::NavigationType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&frame, (void*)&request, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("acceptNavigationRequest", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::acceptNavigationRequest(frame, request, type);
}
void PythonQtShell_QWebPage::triggerAction(QWebPage::WebAction  action, bool  checked)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "triggerAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWebPage::WebAction" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&action, (void*)&checked};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::triggerAction(action, checked);
}
QWebPage*  PythonQtShell_QWebPage::createWindow(QWebPage::WebWindowType  type)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createWindow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QWebPage*" , "QWebPage::WebWindowType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QWebPage* returnValue;
    void* args[2] = {NULL, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createWindow", methodInfo, result);
        } else {
          returnValue = *((QWebPage**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::createWindow(type);
}
void PythonQtShell_QWebPage::javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "javaScriptConsoleMessage");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&" , "int" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&message, (void*)&lineNumber, (void*)&sourceID};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::javaScriptConsoleMessage(message, lineNumber, sourceID);
}
QString  PythonQtShell_QWebPage::chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "chooseFile");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "QWebFrame*" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue;
    void* args[3] = {NULL, (void*)&originatingFrame, (void*)&oldFile};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("chooseFile", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::chooseFile(originatingFrame, oldFile);
}
bool  PythonQtShell_QWebPage::javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "javaScriptPrompt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QWebFrame*" , "const QString&" , "const QString&" , "QString*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&originatingFrame, (void*)&msg, (void*)&defaultValue, (void*)&result};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("javaScriptPrompt", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::javaScriptPrompt(originatingFrame, msg, defaultValue, result);
}
bool  PythonQtShell_QWebPage::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebPage::event(arg__1);
}
bool  PythonQtShell_QWebPage::supportsExtension(QWebPage::Extension  extension) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportsExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QWebPage::Extension"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&extension};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::supportsExtension(extension);
}
QObject*  PythonQtShell_QWebPage::createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createPlugin");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QObject*" , "const QString&" , "const QUrl&" , "const QStringList&" , "const QStringList&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QObject* returnValue;
    void* args[5] = {NULL, (void*)&classid, (void*)&url, (void*)&paramNames, (void*)&paramValues};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createPlugin", methodInfo, result);
        } else {
          returnValue = *((QObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::createPlugin(classid, url, paramNames, paramValues);
}
bool  PythonQtShell_QWebPage::javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "javaScriptConfirm");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QWebFrame*" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&originatingFrame, (void*)&msg};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("javaScriptConfirm", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPage::javaScriptConfirm(originatingFrame, msg);
}
void PythonQtShell_QWebPage::javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "javaScriptAlert");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWebFrame*" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&originatingFrame, (void*)&msg};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::javaScriptAlert(originatingFrame, msg);
}
void PythonQtShell_QWebPage::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::timerEvent(arg__1);
}
void PythonQtShell_QWebPage::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::childEvent(arg__1);
}
void PythonQtShell_QWebPage::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPage::customEvent(arg__1);
}
bool  PythonQtShell_QWebPage::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebPage::eventFilter(arg__1, arg__2);
}
QWebPage* PythonQtWrapper_QWebPage::new_QWebPage(QObject*  parent)
{ 
return new PythonQtShell_QWebPage(parent); }

void PythonQtWrapper_QWebPage::updatePositionDependentActions(QWebPage* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->updatePositionDependentActions(pos));
}

QString  PythonQtWrapper_QWebPage::selectedText(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

bool  PythonQtWrapper_QWebPage::swallowContextMenuEvent(QWebPage* theWrappedObject, QContextMenuEvent*  event)
{
  return ( theWrappedObject->swallowContextMenuEvent(event));
}

QNetworkAccessManager*  PythonQtWrapper_QWebPage::networkAccessManager(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManager());
}

QString  PythonQtWrapper_QWebPage::userAgentForUrl(QWebPage* theWrappedObject, const QUrl&  url) const
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_userAgentForUrl(url));
}

bool  PythonQtWrapper_QWebPage::forwardUnsupportedContent(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->forwardUnsupportedContent());
}

bool  PythonQtWrapper_QWebPage::acceptNavigationRequest(QWebPage* theWrappedObject, QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_acceptNavigationRequest(frame, request, type));
}

quint64  PythonQtWrapper_QWebPage::bytesReceived(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->bytesReceived());
}

QSize  PythonQtWrapper_QWebPage::viewportSize(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->viewportSize());
}

void PythonQtWrapper_QWebPage::triggerAction(QWebPage* theWrappedObject, QWebPage::WebAction  action, bool  checked)
{
  ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_triggerAction(action, checked));
}

QWebPage*  PythonQtWrapper_QWebPage::createWindow(QWebPage* theWrappedObject, QWebPage::WebWindowType  type)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_createWindow(type));
}

bool  PythonQtWrapper_QWebPage::findText(QWebPage* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options)
{
  return ( theWrappedObject->findText(subString, options));
}

QPalette  PythonQtWrapper_QWebPage::palette(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->palette());
}

QAction*  PythonQtWrapper_QWebPage::action(QWebPage* theWrappedObject, QWebPage::WebAction  action) const
{
  return ( theWrappedObject->action(action));
}

QWebSettings*  PythonQtWrapper_QWebPage::settings(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->settings());
}

void PythonQtWrapper_QWebPage::setNetworkAccessManager(QWebPage* theWrappedObject, QNetworkAccessManager*  manager)
{
  ( theWrappedObject->setNetworkAccessManager(manager));
}

QWebHistory*  PythonQtWrapper_QWebPage::history(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->history());
}

QVariant  PythonQtWrapper_QWebPage::inputMethodQuery(QWebPage* theWrappedObject, Qt::InputMethodQuery  property) const
{
  return ( theWrappedObject->inputMethodQuery(property));
}

bool  PythonQtWrapper_QWebPage::focusNextPrevChild(QWebPage* theWrappedObject, bool  next)
{
  return ( theWrappedObject->focusNextPrevChild(next));
}

void PythonQtWrapper_QWebPage::javaScriptConsoleMessage(QWebPage* theWrappedObject, const QString&  message, int  lineNumber, const QString&  sourceID)
{
  ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_javaScriptConsoleMessage(message, lineNumber, sourceID));
}

void PythonQtWrapper_QWebPage::setView(QWebPage* theWrappedObject, QWidget*  view)
{
  ( theWrappedObject->setView(view));
}

QWebPluginFactory*  PythonQtWrapper_QWebPage::pluginFactory(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->pluginFactory());
}

void PythonQtWrapper_QWebPage::setViewportSize(QWebPage* theWrappedObject, const QSize&  size) const
{
  ( theWrappedObject->setViewportSize(size));
}

QString  PythonQtWrapper_QWebPage::chooseFile(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  oldFile)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_chooseFile(originatingFrame, oldFile));
}

quint64  PythonQtWrapper_QWebPage::totalBytes(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->totalBytes());
}

void PythonQtWrapper_QWebPage::setForwardUnsupportedContent(QWebPage* theWrappedObject, bool  forward)
{
  ( theWrappedObject->setForwardUnsupportedContent(forward));
}

bool  PythonQtWrapper_QWebPage::javaScriptPrompt(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_javaScriptPrompt(originatingFrame, msg, defaultValue, result));
}

bool  PythonQtWrapper_QWebPage::event(QWebPage* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QWebPage::supportsExtension(QWebPage* theWrappedObject, QWebPage::Extension  extension) const
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_supportsExtension(extension));
}

void PythonQtWrapper_QWebPage::setPluginFactory(QWebPage* theWrappedObject, QWebPluginFactory*  factory)
{
  ( theWrappedObject->setPluginFactory(factory));
}

void PythonQtWrapper_QWebPage::setLinkDelegationPolicy(QWebPage* theWrappedObject, QWebPage::LinkDelegationPolicy  policy)
{
  ( theWrappedObject->setLinkDelegationPolicy(policy));
}

QWebPage::LinkDelegationPolicy  PythonQtWrapper_QWebPage::linkDelegationPolicy(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->linkDelegationPolicy());
}

QObject*  PythonQtWrapper_QWebPage::createPlugin(QWebPage* theWrappedObject, const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_createPlugin(classid, url, paramNames, paramValues));
}

QUndoStack*  PythonQtWrapper_QWebPage::undoStack(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->undoStack());
}

QWebFrame*  PythonQtWrapper_QWebPage::mainFrame(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->mainFrame());
}

QWebFrame*  PythonQtWrapper_QWebPage::currentFrame(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->currentFrame());
}

bool  PythonQtWrapper_QWebPage::javaScriptConfirm(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_javaScriptConfirm(originatingFrame, msg));
}

void PythonQtWrapper_QWebPage::setPalette(QWebPage* theWrappedObject, const QPalette&  palette)
{
  ( theWrappedObject->setPalette(palette));
}

QWidget*  PythonQtWrapper_QWebPage::view(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->view());
}

bool  PythonQtWrapper_QWebPage::isModified(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->isModified());
}

void PythonQtWrapper_QWebPage::javaScriptAlert(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg)
{
  ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_javaScriptAlert(originatingFrame, msg));
}



void PythonQtShell_QWebPluginFactory::refreshPlugins()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "refreshPlugins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPluginFactory::refreshPlugins();
}
QList<QWebPluginFactory::Plugin >  PythonQtShell_QWebPluginFactory::plugins() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "plugins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QWebPluginFactory::Plugin >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QWebPluginFactory::Plugin > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("plugins", methodInfo, result);
        } else {
          returnValue = *((QList<QWebPluginFactory::Plugin >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QList<QWebPluginFactory::Plugin > result;
return result;
}
bool  PythonQtShell_QWebPluginFactory::supportsExtension(QWebPluginFactory::Extension  extension) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportsExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QWebPluginFactory::Extension"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&extension};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebPluginFactory::supportsExtension(extension);
}
QObject*  PythonQtShell_QWebPluginFactory::create(const QString&  mimeType, const QUrl&  url, const QStringList&  argumentNames, const QStringList&  argumentValues) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "create");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QObject*" , "const QString&" , "const QUrl&" , "const QStringList&" , "const QStringList&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QObject* returnValue;
    void* args[5] = {NULL, (void*)&mimeType, (void*)&url, (void*)&argumentNames, (void*)&argumentValues};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
        } else {
          returnValue = *((QObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QObject* result;
return result;
}
void PythonQtShell_QWebPluginFactory::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPluginFactory::childEvent(arg__1);
}
void PythonQtShell_QWebPluginFactory::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPluginFactory::customEvent(arg__1);
}
bool  PythonQtShell_QWebPluginFactory::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebPluginFactory::event(arg__1);
}
void PythonQtShell_QWebPluginFactory::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebPluginFactory::timerEvent(arg__1);
}
bool  PythonQtShell_QWebPluginFactory::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebPluginFactory::eventFilter(arg__1, arg__2);
}
QWebPluginFactory* PythonQtWrapper_QWebPluginFactory::new_QWebPluginFactory(QObject*  parent)
{ 
return new PythonQtShell_QWebPluginFactory(parent); }

void PythonQtWrapper_QWebPluginFactory::refreshPlugins(QWebPluginFactory* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QWebPluginFactory*)theWrappedObject)->promoted_refreshPlugins());
}

bool  PythonQtWrapper_QWebPluginFactory::supportsExtension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension) const
{
  return ( ((PythonQtPublicPromoter_QWebPluginFactory*)theWrappedObject)->promoted_supportsExtension(extension));
}



QUrl  PythonQtWrapper_QWebSettings::userStyleSheetUrl(QWebSettings* theWrappedObject) const
{
  return ( theWrappedObject->userStyleSheetUrl());
}

void PythonQtWrapper_QWebSettings::resetFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which)
{
  ( theWrappedObject->resetFontFamily(which));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setWebGraphic(QWebSettings::WebGraphic  type, const QPixmap&  graphic)
{
  (QWebSettings::setWebGraphic(type, graphic));
}

void PythonQtWrapper_QWebSettings::resetAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr)
{
  ( theWrappedObject->resetAttribute(attr));
}

QString  PythonQtWrapper_QWebSettings::fontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which) const
{
  return ( theWrappedObject->fontFamily(which));
}

QWebSettings*  PythonQtWrapper_QWebSettings::static_QWebSettings_globalSettings()
{
  return (QWebSettings::globalSettings());
}

void PythonQtWrapper_QWebSettings::setAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr, bool  on)
{
  ( theWrappedObject->setAttribute(attr, on));
}

int  PythonQtWrapper_QWebSettings::static_QWebSettings_maximumPagesInCache()
{
  return (QWebSettings::maximumPagesInCache());
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setObjectCacheCapacities(int  cacheMinDeadCapacity, int  cacheMaxDead, int  totalCapacity)
{
  (QWebSettings::setObjectCacheCapacities(cacheMinDeadCapacity, cacheMaxDead, totalCapacity));
}

QPixmap  PythonQtWrapper_QWebSettings::static_QWebSettings_webGraphic(QWebSettings::WebGraphic  type)
{
  return (QWebSettings::webGraphic(type));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_clearIconDatabase()
{
  (QWebSettings::clearIconDatabase());
}

QString  PythonQtWrapper_QWebSettings::static_QWebSettings_iconDatabasePath()
{
  return (QWebSettings::iconDatabasePath());
}

void PythonQtWrapper_QWebSettings::setFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type, int  size)
{
  ( theWrappedObject->setFontSize(type, size));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setMaximumPagesInCache(int  pages)
{
  (QWebSettings::setMaximumPagesInCache(pages));
}

void PythonQtWrapper_QWebSettings::setUserStyleSheetUrl(QWebSettings* theWrappedObject, const QUrl&  location)
{
  ( theWrappedObject->setUserStyleSheetUrl(location));
}

bool  PythonQtWrapper_QWebSettings::testAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr) const
{
  return ( theWrappedObject->testAttribute(attr));
}

int  PythonQtWrapper_QWebSettings::fontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type) const
{
  return ( theWrappedObject->fontSize(type));
}

QIcon  PythonQtWrapper_QWebSettings::static_QWebSettings_iconForUrl(const QUrl&  url)
{
  return (QWebSettings::iconForUrl(url));
}

void PythonQtWrapper_QWebSettings::setFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which, const QString&  family)
{
  ( theWrappedObject->setFontFamily(which, family));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setIconDatabasePath(const QString&  location)
{
  (QWebSettings::setIconDatabasePath(location));
}

void PythonQtWrapper_QWebSettings::resetFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type)
{
  ( theWrappedObject->resetFontSize(type));
}



void PythonQtShell_QWebView::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::keyPressEvent(arg__1);
}
void PythonQtShell_QWebView::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::wheelEvent(arg__1);
}
void PythonQtShell_QWebView::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::mouseMoveEvent(arg__1);
}
QVariant  PythonQtShell_QWebView::inputMethodQuery(Qt::InputMethodQuery  property) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&property};
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
  }
}
  return QWebView::inputMethodQuery(property);
}
bool  PythonQtShell_QWebView::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&next};
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
  }
}
  return QWebView::focusNextPrevChild(next);
}
QWebView*  PythonQtShell_QWebView::createWindow(QWebPage::WebWindowType  type)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createWindow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QWebView*" , "QWebPage::WebWindowType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QWebView* returnValue;
    void* args[2] = {NULL, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createWindow", methodInfo, result);
        } else {
          returnValue = *((QWebView**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebView::createWindow(type);
}
void PythonQtShell_QWebView::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QWebView::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::dragEnterEvent(arg__1);
}
void PythonQtShell_QWebView::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::focusInEvent(arg__1);
}
void PythonQtShell_QWebView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::contextMenuEvent(arg__1);
}
void PythonQtShell_QWebView::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::inputMethodEvent(arg__1);
}
void PythonQtShell_QWebView::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QWebView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::changeEvent(arg__1);
}
void PythonQtShell_QWebView::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::dragLeaveEvent(arg__1);
}
void PythonQtShell_QWebView::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::dragMoveEvent(arg__1);
}
void PythonQtShell_QWebView::paintEvent(QPaintEvent*  ev)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::paintEvent(ev);
}
bool  PythonQtShell_QWebView::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebView::event(arg__1);
}
void PythonQtShell_QWebView::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::dropEvent(arg__1);
}
void PythonQtShell_QWebView::resizeEvent(QResizeEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::resizeEvent(e);
}
void PythonQtShell_QWebView::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::focusOutEvent(arg__1);
}
void PythonQtShell_QWebView::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::keyReleaseEvent(arg__1);
}
void PythonQtShell_QWebView::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::mousePressEvent(arg__1);
}
void PythonQtShell_QWebView::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::moveEvent(arg__1);
}
void PythonQtShell_QWebView::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::languageChange();
}
void PythonQtShell_QWebView::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::showEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QWebView::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebView::paintEngine();
}
void PythonQtShell_QWebView::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::enterEvent(arg__1);
}
int  PythonQtShell_QWebView::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebView::devType();
}
void PythonQtShell_QWebView::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::closeEvent(arg__1);
}
void PythonQtShell_QWebView::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::tabletEvent(arg__1);
}
int  PythonQtShell_QWebView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebView::metric(arg__1);
}
int  PythonQtShell_QWebView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebView::heightForWidth(arg__1);
}
void PythonQtShell_QWebView::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::leaveEvent(arg__1);
}
QSize  PythonQtShell_QWebView::minimumSizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getMinimumSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebView::minimumSizeHint();
}
void PythonQtShell_QWebView::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::hideEvent(arg__1);
}
void PythonQtShell_QWebView::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::actionEvent(arg__1);
}
void PythonQtShell_QWebView::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::timerEvent(arg__1);
}
void PythonQtShell_QWebView::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::childEvent(arg__1);
}
void PythonQtShell_QWebView::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::customEvent(arg__1);
}
bool  PythonQtShell_QWebView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QWebView::eventFilter(arg__1, arg__2);
}
QWebView* PythonQtWrapper_QWebView::new_QWebView(QWidget*  parent)
{ 
return new PythonQtShell_QWebView(parent); }

QString  PythonQtWrapper_QWebView::selectedText(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

void PythonQtWrapper_QWebView::keyPressEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_keyPressEvent(arg__1));
}

void PythonQtWrapper_QWebView::setHtml(QWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
  ( theWrappedObject->setHtml(html, baseUrl));
}

void PythonQtWrapper_QWebView::wheelEvent(QWebView* theWrappedObject, QWheelEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_wheelEvent(arg__1));
}

QSize  PythonQtWrapper_QWebView::sizeHint(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

void PythonQtWrapper_QWebView::setTextSizeMultiplier(QWebView* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setTextSizeMultiplier(factor));
}

void PythonQtWrapper_QWebView::setPage(QWebView* theWrappedObject, QWebPage*  page)
{
  ( theWrappedObject->setPage(page));
}

void PythonQtWrapper_QWebView::load(QWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation, const QByteArray&  body)
{
  ( theWrappedObject->load(request, operation, body));
}

QAction*  PythonQtWrapper_QWebView::pageAction(QWebView* theWrappedObject, QWebPage::WebAction  action) const
{
  return ( theWrappedObject->pageAction(action));
}

void PythonQtWrapper_QWebView::mouseMoveEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mouseMoveEvent(arg__1));
}

QString  PythonQtWrapper_QWebView::title(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

void PythonQtWrapper_QWebView::load(QWebView* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->load(url));
}

bool  PythonQtWrapper_QWebView::isModified(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->isModified());
}

QVariant  PythonQtWrapper_QWebView::inputMethodQuery(QWebView* theWrappedObject, Qt::InputMethodQuery  property) const
{
  return ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_inputMethodQuery(property));
}

bool  PythonQtWrapper_QWebView::focusNextPrevChild(QWebView* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

QWebView*  PythonQtWrapper_QWebView::createWindow(QWebView* theWrappedObject, QWebPage::WebWindowType  type)
{
  return ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_createWindow(type));
}

bool  PythonQtWrapper_QWebView::findText(QWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options)
{
  return ( theWrappedObject->findText(subString, options));
}

void PythonQtWrapper_QWebView::mouseDoubleClickEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mouseDoubleClickEvent(arg__1));
}

QWebSettings*  PythonQtWrapper_QWebView::settings(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->settings());
}

void PythonQtWrapper_QWebView::dragEnterEvent(QWebView* theWrappedObject, QDragEnterEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dragEnterEvent(arg__1));
}

QWebHistory*  PythonQtWrapper_QWebView::history(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->history());
}

void PythonQtWrapper_QWebView::focusInEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_focusInEvent(arg__1));
}

void PythonQtWrapper_QWebView::contextMenuEvent(QWebView* theWrappedObject, QContextMenuEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_contextMenuEvent(arg__1));
}

void PythonQtWrapper_QWebView::inputMethodEvent(QWebView* theWrappedObject, QInputMethodEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_inputMethodEvent(arg__1));
}

qreal  PythonQtWrapper_QWebView::textSizeMultiplier(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->textSizeMultiplier());
}

void PythonQtWrapper_QWebView::mouseReleaseEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1));
}

void PythonQtWrapper_QWebView::setContent(QWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
  ( theWrappedObject->setContent(data, mimeType, baseUrl));
}

QIcon  PythonQtWrapper_QWebView::icon(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

void PythonQtWrapper_QWebView::changeEvent(QWebView* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_changeEvent(arg__1));
}

void PythonQtWrapper_QWebView::triggerPageAction(QWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked)
{
  ( theWrappedObject->triggerPageAction(action, checked));
}

void PythonQtWrapper_QWebView::dragLeaveEvent(QWebView* theWrappedObject, QDragLeaveEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dragLeaveEvent(arg__1));
}

void PythonQtWrapper_QWebView::dragMoveEvent(QWebView* theWrappedObject, QDragMoveEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dragMoveEvent(arg__1));
}

QWebPage*  PythonQtWrapper_QWebView::page(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->page());
}

void PythonQtWrapper_QWebView::paintEvent(QWebView* theWrappedObject, QPaintEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_paintEvent(ev));
}

bool  PythonQtWrapper_QWebView::event(QWebView* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_event(arg__1));
}

void PythonQtWrapper_QWebView::dropEvent(QWebView* theWrappedObject, QDropEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dropEvent(arg__1));
}

void PythonQtWrapper_QWebView::resizeEvent(QWebView* theWrappedObject, QResizeEvent*  e)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_resizeEvent(e));
}

QUrl  PythonQtWrapper_QWebView::url(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

void PythonQtWrapper_QWebView::focusOutEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_focusOutEvent(arg__1));
}

void PythonQtWrapper_QWebView::setUrl(QWebView* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QWebView::keyReleaseEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_keyReleaseEvent(arg__1));
}

void PythonQtWrapper_QWebView::mousePressEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mousePressEvent(arg__1));
}


