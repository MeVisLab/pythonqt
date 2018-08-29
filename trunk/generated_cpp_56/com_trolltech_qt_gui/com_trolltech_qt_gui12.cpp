#include "com_trolltech_qt_gui12.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QIcon>
#include <QMessageBox>
#include <QVariant>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qsurfaceformat.h>
#include <qundogroup.h>
#include <qundostack.h>
#include <qundoview.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>
#include <qwidgetaction.h>
#include <qwindow.h>
#include <qwizard.h>

PythonQtShell_QUndoView::~PythonQtShell_QUndoView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QUndoView::actionEvent(QActionEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::actionEvent(event0);
}
void PythonQtShell_QUndoView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::changeEvent(arg__1);
}
void PythonQtShell_QUndoView::childEvent(QChildEvent*  event0)
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
  QUndoView::childEvent(event0);
}
void PythonQtShell_QUndoView::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("closeEditor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWidget*" , "QAbstractItemDelegate::EndEditHint"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&editor0, (void*)&hint1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::closeEditor(editor0, hint1);
}
void PythonQtShell_QUndoView::closeEvent(QCloseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::closeEvent(event0);
}
void PythonQtShell_QUndoView::commitData(QWidget*  editor0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("commitData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&editor0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::commitData(editor0);
}
void PythonQtShell_QUndoView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::contextMenuEvent(arg__1);
}
void PythonQtShell_QUndoView::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("currentChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&current0, (void*)&previous1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::currentChanged(current0, previous1);
}
void PythonQtShell_QUndoView::customEvent(QEvent*  event0)
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
  QUndoView::customEvent(event0);
}
void PythonQtShell_QUndoView::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, const QVector<int >&  roles2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dataChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&" , "const QVector<int >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {NULL, (void*)&topLeft0, (void*)&bottomRight1, (void*)&roles2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::dataChanged(topLeft0, bottomRight1, roles2);
}
int  PythonQtShell_QUndoView::devType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("devType");
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
  return QUndoView::devType();
}
void PythonQtShell_QUndoView::doItemsLayout()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("doItemsLayout");
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
  QUndoView::doItemsLayout();
}
void PythonQtShell_QUndoView::dragEnterEvent(QDragEnterEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QUndoView::dragEnterEvent(event0);
}
void PythonQtShell_QUndoView::dragLeaveEvent(QDragLeaveEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::dragLeaveEvent(e0);
}
void PythonQtShell_QUndoView::dragMoveEvent(QDragMoveEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::dragMoveEvent(e0);
}
void PythonQtShell_QUndoView::dropEvent(QDropEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::dropEvent(e0);
}
bool  PythonQtShell_QUndoView::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("edit");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "QAbstractItemView::EditTrigger" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
      void* args[4] = {NULL, (void*)&index0, (void*)&trigger1, (void*)&event2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("edit", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUndoView::edit(index0, trigger1, event2);
}
void PythonQtShell_QUndoView::editorDestroyed(QObject*  editor0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("editorDestroyed");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&editor0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::editorDestroyed(editor0);
}
void PythonQtShell_QUndoView::enterEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("enterEvent");
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
  QUndoView::enterEvent(event0);
}
bool  PythonQtShell_QUndoView::event(QEvent*  e0)
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
}
  return QUndoView::event(e0);
}
bool  PythonQtShell_QUndoView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
}
  return QUndoView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QUndoView::focusInEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::focusInEvent(event0);
}
bool  PythonQtShell_QUndoView::focusNextPrevChild(bool  next0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("focusNextPrevChild");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QUndoView::focusNextPrevChild(next0);
}
void PythonQtShell_QUndoView::focusOutEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::focusOutEvent(event0);
}
bool  PythonQtShell_QUndoView::hasHeightForWidth() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasHeightForWidth");
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
  return QUndoView::hasHeightForWidth();
}
int  PythonQtShell_QUndoView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("heightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
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
}
  return QUndoView::heightForWidth(arg__1);
}
void PythonQtShell_QUndoView::hideEvent(QHideEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::hideEvent(event0);
}
int  PythonQtShell_QUndoView::horizontalOffset() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("horizontalOffset");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("horizontalOffset", methodInfo, result);
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
  return QUndoView::horizontalOffset();
}
void PythonQtShell_QUndoView::horizontalScrollbarAction(int  action0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("horizontalScrollbarAction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&action0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::horizontalScrollbarAction(action0);
}
void PythonQtShell_QUndoView::horizontalScrollbarValueChanged(int  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("horizontalScrollbarValueChanged");
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
  QUndoView::horizontalScrollbarValueChanged(value0);
}
QModelIndex  PythonQtShell_QUndoView::indexAt(const QPoint&  p0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("indexAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QPoint&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
      void* args[2] = {NULL, (void*)&p0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("indexAt", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUndoView::indexAt(p0);
}
void PythonQtShell_QUndoView::initPainter(QPainter*  painter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::initPainter(painter0);
}
void PythonQtShell_QUndoView::inputMethodEvent(QInputMethodEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("inputMethodEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QInputMethodEvent*"};
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
  QUndoView::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QUndoView::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QUndoView::inputMethodQuery(query0);
}
bool  PythonQtShell_QUndoView::isIndexHidden(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isIndexHidden");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isIndexHidden", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUndoView::isIndexHidden(index0);
}
void PythonQtShell_QUndoView::keyPressEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::keyPressEvent(event0);
}
void PythonQtShell_QUndoView::keyReleaseEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::keyReleaseEvent(event0);
}
void PythonQtShell_QUndoView::keyboardSearch(const QString&  search0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("keyboardSearch");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&search0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::keyboardSearch(search0);
}
void PythonQtShell_QUndoView::leaveEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("leaveEvent");
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
  QUndoView::leaveEvent(event0);
}
int  PythonQtShell_QUndoView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metric");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
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
}
  return QUndoView::metric(arg__1);
}
QSize  PythonQtShell_QUndoView::minimumSizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("minimumSizeHint");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumSizeHint", methodInfo, result);
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
  return QUndoView::minimumSizeHint();
}
void PythonQtShell_QUndoView::mouseDoubleClickEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
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
}
  QUndoView::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QUndoView::mouseMoveEvent(QMouseEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::mouseMoveEvent(e0);
}
void PythonQtShell_QUndoView::mousePressEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::mousePressEvent(event0);
}
void PythonQtShell_QUndoView::mouseReleaseEvent(QMouseEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::mouseReleaseEvent(e0);
}
QModelIndex  PythonQtShell_QUndoView::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("moveCursor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "QAbstractItemView::CursorAction" , "Qt::KeyboardModifiers"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QModelIndex returnValue;
      void* args[3] = {NULL, (void*)&cursorAction0, (void*)&modifiers1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("moveCursor", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUndoView::moveCursor(cursorAction0, modifiers1);
}
void PythonQtShell_QUndoView::moveEvent(QMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::moveEvent(event0);
}
bool  PythonQtShell_QUndoView::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nativeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
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
}
  return QUndoView::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QUndoView::paintEngine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QUndoView::paintEngine();
}
void PythonQtShell_QUndoView::paintEvent(QPaintEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::paintEvent(e0);
}
QPaintDevice*  PythonQtShell_QUndoView::redirected(QPoint*  offset0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QUndoView::redirected(offset0);
}
void PythonQtShell_QUndoView::reset()
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
  QUndoView::reset();
}
void PythonQtShell_QUndoView::resizeEvent(QResizeEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::resizeEvent(e0);
}
void PythonQtShell_QUndoView::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("rowsAboutToBeRemoved");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {NULL, (void*)&parent0, (void*)&start1, (void*)&end2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::rowsAboutToBeRemoved(parent0, start1, end2);
}
void PythonQtShell_QUndoView::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("rowsInserted");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {NULL, (void*)&parent0, (void*)&start1, (void*)&end2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::rowsInserted(parent0, start1, end2);
}
void PythonQtShell_QUndoView::scrollContentsBy(int  dx0, int  dy1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QUndoView::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("scrollTo");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "QAbstractItemView::ScrollHint"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&index0, (void*)&hint1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::scrollTo(index0, hint1);
}
void PythonQtShell_QUndoView::selectAll()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("selectAll");
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
  QUndoView::selectAll();
}
QList<QModelIndex >  PythonQtShell_QUndoView::selectedIndexes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("selectedIndexes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QModelIndex >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QModelIndex > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("selectedIndexes", methodInfo, result);
          } else {
            returnValue = *((QList<QModelIndex >*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUndoView::selectedIndexes();
}
void PythonQtShell_QUndoView::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("selectionChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QItemSelection&" , "const QItemSelection&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&selected0, (void*)&deselected1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::selectionChanged(selected0, deselected1);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QUndoView::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("selectionCommand");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QItemSelectionModel::SelectionFlags" , "const QModelIndex&" , "const QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QItemSelectionModel::SelectionFlags returnValue;
      void* args[3] = {NULL, (void*)&index0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("selectionCommand", methodInfo, result);
          } else {
            returnValue = *((QItemSelectionModel::SelectionFlags*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUndoView::selectionCommand(index0, event1);
}
void PythonQtShell_QUndoView::setModel(QAbstractItemModel*  model0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setModel");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractItemModel*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&model0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::setModel(model0);
}
void PythonQtShell_QUndoView::setRootIndex(const QModelIndex&  index0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setRootIndex");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&"};
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
  QUndoView::setRootIndex(index0);
}
void PythonQtShell_QUndoView::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setSelection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QRect&" , "QItemSelectionModel::SelectionFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&rect0, (void*)&command1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::setSelection(rect0, command1);
}
void PythonQtShell_QUndoView::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setSelectionModel");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QItemSelectionModel*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&selectionModel0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::setSelectionModel(selectionModel0);
}
void PythonQtShell_QUndoView::setVisible(bool  visible0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVisible");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&visible0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::setVisible(visible0);
}
void PythonQtShell_QUndoView::setupViewport(QWidget*  viewport0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::setupViewport(viewport0);
}
QPainter*  PythonQtShell_QUndoView::sharedPainter() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QUndoView::sharedPainter();
}
void PythonQtShell_QUndoView::showEvent(QShowEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::showEvent(event0);
}
QSize  PythonQtShell_QUndoView::sizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sizeHint");
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
  return QUndoView::sizeHint();
}
int  PythonQtShell_QUndoView::sizeHintForColumn(int  column0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sizeHintForColumn");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&column0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForColumn", methodInfo, result);
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
  return QUndoView::sizeHintForColumn(column0);
}
int  PythonQtShell_QUndoView::sizeHintForRow(int  row0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sizeHintForRow");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&row0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sizeHintForRow", methodInfo, result);
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
  return QUndoView::sizeHintForRow(row0);
}
void PythonQtShell_QUndoView::startDrag(Qt::DropActions  supportedActions0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startDrag");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&supportedActions0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::startDrag(supportedActions0);
}
void PythonQtShell_QUndoView::tabletEvent(QTabletEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("tabletEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTabletEvent*"};
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
  QUndoView::tabletEvent(event0);
}
void PythonQtShell_QUndoView::timerEvent(QTimerEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::timerEvent(e0);
}
void PythonQtShell_QUndoView::updateEditorData()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateEditorData");
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
  QUndoView::updateEditorData();
}
void PythonQtShell_QUndoView::updateEditorGeometries()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateEditorGeometries");
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
  QUndoView::updateEditorGeometries();
}
void PythonQtShell_QUndoView::updateGeometries()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateGeometries");
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
  QUndoView::updateGeometries();
}
int  PythonQtShell_QUndoView::verticalOffset() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("verticalOffset");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("verticalOffset", methodInfo, result);
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
  return QUndoView::verticalOffset();
}
void PythonQtShell_QUndoView::verticalScrollbarAction(int  action0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("verticalScrollbarAction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&action0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUndoView::verticalScrollbarAction(action0);
}
void PythonQtShell_QUndoView::verticalScrollbarValueChanged(int  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("verticalScrollbarValueChanged");
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
  QUndoView::verticalScrollbarValueChanged(value0);
}
QStyleOptionViewItem  PythonQtShell_QUndoView::viewOptions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("viewOptions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStyleOptionViewItem"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStyleOptionViewItem returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("viewOptions", methodInfo, result);
          } else {
            returnValue = *((QStyleOptionViewItem*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUndoView::viewOptions();
}
bool  PythonQtShell_QUndoView::viewportEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("viewportEvent");
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
}
  return QUndoView::viewportEvent(event0);
}
QSize  PythonQtShell_QUndoView::viewportSizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QUndoView::viewportSizeHint();
}
QRect  PythonQtShell_QUndoView::visualRect(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("visualRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRect" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRect returnValue;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("visualRect", methodInfo, result);
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
}
  return QUndoView::visualRect(index0);
}
QRegion  PythonQtShell_QUndoView::visualRegionForSelection(const QItemSelection&  selection0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("visualRegionForSelection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRegion" , "const QItemSelection&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRegion returnValue;
      void* args[2] = {NULL, (void*)&selection0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("visualRegionForSelection", methodInfo, result);
          } else {
            returnValue = *((QRegion*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUndoView::visualRegionForSelection(selection0);
}
void PythonQtShell_QUndoView::wheelEvent(QWheelEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QUndoView::wheelEvent(e0);
}
QUndoView* PythonQtWrapper_QUndoView::new_QUndoView(QUndoGroup*  group, QWidget*  parent)
{ 
return new PythonQtShell_QUndoView(group, parent); }

QUndoView* PythonQtWrapper_QUndoView::new_QUndoView(QUndoStack*  stack, QWidget*  parent)
{ 
return new PythonQtShell_QUndoView(stack, parent); }

QUndoView* PythonQtWrapper_QUndoView::new_QUndoView(QWidget*  parent)
{ 
return new PythonQtShell_QUndoView(parent); }

const QMetaObject* PythonQtShell_QUndoView::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QUndoView::staticMetaObject);
  } else {
    return &QUndoView::staticMetaObject;
  }
}
int PythonQtShell_QUndoView::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QUndoView::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QIcon  PythonQtWrapper_QUndoView::cleanIcon(QUndoView* theWrappedObject) const
{
  return ( theWrappedObject->cleanIcon());
}

QString  PythonQtWrapper_QUndoView::emptyLabel(QUndoView* theWrappedObject) const
{
  return ( theWrappedObject->emptyLabel());
}

QUndoGroup*  PythonQtWrapper_QUndoView::group(QUndoView* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

void PythonQtWrapper_QUndoView::setCleanIcon(QUndoView* theWrappedObject, const QIcon&  icon)
{
  ( theWrappedObject->setCleanIcon(icon));
}

void PythonQtWrapper_QUndoView::setEmptyLabel(QUndoView* theWrappedObject, const QString&  label)
{
  ( theWrappedObject->setEmptyLabel(label));
}

QUndoStack*  PythonQtWrapper_QUndoView::stack(QUndoView* theWrappedObject) const
{
  return ( theWrappedObject->stack());
}



PythonQtShell_QVBoxLayout::~PythonQtShell_QVBoxLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVBoxLayout::addItem(QLayoutItem*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("addItem");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QLayoutItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QVBoxLayout::addItem(arg__1);
}
void PythonQtShell_QVBoxLayout::childEvent(QChildEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
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
}
  QVBoxLayout::childEvent(e0);
}
QSizePolicy::ControlTypes  PythonQtShell_QVBoxLayout::controlTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("controlTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSizePolicy::ControlTypes"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSizePolicy::ControlTypes returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("controlTypes", methodInfo, result);
          } else {
            returnValue = *((QSizePolicy::ControlTypes*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QVBoxLayout::controlTypes();
}
int  PythonQtShell_QVBoxLayout::count() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("count");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("count", methodInfo, result);
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
  return QVBoxLayout::count();
}
void PythonQtShell_QVBoxLayout::customEvent(QEvent*  event0)
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
  QVBoxLayout::customEvent(event0);
}
bool  PythonQtShell_QVBoxLayout::event(QEvent*  event0)
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
  return QVBoxLayout::event(event0);
}
bool  PythonQtShell_QVBoxLayout::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QVBoxLayout::eventFilter(watched0, event1);
}
Qt::Orientations  PythonQtShell_QVBoxLayout::expandingDirections() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("expandingDirections");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::Orientations"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::Orientations returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("expandingDirections", methodInfo, result);
          } else {
            returnValue = *((Qt::Orientations*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QVBoxLayout::expandingDirections();
}
QRect  PythonQtShell_QVBoxLayout::geometry() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("geometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRect"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRect returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("geometry", methodInfo, result);
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
}
  return QVBoxLayout::geometry();
}
bool  PythonQtShell_QVBoxLayout::hasHeightForWidth() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasHeightForWidth");
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
  return QVBoxLayout::hasHeightForWidth();
}
int  PythonQtShell_QVBoxLayout::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("heightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
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
}
  return QVBoxLayout::heightForWidth(arg__1);
}
int  PythonQtShell_QVBoxLayout::indexOf(QWidget*  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("indexOf");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("indexOf", methodInfo, result);
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
  return QVBoxLayout::indexOf(arg__1);
}
void PythonQtShell_QVBoxLayout::invalidate()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("invalidate");
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
  QVBoxLayout::invalidate();
}
bool  PythonQtShell_QVBoxLayout::isEmpty() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isEmpty");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QVBoxLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QVBoxLayout::itemAt(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("itemAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayoutItem*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QLayoutItem* returnValue;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
          } else {
            returnValue = *((QLayoutItem**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QVBoxLayout::itemAt(arg__1);
}
QLayout*  PythonQtShell_QVBoxLayout::layout()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("layout");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayout*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QLayout* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("layout", methodInfo, result);
          } else {
            returnValue = *((QLayout**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QVBoxLayout::layout();
}
QSize  PythonQtShell_QVBoxLayout::maximumSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("maximumSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("maximumSize", methodInfo, result);
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
  return QVBoxLayout::maximumSize();
}
int  PythonQtShell_QVBoxLayout::minimumHeightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("minimumHeightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumHeightForWidth", methodInfo, result);
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
  return QVBoxLayout::minimumHeightForWidth(arg__1);
}
QSize  PythonQtShell_QVBoxLayout::minimumSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("minimumSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumSize", methodInfo, result);
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
  return QVBoxLayout::minimumSize();
}
void PythonQtShell_QVBoxLayout::setGeometry(const QRect&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setGeometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QRect&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QVBoxLayout::setGeometry(arg__1);
}
QSize  PythonQtShell_QVBoxLayout::sizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sizeHint");
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
  return QVBoxLayout::sizeHint();
}
QLayoutItem*  PythonQtShell_QVBoxLayout::takeAt(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("takeAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayoutItem*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QLayoutItem* returnValue;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("takeAt", methodInfo, result);
          } else {
            returnValue = *((QLayoutItem**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QVBoxLayout::takeAt(arg__1);
}
void PythonQtShell_QVBoxLayout::timerEvent(QTimerEvent*  event0)
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
  QVBoxLayout::timerEvent(event0);
}
QVBoxLayout* PythonQtWrapper_QVBoxLayout::new_QVBoxLayout()
{ 
return new PythonQtShell_QVBoxLayout(); }

QVBoxLayout* PythonQtWrapper_QVBoxLayout::new_QVBoxLayout(QWidget*  parent)
{ 
return new PythonQtShell_QVBoxLayout(parent); }

const QMetaObject* PythonQtShell_QVBoxLayout::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QVBoxLayout::staticMetaObject);
  } else {
    return &QVBoxLayout::staticMetaObject;
  }
}
int PythonQtShell_QVBoxLayout::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QVBoxLayout::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


