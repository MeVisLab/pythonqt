#include "com_trolltech_qt_gui10.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextDocumentFragment>
#include <QTextEdit>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextLayout>
#include <QTextOption>
#include <QVariant>
#include <qabstracttextdocumentlayout.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qevent.h>
#include <qfont.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpagedpaintdevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextbrowser.h>
#include <qtextcodec.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextdocumentwriter.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qtexttable.h>
#include <qtoolbar.h>
#include <qurl.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>

PythonQtShell_QTextBrowser::~PythonQtShell_QTextBrowser() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextBrowser::actionEvent(QActionEvent*  arg__1)
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
  QTextBrowser::actionEvent(arg__1);
}
void PythonQtShell_QTextBrowser::backward()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("backward");
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
  QTextBrowser::backward();
}
bool  PythonQtShell_QTextBrowser::canInsertFromMimeData(const QMimeData*  source0) const
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
  return QTextBrowser::canInsertFromMimeData(source0);
}
void PythonQtShell_QTextBrowser::changeEvent(QEvent*  e0)
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
  QTextBrowser::changeEvent(e0);
}
void PythonQtShell_QTextBrowser::childEvent(QChildEvent*  arg__1)
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
  QTextBrowser::childEvent(arg__1);
}
void PythonQtShell_QTextBrowser::closeEvent(QCloseEvent*  arg__1)
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
  QTextBrowser::closeEvent(arg__1);
}
void PythonQtShell_QTextBrowser::contextMenuEvent(QContextMenuEvent*  e0)
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
  QTextBrowser::contextMenuEvent(e0);
}
QMimeData*  PythonQtShell_QTextBrowser::createMimeDataFromSelection() const
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
  return QTextBrowser::createMimeDataFromSelection();
}
void PythonQtShell_QTextBrowser::customEvent(QEvent*  arg__1)
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
  QTextBrowser::customEvent(arg__1);
}
int  PythonQtShell_QTextBrowser::devType() const
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
  return QTextBrowser::devType();
}
void PythonQtShell_QTextBrowser::doSetTextCursor(const QTextCursor&  cursor0)
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
  QTextBrowser::doSetTextCursor(cursor0);
}
void PythonQtShell_QTextBrowser::dragEnterEvent(QDragEnterEvent*  e0)
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
  QTextBrowser::dragEnterEvent(e0);
}
void PythonQtShell_QTextBrowser::dragLeaveEvent(QDragLeaveEvent*  e0)
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
  QTextBrowser::dragLeaveEvent(e0);
}
void PythonQtShell_QTextBrowser::dragMoveEvent(QDragMoveEvent*  e0)
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
  QTextBrowser::dragMoveEvent(e0);
}
void PythonQtShell_QTextBrowser::dropEvent(QDropEvent*  e0)
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
  QTextBrowser::dropEvent(e0);
}
void PythonQtShell_QTextBrowser::enterEvent(QEvent*  arg__1)
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
  QTextBrowser::enterEvent(arg__1);
}
bool  PythonQtShell_QTextBrowser::event(QEvent*  e0)
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
  return QTextBrowser::event(e0);
}
bool  PythonQtShell_QTextBrowser::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextBrowser::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextBrowser::focusInEvent(QFocusEvent*  e0)
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
  QTextBrowser::focusInEvent(e0);
}
bool  PythonQtShell_QTextBrowser::focusNextPrevChild(bool  next0)
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
  return QTextBrowser::focusNextPrevChild(next0);
}
void PythonQtShell_QTextBrowser::focusOutEvent(QFocusEvent*  ev0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusOutEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTextBrowser::focusOutEvent(ev0);
}
void PythonQtShell_QTextBrowser::forward()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("forward");
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
  QTextBrowser::forward();
}
bool  PythonQtShell_QTextBrowser::hasHeightForWidth() const
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
  return QTextBrowser::hasHeightForWidth();
}
int  PythonQtShell_QTextBrowser::heightForWidth(int  arg__1) const
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
  return QTextBrowser::heightForWidth(arg__1);
}
void PythonQtShell_QTextBrowser::hideEvent(QHideEvent*  arg__1)
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
  QTextBrowser::hideEvent(arg__1);
}
void PythonQtShell_QTextBrowser::home()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("home");
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
  QTextBrowser::home();
}
void PythonQtShell_QTextBrowser::initPainter(QPainter*  painter0) const
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
  QTextBrowser::initPainter(painter0);
}
void PythonQtShell_QTextBrowser::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QTextBrowser::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QTextBrowser::inputMethodQuery(Qt::InputMethodQuery  property0) const
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
  return QTextBrowser::inputMethodQuery(property0);
}
void PythonQtShell_QTextBrowser::insertFromMimeData(const QMimeData*  source0)
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
  QTextBrowser::insertFromMimeData(source0);
}
void PythonQtShell_QTextBrowser::keyPressEvent(QKeyEvent*  ev0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyPressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTextBrowser::keyPressEvent(ev0);
}
void PythonQtShell_QTextBrowser::keyReleaseEvent(QKeyEvent*  e0)
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
  QTextBrowser::keyReleaseEvent(e0);
}
void PythonQtShell_QTextBrowser::leaveEvent(QEvent*  arg__1)
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
  QTextBrowser::leaveEvent(arg__1);
}
QVariant  PythonQtShell_QTextBrowser::loadResource(int  type0, const QUrl&  name1)
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
  return QTextBrowser::loadResource(type0, name1);
}
int  PythonQtShell_QTextBrowser::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QTextBrowser::metric(arg__1);
}
void PythonQtShell_QTextBrowser::mouseDoubleClickEvent(QMouseEvent*  e0)
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
  QTextBrowser::mouseDoubleClickEvent(e0);
}
void PythonQtShell_QTextBrowser::mouseMoveEvent(QMouseEvent*  ev0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTextBrowser::mouseMoveEvent(ev0);
}
void PythonQtShell_QTextBrowser::mousePressEvent(QMouseEvent*  ev0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mousePressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTextBrowser::mousePressEvent(ev0);
}
void PythonQtShell_QTextBrowser::mouseReleaseEvent(QMouseEvent*  ev0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTextBrowser::mouseReleaseEvent(ev0);
}
void PythonQtShell_QTextBrowser::moveEvent(QMoveEvent*  arg__1)
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
  QTextBrowser::moveEvent(arg__1);
}
bool  PythonQtShell_QTextBrowser::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QTextBrowser::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QTextBrowser::paintEngine() const
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
  return QTextBrowser::paintEngine();
}
void PythonQtShell_QTextBrowser::paintEvent(QPaintEvent*  e0)
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
  QTextBrowser::paintEvent(e0);
}
QPaintDevice*  PythonQtShell_QTextBrowser::redirected(QPoint*  offset0) const
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
  return QTextBrowser::redirected(offset0);
}
void PythonQtShell_QTextBrowser::reload()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("reload");
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
  QTextBrowser::reload();
}
void PythonQtShell_QTextBrowser::resizeEvent(QResizeEvent*  e0)
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
  QTextBrowser::resizeEvent(e0);
}
void PythonQtShell_QTextBrowser::scrollContentsBy(int  dx0, int  dy1)
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
  QTextBrowser::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QTextBrowser::setSource(const QUrl&  name0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setSource");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QUrl&"};
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
  QTextBrowser::setSource(name0);
}
void PythonQtShell_QTextBrowser::setupViewport(QWidget*  viewport0)
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
  QTextBrowser::setupViewport(viewport0);
}
QPainter*  PythonQtShell_QTextBrowser::sharedPainter() const
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
  return QTextBrowser::sharedPainter();
}
void PythonQtShell_QTextBrowser::showEvent(QShowEvent*  arg__1)
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
  QTextBrowser::showEvent(arg__1);
}
void PythonQtShell_QTextBrowser::tabletEvent(QTabletEvent*  arg__1)
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
  QTextBrowser::tabletEvent(arg__1);
}
void PythonQtShell_QTextBrowser::timerEvent(QTimerEvent*  e0)
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
  QTextBrowser::timerEvent(e0);
}
bool  PythonQtShell_QTextBrowser::viewportEvent(QEvent*  arg__1)
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
  return QTextBrowser::viewportEvent(arg__1);
}
QSize  PythonQtShell_QTextBrowser::viewportSizeHint() const
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
  return QTextBrowser::viewportSizeHint();
}
void PythonQtShell_QTextBrowser::wheelEvent(QWheelEvent*  e0)
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
  QTextBrowser::wheelEvent(e0);
}
QTextBrowser* PythonQtWrapper_QTextBrowser::new_QTextBrowser(QWidget*  parent)
{ 
return new PythonQtShell_QTextBrowser(parent); }

void PythonQtWrapper_QTextBrowser::backward(QTextBrowser* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_backward());
}

int  PythonQtWrapper_QTextBrowser::backwardHistoryCount(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->backwardHistoryCount());
}

void PythonQtWrapper_QTextBrowser::clearHistory(QTextBrowser* theWrappedObject)
{
  ( theWrappedObject->clearHistory());
}

bool  PythonQtWrapper_QTextBrowser::event(QTextBrowser* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_event(e));
}

bool  PythonQtWrapper_QTextBrowser::focusNextPrevChild(QTextBrowser* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QTextBrowser::focusOutEvent(QTextBrowser* theWrappedObject, QFocusEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_focusOutEvent(ev));
}

void PythonQtWrapper_QTextBrowser::forward(QTextBrowser* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_forward());
}

int  PythonQtWrapper_QTextBrowser::forwardHistoryCount(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->forwardHistoryCount());
}

QString  PythonQtWrapper_QTextBrowser::historyTitle(QTextBrowser* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->historyTitle(arg__1));
}

QUrl  PythonQtWrapper_QTextBrowser::historyUrl(QTextBrowser* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->historyUrl(arg__1));
}

void PythonQtWrapper_QTextBrowser::home(QTextBrowser* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_home());
}

bool  PythonQtWrapper_QTextBrowser::isBackwardAvailable(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->isBackwardAvailable());
}

bool  PythonQtWrapper_QTextBrowser::isForwardAvailable(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->isForwardAvailable());
}

void PythonQtWrapper_QTextBrowser::keyPressEvent(QTextBrowser* theWrappedObject, QKeyEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_keyPressEvent(ev));
}

QVariant  PythonQtWrapper_QTextBrowser::loadResource(QTextBrowser* theWrappedObject, int  type, const QUrl&  name)
{
  return ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_loadResource(type, name));
}

void PythonQtWrapper_QTextBrowser::mouseMoveEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_mouseMoveEvent(ev));
}

void PythonQtWrapper_QTextBrowser::mousePressEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_mousePressEvent(ev));
}

void PythonQtWrapper_QTextBrowser::mouseReleaseEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_mouseReleaseEvent(ev));
}

bool  PythonQtWrapper_QTextBrowser::openExternalLinks(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->openExternalLinks());
}

bool  PythonQtWrapper_QTextBrowser::openLinks(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->openLinks());
}

void PythonQtWrapper_QTextBrowser::paintEvent(QTextBrowser* theWrappedObject, QPaintEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_paintEvent(e));
}

void PythonQtWrapper_QTextBrowser::reload(QTextBrowser* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_reload());
}

QStringList  PythonQtWrapper_QTextBrowser::searchPaths(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->searchPaths());
}

void PythonQtWrapper_QTextBrowser::setOpenExternalLinks(QTextBrowser* theWrappedObject, bool  open)
{
  ( theWrappedObject->setOpenExternalLinks(open));
}

void PythonQtWrapper_QTextBrowser::setOpenLinks(QTextBrowser* theWrappedObject, bool  open)
{
  ( theWrappedObject->setOpenLinks(open));
}

void PythonQtWrapper_QTextBrowser::setSearchPaths(QTextBrowser* theWrappedObject, const QStringList&  paths)
{
  ( theWrappedObject->setSearchPaths(paths));
}

void PythonQtWrapper_QTextBrowser::setSource(QTextBrowser* theWrappedObject, const QUrl&  name)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_setSource(name));
}

QUrl  PythonQtWrapper_QTextBrowser::source(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->source());
}



PythonQtShell_QTextCharFormat::~PythonQtShell_QTextCharFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextCharFormat* PythonQtWrapper_QTextCharFormat::new_QTextCharFormat()
{ 
return new PythonQtShell_QTextCharFormat(); }

QTextCharFormat* PythonQtWrapper_QTextCharFormat::new_QTextCharFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextCharFormat(fmt); }

QString  PythonQtWrapper_QTextCharFormat::anchorHref(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->anchorHref());
}

QStringList  PythonQtWrapper_QTextCharFormat::anchorNames(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->anchorNames());
}

QFont  PythonQtWrapper_QTextCharFormat::font(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QFont::Capitalization  PythonQtWrapper_QTextCharFormat::fontCapitalization(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontCapitalization());
}

QString  PythonQtWrapper_QTextCharFormat::fontFamily(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontFamily());
}

bool  PythonQtWrapper_QTextCharFormat::fontFixedPitch(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontFixedPitch());
}

QFont::HintingPreference  PythonQtWrapper_QTextCharFormat::fontHintingPreference(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontHintingPreference());
}

bool  PythonQtWrapper_QTextCharFormat::fontItalic(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontItalic());
}

bool  PythonQtWrapper_QTextCharFormat::fontKerning(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontKerning());
}

qreal  PythonQtWrapper_QTextCharFormat::fontLetterSpacing(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontLetterSpacing());
}

QFont::SpacingType  PythonQtWrapper_QTextCharFormat::fontLetterSpacingType(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontLetterSpacingType());
}

bool  PythonQtWrapper_QTextCharFormat::fontOverline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontOverline());
}

qreal  PythonQtWrapper_QTextCharFormat::fontPointSize(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontPointSize());
}

