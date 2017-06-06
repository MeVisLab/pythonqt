#include "com_trolltech_qt_webkit0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QGraphicsScene>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
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
#include <qstyleoption.h>
#include <qundostack.h>
#include <qurl.h>
#include <qwebdatabase.h>
#include <qwebelement.h>
#include <qwebframe.h>
#include <qwebhistory.h>
#include <qwebhistoryinterface.h>
#include <qwebpage.h>
#include <qwebpluginfactory.h>
#include <qwebsecurityorigin.h>
#include <qwebsettings.h>
#include <qwebview.h>
#include <qwidget.h>
#include <qwindow.h>

PythonQtShell_QGraphicsWebView::~PythonQtShell_QGraphicsWebView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsWebView::changeEvent(QEvent*  event0)
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
  QGraphicsWebView::changeEvent(event0);
}
void PythonQtShell_QGraphicsWebView::childEvent(QChildEvent*  arg__1)
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
  QGraphicsWebView::childEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::closeEvent(QCloseEvent*  event0)
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
  QGraphicsWebView::closeEvent(event0);
}
void PythonQtShell_QGraphicsWebView::contextMenuEvent(QGraphicsSceneContextMenuEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("contextMenuEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
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
  QGraphicsWebView::contextMenuEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::customEvent(QEvent*  arg__1)
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
  QGraphicsWebView::customEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::dragEnterEvent(QGraphicsSceneDragDropEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragEnterEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
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
  QGraphicsWebView::dragEnterEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::dragLeaveEvent(QGraphicsSceneDragDropEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragLeaveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
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
  QGraphicsWebView::dragLeaveEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::dragMoveEvent(QGraphicsSceneDragDropEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dragMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
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
  QGraphicsWebView::dragMoveEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::dropEvent(QGraphicsSceneDragDropEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
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
  QGraphicsWebView::dropEvent(arg__1);
}
bool  PythonQtShell_QGraphicsWebView::event(QEvent*  arg__1)
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
  return QGraphicsWebView::event(arg__1);
}
bool  PythonQtShell_QGraphicsWebView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QGraphicsWebView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsWebView::focusInEvent(QFocusEvent*  arg__1)
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
  QGraphicsWebView::focusInEvent(arg__1);
}
bool  PythonQtShell_QGraphicsWebView::focusNextPrevChild(bool  next0)
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
  return QGraphicsWebView::focusNextPrevChild(next0);
}
void PythonQtShell_QGraphicsWebView::focusOutEvent(QFocusEvent*  arg__1)
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
  QGraphicsWebView::focusOutEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::getContentsMargins(qreal*  left0, qreal*  top1, qreal*  right2, qreal*  bottom3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("getContentsMargins");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left0, (void*)&top1, (void*)&right2, (void*)&bottom3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QGraphicsWebView::getContentsMargins(left0, top1, right2, bottom3);
}
void PythonQtShell_QGraphicsWebView::grabKeyboardEvent(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("grabKeyboardEvent");
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
  QGraphicsWebView::grabKeyboardEvent(event0);
}
void PythonQtShell_QGraphicsWebView::grabMouseEvent(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("grabMouseEvent");
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
  QGraphicsWebView::grabMouseEvent(event0);
}
void PythonQtShell_QGraphicsWebView::hideEvent(QHideEvent*  event0)
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
  QGraphicsWebView::hideEvent(event0);
}
void PythonQtShell_QGraphicsWebView::hoverLeaveEvent(QGraphicsSceneHoverEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hoverLeaveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
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
  QGraphicsWebView::hoverLeaveEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::hoverMoveEvent(QGraphicsSceneHoverEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hoverMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
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
  QGraphicsWebView::hoverMoveEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::initStyleOption(QStyleOption*  option0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("initStyleOption");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyleOption*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&option0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QGraphicsWebView::initStyleOption(option0);
}
void PythonQtShell_QGraphicsWebView::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QGraphicsWebView::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QGraphicsWebView::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("inputMethodQuery");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query0};
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
  return QGraphicsWebView::inputMethodQuery(query0);
}
QVariant  PythonQtShell_QGraphicsWebView::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("itemChange");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change0, (void*)&value1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    if (change0 == QGraphicsItem::ItemParentChange || change0 == QGraphicsItem::ItemSceneChange) {
      returnValue = value1;
    } 
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QGraphicsWebView::itemChange(change0, value1);
}
void PythonQtShell_QGraphicsWebView::keyPressEvent(QKeyEvent*  arg__1)
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
  QGraphicsWebView::keyPressEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QGraphicsWebView::keyReleaseEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
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
  QGraphicsWebView::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::mouseMoveEvent(QGraphicsSceneMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
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
  QGraphicsWebView::mouseMoveEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::mousePressEvent(QGraphicsSceneMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mousePressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
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
  QGraphicsWebView::mousePressEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::mouseReleaseEvent(QGraphicsSceneMouseEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
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
  QGraphicsWebView::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::moveEvent(QGraphicsSceneMoveEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMoveEvent*"};
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
  QGraphicsWebView::moveEvent(event0);
}
void PythonQtShell_QGraphicsWebView::paint(QPainter*  arg__1, const QStyleOptionGraphicsItem*  options1, QWidget*  widget2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("paint");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&arg__1, (void*)&options1, (void*)&widget2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QGraphicsWebView::paint(arg__1, options1, widget2);
}
void PythonQtShell_QGraphicsWebView::paintWindowFrame(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("paintWindowFrame");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter0, (void*)&option1, (void*)&widget2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QGraphicsWebView::paintWindowFrame(painter0, option1, widget2);
}
void PythonQtShell_QGraphicsWebView::polishEvent()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polishEvent");
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
  QGraphicsWebView::polishEvent();
}
QVariant  PythonQtShell_QGraphicsWebView::propertyChange(const QString&  propertyName0, const QVariant&  value1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("propertyChange");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "const QString&" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&propertyName0, (void*)&value1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("propertyChange", methodInfo, result);
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
  return QGraphicsWebView::propertyChange(propertyName0, value1);
}
void PythonQtShell_QGraphicsWebView::resizeEvent(QGraphicsSceneResizeEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resizeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneResizeEvent*"};
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
  QGraphicsWebView::resizeEvent(event0);
}
bool  PythonQtShell_QGraphicsWebView::sceneEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sceneEvent");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
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
  return QGraphicsWebView::sceneEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::setGeometry(const QRectF&  rect0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setGeometry");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&rect0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QGraphicsWebView::setGeometry(rect0);
}
void PythonQtShell_QGraphicsWebView::showEvent(QShowEvent*  event0)
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
  QGraphicsWebView::showEvent(event0);
}
QSizeF  PythonQtShell_QGraphicsWebView::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sizeHint");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSizeF" , "Qt::SizeHint" , "const QSizeF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QSizeF returnValue;
    void* args[3] = {NULL, (void*)&which0, (void*)&constraint1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
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
  return QGraphicsWebView::sizeHint(which0, constraint1);
}
void PythonQtShell_QGraphicsWebView::timerEvent(QTimerEvent*  arg__1)
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
  QGraphicsWebView::timerEvent(arg__1);
}
void PythonQtShell_QGraphicsWebView::ungrabKeyboardEvent(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("ungrabKeyboardEvent");
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
  QGraphicsWebView::ungrabKeyboardEvent(event0);
}
void PythonQtShell_QGraphicsWebView::ungrabMouseEvent(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("ungrabMouseEvent");
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
  QGraphicsWebView::ungrabMouseEvent(event0);
}
void PythonQtShell_QGraphicsWebView::updateGeometry()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateGeometry");
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
  QGraphicsWebView::updateGeometry();
}
void PythonQtShell_QGraphicsWebView::wheelEvent(QGraphicsSceneWheelEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("wheelEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
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
  QGraphicsWebView::wheelEvent(arg__1);
}
bool  PythonQtShell_QGraphicsWebView::windowFrameEvent(QEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("windowFrameEvent");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("windowFrameEvent", methodInfo, result);
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
  return QGraphicsWebView::windowFrameEvent(e0);
}
Qt::WindowFrameSection  PythonQtShell_QGraphicsWebView::windowFrameSectionAt(const QPointF&  pos0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("windowFrameSectionAt");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::WindowFrameSection" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::WindowFrameSection returnValue;
    void* args[2] = {NULL, (void*)&pos0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("windowFrameSectionAt", methodInfo, result);
        } else {
          returnValue = *((Qt::WindowFrameSection*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QGraphicsWebView::windowFrameSectionAt(pos0);
}
QGraphicsWebView* PythonQtWrapper_QGraphicsWebView::new_QGraphicsWebView(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsWebView(parent); }

void PythonQtWrapper_QGraphicsWebView::contextMenuEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneContextMenuEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_contextMenuEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::dragEnterEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_dragEnterEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::dragLeaveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_dragLeaveEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::dragMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_dragMoveEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::dropEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_dropEvent(arg__1));
}

bool  PythonQtWrapper_QGraphicsWebView::event(QGraphicsWebView* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QGraphicsWebView::findText(QGraphicsWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options)
{
  return ( theWrappedObject->findText(subString, options));
}

void PythonQtWrapper_QGraphicsWebView::focusInEvent(QGraphicsWebView* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_focusInEvent(arg__1));
}

bool  PythonQtWrapper_QGraphicsWebView::focusNextPrevChild(QGraphicsWebView* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QGraphicsWebView::focusOutEvent(QGraphicsWebView* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_focusOutEvent(arg__1));
}

QWebHistory*  PythonQtWrapper_QGraphicsWebView::history(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->history());
}

void PythonQtWrapper_QGraphicsWebView::hoverLeaveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneHoverEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_hoverLeaveEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::hoverMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneHoverEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_hoverMoveEvent(arg__1));
}

QIcon  PythonQtWrapper_QGraphicsWebView::icon(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

void PythonQtWrapper_QGraphicsWebView::inputMethodEvent(QGraphicsWebView* theWrappedObject, QInputMethodEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_inputMethodEvent(arg__1));
}

QVariant  PythonQtWrapper_QGraphicsWebView::inputMethodQuery(QGraphicsWebView* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_inputMethodQuery(query));
}

bool  PythonQtWrapper_QGraphicsWebView::isModified(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->isModified());
}

bool  PythonQtWrapper_QGraphicsWebView::isTiledBackingStoreFrozen(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->isTiledBackingStoreFrozen());
}

QVariant  PythonQtWrapper_QGraphicsWebView::itemChange(QGraphicsWebView* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_itemChange(change, value));
}

void PythonQtWrapper_QGraphicsWebView::keyPressEvent(QGraphicsWebView* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_keyPressEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::keyReleaseEvent(QGraphicsWebView* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_keyReleaseEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::load(QGraphicsWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation, const QByteArray&  body)
{
  ( theWrappedObject->load(request, operation, body));
}

void PythonQtWrapper_QGraphicsWebView::load(QGraphicsWebView* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->load(url));
}

void PythonQtWrapper_QGraphicsWebView::mouseDoubleClickEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_mouseDoubleClickEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::mouseMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_mouseMoveEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::mousePressEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_mousePressEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::mouseReleaseEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1));
}

QWebPage*  PythonQtWrapper_QGraphicsWebView::page(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->page());
}