PythonQtShell_QValidator::~PythonQtShell_QValidator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QValidator::childEvent(QChildEvent*  event0)
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
  QValidator::childEvent(event0);
}
void PythonQtShell_QValidator::customEvent(QEvent*  event0)
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
  QValidator::customEvent(event0);
}
bool  PythonQtShell_QValidator::event(QEvent*  event0)
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
  return QValidator::event(event0);
}
bool  PythonQtShell_QValidator::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QValidator::eventFilter(watched0, event1);
}
void PythonQtShell_QValidator::fixup(QString&  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QValidator::fixup(arg__1);
}
void PythonQtShell_QValidator::timerEvent(QTimerEvent*  event0)
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
  QValidator::timerEvent(event0);
}
QValidator::State  PythonQtShell_QValidator::validate(QString&  arg__1, int&  arg__2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("validate");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QValidator::State" , "QString&" , "int&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QValidator::State returnValue;
      void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
}
  return QValidator::State();
}
QValidator* PythonQtWrapper_QValidator::new_QValidator(QObject*  parent)
{ 
return new PythonQtShell_QValidator(parent); }

const QMetaObject* PythonQtShell_QValidator::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QValidator::staticMetaObject);
  } else {
    return &QValidator::staticMetaObject;
  }
}
int PythonQtShell_QValidator::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QValidator::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QValidator::fixup(QValidator* theWrappedObject, QString&  arg__1) const
{
  ( theWrappedObject->fixup(arg__1));
}

QLocale  PythonQtWrapper_QValidator::locale(QValidator* theWrappedObject) const
{
  return ( theWrappedObject->locale());
}

void PythonQtWrapper_QValidator::setLocale(QValidator* theWrappedObject, const QLocale&  locale)
{
  ( theWrappedObject->setLocale(locale));
}