int  PythonQtWrapper_QTextCharFormat::fontStretch(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStretch());
}

bool  PythonQtWrapper_QTextCharFormat::fontStrikeOut(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStrikeOut());
}

QFont::StyleHint  PythonQtWrapper_QTextCharFormat::fontStyleHint(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStyleHint());
}

QFont::StyleStrategy  PythonQtWrapper_QTextCharFormat::fontStyleStrategy(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStyleStrategy());
}

bool  PythonQtWrapper_QTextCharFormat::fontUnderline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontUnderline());
}

int  PythonQtWrapper_QTextCharFormat::fontWeight(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontWeight());
}

qreal  PythonQtWrapper_QTextCharFormat::fontWordSpacing(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontWordSpacing());
}

bool  PythonQtWrapper_QTextCharFormat::isAnchor(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->isAnchor());
}

bool  PythonQtWrapper_QTextCharFormat::isValid(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QTextCharFormat::setAnchor(QTextCharFormat* theWrappedObject, bool  anchor)
{
  ( theWrappedObject->setAnchor(anchor));
}

void PythonQtWrapper_QTextCharFormat::setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value)
{
  ( theWrappedObject->setAnchorHref(value));
}

void PythonQtWrapper_QTextCharFormat::setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names)
{
  ( theWrappedObject->setAnchorNames(names));
}

void PythonQtWrapper_QTextCharFormat::setFont(QTextCharFormat* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QTextCharFormat::setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization)
{
  ( theWrappedObject->setFontCapitalization(capitalization));
}

void PythonQtWrapper_QTextCharFormat::setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family)
{
  ( theWrappedObject->setFontFamily(family));
}

void PythonQtWrapper_QTextCharFormat::setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch)
{
  ( theWrappedObject->setFontFixedPitch(fixedPitch));
}

void PythonQtWrapper_QTextCharFormat::setFontHintingPreference(QTextCharFormat* theWrappedObject, QFont::HintingPreference  hintingPreference)
{
  ( theWrappedObject->setFontHintingPreference(hintingPreference));
}

void PythonQtWrapper_QTextCharFormat::setFontItalic(QTextCharFormat* theWrappedObject, bool  italic)
{
  ( theWrappedObject->setFontItalic(italic));
}

void PythonQtWrapper_QTextCharFormat::setFontKerning(QTextCharFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setFontKerning(enable));
}

void PythonQtWrapper_QTextCharFormat::setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setFontLetterSpacing(spacing));
}

void PythonQtWrapper_QTextCharFormat::setFontLetterSpacingType(QTextCharFormat* theWrappedObject, QFont::SpacingType  letterSpacingType)
{
  ( theWrappedObject->setFontLetterSpacingType(letterSpacingType));
}

void PythonQtWrapper_QTextCharFormat::setFontOverline(QTextCharFormat* theWrappedObject, bool  overline)
{
  ( theWrappedObject->setFontOverline(overline));
}

void PythonQtWrapper_QTextCharFormat::setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size)
{
  ( theWrappedObject->setFontPointSize(size));
}

void PythonQtWrapper_QTextCharFormat::setFontStretch(QTextCharFormat* theWrappedObject, int  factor)
{
  ( theWrappedObject->setFontStretch(factor));
}

void PythonQtWrapper_QTextCharFormat::setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut)
{
  ( theWrappedObject->setFontStrikeOut(strikeOut));
}

void PythonQtWrapper_QTextCharFormat::setFontStyleHint(QTextCharFormat* theWrappedObject, QFont::StyleHint  hint, QFont::StyleStrategy  strategy)
{
  ( theWrappedObject->setFontStyleHint(hint, strategy));
}

void PythonQtWrapper_QTextCharFormat::setFontStyleStrategy(QTextCharFormat* theWrappedObject, QFont::StyleStrategy  strategy)
{
  ( theWrappedObject->setFontStyleStrategy(strategy));
}

void PythonQtWrapper_QTextCharFormat::setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline)
{
  ( theWrappedObject->setFontUnderline(underline));
}

void PythonQtWrapper_QTextCharFormat::setFontWeight(QTextCharFormat* theWrappedObject, int  weight)
{
  ( theWrappedObject->setFontWeight(weight));
}

void PythonQtWrapper_QTextCharFormat::setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setFontWordSpacing(spacing));
}

void PythonQtWrapper_QTextCharFormat::setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan)
{
  ( theWrappedObject->setTableCellColumnSpan(tableCellColumnSpan));
}

void PythonQtWrapper_QTextCharFormat::setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan)
{
  ( theWrappedObject->setTableCellRowSpan(tableCellRowSpan));
}

void PythonQtWrapper_QTextCharFormat::setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen)
{
  ( theWrappedObject->setTextOutline(pen));
}

void PythonQtWrapper_QTextCharFormat::setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip)
{
  ( theWrappedObject->setToolTip(tip));
}

void PythonQtWrapper_QTextCharFormat::setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color)
{
  ( theWrappedObject->setUnderlineColor(color));
}

void PythonQtWrapper_QTextCharFormat::setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style)
{
  ( theWrappedObject->setUnderlineStyle(style));
}

void PythonQtWrapper_QTextCharFormat::setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment)
{
  ( theWrappedObject->setVerticalAlignment(alignment));
}

int  PythonQtWrapper_QTextCharFormat::tableCellColumnSpan(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->tableCellColumnSpan());
}

int  PythonQtWrapper_QTextCharFormat::tableCellRowSpan(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->tableCellRowSpan());
}

QPen  PythonQtWrapper_QTextCharFormat::textOutline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->textOutline());
}

QString  PythonQtWrapper_QTextCharFormat::toolTip(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

QColor  PythonQtWrapper_QTextCharFormat::underlineColor(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->underlineColor());
}

QTextCharFormat::UnderlineStyle  PythonQtWrapper_QTextCharFormat::underlineStyle(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->underlineStyle());
}

QTextCharFormat::VerticalAlignment  PythonQtWrapper_QTextCharFormat::verticalAlignment(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->verticalAlignment());
}



QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor()
{ 
return new QTextCursor(); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(QTextDocument*  document)
{ 
return new QTextCursor(document); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(QTextFrame*  frame)
{ 
return new QTextCursor(frame); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(const QTextBlock&  block)
{ 
return new QTextCursor(block); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(const QTextCursor&  cursor)
{ 
return new QTextCursor(cursor); }

int  PythonQtWrapper_QTextCursor::anchor(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->anchor());
}

bool  PythonQtWrapper_QTextCursor::atBlockEnd(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atBlockEnd());
}

bool  PythonQtWrapper_QTextCursor::atBlockStart(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atBlockStart());
}

bool  PythonQtWrapper_QTextCursor::atEnd(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

bool  PythonQtWrapper_QTextCursor::atStart(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atStart());
}

void PythonQtWrapper_QTextCursor::beginEditBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->beginEditBlock());
}

QTextBlock  PythonQtWrapper_QTextCursor::block(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->block());
}

QTextCharFormat  PythonQtWrapper_QTextCursor::blockCharFormat(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->blockCharFormat());
}

QTextBlockFormat  PythonQtWrapper_QTextCursor::blockFormat(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->blockFormat());
}

int  PythonQtWrapper_QTextCursor::blockNumber(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->blockNumber());
}

QTextCharFormat  PythonQtWrapper_QTextCursor::charFormat(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->charFormat());
}

void PythonQtWrapper_QTextCursor::clearSelection(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->clearSelection());
}

int  PythonQtWrapper_QTextCursor::columnNumber(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

QTextList*  PythonQtWrapper_QTextCursor::createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style)
{
  return ( theWrappedObject->createList(style));
}

QTextList*  PythonQtWrapper_QTextCursor::createList(QTextCursor* theWrappedObject, const QTextListFormat&  format)
{
  return ( theWrappedObject->createList(format));
}

QTextFrame*  PythonQtWrapper_QTextCursor::currentFrame(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->currentFrame());
}

QTextList*  PythonQtWrapper_QTextCursor::currentList(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->currentList());
}

QTextTable*  PythonQtWrapper_QTextCursor::currentTable(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->currentTable());
}

void PythonQtWrapper_QTextCursor::deleteChar(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->deleteChar());
}

void PythonQtWrapper_QTextCursor::deletePreviousChar(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->deletePreviousChar());
}

QTextDocument*  PythonQtWrapper_QTextCursor::document(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

void PythonQtWrapper_QTextCursor::endEditBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->endEditBlock());
}

bool  PythonQtWrapper_QTextCursor::hasComplexSelection(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->hasComplexSelection());
}

bool  PythonQtWrapper_QTextCursor::hasSelection(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->hasSelection());
}

void PythonQtWrapper_QTextCursor::insertBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->insertBlock());
}

void PythonQtWrapper_QTextCursor::insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format)
{
  ( theWrappedObject->insertBlock(format));
}

void PythonQtWrapper_QTextCursor::insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat)
{
  ( theWrappedObject->insertBlock(format, charFormat));
}

void PythonQtWrapper_QTextCursor::insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment)
{
  ( theWrappedObject->insertFragment(fragment));
}

QTextFrame*  PythonQtWrapper_QTextCursor::insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format)
{
  return ( theWrappedObject->insertFrame(format));
}

void PythonQtWrapper_QTextCursor::insertHtml(QTextCursor* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->insertHtml(html));
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QImage&  image, const QString&  name)
{
  ( theWrappedObject->insertImage(image, name));
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->insertImage(name));
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format)
{
  ( theWrappedObject->insertImage(format));
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment)
{
  ( theWrappedObject->insertImage(format, alignment));
}

QTextList*  PythonQtWrapper_QTextCursor::insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style)
{
  return ( theWrappedObject->insertList(style));
}

QTextList*  PythonQtWrapper_QTextCursor::insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format)
{
  return ( theWrappedObject->insertList(format));
}

QTextTable*  PythonQtWrapper_QTextCursor::insertTable(QTextCursor* theWrappedObject, int  rows, int  cols)
{
  return ( theWrappedObject->insertTable(rows, cols));
}

QTextTable*  PythonQtWrapper_QTextCursor::insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format)
{
  return ( theWrappedObject->insertTable(rows, cols, format));
}

void PythonQtWrapper_QTextCursor::insertText(QTextCursor* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->insertText(text));
}

void PythonQtWrapper_QTextCursor::insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format)
{
  ( theWrappedObject->insertText(text, format));
}

bool  PythonQtWrapper_QTextCursor::isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const
{
  return ( theWrappedObject->isCopyOf(other));
}

bool  PythonQtWrapper_QTextCursor::isNull(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QTextCursor::joinPreviousEditBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->joinPreviousEditBlock());
}

bool  PythonQtWrapper_QTextCursor::keepPositionOnInsert(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->keepPositionOnInsert());
}

void PythonQtWrapper_QTextCursor::mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier)
{
  ( theWrappedObject->mergeBlockCharFormat(modifier));
}

void PythonQtWrapper_QTextCursor::mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier)
{
  ( theWrappedObject->mergeBlockFormat(modifier));
}

void PythonQtWrapper_QTextCursor::mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier)
{
  ( theWrappedObject->mergeCharFormat(modifier));
}

bool  PythonQtWrapper_QTextCursor::movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2, int  n)
{
  return ( theWrappedObject->movePosition(op, arg__2, n));
}

bool  PythonQtWrapper_QTextCursor::__ne__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QTextCursor::__lt__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)< rhs);
}

bool  PythonQtWrapper_QTextCursor::__le__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QTextCursor::__eq__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QTextCursor::__gt__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QTextCursor::__ge__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)>= rhs);
}

int  PythonQtWrapper_QTextCursor::position(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

int  PythonQtWrapper_QTextCursor::positionInBlock(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->positionInBlock());
}

void PythonQtWrapper_QTextCursor::removeSelectedText(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->removeSelectedText());
}

void PythonQtWrapper_QTextCursor::select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection)
{
  ( theWrappedObject->select(selection));
}

QString  PythonQtWrapper_QTextCursor::selectedText(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

QTextDocumentFragment  PythonQtWrapper_QTextCursor::selection(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selection());
}

int  PythonQtWrapper_QTextCursor::selectionEnd(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selectionEnd());
}

int  PythonQtWrapper_QTextCursor::selectionStart(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selectionStart());
}

void PythonQtWrapper_QTextCursor::setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setBlockCharFormat(format));
}

void PythonQtWrapper_QTextCursor::setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format)
{
  ( theWrappedObject->setBlockFormat(format));
}

void PythonQtWrapper_QTextCursor::setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setCharFormat(format));
}

void PythonQtWrapper_QTextCursor::setKeepPositionOnInsert(QTextCursor* theWrappedObject, bool  b)
{
  ( theWrappedObject->setKeepPositionOnInsert(b));
}

void PythonQtWrapper_QTextCursor::setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode)
{
  ( theWrappedObject->setPosition(pos, mode));
}

void PythonQtWrapper_QTextCursor::setVerticalMovementX(QTextCursor* theWrappedObject, int  x)
{
  ( theWrappedObject->setVerticalMovementX(x));
}

void PythonQtWrapper_QTextCursor::setVisualNavigation(QTextCursor* theWrappedObject, bool  b)
{
  ( theWrappedObject->setVisualNavigation(b));
}

void PythonQtWrapper_QTextCursor::swap(QTextCursor* theWrappedObject, QTextCursor&  other)
{
  ( theWrappedObject->swap(other));
}

int  PythonQtWrapper_QTextCursor::verticalMovementX(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->verticalMovementX());
}

bool  PythonQtWrapper_QTextCursor::visualNavigation(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->visualNavigation());
}