QAction*  PythonQtWrapper_QGraphicsWebView::pageAction(QGraphicsWebView* theWrappedObject, QWebPage::WebAction  action) const
{
  return ( theWrappedObject->pageAction(action));
}

void PythonQtWrapper_QGraphicsWebView::paint(QGraphicsWebView* theWrappedObject, QPainter*  arg__1, const QStyleOptionGraphicsItem*  options, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_paint(arg__1, options, widget));
}

QPainter::RenderHints  PythonQtWrapper_QGraphicsWebView::renderHints(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->renderHints());
}

bool  PythonQtWrapper_QGraphicsWebView::resizesToContents(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->resizesToContents());
}

bool  PythonQtWrapper_QGraphicsWebView::sceneEvent(QGraphicsWebView* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_sceneEvent(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::setContent(QGraphicsWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
  ( theWrappedObject->setContent(data, mimeType, baseUrl));
}

void PythonQtWrapper_QGraphicsWebView::setGeometry(QGraphicsWebView* theWrappedObject, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_setGeometry(rect));
}

void PythonQtWrapper_QGraphicsWebView::setHtml(QGraphicsWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
  ( theWrappedObject->setHtml(html, baseUrl));
}

void PythonQtWrapper_QGraphicsWebView::setPage(QGraphicsWebView* theWrappedObject, QWebPage*  arg__1)
{
  ( theWrappedObject->setPage(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::setRenderHint(QGraphicsWebView* theWrappedObject, QPainter::RenderHint  arg__1, bool  enabled)
{
  ( theWrappedObject->setRenderHint(arg__1, enabled));
}

void PythonQtWrapper_QGraphicsWebView::setRenderHints(QGraphicsWebView* theWrappedObject, QPainter::RenderHints  arg__1)
{
  ( theWrappedObject->setRenderHints(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::setResizesToContents(QGraphicsWebView* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setResizesToContents(enabled));
}

void PythonQtWrapper_QGraphicsWebView::setTiledBackingStoreFrozen(QGraphicsWebView* theWrappedObject, bool  frozen)
{
  ( theWrappedObject->setTiledBackingStoreFrozen(frozen));
}

void PythonQtWrapper_QGraphicsWebView::setUrl(QGraphicsWebView* theWrappedObject, const QUrl&  arg__1)
{
  ( theWrappedObject->setUrl(arg__1));
}

void PythonQtWrapper_QGraphicsWebView::setZoomFactor(QGraphicsWebView* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setZoomFactor(arg__1));
}

QWebSettings*  PythonQtWrapper_QGraphicsWebView::settings(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->settings());
}

QSizeF  PythonQtWrapper_QGraphicsWebView::sizeHint(QGraphicsWebView* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_sizeHint(which, constraint));
}

QString  PythonQtWrapper_QGraphicsWebView::title(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

void PythonQtWrapper_QGraphicsWebView::triggerPageAction(QGraphicsWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked)
{
  ( theWrappedObject->triggerPageAction(action, checked));
}

void PythonQtWrapper_QGraphicsWebView::updateGeometry(QGraphicsWebView* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_updateGeometry());
}

QUrl  PythonQtWrapper_QGraphicsWebView::url(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

void PythonQtWrapper_QGraphicsWebView::wheelEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneWheelEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QGraphicsWebView*)theWrappedObject)->promoted_wheelEvent(arg__1));
}

qreal  PythonQtWrapper_QGraphicsWebView::zoomFactor(QGraphicsWebView* theWrappedObject) const
{
  return ( theWrappedObject->zoomFactor());
}



QWebDatabase* PythonQtWrapper_QWebDatabase::new_QWebDatabase(const QWebDatabase&  other)
{ 
return new QWebDatabase(other); }

QString  PythonQtWrapper_QWebDatabase::displayName(QWebDatabase* theWrappedObject) const
{
  return ( theWrappedObject->displayName());
}

qint64  PythonQtWrapper_QWebDatabase::expectedSize(QWebDatabase* theWrappedObject) const
{
  return ( theWrappedObject->expectedSize());
}

QString  PythonQtWrapper_QWebDatabase::fileName(QWebDatabase* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QString  PythonQtWrapper_QWebDatabase::name(QWebDatabase* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QWebDatabase*  PythonQtWrapper_QWebDatabase::operator_assign(QWebDatabase* theWrappedObject, const QWebDatabase&  other)
{
  return &( (*theWrappedObject)= other);
}

QWebSecurityOrigin  PythonQtWrapper_QWebDatabase::origin(QWebDatabase* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QWebDatabase::static_QWebDatabase_removeAllDatabases()
{
  (QWebDatabase::removeAllDatabases());
}

void PythonQtWrapper_QWebDatabase::static_QWebDatabase_removeDatabase(const QWebDatabase&  arg__1)
{
  (QWebDatabase::removeDatabase(arg__1));
}

qint64  PythonQtWrapper_QWebDatabase::size(QWebDatabase* theWrappedObject) const
{
  return ( theWrappedObject->size());
}



QWebElement* PythonQtWrapper_QWebElement::new_QWebElement()
{ 
return new QWebElement(); }

QWebElement* PythonQtWrapper_QWebElement::new_QWebElement(const QWebElement&  arg__1)
{ 
return new QWebElement(arg__1); }

void PythonQtWrapper_QWebElement::addClass(QWebElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->addClass(name));
}

void PythonQtWrapper_QWebElement::appendInside(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->appendInside(markup));
}

void PythonQtWrapper_QWebElement::appendInside(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->appendInside(element));
}

void PythonQtWrapper_QWebElement::appendOutside(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->appendOutside(markup));
}

void PythonQtWrapper_QWebElement::appendOutside(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->appendOutside(element));
}

QString  PythonQtWrapper_QWebElement::attribute(QWebElement* theWrappedObject, const QString&  name, const QString&  defaultValue) const
{
  return ( theWrappedObject->attribute(name, defaultValue));
}

QString  PythonQtWrapper_QWebElement::attributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  defaultValue) const
{
  return ( theWrappedObject->attributeNS(namespaceUri, name, defaultValue));
}

QStringList  PythonQtWrapper_QWebElement::attributeNames(QWebElement* theWrappedObject, const QString&  namespaceUri) const
{
  return ( theWrappedObject->attributeNames(namespaceUri));
}

QStringList  PythonQtWrapper_QWebElement::classes(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->classes());
}

QWebElement  PythonQtWrapper_QWebElement::clone(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QWebElement  PythonQtWrapper_QWebElement::document(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

void PythonQtWrapper_QWebElement::encloseContentsWith(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->encloseContentsWith(markup));
}

void PythonQtWrapper_QWebElement::encloseContentsWith(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->encloseContentsWith(element));
}

void PythonQtWrapper_QWebElement::encloseWith(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->encloseWith(markup));
}

void PythonQtWrapper_QWebElement::encloseWith(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->encloseWith(element));
}

QVariant  PythonQtWrapper_QWebElement::evaluateJavaScript(QWebElement* theWrappedObject, const QString&  scriptSource)
{
  return ( theWrappedObject->evaluateJavaScript(scriptSource));
}

QWebElementCollection  PythonQtWrapper_QWebElement::findAll(QWebElement* theWrappedObject, const QString&  selectorQuery) const
{
  return ( theWrappedObject->findAll(selectorQuery));
}

QWebElement  PythonQtWrapper_QWebElement::findFirst(QWebElement* theWrappedObject, const QString&  selectorQuery) const
{
  return ( theWrappedObject->findFirst(selectorQuery));
}

QWebElement  PythonQtWrapper_QWebElement::firstChild(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->firstChild());
}

QRect  PythonQtWrapper_QWebElement::geometry(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->geometry());
}

bool  PythonQtWrapper_QWebElement::hasAttribute(QWebElement* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->hasAttribute(name));
}

bool  PythonQtWrapper_QWebElement::hasAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name) const
{
  return ( theWrappedObject->hasAttributeNS(namespaceUri, name));
}

bool  PythonQtWrapper_QWebElement::hasAttributes(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->hasAttributes());
}

bool  PythonQtWrapper_QWebElement::hasClass(QWebElement* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->hasClass(name));
}

bool  PythonQtWrapper_QWebElement::hasFocus(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

bool  PythonQtWrapper_QWebElement::isNull(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QWebElement  PythonQtWrapper_QWebElement::lastChild(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->lastChild());
}

QString  PythonQtWrapper_QWebElement::localName(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->localName());
}

QString  PythonQtWrapper_QWebElement::namespaceUri(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

QWebElement  PythonQtWrapper_QWebElement::nextSibling(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->nextSibling());
}

bool  PythonQtWrapper_QWebElement::__ne__(QWebElement* theWrappedObject, const QWebElement&  o) const
{
  return ( (*theWrappedObject)!= o);
}

QWebElement*  PythonQtWrapper_QWebElement::operator_assign(QWebElement* theWrappedObject, const QWebElement&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QWebElement::__eq__(QWebElement* theWrappedObject, const QWebElement&  o) const
{
  return ( (*theWrappedObject)== o);
}

QWebElement  PythonQtWrapper_QWebElement::parent(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

QString  PythonQtWrapper_QWebElement::prefix(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

void PythonQtWrapper_QWebElement::prependInside(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->prependInside(markup));
}

void PythonQtWrapper_QWebElement::prependInside(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->prependInside(element));
}

void PythonQtWrapper_QWebElement::prependOutside(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->prependOutside(markup));
}

void PythonQtWrapper_QWebElement::prependOutside(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->prependOutside(element));
}

QWebElement  PythonQtWrapper_QWebElement::previousSibling(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->previousSibling());
}

void PythonQtWrapper_QWebElement::removeAllChildren(QWebElement* theWrappedObject)
{
  ( theWrappedObject->removeAllChildren());
}

void PythonQtWrapper_QWebElement::removeAttribute(QWebElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->removeAttribute(name));
}

void PythonQtWrapper_QWebElement::removeAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name)
{
  ( theWrappedObject->removeAttributeNS(namespaceUri, name));
}

void PythonQtWrapper_QWebElement::removeClass(QWebElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->removeClass(name));
}

void PythonQtWrapper_QWebElement::removeFromDocument(QWebElement* theWrappedObject)
{
  ( theWrappedObject->removeFromDocument());
}

void PythonQtWrapper_QWebElement::render(QWebElement* theWrappedObject, QPainter*  painter)
{
  ( theWrappedObject->render(painter));
}

void PythonQtWrapper_QWebElement::render(QWebElement* theWrappedObject, QPainter*  painter, const QRect&  clipRect)
{
  ( theWrappedObject->render(painter, clipRect));
}

void PythonQtWrapper_QWebElement::replace(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->replace(markup));
}

void PythonQtWrapper_QWebElement::replace(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->replace(element));
}

void PythonQtWrapper_QWebElement::setAttribute(QWebElement* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QWebElement::setAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
  ( theWrappedObject->setAttributeNS(namespaceUri, name, value));
}

void PythonQtWrapper_QWebElement::setFocus(QWebElement* theWrappedObject)
{
  ( theWrappedObject->setFocus());
}

void PythonQtWrapper_QWebElement::setInnerXml(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->setInnerXml(markup));
}