QValidator::State  PythonQtWrapper_QValidator::validate(QValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const
{
  return ( theWrappedObject->validate(arg__1, arg__2));
}



QVector2D* PythonQtWrapper_QVector2D::new_QVector2D()
{ 
return new QVector2D(); }

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D(const QPoint&  point)
{ 
return new QVector2D(point); }

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D(const QPointF&  point)
{ 
return new QVector2D(point); }

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D(const QVector3D&  vector)
{ 
return new QVector2D(vector); }

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D(const QVector4D&  vector)
{ 
return new QVector2D(vector); }

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D(float  xpos, float  ypos)
{ 
return new QVector2D(xpos, ypos); }

float  PythonQtWrapper_QVector2D::distanceToLine(QVector2D* theWrappedObject, const QVector2D&  point, const QVector2D&  direction) const
{
  return ( theWrappedObject->distanceToLine(point, direction));
}

float  PythonQtWrapper_QVector2D::distanceToPoint(QVector2D* theWrappedObject, const QVector2D&  point) const
{
  return ( theWrappedObject->distanceToPoint(point));
}

float  PythonQtWrapper_QVector2D::static_QVector2D_dotProduct(const QVector2D&  v1, const QVector2D&  v2)
{
  return (QVector2D::dotProduct(v1, v2));
}

bool  PythonQtWrapper_QVector2D::isNull(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

float  PythonQtWrapper_QVector2D::length(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

float  PythonQtWrapper_QVector2D::lengthSquared(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->lengthSquared());
}

void PythonQtWrapper_QVector2D::normalize(QVector2D* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

QVector2D  PythonQtWrapper_QVector2D::normalized(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

const QVector2D  PythonQtWrapper_QVector2D::__mul__(QVector2D* theWrappedObject, const QVector2D&  v2)
{
  return ( (*theWrappedObject)* v2);
}

const QVector2D  PythonQtWrapper_QVector2D::__mul__(QVector2D* theWrappedObject, float  factor)
{
  return ( (*theWrappedObject)* factor);
}

QVector2D*  PythonQtWrapper_QVector2D::__imul__(QVector2D* theWrappedObject, const QVector2D&  vector)
{
  return &( (*theWrappedObject)*= vector);
}

QVector2D*  PythonQtWrapper_QVector2D::__imul__(QVector2D* theWrappedObject, float  factor)
{
  return &( (*theWrappedObject)*= factor);
}

const QVector2D  PythonQtWrapper_QVector2D::__add__(QVector2D* theWrappedObject, const QVector2D&  v2)
{
  return ( (*theWrappedObject)+ v2);
}

QVector2D*  PythonQtWrapper_QVector2D::__iadd__(QVector2D* theWrappedObject, const QVector2D&  vector)
{
  return &( (*theWrappedObject)+= vector);
}

const QVector2D  PythonQtWrapper_QVector2D::__sub__(QVector2D* theWrappedObject, const QVector2D&  v2)
{
  return ( (*theWrappedObject)- v2);
}

QVector2D*  PythonQtWrapper_QVector2D::__isub__(QVector2D* theWrappedObject, const QVector2D&  vector)
{
  return &( (*theWrappedObject)-= vector);
}

const QVector2D  PythonQtWrapper_QVector2D::__div__(QVector2D* theWrappedObject, const QVector2D&  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

const QVector2D  PythonQtWrapper_QVector2D::__div__(QVector2D* theWrappedObject, float  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QVector2D*  PythonQtWrapper_QVector2D::__idiv__(QVector2D* theWrappedObject, const QVector2D&  vector)
{
  return &( (*theWrappedObject)/= vector);
}

QVector2D*  PythonQtWrapper_QVector2D::__idiv__(QVector2D* theWrappedObject, float  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QVector2D::writeTo(QVector2D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QVector2D::__eq__(QVector2D* theWrappedObject, const QVector2D&  v2)
{
  return ( (*theWrappedObject)== v2);
}

void PythonQtWrapper_QVector2D::readFrom(QVector2D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

float  PythonQtWrapper_QVector2D::operator_subscript(QVector2D* theWrappedObject, int  i) const
{
  return ( (*theWrappedObject)[i]);
}

void PythonQtWrapper_QVector2D::setX(QVector2D* theWrappedObject, float  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QVector2D::setY(QVector2D* theWrappedObject, float  y)
{
  ( theWrappedObject->setY(y));
}

QPoint  PythonQtWrapper_QVector2D::toPoint(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->toPoint());
}

QPointF  PythonQtWrapper_QVector2D::toPointF(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->toPointF());
}

QVector3D  PythonQtWrapper_QVector2D::toVector3D(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->toVector3D());
}

QVector4D  PythonQtWrapper_QVector2D::toVector4D(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->toVector4D());
}

float  PythonQtWrapper_QVector2D::x(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

float  PythonQtWrapper_QVector2D::y(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QString PythonQtWrapper_QVector2D::py_toString(QVector2D* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QVector3D* PythonQtWrapper_QVector3D::new_QVector3D()
{ 
return new QVector3D(); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(const QPoint&  point)
{ 
return new QVector3D(point); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(const QPointF&  point)
{ 
return new QVector3D(point); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(const QVector2D&  vector)
{ 
return new QVector3D(vector); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(const QVector2D&  vector, float  zpos)
{ 
return new QVector3D(vector, zpos); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(const QVector4D&  vector)
{ 
return new QVector3D(vector); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(float  xpos, float  ypos, float  zpos)
{ 
return new QVector3D(xpos, ypos, zpos); }

QVector3D  PythonQtWrapper_QVector3D::static_QVector3D_crossProduct(const QVector3D&  v1, const QVector3D&  v2)
{
  return (QVector3D::crossProduct(v1, v2));
}

float  PythonQtWrapper_QVector3D::distanceToLine(QVector3D* theWrappedObject, const QVector3D&  point, const QVector3D&  direction) const
{
  return ( theWrappedObject->distanceToLine(point, direction));
}

float  PythonQtWrapper_QVector3D::distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane, const QVector3D&  normal) const
{
  return ( theWrappedObject->distanceToPlane(plane, normal));
}

float  PythonQtWrapper_QVector3D::distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane1, const QVector3D&  plane2, const QVector3D&  plane3) const
{
  return ( theWrappedObject->distanceToPlane(plane1, plane2, plane3));
}

float  PythonQtWrapper_QVector3D::distanceToPoint(QVector3D* theWrappedObject, const QVector3D&  point) const
{
  return ( theWrappedObject->distanceToPoint(point));
}

float  PythonQtWrapper_QVector3D::static_QVector3D_dotProduct(const QVector3D&  v1, const QVector3D&  v2)
{
  return (QVector3D::dotProduct(v1, v2));
}

bool  PythonQtWrapper_QVector3D::isNull(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

float  PythonQtWrapper_QVector3D::length(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

float  PythonQtWrapper_QVector3D::lengthSquared(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->lengthSquared());
}

QVector3D  PythonQtWrapper_QVector3D::static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2)
{
  return (QVector3D::normal(v1, v2));
}

QVector3D  PythonQtWrapper_QVector3D::static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2, const QVector3D&  v3)
{
  return (QVector3D::normal(v1, v2, v3));
}

void PythonQtWrapper_QVector3D::normalize(QVector3D* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

QVector3D  PythonQtWrapper_QVector3D::normalized(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

QVector3D  PythonQtWrapper_QVector3D::__mul__(QVector3D* theWrappedObject, const QMatrix4x4&  matrix)
{
  return ( (*theWrappedObject)* matrix);
}

const QVector3D  PythonQtWrapper_QVector3D::__mul__(QVector3D* theWrappedObject, const QVector3D&  v2)
{
  return ( (*theWrappedObject)* v2);
}

const QVector3D  PythonQtWrapper_QVector3D::__mul__(QVector3D* theWrappedObject, float  factor)
{
  return ( (*theWrappedObject)* factor);
}

QVector3D*  PythonQtWrapper_QVector3D::__imul__(QVector3D* theWrappedObject, const QVector3D&  vector)
{
  return &( (*theWrappedObject)*= vector);
}

QVector3D*  PythonQtWrapper_QVector3D::__imul__(QVector3D* theWrappedObject, float  factor)
{
  return &( (*theWrappedObject)*= factor);
}

const QVector3D  PythonQtWrapper_QVector3D::__add__(QVector3D* theWrappedObject, const QVector3D&  v2)
{
  return ( (*theWrappedObject)+ v2);
}

QVector3D*  PythonQtWrapper_QVector3D::__iadd__(QVector3D* theWrappedObject, const QVector3D&  vector)
{
  return &( (*theWrappedObject)+= vector);
}

const QVector3D  PythonQtWrapper_QVector3D::__sub__(QVector3D* theWrappedObject, const QVector3D&  v2)
{
  return ( (*theWrappedObject)- v2);
}

QVector3D*  PythonQtWrapper_QVector3D::__isub__(QVector3D* theWrappedObject, const QVector3D&  vector)
{
  return &( (*theWrappedObject)-= vector);
}

const QVector3D  PythonQtWrapper_QVector3D::__div__(QVector3D* theWrappedObject, const QVector3D&  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

const QVector3D  PythonQtWrapper_QVector3D::__div__(QVector3D* theWrappedObject, float  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QVector3D*  PythonQtWrapper_QVector3D::__idiv__(QVector3D* theWrappedObject, const QVector3D&  vector)
{
  return &( (*theWrappedObject)/= vector);
}

QVector3D*  PythonQtWrapper_QVector3D::__idiv__(QVector3D* theWrappedObject, float  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QVector3D::writeTo(QVector3D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QVector3D::__eq__(QVector3D* theWrappedObject, const QVector3D&  v2)
{
  return ( (*theWrappedObject)== v2);
}

void PythonQtWrapper_QVector3D::readFrom(QVector3D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

float  PythonQtWrapper_QVector3D::operator_subscript(QVector3D* theWrappedObject, int  i) const
{
  return ( (*theWrappedObject)[i]);
}

QVector3D  PythonQtWrapper_QVector3D::project(QVector3D* theWrappedObject, const QMatrix4x4&  modelView, const QMatrix4x4&  projection, const QRect&  viewport) const
{
  return ( theWrappedObject->project(modelView, projection, viewport));
}

void PythonQtWrapper_QVector3D::setX(QVector3D* theWrappedObject, float  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QVector3D::setY(QVector3D* theWrappedObject, float  y)
{
  ( theWrappedObject->setY(y));
}

void PythonQtWrapper_QVector3D::setZ(QVector3D* theWrappedObject, float  z)
{
  ( theWrappedObject->setZ(z));
}

QPoint  PythonQtWrapper_QVector3D::toPoint(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->toPoint());
}

QPointF  PythonQtWrapper_QVector3D::toPointF(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->toPointF());
}

QVector2D  PythonQtWrapper_QVector3D::toVector2D(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->toVector2D());
}

QVector4D  PythonQtWrapper_QVector3D::toVector4D(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->toVector4D());
}

QVector3D  PythonQtWrapper_QVector3D::unproject(QVector3D* theWrappedObject, const QMatrix4x4&  modelView, const QMatrix4x4&  projection, const QRect&  viewport) const
{
  return ( theWrappedObject->unproject(modelView, projection, viewport));
}

float  PythonQtWrapper_QVector3D::x(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

float  PythonQtWrapper_QVector3D::y(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

float  PythonQtWrapper_QVector3D::z(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->z());
}

QString PythonQtWrapper_QVector3D::py_toString(QVector3D* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QVector4D* PythonQtWrapper_QVector4D::new_QVector4D()
{ 
return new QVector4D(); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QPoint&  point)
{ 
return new QVector4D(point); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QPointF&  point)
{ 
return new QVector4D(point); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QVector2D&  vector)
{ 
return new QVector4D(vector); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QVector2D&  vector, float  zpos, float  wpos)
{ 
return new QVector4D(vector, zpos, wpos); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QVector3D&  vector)
{ 
return new QVector4D(vector); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QVector3D&  vector, float  wpos)
{ 
return new QVector4D(vector, wpos); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(float  xpos, float  ypos, float  zpos, float  wpos)
{ 
return new QVector4D(xpos, ypos, zpos, wpos); }

float  PythonQtWrapper_QVector4D::static_QVector4D_dotProduct(const QVector4D&  v1, const QVector4D&  v2)
{
  return (QVector4D::dotProduct(v1, v2));
}

bool  PythonQtWrapper_QVector4D::isNull(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

float  PythonQtWrapper_QVector4D::length(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

float  PythonQtWrapper_QVector4D::lengthSquared(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->lengthSquared());
}

void PythonQtWrapper_QVector4D::normalize(QVector4D* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

QVector4D  PythonQtWrapper_QVector4D::normalized(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

QVector4D  PythonQtWrapper_QVector4D::__mul__(QVector4D* theWrappedObject, const QMatrix4x4&  matrix)
{
  return ( (*theWrappedObject)* matrix);
}

const QVector4D  PythonQtWrapper_QVector4D::__mul__(QVector4D* theWrappedObject, const QVector4D&  v2)
{
  return ( (*theWrappedObject)* v2);
}

const QVector4D  PythonQtWrapper_QVector4D::__mul__(QVector4D* theWrappedObject, float  factor)
{
  return ( (*theWrappedObject)* factor);
}

QVector4D*  PythonQtWrapper_QVector4D::__imul__(QVector4D* theWrappedObject, const QVector4D&  vector)
{
  return &( (*theWrappedObject)*= vector);
}

QVector4D*  PythonQtWrapper_QVector4D::__imul__(QVector4D* theWrappedObject, float  factor)
{
  return &( (*theWrappedObject)*= factor);
}

const QVector4D  PythonQtWrapper_QVector4D::__add__(QVector4D* theWrappedObject, const QVector4D&  v2)
{
  return ( (*theWrappedObject)+ v2);
}

QVector4D*  PythonQtWrapper_QVector4D::__iadd__(QVector4D* theWrappedObject, const QVector4D&  vector)
{
  return &( (*theWrappedObject)+= vector);
}

const QVector4D  PythonQtWrapper_QVector4D::__sub__(QVector4D* theWrappedObject, const QVector4D&  v2)
{
  return ( (*theWrappedObject)- v2);
}

QVector4D*  PythonQtWrapper_QVector4D::__isub__(QVector4D* theWrappedObject, const QVector4D&  vector)
{
  return &( (*theWrappedObject)-= vector);
}

const QVector4D  PythonQtWrapper_QVector4D::__div__(QVector4D* theWrappedObject, const QVector4D&  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

const QVector4D  PythonQtWrapper_QVector4D::__div__(QVector4D* theWrappedObject, float  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QVector4D*  PythonQtWrapper_QVector4D::__idiv__(QVector4D* theWrappedObject, const QVector4D&  vector)
{
  return &( (*theWrappedObject)/= vector);
}

QVector4D*  PythonQtWrapper_QVector4D::__idiv__(QVector4D* theWrappedObject, float  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QVector4D::writeTo(QVector4D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QVector4D::__eq__(QVector4D* theWrappedObject, const QVector4D&  v2)
{
  return ( (*theWrappedObject)== v2);
}

void PythonQtWrapper_QVector4D::readFrom(QVector4D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

float  PythonQtWrapper_QVector4D::operator_subscript(QVector4D* theWrappedObject, int  i) const
{
  return ( (*theWrappedObject)[i]);
}

void PythonQtWrapper_QVector4D::setW(QVector4D* theWrappedObject, float  w)
{
  ( theWrappedObject->setW(w));
}

void PythonQtWrapper_QVector4D::setX(QVector4D* theWrappedObject, float  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QVector4D::setY(QVector4D* theWrappedObject, float  y)
{
  ( theWrappedObject->setY(y));
}

void PythonQtWrapper_QVector4D::setZ(QVector4D* theWrappedObject, float  z)
{
  ( theWrappedObject->setZ(z));
}

QPoint  PythonQtWrapper_QVector4D::toPoint(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toPoint());
}

QPointF  PythonQtWrapper_QVector4D::toPointF(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toPointF());
}

QVector2D  PythonQtWrapper_QVector4D::toVector2D(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toVector2D());
}

QVector2D  PythonQtWrapper_QVector4D::toVector2DAffine(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toVector2DAffine());
}

QVector3D  PythonQtWrapper_QVector4D::toVector3D(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toVector3D());
}

QVector3D  PythonQtWrapper_QVector4D::toVector3DAffine(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toVector3DAffine());
}

float  PythonQtWrapper_QVector4D::w(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->w());
}

float  PythonQtWrapper_QVector4D::x(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

float  PythonQtWrapper_QVector4D::y(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

float  PythonQtWrapper_QVector4D::z(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->z());
}

QString PythonQtWrapper_QVector4D::py_toString(QVector4D* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QAction*  PythonQtWrapper_QWhatsThis::static_QWhatsThis_createAction(QObject*  parent)
{
  return (QWhatsThis::createAction(parent));
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_enterWhatsThisMode()
{
  (QWhatsThis::enterWhatsThisMode());
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_hideText()
{
  (QWhatsThis::hideText());
}

bool  PythonQtWrapper_QWhatsThis::static_QWhatsThis_inWhatsThisMode()
{
  return (QWhatsThis::inWhatsThisMode());
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_leaveWhatsThisMode()
{
  (QWhatsThis::leaveWhatsThisMode());
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_showText(const QPoint&  pos, const QString&  text, QWidget*  w)
{
  (QWhatsThis::showText(pos, text, w));
}



QWhatsThisClickedEvent* PythonQtWrapper_QWhatsThisClickedEvent::new_QWhatsThisClickedEvent(const QString&  href)
{ 
return new QWhatsThisClickedEvent(href); }

QString  PythonQtWrapper_QWhatsThisClickedEvent::href(QWhatsThisClickedEvent* theWrappedObject) const
{
  return ( theWrappedObject->href());
}



PythonQtShell_QWheelEvent::~PythonQtShell_QWheelEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWheelEvent* PythonQtWrapper_QWheelEvent::new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers); }

QWheelEvent* PythonQtWrapper_QWheelEvent::new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase)
{ 
return new PythonQtShell_QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase); }

QWheelEvent* PythonQtWrapper_QWheelEvent::new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase, Qt::MouseEventSource  source)
{ 
return new PythonQtShell_QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source); }

QWheelEvent* PythonQtWrapper_QWheelEvent::new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient)
{ 
return new PythonQtShell_QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient); }

QWheelEvent* PythonQtWrapper_QWheelEvent::new_QWheelEvent(const QPointF&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient)
{ 
return new PythonQtShell_QWheelEvent(pos, delta, buttons, modifiers, orient); }

QPoint  PythonQtWrapper_QWheelEvent::angleDelta(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->angleDelta());
}

Qt::MouseButtons  PythonQtWrapper_QWheelEvent::buttons(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

int  PythonQtWrapper_QWheelEvent::delta(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->delta());
}

QPoint  PythonQtWrapper_QWheelEvent::globalPos(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalPos());
}

const QPointF*  PythonQtWrapper_QWheelEvent::globalPosF(QWheelEvent* theWrappedObject) const
{
  return &( theWrappedObject->globalPosF());
}

int  PythonQtWrapper_QWheelEvent::globalX(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalX());
}

int  PythonQtWrapper_QWheelEvent::globalY(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalY());
}

Qt::Orientation  PythonQtWrapper_QWheelEvent::orientation(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

Qt::ScrollPhase  PythonQtWrapper_QWheelEvent::phase(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->phase());
}

QPoint  PythonQtWrapper_QWheelEvent::pixelDelta(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->pixelDelta());
}

QPoint  PythonQtWrapper_QWheelEvent::pos(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

const QPointF*  PythonQtWrapper_QWheelEvent::posF(QWheelEvent* theWrappedObject) const
{
  return &( theWrappedObject->posF());
}

Qt::MouseEventSource  PythonQtWrapper_QWheelEvent::source(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->source());
}

int  PythonQtWrapper_QWheelEvent::x(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QWheelEvent::y(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



PythonQtShell_QWidget::~PythonQtShell_QWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWidget::actionEvent(QActionEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::actionEvent(event0);
}
void PythonQtShell_QWidget::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::changeEvent(arg__1);
}
void PythonQtShell_QWidget::childEvent(QChildEvent*  event0)
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
  QWidget::childEvent(event0);
}
void PythonQtShell_QWidget::closeEvent(QCloseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::closeEvent(event0);
}
void PythonQtShell_QWidget::contextMenuEvent(QContextMenuEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::contextMenuEvent(event0);
}
void PythonQtShell_QWidget::customEvent(QEvent*  event0)
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
  QWidget::customEvent(event0);
}
int  PythonQtShell_QWidget::devType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("devType");
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
  return QWidget::devType();
}
void PythonQtShell_QWidget::dragEnterEvent(QDragEnterEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QWidget::dragEnterEvent(event0);
}
void PythonQtShell_QWidget::dragLeaveEvent(QDragLeaveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
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
  QWidget::dragLeaveEvent(event0);
}
void PythonQtShell_QWidget::dragMoveEvent(QDragMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragMoveEvent*"};
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
  QWidget::dragMoveEvent(event0);
}
void PythonQtShell_QWidget::dropEvent(QDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDropEvent*"};
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
  QWidget::dropEvent(event0);
}
void PythonQtShell_QWidget::enterEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("enterEvent");
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
  QWidget::enterEvent(event0);
}
bool  PythonQtShell_QWidget::event(QEvent*  event0)
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
  return QWidget::event(event0);
}
bool  PythonQtShell_QWidget::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QWidget::eventFilter(watched0, event1);
}
void PythonQtShell_QWidget::focusInEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::focusInEvent(event0);
}
bool  PythonQtShell_QWidget::focusNextPrevChild(bool  next0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("focusNextPrevChild");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QWidget::focusNextPrevChild(next0);
}
void PythonQtShell_QWidget::focusOutEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::focusOutEvent(event0);
}
bool  PythonQtShell_QWidget::hasHeightForWidth() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasHeightForWidth");
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
  return QWidget::hasHeightForWidth();
}
int  PythonQtShell_QWidget::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("heightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
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
}
  return QWidget::heightForWidth(arg__1);
}
void PythonQtShell_QWidget::hideEvent(QHideEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::hideEvent(event0);
}
void PythonQtShell_QWidget::initPainter(QPainter*  painter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::initPainter(painter0);
}
void PythonQtShell_QWidget::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QWidget::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWidget::inputMethodQuery(arg__1);
}
void PythonQtShell_QWidget::keyPressEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::keyPressEvent(event0);
}
void PythonQtShell_QWidget::keyReleaseEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::keyReleaseEvent(event0);
}
void PythonQtShell_QWidget::leaveEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("leaveEvent");
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
  QWidget::leaveEvent(event0);
}
int  PythonQtShell_QWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metric");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
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
}
  return QWidget::metric(arg__1);
}
QSize  PythonQtShell_QWidget::minimumSizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWidget::minimumSizeHint();
}
void PythonQtShell_QWidget::mouseDoubleClickEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
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
}
  QWidget::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QWidget::mouseMoveEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::mouseMoveEvent(event0);
}
void PythonQtShell_QWidget::mousePressEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::mousePressEvent(event0);
}
void PythonQtShell_QWidget::mouseReleaseEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::mouseReleaseEvent(event0);
}
void PythonQtShell_QWidget::moveEvent(QMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::moveEvent(event0);
}
bool  PythonQtShell_QWidget::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nativeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
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
}
  return QWidget::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QWidget::paintEngine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWidget::paintEngine();
}
void PythonQtShell_QWidget::paintEvent(QPaintEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QWidget::redirected(QPoint*  offset0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWidget::redirected(offset0);
}
void PythonQtShell_QWidget::resizeEvent(QResizeEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::resizeEvent(event0);
}
void PythonQtShell_QWidget::setVisible(bool  visible0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVisible");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&visible0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWidget::setVisible(visible0);
}
QPainter*  PythonQtShell_QWidget::sharedPainter() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWidget::sharedPainter();
}
void PythonQtShell_QWidget::showEvent(QShowEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::showEvent(event0);
}
QSize  PythonQtShell_QWidget::sizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWidget::sizeHint();
}
void PythonQtShell_QWidget::tabletEvent(QTabletEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("tabletEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTabletEvent*"};
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
  QWidget::tabletEvent(event0);
}
void PythonQtShell_QWidget::timerEvent(QTimerEvent*  event0)
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
  QWidget::timerEvent(event0);
}
void PythonQtShell_QWidget::wheelEvent(QWheelEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWidget::wheelEvent(event0);
}
QWidget* PythonQtWrapper_QWidget::new_QWidget(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QWidget(parent, f); }