PythonQtShell_QTextDocument::~PythonQtShell_QTextDocument() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextDocument::childEvent(QChildEvent*  arg__1)
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
  QTextDocument::childEvent(arg__1);
}
void PythonQtShell_QTextDocument::clear()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("clear");
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
  QTextDocument::clear();
}
QTextObject*  PythonQtShell_QTextDocument::createObject(const QTextFormat&  f0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("createObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QTextObject*" , "const QTextFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QTextObject* returnValue;
    void* args[2] = {NULL, (void*)&f0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createObject", methodInfo, result);
        } else {
          returnValue = *((QTextObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QTextDocument::createObject(f0);
}
void PythonQtShell_QTextDocument::customEvent(QEvent*  arg__1)
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
  QTextDocument::customEvent(arg__1);
}
bool  PythonQtShell_QTextDocument::event(QEvent*  arg__1)
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
  return QTextDocument::event(arg__1);
}
bool  PythonQtShell_QTextDocument::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextDocument::eventFilter(arg__1, arg__2);
}
QVariant  PythonQtShell_QTextDocument::loadResource(int  type0, const QUrl&  name1)
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
  return QTextDocument::loadResource(type0, name1);
}
void PythonQtShell_QTextDocument::timerEvent(QTimerEvent*  arg__1)
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
  QTextDocument::timerEvent(arg__1);
}
QTextDocument* PythonQtWrapper_QTextDocument::new_QTextDocument(QObject*  parent)
{ 
return new PythonQtShell_QTextDocument(parent); }

QTextDocument* PythonQtWrapper_QTextDocument::new_QTextDocument(const QString&  text, QObject*  parent)
{ 
return new PythonQtShell_QTextDocument(text, parent); }

void PythonQtWrapper_QTextDocument::addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource)
{
  ( theWrappedObject->addResource(type, name, resource));
}

void PythonQtWrapper_QTextDocument::adjustSize(QTextDocument* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

QVector<QTextFormat >  PythonQtWrapper_QTextDocument::allFormats(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->allFormats());
}

int  PythonQtWrapper_QTextDocument::availableRedoSteps(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->availableRedoSteps());
}

int  PythonQtWrapper_QTextDocument::availableUndoSteps(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->availableUndoSteps());
}

QTextBlock  PythonQtWrapper_QTextDocument::begin(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

int  PythonQtWrapper_QTextDocument::blockCount(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->blockCount());
}

QChar  PythonQtWrapper_QTextDocument::characterAt(QTextDocument* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->characterAt(pos));
}

int  PythonQtWrapper_QTextDocument::characterCount(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->characterCount());
}

void PythonQtWrapper_QTextDocument::clear(QTextDocument* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->promoted_clear());
}

void PythonQtWrapper_QTextDocument::clearUndoRedoStacks(QTextDocument* theWrappedObject, QTextDocument::Stacks  historyToClear)
{
  ( theWrappedObject->clearUndoRedoStacks(historyToClear));
}

QTextDocument*  PythonQtWrapper_QTextDocument::clone(QTextDocument* theWrappedObject, QObject*  parent) const
{
  return ( theWrappedObject->clone(parent));
}

QTextObject*  PythonQtWrapper_QTextDocument::createObject(QTextDocument* theWrappedObject, const QTextFormat&  f)
{
  return ( ((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->promoted_createObject(f));
}

Qt::CursorMoveStyle  PythonQtWrapper_QTextDocument::defaultCursorMoveStyle(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->defaultCursorMoveStyle());
}

QFont  PythonQtWrapper_QTextDocument::defaultFont(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->defaultFont());
}

QString  PythonQtWrapper_QTextDocument::defaultStyleSheet(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->defaultStyleSheet());
}

QTextOption  PythonQtWrapper_QTextDocument::defaultTextOption(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextOption());
}

QAbstractTextDocumentLayout*  PythonQtWrapper_QTextDocument::documentLayout(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->documentLayout());
}

qreal  PythonQtWrapper_QTextDocument::documentMargin(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->documentMargin());
}

void PythonQtWrapper_QTextDocument::drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( theWrappedObject->drawContents(painter, rect));
}

QTextBlock  PythonQtWrapper_QTextDocument::end(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options) const
{
  return ( theWrappedObject->find(expr, from, options));
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from, QTextDocument::FindFlags  options) const
{
  return ( theWrappedObject->find(expr, from, options));
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options) const
{
  return ( theWrappedObject->find(subString, from, options));
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QString&  subString, int  from, QTextDocument::FindFlags  options) const
{
  return ( theWrappedObject->find(subString, from, options));
}

QTextBlock  PythonQtWrapper_QTextDocument::findBlock(QTextDocument* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->findBlock(pos));
}

QTextBlock  PythonQtWrapper_QTextDocument::findBlockByLineNumber(QTextDocument* theWrappedObject, int  blockNumber) const
{
  return ( theWrappedObject->findBlockByLineNumber(blockNumber));
}

QTextBlock  PythonQtWrapper_QTextDocument::findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const
{
  return ( theWrappedObject->findBlockByNumber(blockNumber));
}

QTextBlock  PythonQtWrapper_QTextDocument::firstBlock(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->firstBlock());
}

QTextFrame*  PythonQtWrapper_QTextDocument::frameAt(QTextDocument* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->frameAt(pos));
}

qreal  PythonQtWrapper_QTextDocument::idealWidth(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->idealWidth());
}

qreal  PythonQtWrapper_QTextDocument::indentWidth(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->indentWidth());
}

bool  PythonQtWrapper_QTextDocument::isEmpty(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QTextDocument::isModified(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->isModified());
}

bool  PythonQtWrapper_QTextDocument::isRedoAvailable(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->isRedoAvailable());
}

bool  PythonQtWrapper_QTextDocument::isUndoAvailable(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->isUndoAvailable());
}

bool  PythonQtWrapper_QTextDocument::isUndoRedoEnabled(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->isUndoRedoEnabled());
}

QTextBlock  PythonQtWrapper_QTextDocument::lastBlock(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->lastBlock());
}

int  PythonQtWrapper_QTextDocument::lineCount(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->lineCount());
}

QVariant  PythonQtWrapper_QTextDocument::loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name)
{
  return ( ((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->promoted_loadResource(type, name));
}

void PythonQtWrapper_QTextDocument::markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length)
{
  ( theWrappedObject->markContentsDirty(from, length));
}

int  PythonQtWrapper_QTextDocument::maximumBlockCount(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->maximumBlockCount());
}

QString  PythonQtWrapper_QTextDocument::metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const
{
  return ( theWrappedObject->metaInformation(info));
}

QTextObject*  PythonQtWrapper_QTextDocument::object(QTextDocument* theWrappedObject, int  objectIndex) const
{
  return ( theWrappedObject->object(objectIndex));
}

QTextObject*  PythonQtWrapper_QTextDocument::objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const
{
  return ( theWrappedObject->objectForFormat(arg__1));
}

int  PythonQtWrapper_QTextDocument::pageCount(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->pageCount());
}

QSizeF  PythonQtWrapper_QTextDocument::pageSize(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->pageSize());
}

void PythonQtWrapper_QTextDocument::print(QTextDocument* theWrappedObject, QPagedPaintDevice*  printer) const
{
  ( theWrappedObject->print(printer));
}

void PythonQtWrapper_QTextDocument::redo(QTextDocument* theWrappedObject, QTextCursor*  cursor)
{
  ( theWrappedObject->redo(cursor));
}

QVariant  PythonQtWrapper_QTextDocument::resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const
{
  return ( theWrappedObject->resource(type, name));
}

int  PythonQtWrapper_QTextDocument::revision(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

QTextFrame*  PythonQtWrapper_QTextDocument::rootFrame(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->rootFrame());
}

void PythonQtWrapper_QTextDocument::setDefaultCursorMoveStyle(QTextDocument* theWrappedObject, Qt::CursorMoveStyle  style)
{
  ( theWrappedObject->setDefaultCursorMoveStyle(style));
}

void PythonQtWrapper_QTextDocument::setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setDefaultFont(font));
}

void PythonQtWrapper_QTextDocument::setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet)
{
  ( theWrappedObject->setDefaultStyleSheet(sheet));
}

void PythonQtWrapper_QTextDocument::setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option)
{
  ( theWrappedObject->setDefaultTextOption(option));
}

void PythonQtWrapper_QTextDocument::setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout)
{
  ( theWrappedObject->setDocumentLayout(layout));
}

void PythonQtWrapper_QTextDocument::setDocumentMargin(QTextDocument* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setDocumentMargin(margin));
}

void PythonQtWrapper_QTextDocument::setHtml(QTextDocument* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QTextDocument::setIndentWidth(QTextDocument* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setIndentWidth(width));
}

void PythonQtWrapper_QTextDocument::setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum)
{
  ( theWrappedObject->setMaximumBlockCount(maximum));
}

void PythonQtWrapper_QTextDocument::setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2)
{
  ( theWrappedObject->setMetaInformation(info, arg__2));
}

void PythonQtWrapper_QTextDocument::setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setPageSize(size));
}

void PythonQtWrapper_QTextDocument::setPlainText(QTextDocument* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setPlainText(text));
}

void PythonQtWrapper_QTextDocument::setTextWidth(QTextDocument* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setTextWidth(width));
}

void PythonQtWrapper_QTextDocument::setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setUndoRedoEnabled(enable));
}

void PythonQtWrapper_QTextDocument::setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b)
{
  ( theWrappedObject->setUseDesignMetrics(b));
}

QSizeF  PythonQtWrapper_QTextDocument::size(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

qreal  PythonQtWrapper_QTextDocument::textWidth(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->textWidth());
}

QString  PythonQtWrapper_QTextDocument::toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding) const
{
  return ( theWrappedObject->toHtml(encoding));
}

QString  PythonQtWrapper_QTextDocument::toPlainText(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

void PythonQtWrapper_QTextDocument::undo(QTextDocument* theWrappedObject, QTextCursor*  cursor)
{
  ( theWrappedObject->undo(cursor));
}

bool  PythonQtWrapper_QTextDocument::useDesignMetrics(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->useDesignMetrics());
}



QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment()
{ 
return new QTextDocumentFragment(); }

QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment(const QTextCursor&  range)
{ 
return new QTextDocumentFragment(range); }

QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment(const QTextDocument*  document)
{ 
return new QTextDocumentFragment(document); }

QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment(const QTextDocumentFragment&  rhs)
{ 
return new QTextDocumentFragment(rhs); }

QTextDocumentFragment  PythonQtWrapper_QTextDocumentFragment::static_QTextDocumentFragment_fromHtml(const QString&  html)
{
  return (QTextDocumentFragment::fromHtml(html));
}

QTextDocumentFragment  PythonQtWrapper_QTextDocumentFragment::static_QTextDocumentFragment_fromHtml(const QString&  html, const QTextDocument*  resourceProvider)
{
  return (QTextDocumentFragment::fromHtml(html, resourceProvider));
}

QTextDocumentFragment  PythonQtWrapper_QTextDocumentFragment::static_QTextDocumentFragment_fromPlainText(const QString&  plainText)
{
  return (QTextDocumentFragment::fromPlainText(plainText));
}