void PythonQtWrapper_QWebElement::setOuterXml(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->setOuterXml(markup));
}

void PythonQtWrapper_QWebElement::setPlainText(QWebElement* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setPlainText(text));
}

void PythonQtWrapper_QWebElement::setStyleProperty(QWebElement* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->setStyleProperty(name, value));
}

QString  PythonQtWrapper_QWebElement::styleProperty(QWebElement* theWrappedObject, const QString&  name, QWebElement::StyleResolveStrategy  strategy) const
{
  return ( theWrappedObject->styleProperty(name, strategy));
}

QString  PythonQtWrapper_QWebElement::tagName(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->tagName());
}

QWebElement*  PythonQtWrapper_QWebElement::takeFromDocument(QWebElement* theWrappedObject)
{
  return &( theWrappedObject->takeFromDocument());
}

QString  PythonQtWrapper_QWebElement::toInnerXml(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->toInnerXml());
}

QString  PythonQtWrapper_QWebElement::toOuterXml(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->toOuterXml());
}

QString  PythonQtWrapper_QWebElement::toPlainText(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

void PythonQtWrapper_QWebElement::toggleClass(QWebElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->toggleClass(name));
}

QWebFrame*  PythonQtWrapper_QWebElement::webFrame(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->webFrame());
}



QWebElementCollection* PythonQtWrapper_QWebElementCollection::new_QWebElementCollection()
{ 
return new QWebElementCollection(); }

QWebElementCollection* PythonQtWrapper_QWebElementCollection::new_QWebElementCollection(const QWebElement&  contextElement, const QString&  query)
{ 
return new QWebElementCollection(contextElement, query); }

QWebElementCollection* PythonQtWrapper_QWebElementCollection::new_QWebElementCollection(const QWebElementCollection&  arg__1)
{ 
return new QWebElementCollection(arg__1); }

void PythonQtWrapper_QWebElementCollection::append(QWebElementCollection* theWrappedObject, const QWebElementCollection&  collection)
{
  ( theWrappedObject->append(collection));
}

QWebElement  PythonQtWrapper_QWebElementCollection::at(QWebElementCollection* theWrappedObject, int  i) const
{
  return ( theWrappedObject->at(i));
}

int  PythonQtWrapper_QWebElementCollection::count(QWebElementCollection* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QWebElement  PythonQtWrapper_QWebElementCollection::first(QWebElementCollection* theWrappedObject) const
{
  return ( theWrappedObject->first());
}

QWebElement  PythonQtWrapper_QWebElementCollection::last(QWebElementCollection* theWrappedObject) const
{
  return ( theWrappedObject->last());
}

QWebElementCollection  PythonQtWrapper_QWebElementCollection::__add__(QWebElementCollection* theWrappedObject, const QWebElementCollection&  other) const
{
  return ( (*theWrappedObject)+ other);
}

QWebElementCollection*  PythonQtWrapper_QWebElementCollection::__iadd__(QWebElementCollection* theWrappedObject, const QWebElementCollection&  other)
{
  return &( (*theWrappedObject)+= other);
}

QWebElementCollection*  PythonQtWrapper_QWebElementCollection::operator_assign(QWebElementCollection* theWrappedObject, const QWebElementCollection&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QWebElement  PythonQtWrapper_QWebElementCollection::operator_subscript(QWebElementCollection* theWrappedObject, int  i) const
{
  return ( (*theWrappedObject)[i]);
}

QList<QWebElement >  PythonQtWrapper_QWebElementCollection::toList(QWebElementCollection* theWrappedObject) const
{
  return ( theWrappedObject->toList());
}



void PythonQtWrapper_QWebFrame::addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object, QWebFrame::ValueOwnership  ownership)
{
  ( theWrappedObject->addToJavaScriptWindowObject(name, object, ownership));
}

QUrl  PythonQtWrapper_QWebFrame::baseUrl(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->baseUrl());
}

QList<QWebFrame* >  PythonQtWrapper_QWebFrame::childFrames(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->childFrames());
}

QSize  PythonQtWrapper_QWebFrame::contentsSize(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->contentsSize());
}

QWebElement  PythonQtWrapper_QWebFrame::documentElement(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->documentElement());
}

QWebElementCollection  PythonQtWrapper_QWebFrame::findAllElements(QWebFrame* theWrappedObject, const QString&  selectorQuery) const
{
  return ( theWrappedObject->findAllElements(selectorQuery));
}

QWebElement  PythonQtWrapper_QWebFrame::findFirstElement(QWebFrame* theWrappedObject, const QString&  selectorQuery) const
{
  return ( theWrappedObject->findFirstElement(selectorQuery));
}

QString  PythonQtWrapper_QWebFrame::frameName(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameName());
}

QRect  PythonQtWrapper_QWebFrame::geometry(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->geometry());
}

bool  PythonQtWrapper_QWebFrame::hasFocus(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

QWebHitTestResult  PythonQtWrapper_QWebFrame::hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->hitTestContent(pos));
}

QIcon  PythonQtWrapper_QWebFrame::icon(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

void PythonQtWrapper_QWebFrame::load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation, const QByteArray&  body)
{
  ( theWrappedObject->load(request, operation, body));
}

void PythonQtWrapper_QWebFrame::load(QWebFrame* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->load(url));
}

QMultiMap<QString , QString >  PythonQtWrapper_QWebFrame::metaData(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->metaData());
}

QWebPage*  PythonQtWrapper_QWebFrame::page(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->page());
}

QWebFrame*  PythonQtWrapper_QWebFrame::parentFrame(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->parentFrame());
}

QPoint  PythonQtWrapper_QWebFrame::pos(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

void PythonQtWrapper_QWebFrame::render(QWebFrame* theWrappedObject, QPainter*  arg__1, QWebFrame::RenderLayers  layer, const QRegion&  clip)
{
  ( theWrappedObject->render(arg__1, layer, clip));
}

void PythonQtWrapper_QWebFrame::render(QWebFrame* theWrappedObject, QPainter*  arg__1, const QRegion&  clip)
{
  ( theWrappedObject->render(arg__1, clip));
}

QUrl  PythonQtWrapper_QWebFrame::requestedUrl(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->requestedUrl());
}

void PythonQtWrapper_QWebFrame::scroll(QWebFrame* theWrappedObject, int  arg__1, int  arg__2)
{
  ( theWrappedObject->scroll(arg__1, arg__2));
}

QRect  PythonQtWrapper_QWebFrame::scrollBarGeometry(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarGeometry(orientation));
}

int  PythonQtWrapper_QWebFrame::scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarMaximum(orientation));
}

int  PythonQtWrapper_QWebFrame::scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarMinimum(orientation));
}

Qt::ScrollBarPolicy  PythonQtWrapper_QWebFrame::scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarPolicy(orientation));
}

int  PythonQtWrapper_QWebFrame::scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarValue(orientation));
}

QPoint  PythonQtWrapper_QWebFrame::scrollPosition(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->scrollPosition());
}

void PythonQtWrapper_QWebFrame::scrollToAnchor(QWebFrame* theWrappedObject, const QString&  anchor)
{
  ( theWrappedObject->scrollToAnchor(anchor));
}

QWebSecurityOrigin  PythonQtWrapper_QWebFrame::securityOrigin(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->securityOrigin());
}

void PythonQtWrapper_QWebFrame::setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
  ( theWrappedObject->setContent(data, mimeType, baseUrl));
}

void PythonQtWrapper_QWebFrame::setFocus(QWebFrame* theWrappedObject)
{
  ( theWrappedObject->setFocus());
}

void PythonQtWrapper_QWebFrame::setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
  ( theWrappedObject->setHtml(html, baseUrl));
}

void PythonQtWrapper_QWebFrame::setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy)
{
  ( theWrappedObject->setScrollBarPolicy(orientation, policy));
}

void PythonQtWrapper_QWebFrame::setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value)
{
  ( theWrappedObject->setScrollBarValue(orientation, value));
}

void PythonQtWrapper_QWebFrame::setScrollPosition(QWebFrame* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScrollPosition(pos));
}

void PythonQtWrapper_QWebFrame::setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setTextSizeMultiplier(factor));
}

void PythonQtWrapper_QWebFrame::setUrl(QWebFrame* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QWebFrame::setZoomFactor(QWebFrame* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setZoomFactor(factor));
}

qreal  PythonQtWrapper_QWebFrame::textSizeMultiplier(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->textSizeMultiplier());
}

QString  PythonQtWrapper_QWebFrame::title(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

QString  PythonQtWrapper_QWebFrame::toHtml(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QString  PythonQtWrapper_QWebFrame::toPlainText(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

QUrl  PythonQtWrapper_QWebFrame::url(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

qreal  PythonQtWrapper_QWebFrame::zoomFactor(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->zoomFactor());
}



void PythonQtWrapper_QWebHistory::back(QWebHistory* theWrappedObject)
{
  ( theWrappedObject->back());
}

QWebHistoryItem  PythonQtWrapper_QWebHistory::backItem(QWebHistory* theWrappedObject) const
{
  return ( theWrappedObject->backItem());
}

QList<QWebHistoryItem >  PythonQtWrapper_QWebHistory::backItems(QWebHistory* theWrappedObject, int  maxItems) const
{
  return ( theWrappedObject->backItems(maxItems));
}

bool  PythonQtWrapper_QWebHistory::canGoBack(QWebHistory* theWrappedObject) const
{
  return ( theWrappedObject->canGoBack());
}

bool  PythonQtWrapper_QWebHistory::canGoForward(QWebHistory* theWrappedObject) const
{
  return ( theWrappedObject->canGoForward());
}

void PythonQtWrapper_QWebHistory::clear(QWebHistory* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QWebHistory::count(QWebHistory* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QWebHistoryItem  PythonQtWrapper_QWebHistory::currentItem(QWebHistory* theWrappedObject) const
{
  return ( theWrappedObject->currentItem());
}

int  PythonQtWrapper_QWebHistory::currentItemIndex(QWebHistory* theWrappedObject) const
{
  return ( theWrappedObject->currentItemIndex());
}

void PythonQtWrapper_QWebHistory::forward(QWebHistory* theWrappedObject)
{
  ( theWrappedObject->forward());
}

QWebHistoryItem  PythonQtWrapper_QWebHistory::forwardItem(QWebHistory* theWrappedObject) const
{
  return ( theWrappedObject->forwardItem());
}

QList<QWebHistoryItem >  PythonQtWrapper_QWebHistory::forwardItems(QWebHistory* theWrappedObject, int  maxItems) const
{
  return ( theWrappedObject->forwardItems(maxItems));
}

void PythonQtWrapper_QWebHistory::goToItem(QWebHistory* theWrappedObject, const QWebHistoryItem&  item)
{
  ( theWrappedObject->goToItem(item));
}

QWebHistoryItem  PythonQtWrapper_QWebHistory::itemAt(QWebHistory* theWrappedObject, int  i) const
{
  return ( theWrappedObject->itemAt(i));
}

QList<QWebHistoryItem >  PythonQtWrapper_QWebHistory::items(QWebHistory* theWrappedObject) const
{
  return ( theWrappedObject->items());
}

int  PythonQtWrapper_QWebHistory::maximumItemCount(QWebHistory* theWrappedObject) const
{
  return ( theWrappedObject->maximumItemCount());
}

void PythonQtWrapper_QWebHistory::writeTo(QWebHistory* theWrappedObject, QDataStream&  stream)
{
  stream <<  (*theWrappedObject);
}

void PythonQtWrapper_QWebHistory::readFrom(QWebHistory* theWrappedObject, QDataStream&  stream)
{
  stream >>  (*theWrappedObject);
}

void PythonQtWrapper_QWebHistory::setMaximumItemCount(QWebHistory* theWrappedObject, int  count)
{
  ( theWrappedObject->setMaximumItemCount(count));
}



PythonQtShell_QWebHistoryInterface::~PythonQtShell_QWebHistoryInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebHistoryInterface::addHistoryEntry(const QString&  url0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("addHistoryEntry");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&url0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
void PythonQtShell_QWebHistoryInterface::childEvent(QChildEvent*  arg__1)
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
  QWebHistoryInterface::childEvent(arg__1);
}
void PythonQtShell_QWebHistoryInterface::customEvent(QEvent*  arg__1)
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
  QWebHistoryInterface::customEvent(arg__1);
}
bool  PythonQtShell_QWebHistoryInterface::event(QEvent*  arg__1)
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
  return QWebHistoryInterface::event(arg__1);
}
bool  PythonQtShell_QWebHistoryInterface::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QWebHistoryInterface::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QWebHistoryInterface::historyContains(const QString&  url0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("historyContains");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&url0};
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
  } else {
    PyErr_Clear();
  }
}
  return bool();
}
void PythonQtShell_QWebHistoryInterface::timerEvent(QTimerEvent*  arg__1)
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
  QWebHistoryInterface::timerEvent(arg__1);
}
QWebHistoryInterface* PythonQtWrapper_QWebHistoryInterface::new_QWebHistoryInterface(QObject*  parent)
{ 
return new PythonQtShell_QWebHistoryInterface(parent); }