const QMetaObject* PythonQtShell_QWidget::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWidget::staticMetaObject);
  } else {
    return &QWidget::staticMetaObject;
  }
}
int PythonQtShell_QWidget::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWidget::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QWidget::acceptDrops(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->acceptDrops());
}

QString  PythonQtWrapper_QWidget::accessibleDescription(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->accessibleDescription());
}

QString  PythonQtWrapper_QWidget::accessibleName(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->accessibleName());
}

void PythonQtWrapper_QWidget::actionEvent(QWidget* theWrappedObject, QActionEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_actionEvent(event));
}

QList<QAction* >  PythonQtWrapper_QWidget::actions(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->actions());
}

void PythonQtWrapper_QWidget::activateWindow(QWidget* theWrappedObject)
{
  ( theWrappedObject->activateWindow());
}

void PythonQtWrapper_QWidget::addAction(QWidget* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->addAction(action));
}

void PythonQtWrapper_QWidget::addActions(QWidget* theWrappedObject, QList<QAction* >  actions)
{
  ( theWrappedObject->addActions(actions));
}

void PythonQtWrapper_QWidget::adjustSize(QWidget* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

bool  PythonQtWrapper_QWidget::autoFillBackground(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->autoFillBackground());
}

QPalette::ColorRole  PythonQtWrapper_QWidget::backgroundRole(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->backgroundRole());
}

QBackingStore*  PythonQtWrapper_QWidget::backingStore(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->backingStore());
}

QSize  PythonQtWrapper_QWidget::baseSize(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->baseSize());
}

void PythonQtWrapper_QWidget::changeEvent(QWidget* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_changeEvent(arg__1));
}

QWidget*  PythonQtWrapper_QWidget::childAt(QWidget* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->childAt(p));
}

QWidget*  PythonQtWrapper_QWidget::childAt(QWidget* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->childAt(x, y));
}

QRect  PythonQtWrapper_QWidget::childrenRect(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->childrenRect());
}

QRegion  PythonQtWrapper_QWidget::childrenRegion(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->childrenRegion());
}

void PythonQtWrapper_QWidget::clearFocus(QWidget* theWrappedObject)
{
  ( theWrappedObject->clearFocus());
}

void PythonQtWrapper_QWidget::clearMask(QWidget* theWrappedObject)
{
  ( theWrappedObject->clearMask());
}

void PythonQtWrapper_QWidget::closeEvent(QWidget* theWrappedObject, QCloseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_closeEvent(event));
}

QMargins  PythonQtWrapper_QWidget::contentsMargins(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->contentsMargins());
}

QRect  PythonQtWrapper_QWidget::contentsRect(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->contentsRect());
}

void PythonQtWrapper_QWidget::contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_contextMenuEvent(event));
}

Qt::ContextMenuPolicy  PythonQtWrapper_QWidget::contextMenuPolicy(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->contextMenuPolicy());
}

void PythonQtWrapper_QWidget::createWinId(QWidget* theWrappedObject)
{
  ( theWrappedObject->createWinId());
}

QWidget*  PythonQtWrapper_QWidget::static_QWidget_createWindowContainer(QWindow*  window, QWidget*  parent, Qt::WindowFlags  flags)
{
  return (QWidget::createWindowContainer(window, parent, flags));
}

QCursor  PythonQtWrapper_QWidget::cursor(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->cursor());
}

void PythonQtWrapper_QWidget::destroy(QWidget* theWrappedObject, bool  destroyWindow, bool  destroySubWindows)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_destroy(destroyWindow, destroySubWindows));
}

void PythonQtWrapper_QWidget::dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QWidget::dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

void PythonQtWrapper_QWidget::dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QWidget::dropEvent(QWidget* theWrappedObject, QDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_dropEvent(event));
}

WId  PythonQtWrapper_QWidget::effectiveWinId(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->effectiveWinId());
}

void PythonQtWrapper_QWidget::ensurePolished(QWidget* theWrappedObject) const
{
  ( theWrappedObject->ensurePolished());
}

void PythonQtWrapper_QWidget::enterEvent(QWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_enterEvent(event));
}

void PythonQtWrapper_QWidget::focusInEvent(QWidget* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_focusInEvent(event));
}

bool  PythonQtWrapper_QWidget::focusNextChild(QWidget* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_focusNextChild());
}

bool  PythonQtWrapper_QWidget::focusNextPrevChild(QWidget* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QWidget::focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_focusOutEvent(event));
}

Qt::FocusPolicy  PythonQtWrapper_QWidget::focusPolicy(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->focusPolicy());
}

bool  PythonQtWrapper_QWidget::focusPreviousChild(QWidget* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_focusPreviousChild());
}

QWidget*  PythonQtWrapper_QWidget::focusProxy(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->focusProxy());
}

QWidget*  PythonQtWrapper_QWidget::focusWidget(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->focusWidget());
}

const QFont*  PythonQtWrapper_QWidget::font(QWidget* theWrappedObject) const
{
  return &( theWrappedObject->font());
}

QFontInfo  PythonQtWrapper_QWidget::fontInfo(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->fontInfo());
}

QFontMetrics  PythonQtWrapper_QWidget::fontMetrics(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->fontMetrics());
}

QPalette::ColorRole  PythonQtWrapper_QWidget::foregroundRole(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->foregroundRole());
}

QRect  PythonQtWrapper_QWidget::frameGeometry(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->frameGeometry());
}

QSize  PythonQtWrapper_QWidget::frameSize(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->frameSize());
}

const QRect*  PythonQtWrapper_QWidget::geometry(QWidget* theWrappedObject) const
{
  return &( theWrappedObject->geometry());
}

QPixmap  PythonQtWrapper_QWidget::grab(QWidget* theWrappedObject, const QRect&  rectangle)
{
  return ( theWrappedObject->grab(rectangle));
}

void PythonQtWrapper_QWidget::grabGesture(QWidget* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags)
{
  ( theWrappedObject->grabGesture(type, flags));
}

void PythonQtWrapper_QWidget::grabKeyboard(QWidget* theWrappedObject)
{
  ( theWrappedObject->grabKeyboard());
}

void PythonQtWrapper_QWidget::grabMouse(QWidget* theWrappedObject)
{
  ( theWrappedObject->grabMouse());
}

void PythonQtWrapper_QWidget::grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1)
{
  ( theWrappedObject->grabMouse(arg__1));
}

int  PythonQtWrapper_QWidget::grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context)
{
  return ( theWrappedObject->grabShortcut(key, context));
}

QGraphicsEffect*  PythonQtWrapper_QWidget::graphicsEffect(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->graphicsEffect());
}

QGraphicsProxyWidget*  PythonQtWrapper_QWidget::graphicsProxyWidget(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->graphicsProxyWidget());
}

bool  PythonQtWrapper_QWidget::hasFocus(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

bool  PythonQtWrapper_QWidget::hasHeightForWidth(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->hasHeightForWidth());
}

bool  PythonQtWrapper_QWidget::hasMouseTracking(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->hasMouseTracking());
}

int  PythonQtWrapper_QWidget::height(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

int  PythonQtWrapper_QWidget::heightForWidth(QWidget* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->heightForWidth(arg__1));
}

void PythonQtWrapper_QWidget::hideEvent(QWidget* theWrappedObject, QHideEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_hideEvent(event));
}

void PythonQtWrapper_QWidget::inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_inputMethodEvent(arg__1));
}

Qt::InputMethodHints  PythonQtWrapper_QWidget::inputMethodHints(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->inputMethodHints());
}

QVariant  PythonQtWrapper_QWidget::inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const
{
  return ( theWrappedObject->inputMethodQuery(arg__1));
}

void PythonQtWrapper_QWidget::insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action)
{
  ( theWrappedObject->insertAction(before, action));
}

void PythonQtWrapper_QWidget::insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions)
{
  ( theWrappedObject->insertActions(before, actions));
}

bool  PythonQtWrapper_QWidget::isActiveWindow(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isActiveWindow());
}

bool  PythonQtWrapper_QWidget::isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const
{
  return ( theWrappedObject->isAncestorOf(child));
}

bool  PythonQtWrapper_QWidget::isEnabled(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

bool  PythonQtWrapper_QWidget::isEnabledTo(QWidget* theWrappedObject, const QWidget*  arg__1) const
{
  return ( theWrappedObject->isEnabledTo(arg__1));
}

bool  PythonQtWrapper_QWidget::isFullScreen(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isFullScreen());
}

bool  PythonQtWrapper_QWidget::isHidden(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isHidden());
}

bool  PythonQtWrapper_QWidget::isLeftToRight(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isLeftToRight());
}

bool  PythonQtWrapper_QWidget::isMaximized(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isMaximized());
}

bool  PythonQtWrapper_QWidget::isMinimized(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isMinimized());
}

bool  PythonQtWrapper_QWidget::isModal(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isModal());
}

bool  PythonQtWrapper_QWidget::isRightToLeft(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isRightToLeft());
}

bool  PythonQtWrapper_QWidget::isVisible(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

bool  PythonQtWrapper_QWidget::isVisibleTo(QWidget* theWrappedObject, const QWidget*  arg__1) const
{
  return ( theWrappedObject->isVisibleTo(arg__1));
}

bool  PythonQtWrapper_QWidget::isWindow(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isWindow());
}

bool  PythonQtWrapper_QWidget::isWindowModified(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->isWindowModified());
}

void PythonQtWrapper_QWidget::keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QWidget::keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

QWidget*  PythonQtWrapper_QWidget::static_QWidget_keyboardGrabber()
{
  return (QWidget::keyboardGrabber());
}

QLayout*  PythonQtWrapper_QWidget::layout(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->layout());
}

Qt::LayoutDirection  PythonQtWrapper_QWidget::layoutDirection(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->layoutDirection());
}

void PythonQtWrapper_QWidget::leaveEvent(QWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_leaveEvent(event));
}

QLocale  PythonQtWrapper_QWidget::locale(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->locale());
}

QPoint  PythonQtWrapper_QWidget::mapFrom(QWidget* theWrappedObject, const QWidget*  arg__1, const QPoint&  arg__2) const
{
  return ( theWrappedObject->mapFrom(arg__1, arg__2));
}

QPoint  PythonQtWrapper_QWidget::mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
  return ( theWrappedObject->mapFromGlobal(arg__1));
}

QPoint  PythonQtWrapper_QWidget::mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
  return ( theWrappedObject->mapFromParent(arg__1));
}

QPoint  PythonQtWrapper_QWidget::mapTo(QWidget* theWrappedObject, const QWidget*  arg__1, const QPoint&  arg__2) const
{
  return ( theWrappedObject->mapTo(arg__1, arg__2));
}

QPoint  PythonQtWrapper_QWidget::mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
  return ( theWrappedObject->mapToGlobal(arg__1));
}

QPoint  PythonQtWrapper_QWidget::mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
  return ( theWrappedObject->mapToParent(arg__1));
}

QRegion  PythonQtWrapper_QWidget::mask(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->mask());
}

int  PythonQtWrapper_QWidget::maximumHeight(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->maximumHeight());
}

QSize  PythonQtWrapper_QWidget::maximumSize(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->maximumSize());
}

int  PythonQtWrapper_QWidget::maximumWidth(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->maximumWidth());
}

int  PythonQtWrapper_QWidget::minimumHeight(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->minimumHeight());
}

QSize  PythonQtWrapper_QWidget::minimumSize(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->minimumSize());
}

QSize  PythonQtWrapper_QWidget::minimumSizeHint(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

int  PythonQtWrapper_QWidget::minimumWidth(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->minimumWidth());
}