bool  PythonQtWrapper_QTextDocumentFragment::isEmpty(QTextDocumentFragment* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QString  PythonQtWrapper_QTextDocumentFragment::toHtml(QTextDocumentFragment* theWrappedObject, const QByteArray&  encoding) const
{
  return ( theWrappedObject->toHtml(encoding));
}

QString  PythonQtWrapper_QTextDocumentFragment::toPlainText(QTextDocumentFragment* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}



QTextDocumentWriter* PythonQtWrapper_QTextDocumentWriter::new_QTextDocumentWriter()
{ 
return new QTextDocumentWriter(); }

QTextDocumentWriter* PythonQtWrapper_QTextDocumentWriter::new_QTextDocumentWriter(QIODevice*  device, const QByteArray&  format)
{ 
return new QTextDocumentWriter(device, format); }

QTextDocumentWriter* PythonQtWrapper_QTextDocumentWriter::new_QTextDocumentWriter(const QString&  fileName, const QByteArray&  format)
{ 
return new QTextDocumentWriter(fileName, format); }

QTextCodec*  PythonQtWrapper_QTextDocumentWriter::codec(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QIODevice*  PythonQtWrapper_QTextDocumentWriter::device(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QString  PythonQtWrapper_QTextDocumentWriter::fileName(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QByteArray  PythonQtWrapper_QTextDocumentWriter::format(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

void PythonQtWrapper_QTextDocumentWriter::setCodec(QTextDocumentWriter* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QTextDocumentWriter::setDevice(QTextDocumentWriter* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QTextDocumentWriter::setFileName(QTextDocumentWriter* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

void PythonQtWrapper_QTextDocumentWriter::setFormat(QTextDocumentWriter* theWrappedObject, const QByteArray&  format)
{
  ( theWrappedObject->setFormat(format));
}

QList<QByteArray >  PythonQtWrapper_QTextDocumentWriter::static_QTextDocumentWriter_supportedDocumentFormats()
{
  return (QTextDocumentWriter::supportedDocumentFormats());
}

bool  PythonQtWrapper_QTextDocumentWriter::write(QTextDocumentWriter* theWrappedObject, const QTextDocument*  document)
{
  return ( theWrappedObject->write(document));
}

bool  PythonQtWrapper_QTextDocumentWriter::write(QTextDocumentWriter* theWrappedObject, const QTextDocumentFragment&  fragment)
{
  return ( theWrappedObject->write(fragment));
}



PythonQtShell_QTextEdit::~PythonQtShell_QTextEdit() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextEdit::actionEvent(QActionEvent*  arg__1)
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
  QTextEdit::actionEvent(arg__1);
}
bool  PythonQtShell_QTextEdit::canInsertFromMimeData(const QMimeData*  source0) const
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
  return QTextEdit::canInsertFromMimeData(source0);
}
void PythonQtShell_QTextEdit::changeEvent(QEvent*  e0)
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
  QTextEdit::changeEvent(e0);
}
void PythonQtShell_QTextEdit::childEvent(QChildEvent*  arg__1)
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
  QTextEdit::childEvent(arg__1);
}
void PythonQtShell_QTextEdit::closeEvent(QCloseEvent*  arg__1)
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
  QTextEdit::closeEvent(arg__1);
}
void PythonQtShell_QTextEdit::contextMenuEvent(QContextMenuEvent*  e0)
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
  QTextEdit::contextMenuEvent(e0);
}
QMimeData*  PythonQtShell_QTextEdit::createMimeDataFromSelection() const
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
  return QTextEdit::createMimeDataFromSelection();
}
void PythonQtShell_QTextEdit::customEvent(QEvent*  arg__1)
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
  QTextEdit::customEvent(arg__1);
}
int  PythonQtShell_QTextEdit::devType() const
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
  return QTextEdit::devType();
}
void PythonQtShell_QTextEdit::doSetTextCursor(const QTextCursor&  cursor0)
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
  QTextEdit::doSetTextCursor(cursor0);
}
void PythonQtShell_QTextEdit::dragEnterEvent(QDragEnterEvent*  e0)
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
  QTextEdit::dragEnterEvent(e0);
}
void PythonQtShell_QTextEdit::dragLeaveEvent(QDragLeaveEvent*  e0)
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
  QTextEdit::dragLeaveEvent(e0);
}
void PythonQtShell_QTextEdit::dragMoveEvent(QDragMoveEvent*  e0)
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
  QTextEdit::dragMoveEvent(e0);
}
void PythonQtShell_QTextEdit::dropEvent(QDropEvent*  e0)
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
  QTextEdit::dropEvent(e0);
}
void PythonQtShell_QTextEdit::enterEvent(QEvent*  arg__1)
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
  QTextEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QTextEdit::event(QEvent*  e0)
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
  return QTextEdit::event(e0);
}
bool  PythonQtShell_QTextEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextEdit::focusInEvent(QFocusEvent*  e0)
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
  QTextEdit::focusInEvent(e0);
}
bool  PythonQtShell_QTextEdit::focusNextPrevChild(bool  next0)
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
  return QTextEdit::focusNextPrevChild(next0);
}
void PythonQtShell_QTextEdit::focusOutEvent(QFocusEvent*  e0)
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
  QTextEdit::focusOutEvent(e0);
}
bool  PythonQtShell_QTextEdit::hasHeightForWidth() const
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
  return QTextEdit::hasHeightForWidth();
}
int  PythonQtShell_QTextEdit::heightForWidth(int  arg__1) const
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
  return QTextEdit::heightForWidth(arg__1);
}
void PythonQtShell_QTextEdit::hideEvent(QHideEvent*  arg__1)
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
  QTextEdit::hideEvent(arg__1);
}
void PythonQtShell_QTextEdit::initPainter(QPainter*  painter0) const
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
  QTextEdit::initPainter(painter0);
}
void PythonQtShell_QTextEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QTextEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QTextEdit::inputMethodQuery(Qt::InputMethodQuery  property0) const
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
  return QTextEdit::inputMethodQuery(property0);
}
void PythonQtShell_QTextEdit::insertFromMimeData(const QMimeData*  source0)
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
  QTextEdit::insertFromMimeData(source0);
}
void PythonQtShell_QTextEdit::keyPressEvent(QKeyEvent*  e0)
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
  QTextEdit::keyPressEvent(e0);
}
void PythonQtShell_QTextEdit::keyReleaseEvent(QKeyEvent*  e0)
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
  QTextEdit::keyReleaseEvent(e0);
}
void PythonQtShell_QTextEdit::leaveEvent(QEvent*  arg__1)
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
  QTextEdit::leaveEvent(arg__1);
}
QVariant  PythonQtShell_QTextEdit::loadResource(int  type0, const QUrl&  name1)
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
  return QTextEdit::loadResource(type0, name1);
}
int  PythonQtShell_QTextEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QTextEdit::metric(arg__1);
}
void PythonQtShell_QTextEdit::mouseDoubleClickEvent(QMouseEvent*  e0)
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
  QTextEdit::mouseDoubleClickEvent(e0);
}
void PythonQtShell_QTextEdit::mouseMoveEvent(QMouseEvent*  e0)
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
  QTextEdit::mouseMoveEvent(e0);
}
void PythonQtShell_QTextEdit::mousePressEvent(QMouseEvent*  e0)
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
  QTextEdit::mousePressEvent(e0);
}
void PythonQtShell_QTextEdit::mouseReleaseEvent(QMouseEvent*  e0)
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
  QTextEdit::mouseReleaseEvent(e0);
}
void PythonQtShell_QTextEdit::moveEvent(QMoveEvent*  arg__1)
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
  QTextEdit::moveEvent(arg__1);
}
bool  PythonQtShell_QTextEdit::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QTextEdit::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QTextEdit::paintEngine() const
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
  return QTextEdit::paintEngine();
}
void PythonQtShell_QTextEdit::paintEvent(QPaintEvent*  e0)
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
  QTextEdit::paintEvent(e0);
}
QPaintDevice*  PythonQtShell_QTextEdit::redirected(QPoint*  offset0) const
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
  return QTextEdit::redirected(offset0);
}
void PythonQtShell_QTextEdit::resizeEvent(QResizeEvent*  e0)
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
  QTextEdit::resizeEvent(e0);
}
void PythonQtShell_QTextEdit::scrollContentsBy(int  dx0, int  dy1)
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
  QTextEdit::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QTextEdit::setupViewport(QWidget*  viewport0)
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
  QTextEdit::setupViewport(viewport0);
}
QPainter*  PythonQtShell_QTextEdit::sharedPainter() const
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
  return QTextEdit::sharedPainter();
}
void PythonQtShell_QTextEdit::showEvent(QShowEvent*  arg__1)
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
  QTextEdit::showEvent(arg__1);
}
void PythonQtShell_QTextEdit::tabletEvent(QTabletEvent*  arg__1)
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
  QTextEdit::tabletEvent(arg__1);
}
void PythonQtShell_QTextEdit::timerEvent(QTimerEvent*  e0)
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
  QTextEdit::timerEvent(e0);
}
bool  PythonQtShell_QTextEdit::viewportEvent(QEvent*  arg__1)
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
  return QTextEdit::viewportEvent(arg__1);
}
QSize  PythonQtShell_QTextEdit::viewportSizeHint() const
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
  return QTextEdit::viewportSizeHint();
}
void PythonQtShell_QTextEdit::wheelEvent(QWheelEvent*  e0)
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
  QTextEdit::wheelEvent(e0);
}
QTextEdit* PythonQtWrapper_QTextEdit::new_QTextEdit(QWidget*  parent)
{ 
return new PythonQtShell_QTextEdit(parent); }

QTextEdit* PythonQtWrapper_QTextEdit::new_QTextEdit(const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QTextEdit(text, parent); }

bool  PythonQtWrapper_QTextEdit::acceptRichText(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->acceptRichText());
}

Qt::Alignment  PythonQtWrapper_QTextEdit::alignment(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

QString  PythonQtWrapper_QTextEdit::anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->anchorAt(pos));
}

QTextEdit::AutoFormatting  PythonQtWrapper_QTextEdit::autoFormatting(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->autoFormatting());
}

bool  PythonQtWrapper_QTextEdit::canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_canInsertFromMimeData(source));
}

bool  PythonQtWrapper_QTextEdit::canPaste(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->canPaste());
}

void PythonQtWrapper_QTextEdit::changeEvent(QTextEdit* theWrappedObject, QEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_changeEvent(e));
}

void PythonQtWrapper_QTextEdit::contextMenuEvent(QTextEdit* theWrappedObject, QContextMenuEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_contextMenuEvent(e));
}

QMimeData*  PythonQtWrapper_QTextEdit::createMimeDataFromSelection(QTextEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_createMimeDataFromSelection());
}

QMenu*  PythonQtWrapper_QTextEdit::createStandardContextMenu(QTextEdit* theWrappedObject)
{
  return ( theWrappedObject->createStandardContextMenu());
}

QMenu*  PythonQtWrapper_QTextEdit::createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position)
{
  return ( theWrappedObject->createStandardContextMenu(position));
}

QTextCharFormat  PythonQtWrapper_QTextEdit::currentCharFormat(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->currentCharFormat());
}

QFont  PythonQtWrapper_QTextEdit::currentFont(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->currentFont());
}

QTextCursor  PythonQtWrapper_QTextEdit::cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->cursorForPosition(pos));
}

QRect  PythonQtWrapper_QTextEdit::cursorRect(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->cursorRect());
}

QRect  PythonQtWrapper_QTextEdit::cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const
{
  return ( theWrappedObject->cursorRect(cursor));
}

int  PythonQtWrapper_QTextEdit::cursorWidth(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->cursorWidth());
}

void PythonQtWrapper_QTextEdit::doSetTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_doSetTextCursor(cursor));
}

QTextDocument*  PythonQtWrapper_QTextEdit::document(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QString  PythonQtWrapper_QTextEdit::documentTitle(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->documentTitle());
}

void PythonQtWrapper_QTextEdit::dragEnterEvent(QTextEdit* theWrappedObject, QDragEnterEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dragEnterEvent(e));
}

void PythonQtWrapper_QTextEdit::dragLeaveEvent(QTextEdit* theWrappedObject, QDragLeaveEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dragLeaveEvent(e));
}

void PythonQtWrapper_QTextEdit::dragMoveEvent(QTextEdit* theWrappedObject, QDragMoveEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dragMoveEvent(e));
}

void PythonQtWrapper_QTextEdit::dropEvent(QTextEdit* theWrappedObject, QDropEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dropEvent(e));
}

void PythonQtWrapper_QTextEdit::ensureCursorVisible(QTextEdit* theWrappedObject)
{
  ( theWrappedObject->ensureCursorVisible());
}

bool  PythonQtWrapper_QTextEdit::event(QTextEdit* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_event(e));
}

QList<QTextEdit::ExtraSelection >  PythonQtWrapper_QTextEdit::extraSelections(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->extraSelections());
}

bool  PythonQtWrapper_QTextEdit::find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options)
{
  return ( theWrappedObject->find(exp, options));
}

void PythonQtWrapper_QTextEdit::focusInEvent(QTextEdit* theWrappedObject, QFocusEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_focusInEvent(e));
}

bool  PythonQtWrapper_QTextEdit::focusNextPrevChild(QTextEdit* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QTextEdit::focusOutEvent(QTextEdit* theWrappedObject, QFocusEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_focusOutEvent(e));
}

QString  PythonQtWrapper_QTextEdit::fontFamily(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->fontFamily());
}

bool  PythonQtWrapper_QTextEdit::fontItalic(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->fontItalic());
}

qreal  PythonQtWrapper_QTextEdit::fontPointSize(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->fontPointSize());
}

bool  PythonQtWrapper_QTextEdit::fontUnderline(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->fontUnderline());
}

int  PythonQtWrapper_QTextEdit::fontWeight(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->fontWeight());
}

void PythonQtWrapper_QTextEdit::inputMethodEvent(QTextEdit* theWrappedObject, QInputMethodEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_inputMethodEvent(arg__1));
}

QVariant  PythonQtWrapper_QTextEdit::inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_inputMethodQuery(property));
}

void PythonQtWrapper_QTextEdit::insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_insertFromMimeData(source));
}

bool  PythonQtWrapper_QTextEdit::isReadOnly(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

bool  PythonQtWrapper_QTextEdit::isUndoRedoEnabled(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->isUndoRedoEnabled());
}

void PythonQtWrapper_QTextEdit::keyPressEvent(QTextEdit* theWrappedObject, QKeyEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_keyPressEvent(e));
}

void PythonQtWrapper_QTextEdit::keyReleaseEvent(QTextEdit* theWrappedObject, QKeyEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_keyReleaseEvent(e));
}

int  PythonQtWrapper_QTextEdit::lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->lineWrapColumnOrWidth());
}

QTextEdit::LineWrapMode  PythonQtWrapper_QTextEdit::lineWrapMode(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->lineWrapMode());
}

QVariant  PythonQtWrapper_QTextEdit::loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name)
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_loadResource(type, name));
}

void PythonQtWrapper_QTextEdit::mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier)
{
  ( theWrappedObject->mergeCurrentCharFormat(modifier));
}

void PythonQtWrapper_QTextEdit::mouseDoubleClickEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mouseDoubleClickEvent(e));
}

void PythonQtWrapper_QTextEdit::mouseMoveEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mouseMoveEvent(e));
}

void PythonQtWrapper_QTextEdit::mousePressEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mousePressEvent(e));
}

void PythonQtWrapper_QTextEdit::mouseReleaseEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mouseReleaseEvent(e));
}

void PythonQtWrapper_QTextEdit::moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode)
{
  ( theWrappedObject->moveCursor(operation, mode));
}

bool  PythonQtWrapper_QTextEdit::overwriteMode(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->overwriteMode());
}

void PythonQtWrapper_QTextEdit::paintEvent(QTextEdit* theWrappedObject, QPaintEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_paintEvent(e));
}

void PythonQtWrapper_QTextEdit::print(QTextEdit* theWrappedObject, QPagedPaintDevice*  printer) const
{
  ( theWrappedObject->print(printer));
}

void PythonQtWrapper_QTextEdit::resizeEvent(QTextEdit* theWrappedObject, QResizeEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_resizeEvent(e));
}

void PythonQtWrapper_QTextEdit::scrollContentsBy(QTextEdit* theWrappedObject, int  dx, int  dy)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_scrollContentsBy(dx, dy));
}