void PythonQtWrapper_QWebHistoryInterface::addHistoryEntry(QWebHistoryInterface* theWrappedObject, const QString&  url)
{
  ( ((PythonQtPublicPromoter_QWebHistoryInterface*)theWrappedObject)->promoted_addHistoryEntry(url));
}

QWebHistoryInterface*  PythonQtWrapper_QWebHistoryInterface::static_QWebHistoryInterface_defaultInterface()
{
  return (QWebHistoryInterface::defaultInterface());
}

bool  PythonQtWrapper_QWebHistoryInterface::historyContains(QWebHistoryInterface* theWrappedObject, const QString&  url) const
{
  return ( ((PythonQtPublicPromoter_QWebHistoryInterface*)theWrappedObject)->promoted_historyContains(url));
}

void PythonQtWrapper_QWebHistoryInterface::static_QWebHistoryInterface_setDefaultInterface(QWebHistoryInterface*  defaultInterface)
{
  (QWebHistoryInterface::setDefaultInterface(defaultInterface));
}



QWebHistoryItem* PythonQtWrapper_QWebHistoryItem::new_QWebHistoryItem(const QWebHistoryItem&  other)
{ 
return new QWebHistoryItem(other); }

QIcon  PythonQtWrapper_QWebHistoryItem::icon(QWebHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

bool  PythonQtWrapper_QWebHistoryItem::isValid(QWebHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QDateTime  PythonQtWrapper_QWebHistoryItem::lastVisited(QWebHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->lastVisited());
}

QUrl  PythonQtWrapper_QWebHistoryItem::originalUrl(QWebHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->originalUrl());
}

void PythonQtWrapper_QWebHistoryItem::setUserData(QWebHistoryItem* theWrappedObject, const QVariant&  userData)
{
  ( theWrappedObject->setUserData(userData));
}

QString  PythonQtWrapper_QWebHistoryItem::title(QWebHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

QUrl  PythonQtWrapper_QWebHistoryItem::url(QWebHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

QVariant  PythonQtWrapper_QWebHistoryItem::userData(QWebHistoryItem* theWrappedObject) const
{
  return ( theWrappedObject->userData());
}



QWebHitTestResult* PythonQtWrapper_QWebHitTestResult::new_QWebHitTestResult()
{ 
return new QWebHitTestResult(); }

QWebHitTestResult* PythonQtWrapper_QWebHitTestResult::new_QWebHitTestResult(const QWebHitTestResult&  other)
{ 
return new QWebHitTestResult(other); }

QString  PythonQtWrapper_QWebHitTestResult::alternateText(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->alternateText());
}

QRect  PythonQtWrapper_QWebHitTestResult::boundingRect(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

QWebElement  PythonQtWrapper_QWebHitTestResult::element(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->element());
}

QWebElement  PythonQtWrapper_QWebHitTestResult::enclosingBlockElement(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->enclosingBlockElement());
}

QWebFrame*  PythonQtWrapper_QWebHitTestResult::frame(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->frame());
}

QUrl  PythonQtWrapper_QWebHitTestResult::imageUrl(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->imageUrl());
}

bool  PythonQtWrapper_QWebHitTestResult::isContentEditable(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->isContentEditable());
}

bool  PythonQtWrapper_QWebHitTestResult::isContentSelected(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->isContentSelected());
}

bool  PythonQtWrapper_QWebHitTestResult::isNull(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QWebElement  PythonQtWrapper_QWebHitTestResult::linkElement(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkElement());
}

QWebFrame*  PythonQtWrapper_QWebHitTestResult::linkTargetFrame(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkTargetFrame());
}

QString  PythonQtWrapper_QWebHitTestResult::linkText(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkText());
}

QUrl  PythonQtWrapper_QWebHitTestResult::linkTitle(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkTitle());
}

QUrl  PythonQtWrapper_QWebHitTestResult::linkUrl(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkUrl());
}

QUrl  PythonQtWrapper_QWebHitTestResult::mediaUrl(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->mediaUrl());
}

QPixmap  PythonQtWrapper_QWebHitTestResult::pixmap(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->pixmap());
}

QPoint  PythonQtWrapper_QWebHitTestResult::pos(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QString  PythonQtWrapper_QWebHitTestResult::title(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->title());
}



PythonQtShell_QWebInspector::~PythonQtShell_QWebInspector() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebInspector::actionEvent(QActionEvent*  arg__1)
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
  QWebInspector::actionEvent(arg__1);
}
void PythonQtShell_QWebInspector::changeEvent(QEvent*  arg__1)
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
  QWebInspector::changeEvent(arg__1);
}
void PythonQtShell_QWebInspector::childEvent(QChildEvent*  arg__1)
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
  QWebInspector::childEvent(arg__1);
}
void PythonQtShell_QWebInspector::closeEvent(QCloseEvent*  event0)
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
  QWebInspector::closeEvent(event0);
}
void PythonQtShell_QWebInspector::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QWebInspector::contextMenuEvent(arg__1);
}
void PythonQtShell_QWebInspector::customEvent(QEvent*  arg__1)
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
  QWebInspector::customEvent(arg__1);
}
int  PythonQtShell_QWebInspector::devType() const
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
  return QWebInspector::devType();
}
void PythonQtShell_QWebInspector::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QWebInspector::dragEnterEvent(arg__1);
}
void PythonQtShell_QWebInspector::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QWebInspector::dragLeaveEvent(arg__1);
}
void PythonQtShell_QWebInspector::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QWebInspector::dragMoveEvent(arg__1);
}
void PythonQtShell_QWebInspector::dropEvent(QDropEvent*  arg__1)
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
  QWebInspector::dropEvent(arg__1);
}
void PythonQtShell_QWebInspector::enterEvent(QEvent*  arg__1)
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
  QWebInspector::enterEvent(arg__1);
}
bool  PythonQtShell_QWebInspector::event(QEvent*  arg__1)
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
  return QWebInspector::event(arg__1);
}
bool  PythonQtShell_QWebInspector::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QWebInspector::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QWebInspector::focusInEvent(QFocusEvent*  arg__1)
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
  QWebInspector::focusInEvent(arg__1);
}
bool  PythonQtShell_QWebInspector::focusNextPrevChild(bool  next0)
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
  return QWebInspector::focusNextPrevChild(next0);
}
void PythonQtShell_QWebInspector::focusOutEvent(QFocusEvent*  arg__1)
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
  QWebInspector::focusOutEvent(arg__1);
}
bool  PythonQtShell_QWebInspector::hasHeightForWidth() const
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
  return QWebInspector::hasHeightForWidth();
}
int  PythonQtShell_QWebInspector::heightForWidth(int  arg__1) const
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
  return QWebInspector::heightForWidth(arg__1);
}
void PythonQtShell_QWebInspector::hideEvent(QHideEvent*  event0)
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
  QWebInspector::hideEvent(event0);
}
void PythonQtShell_QWebInspector::initPainter(QPainter*  painter0) const
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
  QWebInspector::initPainter(painter0);
}
void PythonQtShell_QWebInspector::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QWebInspector::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QWebInspector::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QWebInspector::inputMethodQuery(arg__1);
}
void PythonQtShell_QWebInspector::keyPressEvent(QKeyEvent*  arg__1)
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
  QWebInspector::keyPressEvent(arg__1);
}
void PythonQtShell_QWebInspector::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QWebInspector::keyReleaseEvent(arg__1);
}
void PythonQtShell_QWebInspector::leaveEvent(QEvent*  arg__1)
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
  QWebInspector::leaveEvent(arg__1);
}
int  PythonQtShell_QWebInspector::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QWebInspector::metric(arg__1);
}
QSize  PythonQtShell_QWebInspector::minimumSizeHint() const
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
  return QWebInspector::minimumSizeHint();
}
void PythonQtShell_QWebInspector::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QWebInspector::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QWebInspector::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QWebInspector::mouseMoveEvent(arg__1);
}
void PythonQtShell_QWebInspector::mousePressEvent(QMouseEvent*  arg__1)
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
  QWebInspector::mousePressEvent(arg__1);
}
void PythonQtShell_QWebInspector::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QWebInspector::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QWebInspector::moveEvent(QMoveEvent*  arg__1)
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
  QWebInspector::moveEvent(arg__1);
}
bool  PythonQtShell_QWebInspector::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QWebInspector::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QWebInspector::paintEngine() const
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
  return QWebInspector::paintEngine();
}
void PythonQtShell_QWebInspector::paintEvent(QPaintEvent*  arg__1)
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
  QWebInspector::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QWebInspector::redirected(QPoint*  offset0) const
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
  return QWebInspector::redirected(offset0);
}
void PythonQtShell_QWebInspector::resizeEvent(QResizeEvent*  event0)
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
  QWebInspector::resizeEvent(event0);
}
QPainter*  PythonQtShell_QWebInspector::sharedPainter() const
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
  return QWebInspector::sharedPainter();
}
void PythonQtShell_QWebInspector::showEvent(QShowEvent*  event0)
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
  QWebInspector::showEvent(event0);
}
void PythonQtShell_QWebInspector::tabletEvent(QTabletEvent*  arg__1)
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
  QWebInspector::tabletEvent(arg__1);
}
void PythonQtShell_QWebInspector::timerEvent(QTimerEvent*  arg__1)
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
  QWebInspector::timerEvent(arg__1);
}
void PythonQtShell_QWebInspector::wheelEvent(QWheelEvent*  arg__1)
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
  QWebInspector::wheelEvent(arg__1);
}
QWebInspector* PythonQtWrapper_QWebInspector::new_QWebInspector(QWidget*  parent)
{ 
return new PythonQtShell_QWebInspector(parent); }