void PythonQtWrapper_QWidget::mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

QWidget*  PythonQtWrapper_QWidget::static_QWidget_mouseGrabber()
{
  return (QWidget::mouseGrabber());
}

void PythonQtWrapper_QWidget::mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QWidget::mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QWidget::mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

void PythonQtWrapper_QWidget::move(QWidget* theWrappedObject, const QPoint&  arg__1)
{
  ( theWrappedObject->move(arg__1));
}

void PythonQtWrapper_QWidget::move(QWidget* theWrappedObject, int  x, int  y)
{
  ( theWrappedObject->move(x, y));
}

void PythonQtWrapper_QWidget::moveEvent(QWidget* theWrappedObject, QMoveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_moveEvent(event));
}

bool  PythonQtWrapper_QWidget::nativeEvent(QWidget* theWrappedObject, const QByteArray&  eventType, void*  message, long*  result)
{
  return ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_nativeEvent(eventType, message, result));
}

QWidget*  PythonQtWrapper_QWidget::nativeParentWidget(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->nativeParentWidget());
}

QWidget*  PythonQtWrapper_QWidget::nextInFocusChain(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->nextInFocusChain());
}

QRect  PythonQtWrapper_QWidget::normalGeometry(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->normalGeometry());
}

void PythonQtWrapper_QWidget::overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type)
{
  ( theWrappedObject->overrideWindowFlags(type));
}

void PythonQtWrapper_QWidget::overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state)
{
  ( theWrappedObject->overrideWindowState(state));
}

void PythonQtWrapper_QWidget::paintEvent(QWidget* theWrappedObject, QPaintEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_paintEvent(event));
}

const QPalette*  PythonQtWrapper_QWidget::palette(QWidget* theWrappedObject) const
{
  return &( theWrappedObject->palette());
}

QWidget*  PythonQtWrapper_QWidget::parentWidget(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->parentWidget());
}

QPoint  PythonQtWrapper_QWidget::pos(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QWidget*  PythonQtWrapper_QWidget::previousInFocusChain(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->previousInFocusChain());
}

QRect  PythonQtWrapper_QWidget::rect(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QWidget::releaseKeyboard(QWidget* theWrappedObject)
{
  ( theWrappedObject->releaseKeyboard());
}

void PythonQtWrapper_QWidget::releaseMouse(QWidget* theWrappedObject)
{
  ( theWrappedObject->releaseMouse());
}

void PythonQtWrapper_QWidget::releaseShortcut(QWidget* theWrappedObject, int  id)
{
  ( theWrappedObject->releaseShortcut(id));
}

void PythonQtWrapper_QWidget::removeAction(QWidget* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->removeAction(action));
}

void PythonQtWrapper_QWidget::render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset, const QRegion&  sourceRegion, QWidget::RenderFlags  renderFlags)
{
  ( theWrappedObject->render(target, targetOffset, sourceRegion, renderFlags));
}

void PythonQtWrapper_QWidget::render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset, const QRegion&  sourceRegion, QWidget::RenderFlags  renderFlags)
{
  ( theWrappedObject->render(painter, targetOffset, sourceRegion, renderFlags));
}

void PythonQtWrapper_QWidget::repaint(QWidget* theWrappedObject, const QRect&  arg__1)
{
  ( theWrappedObject->repaint(arg__1));
}

void PythonQtWrapper_QWidget::repaint(QWidget* theWrappedObject, const QRegion&  arg__1)
{
  ( theWrappedObject->repaint(arg__1));
}

void PythonQtWrapper_QWidget::repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->repaint(x, y, w, h));
}

void PythonQtWrapper_QWidget::resize(QWidget* theWrappedObject, const QSize&  arg__1)
{
  ( theWrappedObject->resize(arg__1));
}

void PythonQtWrapper_QWidget::resize(QWidget* theWrappedObject, int  w, int  h)
{
  ( theWrappedObject->resize(w, h));
}

void PythonQtWrapper_QWidget::resizeEvent(QWidget* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_resizeEvent(event));
}

bool  PythonQtWrapper_QWidget::restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry)
{
  return ( theWrappedObject->restoreGeometry(geometry));
}

QByteArray  PythonQtWrapper_QWidget::saveGeometry(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->saveGeometry());
}

void PythonQtWrapper_QWidget::scroll(QWidget* theWrappedObject, int  dx, int  dy)
{
  ( theWrappedObject->scroll(dx, dy));
}

void PythonQtWrapper_QWidget::scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3)
{
  ( theWrappedObject->scroll(dx, dy, arg__3));
}

void PythonQtWrapper_QWidget::setAcceptDrops(QWidget* theWrappedObject, bool  on)
{
  ( theWrappedObject->setAcceptDrops(on));
}

void PythonQtWrapper_QWidget::setAccessibleDescription(QWidget* theWrappedObject, const QString&  description)
{
  ( theWrappedObject->setAccessibleDescription(description));
}

void PythonQtWrapper_QWidget::setAccessibleName(QWidget* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setAccessibleName(name));
}

void PythonQtWrapper_QWidget::setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on)
{
  ( theWrappedObject->setAttribute(arg__1, on));
}

void PythonQtWrapper_QWidget::setAutoFillBackground(QWidget* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAutoFillBackground(enabled));
}

void PythonQtWrapper_QWidget::setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1)
{
  ( theWrappedObject->setBackgroundRole(arg__1));
}

void PythonQtWrapper_QWidget::setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
  ( theWrappedObject->setBaseSize(arg__1));
}

void PythonQtWrapper_QWidget::setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh)
{
  ( theWrappedObject->setBaseSize(basew, baseh));
}

void PythonQtWrapper_QWidget::setContentsMargins(QWidget* theWrappedObject, const QMargins&  margins)
{
  ( theWrappedObject->setContentsMargins(margins));
}

void PythonQtWrapper_QWidget::setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom)
{
  ( theWrappedObject->setContentsMargins(left, top, right, bottom));
}

void PythonQtWrapper_QWidget::setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy)
{
  ( theWrappedObject->setContextMenuPolicy(policy));
}

void PythonQtWrapper_QWidget::setCursor(QWidget* theWrappedObject, const QCursor&  arg__1)
{
  ( theWrappedObject->setCursor(arg__1));
}

void PythonQtWrapper_QWidget::setFixedHeight(QWidget* theWrappedObject, int  h)
{
  ( theWrappedObject->setFixedHeight(h));
}

void PythonQtWrapper_QWidget::setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
  ( theWrappedObject->setFixedSize(arg__1));
}

void PythonQtWrapper_QWidget::setFixedSize(QWidget* theWrappedObject, int  w, int  h)
{
  ( theWrappedObject->setFixedSize(w, h));
}

void PythonQtWrapper_QWidget::setFixedWidth(QWidget* theWrappedObject, int  w)
{
  ( theWrappedObject->setFixedWidth(w));
}

void PythonQtWrapper_QWidget::setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason)
{
  ( theWrappedObject->setFocus(reason));
}

void PythonQtWrapper_QWidget::setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy)
{
  ( theWrappedObject->setFocusPolicy(policy));
}

void PythonQtWrapper_QWidget::setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1)
{
  ( theWrappedObject->setFocusProxy(arg__1));
}

void PythonQtWrapper_QWidget::setFont(QWidget* theWrappedObject, const QFont&  arg__1)
{
  ( theWrappedObject->setFont(arg__1));
}

void PythonQtWrapper_QWidget::setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1)
{
  ( theWrappedObject->setForegroundRole(arg__1));
}

void PythonQtWrapper_QWidget::setGeometry(QWidget* theWrappedObject, const QRect&  arg__1)
{
  ( theWrappedObject->setGeometry(arg__1));
}

void PythonQtWrapper_QWidget::setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->setGeometry(x, y, w, h));
}

void PythonQtWrapper_QWidget::setGraphicsEffect(QWidget* theWrappedObject, QGraphicsEffect*  effect)
{
  ( theWrappedObject->setGraphicsEffect(effect));
}

void PythonQtWrapper_QWidget::setInputMethodHints(QWidget* theWrappedObject, Qt::InputMethodHints  hints)
{
  ( theWrappedObject->setInputMethodHints(hints));
}

void PythonQtWrapper_QWidget::setLayout(QWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1)
{
  ( theWrappedObject->setLayout(arg__1));
}

void PythonQtWrapper_QWidget::setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction)
{
  ( theWrappedObject->setLayoutDirection(direction));
}

void PythonQtWrapper_QWidget::setLocale(QWidget* theWrappedObject, const QLocale&  locale)
{
  ( theWrappedObject->setLocale(locale));
}

void PythonQtWrapper_QWidget::setMask(QWidget* theWrappedObject, const QBitmap&  arg__1)
{
  ( theWrappedObject->setMask(arg__1));
}

void PythonQtWrapper_QWidget::setMask(QWidget* theWrappedObject, const QRegion&  arg__1)
{
  ( theWrappedObject->setMask(arg__1));
}

void PythonQtWrapper_QWidget::setMaximumHeight(QWidget* theWrappedObject, int  maxh)
{
  ( theWrappedObject->setMaximumHeight(maxh));
}

void PythonQtWrapper_QWidget::setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
  ( theWrappedObject->setMaximumSize(arg__1));
}

void PythonQtWrapper_QWidget::setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh)
{
  ( theWrappedObject->setMaximumSize(maxw, maxh));
}

void PythonQtWrapper_QWidget::setMaximumWidth(QWidget* theWrappedObject, int  maxw)
{
  ( theWrappedObject->setMaximumWidth(maxw));
}

void PythonQtWrapper_QWidget::setMinimumHeight(QWidget* theWrappedObject, int  minh)
{
  ( theWrappedObject->setMinimumHeight(minh));
}

void PythonQtWrapper_QWidget::setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
  ( theWrappedObject->setMinimumSize(arg__1));
}

void PythonQtWrapper_QWidget::setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh)
{
  ( theWrappedObject->setMinimumSize(minw, minh));
}

void PythonQtWrapper_QWidget::setMinimumWidth(QWidget* theWrappedObject, int  minw)
{
  ( theWrappedObject->setMinimumWidth(minw));
}

void PythonQtWrapper_QWidget::setMouseTracking(QWidget* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setMouseTracking(enable));
}

void PythonQtWrapper_QWidget::setPalette(QWidget* theWrappedObject, const QPalette&  arg__1)
{
  ( theWrappedObject->setPalette(arg__1));
}

void PythonQtWrapper_QWidget::setParent(QWidget* theWrappedObject, PythonQtNewOwnerOfThis<QWidget* >  parent)
{
  ( theWrappedObject->setParent(parent));
}

void PythonQtWrapper_QWidget::setParent(QWidget* theWrappedObject, PythonQtNewOwnerOfThis<QWidget* >  parent, Qt::WindowFlags  f)
{
  ( theWrappedObject->setParent(parent, f));
}

void PythonQtWrapper_QWidget::setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable)
{
  ( theWrappedObject->setShortcutAutoRepeat(id, enable));
}

void PythonQtWrapper_QWidget::setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable)
{
  ( theWrappedObject->setShortcutEnabled(id, enable));
}

void PythonQtWrapper_QWidget::setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1)
{
  ( theWrappedObject->setSizeIncrement(arg__1));
}

void PythonQtWrapper_QWidget::setSizeIncrement(QWidget* theWrappedObject, int  w, int  h)
{
  ( theWrappedObject->setSizeIncrement(w, h));
}

void PythonQtWrapper_QWidget::setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1)
{
  ( theWrappedObject->setSizePolicy(arg__1));
}

void PythonQtWrapper_QWidget::setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical)
{
  ( theWrappedObject->setSizePolicy(horizontal, vertical));
}

void PythonQtWrapper_QWidget::setStatusTip(QWidget* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setStatusTip(arg__1));
}

void PythonQtWrapper_QWidget::setStyle(QWidget* theWrappedObject, QStyle*  arg__1)
{
  ( theWrappedObject->setStyle(arg__1));
}

void PythonQtWrapper_QWidget::static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2)
{
  (QWidget::setTabOrder(arg__1, arg__2));
}

void PythonQtWrapper_QWidget::setToolTip(QWidget* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setToolTip(arg__1));
}

void PythonQtWrapper_QWidget::setToolTipDuration(QWidget* theWrappedObject, int  msec)
{
  ( theWrappedObject->setToolTipDuration(msec));
}

void PythonQtWrapper_QWidget::setUpdatesEnabled(QWidget* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setUpdatesEnabled(enable));
}

void PythonQtWrapper_QWidget::setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setWhatsThis(arg__1));
}

void PythonQtWrapper_QWidget::setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath)
{
  ( theWrappedObject->setWindowFilePath(filePath));
}

void PythonQtWrapper_QWidget::setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type)
{
  ( theWrappedObject->setWindowFlags(type));
}

void PythonQtWrapper_QWidget::setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon)
{
  ( theWrappedObject->setWindowIcon(icon));
}

void PythonQtWrapper_QWidget::setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setWindowIconText(arg__1));
}

void PythonQtWrapper_QWidget::setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality)
{
  ( theWrappedObject->setWindowModality(windowModality));
}

void PythonQtWrapper_QWidget::setWindowOpacity(QWidget* theWrappedObject, qreal  level)
{
  ( theWrappedObject->setWindowOpacity(level));
}

void PythonQtWrapper_QWidget::setWindowRole(QWidget* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setWindowRole(arg__1));
}

void PythonQtWrapper_QWidget::setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state)
{
  ( theWrappedObject->setWindowState(state));
}

void PythonQtWrapper_QWidget::showEvent(QWidget* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_showEvent(event));
}

QSize  PythonQtWrapper_QWidget::size(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QSize  PythonQtWrapper_QWidget::sizeHint(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QSize  PythonQtWrapper_QWidget::sizeIncrement(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->sizeIncrement());
}

QSizePolicy  PythonQtWrapper_QWidget::sizePolicy(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->sizePolicy());
}

void PythonQtWrapper_QWidget::stackUnder(QWidget* theWrappedObject, QWidget*  arg__1)
{
  ( theWrappedObject->stackUnder(arg__1));
}

QString  PythonQtWrapper_QWidget::statusTip(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->statusTip());
}

QStyle*  PythonQtWrapper_QWidget::style(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

QString  PythonQtWrapper_QWidget::styleSheet(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->styleSheet());
}

void PythonQtWrapper_QWidget::tabletEvent(QWidget* theWrappedObject, QTabletEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_tabletEvent(event));
}