void PythonQtWrapper_QTextEdit::setAcceptRichText(QTextEdit* theWrappedObject, bool  accept)
{
  ( theWrappedObject->setAcceptRichText(accept));
}

void PythonQtWrapper_QTextEdit::setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features)
{
  ( theWrappedObject->setAutoFormatting(features));
}

void PythonQtWrapper_QTextEdit::setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setCurrentCharFormat(format));
}

void PythonQtWrapper_QTextEdit::setCursorWidth(QTextEdit* theWrappedObject, int  width)
{
  ( theWrappedObject->setCursorWidth(width));
}

void PythonQtWrapper_QTextEdit::setDocument(QTextEdit* theWrappedObject, QTextDocument*  document)
{
  ( theWrappedObject->setDocument(document));
}

void PythonQtWrapper_QTextEdit::setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setDocumentTitle(title));
}

void PythonQtWrapper_QTextEdit::setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections)
{
  ( theWrappedObject->setExtraSelections(selections));
}

void PythonQtWrapper_QTextEdit::setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w)
{
  ( theWrappedObject->setLineWrapColumnOrWidth(w));
}

void PythonQtWrapper_QTextEdit::setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode)
{
  ( theWrappedObject->setLineWrapMode(mode));
}

void PythonQtWrapper_QTextEdit::setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite)
{
  ( theWrappedObject->setOverwriteMode(overwrite));
}

void PythonQtWrapper_QTextEdit::setReadOnly(QTextEdit* theWrappedObject, bool  ro)
{
  ( theWrappedObject->setReadOnly(ro));
}

void PythonQtWrapper_QTextEdit::setTabChangesFocus(QTextEdit* theWrappedObject, bool  b)
{
  ( theWrappedObject->setTabChangesFocus(b));
}

void PythonQtWrapper_QTextEdit::setTabStopWidth(QTextEdit* theWrappedObject, int  width)
{
  ( theWrappedObject->setTabStopWidth(width));
}

void PythonQtWrapper_QTextEdit::setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->setTextCursor(cursor));
}

void PythonQtWrapper_QTextEdit::setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

void PythonQtWrapper_QTextEdit::setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setUndoRedoEnabled(enable));
}

void PythonQtWrapper_QTextEdit::setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy)
{
  ( theWrappedObject->setWordWrapMode(policy));
}

void PythonQtWrapper_QTextEdit::showEvent(QTextEdit* theWrappedObject, QShowEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_showEvent(arg__1));
}

bool  PythonQtWrapper_QTextEdit::tabChangesFocus(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->tabChangesFocus());
}

int  PythonQtWrapper_QTextEdit::tabStopWidth(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->tabStopWidth());
}

QColor  PythonQtWrapper_QTextEdit::textBackgroundColor(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textBackgroundColor());
}

QColor  PythonQtWrapper_QTextEdit::textColor(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textColor());
}

QTextCursor  PythonQtWrapper_QTextEdit::textCursor(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textCursor());
}

Qt::TextInteractionFlags  PythonQtWrapper_QTextEdit::textInteractionFlags(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

void PythonQtWrapper_QTextEdit::timerEvent(QTextEdit* theWrappedObject, QTimerEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_timerEvent(e));
}

QString  PythonQtWrapper_QTextEdit::toHtml(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QString  PythonQtWrapper_QTextEdit::toPlainText(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

void PythonQtWrapper_QTextEdit::wheelEvent(QTextEdit* theWrappedObject, QWheelEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_wheelEvent(e));
}

QTextOption::WrapMode  PythonQtWrapper_QTextEdit::wordWrapMode(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->wordWrapMode());
}



PythonQtShell_QTextEdit__ExtraSelection::~PythonQtShell_QTextEdit__ExtraSelection() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextEdit::ExtraSelection* PythonQtWrapper_QTextEdit__ExtraSelection::new_QTextEdit__ExtraSelection()
{ 
return new PythonQtShell_QTextEdit__ExtraSelection(); }



QTextFragment* PythonQtWrapper_QTextFragment::new_QTextFragment()
{ 
return new QTextFragment(); }

QTextFragment* PythonQtWrapper_QTextFragment::new_QTextFragment(const QTextFragment&  o)
{ 
return new QTextFragment(o); }

QTextCharFormat  PythonQtWrapper_QTextFragment::charFormat(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->charFormat());
}

int  PythonQtWrapper_QTextFragment::charFormatIndex(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->charFormatIndex());
}

bool  PythonQtWrapper_QTextFragment::contains(QTextFragment* theWrappedObject, int  position) const
{
  return ( theWrappedObject->contains(position));
}

QList<QGlyphRun >  PythonQtWrapper_QTextFragment::glyphRuns(QTextFragment* theWrappedObject, int  from, int  length) const
{
  return ( theWrappedObject->glyphRuns(from, length));
}

bool  PythonQtWrapper_QTextFragment::isValid(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QTextFragment::length(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

bool  PythonQtWrapper_QTextFragment::__ne__(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
  return ( (*theWrappedObject)!= o);
}

bool  PythonQtWrapper_QTextFragment::__lt__(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
  return ( (*theWrappedObject)< o);
}

bool  PythonQtWrapper_QTextFragment::__eq__(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
  return ( (*theWrappedObject)== o);
}

int  PythonQtWrapper_QTextFragment::position(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QString  PythonQtWrapper_QTextFragment::text(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->text());
}



PythonQtShell_QTextFrame::~PythonQtShell_QTextFrame() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextFrame::childEvent(QChildEvent*  arg__1)
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
  QTextFrame::childEvent(arg__1);
}
void PythonQtShell_QTextFrame::customEvent(QEvent*  arg__1)
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
  QTextFrame::customEvent(arg__1);
}
bool  PythonQtShell_QTextFrame::event(QEvent*  arg__1)
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
  return QTextFrame::event(arg__1);
}
bool  PythonQtShell_QTextFrame::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextFrame::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextFrame::timerEvent(QTimerEvent*  arg__1)
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
  QTextFrame::timerEvent(arg__1);
}
QTextFrame* PythonQtWrapper_QTextFrame::new_QTextFrame(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextFrame(doc); }

QTextFrame::iterator  PythonQtWrapper_QTextFrame::begin(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

QList<QTextFrame* >  PythonQtWrapper_QTextFrame::childFrames(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->childFrames());
}

QTextFrame::iterator  PythonQtWrapper_QTextFrame::end(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

QTextCursor  PythonQtWrapper_QTextFrame::firstCursorPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->firstCursorPosition());
}

int  PythonQtWrapper_QTextFrame::firstPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->firstPosition());
}

QTextFrameFormat  PythonQtWrapper_QTextFrame::frameFormat(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameFormat());
}

QTextCursor  PythonQtWrapper_QTextFrame::lastCursorPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->lastCursorPosition());
}

int  PythonQtWrapper_QTextFrame::lastPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->lastPosition());
}

QTextFrame*  PythonQtWrapper_QTextFrame::parentFrame(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->parentFrame());
}

void PythonQtWrapper_QTextFrame::setFrameFormat(QTextFrame* theWrappedObject, const QTextFrameFormat&  format)
{
  ( theWrappedObject->setFrameFormat(format));
}



PythonQtShell_QTextFrameFormat::~PythonQtShell_QTextFrameFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextFrameFormat* PythonQtWrapper_QTextFrameFormat::new_QTextFrameFormat()
{ 
return new PythonQtShell_QTextFrameFormat(); }

QTextFrameFormat* PythonQtWrapper_QTextFrameFormat::new_QTextFrameFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextFrameFormat(fmt); }

qreal  PythonQtWrapper_QTextFrameFormat::border(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->border());
}

QBrush  PythonQtWrapper_QTextFrameFormat::borderBrush(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->borderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextFrameFormat::borderStyle(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->borderStyle());
}

qreal  PythonQtWrapper_QTextFrameFormat::bottomMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomMargin());
}

QTextLength  PythonQtWrapper_QTextFrameFormat::height(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextFrameFormat::isValid(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextFrameFormat::leftMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftMargin());
}

qreal  PythonQtWrapper_QTextFrameFormat::margin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->margin());
}

qreal  PythonQtWrapper_QTextFrameFormat::padding(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->padding());
}

QTextFormat::PageBreakFlags  PythonQtWrapper_QTextFrameFormat::pageBreakPolicy(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->pageBreakPolicy());
}

QTextFrameFormat::Position  PythonQtWrapper_QTextFrameFormat::position(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

qreal  PythonQtWrapper_QTextFrameFormat::rightMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightMargin());
}

void PythonQtWrapper_QTextFrameFormat::setBorder(QTextFrameFormat* theWrappedObject, qreal  border)
{
  ( theWrappedObject->setBorder(border));
}

void PythonQtWrapper_QTextFrameFormat::setBorderBrush(QTextFrameFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBorderBrush(brush));
}

void PythonQtWrapper_QTextFrameFormat::setBorderStyle(QTextFrameFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style)
{
  ( theWrappedObject->setBorderStyle(style));
}

void PythonQtWrapper_QTextFrameFormat::setBottomMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setBottomMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setHeight(QTextFrameFormat* theWrappedObject, const QTextLength&  height)
{
  ( theWrappedObject->setHeight(height));
}

void PythonQtWrapper_QTextFrameFormat::setHeight(QTextFrameFormat* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setHeight(height));
}

void PythonQtWrapper_QTextFrameFormat::setLeftMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setLeftMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setPadding(QTextFrameFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setPadding(padding));
}

void PythonQtWrapper_QTextFrameFormat::setPageBreakPolicy(QTextFrameFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags)
{
  ( theWrappedObject->setPageBreakPolicy(flags));
}

void PythonQtWrapper_QTextFrameFormat::setPosition(QTextFrameFormat* theWrappedObject, QTextFrameFormat::Position  f)
{
  ( theWrappedObject->setPosition(f));
}

void PythonQtWrapper_QTextFrameFormat::setRightMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setRightMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setTopMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setTopMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setWidth(QTextFrameFormat* theWrappedObject, const QTextLength&  length)
{
  ( theWrappedObject->setWidth(length));
}

void PythonQtWrapper_QTextFrameFormat::setWidth(QTextFrameFormat* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setWidth(width));
}

qreal  PythonQtWrapper_QTextFrameFormat::topMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->topMargin());
}