void PythonQtWrapper_QWebInspector::closeEvent(QWebInspector* theWrappedObject, QCloseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWebInspector*)theWrappedObject)->promoted_closeEvent(event));
}

bool  PythonQtWrapper_QWebInspector::event(QWebInspector* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QWebInspector*)theWrappedObject)->promoted_event(arg__1));
}

void PythonQtWrapper_QWebInspector::hideEvent(QWebInspector* theWrappedObject, QHideEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWebInspector*)theWrappedObject)->promoted_hideEvent(event));
}

QWebPage*  PythonQtWrapper_QWebInspector::page(QWebInspector* theWrappedObject) const
{
  return ( theWrappedObject->page());
}

void PythonQtWrapper_QWebInspector::resizeEvent(QWebInspector* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWebInspector*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QWebInspector::setPage(QWebInspector* theWrappedObject, QWebPage*  page)
{
  ( theWrappedObject->setPage(page));
}

void PythonQtWrapper_QWebInspector::showEvent(QWebInspector* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWebInspector*)theWrappedObject)->promoted_showEvent(event));
}

QSize  PythonQtWrapper_QWebInspector::sizeHint(QWebInspector* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}



PythonQtShell_QWebPage::~PythonQtShell_QWebPage() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QWebPage::acceptNavigationRequest(QWebFrame*  frame0, const QNetworkRequest&  request1, QWebPage::NavigationType  type2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("acceptNavigationRequest");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QWebFrame*" , "const QNetworkRequest&" , "QWebPage::NavigationType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&frame0, (void*)&request1, (void*)&type2};
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
  } else {
    PyErr_Clear();
  }
}
  return QWebPage::acceptNavigationRequest(frame0, request1, type2);
}
void PythonQtShell_QWebPage::childEvent(QChildEvent*  arg__1)
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
  QWebPage::childEvent(arg__1);
}
QString  PythonQtShell_QWebPage::chooseFile(QWebFrame*  originatingFrame0, const QString&  oldFile1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("chooseFile");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "QWebFrame*" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue;
    void* args[3] = {NULL, (void*)&originatingFrame0, (void*)&oldFile1};
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
  } else {
    PyErr_Clear();
  }
}
  return QWebPage::chooseFile(originatingFrame0, oldFile1);
}
QObject*  PythonQtShell_QWebPage::createPlugin(const QString&  classid0, const QUrl&  url1, const QStringList&  paramNames2, const QStringList&  paramValues3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("createPlugin");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QObject*" , "const QString&" , "const QUrl&" , "const QStringList&" , "const QStringList&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QObject* returnValue;
    void* args[5] = {NULL, (void*)&classid0, (void*)&url1, (void*)&paramNames2, (void*)&paramValues3};
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
  } else {
    PyErr_Clear();
  }
}
  return QWebPage::createPlugin(classid0, url1, paramNames2, paramValues3);
}
QWebPage*  PythonQtShell_QWebPage::createWindow(QWebPage::WebWindowType  type0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("createWindow");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QWebPage*" , "QWebPage::WebWindowType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QWebPage* returnValue;
    void* args[2] = {NULL, (void*)&type0};
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
  } else {
    PyErr_Clear();
  }
}
  return QWebPage::createWindow(type0);
}
void PythonQtShell_QWebPage::customEvent(QEvent*  arg__1)
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
  QWebPage::customEvent(arg__1);
}
bool  PythonQtShell_QWebPage::event(QEvent*  arg__1)
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
  return QWebPage::event(arg__1);
}
bool  PythonQtShell_QWebPage::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QWebPage::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QWebPage::extension(QWebPage::Extension  extension0, const QWebPage::ExtensionOption*  option1, QWebPage::ExtensionReturn*  output2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("extension");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QWebPage::Extension" , "const QWebPage::ExtensionOption*" , "QWebPage::ExtensionReturn*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&extension0, (void*)&option1, (void*)&output2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
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
  return QWebPage::extension(extension0, option1, output2);
}
void PythonQtShell_QWebPage::javaScriptAlert(QWebFrame*  originatingFrame0, const QString&  msg1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("javaScriptAlert");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWebFrame*" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&originatingFrame0, (void*)&msg1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QWebPage::javaScriptAlert(originatingFrame0, msg1);
}
bool  PythonQtShell_QWebPage::javaScriptConfirm(QWebFrame*  originatingFrame0, const QString&  msg1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("javaScriptConfirm");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QWebFrame*" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&originatingFrame0, (void*)&msg1};
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
  } else {
    PyErr_Clear();
  }
}
  return QWebPage::javaScriptConfirm(originatingFrame0, msg1);
}
void PythonQtShell_QWebPage::javaScriptConsoleMessage(const QString&  message0, int  lineNumber1, const QString&  sourceID2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("javaScriptConsoleMessage");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&" , "int" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&message0, (void*)&lineNumber1, (void*)&sourceID2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QWebPage::javaScriptConsoleMessage(message0, lineNumber1, sourceID2);
}
bool  PythonQtShell_QWebPage::javaScriptPrompt(QWebFrame*  originatingFrame0, const QString&  msg1, const QString&  defaultValue2, QString*  result3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("javaScriptPrompt");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QWebFrame*" , "const QString&" , "const QString&" , "QString*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&originatingFrame0, (void*)&msg1, (void*)&defaultValue2, (void*)&result3};
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
  } else {
    PyErr_Clear();
  }
}
  return QWebPage::javaScriptPrompt(originatingFrame0, msg1, defaultValue2, result3);
}
bool  PythonQtShell_QWebPage::shouldInterruptJavaScript()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("shouldInterruptJavaScript");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("shouldInterruptJavaScript", methodInfo, result);
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
  return QWebPage::shouldInterruptJavaScript();
}
bool  PythonQtShell_QWebPage::supportsExtension(QWebPage::Extension  extension0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("supportsExtension");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QWebPage::Extension"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&extension0};
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
  } else {
    PyErr_Clear();
  }
}
  return QWebPage::supportsExtension(extension0);
}
void PythonQtShell_QWebPage::timerEvent(QTimerEvent*  arg__1)
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
  QWebPage::timerEvent(arg__1);
}
void PythonQtShell_QWebPage::triggerAction(QWebPage::WebAction  action0, bool  checked1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("triggerAction");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWebPage::WebAction" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&action0, (void*)&checked1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QWebPage::triggerAction(action0, checked1);
}
QString  PythonQtShell_QWebPage::userAgentForUrl(const QUrl&  url0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("userAgentForUrl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
    void* args[2] = {NULL, (void*)&url0};
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
  } else {
    PyErr_Clear();
  }
}
  return QWebPage::userAgentForUrl(url0);
}
QWebPage* PythonQtWrapper_QWebPage::new_QWebPage(QObject*  parent)
{ 
return new PythonQtShell_QWebPage(parent); }

bool  PythonQtWrapper_QWebPage::acceptNavigationRequest(QWebPage* theWrappedObject, QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_acceptNavigationRequest(frame, request, type));
}

QAction*  PythonQtWrapper_QWebPage::action(QWebPage* theWrappedObject, QWebPage::WebAction  action) const
{
  return ( theWrappedObject->action(action));
}

quint64  PythonQtWrapper_QWebPage::bytesReceived(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->bytesReceived());
}

QString  PythonQtWrapper_QWebPage::chooseFile(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  oldFile)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_chooseFile(originatingFrame, oldFile));
}

QObject*  PythonQtWrapper_QWebPage::createPlugin(QWebPage* theWrappedObject, const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_createPlugin(classid, url, paramNames, paramValues));
}

QMenu*  PythonQtWrapper_QWebPage::createStandardContextMenu(QWebPage* theWrappedObject)
{
  return ( theWrappedObject->createStandardContextMenu());
}

QWebPage*  PythonQtWrapper_QWebPage::createWindow(QWebPage* theWrappedObject, QWebPage::WebWindowType  type)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_createWindow(type));
}

QWebFrame*  PythonQtWrapper_QWebPage::currentFrame(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->currentFrame());
}

bool  PythonQtWrapper_QWebPage::event(QWebPage* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QWebPage::extension(QWebPage* theWrappedObject, QWebPage::Extension  extension, const QWebPage::ExtensionOption*  option, QWebPage::ExtensionReturn*  output)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_extension(extension, option, output));
}

bool  PythonQtWrapper_QWebPage::findText(QWebPage* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options)
{
  return ( theWrappedObject->findText(subString, options));
}

bool  PythonQtWrapper_QWebPage::focusNextPrevChild(QWebPage* theWrappedObject, bool  next)
{
  return ( theWrappedObject->focusNextPrevChild(next));
}

bool  PythonQtWrapper_QWebPage::forwardUnsupportedContent(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->forwardUnsupportedContent());
}

QWebFrame*  PythonQtWrapper_QWebPage::frameAt(QWebPage* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->frameAt(pos));
}

bool  PythonQtWrapper_QWebPage::hasSelection(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->hasSelection());
}

QWebHistory*  PythonQtWrapper_QWebPage::history(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->history());
}

QVariant  PythonQtWrapper_QWebPage::inputMethodQuery(QWebPage* theWrappedObject, Qt::InputMethodQuery  property) const
{
  return ( theWrappedObject->inputMethodQuery(property));
}

bool  PythonQtWrapper_QWebPage::isContentEditable(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->isContentEditable());
}

bool  PythonQtWrapper_QWebPage::isModified(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->isModified());
}

void PythonQtWrapper_QWebPage::javaScriptAlert(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg)
{
  ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_javaScriptAlert(originatingFrame, msg));
}

bool  PythonQtWrapper_QWebPage::javaScriptConfirm(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_javaScriptConfirm(originatingFrame, msg));
}

void PythonQtWrapper_QWebPage::javaScriptConsoleMessage(QWebPage* theWrappedObject, const QString&  message, int  lineNumber, const QString&  sourceID)
{
  ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_javaScriptConsoleMessage(message, lineNumber, sourceID));
}

bool  PythonQtWrapper_QWebPage::javaScriptPrompt(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_javaScriptPrompt(originatingFrame, msg, defaultValue, result));
}

QWebPage::LinkDelegationPolicy  PythonQtWrapper_QWebPage::linkDelegationPolicy(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->linkDelegationPolicy());
}

QWebFrame*  PythonQtWrapper_QWebPage::mainFrame(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->mainFrame());
}

QNetworkAccessManager*  PythonQtWrapper_QWebPage::networkAccessManager(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManager());
}

QPalette  PythonQtWrapper_QWebPage::palette(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->palette());
}

QWebPluginFactory*  PythonQtWrapper_QWebPage::pluginFactory(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->pluginFactory());
}

QSize  PythonQtWrapper_QWebPage::preferredContentsSize(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->preferredContentsSize());
}

QString  PythonQtWrapper_QWebPage::selectedHtml(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->selectedHtml());
}