bool  PythonQtWrapper_QWidget::testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const
{
  return ( theWrappedObject->testAttribute(arg__1));
}

QString  PythonQtWrapper_QWidget::toolTip(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

int  PythonQtWrapper_QWidget::toolTipDuration(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->toolTipDuration());
}

bool  PythonQtWrapper_QWidget::underMouse(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->underMouse());
}

void PythonQtWrapper_QWidget::ungrabGesture(QWidget* theWrappedObject, Qt::GestureType  type)
{
  ( theWrappedObject->ungrabGesture(type));
}

void PythonQtWrapper_QWidget::unsetCursor(QWidget* theWrappedObject)
{
  ( theWrappedObject->unsetCursor());
}

void PythonQtWrapper_QWidget::unsetLayoutDirection(QWidget* theWrappedObject)
{
  ( theWrappedObject->unsetLayoutDirection());
}

void PythonQtWrapper_QWidget::unsetLocale(QWidget* theWrappedObject)
{
  ( theWrappedObject->unsetLocale());
}

void PythonQtWrapper_QWidget::update(QWidget* theWrappedObject, const QRect&  arg__1)
{
  ( theWrappedObject->update(arg__1));
}

void PythonQtWrapper_QWidget::update(QWidget* theWrappedObject, const QRegion&  arg__1)
{
  ( theWrappedObject->update(arg__1));
}

void PythonQtWrapper_QWidget::update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->update(x, y, w, h));
}

void PythonQtWrapper_QWidget::updateGeometry(QWidget* theWrappedObject)
{
  ( theWrappedObject->updateGeometry());
}

bool  PythonQtWrapper_QWidget::updatesEnabled(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->updatesEnabled());
}

QRegion  PythonQtWrapper_QWidget::visibleRegion(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->visibleRegion());
}

QString  PythonQtWrapper_QWidget::whatsThis(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->whatsThis());
}

void PythonQtWrapper_QWidget::wheelEvent(QWidget* theWrappedObject, QWheelEvent*  event)
{
  ( ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_wheelEvent(event));
}

int  PythonQtWrapper_QWidget::width(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

WId  PythonQtWrapper_QWidget::winId(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->winId());
}

QWidget*  PythonQtWrapper_QWidget::window(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->window());
}

QString  PythonQtWrapper_QWidget::windowFilePath(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFilePath());
}

Qt::WindowFlags  PythonQtWrapper_QWidget::windowFlags(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFlags());
}

QWindow*  PythonQtWrapper_QWidget::windowHandle(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowHandle());
}

QIcon  PythonQtWrapper_QWidget::windowIcon(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowIcon());
}

QString  PythonQtWrapper_QWidget::windowIconText(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowIconText());
}

Qt::WindowModality  PythonQtWrapper_QWidget::windowModality(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowModality());
}

qreal  PythonQtWrapper_QWidget::windowOpacity(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowOpacity());
}

QString  PythonQtWrapper_QWidget::windowRole(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowRole());
}

Qt::WindowStates  PythonQtWrapper_QWidget::windowState(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowState());
}

QString  PythonQtWrapper_QWidget::windowTitle(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowTitle());
}

Qt::WindowType  PythonQtWrapper_QWidget::windowType(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowType());
}

int  PythonQtWrapper_QWidget::x(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QWidget::y(QWidget* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QString PythonQtWrapper_QWidget::py_toString(QWidget* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QWidgetAction::~PythonQtShell_QWidgetAction() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWidgetAction::childEvent(QChildEvent*  event0)
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
  QWidgetAction::childEvent(event0);
}
QWidget*  PythonQtShell_QWidgetAction::createWidget(QWidget*  parent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createWidget");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWidget*" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QWidget* returnValue;
      void* args[2] = {NULL, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createWidget", methodInfo, result);
          } else {
            returnValue = *((QWidget**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWidgetAction::createWidget(parent0);
}
void PythonQtShell_QWidgetAction::customEvent(QEvent*  event0)
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
  QWidgetAction::customEvent(event0);
}
void PythonQtShell_QWidgetAction::deleteWidget(QWidget*  widget0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("deleteWidget");
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
}
  QWidgetAction::deleteWidget(widget0);
}
bool  PythonQtShell_QWidgetAction::event(QEvent*  arg__1)
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
}
  return QWidgetAction::event(arg__1);
}
bool  PythonQtShell_QWidgetAction::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
}
  return QWidgetAction::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QWidgetAction::timerEvent(QTimerEvent*  event0)
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
  QWidgetAction::timerEvent(event0);
}
QWidgetAction* PythonQtWrapper_QWidgetAction::new_QWidgetAction(QObject*  parent)
{ 
return new PythonQtShell_QWidgetAction(parent); }

const QMetaObject* PythonQtShell_QWidgetAction::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWidgetAction::staticMetaObject);
  } else {
    return &QWidgetAction::staticMetaObject;
  }
}
int PythonQtShell_QWidgetAction::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWidgetAction::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QWidget*  PythonQtWrapper_QWidgetAction::createWidget(QWidgetAction* theWrappedObject, QWidget*  parent)
{
  return ( ((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->promoted_createWidget(parent));
}

QList<QWidget* >  PythonQtWrapper_QWidgetAction::createdWidgets(QWidgetAction* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->promoted_createdWidgets());
}

QWidget*  PythonQtWrapper_QWidgetAction::defaultWidget(QWidgetAction* theWrappedObject) const
{
  return ( theWrappedObject->defaultWidget());
}

void PythonQtWrapper_QWidgetAction::deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->promoted_deleteWidget(widget));
}

void PythonQtWrapper_QWidgetAction::releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->releaseWidget(widget));
}

QWidget*  PythonQtWrapper_QWidgetAction::requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent)
{
  return ( theWrappedObject->requestWidget(parent));
}

void PythonQtWrapper_QWidgetAction::setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w)
{
  ( theWrappedObject->setDefaultWidget(w));
}



PythonQtShell_QWidgetItem::~PythonQtShell_QWidgetItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSizePolicy::ControlTypes  PythonQtShell_QWidgetItem::controlTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("controlTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSizePolicy::ControlTypes"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSizePolicy::ControlTypes returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("controlTypes", methodInfo, result);
          } else {
            returnValue = *((QSizePolicy::ControlTypes*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWidgetItem::controlTypes();
}
Qt::Orientations  PythonQtShell_QWidgetItem::expandingDirections() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("expandingDirections");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::Orientations"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::Orientations returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("expandingDirections", methodInfo, result);
          } else {
            returnValue = *((Qt::Orientations*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWidgetItem::expandingDirections();
}
QRect  PythonQtShell_QWidgetItem::geometry() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("geometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRect"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRect returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("geometry", methodInfo, result);
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
}
  return QWidgetItem::geometry();
}
bool  PythonQtShell_QWidgetItem::hasHeightForWidth() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasHeightForWidth");
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
  return QWidgetItem::hasHeightForWidth();
}
int  PythonQtShell_QWidgetItem::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("heightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
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
}
  return QWidgetItem::heightForWidth(arg__1);
}
void PythonQtShell_QWidgetItem::invalidate()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("invalidate");
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
  QWidgetItem::invalidate();
}
bool  PythonQtShell_QWidgetItem::isEmpty() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isEmpty");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWidgetItem::isEmpty();
}
QLayout*  PythonQtShell_QWidgetItem::layout()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("layout");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayout*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QLayout* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("layout", methodInfo, result);
          } else {
            returnValue = *((QLayout**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWidgetItem::layout();
}
QSize  PythonQtShell_QWidgetItem::maximumSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("maximumSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("maximumSize", methodInfo, result);
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
  return QWidgetItem::maximumSize();
}
int  PythonQtShell_QWidgetItem::minimumHeightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("minimumHeightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumHeightForWidth", methodInfo, result);
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
  return QWidgetItem::minimumHeightForWidth(arg__1);
}
QSize  PythonQtShell_QWidgetItem::minimumSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("minimumSize");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumSize", methodInfo, result);
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
  return QWidgetItem::minimumSize();
}
void PythonQtShell_QWidgetItem::setGeometry(const QRect&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setGeometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QRect&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QWidgetItem::setGeometry(arg__1);
}
QSize  PythonQtShell_QWidgetItem::sizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sizeHint");
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
  return QWidgetItem::sizeHint();
}
QSpacerItem*  PythonQtShell_QWidgetItem::spacerItem()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("spacerItem");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSpacerItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSpacerItem* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("spacerItem", methodInfo, result);
          } else {
            returnValue = *((QSpacerItem**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWidgetItem::spacerItem();
}
QWidget*  PythonQtShell_QWidgetItem::widget()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("widget");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QWidget* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("widget", methodInfo, result);
          } else {
            returnValue = *((QWidget**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWidgetItem::widget();
}
QWidgetItem* PythonQtWrapper_QWidgetItem::new_QWidgetItem(QWidget*  w)
{ 
return new PythonQtShell_QWidgetItem(w); }



PythonQtShell_QWindow::~PythonQtShell_QWindow() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWindow::childEvent(QChildEvent*  event0)
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
  QWindow::childEvent(event0);
}
void PythonQtShell_QWindow::customEvent(QEvent*  event0)
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
  QWindow::customEvent(event0);
}
bool  PythonQtShell_QWindow::event(QEvent*  arg__1)
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
}
  return QWindow::event(arg__1);
}
bool  PythonQtShell_QWindow::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QWindow::eventFilter(watched0, event1);
}
void PythonQtShell_QWindow::exposeEvent(QExposeEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("exposeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QExposeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QWindow::exposeEvent(arg__1);
}
void PythonQtShell_QWindow::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::focusInEvent(arg__1);
}
QObject*  PythonQtShell_QWindow::focusObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("focusObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QObject* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("focusObject", methodInfo, result);
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
}
  return QWindow::focusObject();
}
void PythonQtShell_QWindow::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::focusOutEvent(arg__1);
}
QSurfaceFormat  PythonQtShell_QWindow::format() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("format");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSurfaceFormat"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSurfaceFormat returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("format", methodInfo, result);
          } else {
            returnValue = *((QSurfaceFormat*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWindow::format();
}
void PythonQtShell_QWindow::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::hideEvent(arg__1);
}
void PythonQtShell_QWindow::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::keyPressEvent(arg__1);
}
void PythonQtShell_QWindow::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::keyReleaseEvent(arg__1);
}
void PythonQtShell_QWindow::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QWindow::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::mouseMoveEvent(arg__1);
}
void PythonQtShell_QWindow::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::mousePressEvent(arg__1);
}
void PythonQtShell_QWindow::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QWindow::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::moveEvent(arg__1);
}
bool  PythonQtShell_QWindow::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nativeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
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
}
  return QWindow::nativeEvent(eventType0, message1, result2);
}
void PythonQtShell_QWindow::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::resizeEvent(arg__1);
}
void PythonQtShell_QWindow::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::showEvent(arg__1);
}
QSize  PythonQtShell_QWindow::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("size");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
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
  return QWindow::size();
}
QSurface::SurfaceType  PythonQtShell_QWindow::surfaceType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("surfaceType");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSurface::SurfaceType"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSurface::SurfaceType returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("surfaceType", methodInfo, result);
          } else {
            returnValue = *((QSurface::SurfaceType*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWindow::surfaceType();
}
void PythonQtShell_QWindow::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::tabletEvent(arg__1);
}
void PythonQtShell_QWindow::timerEvent(QTimerEvent*  event0)
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
  QWindow::timerEvent(event0);
}
void PythonQtShell_QWindow::touchEvent(QTouchEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("touchEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTouchEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QWindow::touchEvent(arg__1);
}
void PythonQtShell_QWindow::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWindow::wheelEvent(arg__1);
}
QWindow* PythonQtWrapper_QWindow::new_QWindow(QScreen*  screen)
{ 
return new PythonQtShell_QWindow(screen); }

QWindow* PythonQtWrapper_QWindow::new_QWindow(QWindow*  parent)
{ 
return new PythonQtShell_QWindow(parent); }

const QMetaObject* PythonQtShell_QWindow::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWindow::staticMetaObject);
  } else {
    return &QWindow::staticMetaObject;
  }
}
int PythonQtShell_QWindow::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWindow::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QSize  PythonQtWrapper_QWindow::baseSize(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->baseSize());
}

Qt::ScreenOrientation  PythonQtWrapper_QWindow::contentOrientation(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->contentOrientation());
}

void PythonQtWrapper_QWindow::create(QWindow* theWrappedObject)
{
  ( theWrappedObject->create());
}

QCursor  PythonQtWrapper_QWindow::cursor(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->cursor());
}

void PythonQtWrapper_QWindow::destroy(QWindow* theWrappedObject)
{
  ( theWrappedObject->destroy());
}

qreal  PythonQtWrapper_QWindow::devicePixelRatio(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->devicePixelRatio());
}

void PythonQtWrapper_QWindow::exposeEvent(QWindow* theWrappedObject, QExposeEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_exposeEvent(arg__1));
}

QString  PythonQtWrapper_QWindow::filePath(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

Qt::WindowFlags  PythonQtWrapper_QWindow::flags(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

void PythonQtWrapper_QWindow::focusInEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_focusInEvent(arg__1));
}

QObject*  PythonQtWrapper_QWindow::focusObject(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->focusObject());
}

void PythonQtWrapper_QWindow::focusOutEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_focusOutEvent(arg__1));
}

QRect  PythonQtWrapper_QWindow::frameGeometry(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->frameGeometry());
}

QMargins  PythonQtWrapper_QWindow::frameMargins(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->frameMargins());
}

QPoint  PythonQtWrapper_QWindow::framePosition(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->framePosition());
}

QWindow*  PythonQtWrapper_QWindow::static_QWindow_fromWinId(WId  id)
{
  return (QWindow::fromWinId(id));
}

QRect  PythonQtWrapper_QWindow::geometry(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->geometry());
}

int  PythonQtWrapper_QWindow::height(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

void PythonQtWrapper_QWindow::hideEvent(QWindow* theWrappedObject, QHideEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_hideEvent(arg__1));
}

QIcon  PythonQtWrapper_QWindow::icon(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

bool  PythonQtWrapper_QWindow::isActive(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QWindow::isAncestorOf(QWindow* theWrappedObject, const QWindow*  child, QWindow::AncestorMode  mode) const
{
  return ( theWrappedObject->isAncestorOf(child, mode));
}

bool  PythonQtWrapper_QWindow::isExposed(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->isExposed());
}

bool  PythonQtWrapper_QWindow::isModal(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->isModal());
}