QTextLength  PythonQtWrapper_QTextFrameFormat::width(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



PythonQtShell_QTextImageFormat::~PythonQtShell_QTextImageFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextImageFormat* PythonQtWrapper_QTextImageFormat::new_QTextImageFormat()
{ 
return new PythonQtShell_QTextImageFormat(); }

QTextImageFormat* PythonQtWrapper_QTextImageFormat::new_QTextImageFormat(const QTextFormat&  format)
{ 
return new PythonQtShell_QTextImageFormat(format); }

qreal  PythonQtWrapper_QTextImageFormat::height(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextImageFormat::isValid(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTextImageFormat::name(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QTextImageFormat::setHeight(QTextImageFormat* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setHeight(height));
}

void PythonQtWrapper_QTextImageFormat::setName(QTextImageFormat* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setName(name));
}

void PythonQtWrapper_QTextImageFormat::setWidth(QTextImageFormat* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setWidth(width));
}

qreal  PythonQtWrapper_QTextImageFormat::width(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QTextInlineObject* PythonQtWrapper_QTextInlineObject::new_QTextInlineObject()
{ 
return new QTextInlineObject(); }

qreal  PythonQtWrapper_QTextInlineObject::ascent(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextInlineObject::descent(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QTextFormat  PythonQtWrapper_QTextInlineObject::format(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QTextInlineObject::formatIndex(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->formatIndex());
}

qreal  PythonQtWrapper_QTextInlineObject::height(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextInlineObject::isValid(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QRectF  PythonQtWrapper_QTextInlineObject::rect(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QTextInlineObject::setAscent(QTextInlineObject* theWrappedObject, qreal  a)
{
  ( theWrappedObject->setAscent(a));
}

void PythonQtWrapper_QTextInlineObject::setDescent(QTextInlineObject* theWrappedObject, qreal  d)
{
  ( theWrappedObject->setDescent(d));
}

void PythonQtWrapper_QTextInlineObject::setWidth(QTextInlineObject* theWrappedObject, qreal  w)
{
  ( theWrappedObject->setWidth(w));
}

Qt::LayoutDirection  PythonQtWrapper_QTextInlineObject::textDirection(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

int  PythonQtWrapper_QTextInlineObject::textPosition(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->textPosition());
}

qreal  PythonQtWrapper_QTextInlineObject::width(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



PythonQtShell_QTextItem::~PythonQtShell_QTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextItem* PythonQtWrapper_QTextItem::new_QTextItem()
{ 
return new PythonQtShell_QTextItem(); }

qreal  PythonQtWrapper_QTextItem::ascent(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextItem::descent(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QFont  PythonQtWrapper_QTextItem::font(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QTextItem::RenderFlags  PythonQtWrapper_QTextItem::renderFlags(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->renderFlags());
}

QString  PythonQtWrapper_QTextItem::text(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

qreal  PythonQtWrapper_QTextItem::width(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QTextLayout* PythonQtWrapper_QTextLayout::new_QTextLayout()
{ 
return new QTextLayout(); }

QTextLayout* PythonQtWrapper_QTextLayout::new_QTextLayout(const QString&  text)
{ 
return new QTextLayout(text); }

QTextLayout* PythonQtWrapper_QTextLayout::new_QTextLayout(const QString&  text, const QFont&  font, QPaintDevice*  paintdevice)
{ 
return new QTextLayout(text, font, paintdevice); }

QTextLayout* PythonQtWrapper_QTextLayout::new_QTextLayout(const QTextBlock&  b)
{ 
return new QTextLayout(b); }

QList<QTextLayout::FormatRange >  PythonQtWrapper_QTextLayout::additionalFormats(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->additionalFormats());
}

void PythonQtWrapper_QTextLayout::beginLayout(QTextLayout* theWrappedObject)
{
  ( theWrappedObject->beginLayout());
}

QRectF  PythonQtWrapper_QTextLayout::boundingRect(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QTextLayout::cacheEnabled(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->cacheEnabled());
}

void PythonQtWrapper_QTextLayout::clearAdditionalFormats(QTextLayout* theWrappedObject)
{
  ( theWrappedObject->clearAdditionalFormats());
}

void PythonQtWrapper_QTextLayout::clearLayout(QTextLayout* theWrappedObject)
{
  ( theWrappedObject->clearLayout());
}

QTextLine  PythonQtWrapper_QTextLayout::createLine(QTextLayout* theWrappedObject)
{
  return ( theWrappedObject->createLine());
}

Qt::CursorMoveStyle  PythonQtWrapper_QTextLayout::cursorMoveStyle(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->cursorMoveStyle());
}

void PythonQtWrapper_QTextLayout::draw(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, const QVector<QTextLayout::FormatRange >&  selections, const QRectF&  clip) const
{
  ( theWrappedObject->draw(p, pos, selections, clip));
}

void PythonQtWrapper_QTextLayout::drawCursor(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, int  cursorPosition) const
{
  ( theWrappedObject->drawCursor(p, pos, cursorPosition));
}

void PythonQtWrapper_QTextLayout::drawCursor(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, int  cursorPosition, int  width) const
{
  ( theWrappedObject->drawCursor(p, pos, cursorPosition, width));
}

void PythonQtWrapper_QTextLayout::endLayout(QTextLayout* theWrappedObject)
{
  ( theWrappedObject->endLayout());
}

QFont  PythonQtWrapper_QTextLayout::font(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QList<QGlyphRun >  PythonQtWrapper_QTextLayout::glyphRuns(QTextLayout* theWrappedObject, int  from, int  length) const
{
  return ( theWrappedObject->glyphRuns(from, length));
}

bool  PythonQtWrapper_QTextLayout::isValidCursorPosition(QTextLayout* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->isValidCursorPosition(pos));
}

int  PythonQtWrapper_QTextLayout::leftCursorPosition(QTextLayout* theWrappedObject, int  oldPos) const
{
  return ( theWrappedObject->leftCursorPosition(oldPos));
}

QTextLine  PythonQtWrapper_QTextLayout::lineAt(QTextLayout* theWrappedObject, int  i) const
{
  return ( theWrappedObject->lineAt(i));
}

int  PythonQtWrapper_QTextLayout::lineCount(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->lineCount());
}

QTextLine  PythonQtWrapper_QTextLayout::lineForTextPosition(QTextLayout* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->lineForTextPosition(pos));
}

qreal  PythonQtWrapper_QTextLayout::maximumWidth(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->maximumWidth());
}

qreal  PythonQtWrapper_QTextLayout::minimumWidth(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->minimumWidth());
}

int  PythonQtWrapper_QTextLayout::nextCursorPosition(QTextLayout* theWrappedObject, int  oldPos, QTextLayout::CursorMode  mode) const
{
  return ( theWrappedObject->nextCursorPosition(oldPos, mode));
}

QPointF  PythonQtWrapper_QTextLayout::position(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

int  PythonQtWrapper_QTextLayout::preeditAreaPosition(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->preeditAreaPosition());
}

QString  PythonQtWrapper_QTextLayout::preeditAreaText(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->preeditAreaText());
}

int  PythonQtWrapper_QTextLayout::previousCursorPosition(QTextLayout* theWrappedObject, int  oldPos, QTextLayout::CursorMode  mode) const
{
  return ( theWrappedObject->previousCursorPosition(oldPos, mode));
}

int  PythonQtWrapper_QTextLayout::rightCursorPosition(QTextLayout* theWrappedObject, int  oldPos) const
{
  return ( theWrappedObject->rightCursorPosition(oldPos));
}

void PythonQtWrapper_QTextLayout::setAdditionalFormats(QTextLayout* theWrappedObject, const QList<QTextLayout::FormatRange >&  overrides)
{
  ( theWrappedObject->setAdditionalFormats(overrides));
}

void PythonQtWrapper_QTextLayout::setCacheEnabled(QTextLayout* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setCacheEnabled(enable));
}

void PythonQtWrapper_QTextLayout::setCursorMoveStyle(QTextLayout* theWrappedObject, Qt::CursorMoveStyle  style)
{
  ( theWrappedObject->setCursorMoveStyle(style));
}

void PythonQtWrapper_QTextLayout::setFlags(QTextLayout* theWrappedObject, int  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QTextLayout::setFont(QTextLayout* theWrappedObject, const QFont&  f)
{
  ( theWrappedObject->setFont(f));
}

void PythonQtWrapper_QTextLayout::setPosition(QTextLayout* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setPosition(p));
}

void PythonQtWrapper_QTextLayout::setPreeditArea(QTextLayout* theWrappedObject, int  position, const QString&  text)
{
  ( theWrappedObject->setPreeditArea(position, text));
}

void PythonQtWrapper_QTextLayout::setRawFont(QTextLayout* theWrappedObject, const QRawFont&  rawFont)
{
  ( theWrappedObject->setRawFont(rawFont));
}

void PythonQtWrapper_QTextLayout::setText(QTextLayout* theWrappedObject, const QString&  string)
{
  ( theWrappedObject->setText(string));
}

void PythonQtWrapper_QTextLayout::setTextOption(QTextLayout* theWrappedObject, const QTextOption&  option)
{
  ( theWrappedObject->setTextOption(option));
}

QString  PythonQtWrapper_QTextLayout::text(QTextLayout* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

const QTextOption*  PythonQtWrapper_QTextLayout::textOption(QTextLayout* theWrappedObject) const
{
  return &( theWrappedObject->textOption());
}



PythonQtShell_QTextLayout__FormatRange::~PythonQtShell_QTextLayout__FormatRange() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextLayout::FormatRange* PythonQtWrapper_QTextLayout__FormatRange::new_QTextLayout__FormatRange()
{ 
return new PythonQtShell_QTextLayout__FormatRange(); }



QTextLine* PythonQtWrapper_QTextLine::new_QTextLine()
{ 
return new QTextLine(); }

qreal  PythonQtWrapper_QTextLine::ascent(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextLine::cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge) const
{
  return ( theWrappedObject->cursorToX(cursorPos, edge));
}

qreal  PythonQtWrapper_QTextLine::descent(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

void PythonQtWrapper_QTextLine::draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection) const
{
  ( theWrappedObject->draw(p, point, selection));
}

QList<QGlyphRun >  PythonQtWrapper_QTextLine::glyphRuns(QTextLine* theWrappedObject, int  from, int  length) const
{
  return ( theWrappedObject->glyphRuns(from, length));
}

qreal  PythonQtWrapper_QTextLine::height(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

qreal  PythonQtWrapper_QTextLine::horizontalAdvance(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->horizontalAdvance());
}

bool  PythonQtWrapper_QTextLine::isValid(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextLine::leading(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->leading());
}

bool  PythonQtWrapper_QTextLine::leadingIncluded(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->leadingIncluded());
}

int  PythonQtWrapper_QTextLine::lineNumber(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

QRectF  PythonQtWrapper_QTextLine::naturalTextRect(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->naturalTextRect());
}

qreal  PythonQtWrapper_QTextLine::naturalTextWidth(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->naturalTextWidth());
}

QPointF  PythonQtWrapper_QTextLine::position(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QRectF  PythonQtWrapper_QTextLine::rect(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QTextLine::setLeadingIncluded(QTextLine* theWrappedObject, bool  included)
{
  ( theWrappedObject->setLeadingIncluded(included));
}

void PythonQtWrapper_QTextLine::setLineWidth(QTextLine* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setLineWidth(width));
}

void PythonQtWrapper_QTextLine::setNumColumns(QTextLine* theWrappedObject, int  columns)
{
  ( theWrappedObject->setNumColumns(columns));
}

void PythonQtWrapper_QTextLine::setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth)
{
  ( theWrappedObject->setNumColumns(columns, alignmentWidth));
}

void PythonQtWrapper_QTextLine::setPosition(QTextLine* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPosition(pos));
}

int  PythonQtWrapper_QTextLine::textLength(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->textLength());
}

int  PythonQtWrapper_QTextLine::textStart(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->textStart());
}

qreal  PythonQtWrapper_QTextLine::width(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

qreal  PythonQtWrapper_QTextLine::x(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QTextLine::xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2) const
{
  return ( theWrappedObject->xToCursor(x, arg__2));
}

qreal  PythonQtWrapper_QTextLine::y(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



PythonQtShell_QTextList::~PythonQtShell_QTextList() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextList::blockFormatChanged(const QTextBlock&  block0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("blockFormatChanged");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTextList::blockFormatChanged(block0);
}
void PythonQtShell_QTextList::blockInserted(const QTextBlock&  block0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("blockInserted");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTextList::blockInserted(block0);
}
void PythonQtShell_QTextList::blockRemoved(const QTextBlock&  block0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("blockRemoved");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTextList::blockRemoved(block0);
}
void PythonQtShell_QTextList::childEvent(QChildEvent*  arg__1)
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
  QTextList::childEvent(arg__1);
}
void PythonQtShell_QTextList::customEvent(QEvent*  arg__1)
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
  QTextList::customEvent(arg__1);
}
bool  PythonQtShell_QTextList::event(QEvent*  arg__1)
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
  return QTextList::event(arg__1);
}
bool  PythonQtShell_QTextList::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextList::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextList::timerEvent(QTimerEvent*  arg__1)
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
  QTextList::timerEvent(arg__1);
}
QTextList* PythonQtWrapper_QTextList::new_QTextList(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextList(doc); }

void PythonQtWrapper_QTextList::add(QTextList* theWrappedObject, const QTextBlock&  block)
{
  ( theWrappedObject->add(block));
}

int  PythonQtWrapper_QTextList::count(QTextList* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QTextListFormat  PythonQtWrapper_QTextList::format(QTextList* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QTextBlock  PythonQtWrapper_QTextList::item(QTextList* theWrappedObject, int  i) const
{
  return ( theWrappedObject->item(i));
}

int  PythonQtWrapper_QTextList::itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const
{
  return ( theWrappedObject->itemNumber(arg__1));
}

QString  PythonQtWrapper_QTextList::itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const
{
  return ( theWrappedObject->itemText(arg__1));
}

void PythonQtWrapper_QTextList::remove(QTextList* theWrappedObject, const QTextBlock&  arg__1)
{
  ( theWrappedObject->remove(arg__1));
}

void PythonQtWrapper_QTextList::removeItem(QTextList* theWrappedObject, int  i)
{
  ( theWrappedObject->removeItem(i));
}

void PythonQtWrapper_QTextList::setFormat(QTextList* theWrappedObject, const QTextListFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}



PythonQtShell_QTextListFormat::~PythonQtShell_QTextListFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextListFormat* PythonQtWrapper_QTextListFormat::new_QTextListFormat()
{ 
return new PythonQtShell_QTextListFormat(); }

QTextListFormat* PythonQtWrapper_QTextListFormat::new_QTextListFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextListFormat(fmt); }

int  PythonQtWrapper_QTextListFormat::indent(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->indent());
}

bool  PythonQtWrapper_QTextListFormat::isValid(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTextListFormat::numberPrefix(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->numberPrefix());
}

QString  PythonQtWrapper_QTextListFormat::numberSuffix(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->numberSuffix());
}

void PythonQtWrapper_QTextListFormat::setIndent(QTextListFormat* theWrappedObject, int  indent)
{
  ( theWrappedObject->setIndent(indent));
}

void PythonQtWrapper_QTextListFormat::setNumberPrefix(QTextListFormat* theWrappedObject, const QString&  numberPrefix)
{
  ( theWrappedObject->setNumberPrefix(numberPrefix));
}

void PythonQtWrapper_QTextListFormat::setNumberSuffix(QTextListFormat* theWrappedObject, const QString&  numberSuffix)
{
  ( theWrappedObject->setNumberSuffix(numberSuffix));
}

void PythonQtWrapper_QTextListFormat::setStyle(QTextListFormat* theWrappedObject, QTextListFormat::Style  style)
{
  ( theWrappedObject->setStyle(style));
}

QTextListFormat::Style  PythonQtWrapper_QTextListFormat::style(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->style());
}



PythonQtShell_QTextObject::~PythonQtShell_QTextObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextObject::childEvent(QChildEvent*  arg__1)
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
  QTextObject::childEvent(arg__1);
}
void PythonQtShell_QTextObject::customEvent(QEvent*  arg__1)
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
  QTextObject::customEvent(arg__1);
}
bool  PythonQtShell_QTextObject::event(QEvent*  arg__1)
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
  return QTextObject::event(arg__1);
}
bool  PythonQtShell_QTextObject::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextObject::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextObject::timerEvent(QTimerEvent*  arg__1)
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
  QTextObject::timerEvent(arg__1);
}
QTextObject* PythonQtWrapper_QTextObject::new_QTextObject(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextObject(doc); }

QTextDocument*  PythonQtWrapper_QTextObject::document(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QTextFormat  PythonQtWrapper_QTextObject::format(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QTextObject::formatIndex(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->formatIndex());
}

int  PythonQtWrapper_QTextObject::objectIndex(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->objectIndex());
}

void PythonQtWrapper_QTextObject::setFormat(QTextObject* theWrappedObject, const QTextFormat&  format)
{
  ( ((PythonQtPublicPromoter_QTextObject*)theWrappedObject)->promoted_setFormat(format));
}



QTextOption* PythonQtWrapper_QTextOption::new_QTextOption()
{ 
return new QTextOption(); }