QString  PythonQtWrapper_QWebPage::selectedText(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

void PythonQtWrapper_QWebPage::setActualVisibleContentRect(QWebPage* theWrappedObject, const QRect&  rect) const
{
  ( theWrappedObject->setActualVisibleContentRect(rect));
}

void PythonQtWrapper_QWebPage::setContentEditable(QWebPage* theWrappedObject, bool  editable)
{
  ( theWrappedObject->setContentEditable(editable));
}

void PythonQtWrapper_QWebPage::setFeaturePermission(QWebPage* theWrappedObject, QWebFrame*  frame, QWebPage::Feature  feature, QWebPage::PermissionPolicy  policy)
{
  ( theWrappedObject->setFeaturePermission(frame, feature, policy));
}

void PythonQtWrapper_QWebPage::setForwardUnsupportedContent(QWebPage* theWrappedObject, bool  forward)
{
  ( theWrappedObject->setForwardUnsupportedContent(forward));
}

void PythonQtWrapper_QWebPage::setLinkDelegationPolicy(QWebPage* theWrappedObject, QWebPage::LinkDelegationPolicy  policy)
{
  ( theWrappedObject->setLinkDelegationPolicy(policy));
}

void PythonQtWrapper_QWebPage::setNetworkAccessManager(QWebPage* theWrappedObject, QNetworkAccessManager*  manager)
{
  ( theWrappedObject->setNetworkAccessManager(manager));
}

void PythonQtWrapper_QWebPage::setPalette(QWebPage* theWrappedObject, const QPalette&  palette)
{
  ( theWrappedObject->setPalette(palette));
}

void PythonQtWrapper_QWebPage::setPluginFactory(QWebPage* theWrappedObject, QWebPluginFactory*  factory)
{
  ( theWrappedObject->setPluginFactory(factory));
}

void PythonQtWrapper_QWebPage::setPreferredContentsSize(QWebPage* theWrappedObject, const QSize&  size) const
{
  ( theWrappedObject->setPreferredContentsSize(size));
}

void PythonQtWrapper_QWebPage::setView(QWebPage* theWrappedObject, QWidget*  view)
{
  ( theWrappedObject->setView(view));
}

void PythonQtWrapper_QWebPage::setViewportSize(QWebPage* theWrappedObject, const QSize&  size) const
{
  ( theWrappedObject->setViewportSize(size));
}

void PythonQtWrapper_QWebPage::setVisibilityState(QWebPage* theWrappedObject, QWebPage::VisibilityState  arg__1)
{
  ( theWrappedObject->setVisibilityState(arg__1));
}

QWebSettings*  PythonQtWrapper_QWebPage::settings(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->settings());
}

bool  PythonQtWrapper_QWebPage::shouldInterruptJavaScript(QWebPage* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_shouldInterruptJavaScript());
}

QStringList  PythonQtWrapper_QWebPage::supportedContentTypes(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->supportedContentTypes());
}

bool  PythonQtWrapper_QWebPage::supportsContentType(QWebPage* theWrappedObject, const QString&  mimeType) const
{
  return ( theWrappedObject->supportsContentType(mimeType));
}

bool  PythonQtWrapper_QWebPage::supportsExtension(QWebPage* theWrappedObject, QWebPage::Extension  extension) const
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_supportsExtension(extension));
}

bool  PythonQtWrapper_QWebPage::swallowContextMenuEvent(QWebPage* theWrappedObject, QContextMenuEvent*  event)
{
  return ( theWrappedObject->swallowContextMenuEvent(event));
}

quint64  PythonQtWrapper_QWebPage::totalBytes(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->totalBytes());
}

void PythonQtWrapper_QWebPage::triggerAction(QWebPage* theWrappedObject, QWebPage::WebAction  action, bool  checked)
{
  ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_triggerAction(action, checked));
}

QUndoStack*  PythonQtWrapper_QWebPage::undoStack(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->undoStack());
}

void PythonQtWrapper_QWebPage::updatePositionDependentActions(QWebPage* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->updatePositionDependentActions(pos));
}

QString  PythonQtWrapper_QWebPage::userAgentForUrl(QWebPage* theWrappedObject, const QUrl&  url) const
{
  return ( ((PythonQtPublicPromoter_QWebPage*)theWrappedObject)->promoted_userAgentForUrl(url));
}

QWidget*  PythonQtWrapper_QWebPage::view(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->view());
}

QSize  PythonQtWrapper_QWebPage::viewportSize(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->viewportSize());
}

QWebPage::VisibilityState  PythonQtWrapper_QWebPage::visibilityState(QWebPage* theWrappedObject) const
{
  return ( theWrappedObject->visibilityState());
}



PythonQtShell_QWebPage__ChooseMultipleFilesExtensionOption::~PythonQtShell_QWebPage__ChooseMultipleFilesExtensionOption() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebPage::ChooseMultipleFilesExtensionOption* PythonQtWrapper_QWebPage__ChooseMultipleFilesExtensionOption::new_QWebPage__ChooseMultipleFilesExtensionOption()
{ 
return new PythonQtShell_QWebPage__ChooseMultipleFilesExtensionOption(); }



PythonQtShell_QWebPage__ChooseMultipleFilesExtensionReturn::~PythonQtShell_QWebPage__ChooseMultipleFilesExtensionReturn() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebPage::ChooseMultipleFilesExtensionReturn* PythonQtWrapper_QWebPage__ChooseMultipleFilesExtensionReturn::new_QWebPage__ChooseMultipleFilesExtensionReturn()
{ 
return new PythonQtShell_QWebPage__ChooseMultipleFilesExtensionReturn(); }



PythonQtShell_QWebPage__ErrorPageExtensionOption::~PythonQtShell_QWebPage__ErrorPageExtensionOption() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebPage::ErrorPageExtensionOption* PythonQtWrapper_QWebPage__ErrorPageExtensionOption::new_QWebPage__ErrorPageExtensionOption()
{ 
return new PythonQtShell_QWebPage__ErrorPageExtensionOption(); }



PythonQtShell_QWebPage__ErrorPageExtensionReturn::~PythonQtShell_QWebPage__ErrorPageExtensionReturn() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebPage::ErrorPageExtensionReturn* PythonQtWrapper_QWebPage__ErrorPageExtensionReturn::new_QWebPage__ErrorPageExtensionReturn()
{ 
return new PythonQtShell_QWebPage__ErrorPageExtensionReturn(); }



PythonQtShell_QWebPage__ExtensionOption::~PythonQtShell_QWebPage__ExtensionOption() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebPage::ExtensionOption* PythonQtWrapper_QWebPage__ExtensionOption::new_QWebPage__ExtensionOption()
{ 
return new PythonQtShell_QWebPage__ExtensionOption(); }



PythonQtShell_QWebPage__ExtensionReturn::~PythonQtShell_QWebPage__ExtensionReturn() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebPage::ExtensionReturn* PythonQtWrapper_QWebPage__ExtensionReturn::new_QWebPage__ExtensionReturn()
{ 
return new PythonQtShell_QWebPage__ExtensionReturn(); }



PythonQtShell_QWebPluginFactory::~PythonQtShell_QWebPluginFactory() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebPluginFactory::childEvent(QChildEvent*  arg__1)
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
  QWebPluginFactory::childEvent(arg__1);
}
QObject*  PythonQtShell_QWebPluginFactory::create(const QString&  mimeType0, const QUrl&  arg__2, const QStringList&  argumentNames2, const QStringList&  argumentValues3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("create");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QObject*" , "const QString&" , "const QUrl&" , "const QStringList&" , "const QStringList&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QObject* returnValue;
    void* args[5] = {NULL, (void*)&mimeType0, (void*)&arg__2, (void*)&argumentNames2, (void*)&argumentValues3};
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
  } else {
    PyErr_Clear();
  }
}
  return 0;
}
void PythonQtShell_QWebPluginFactory::customEvent(QEvent*  arg__1)
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
  QWebPluginFactory::customEvent(arg__1);
}
bool  PythonQtShell_QWebPluginFactory::event(QEvent*  arg__1)
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
  return QWebPluginFactory::event(arg__1);
}
bool  PythonQtShell_QWebPluginFactory::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QWebPluginFactory::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QWebPluginFactory::extension(QWebPluginFactory::Extension  extension0, const QWebPluginFactory::ExtensionOption*  option1, QWebPluginFactory::ExtensionReturn*  output2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("extension");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QWebPluginFactory::Extension" , "const QWebPluginFactory::ExtensionOption*" , "QWebPluginFactory::ExtensionReturn*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&extension0, (void*)&option1, (void*)&output2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
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
  return QWebPluginFactory::extension(extension0, option1, output2);
}
QList<QWebPluginFactory::Plugin >  PythonQtShell_QWebPluginFactory::plugins() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("plugins");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
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
  } else {
    PyErr_Clear();
  }
}
  return QList<QWebPluginFactory::Plugin >();
}
void PythonQtShell_QWebPluginFactory::refreshPlugins()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("refreshPlugins");
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
  QWebPluginFactory::refreshPlugins();
}
bool  PythonQtShell_QWebPluginFactory::supportsExtension(QWebPluginFactory::Extension  extension0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("supportsExtension");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QWebPluginFactory::Extension"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&extension0};
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
  } else {
    PyErr_Clear();
  }
}
  return QWebPluginFactory::supportsExtension(extension0);
}
void PythonQtShell_QWebPluginFactory::timerEvent(QTimerEvent*  arg__1)
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
  QWebPluginFactory::timerEvent(arg__1);
}
QWebPluginFactory* PythonQtWrapper_QWebPluginFactory::new_QWebPluginFactory(QObject*  parent)
{ 
return new PythonQtShell_QWebPluginFactory(parent); }

QObject*  PythonQtWrapper_QWebPluginFactory::create(QWebPluginFactory* theWrappedObject, const QString&  mimeType, const QUrl&  arg__2, const QStringList&  argumentNames, const QStringList&  argumentValues) const
{
  return ( ((PythonQtPublicPromoter_QWebPluginFactory*)theWrappedObject)->promoted_create(mimeType, arg__2, argumentNames, argumentValues));
}

bool  PythonQtWrapper_QWebPluginFactory::extension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension, const QWebPluginFactory::ExtensionOption*  option, QWebPluginFactory::ExtensionReturn*  output)
{
  return ( ((PythonQtPublicPromoter_QWebPluginFactory*)theWrappedObject)->promoted_extension(extension, option, output));
}

QList<QWebPluginFactory::Plugin >  PythonQtWrapper_QWebPluginFactory::plugins(QWebPluginFactory* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QWebPluginFactory*)theWrappedObject)->promoted_plugins());
}

void PythonQtWrapper_QWebPluginFactory::refreshPlugins(QWebPluginFactory* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QWebPluginFactory*)theWrappedObject)->promoted_refreshPlugins());
}

bool  PythonQtWrapper_QWebPluginFactory::supportsExtension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension) const
{
  return ( ((PythonQtPublicPromoter_QWebPluginFactory*)theWrappedObject)->promoted_supportsExtension(extension));
}



PythonQtShell_QWebPluginFactory__ExtensionOption::~PythonQtShell_QWebPluginFactory__ExtensionOption() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebPluginFactory::ExtensionOption* PythonQtWrapper_QWebPluginFactory__ExtensionOption::new_QWebPluginFactory__ExtensionOption()
{ 
return new PythonQtShell_QWebPluginFactory__ExtensionOption(); }