bool  PythonQtWrapper_QWindow::isTopLevel(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->isTopLevel());
}

bool  PythonQtWrapper_QWindow::isVisible(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

void PythonQtWrapper_QWindow::keyPressEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_keyPressEvent(arg__1));
}

void PythonQtWrapper_QWindow::keyReleaseEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_keyReleaseEvent(arg__1));
}

QPoint  PythonQtWrapper_QWindow::mapFromGlobal(QWindow* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->mapFromGlobal(pos));
}

QPoint  PythonQtWrapper_QWindow::mapToGlobal(QWindow* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->mapToGlobal(pos));
}

QRegion  PythonQtWrapper_QWindow::mask(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->mask());
}

int  PythonQtWrapper_QWindow::maximumHeight(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->maximumHeight());
}

QSize  PythonQtWrapper_QWindow::maximumSize(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->maximumSize());
}

int  PythonQtWrapper_QWindow::maximumWidth(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->maximumWidth());
}

int  PythonQtWrapper_QWindow::minimumHeight(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->minimumHeight());
}

QSize  PythonQtWrapper_QWindow::minimumSize(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->minimumSize());
}

int  PythonQtWrapper_QWindow::minimumWidth(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->minimumWidth());
}

Qt::WindowModality  PythonQtWrapper_QWindow::modality(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->modality());
}

void PythonQtWrapper_QWindow::mouseDoubleClickEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_mouseDoubleClickEvent(arg__1));
}

void PythonQtWrapper_QWindow::mouseMoveEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_mouseMoveEvent(arg__1));
}

void PythonQtWrapper_QWindow::mousePressEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_mousePressEvent(arg__1));
}

void PythonQtWrapper_QWindow::mouseReleaseEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1));
}

void PythonQtWrapper_QWindow::moveEvent(QWindow* theWrappedObject, QMoveEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_moveEvent(arg__1));
}

bool  PythonQtWrapper_QWindow::nativeEvent(QWindow* theWrappedObject, const QByteArray&  eventType, void*  message, long*  result)
{
  return ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_nativeEvent(eventType, message, result));
}

qreal  PythonQtWrapper_QWindow::opacity(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QWindow*  PythonQtWrapper_QWindow::parent(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

QPoint  PythonQtWrapper_QWindow::position(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

void PythonQtWrapper_QWindow::reportContentOrientationChange(QWindow* theWrappedObject, Qt::ScreenOrientation  orientation)
{
  ( theWrappedObject->reportContentOrientationChange(orientation));
}

QSurfaceFormat  PythonQtWrapper_QWindow::requestedFormat(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->requestedFormat());
}

void PythonQtWrapper_QWindow::resize(QWindow* theWrappedObject, const QSize&  newSize)
{
  ( theWrappedObject->resize(newSize));
}

void PythonQtWrapper_QWindow::resize(QWindow* theWrappedObject, int  w, int  h)
{
  ( theWrappedObject->resize(w, h));
}

void PythonQtWrapper_QWindow::resizeEvent(QWindow* theWrappedObject, QResizeEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_resizeEvent(arg__1));
}

QScreen*  PythonQtWrapper_QWindow::screen(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->screen());
}

void PythonQtWrapper_QWindow::setBaseSize(QWindow* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setBaseSize(size));
}

void PythonQtWrapper_QWindow::setCursor(QWindow* theWrappedObject, const QCursor&  arg__1)
{
  ( theWrappedObject->setCursor(arg__1));
}

void PythonQtWrapper_QWindow::setFilePath(QWindow* theWrappedObject, const QString&  filePath)
{
  ( theWrappedObject->setFilePath(filePath));
}

void PythonQtWrapper_QWindow::setFlags(QWindow* theWrappedObject, Qt::WindowFlags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QWindow::setFormat(QWindow* theWrappedObject, const QSurfaceFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QWindow::setFramePosition(QWindow* theWrappedObject, const QPoint&  point)
{
  ( theWrappedObject->setFramePosition(point));
}

void PythonQtWrapper_QWindow::setGeometry(QWindow* theWrappedObject, const QRect&  rect)
{
  ( theWrappedObject->setGeometry(rect));
}

void PythonQtWrapper_QWindow::setGeometry(QWindow* theWrappedObject, int  posx, int  posy, int  w, int  h)
{
  ( theWrappedObject->setGeometry(posx, posy, w, h));
}

void PythonQtWrapper_QWindow::setIcon(QWindow* theWrappedObject, const QIcon&  icon)
{
  ( theWrappedObject->setIcon(icon));
}

bool  PythonQtWrapper_QWindow::setKeyboardGrabEnabled(QWindow* theWrappedObject, bool  grab)
{
  return ( theWrappedObject->setKeyboardGrabEnabled(grab));
}

void PythonQtWrapper_QWindow::setMask(QWindow* theWrappedObject, const QRegion&  region)
{
  ( theWrappedObject->setMask(region));
}

void PythonQtWrapper_QWindow::setMaximumSize(QWindow* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setMaximumSize(size));
}

void PythonQtWrapper_QWindow::setMinimumSize(QWindow* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setMinimumSize(size));
}

void PythonQtWrapper_QWindow::setModality(QWindow* theWrappedObject, Qt::WindowModality  modality)
{
  ( theWrappedObject->setModality(modality));
}

bool  PythonQtWrapper_QWindow::setMouseGrabEnabled(QWindow* theWrappedObject, bool  grab)
{
  return ( theWrappedObject->setMouseGrabEnabled(grab));
}

void PythonQtWrapper_QWindow::setOpacity(QWindow* theWrappedObject, qreal  level)
{
  ( theWrappedObject->setOpacity(level));
}

void PythonQtWrapper_QWindow::setParent(QWindow* theWrappedObject, QWindow*  parent)
{
  ( theWrappedObject->setParent(parent));
}

void PythonQtWrapper_QWindow::setPosition(QWindow* theWrappedObject, const QPoint&  pt)
{
  ( theWrappedObject->setPosition(pt));
}

void PythonQtWrapper_QWindow::setPosition(QWindow* theWrappedObject, int  posx, int  posy)
{
  ( theWrappedObject->setPosition(posx, posy));
}

void PythonQtWrapper_QWindow::setScreen(QWindow* theWrappedObject, QScreen*  screen)
{
  ( theWrappedObject->setScreen(screen));
}

void PythonQtWrapper_QWindow::setSizeIncrement(QWindow* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setSizeIncrement(size));
}

void PythonQtWrapper_QWindow::setSurfaceType(QWindow* theWrappedObject, QSurface::SurfaceType  surfaceType)
{
  ( theWrappedObject->setSurfaceType(surfaceType));
}

void PythonQtWrapper_QWindow::setTransientParent(QWindow* theWrappedObject, QWindow*  parent)
{
  ( theWrappedObject->setTransientParent(parent));
}

void PythonQtWrapper_QWindow::setVisibility(QWindow* theWrappedObject, QWindow::Visibility  v)
{
  ( theWrappedObject->setVisibility(v));
}

void PythonQtWrapper_QWindow::setWindowState(QWindow* theWrappedObject, Qt::WindowState  state)
{
  ( theWrappedObject->setWindowState(state));
}

void PythonQtWrapper_QWindow::showEvent(QWindow* theWrappedObject, QShowEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_showEvent(arg__1));
}

QSize  PythonQtWrapper_QWindow::sizeIncrement(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->sizeIncrement());
}

void PythonQtWrapper_QWindow::tabletEvent(QWindow* theWrappedObject, QTabletEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_tabletEvent(arg__1));
}

QString  PythonQtWrapper_QWindow::title(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

void PythonQtWrapper_QWindow::touchEvent(QWindow* theWrappedObject, QTouchEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_touchEvent(arg__1));
}

QWindow*  PythonQtWrapper_QWindow::transientParent(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->transientParent());
}

Qt::WindowType  PythonQtWrapper_QWindow::type(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QWindow::unsetCursor(QWindow* theWrappedObject)
{
  ( theWrappedObject->unsetCursor());
}

QWindow::Visibility  PythonQtWrapper_QWindow::visibility(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->visibility());
}

void PythonQtWrapper_QWindow::wheelEvent(QWindow* theWrappedObject, QWheelEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QWindow*)theWrappedObject)->promoted_wheelEvent(arg__1));
}

int  PythonQtWrapper_QWindow::width(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

WId  PythonQtWrapper_QWindow::winId(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->winId());
}

Qt::WindowState  PythonQtWrapper_QWindow::windowState(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->windowState());
}

int  PythonQtWrapper_QWindow::x(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QWindow::y(QWindow* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QString PythonQtWrapper_QWindow::py_toString(QWindow* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



QWindowStateChangeEvent* PythonQtWrapper_QWindowStateChangeEvent::new_QWindowStateChangeEvent(Qt::WindowStates  aOldState, bool  isOverride)
{ 
return new QWindowStateChangeEvent(aOldState, isOverride); }

bool  PythonQtWrapper_QWindowStateChangeEvent::isOverride(QWindowStateChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->isOverride());
}

Qt::WindowStates  PythonQtWrapper_QWindowStateChangeEvent::oldState(QWindowStateChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldState());
}



PythonQtShell_QWizard::~PythonQtShell_QWizard() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWizard::accept()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::accept();
}
void PythonQtShell_QWizard::actionEvent(QActionEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::actionEvent(event0);
}
void PythonQtShell_QWizard::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::changeEvent(arg__1);
}
void PythonQtShell_QWizard::childEvent(QChildEvent*  event0)
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
  QWizard::childEvent(event0);
}
void PythonQtShell_QWizard::cleanupPage(int  id0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("cleanupPage");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&id0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWizard::cleanupPage(id0);
}
void PythonQtShell_QWizard::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::closeEvent(arg__1);
}
void PythonQtShell_QWizard::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::contextMenuEvent(arg__1);
}
void PythonQtShell_QWizard::customEvent(QEvent*  event0)
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
  QWizard::customEvent(event0);
}
int  PythonQtShell_QWizard::devType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("devType");
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
  return QWizard::devType();
}
void PythonQtShell_QWizard::done(int  result0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("done");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&result0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWizard::done(result0);
}
void PythonQtShell_QWizard::dragEnterEvent(QDragEnterEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QWizard::dragEnterEvent(event0);
}
void PythonQtShell_QWizard::dragLeaveEvent(QDragLeaveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
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
  QWizard::dragLeaveEvent(event0);
}
void PythonQtShell_QWizard::dragMoveEvent(QDragMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragMoveEvent*"};
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
  QWizard::dragMoveEvent(event0);
}
void PythonQtShell_QWizard::dropEvent(QDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDropEvent*"};
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
  QWizard::dropEvent(event0);
}
void PythonQtShell_QWizard::enterEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("enterEvent");
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
  QWizard::enterEvent(event0);
}
bool  PythonQtShell_QWizard::event(QEvent*  event0)
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
  return QWizard::event(event0);
}
bool  PythonQtShell_QWizard::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
}
  return QWizard::eventFilter(arg__1, arg__2);
}
int  PythonQtShell_QWizard::exec()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("exec");
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
}
  return QWizard::exec();
}
void PythonQtShell_QWizard::focusInEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::focusInEvent(event0);
}
bool  PythonQtShell_QWizard::focusNextPrevChild(bool  next0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("focusNextPrevChild");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QWizard::focusNextPrevChild(next0);
}
void PythonQtShell_QWizard::focusOutEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::focusOutEvent(event0);
}
bool  PythonQtShell_QWizard::hasHeightForWidth() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasHeightForWidth");
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
  return QWizard::hasHeightForWidth();
}
int  PythonQtShell_QWizard::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("heightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
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
}
  return QWizard::heightForWidth(arg__1);
}
void PythonQtShell_QWizard::hideEvent(QHideEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::hideEvent(event0);
}
void PythonQtShell_QWizard::initPainter(QPainter*  painter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::initPainter(painter0);
}
void PythonQtShell_QWizard::initializePage(int  id0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("initializePage");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&id0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWizard::initializePage(id0);
}
void PythonQtShell_QWizard::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QWizard::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWizard::inputMethodQuery(arg__1);
}
void PythonQtShell_QWizard::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::keyPressEvent(arg__1);
}
void PythonQtShell_QWizard::keyReleaseEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::keyReleaseEvent(event0);
}
void PythonQtShell_QWizard::leaveEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("leaveEvent");
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
  QWizard::leaveEvent(event0);
}
int  PythonQtShell_QWizard::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metric");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
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
}
  return QWizard::metric(arg__1);
}
void PythonQtShell_QWizard::mouseDoubleClickEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
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
}
  QWizard::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QWizard::mouseMoveEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::mouseMoveEvent(event0);
}
void PythonQtShell_QWizard::mousePressEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::mousePressEvent(event0);
}
void PythonQtShell_QWizard::mouseReleaseEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::mouseReleaseEvent(event0);
}
void PythonQtShell_QWizard::moveEvent(QMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::moveEvent(event0);
}
bool  PythonQtShell_QWizard::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nativeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
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
}
  return QWizard::nativeEvent(eventType0, message1, result2);
}
int  PythonQtShell_QWizard::nextId() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nextId");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("nextId", methodInfo, result);
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
  return QWizard::nextId();
}
void PythonQtShell_QWizard::open()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::open();
}
QPaintEngine*  PythonQtShell_QWizard::paintEngine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWizard::paintEngine();
}
void PythonQtShell_QWizard::paintEvent(QPaintEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QWizard::redirected(QPoint*  offset0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWizard::redirected(offset0);
}
void PythonQtShell_QWizard::reject()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::reject();
}
void PythonQtShell_QWizard::resizeEvent(QResizeEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::resizeEvent(event0);
}
void PythonQtShell_QWizard::setVisible(bool  visible0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVisible");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&visible0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWizard::setVisible(visible0);
}
QPainter*  PythonQtShell_QWizard::sharedPainter() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWizard::sharedPainter();
}
void PythonQtShell_QWizard::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::showEvent(arg__1);
}
QSize  PythonQtShell_QWizard::sizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sizeHint");
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
  return QWizard::sizeHint();
}
void PythonQtShell_QWizard::tabletEvent(QTabletEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("tabletEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTabletEvent*"};
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
  QWizard::tabletEvent(event0);
}
void PythonQtShell_QWizard::timerEvent(QTimerEvent*  event0)
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
  QWizard::timerEvent(event0);
}
bool  PythonQtShell_QWizard::validateCurrentPage()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("validateCurrentPage");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("validateCurrentPage", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWizard::validateCurrentPage();
}
void PythonQtShell_QWizard::wheelEvent(QWheelEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizard::wheelEvent(event0);
}
QWizard* PythonQtWrapper_QWizard::new_QWizard(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QWizard(parent, flags); }