QTextOption* PythonQtWrapper_QTextOption::new_QTextOption(Qt::Alignment  alignment)
{ 
return new QTextOption(alignment); }

QTextOption* PythonQtWrapper_QTextOption::new_QTextOption(const QTextOption&  o)
{ 
return new QTextOption(o); }

Qt::Alignment  PythonQtWrapper_QTextOption::alignment(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

QTextOption::Flags  PythonQtWrapper_QTextOption::flags(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

void PythonQtWrapper_QTextOption::setAlignment(QTextOption* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QTextOption::setFlags(QTextOption* theWrappedObject, QTextOption::Flags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QTextOption::setTabArray(QTextOption* theWrappedObject, const QList<qreal >&  tabStops)
{
  ( theWrappedObject->setTabArray(tabStops));
}

void PythonQtWrapper_QTextOption::setTabStop(QTextOption* theWrappedObject, qreal  tabStop)
{
  ( theWrappedObject->setTabStop(tabStop));
}

void PythonQtWrapper_QTextOption::setTabs(QTextOption* theWrappedObject, const QList<QTextOption::Tab >&  tabStops)
{
  ( theWrappedObject->setTabs(tabStops));
}

void PythonQtWrapper_QTextOption::setTextDirection(QTextOption* theWrappedObject, Qt::LayoutDirection  aDirection)
{
  ( theWrappedObject->setTextDirection(aDirection));
}

void PythonQtWrapper_QTextOption::setUseDesignMetrics(QTextOption* theWrappedObject, bool  b)
{
  ( theWrappedObject->setUseDesignMetrics(b));
}

void PythonQtWrapper_QTextOption::setWrapMode(QTextOption* theWrappedObject, QTextOption::WrapMode  wrap)
{
  ( theWrappedObject->setWrapMode(wrap));
}

QList<qreal >  PythonQtWrapper_QTextOption::tabArray(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->tabArray());
}

qreal  PythonQtWrapper_QTextOption::tabStop(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->tabStop());
}

QList<QTextOption::Tab >  PythonQtWrapper_QTextOption::tabs(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->tabs());
}

Qt::LayoutDirection  PythonQtWrapper_QTextOption::textDirection(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

bool  PythonQtWrapper_QTextOption::useDesignMetrics(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->useDesignMetrics());
}

QTextOption::WrapMode  PythonQtWrapper_QTextOption::wrapMode(QTextOption* theWrappedObject) const
{
  return ( theWrappedObject->wrapMode());
}



PythonQtShell_QTextOption__Tab::~PythonQtShell_QTextOption__Tab() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextOption::Tab* PythonQtWrapper_QTextOption__Tab::new_QTextOption__Tab()
{ 
return new PythonQtShell_QTextOption__Tab(); }

QTextOption::Tab* PythonQtWrapper_QTextOption__Tab::new_QTextOption__Tab(qreal  pos, QTextOption::TabType  tabType, QChar  delim)
{ 
return new PythonQtShell_QTextOption__Tab(pos, tabType, delim); }

bool  PythonQtWrapper_QTextOption__Tab::__ne__(QTextOption::Tab* theWrappedObject, const QTextOption::Tab&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QTextOption__Tab::__eq__(QTextOption::Tab* theWrappedObject, const QTextOption::Tab&  other) const
{
  return ( (*theWrappedObject)== other);
}



PythonQtShell_QTextTable::~PythonQtShell_QTextTable() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextTable::childEvent(QChildEvent*  arg__1)
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
  QTextTable::childEvent(arg__1);
}
void PythonQtShell_QTextTable::customEvent(QEvent*  arg__1)
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
  QTextTable::customEvent(arg__1);
}
bool  PythonQtShell_QTextTable::event(QEvent*  arg__1)
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
  return QTextTable::event(arg__1);
}
bool  PythonQtShell_QTextTable::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextTable::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextTable::timerEvent(QTimerEvent*  arg__1)
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
  QTextTable::timerEvent(arg__1);
}
QTextTable* PythonQtWrapper_QTextTable::new_QTextTable(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextTable(doc); }

void PythonQtWrapper_QTextTable::appendColumns(QTextTable* theWrappedObject, int  count)
{
  ( theWrappedObject->appendColumns(count));
}

void PythonQtWrapper_QTextTable::appendRows(QTextTable* theWrappedObject, int  count)
{
  ( theWrappedObject->appendRows(count));
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
  return ( theWrappedObject->cellAt(c));
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, int  position) const
{
  return ( theWrappedObject->cellAt(position));
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, int  row, int  col) const
{
  return ( theWrappedObject->cellAt(row, col));
}

int  PythonQtWrapper_QTextTable::columns(QTextTable* theWrappedObject) const
{
  return ( theWrappedObject->columns());
}

QTextTableFormat  PythonQtWrapper_QTextTable::format(QTextTable* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

void PythonQtWrapper_QTextTable::insertColumns(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->insertColumns(pos, num));
}

void PythonQtWrapper_QTextTable::insertRows(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->insertRows(pos, num));
}

void PythonQtWrapper_QTextTable::mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->mergeCells(cursor));
}

void PythonQtWrapper_QTextTable::mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols)
{
  ( theWrappedObject->mergeCells(row, col, numRows, numCols));
}

void PythonQtWrapper_QTextTable::removeColumns(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->removeColumns(pos, num));
}

void PythonQtWrapper_QTextTable::removeRows(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->removeRows(pos, num));
}

void PythonQtWrapper_QTextTable::resize(QTextTable* theWrappedObject, int  rows, int  cols)
{
  ( theWrappedObject->resize(rows, cols));
}

QTextCursor  PythonQtWrapper_QTextTable::rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
  return ( theWrappedObject->rowEnd(c));
}

QTextCursor  PythonQtWrapper_QTextTable::rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
  return ( theWrappedObject->rowStart(c));
}

int  PythonQtWrapper_QTextTable::rows(QTextTable* theWrappedObject) const
{
  return ( theWrappedObject->rows());
}

void PythonQtWrapper_QTextTable::setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QTextTable::splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols)
{
  ( theWrappedObject->splitCell(row, col, numRows, numCols));
}



QTextTableCell* PythonQtWrapper_QTextTableCell::new_QTextTableCell()
{ 
return new QTextTableCell(); }

QTextTableCell* PythonQtWrapper_QTextTableCell::new_QTextTableCell(const QTextTableCell&  o)
{ 
return new QTextTableCell(o); }

QTextFrame::iterator  PythonQtWrapper_QTextTableCell::begin(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

int  PythonQtWrapper_QTextTableCell::column(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

int  PythonQtWrapper_QTextTableCell::columnSpan(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->columnSpan());
}

QTextFrame::iterator  PythonQtWrapper_QTextTableCell::end(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

QTextCursor  PythonQtWrapper_QTextTableCell::firstCursorPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->firstCursorPosition());
}

int  PythonQtWrapper_QTextTableCell::firstPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->firstPosition());
}

QTextCharFormat  PythonQtWrapper_QTextTableCell::format(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

bool  PythonQtWrapper_QTextTableCell::isValid(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QTextCursor  PythonQtWrapper_QTextTableCell::lastCursorPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->lastCursorPosition());
}

int  PythonQtWrapper_QTextTableCell::lastPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->lastPosition());
}

bool  PythonQtWrapper_QTextTableCell::__ne__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QTextTableCell::__eq__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QTextTableCell::row(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

int  PythonQtWrapper_QTextTableCell::rowSpan(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->rowSpan());
}

void PythonQtWrapper_QTextTableCell::setFormat(QTextTableCell* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

int  PythonQtWrapper_QTextTableCell::tableCellFormatIndex(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->tableCellFormatIndex());
}



PythonQtShell_QTextTableCellFormat::~PythonQtShell_QTextTableCellFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextTableCellFormat* PythonQtWrapper_QTextTableCellFormat::new_QTextTableCellFormat()
{ 
return new PythonQtShell_QTextTableCellFormat(); }

QTextTableCellFormat* PythonQtWrapper_QTextTableCellFormat::new_QTextTableCellFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextTableCellFormat(fmt); }

qreal  PythonQtWrapper_QTextTableCellFormat::bottomPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomPadding());
}

bool  PythonQtWrapper_QTextTableCellFormat::isValid(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextTableCellFormat::leftPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftPadding());
}

qreal  PythonQtWrapper_QTextTableCellFormat::rightPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightPadding());
}

void PythonQtWrapper_QTextTableCellFormat::setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setBottomPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setLeftPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setRightPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setTopPadding(padding));
}

qreal  PythonQtWrapper_QTextTableCellFormat::topPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topPadding());
}



PythonQtShell_QTextTableFormat::~PythonQtShell_QTextTableFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextTableFormat* PythonQtWrapper_QTextTableFormat::new_QTextTableFormat()
{ 
return new PythonQtShell_QTextTableFormat(); }

QTextTableFormat* PythonQtWrapper_QTextTableFormat::new_QTextTableFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextTableFormat(fmt); }

Qt::Alignment  PythonQtWrapper_QTextTableFormat::alignment(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

qreal  PythonQtWrapper_QTextTableFormat::cellPadding(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellPadding());
}

qreal  PythonQtWrapper_QTextTableFormat::cellSpacing(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellSpacing());
}

void PythonQtWrapper_QTextTableFormat::clearColumnWidthConstraints(QTextTableFormat* theWrappedObject)
{
  ( theWrappedObject->clearColumnWidthConstraints());
}

QVector<QTextLength >  PythonQtWrapper_QTextTableFormat::columnWidthConstraints(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columnWidthConstraints());
}

int  PythonQtWrapper_QTextTableFormat::columns(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columns());
}

int  PythonQtWrapper_QTextTableFormat::headerRowCount(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->headerRowCount());
}

bool  PythonQtWrapper_QTextTableFormat::isValid(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QTextTableFormat::setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QTextTableFormat::setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setCellPadding(padding));
}

void PythonQtWrapper_QTextTableFormat::setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setCellSpacing(spacing));
}

void PythonQtWrapper_QTextTableFormat::setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints)
{
  ( theWrappedObject->setColumnWidthConstraints(constraints));
}

void PythonQtWrapper_QTextTableFormat::setColumns(QTextTableFormat* theWrappedObject, int  columns)
{
  ( theWrappedObject->setColumns(columns));
}

void PythonQtWrapper_QTextTableFormat::setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count)
{
  ( theWrappedObject->setHeaderRowCount(count));
}



PythonQtShell_QTileRules::~PythonQtShell_QTileRules() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTileRules* PythonQtWrapper_QTileRules::new_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule)
{ 
return new PythonQtShell_QTileRules(horizontalRule, verticalRule); }

QTileRules* PythonQtWrapper_QTileRules::new_QTileRules(Qt::TileRule  rule)
{ 
return new PythonQtShell_QTileRules(rule); }