PythonQtShell_QWebPluginFactory__ExtensionReturn::~PythonQtShell_QWebPluginFactory__ExtensionReturn() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebPluginFactory::ExtensionReturn* PythonQtWrapper_QWebPluginFactory__ExtensionReturn::new_QWebPluginFactory__ExtensionReturn()
{ 
return new PythonQtShell_QWebPluginFactory__ExtensionReturn(); }



PythonQtShell_QWebPluginFactory__MimeType::~PythonQtShell_QWebPluginFactory__MimeType() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebPluginFactory::MimeType* PythonQtWrapper_QWebPluginFactory__MimeType::new_QWebPluginFactory__MimeType()
{ 
return new PythonQtShell_QWebPluginFactory__MimeType(); }

bool  PythonQtWrapper_QWebPluginFactory__MimeType::__ne__(QWebPluginFactory::MimeType* theWrappedObject, const QWebPluginFactory::MimeType&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QWebPluginFactory__MimeType::__eq__(QWebPluginFactory::MimeType* theWrappedObject, const QWebPluginFactory::MimeType&  other) const
{
  return ( (*theWrappedObject)== other);
}



PythonQtShell_QWebPluginFactory__Plugin::~PythonQtShell_QWebPluginFactory__Plugin() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWebPluginFactory::Plugin* PythonQtWrapper_QWebPluginFactory__Plugin::new_QWebPluginFactory__Plugin()
{ 
return new PythonQtShell_QWebPluginFactory__Plugin(); }



QWebSecurityOrigin* PythonQtWrapper_QWebSecurityOrigin::new_QWebSecurityOrigin(const QUrl&  url)
{ 
return new QWebSecurityOrigin(url); }

QWebSecurityOrigin* PythonQtWrapper_QWebSecurityOrigin::new_QWebSecurityOrigin(const QWebSecurityOrigin&  other)
{ 
return new QWebSecurityOrigin(other); }

void PythonQtWrapper_QWebSecurityOrigin::addAccessWhitelistEntry(QWebSecurityOrigin* theWrappedObject, const QString&  scheme, const QString&  host, QWebSecurityOrigin::SubdomainSetting  subdomainSetting)
{
  ( theWrappedObject->addAccessWhitelistEntry(scheme, host, subdomainSetting));
}

void PythonQtWrapper_QWebSecurityOrigin::static_QWebSecurityOrigin_addLocalScheme(const QString&  scheme)
{
  (QWebSecurityOrigin::addLocalScheme(scheme));
}

QList<QWebSecurityOrigin >  PythonQtWrapper_QWebSecurityOrigin::static_QWebSecurityOrigin_allOrigins()
{
  return (QWebSecurityOrigin::allOrigins());
}

qint64  PythonQtWrapper_QWebSecurityOrigin::databaseQuota(QWebSecurityOrigin* theWrappedObject) const
{
  return ( theWrappedObject->databaseQuota());
}

qint64  PythonQtWrapper_QWebSecurityOrigin::databaseUsage(QWebSecurityOrigin* theWrappedObject) const
{
  return ( theWrappedObject->databaseUsage());
}

QList<QWebDatabase >  PythonQtWrapper_QWebSecurityOrigin::databases(QWebSecurityOrigin* theWrappedObject) const
{
  return ( theWrappedObject->databases());
}

QString  PythonQtWrapper_QWebSecurityOrigin::host(QWebSecurityOrigin* theWrappedObject) const
{
  return ( theWrappedObject->host());
}

QStringList  PythonQtWrapper_QWebSecurityOrigin::static_QWebSecurityOrigin_localSchemes()
{
  return (QWebSecurityOrigin::localSchemes());
}

QWebSecurityOrigin*  PythonQtWrapper_QWebSecurityOrigin::operator_assign(QWebSecurityOrigin* theWrappedObject, const QWebSecurityOrigin&  other)
{
  return &( (*theWrappedObject)= other);
}

int  PythonQtWrapper_QWebSecurityOrigin::port(QWebSecurityOrigin* theWrappedObject) const
{
  return ( theWrappedObject->port());
}

void PythonQtWrapper_QWebSecurityOrigin::removeAccessWhitelistEntry(QWebSecurityOrigin* theWrappedObject, const QString&  scheme, const QString&  host, QWebSecurityOrigin::SubdomainSetting  subdomainSetting)
{
  ( theWrappedObject->removeAccessWhitelistEntry(scheme, host, subdomainSetting));
}

void PythonQtWrapper_QWebSecurityOrigin::static_QWebSecurityOrigin_removeLocalScheme(const QString&  scheme)
{
  (QWebSecurityOrigin::removeLocalScheme(scheme));
}

QString  PythonQtWrapper_QWebSecurityOrigin::scheme(QWebSecurityOrigin* theWrappedObject) const
{
  return ( theWrappedObject->scheme());
}

void PythonQtWrapper_QWebSecurityOrigin::setApplicationCacheQuota(QWebSecurityOrigin* theWrappedObject, qint64  quota)
{
  ( theWrappedObject->setApplicationCacheQuota(quota));
}

void PythonQtWrapper_QWebSecurityOrigin::setDatabaseQuota(QWebSecurityOrigin* theWrappedObject, qint64  quota)
{
  ( theWrappedObject->setDatabaseQuota(quota));
}



void PythonQtWrapper_QWebSettings::static_QWebSettings_clearIconDatabase()
{
  (QWebSettings::clearIconDatabase());
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_clearMemoryCaches()
{
  (QWebSettings::clearMemoryCaches());
}

QString  PythonQtWrapper_QWebSettings::cssMediaType(QWebSettings* theWrappedObject) const
{
  return ( theWrappedObject->cssMediaType());
}

QString  PythonQtWrapper_QWebSettings::defaultTextEncoding(QWebSettings* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextEncoding());
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_enablePersistentStorage(const QString&  path)
{
  (QWebSettings::enablePersistentStorage(path));
}

QString  PythonQtWrapper_QWebSettings::fontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which) const
{
  return ( theWrappedObject->fontFamily(which));
}

int  PythonQtWrapper_QWebSettings::fontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type) const
{
  return ( theWrappedObject->fontSize(type));
}

QWebSettings*  PythonQtWrapper_QWebSettings::static_QWebSettings_globalSettings()
{
  return (QWebSettings::globalSettings());
}

QString  PythonQtWrapper_QWebSettings::static_QWebSettings_iconDatabasePath()
{
  return (QWebSettings::iconDatabasePath());
}

QIcon  PythonQtWrapper_QWebSettings::static_QWebSettings_iconForUrl(const QUrl&  url)
{
  return (QWebSettings::iconForUrl(url));
}

QString  PythonQtWrapper_QWebSettings::localStoragePath(QWebSettings* theWrappedObject) const
{
  return ( theWrappedObject->localStoragePath());
}

int  PythonQtWrapper_QWebSettings::static_QWebSettings_maximumPagesInCache()
{
  return (QWebSettings::maximumPagesInCache());
}

qint64  PythonQtWrapper_QWebSettings::static_QWebSettings_offlineStorageDefaultQuota()
{
  return (QWebSettings::offlineStorageDefaultQuota());
}

QString  PythonQtWrapper_QWebSettings::static_QWebSettings_offlineStoragePath()
{
  return (QWebSettings::offlineStoragePath());
}

QString  PythonQtWrapper_QWebSettings::static_QWebSettings_offlineWebApplicationCachePath()
{
  return (QWebSettings::offlineWebApplicationCachePath());
}

qint64  PythonQtWrapper_QWebSettings::static_QWebSettings_offlineWebApplicationCacheQuota()
{
  return (QWebSettings::offlineWebApplicationCacheQuota());
}

void PythonQtWrapper_QWebSettings::resetAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr)
{
  ( theWrappedObject->resetAttribute(attr));
}

void PythonQtWrapper_QWebSettings::resetFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which)
{
  ( theWrappedObject->resetFontFamily(which));
}

void PythonQtWrapper_QWebSettings::resetFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type)
{
  ( theWrappedObject->resetFontSize(type));
}

void PythonQtWrapper_QWebSettings::setAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr, bool  on)
{
  ( theWrappedObject->setAttribute(attr, on));
}

void PythonQtWrapper_QWebSettings::setCSSMediaType(QWebSettings* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setCSSMediaType(arg__1));
}

void PythonQtWrapper_QWebSettings::setDefaultTextEncoding(QWebSettings* theWrappedObject, const QString&  encoding)
{
  ( theWrappedObject->setDefaultTextEncoding(encoding));
}

void PythonQtWrapper_QWebSettings::setFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which, const QString&  family)
{
  ( theWrappedObject->setFontFamily(which, family));
}