const QMetaObject* PythonQtShell_QWizard::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWizard::staticMetaObject);
  } else {
    return &QWizard::staticMetaObject;
  }
}
int PythonQtShell_QWizard::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWizard::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QWizard::addPage(QWizard* theWrappedObject, PythonQtPassOwnershipToCPP<QWizardPage* >  page)
{
  return ( theWrappedObject->addPage(page));
}

QAbstractButton*  PythonQtWrapper_QWizard::button(QWizard* theWrappedObject, QWizard::WizardButton  which) const
{
  return ( theWrappedObject->button(which));
}

QString  PythonQtWrapper_QWizard::buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const
{
  return ( theWrappedObject->buttonText(which));
}

void PythonQtWrapper_QWizard::cleanupPage(QWizard* theWrappedObject, int  id)
{
  ( ((PythonQtPublicPromoter_QWizard*)theWrappedObject)->promoted_cleanupPage(id));
}

int  PythonQtWrapper_QWizard::currentId(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->currentId());
}

QWizardPage*  PythonQtWrapper_QWizard::currentPage(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->currentPage());
}

QVariant  PythonQtWrapper_QWizard::field(QWizard* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->field(name));
}

bool  PythonQtWrapper_QWizard::hasVisitedPage(QWizard* theWrappedObject, int  id) const
{
  return ( theWrappedObject->hasVisitedPage(id));
}

void PythonQtWrapper_QWizard::initializePage(QWizard* theWrappedObject, int  id)
{
  ( ((PythonQtPublicPromoter_QWizard*)theWrappedObject)->promoted_initializePage(id));
}

int  PythonQtWrapper_QWizard::nextId(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->nextId());
}

QWizard::WizardOptions  PythonQtWrapper_QWizard::options(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->options());
}

QWizardPage*  PythonQtWrapper_QWizard::page(QWizard* theWrappedObject, int  id) const
{
  return ( theWrappedObject->page(id));
}

QList<int >  PythonQtWrapper_QWizard::pageIds(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->pageIds());
}

QPixmap  PythonQtWrapper_QWizard::pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const
{
  return ( theWrappedObject->pixmap(which));
}

void PythonQtWrapper_QWizard::removePage(QWizard* theWrappedObject, int  id)
{
  ( theWrappedObject->removePage(id));
}

void PythonQtWrapper_QWizard::setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, PythonQtPassOwnershipToCPP<QAbstractButton* >  button)
{
  ( theWrappedObject->setButton(which, button));
}

void PythonQtWrapper_QWizard::setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout)
{
  ( theWrappedObject->setButtonLayout(layout));
}

void PythonQtWrapper_QWizard::setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text)
{
  ( theWrappedObject->setButtonText(which, text));
}

void PythonQtWrapper_QWizard::setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value)
{
  ( theWrappedObject->setField(name, value));
}

void PythonQtWrapper_QWizard::setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on)
{
  ( theWrappedObject->setOption(option, on));
}

void PythonQtWrapper_QWizard::setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options)
{
  ( theWrappedObject->setOptions(options));
}

void PythonQtWrapper_QWizard::setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page)
{
  ( theWrappedObject->setPage(id, page));
}

void PythonQtWrapper_QWizard::setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap)
{
  ( theWrappedObject->setPixmap(which, pixmap));
}

void PythonQtWrapper_QWizard::setSideWidget(QWizard* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->setSideWidget(widget));
}

void PythonQtWrapper_QWizard::setStartId(QWizard* theWrappedObject, int  id)
{
  ( theWrappedObject->setStartId(id));
}

void PythonQtWrapper_QWizard::setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format)
{
  ( theWrappedObject->setSubTitleFormat(format));
}

void PythonQtWrapper_QWizard::setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format)
{
  ( theWrappedObject->setTitleFormat(format));
}

void PythonQtWrapper_QWizard::setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style)
{
  ( theWrappedObject->setWizardStyle(style));
}

QWidget*  PythonQtWrapper_QWizard::sideWidget(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->sideWidget());
}

int  PythonQtWrapper_QWizard::startId(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->startId());
}

Qt::TextFormat  PythonQtWrapper_QWizard::subTitleFormat(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->subTitleFormat());
}

bool  PythonQtWrapper_QWizard::testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const
{
  return ( theWrappedObject->testOption(option));
}

Qt::TextFormat  PythonQtWrapper_QWizard::titleFormat(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->titleFormat());
}

bool  PythonQtWrapper_QWizard::validateCurrentPage(QWizard* theWrappedObject)
{
  return ( theWrappedObject->validateCurrentPage());
}

QList<int >  PythonQtWrapper_QWizard::visitedPages(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->visitedPages());
}

QWizard::WizardStyle  PythonQtWrapper_QWizard::wizardStyle(QWizard* theWrappedObject) const
{
  return ( theWrappedObject->wizardStyle());
}



PythonQtShell_QWizardPage::~PythonQtShell_QWizardPage() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QWizardPage::actionEvent(QActionEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::actionEvent(event0);
}
void PythonQtShell_QWizardPage::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::changeEvent(arg__1);
}
void PythonQtShell_QWizardPage::childEvent(QChildEvent*  event0)
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
  QWizardPage::childEvent(event0);
}
void PythonQtShell_QWizardPage::cleanupPage()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("cleanupPage");
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
  QWizardPage::cleanupPage();
}
void PythonQtShell_QWizardPage::closeEvent(QCloseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::closeEvent(event0);
}
void PythonQtShell_QWizardPage::contextMenuEvent(QContextMenuEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::contextMenuEvent(event0);
}
void PythonQtShell_QWizardPage::customEvent(QEvent*  event0)
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
  QWizardPage::customEvent(event0);
}
int  PythonQtShell_QWizardPage::devType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("devType");
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
  return QWizardPage::devType();
}
void PythonQtShell_QWizardPage::dragEnterEvent(QDragEnterEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragEnterEvent*"};
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
  QWizardPage::dragEnterEvent(event0);
}
void PythonQtShell_QWizardPage::dragLeaveEvent(QDragLeaveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
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
  QWizardPage::dragLeaveEvent(event0);
}
void PythonQtShell_QWizardPage::dragMoveEvent(QDragMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDragMoveEvent*"};
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
  QWizardPage::dragMoveEvent(event0);
}
void PythonQtShell_QWizardPage::dropEvent(QDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDropEvent*"};
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
  QWizardPage::dropEvent(event0);
}
void PythonQtShell_QWizardPage::enterEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("enterEvent");
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
  QWizardPage::enterEvent(event0);
}
bool  PythonQtShell_QWizardPage::event(QEvent*  event0)
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
  return QWizardPage::event(event0);
}
bool  PythonQtShell_QWizardPage::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QWizardPage::eventFilter(watched0, event1);
}
void PythonQtShell_QWizardPage::focusInEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::focusInEvent(event0);
}
bool  PythonQtShell_QWizardPage::focusNextPrevChild(bool  next0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("focusNextPrevChild");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QWizardPage::focusNextPrevChild(next0);
}
void PythonQtShell_QWizardPage::focusOutEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::focusOutEvent(event0);
}
bool  PythonQtShell_QWizardPage::hasHeightForWidth() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasHeightForWidth");
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
  return QWizardPage::hasHeightForWidth();
}
int  PythonQtShell_QWizardPage::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("heightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
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
}
  return QWizardPage::heightForWidth(arg__1);
}
void PythonQtShell_QWizardPage::hideEvent(QHideEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::hideEvent(event0);
}
void PythonQtShell_QWizardPage::initPainter(QPainter*  painter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::initPainter(painter0);
}
void PythonQtShell_QWizardPage::initializePage()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("initializePage");
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
  QWizardPage::initializePage();
}
void PythonQtShell_QWizardPage::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QWizardPage::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWizardPage::inputMethodQuery(arg__1);
}
bool  PythonQtShell_QWizardPage::isComplete() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isComplete");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isComplete", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWizardPage::isComplete();
}
void PythonQtShell_QWizardPage::keyPressEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::keyPressEvent(event0);
}
void PythonQtShell_QWizardPage::keyReleaseEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::keyReleaseEvent(event0);
}
void PythonQtShell_QWizardPage::leaveEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("leaveEvent");
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
  QWizardPage::leaveEvent(event0);
}
int  PythonQtShell_QWizardPage::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metric");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
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
}
  return QWizardPage::metric(arg__1);
}
QSize  PythonQtShell_QWizardPage::minimumSizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWizardPage::minimumSizeHint();
}
void PythonQtShell_QWizardPage::mouseDoubleClickEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
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
}
  QWizardPage::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QWizardPage::mouseMoveEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::mouseMoveEvent(event0);
}
void PythonQtShell_QWizardPage::mousePressEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::mousePressEvent(event0);
}
void PythonQtShell_QWizardPage::mouseReleaseEvent(QMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::mouseReleaseEvent(event0);
}
void PythonQtShell_QWizardPage::moveEvent(QMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::moveEvent(event0);
}
bool  PythonQtShell_QWizardPage::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nativeEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QByteArray&" , "void*" , "long*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
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
}
  return QWizardPage::nativeEvent(eventType0, message1, result2);
}
int  PythonQtShell_QWizardPage::nextId() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nextId");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("nextId", methodInfo, result);
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
  return QWizardPage::nextId();
}
QPaintEngine*  PythonQtShell_QWizardPage::paintEngine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWizardPage::paintEngine();
}
void PythonQtShell_QWizardPage::paintEvent(QPaintEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QWizardPage::redirected(QPoint*  offset0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWizardPage::redirected(offset0);
}
void PythonQtShell_QWizardPage::resizeEvent(QResizeEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::resizeEvent(event0);
}
void PythonQtShell_QWizardPage::setVisible(bool  visible0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVisible");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&visible0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWizardPage::setVisible(visible0);
}
QPainter*  PythonQtShell_QWizardPage::sharedPainter() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWizardPage::sharedPainter();
}
void PythonQtShell_QWizardPage::showEvent(QShowEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::showEvent(event0);
}
QSize  PythonQtShell_QWizardPage::sizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QWizardPage::sizeHint();
}
void PythonQtShell_QWizardPage::tabletEvent(QTabletEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("tabletEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTabletEvent*"};
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
  QWizardPage::tabletEvent(event0);
}
void PythonQtShell_QWizardPage::timerEvent(QTimerEvent*  event0)
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
  QWizardPage::timerEvent(event0);
}
bool  PythonQtShell_QWizardPage::validatePage()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("validatePage");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("validatePage", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QWizardPage::validatePage();
}
void PythonQtShell_QWizardPage::wheelEvent(QWheelEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QWizardPage::wheelEvent(event0);
}
QWizardPage* PythonQtWrapper_QWizardPage::new_QWizardPage(QWidget*  parent)
{ 
return new PythonQtShell_QWizardPage(parent); }

const QMetaObject* PythonQtShell_QWizardPage::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QWizardPage::staticMetaObject);
  } else {
    return &QWizardPage::staticMetaObject;
  }
}
int PythonQtShell_QWizardPage::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QWizardPage::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QWizardPage::buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const
{
  return ( theWrappedObject->buttonText(which));
}

void PythonQtWrapper_QWizardPage::cleanupPage(QWizardPage* theWrappedObject)
{
  ( theWrappedObject->cleanupPage());
}

QVariant  PythonQtWrapper_QWizardPage::field(QWizardPage* theWrappedObject, const QString&  name) const
{
  return ( ((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->promoted_field(name));
}

void PythonQtWrapper_QWizardPage::initializePage(QWizardPage* theWrappedObject)
{
  ( theWrappedObject->initializePage());
}

bool  PythonQtWrapper_QWizardPage::isCommitPage(QWizardPage* theWrappedObject) const
{
  return ( theWrappedObject->isCommitPage());
}

bool  PythonQtWrapper_QWizardPage::isComplete(QWizardPage* theWrappedObject) const
{
  return ( theWrappedObject->isComplete());
}

bool  PythonQtWrapper_QWizardPage::isFinalPage(QWizardPage* theWrappedObject) const
{
  return ( theWrappedObject->isFinalPage());
}

int  PythonQtWrapper_QWizardPage::nextId(QWizardPage* theWrappedObject) const
{
  return ( theWrappedObject->nextId());
}

QPixmap  PythonQtWrapper_QWizardPage::pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const
{
  return ( theWrappedObject->pixmap(which));
}

void PythonQtWrapper_QWizardPage::registerField(QWizardPage* theWrappedObject, const QString&  name, QWidget*  widget, const char*  property, const char*  changedSignal)
{
  ( ((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->promoted_registerField(name, widget, property, changedSignal));
}

void PythonQtWrapper_QWizardPage::setButtonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which, const QString&  text)
{
  ( theWrappedObject->setButtonText(which, text));
}

void PythonQtWrapper_QWizardPage::setCommitPage(QWizardPage* theWrappedObject, bool  commitPage)
{
  ( theWrappedObject->setCommitPage(commitPage));
}

void PythonQtWrapper_QWizardPage::setField(QWizardPage* theWrappedObject, const QString&  name, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->promoted_setField(name, value));
}

void PythonQtWrapper_QWizardPage::setFinalPage(QWizardPage* theWrappedObject, bool  finalPage)
{
  ( theWrappedObject->setFinalPage(finalPage));
}

void PythonQtWrapper_QWizardPage::setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap)
{
  ( theWrappedObject->setPixmap(which, pixmap));
}

void PythonQtWrapper_QWizardPage::setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle)
{
  ( theWrappedObject->setSubTitle(subTitle));
}

void PythonQtWrapper_QWizardPage::setTitle(QWizardPage* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setTitle(title));
}

QString  PythonQtWrapper_QWizardPage::subTitle(QWizardPage* theWrappedObject) const
{
  return ( theWrappedObject->subTitle());
}

QString  PythonQtWrapper_QWizardPage::title(QWizardPage* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

bool  PythonQtWrapper_QWizardPage::validatePage(QWizardPage* theWrappedObject)
{
  return ( theWrappedObject->validatePage());
}

QWizard*  PythonQtWrapper_QWizardPage::wizard(QWizardPage* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->promoted_wizard());
}