PythonQtShell_QTimeEdit::~PythonQtShell_QTimeEdit() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTimeEdit::actionEvent(QActionEvent*  arg__1)
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
  QTimeEdit::actionEvent(arg__1);
}
void PythonQtShell_QTimeEdit::changeEvent(QEvent*  event0)
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
  QTimeEdit::changeEvent(event0);
}
void PythonQtShell_QTimeEdit::childEvent(QChildEvent*  arg__1)
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
  QTimeEdit::childEvent(arg__1);
}
void PythonQtShell_QTimeEdit::clear()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("clear");
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
  QTimeEdit::clear();
}
void PythonQtShell_QTimeEdit::closeEvent(QCloseEvent*  event0)
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
  QTimeEdit::closeEvent(event0);
}
void PythonQtShell_QTimeEdit::contextMenuEvent(QContextMenuEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTimeEdit::contextMenuEvent(event0);
}
void PythonQtShell_QTimeEdit::customEvent(QEvent*  arg__1)
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
  QTimeEdit::customEvent(arg__1);
}
QDateTime  PythonQtShell_QTimeEdit::dateTimeFromText(const QString&  text0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dateTimeFromText");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QDateTime" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QDateTime returnValue;
    void* args[2] = {NULL, (void*)&text0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("dateTimeFromText", methodInfo, result);
        } else {
          returnValue = *((QDateTime*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QTimeEdit::dateTimeFromText(text0);
}
int  PythonQtShell_QTimeEdit::devType() const
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
  return QTimeEdit::devType();
}
void PythonQtShell_QTimeEdit::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QTimeEdit::dragEnterEvent(arg__1);
}
void PythonQtShell_QTimeEdit::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QTimeEdit::dragLeaveEvent(arg__1);
}
void PythonQtShell_QTimeEdit::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QTimeEdit::dragMoveEvent(arg__1);
}
void PythonQtShell_QTimeEdit::dropEvent(QDropEvent*  arg__1)
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
  QTimeEdit::dropEvent(arg__1);
}
void PythonQtShell_QTimeEdit::enterEvent(QEvent*  arg__1)
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
  QTimeEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QTimeEdit::event(QEvent*  event0)
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
  return QTimeEdit::event(event0);
}
bool  PythonQtShell_QTimeEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTimeEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTimeEdit::fixup(QString&  input0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fixup");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&input0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTimeEdit::fixup(input0);
}
void PythonQtShell_QTimeEdit::focusInEvent(QFocusEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTimeEdit::focusInEvent(event0);
}
bool  PythonQtShell_QTimeEdit::focusNextPrevChild(bool  next0)
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
  return QTimeEdit::focusNextPrevChild(next0);
}
void PythonQtShell_QTimeEdit::focusOutEvent(QFocusEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTimeEdit::focusOutEvent(event0);
}
bool  PythonQtShell_QTimeEdit::hasHeightForWidth() const
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
  return QTimeEdit::hasHeightForWidth();
}
int  PythonQtShell_QTimeEdit::heightForWidth(int  arg__1) const
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
  return QTimeEdit::heightForWidth(arg__1);
}
void PythonQtShell_QTimeEdit::hideEvent(QHideEvent*  event0)
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
  QTimeEdit::hideEvent(event0);
}
void PythonQtShell_QTimeEdit::initPainter(QPainter*  painter0) const
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
  QTimeEdit::initPainter(painter0);
}
void PythonQtShell_QTimeEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QTimeEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QTimeEdit::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QTimeEdit::inputMethodQuery(arg__1);
}
void PythonQtShell_QTimeEdit::keyPressEvent(QKeyEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTimeEdit::keyPressEvent(event0);
}
void PythonQtShell_QTimeEdit::keyReleaseEvent(QKeyEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTimeEdit::keyReleaseEvent(event0);
}
void PythonQtShell_QTimeEdit::leaveEvent(QEvent*  arg__1)
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
  QTimeEdit::leaveEvent(arg__1);
}
int  PythonQtShell_QTimeEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QTimeEdit::metric(arg__1);
}
void PythonQtShell_QTimeEdit::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QTimeEdit::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QTimeEdit::mouseMoveEvent(QMouseEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTimeEdit::mouseMoveEvent(event0);
}
void PythonQtShell_QTimeEdit::mousePressEvent(QMouseEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTimeEdit::mousePressEvent(event0);
}
void PythonQtShell_QTimeEdit::mouseReleaseEvent(QMouseEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTimeEdit::mouseReleaseEvent(event0);
}
void PythonQtShell_QTimeEdit::moveEvent(QMoveEvent*  arg__1)
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
  QTimeEdit::moveEvent(arg__1);
}
bool  PythonQtShell_QTimeEdit::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QTimeEdit::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QTimeEdit::paintEngine() const
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
  return QTimeEdit::paintEngine();
}
void PythonQtShell_QTimeEdit::paintEvent(QPaintEvent*  event0)
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
  QTimeEdit::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QTimeEdit::redirected(QPoint*  offset0) const
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
  return QTimeEdit::redirected(offset0);
}
void PythonQtShell_QTimeEdit::resizeEvent(QResizeEvent*  event0)
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
  QTimeEdit::resizeEvent(event0);
}
QPainter*  PythonQtShell_QTimeEdit::sharedPainter() const
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
  return QTimeEdit::sharedPainter();
}
void PythonQtShell_QTimeEdit::showEvent(QShowEvent*  event0)
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
  QTimeEdit::showEvent(event0);
}
void PythonQtShell_QTimeEdit::stepBy(int  steps0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("stepBy");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&steps0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTimeEdit::stepBy(steps0);
}
QAbstractSpinBox::StepEnabled  PythonQtShell_QTimeEdit::stepEnabled() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("stepEnabled");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QAbstractSpinBox::StepEnabled"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAbstractSpinBox::StepEnabled returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("stepEnabled", methodInfo, result);
        } else {
          returnValue = *((QAbstractSpinBox::StepEnabled*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QTimeEdit::stepEnabled();
}
void PythonQtShell_QTimeEdit::tabletEvent(QTabletEvent*  arg__1)
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
  QTimeEdit::tabletEvent(arg__1);
}
QString  PythonQtShell_QTimeEdit::textFromDateTime(const QDateTime&  dt0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("textFromDateTime");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const QDateTime&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
    void* args[2] = {NULL, (void*)&dt0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("textFromDateTime", methodInfo, result);
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
  return QTimeEdit::textFromDateTime(dt0);
}
void PythonQtShell_QTimeEdit::timerEvent(QTimerEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTimeEdit::timerEvent(event0);
}
QValidator::State  PythonQtShell_QTimeEdit::validate(QString&  input0, int&  pos1) const
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
  return QTimeEdit::validate(input0, pos1);
}
void PythonQtShell_QTimeEdit::wheelEvent(QWheelEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTimeEdit::wheelEvent(event0);
}
QTimeEdit* PythonQtWrapper_QTimeEdit::new_QTimeEdit(QWidget*  parent)
{ 
return new PythonQtShell_QTimeEdit(parent); }

QTimeEdit* PythonQtWrapper_QTimeEdit::new_QTimeEdit(const QTime&  time, QWidget*  parent)
{ 
return new PythonQtShell_QTimeEdit(time, parent); }



PythonQtShell_QToolBar::~PythonQtShell_QToolBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QToolBar::actionEvent(QActionEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QToolBar::actionEvent(event0);
}
void PythonQtShell_QToolBar::changeEvent(QEvent*  event0)
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
  QToolBar::changeEvent(event0);
}
void PythonQtShell_QToolBar::childEvent(QChildEvent*  arg__1)
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
  QToolBar::childEvent(arg__1);
}
void PythonQtShell_QToolBar::closeEvent(QCloseEvent*  arg__1)
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
  QToolBar::closeEvent(arg__1);
}
void PythonQtShell_QToolBar::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QToolBar::contextMenuEvent(arg__1);
}
void PythonQtShell_QToolBar::customEvent(QEvent*  arg__1)
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
  QToolBar::customEvent(arg__1);
}
int  PythonQtShell_QToolBar::devType() const
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
  return QToolBar::devType();
}
void PythonQtShell_QToolBar::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QToolBar::dragEnterEvent(arg__1);
}
void PythonQtShell_QToolBar::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QToolBar::dragLeaveEvent(arg__1);
}
void PythonQtShell_QToolBar::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QToolBar::dragMoveEvent(arg__1);
}
void PythonQtShell_QToolBar::dropEvent(QDropEvent*  arg__1)
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
  QToolBar::dropEvent(arg__1);
}
void PythonQtShell_QToolBar::enterEvent(QEvent*  arg__1)
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
  QToolBar::enterEvent(arg__1);
}
bool  PythonQtShell_QToolBar::event(QEvent*  event0)
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
  return QToolBar::event(event0);
}
bool  PythonQtShell_QToolBar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QToolBar::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QToolBar::focusInEvent(QFocusEvent*  arg__1)
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
  QToolBar::focusInEvent(arg__1);
}
bool  PythonQtShell_QToolBar::focusNextPrevChild(bool  next0)
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
  return QToolBar::focusNextPrevChild(next0);
}
void PythonQtShell_QToolBar::focusOutEvent(QFocusEvent*  arg__1)
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
  QToolBar::focusOutEvent(arg__1);
}
bool  PythonQtShell_QToolBar::hasHeightForWidth() const
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
  return QToolBar::hasHeightForWidth();
}
int  PythonQtShell_QToolBar::heightForWidth(int  arg__1) const
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
  return QToolBar::heightForWidth(arg__1);
}
void PythonQtShell_QToolBar::hideEvent(QHideEvent*  arg__1)
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
  QToolBar::hideEvent(arg__1);
}
void PythonQtShell_QToolBar::initPainter(QPainter*  painter0) const
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
  QToolBar::initPainter(painter0);
}
void PythonQtShell_QToolBar::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QToolBar::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QToolBar::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QToolBar::inputMethodQuery(arg__1);
}
void PythonQtShell_QToolBar::keyPressEvent(QKeyEvent*  arg__1)
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
  QToolBar::keyPressEvent(arg__1);
}
void PythonQtShell_QToolBar::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QToolBar::keyReleaseEvent(arg__1);
}
void PythonQtShell_QToolBar::leaveEvent(QEvent*  arg__1)
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
  QToolBar::leaveEvent(arg__1);
}
int  PythonQtShell_QToolBar::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QToolBar::metric(arg__1);
}
QSize  PythonQtShell_QToolBar::minimumSizeHint() const
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
  return QToolBar::minimumSizeHint();
}
void PythonQtShell_QToolBar::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QToolBar::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QToolBar::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QToolBar::mouseMoveEvent(arg__1);
}
void PythonQtShell_QToolBar::mousePressEvent(QMouseEvent*  arg__1)
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
  QToolBar::mousePressEvent(arg__1);
}
void PythonQtShell_QToolBar::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QToolBar::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QToolBar::moveEvent(QMoveEvent*  arg__1)
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
  QToolBar::moveEvent(arg__1);
}
bool  PythonQtShell_QToolBar::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QToolBar::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QToolBar::paintEngine() const
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
  return QToolBar::paintEngine();
}
void PythonQtShell_QToolBar::paintEvent(QPaintEvent*  event0)
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
  QToolBar::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QToolBar::redirected(QPoint*  offset0) const
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
  return QToolBar::redirected(offset0);
}
void PythonQtShell_QToolBar::resizeEvent(QResizeEvent*  arg__1)
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
  QToolBar::resizeEvent(arg__1);
}
QPainter*  PythonQtShell_QToolBar::sharedPainter() const
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
  return QToolBar::sharedPainter();
}
void PythonQtShell_QToolBar::showEvent(QShowEvent*  arg__1)
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
  QToolBar::showEvent(arg__1);
}
QSize  PythonQtShell_QToolBar::sizeHint() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QToolBar::sizeHint();
}
void PythonQtShell_QToolBar::tabletEvent(QTabletEvent*  arg__1)
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
  QToolBar::tabletEvent(arg__1);
}
void PythonQtShell_QToolBar::timerEvent(QTimerEvent*  arg__1)
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
  QToolBar::timerEvent(arg__1);
}
void PythonQtShell_QToolBar::wheelEvent(QWheelEvent*  arg__1)
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
  QToolBar::wheelEvent(arg__1);
}
QToolBar* PythonQtWrapper_QToolBar::new_QToolBar(QWidget*  parent)
{ 
return new PythonQtShell_QToolBar(parent); }

QToolBar* PythonQtWrapper_QToolBar::new_QToolBar(const QString&  title, QWidget*  parent)
{ 
return new PythonQtShell_QToolBar(title, parent); }

QAction*  PythonQtWrapper_QToolBar::actionAt(QToolBar* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->actionAt(p));
}

QAction*  PythonQtWrapper_QToolBar::actionAt(QToolBar* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->actionAt(x, y));
}

void PythonQtWrapper_QToolBar::actionEvent(QToolBar* theWrappedObject, QActionEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_actionEvent(event));
}

QRect  PythonQtWrapper_QToolBar::actionGeometry(QToolBar* theWrappedObject, QAction*  action) const
{
  return ( theWrappedObject->actionGeometry(action));
}

void PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->addAction(action));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text)
{
  return ( theWrappedObject->addAction(icon, text));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member)
{
  return ( theWrappedObject->addAction(icon, text, receiver, member));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QString&  text)
{
  return ( theWrappedObject->addAction(text));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member)
{
  return ( theWrappedObject->addAction(text, receiver, member));
}

QAction*  PythonQtWrapper_QToolBar::addSeparator(QToolBar* theWrappedObject)
{
  return ( theWrappedObject->addSeparator());
}

QAction*  PythonQtWrapper_QToolBar::addWidget(QToolBar* theWrappedObject, QWidget*  widget)
{
  return ( theWrappedObject->addWidget(widget));
}

Qt::ToolBarAreas  PythonQtWrapper_QToolBar::allowedAreas(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->allowedAreas());
}

void PythonQtWrapper_QToolBar::changeEvent(QToolBar* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_changeEvent(event));
}

void PythonQtWrapper_QToolBar::clear(QToolBar* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QToolBar::event(QToolBar* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_event(event));
}

QSize  PythonQtWrapper_QToolBar::iconSize(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->iconSize());
}

void PythonQtWrapper_QToolBar::initStyleOption(QToolBar* theWrappedObject, QStyleOptionToolBar*  option) const
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_initStyleOption(option));
}

QAction*  PythonQtWrapper_QToolBar::insertSeparator(QToolBar* theWrappedObject, QAction*  before)
{
  return ( theWrappedObject->insertSeparator(before));
}

QAction*  PythonQtWrapper_QToolBar::insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget)
{
  return ( theWrappedObject->insertWidget(before, widget));
}

bool  PythonQtWrapper_QToolBar::isAreaAllowed(QToolBar* theWrappedObject, Qt::ToolBarArea  area) const
{
  return ( theWrappedObject->isAreaAllowed(area));
}

bool  PythonQtWrapper_QToolBar::isFloatable(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->isFloatable());
}

bool  PythonQtWrapper_QToolBar::isFloating(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->isFloating());
}

bool  PythonQtWrapper_QToolBar::isMovable(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->isMovable());
}

Qt::Orientation  PythonQtWrapper_QToolBar::orientation(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

void PythonQtWrapper_QToolBar::paintEvent(QToolBar* theWrappedObject, QPaintEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_paintEvent(event));
}

void PythonQtWrapper_QToolBar::setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas)
{
  ( theWrappedObject->setAllowedAreas(areas));
}

void PythonQtWrapper_QToolBar::setFloatable(QToolBar* theWrappedObject, bool  floatable)
{
  ( theWrappedObject->setFloatable(floatable));
}

void PythonQtWrapper_QToolBar::setMovable(QToolBar* theWrappedObject, bool  movable)
{
  ( theWrappedObject->setMovable(movable));
}

void PythonQtWrapper_QToolBar::setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation)
{
  ( theWrappedObject->setOrientation(orientation));
}

QAction*  PythonQtWrapper_QToolBar::toggleViewAction(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->toggleViewAction());
}

Qt::ToolButtonStyle  PythonQtWrapper_QToolBar::toolButtonStyle(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->toolButtonStyle());
}

QWidget*  PythonQtWrapper_QToolBar::widgetForAction(QToolBar* theWrappedObject, QAction*  action) const
{
  return ( theWrappedObject->widgetForAction(action));
}



QToolBarChangeEvent* PythonQtWrapper_QToolBarChangeEvent::new_QToolBarChangeEvent(bool  t)
{ 
return new QToolBarChangeEvent(t); }

bool  PythonQtWrapper_QToolBarChangeEvent::toggle(QToolBarChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->toggle());
}