void PythonQtWrapper_QWebSettings::setFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type, int  size)
{
  ( theWrappedObject->setFontSize(type, size));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setIconDatabasePath(const QString&  location)
{
  (QWebSettings::setIconDatabasePath(location));
}

void PythonQtWrapper_QWebSettings::setLocalStoragePath(QWebSettings* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setLocalStoragePath(path));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setMaximumPagesInCache(int  pages)
{
  (QWebSettings::setMaximumPagesInCache(pages));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setObjectCacheCapacities(int  cacheMinDeadCapacity, int  cacheMaxDead, int  totalCapacity)
{
  (QWebSettings::setObjectCacheCapacities(cacheMinDeadCapacity, cacheMaxDead, totalCapacity));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setOfflineStorageDefaultQuota(qint64  maximumSize)
{
  (QWebSettings::setOfflineStorageDefaultQuota(maximumSize));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setOfflineStoragePath(const QString&  path)
{
  (QWebSettings::setOfflineStoragePath(path));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setOfflineWebApplicationCachePath(const QString&  path)
{
  (QWebSettings::setOfflineWebApplicationCachePath(path));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setOfflineWebApplicationCacheQuota(qint64  maximumSize)
{
  (QWebSettings::setOfflineWebApplicationCacheQuota(maximumSize));
}

void PythonQtWrapper_QWebSettings::setThirdPartyCookiePolicy(QWebSettings* theWrappedObject, QWebSettings::ThirdPartyCookiePolicy  arg__1)
{
  ( theWrappedObject->setThirdPartyCookiePolicy(arg__1));
}

void PythonQtWrapper_QWebSettings::setUserStyleSheetUrl(QWebSettings* theWrappedObject, const QUrl&  location)
{
  ( theWrappedObject->setUserStyleSheetUrl(location));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setWebGraphic(QWebSettings::WebGraphic  type, const QPixmap&  graphic)
{
  (QWebSettings::setWebGraphic(type, graphic));
}

bool  PythonQtWrapper_QWebSettings::testAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr) const
{
  return ( theWrappedObject->testAttribute(attr));
}

QWebSettings::ThirdPartyCookiePolicy  PythonQtWrapper_QWebSettings::thirdPartyCookiePolicy(QWebSettings* theWrappedObject) const
{
  return ( theWrappedObject->thirdPartyCookiePolicy());
}

QUrl  PythonQtWrapper_QWebSettings::userStyleSheetUrl(QWebSettings* theWrappedObject) const
{
  return ( theWrappedObject->userStyleSheetUrl());
}

QPixmap  PythonQtWrapper_QWebSettings::static_QWebSettings_webGraphic(QWebSettings::WebGraphic  type)
{
  return (QWebSettings::webGraphic(type));
}



PythonQtShell_QWebView::~PythonQtShell_QWebView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWebView::actionEvent(QActionEvent*  arg__1)
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
  QWebView::actionEvent(arg__1);
}
void PythonQtShell_QWebView::changeEvent(QEvent*  arg__1)
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
  QWebView::changeEvent(arg__1);
}
void PythonQtShell_QWebView::childEvent(QChildEvent*  arg__1)
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
  QWebView::childEvent(arg__1);
}
void PythonQtShell_QWebView::closeEvent(QCloseEvent*  arg__1)
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
  QWebView::closeEvent(arg__1);
}
void PythonQtShell_QWebView::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QWebView::contextMenuEvent(arg__1);
}
QWebView*  PythonQtShell_QWebView::createWindow(QWebPage::WebWindowType  type0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("createWindow");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QWebView*" , "QWebPage::WebWindowType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QWebView* returnValue;
    void* args[2] = {NULL, (void*)&type0};
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
  } else {
    PyErr_Clear();
  }
}
  return QWebView::createWindow(type0);
}
void PythonQtShell_QWebView::customEvent(QEvent*  arg__1)
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
  QWebView::customEvent(arg__1);
}
int  PythonQtShell_QWebView::devType() const
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
  return QWebView::devType();
}
void PythonQtShell_QWebView::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QWebView::dragEnterEvent(arg__1);
}
void PythonQtShell_QWebView::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QWebView::dragLeaveEvent(arg__1);
}
void PythonQtShell_QWebView::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QWebView::dragMoveEvent(arg__1);
}
void PythonQtShell_QWebView::dropEvent(QDropEvent*  arg__1)
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
  QWebView::dropEvent(arg__1);
}
void PythonQtShell_QWebView::enterEvent(QEvent*  arg__1)
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
  QWebView::enterEvent(arg__1);
}
bool  PythonQtShell_QWebView::event(QEvent*  arg__1)
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
  return QWebView::event(arg__1);
}
bool  PythonQtShell_QWebView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QWebView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QWebView::focusInEvent(QFocusEvent*  arg__1)
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
  QWebView::focusInEvent(arg__1);
}
bool  PythonQtShell_QWebView::focusNextPrevChild(bool  next0)
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
  return QWebView::focusNextPrevChild(next0);
}
void PythonQtShell_QWebView::focusOutEvent(QFocusEvent*  arg__1)
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
  QWebView::focusOutEvent(arg__1);
}
bool  PythonQtShell_QWebView::hasHeightForWidth() const
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
  return QWebView::hasHeightForWidth();
}
int  PythonQtShell_QWebView::heightForWidth(int  arg__1) const
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
  return QWebView::heightForWidth(arg__1);
}
void PythonQtShell_QWebView::hideEvent(QHideEvent*  arg__1)
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
  QWebView::hideEvent(arg__1);
}
void PythonQtShell_QWebView::initPainter(QPainter*  painter0) const
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
  QWebView::initPainter(painter0);
}
void PythonQtShell_QWebView::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QWebView::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QWebView::inputMethodQuery(Qt::InputMethodQuery  property0) const
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
  return QWebView::inputMethodQuery(property0);
}
void PythonQtShell_QWebView::keyPressEvent(QKeyEvent*  arg__1)
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
  QWebView::keyPressEvent(arg__1);
}
void PythonQtShell_QWebView::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QWebView::keyReleaseEvent(arg__1);
}
void PythonQtShell_QWebView::leaveEvent(QEvent*  arg__1)
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
  QWebView::leaveEvent(arg__1);
}
int  PythonQtShell_QWebView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QWebView::metric(arg__1);
}
QSize  PythonQtShell_QWebView::minimumSizeHint() const
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
  return QWebView::minimumSizeHint();
}
void PythonQtShell_QWebView::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QWebView::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QWebView::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QWebView::mouseMoveEvent(arg__1);
}
void PythonQtShell_QWebView::mousePressEvent(QMouseEvent*  arg__1)
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
  QWebView::mousePressEvent(arg__1);
}
void PythonQtShell_QWebView::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QWebView::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QWebView::moveEvent(QMoveEvent*  arg__1)
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
  QWebView::moveEvent(arg__1);
}
bool  PythonQtShell_QWebView::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QWebView::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QWebView::paintEngine() const
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
  return QWebView::paintEngine();
}
void PythonQtShell_QWebView::paintEvent(QPaintEvent*  arg__1)
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
  QWebView::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QWebView::redirected(QPoint*  offset0) const
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
  return QWebView::redirected(offset0);
}
void PythonQtShell_QWebView::resizeEvent(QResizeEvent*  arg__1)
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
  QWebView::resizeEvent(arg__1);
}
QPainter*  PythonQtShell_QWebView::sharedPainter() const
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
  return QWebView::sharedPainter();
}
void PythonQtShell_QWebView::showEvent(QShowEvent*  arg__1)
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
  QWebView::showEvent(arg__1);
}
void PythonQtShell_QWebView::tabletEvent(QTabletEvent*  arg__1)
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
  QWebView::tabletEvent(arg__1);
}
void PythonQtShell_QWebView::timerEvent(QTimerEvent*  arg__1)
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
  QWebView::timerEvent(arg__1);
}
void PythonQtShell_QWebView::wheelEvent(QWheelEvent*  arg__1)
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
  QWebView::wheelEvent(arg__1);
}
QWebView* PythonQtWrapper_QWebView::new_QWebView(QWidget*  parent)
{ 
return new PythonQtShell_QWebView(parent); }

void PythonQtWrapper_QWebView::changeEvent(QWebView* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_changeEvent(arg__1));
}

void PythonQtWrapper_QWebView::contextMenuEvent(QWebView* theWrappedObject, QContextMenuEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_contextMenuEvent(arg__1));
}

QWebView*  PythonQtWrapper_QWebView::createWindow(QWebView* theWrappedObject, QWebPage::WebWindowType  type)
{
  return ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_createWindow(type));
}

void PythonQtWrapper_QWebView::dragEnterEvent(QWebView* theWrappedObject, QDragEnterEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dragEnterEvent(arg__1));
}

void PythonQtWrapper_QWebView::dragLeaveEvent(QWebView* theWrappedObject, QDragLeaveEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dragLeaveEvent(arg__1));
}

void PythonQtWrapper_QWebView::dragMoveEvent(QWebView* theWrappedObject, QDragMoveEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dragMoveEvent(arg__1));
}

void PythonQtWrapper_QWebView::dropEvent(QWebView* theWrappedObject, QDropEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dropEvent(arg__1));
}

bool  PythonQtWrapper_QWebView::event(QWebView* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QWebView::findText(QWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options)
{
  return ( theWrappedObject->findText(subString, options));
}

void PythonQtWrapper_QWebView::focusInEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_focusInEvent(arg__1));
}

bool  PythonQtWrapper_QWebView::focusNextPrevChild(QWebView* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QWebView::focusOutEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_focusOutEvent(arg__1));
}

bool  PythonQtWrapper_QWebView::hasSelection(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->hasSelection());
}

QWebHistory*  PythonQtWrapper_QWebView::history(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->history());
}

QIcon  PythonQtWrapper_QWebView::icon(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

void PythonQtWrapper_QWebView::inputMethodEvent(QWebView* theWrappedObject, QInputMethodEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_inputMethodEvent(arg__1));
}

QVariant  PythonQtWrapper_QWebView::inputMethodQuery(QWebView* theWrappedObject, Qt::InputMethodQuery  property) const
{
  return ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_inputMethodQuery(property));
}

bool  PythonQtWrapper_QWebView::isModified(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->isModified());
}

void PythonQtWrapper_QWebView::keyPressEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_keyPressEvent(arg__1));
}

void PythonQtWrapper_QWebView::keyReleaseEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_keyReleaseEvent(arg__1));
}

void PythonQtWrapper_QWebView::load(QWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation, const QByteArray&  body)
{
  ( theWrappedObject->load(request, operation, body));
}

void PythonQtWrapper_QWebView::load(QWebView* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->load(url));
}

void PythonQtWrapper_QWebView::mouseDoubleClickEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mouseDoubleClickEvent(arg__1));
}

void PythonQtWrapper_QWebView::mouseMoveEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mouseMoveEvent(arg__1));
}

void PythonQtWrapper_QWebView::mousePressEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mousePressEvent(arg__1));
}

void PythonQtWrapper_QWebView::mouseReleaseEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1));
}

QWebPage*  PythonQtWrapper_QWebView::page(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->page());
}

QAction*  PythonQtWrapper_QWebView::pageAction(QWebView* theWrappedObject, QWebPage::WebAction  action) const
{
  return ( theWrappedObject->pageAction(action));
}

void PythonQtWrapper_QWebView::paintEvent(QWebView* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_paintEvent(arg__1));
}

QPainter::RenderHints  PythonQtWrapper_QWebView::renderHints(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->renderHints());
}

void PythonQtWrapper_QWebView::resizeEvent(QWebView* theWrappedObject, QResizeEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_resizeEvent(arg__1));
}

QString  PythonQtWrapper_QWebView::selectedHtml(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->selectedHtml());
}

QString  PythonQtWrapper_QWebView::selectedText(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

void PythonQtWrapper_QWebView::setContent(QWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
  ( theWrappedObject->setContent(data, mimeType, baseUrl));
}

void PythonQtWrapper_QWebView::setHtml(QWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
  ( theWrappedObject->setHtml(html, baseUrl));
}

void PythonQtWrapper_QWebView::setPage(QWebView* theWrappedObject, QWebPage*  page)
{
  ( theWrappedObject->setPage(page));
}

void PythonQtWrapper_QWebView::setRenderHint(QWebView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled)
{
  ( theWrappedObject->setRenderHint(hint, enabled));
}

void PythonQtWrapper_QWebView::setRenderHints(QWebView* theWrappedObject, QPainter::RenderHints  hints)
{
  ( theWrappedObject->setRenderHints(hints));
}

void PythonQtWrapper_QWebView::setTextSizeMultiplier(QWebView* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setTextSizeMultiplier(factor));
}

void PythonQtWrapper_QWebView::setUrl(QWebView* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QWebView::setZoomFactor(QWebView* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setZoomFactor(factor));
}

QWebSettings*  PythonQtWrapper_QWebView::settings(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->settings());
}

QSize  PythonQtWrapper_QWebView::sizeHint(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

qreal  PythonQtWrapper_QWebView::textSizeMultiplier(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->textSizeMultiplier());
}

QString  PythonQtWrapper_QWebView::title(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

void PythonQtWrapper_QWebView::triggerPageAction(QWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked)
{
  ( theWrappedObject->triggerPageAction(action, checked));
}

QUrl  PythonQtWrapper_QWebView::url(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

void PythonQtWrapper_QWebView::wheelEvent(QWebView* theWrappedObject, QWheelEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_wheelEvent(arg__1));
}

qreal  PythonQtWrapper_QWebView::zoomFactor(QWebView* theWrappedObject) const
{
  return ( theWrappedObject->zoomFactor());
}


