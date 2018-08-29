#include "com_trolltech_qt_gui3.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QPainterPath>
#include <QTextCursor>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcolor.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qgridlayout.h>
#include <qgroupbox.h>
#include <qguiapplication.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qinputmethod.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsessionmanager.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstylehints.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtransform.h>
#include <qtranslator.h>
#include <qvector.h>
#include <qvector3d.h>
#include <qwidget.h>
#include <qwindow.h>

PythonQtShell_QGraphicsPixmapItem::~PythonQtShell_QGraphicsPixmapItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsPixmapItem::advance(int  phase0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("advance");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&phase0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsPixmapItem::advance(phase0);
}
QRectF  PythonQtShell_QGraphicsPixmapItem::boundingRect() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
          } else {
            returnValue = *((QRectF*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsPixmapItem::boundingRect();
}
bool  PythonQtShell_QGraphicsPixmapItem::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("collidesWithItem");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&other0, (void*)&mode1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
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
  return QGraphicsPixmapItem::collidesWithItem(other0, mode1);
}
bool  PythonQtShell_QGraphicsPixmapItem::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("collidesWithPath");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&path0, (void*)&mode1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
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
  return QGraphicsPixmapItem::collidesWithPath(path0, mode1);
}
bool  PythonQtShell_QGraphicsPixmapItem::contains(const QPointF&  point0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contains");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QPointF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&point0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
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
  return QGraphicsPixmapItem::contains(point0);
}
void PythonQtShell_QGraphicsPixmapItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::dropEvent(event0);
}
QVariant  PythonQtShell_QGraphicsPixmapItem::extension(const QVariant&  variant0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("extension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&variant0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
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
  return QGraphicsPixmapItem::extension(variant0);
}
void PythonQtShell_QGraphicsPixmapItem::focusInEvent(QFocusEvent*  event0)
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
  QGraphicsPixmapItem::focusInEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::focusOutEvent(QFocusEvent*  event0)
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
  QGraphicsPixmapItem::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::hoverEnterEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::hoverLeaveEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::hoverMoveEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::inputMethodEvent(QInputMethodEvent*  event0)
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
  QGraphicsPixmapItem::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsPixmapItem::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QGraphicsPixmapItem::inputMethodQuery(query0);
}
bool  PythonQtShell_QGraphicsPixmapItem::isObscuredBy(const QGraphicsItem*  item0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isObscuredBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&item0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
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
  return QGraphicsPixmapItem::isObscuredBy(item0);
}
QVariant  PythonQtShell_QGraphicsPixmapItem::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QGraphicsPixmapItem::itemChange(change0, value1);
}
void PythonQtShell_QGraphicsPixmapItem::keyPressEvent(QKeyEvent*  event0)
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
  QGraphicsPixmapItem::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::keyReleaseEvent(QKeyEvent*  event0)
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
  QGraphicsPixmapItem::keyReleaseEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsPixmapItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::mouseReleaseEvent(event0);
}
QPainterPath  PythonQtShell_QGraphicsPixmapItem::opaqueArea() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("opaqueArea");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsPixmapItem::opaqueArea();
}
void PythonQtShell_QGraphicsPixmapItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paint");
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
}
  QGraphicsPixmapItem::paint(painter0, option1, widget2);
}
bool  PythonQtShell_QGraphicsPixmapItem::sceneEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sceneEvent");
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
}
  return QGraphicsPixmapItem::sceneEvent(event0);
}
bool  PythonQtShell_QGraphicsPixmapItem::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sceneEventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
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
  return QGraphicsPixmapItem::sceneEventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsPixmapItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&extension0, (void*)&variant1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsPixmapItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsPixmapItem::shape() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("shape");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsPixmapItem::shape();
}
bool  PythonQtShell_QGraphicsPixmapItem::supportsExtension(QGraphicsItem::Extension  extension0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportsExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QGraphicsPixmapItem::supportsExtension(extension0);
}
int  PythonQtShell_QGraphicsPixmapItem::type() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("type");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
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
  return QGraphicsPixmapItem::type();
}
void PythonQtShell_QGraphicsPixmapItem::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsPixmapItem::wheelEvent(event0);
}
QGraphicsPixmapItem* PythonQtWrapper_QGraphicsPixmapItem::new_QGraphicsPixmapItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPixmapItem(parent); }

QGraphicsPixmapItem* PythonQtWrapper_QGraphicsPixmapItem::new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPixmapItem(pixmap, parent); }

QPointF  PythonQtWrapper_QGraphicsPixmapItem::offset(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

QPixmap  PythonQtWrapper_QGraphicsPixmapItem::pixmap(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->pixmap());
}

void PythonQtWrapper_QGraphicsPixmapItem::setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->setOffset(offset));
}

void PythonQtWrapper_QGraphicsPixmapItem::setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setOffset(x, y));
}

void PythonQtWrapper_QGraphicsPixmapItem::setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap)
{
  ( theWrappedObject->setPixmap(pixmap));
}

void PythonQtWrapper_QGraphicsPixmapItem::setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode)
{
  ( theWrappedObject->setShapeMode(mode));
}

void PythonQtWrapper_QGraphicsPixmapItem::setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode)
{
  ( theWrappedObject->setTransformationMode(mode));
}

QGraphicsPixmapItem::ShapeMode  PythonQtWrapper_QGraphicsPixmapItem::shapeMode(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->shapeMode());
}

Qt::TransformationMode  PythonQtWrapper_QGraphicsPixmapItem::transformationMode(QGraphicsPixmapItem* theWrappedObject) const
{
  return ( theWrappedObject->transformationMode());
}



PythonQtShell_QGraphicsPolygonItem::~PythonQtShell_QGraphicsPolygonItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsPolygonItem::boundingRect() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
          } else {
            returnValue = *((QRectF*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsPolygonItem::boundingRect();
}
bool  PythonQtShell_QGraphicsPolygonItem::contains(const QPointF&  point0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contains");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QPointF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&point0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
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
  return QGraphicsPolygonItem::contains(point0);
}
QVariant  PythonQtShell_QGraphicsPolygonItem::extension(const QVariant&  variant0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("extension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&variant0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
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
  return QGraphicsPolygonItem::extension(variant0);
}
bool  PythonQtShell_QGraphicsPolygonItem::isObscuredBy(const QGraphicsItem*  item0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isObscuredBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&item0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
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
  return QGraphicsPolygonItem::isObscuredBy(item0);
}
QPainterPath  PythonQtShell_QGraphicsPolygonItem::opaqueArea() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("opaqueArea");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsPolygonItem::opaqueArea();
}
void PythonQtShell_QGraphicsPolygonItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paint");
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
}
  QGraphicsPolygonItem::paint(painter0, option1, widget2);
}
void PythonQtShell_QGraphicsPolygonItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&extension0, (void*)&variant1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsPolygonItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsPolygonItem::shape() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("shape");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsPolygonItem::shape();
}
bool  PythonQtShell_QGraphicsPolygonItem::supportsExtension(QGraphicsItem::Extension  extension0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportsExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QGraphicsPolygonItem::supportsExtension(extension0);
}
int  PythonQtShell_QGraphicsPolygonItem::type() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("type");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
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
  return QGraphicsPolygonItem::type();
}
QGraphicsPolygonItem* PythonQtWrapper_QGraphicsPolygonItem::new_QGraphicsPolygonItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPolygonItem(parent); }

QGraphicsPolygonItem* PythonQtWrapper_QGraphicsPolygonItem::new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPolygonItem(polygon, parent); }

QRectF  PythonQtWrapper_QGraphicsPolygonItem::boundingRect(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsPolygonItem::contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QVariant  PythonQtWrapper_QGraphicsPolygonItem::extension(QGraphicsPolygonItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->promoted_extension(variant));
}

Qt::FillRule  PythonQtWrapper_QGraphicsPolygonItem::fillRule(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->fillRule());
}

void PythonQtWrapper_QGraphicsPolygonItem::paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QPolygonF  PythonQtWrapper_QGraphicsPolygonItem::polygon(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->polygon());
}

void PythonQtWrapper_QGraphicsPolygonItem::setExtension(QGraphicsPolygonItem* theWrappedObject, int  extension, const QVariant&  variant)
{
  ( ((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->promoted_setExtension(extension, variant));
}

void PythonQtWrapper_QGraphicsPolygonItem::setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule)
{
  ( theWrappedObject->setFillRule(rule));
}

void PythonQtWrapper_QGraphicsPolygonItem::setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon)
{
  ( theWrappedObject->setPolygon(polygon));
}

QPainterPath  PythonQtWrapper_QGraphicsPolygonItem::shape(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

bool  PythonQtWrapper_QGraphicsPolygonItem::supportsExtension(QGraphicsPolygonItem* theWrappedObject, int  extension) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->promoted_supportsExtension(extension));
}

int  PythonQtWrapper_QGraphicsPolygonItem::type(QGraphicsPolygonItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsProxyWidget::~PythonQtShell_QGraphicsProxyWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsProxyWidget::boundingRect() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
          } else {
            returnValue = *((QRectF*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsProxyWidget::boundingRect();
}
void PythonQtShell_QGraphicsProxyWidget::changeEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::changeEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::childEvent(QChildEvent*  event0)
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
  QGraphicsProxyWidget::childEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::closeEvent(QCloseEvent*  event0)
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
  QGraphicsProxyWidget::closeEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::customEvent(QEvent*  event0)
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
  QGraphicsProxyWidget::customEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::dropEvent(event0);
}
bool  PythonQtShell_QGraphicsProxyWidget::event(QEvent*  event0)
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
  return QGraphicsProxyWidget::event(event0);
}
bool  PythonQtShell_QGraphicsProxyWidget::eventFilter(QObject*  object0, QEvent*  event1)
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
      void* args[3] = {NULL, (void*)&object0, (void*)&event1};
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
  return QGraphicsProxyWidget::eventFilter(object0, event1);
}
void PythonQtShell_QGraphicsProxyWidget::focusInEvent(QFocusEvent*  event0)
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
  QGraphicsProxyWidget::focusInEvent(event0);
}
bool  PythonQtShell_QGraphicsProxyWidget::focusNextPrevChild(bool  next0)
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
  return QGraphicsProxyWidget::focusNextPrevChild(next0);
}
void PythonQtShell_QGraphicsProxyWidget::focusOutEvent(QFocusEvent*  event0)
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
  QGraphicsProxyWidget::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::getContentsMargins(qreal*  left0, qreal*  top1, qreal*  right2, qreal*  bottom3) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::getContentsMargins(left0, top1, right2, bottom3);
}
void PythonQtShell_QGraphicsProxyWidget::grabKeyboardEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::grabKeyboardEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::grabMouseEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::grabMouseEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::hideEvent(QHideEvent*  event0)
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
  QGraphicsProxyWidget::hideEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::hoverEnterEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::hoverLeaveEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::hoverMoveEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::initStyleOption(QStyleOption*  option0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::initStyleOption(option0);
}
void PythonQtShell_QGraphicsProxyWidget::inputMethodEvent(QInputMethodEvent*  event0)
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
  QGraphicsProxyWidget::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsProxyWidget::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QGraphicsProxyWidget::inputMethodQuery(query0);
}
QVariant  PythonQtShell_QGraphicsProxyWidget::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QGraphicsProxyWidget::itemChange(change0, value1);
}
void PythonQtShell_QGraphicsProxyWidget::keyPressEvent(QKeyEvent*  event0)
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
  QGraphicsProxyWidget::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::keyReleaseEvent(QKeyEvent*  event0)
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
  QGraphicsProxyWidget::keyReleaseEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::mouseReleaseEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::moveEvent(QGraphicsSceneMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::moveEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paint");
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
}
  QGraphicsProxyWidget::paint(painter0, option1, widget2);
}
void PythonQtShell_QGraphicsProxyWidget::paintWindowFrame(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::paintWindowFrame(painter0, option1, widget2);
}
void PythonQtShell_QGraphicsProxyWidget::polishEvent()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::polishEvent();
}
QVariant  PythonQtShell_QGraphicsProxyWidget::propertyChange(const QString&  propertyName0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QGraphicsProxyWidget::propertyChange(propertyName0, value1);
}
void PythonQtShell_QGraphicsProxyWidget::resizeEvent(QGraphicsSceneResizeEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::resizeEvent(event0);
}
bool  PythonQtShell_QGraphicsProxyWidget::sceneEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sceneEvent");
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
}
  return QGraphicsProxyWidget::sceneEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::setGeometry(const QRectF&  rect0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::setGeometry(rect0);
}
QPainterPath  PythonQtShell_QGraphicsProxyWidget::shape() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("shape");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsProxyWidget::shape();
}
void PythonQtShell_QGraphicsProxyWidget::showEvent(QShowEvent*  event0)
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
  QGraphicsProxyWidget::showEvent(event0);
}
QSizeF  PythonQtShell_QGraphicsProxyWidget::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QGraphicsProxyWidget::sizeHint(which0, constraint1);
}
void PythonQtShell_QGraphicsProxyWidget::timerEvent(QTimerEvent*  event0)
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
  QGraphicsProxyWidget::timerEvent(event0);
}
int  PythonQtShell_QGraphicsProxyWidget::type() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("type");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
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
  return QGraphicsProxyWidget::type();
}
void PythonQtShell_QGraphicsProxyWidget::ungrabKeyboardEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::ungrabKeyboardEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::ungrabMouseEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::ungrabMouseEvent(event0);
}
void PythonQtShell_QGraphicsProxyWidget::updateGeometry()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsProxyWidget::updateGeometry();
}
void PythonQtShell_QGraphicsProxyWidget::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsProxyWidget::wheelEvent(event0);
}
bool  PythonQtShell_QGraphicsProxyWidget::windowFrameEvent(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("windowFrameEvent");
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
}
  return QGraphicsProxyWidget::windowFrameEvent(e0);
}
Qt::WindowFrameSection  PythonQtShell_QGraphicsProxyWidget::windowFrameSectionAt(const QPointF&  pos0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QGraphicsProxyWidget::windowFrameSectionAt(pos0);
}
QGraphicsProxyWidget* PythonQtWrapper_QGraphicsProxyWidget::new_QGraphicsProxyWidget(PythonQtNewOwnerOfThis<QGraphicsItem* >  parent, Qt::WindowFlags  wFlags)
{ 
return new PythonQtShell_QGraphicsProxyWidget(parent, wFlags); }

const QMetaObject* PythonQtShell_QGraphicsProxyWidget::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsProxyWidget::staticMetaObject);
  } else {
    return &QGraphicsProxyWidget::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsProxyWidget::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsProxyWidget::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QGraphicsProxyWidget::contextMenuEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_contextMenuEvent(event));
}

QGraphicsProxyWidget*  PythonQtWrapper_QGraphicsProxyWidget::createProxyForChildWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  child)
{
  return ( theWrappedObject->createProxyForChildWidget(child));
}

void PythonQtWrapper_QGraphicsProxyWidget::dragEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::dragLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::dragMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::dropEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_dropEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::hoverEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_hoverEnterEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::inputMethodEvent(QGraphicsProxyWidget* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_inputMethodEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsProxyWidget::inputMethodQuery(QGraphicsProxyWidget* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_inputMethodQuery(query));
}

void PythonQtWrapper_QGraphicsProxyWidget::keyPressEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::keyReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::mouseDoubleClickEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::mouseMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::mousePressEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::mouseReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

void PythonQtWrapper_QGraphicsProxyWidget::setWidget(QGraphicsProxyWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget)
{
  ( theWrappedObject->setWidget(widget));
}

QRectF  PythonQtWrapper_QGraphicsProxyWidget::subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const
{
  return ( theWrappedObject->subWidgetRect(widget));
}

void PythonQtWrapper_QGraphicsProxyWidget::wheelEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneWheelEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->promoted_wheelEvent(event));
}

QWidget*  PythonQtWrapper_QGraphicsProxyWidget::widget(QGraphicsProxyWidget* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}



PythonQtShell_QGraphicsRectItem::~PythonQtShell_QGraphicsRectItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsRectItem::boundingRect() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
          } else {
            returnValue = *((QRectF*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsRectItem::boundingRect();
}
bool  PythonQtShell_QGraphicsRectItem::contains(const QPointF&  point0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contains");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QPointF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&point0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
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
  return QGraphicsRectItem::contains(point0);
}
QVariant  PythonQtShell_QGraphicsRectItem::extension(const QVariant&  variant0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("extension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&variant0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
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
  return QGraphicsRectItem::extension(variant0);
}
bool  PythonQtShell_QGraphicsRectItem::isObscuredBy(const QGraphicsItem*  item0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isObscuredBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&item0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
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
  return QGraphicsRectItem::isObscuredBy(item0);
}
QPainterPath  PythonQtShell_QGraphicsRectItem::opaqueArea() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("opaqueArea");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsRectItem::opaqueArea();
}
void PythonQtShell_QGraphicsRectItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paint");
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
}
  QGraphicsRectItem::paint(painter0, option1, widget2);
}
void PythonQtShell_QGraphicsRectItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&extension0, (void*)&variant1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsRectItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsRectItem::shape() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("shape");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsRectItem::shape();
}
bool  PythonQtShell_QGraphicsRectItem::supportsExtension(QGraphicsItem::Extension  extension0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportsExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QGraphicsRectItem::supportsExtension(extension0);
}
int  PythonQtShell_QGraphicsRectItem::type() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("type");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
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
  return QGraphicsRectItem::type();
}
QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsRectItem(parent); }

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsRectItem(rect, parent); }

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsRectItem(x, y, w, h, parent); }

QRectF  PythonQtWrapper_QGraphicsRectItem::boundingRect(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsRectItem::contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QVariant  PythonQtWrapper_QGraphicsRectItem::extension(QGraphicsRectItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->promoted_extension(variant));
}

void PythonQtWrapper_QGraphicsRectItem::paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QRectF  PythonQtWrapper_QGraphicsRectItem::rect(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QGraphicsRectItem::setExtension(QGraphicsRectItem* theWrappedObject, int  extension, const QVariant&  variant)
{
  ( ((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->promoted_setExtension(extension, variant));
}

void PythonQtWrapper_QGraphicsRectItem::setRect(QGraphicsRectItem* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setRect(rect));
}

void PythonQtWrapper_QGraphicsRectItem::setRect(QGraphicsRectItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setRect(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsRectItem::shape(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

bool  PythonQtWrapper_QGraphicsRectItem::supportsExtension(QGraphicsRectItem* theWrappedObject, int  extension) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsRectItem*)theWrappedObject)->promoted_supportsExtension(extension));
}

int  PythonQtWrapper_QGraphicsRectItem::type(QGraphicsRectItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsRotation::~PythonQtShell_QGraphicsRotation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsRotation::applyTo(QMatrix4x4*  matrix0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("applyTo");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMatrix4x4*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&matrix0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsRotation::applyTo(matrix0);
}
void PythonQtShell_QGraphicsRotation::childEvent(QChildEvent*  event0)
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
  QGraphicsRotation::childEvent(event0);
}
void PythonQtShell_QGraphicsRotation::customEvent(QEvent*  event0)
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
  QGraphicsRotation::customEvent(event0);
}
bool  PythonQtShell_QGraphicsRotation::event(QEvent*  event0)
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
  return QGraphicsRotation::event(event0);
}
bool  PythonQtShell_QGraphicsRotation::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsRotation::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsRotation::timerEvent(QTimerEvent*  event0)
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
  QGraphicsRotation::timerEvent(event0);
}
QGraphicsRotation* PythonQtWrapper_QGraphicsRotation::new_QGraphicsRotation(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsRotation(parent); }

const QMetaObject* PythonQtShell_QGraphicsRotation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsRotation::staticMetaObject);
  } else {
    return &QGraphicsRotation::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsRotation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsRotation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
qreal  PythonQtWrapper_QGraphicsRotation::angle(QGraphicsRotation* theWrappedObject) const
{
  return ( theWrappedObject->angle());
}

QVector3D  PythonQtWrapper_QGraphicsRotation::axis(QGraphicsRotation* theWrappedObject) const
{
  return ( theWrappedObject->axis());
}

QVector3D  PythonQtWrapper_QGraphicsRotation::origin(QGraphicsRotation* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QGraphicsRotation::setAngle(QGraphicsRotation* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setAngle(arg__1));
}

void PythonQtWrapper_QGraphicsRotation::setAxis(QGraphicsRotation* theWrappedObject, Qt::Axis  axis)
{
  ( theWrappedObject->setAxis(axis));
}

void PythonQtWrapper_QGraphicsRotation::setAxis(QGraphicsRotation* theWrappedObject, const QVector3D&  axis)
{
  ( theWrappedObject->setAxis(axis));
}

void PythonQtWrapper_QGraphicsRotation::setOrigin(QGraphicsRotation* theWrappedObject, const QVector3D&  point)
{
  ( theWrappedObject->setOrigin(point));
}



PythonQtShell_QGraphicsScale::~PythonQtShell_QGraphicsScale() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsScale::applyTo(QMatrix4x4*  matrix0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("applyTo");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMatrix4x4*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&matrix0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsScale::applyTo(matrix0);
}
void PythonQtShell_QGraphicsScale::childEvent(QChildEvent*  event0)
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
  QGraphicsScale::childEvent(event0);
}
void PythonQtShell_QGraphicsScale::customEvent(QEvent*  event0)
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
  QGraphicsScale::customEvent(event0);
}
bool  PythonQtShell_QGraphicsScale::event(QEvent*  event0)
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
  return QGraphicsScale::event(event0);
}
bool  PythonQtShell_QGraphicsScale::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsScale::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsScale::timerEvent(QTimerEvent*  event0)
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
  QGraphicsScale::timerEvent(event0);
}
QGraphicsScale* PythonQtWrapper_QGraphicsScale::new_QGraphicsScale(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScale(parent); }

const QMetaObject* PythonQtShell_QGraphicsScale::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsScale::staticMetaObject);
  } else {
    return &QGraphicsScale::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsScale::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsScale::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QVector3D  PythonQtWrapper_QGraphicsScale::origin(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->origin());
}

void PythonQtWrapper_QGraphicsScale::setOrigin(QGraphicsScale* theWrappedObject, const QVector3D&  point)
{
  ( theWrappedObject->setOrigin(point));
}

void PythonQtWrapper_QGraphicsScale::setXScale(QGraphicsScale* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setXScale(arg__1));
}

void PythonQtWrapper_QGraphicsScale::setYScale(QGraphicsScale* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setYScale(arg__1));
}

void PythonQtWrapper_QGraphicsScale::setZScale(QGraphicsScale* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setZScale(arg__1));
}

qreal  PythonQtWrapper_QGraphicsScale::xScale(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->xScale());
}

qreal  PythonQtWrapper_QGraphicsScale::yScale(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->yScale());
}

qreal  PythonQtWrapper_QGraphicsScale::zScale(QGraphicsScale* theWrappedObject) const
{
  return ( theWrappedObject->zScale());
}



PythonQtShell_QGraphicsScene::~PythonQtShell_QGraphicsScene() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsScene::childEvent(QChildEvent*  event0)
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
  QGraphicsScene::childEvent(event0);
}
void PythonQtShell_QGraphicsScene::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsScene::customEvent(QEvent*  event0)
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
  QGraphicsScene::customEvent(event0);
}
void PythonQtShell_QGraphicsScene::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsScene::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsScene::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsScene::drawBackground(QPainter*  painter0, const QRectF&  rect1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("drawBackground");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&painter0, (void*)&rect1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsScene::drawBackground(painter0, rect1);
}
void PythonQtShell_QGraphicsScene::drawForeground(QPainter*  painter0, const QRectF&  rect1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("drawForeground");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&painter0, (void*)&rect1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsScene::drawForeground(painter0, rect1);
}
void PythonQtShell_QGraphicsScene::drawItems(QPainter*  painter0, int  numItems1, QGraphicsItem**  items2, const QStyleOptionGraphicsItem*  options3, QWidget*  widget4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("drawItems");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*" , "int" , "QGraphicsItem**" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      void* args[6] = {NULL, (void*)&painter0, (void*)&numItems1, (void*)&items2, (void*)&options3, (void*)&widget4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsScene::drawItems(painter0, numItems1, items2, options3, widget4);
}
void PythonQtShell_QGraphicsScene::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::dropEvent(event0);
}
bool  PythonQtShell_QGraphicsScene::event(QEvent*  event0)
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
  return QGraphicsScene::event(event0);
}
bool  PythonQtShell_QGraphicsScene::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsScene::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsScene::focusInEvent(QFocusEvent*  event0)
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
  QGraphicsScene::focusInEvent(event0);
}
void PythonQtShell_QGraphicsScene::focusOutEvent(QFocusEvent*  event0)
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
  QGraphicsScene::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsScene::helpEvent(QGraphicsSceneHelpEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("helpEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHelpEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::helpEvent(event0);
}
void PythonQtShell_QGraphicsScene::inputMethodEvent(QInputMethodEvent*  event0)
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
  QGraphicsScene::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsScene::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QGraphicsScene::inputMethodQuery(query0);
}
void PythonQtShell_QGraphicsScene::keyPressEvent(QKeyEvent*  event0)
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
  QGraphicsScene::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsScene::keyReleaseEvent(QKeyEvent*  event0)
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
  QGraphicsScene::keyReleaseEvent(event0);
}
void PythonQtShell_QGraphicsScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::mouseReleaseEvent(event0);
}
void PythonQtShell_QGraphicsScene::timerEvent(QTimerEvent*  event0)
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
  QGraphicsScene::timerEvent(event0);
}
void PythonQtShell_QGraphicsScene::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("wheelEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsScene::wheelEvent(event0);
}
QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(parent); }

QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(sceneRect, parent); }

QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(x, y, width, height, parent); }

const QMetaObject* PythonQtShell_QGraphicsScene::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsScene::staticMetaObject);
  } else {
    return &QGraphicsScene::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsScene::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsScene::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QGraphicsItem*  PythonQtWrapper_QGraphicsScene::activePanel(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->activePanel());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsScene::activeWindow(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->activeWindow());
}

QGraphicsEllipseItem*  PythonQtWrapper_QGraphicsScene::addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addEllipse(rect, pen, brush));
}

QGraphicsEllipseItem*  PythonQtWrapper_QGraphicsScene::addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addEllipse(x, y, w, h, pen, brush));
}

void PythonQtWrapper_QGraphicsScene::addItem(QGraphicsScene* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsItem* >  item)
{
  ( theWrappedObject->addItem(item));
}

QGraphicsLineItem*  PythonQtWrapper_QGraphicsScene::addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen)
{
  return ( theWrappedObject->addLine(line, pen));
}

QGraphicsLineItem*  PythonQtWrapper_QGraphicsScene::addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen)
{
  return ( theWrappedObject->addLine(x1, y1, x2, y2, pen));
}

QGraphicsPathItem*  PythonQtWrapper_QGraphicsScene::addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addPath(path, pen, brush));
}

QGraphicsPixmapItem*  PythonQtWrapper_QGraphicsScene::addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap)
{
  return ( theWrappedObject->addPixmap(pixmap));
}

QGraphicsPolygonItem*  PythonQtWrapper_QGraphicsScene::addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addPolygon(polygon, pen, brush));
}

QGraphicsRectItem*  PythonQtWrapper_QGraphicsScene::addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addRect(rect, pen, brush));
}

QGraphicsRectItem*  PythonQtWrapper_QGraphicsScene::addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen, const QBrush&  brush)
{
  return ( theWrappedObject->addRect(x, y, w, h, pen, brush));
}

QGraphicsSimpleTextItem*  PythonQtWrapper_QGraphicsScene::addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font)
{
  return ( theWrappedObject->addSimpleText(text, font));
}

QGraphicsTextItem*  PythonQtWrapper_QGraphicsScene::addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font)
{
  return ( theWrappedObject->addText(text, font));
}

QGraphicsProxyWidget*  PythonQtWrapper_QGraphicsScene::addWidget(QGraphicsScene* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, Qt::WindowFlags  wFlags)
{
  return ( theWrappedObject->addWidget(widget, wFlags));
}

QBrush  PythonQtWrapper_QGraphicsScene::backgroundBrush(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->backgroundBrush());
}

int  PythonQtWrapper_QGraphicsScene::bspTreeDepth(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->bspTreeDepth());
}

void PythonQtWrapper_QGraphicsScene::clearFocus(QGraphicsScene* theWrappedObject)
{
  ( theWrappedObject->clearFocus());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->collidingItems(item, mode));
}

void PythonQtWrapper_QGraphicsScene::contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_contextMenuEvent(event));
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsScene::createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items)
{
  return ( theWrappedObject->createItemGroup(items));
}

void PythonQtWrapper_QGraphicsScene::destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group)
{
  ( theWrappedObject->destroyItemGroup(group));
}

void PythonQtWrapper_QGraphicsScene::dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QGraphicsScene::dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsScene::dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QGraphicsScene::drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_drawBackground(painter, rect));
}

void PythonQtWrapper_QGraphicsScene::drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_drawForeground(painter, rect));
}

void PythonQtWrapper_QGraphicsScene::drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_drawItems(painter, numItems, items, options, widget));
}

void PythonQtWrapper_QGraphicsScene::dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_dropEvent(event));
}

void PythonQtWrapper_QGraphicsScene::focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_focusInEvent(event));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::focusItem(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->focusItem());
}

void PythonQtWrapper_QGraphicsScene::focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_focusOutEvent(event));
}

QFont  PythonQtWrapper_QGraphicsScene::font(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QBrush  PythonQtWrapper_QGraphicsScene::foregroundBrush(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->foregroundBrush());
}

bool  PythonQtWrapper_QGraphicsScene::hasFocus(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

qreal  PythonQtWrapper_QGraphicsScene::height(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

void PythonQtWrapper_QGraphicsScene::helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_helpEvent(event));
}

void PythonQtWrapper_QGraphicsScene::inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_inputMethodEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsScene::inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( theWrappedObject->inputMethodQuery(query));
}

void PythonQtWrapper_QGraphicsScene::invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers)
{
  ( theWrappedObject->invalidate(x, y, w, h, layers));
}

bool  PythonQtWrapper_QGraphicsScene::isActive(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QGraphicsScene::isSortCacheEnabled(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->isSortCacheEnabled());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->itemAt(pos, deviceTransform));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->itemAt(x, y, deviceTransform));
}

QGraphicsScene::ItemIndexMethod  PythonQtWrapper_QGraphicsScene::itemIndexMethod(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->itemIndexMethod());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, Qt::SortOrder  order) const
{
  return ( theWrappedObject->items(order));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(path, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPointF&  pos, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(pos, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(polygon, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(rect, mode, order, deviceTransform));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform) const
{
  return ( theWrappedObject->items(x, y, w, h, mode, order, deviceTransform));
}

QRectF  PythonQtWrapper_QGraphicsScene::itemsBoundingRect(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->itemsBoundingRect());
}

void PythonQtWrapper_QGraphicsScene::keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QGraphicsScene::keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

qreal  PythonQtWrapper_QGraphicsScene::minimumRenderSize(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->minimumRenderSize());
}

void PythonQtWrapper_QGraphicsScene::mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::mouseGrabberItem(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->mouseGrabberItem());
}

void PythonQtWrapper_QGraphicsScene::mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsScene::mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsScene::mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

QPalette  PythonQtWrapper_QGraphicsScene::palette(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->palette());
}

void PythonQtWrapper_QGraphicsScene::removeItem(QGraphicsScene* theWrappedObject, PythonQtPassOwnershipToPython<QGraphicsItem* >  item)
{
  ( theWrappedObject->removeItem(item));
}

void PythonQtWrapper_QGraphicsScene::render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target, const QRectF&  source, Qt::AspectRatioMode  aspectRatioMode)
{
  ( theWrappedObject->render(painter, target, source, aspectRatioMode));
}

QRectF  PythonQtWrapper_QGraphicsScene::sceneRect(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->sceneRect());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::selectedItems(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->selectedItems());
}

QPainterPath  PythonQtWrapper_QGraphicsScene::selectionArea(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->selectionArea());
}

bool  PythonQtWrapper_QGraphicsScene::sendEvent(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, QEvent*  event)
{
  return ( theWrappedObject->sendEvent(item, event));
}

void PythonQtWrapper_QGraphicsScene::setActivePanel(QGraphicsScene* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->setActivePanel(item));
}

void PythonQtWrapper_QGraphicsScene::setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget)
{
  ( theWrappedObject->setActiveWindow(widget));
}

void PythonQtWrapper_QGraphicsScene::setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackgroundBrush(brush));
}

void PythonQtWrapper_QGraphicsScene::setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth)
{
  ( theWrappedObject->setBspTreeDepth(depth));
}

void PythonQtWrapper_QGraphicsScene::setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason)
{
  ( theWrappedObject->setFocus(focusReason));
}

void PythonQtWrapper_QGraphicsScene::setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason)
{
  ( theWrappedObject->setFocusItem(item, focusReason));
}

void PythonQtWrapper_QGraphicsScene::setFont(QGraphicsScene* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsScene::setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForegroundBrush(brush));
}

void PythonQtWrapper_QGraphicsScene::setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method)
{
  ( theWrappedObject->setItemIndexMethod(method));
}

void PythonQtWrapper_QGraphicsScene::setMinimumRenderSize(QGraphicsScene* theWrappedObject, qreal  minSize)
{
  ( theWrappedObject->setMinimumRenderSize(minSize));
}

void PythonQtWrapper_QGraphicsScene::setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette)
{
  ( theWrappedObject->setPalette(palette));
}

void PythonQtWrapper_QGraphicsScene::setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setSceneRect(rect));
}

void PythonQtWrapper_QGraphicsScene::setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setSceneRect(x, y, w, h));
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode, const QTransform&  deviceTransform)
{
  ( theWrappedObject->setSelectionArea(path, mode, deviceTransform));
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionOperation  selectionOperation, Qt::ItemSelectionMode  mode, const QTransform&  deviceTransform)
{
  ( theWrappedObject->setSelectionArea(path, selectionOperation, mode, deviceTransform));
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QTransform&  deviceTransform)
{
  ( theWrappedObject->setSelectionArea(path, deviceTransform));
}

void PythonQtWrapper_QGraphicsScene::setSortCacheEnabled(QGraphicsScene* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setSortCacheEnabled(enabled));
}

void PythonQtWrapper_QGraphicsScene::setStickyFocus(QGraphicsScene* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setStickyFocus(enabled));
}

void PythonQtWrapper_QGraphicsScene::setStyle(QGraphicsScene* theWrappedObject, QStyle*  style)
{
  ( theWrappedObject->setStyle(style));
}

bool  PythonQtWrapper_QGraphicsScene::stickyFocus(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->stickyFocus());
}

QStyle*  PythonQtWrapper_QGraphicsScene::style(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

void PythonQtWrapper_QGraphicsScene::update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->update(x, y, w, h));
}

QList<QGraphicsView* >  PythonQtWrapper_QGraphicsScene::views(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->views());
}

void PythonQtWrapper_QGraphicsScene::wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)->promoted_wheelEvent(event));
}

qreal  PythonQtWrapper_QGraphicsScene::width(QGraphicsScene* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QGraphicsSceneContextMenuEvent* PythonQtWrapper_QGraphicsSceneContextMenuEvent::new_QGraphicsSceneContextMenuEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneContextMenuEvent(type); }

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneContextMenuEvent::modifiers(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneContextMenuEvent::pos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QGraphicsSceneContextMenuEvent::Reason  PythonQtWrapper_QGraphicsSceneContextMenuEvent::reason(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->reason());
}

QPointF  PythonQtWrapper_QGraphicsSceneContextMenuEvent::scenePos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneContextMenuEvent::screenPos(QGraphicsSceneContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setModifiers(QGraphicsSceneContextMenuEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setReason(QGraphicsSceneContextMenuEvent* theWrappedObject, QGraphicsSceneContextMenuEvent::Reason  reason)
{
  ( theWrappedObject->setReason(reason));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setScenePos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneContextMenuEvent::setScreenPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneDragDropEvent* PythonQtWrapper_QGraphicsSceneDragDropEvent::new_QGraphicsSceneDragDropEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneDragDropEvent(type); }

void PythonQtWrapper_QGraphicsSceneDragDropEvent::acceptProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject)
{
  ( theWrappedObject->acceptProposedAction());
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneDragDropEvent::buttons(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

Qt::DropAction  PythonQtWrapper_QGraphicsSceneDragDropEvent::dropAction(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->dropAction());
}

const QMimeData*  PythonQtWrapper_QGraphicsSceneDragDropEvent::mimeData(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->mimeData());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneDragDropEvent::modifiers(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneDragDropEvent::pos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

Qt::DropActions  PythonQtWrapper_QGraphicsSceneDragDropEvent::possibleActions(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->possibleActions());
}

Qt::DropAction  PythonQtWrapper_QGraphicsSceneDragDropEvent::proposedAction(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->proposedAction());
}

QPointF  PythonQtWrapper_QGraphicsSceneDragDropEvent::scenePos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneDragDropEvent::screenPos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setButtons(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setButtons(buttons));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setDropAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action)
{
  ( theWrappedObject->setDropAction(action));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setModifiers(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setPossibleActions(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropActions  actions)
{
  ( theWrappedObject->setPossibleActions(actions));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action)
{
  ( theWrappedObject->setProposedAction(action));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setScenePos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setScreenPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}

QWidget*  PythonQtWrapper_QGraphicsSceneDragDropEvent::source(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->source());
}



QGraphicsSceneEvent* PythonQtWrapper_QGraphicsSceneEvent::new_QGraphicsSceneEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneEvent(type); }

QWidget*  PythonQtWrapper_QGraphicsSceneEvent::widget(QGraphicsSceneEvent* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}



QGraphicsSceneHelpEvent* PythonQtWrapper_QGraphicsSceneHelpEvent::new_QGraphicsSceneHelpEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneHelpEvent(type); }

QPointF  PythonQtWrapper_QGraphicsSceneHelpEvent::scenePos(QGraphicsSceneHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneHelpEvent::screenPos(QGraphicsSceneHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneHelpEvent::setScenePos(QGraphicsSceneHelpEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneHelpEvent::setScreenPos(QGraphicsSceneHelpEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneHoverEvent* PythonQtWrapper_QGraphicsSceneHoverEvent::new_QGraphicsSceneHoverEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneHoverEvent(type); }

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::lastPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastPos());
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::lastScenePos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneHoverEvent::lastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScreenPos());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneHoverEvent::modifiers(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::pos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QGraphicsSceneHoverEvent::scenePos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneHoverEvent::screenPos(QGraphicsSceneHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastPos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setLastScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setLastScreenPos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setModifiers(QGraphicsSceneHoverEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setScenePos(QGraphicsSceneHoverEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneHoverEvent::setScreenPos(QGraphicsSceneHoverEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



QGraphicsSceneMouseEvent* PythonQtWrapper_QGraphicsSceneMouseEvent::new_QGraphicsSceneMouseEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneMouseEvent(type); }

Qt::MouseButton  PythonQtWrapper_QGraphicsSceneMouseEvent::button(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->button());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
  return ( theWrappedObject->buttonDownPos(button));
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
  return ( theWrappedObject->buttonDownScenePos(button));
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::buttonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button) const
{
  return ( theWrappedObject->buttonDownScreenPos(button));
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneMouseEvent::buttons(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

Qt::MouseEventFlags  PythonQtWrapper_QGraphicsSceneMouseEvent::flags(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::lastPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastPos());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::lastScenePos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::lastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->lastScreenPos());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneMouseEvent::modifiers(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::pos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QGraphicsSceneMouseEvent::scenePos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneMouseEvent::screenPos(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButton(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button)
{
  ( theWrappedObject->setButton(button));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos)
{
  ( theWrappedObject->setButtonDownPos(button, pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownScenePos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPointF&  pos)
{
  ( theWrappedObject->setButtonDownScenePos(button, pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtonDownScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButton  button, const QPoint&  pos)
{
  ( theWrappedObject->setButtonDownScreenPos(button, pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setButtons(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setButtons(buttons));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setFlags(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseEventFlags  arg__1)
{
  ( theWrappedObject->setFlags(arg__1));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setLastScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setLastScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setLastScreenPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setModifiers(QGraphicsSceneMouseEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setScenePos(QGraphicsSceneMouseEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setScreenPos(QGraphicsSceneMouseEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMouseEvent::setSource(QGraphicsSceneMouseEvent* theWrappedObject, Qt::MouseEventSource  source)
{
  ( theWrappedObject->setSource(source));
}

Qt::MouseEventSource  PythonQtWrapper_QGraphicsSceneMouseEvent::source(QGraphicsSceneMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->source());
}



QGraphicsSceneMoveEvent* PythonQtWrapper_QGraphicsSceneMoveEvent::new_QGraphicsSceneMoveEvent()
{ 
return new QGraphicsSceneMoveEvent(); }

QPointF  PythonQtWrapper_QGraphicsSceneMoveEvent::newPos(QGraphicsSceneMoveEvent* theWrappedObject) const
{
  return ( theWrappedObject->newPos());
}

QPointF  PythonQtWrapper_QGraphicsSceneMoveEvent::oldPos(QGraphicsSceneMoveEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldPos());
}

void PythonQtWrapper_QGraphicsSceneMoveEvent::setNewPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setNewPos(pos));
}

void PythonQtWrapper_QGraphicsSceneMoveEvent::setOldPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setOldPos(pos));
}



QGraphicsSceneResizeEvent* PythonQtWrapper_QGraphicsSceneResizeEvent::new_QGraphicsSceneResizeEvent()
{ 
return new QGraphicsSceneResizeEvent(); }

QSizeF  PythonQtWrapper_QGraphicsSceneResizeEvent::newSize(QGraphicsSceneResizeEvent* theWrappedObject) const
{
  return ( theWrappedObject->newSize());
}

QSizeF  PythonQtWrapper_QGraphicsSceneResizeEvent::oldSize(QGraphicsSceneResizeEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldSize());
}

void PythonQtWrapper_QGraphicsSceneResizeEvent::setNewSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setNewSize(size));
}

void PythonQtWrapper_QGraphicsSceneResizeEvent::setOldSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setOldSize(size));
}



QGraphicsSceneWheelEvent* PythonQtWrapper_QGraphicsSceneWheelEvent::new_QGraphicsSceneWheelEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneWheelEvent(type); }

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneWheelEvent::buttons(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

int  PythonQtWrapper_QGraphicsSceneWheelEvent::delta(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->delta());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneWheelEvent::modifiers(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

Qt::Orientation  PythonQtWrapper_QGraphicsSceneWheelEvent::orientation(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

QPointF  PythonQtWrapper_QGraphicsSceneWheelEvent::pos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QGraphicsSceneWheelEvent::scenePos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QPoint  PythonQtWrapper_QGraphicsSceneWheelEvent::screenPos(QGraphicsSceneWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setButtons(QGraphicsSceneWheelEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setButtons(buttons));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setDelta(QGraphicsSceneWheelEvent* theWrappedObject, int  delta)
{
  ( theWrappedObject->setDelta(delta));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setModifiers(QGraphicsSceneWheelEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setOrientation(QGraphicsSceneWheelEvent* theWrappedObject, Qt::Orientation  orientation)
{
  ( theWrappedObject->setOrientation(orientation));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setScenePos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

void PythonQtWrapper_QGraphicsSceneWheelEvent::setScreenPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}



PythonQtShell_QGraphicsSimpleTextItem::~PythonQtShell_QGraphicsSimpleTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsSimpleTextItem::boundingRect() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
          } else {
            returnValue = *((QRectF*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsSimpleTextItem::boundingRect();
}
bool  PythonQtShell_QGraphicsSimpleTextItem::contains(const QPointF&  point0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contains");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QPointF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&point0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
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
  return QGraphicsSimpleTextItem::contains(point0);
}
QVariant  PythonQtShell_QGraphicsSimpleTextItem::extension(const QVariant&  variant0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("extension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&variant0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
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
  return QGraphicsSimpleTextItem::extension(variant0);
}
bool  PythonQtShell_QGraphicsSimpleTextItem::isObscuredBy(const QGraphicsItem*  item0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isObscuredBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&item0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
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
  return QGraphicsSimpleTextItem::isObscuredBy(item0);
}
QPainterPath  PythonQtShell_QGraphicsSimpleTextItem::opaqueArea() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("opaqueArea");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsSimpleTextItem::opaqueArea();
}
void PythonQtShell_QGraphicsSimpleTextItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paint");
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
}
  QGraphicsSimpleTextItem::paint(painter0, option1, widget2);
}
void PythonQtShell_QGraphicsSimpleTextItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&extension0, (void*)&variant1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsSimpleTextItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsSimpleTextItem::shape() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("shape");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsSimpleTextItem::shape();
}
bool  PythonQtShell_QGraphicsSimpleTextItem::supportsExtension(QGraphicsItem::Extension  extension0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportsExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QGraphicsSimpleTextItem::supportsExtension(extension0);
}
int  PythonQtShell_QGraphicsSimpleTextItem::type() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("type");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
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
  return QGraphicsSimpleTextItem::type();
}
QGraphicsSimpleTextItem* PythonQtWrapper_QGraphicsSimpleTextItem::new_QGraphicsSimpleTextItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsSimpleTextItem(parent); }

QGraphicsSimpleTextItem* PythonQtWrapper_QGraphicsSimpleTextItem::new_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsSimpleTextItem(text, parent); }

QRectF  PythonQtWrapper_QGraphicsSimpleTextItem::boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsSimpleTextItem::contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QVariant  PythonQtWrapper_QGraphicsSimpleTextItem::extension(QGraphicsSimpleTextItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->promoted_extension(variant));
}

QFont  PythonQtWrapper_QGraphicsSimpleTextItem::font(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

void PythonQtWrapper_QGraphicsSimpleTextItem::paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setExtension(QGraphicsSimpleTextItem* theWrappedObject, int  extension, const QVariant&  variant)
{
  ( ((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->promoted_setExtension(extension, variant));
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

QPainterPath  PythonQtWrapper_QGraphicsSimpleTextItem::shape(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

bool  PythonQtWrapper_QGraphicsSimpleTextItem::supportsExtension(QGraphicsSimpleTextItem* theWrappedObject, int  extension) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->promoted_supportsExtension(extension));
}

QString  PythonQtWrapper_QGraphicsSimpleTextItem::text(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

int  PythonQtWrapper_QGraphicsSimpleTextItem::type(QGraphicsSimpleTextItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsTextItem::~PythonQtShell_QGraphicsTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsTextItem::boundingRect() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
          } else {
            returnValue = *((QRectF*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::boundingRect();
}
void PythonQtShell_QGraphicsTextItem::childEvent(QChildEvent*  event0)
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
  QGraphicsTextItem::childEvent(event0);
}
bool  PythonQtShell_QGraphicsTextItem::contains(const QPointF&  point0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contains");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QPointF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&point0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
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
  return QGraphicsTextItem::contains(point0);
}
void PythonQtShell_QGraphicsTextItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::customEvent(QEvent*  event0)
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
  QGraphicsTextItem::customEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::dropEvent(event0);
}
bool  PythonQtShell_QGraphicsTextItem::event(QEvent*  ev0)
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
      void* args[2] = {NULL, (void*)&ev0};
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
  return QGraphicsTextItem::event(ev0);
}
bool  PythonQtShell_QGraphicsTextItem::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsTextItem::eventFilter(watched0, event1);
}
QVariant  PythonQtShell_QGraphicsTextItem::extension(const QVariant&  variant0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("extension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&variant0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
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
  return QGraphicsTextItem::extension(variant0);
}
void PythonQtShell_QGraphicsTextItem::focusInEvent(QFocusEvent*  event0)
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
  QGraphicsTextItem::focusInEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::focusOutEvent(QFocusEvent*  event0)
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
  QGraphicsTextItem::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::hoverEnterEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::hoverLeaveEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::hoverMoveEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::inputMethodEvent(QInputMethodEvent*  event0)
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
  QGraphicsTextItem::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsTextItem::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QGraphicsTextItem::inputMethodQuery(query0);
}
bool  PythonQtShell_QGraphicsTextItem::isObscuredBy(const QGraphicsItem*  item0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isObscuredBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&item0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
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
  return QGraphicsTextItem::isObscuredBy(item0);
}
void PythonQtShell_QGraphicsTextItem::keyPressEvent(QKeyEvent*  event0)
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
  QGraphicsTextItem::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::keyReleaseEvent(QKeyEvent*  event0)
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
  QGraphicsTextItem::keyReleaseEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsTextItem::mouseReleaseEvent(event0);
}
QPainterPath  PythonQtShell_QGraphicsTextItem::opaqueArea() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("opaqueArea");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::opaqueArea();
}
void PythonQtShell_QGraphicsTextItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paint");
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
}
  QGraphicsTextItem::paint(painter0, option1, widget2);
}
bool  PythonQtShell_QGraphicsTextItem::sceneEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sceneEvent");
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
}
  return QGraphicsTextItem::sceneEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&extension0, (void*)&variant1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsTextItem::shape() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("shape");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::shape();
}
bool  PythonQtShell_QGraphicsTextItem::supportsExtension(QGraphicsItem::Extension  extension0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportsExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
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
}
  return QGraphicsTextItem::supportsExtension(extension0);
}
void PythonQtShell_QGraphicsTextItem::timerEvent(QTimerEvent*  event0)
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
  QGraphicsTextItem::timerEvent(event0);
}
int  PythonQtShell_QGraphicsTextItem::type() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("type");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
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
  return QGraphicsTextItem::type();
}
QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsTextItem(parent); }

QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsTextItem(text, parent); }

const QMetaObject* PythonQtShell_QGraphicsTextItem::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsTextItem::staticMetaObject);
  } else {
    return &QGraphicsTextItem::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsTextItem::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsTextItem::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QGraphicsTextItem::adjustSize(QGraphicsTextItem* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

QRectF  PythonQtWrapper_QGraphicsTextItem::boundingRect(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsTextItem::contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

void PythonQtWrapper_QGraphicsTextItem::contextMenuEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_contextMenuEvent(event));
}

QColor  PythonQtWrapper_QGraphicsTextItem::defaultTextColor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextColor());
}

QTextDocument*  PythonQtWrapper_QGraphicsTextItem::document(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

void PythonQtWrapper_QGraphicsTextItem::dragEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::dragLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::dragMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::dropEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_dropEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsTextItem::extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_extension(variant));
}

void PythonQtWrapper_QGraphicsTextItem::focusInEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_focusInEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::focusOutEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_focusOutEvent(event));
}

QFont  PythonQtWrapper_QGraphicsTextItem::font(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

void PythonQtWrapper_QGraphicsTextItem::hoverEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_hoverEnterEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::hoverLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_hoverLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::hoverMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_hoverMoveEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::inputMethodEvent(QGraphicsTextItem* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_inputMethodEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsTextItem::inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_inputMethodQuery(query));
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( theWrappedObject->isObscuredBy(item));
}

void PythonQtWrapper_QGraphicsTextItem::keyPressEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::keyReleaseEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::mouseDoubleClickEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::mouseMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::mousePressEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::mouseReleaseEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::opaqueArea(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->opaqueArea());
}

bool  PythonQtWrapper_QGraphicsTextItem::openExternalLinks(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->openExternalLinks());
}

void PythonQtWrapper_QGraphicsTextItem::paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

bool  PythonQtWrapper_QGraphicsTextItem::sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_sceneEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c)
{
  ( theWrappedObject->setDefaultTextColor(c));
}

void PythonQtWrapper_QGraphicsTextItem::setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document)
{
  ( theWrappedObject->setDocument(document));
}

void PythonQtWrapper_QGraphicsTextItem::setExtension(QGraphicsTextItem* theWrappedObject, int  extension, const QVariant&  variant)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_setExtension(extension, variant));
}

void PythonQtWrapper_QGraphicsTextItem::setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsTextItem::setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QGraphicsTextItem::setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open)
{
  ( theWrappedObject->setOpenExternalLinks(open));
}

void PythonQtWrapper_QGraphicsTextItem::setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setPlainText(text));
}

void PythonQtWrapper_QGraphicsTextItem::setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b)
{
  ( theWrappedObject->setTabChangesFocus(b));
}

void PythonQtWrapper_QGraphicsTextItem::setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->setTextCursor(cursor));
}

void PythonQtWrapper_QGraphicsTextItem::setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

void PythonQtWrapper_QGraphicsTextItem::setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setTextWidth(width));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::shape(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

bool  PythonQtWrapper_QGraphicsTextItem::supportsExtension(QGraphicsTextItem* theWrappedObject, int  extension) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_supportsExtension(extension));
}

bool  PythonQtWrapper_QGraphicsTextItem::tabChangesFocus(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->tabChangesFocus());
}

QTextCursor  PythonQtWrapper_QGraphicsTextItem::textCursor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textCursor());
}

Qt::TextInteractionFlags  PythonQtWrapper_QGraphicsTextItem::textInteractionFlags(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

qreal  PythonQtWrapper_QGraphicsTextItem::textWidth(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textWidth());
}

QString  PythonQtWrapper_QGraphicsTextItem::toHtml(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QString  PythonQtWrapper_QGraphicsTextItem::toPlainText(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

int  PythonQtWrapper_QGraphicsTextItem::type(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsTransform::~PythonQtShell_QGraphicsTransform() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsTransform::applyTo(QMatrix4x4*  matrix0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("applyTo");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QMatrix4x4*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&matrix0};
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
void PythonQtShell_QGraphicsTransform::childEvent(QChildEvent*  event0)
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
  QGraphicsTransform::childEvent(event0);
}
void PythonQtShell_QGraphicsTransform::customEvent(QEvent*  event0)
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
  QGraphicsTransform::customEvent(event0);
}
bool  PythonQtShell_QGraphicsTransform::event(QEvent*  event0)
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
  return QGraphicsTransform::event(event0);
}
bool  PythonQtShell_QGraphicsTransform::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsTransform::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsTransform::timerEvent(QTimerEvent*  event0)
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
  QGraphicsTransform::timerEvent(event0);
}
QGraphicsTransform* PythonQtWrapper_QGraphicsTransform::new_QGraphicsTransform(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsTransform(parent); }

const QMetaObject* PythonQtShell_QGraphicsTransform::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsTransform::staticMetaObject);
  } else {
    return &QGraphicsTransform::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsTransform::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsTransform::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QGraphicsTransform::applyTo(QGraphicsTransform* theWrappedObject, QMatrix4x4*  matrix) const
{
  ( theWrappedObject->applyTo(matrix));
}



PythonQtShell_QGraphicsView::~PythonQtShell_QGraphicsView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsView::actionEvent(QActionEvent*  event0)
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
  QGraphicsView::actionEvent(event0);
}
void PythonQtShell_QGraphicsView::changeEvent(QEvent*  arg__1)
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
  QGraphicsView::changeEvent(arg__1);
}
void PythonQtShell_QGraphicsView::childEvent(QChildEvent*  event0)
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
  QGraphicsView::childEvent(event0);
}
void PythonQtShell_QGraphicsView::closeEvent(QCloseEvent*  event0)
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
  QGraphicsView::closeEvent(event0);
}
void PythonQtShell_QGraphicsView::contextMenuEvent(QContextMenuEvent*  event0)
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
  QGraphicsView::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsView::customEvent(QEvent*  event0)
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
  QGraphicsView::customEvent(event0);
}
int  PythonQtShell_QGraphicsView::devType() const
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
  return QGraphicsView::devType();
}
void PythonQtShell_QGraphicsView::dragEnterEvent(QDragEnterEvent*  event0)
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
  QGraphicsView::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsView::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QGraphicsView::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsView::dragMoveEvent(QDragMoveEvent*  event0)
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
  QGraphicsView::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsView::drawBackground(QPainter*  painter0, const QRectF&  rect1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("drawBackground");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&painter0, (void*)&rect1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsView::drawBackground(painter0, rect1);
}
void PythonQtShell_QGraphicsView::drawForeground(QPainter*  painter0, const QRectF&  rect1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("drawForeground");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&painter0, (void*)&rect1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsView::drawForeground(painter0, rect1);
}
void PythonQtShell_QGraphicsView::drawItems(QPainter*  painter0, int  numItems1, QGraphicsItem**  items2, const QStyleOptionGraphicsItem*  options3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("drawItems");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*" , "int" , "QGraphicsItem**" , "const QStyleOptionGraphicsItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      void* args[5] = {NULL, (void*)&painter0, (void*)&numItems1, (void*)&items2, (void*)&options3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsView::drawItems(painter0, numItems1, items2, options3);
}
void PythonQtShell_QGraphicsView::dropEvent(QDropEvent*  event0)
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
  QGraphicsView::dropEvent(event0);
}
void PythonQtShell_QGraphicsView::enterEvent(QEvent*  event0)
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
  QGraphicsView::enterEvent(event0);
}
bool  PythonQtShell_QGraphicsView::event(QEvent*  event0)
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
  return QGraphicsView::event(event0);
}
bool  PythonQtShell_QGraphicsView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QGraphicsView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsView::focusInEvent(QFocusEvent*  event0)
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
  QGraphicsView::focusInEvent(event0);
}
bool  PythonQtShell_QGraphicsView::focusNextPrevChild(bool  next0)
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
  return QGraphicsView::focusNextPrevChild(next0);
}
void PythonQtShell_QGraphicsView::focusOutEvent(QFocusEvent*  event0)
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
  QGraphicsView::focusOutEvent(event0);
}
bool  PythonQtShell_QGraphicsView::hasHeightForWidth() const
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
  return QGraphicsView::hasHeightForWidth();
}
int  PythonQtShell_QGraphicsView::heightForWidth(int  arg__1) const
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
  return QGraphicsView::heightForWidth(arg__1);
}
void PythonQtShell_QGraphicsView::hideEvent(QHideEvent*  event0)
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
  QGraphicsView::hideEvent(event0);
}
void PythonQtShell_QGraphicsView::initPainter(QPainter*  painter0) const
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
  QGraphicsView::initPainter(painter0);
}
void PythonQtShell_QGraphicsView::inputMethodEvent(QInputMethodEvent*  event0)
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
  QGraphicsView::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsView::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QGraphicsView::inputMethodQuery(query0);
}
void PythonQtShell_QGraphicsView::keyPressEvent(QKeyEvent*  event0)
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
  QGraphicsView::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsView::keyReleaseEvent(QKeyEvent*  event0)
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
  QGraphicsView::keyReleaseEvent(event0);
}
void PythonQtShell_QGraphicsView::leaveEvent(QEvent*  event0)
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
  QGraphicsView::leaveEvent(event0);
}
int  PythonQtShell_QGraphicsView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QGraphicsView::metric(arg__1);
}
QSize  PythonQtShell_QGraphicsView::minimumSizeHint() const
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
  return QGraphicsView::minimumSizeHint();
}
void PythonQtShell_QGraphicsView::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QGraphicsView::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsView::mouseMoveEvent(QMouseEvent*  event0)
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
  QGraphicsView::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsView::mousePressEvent(QMouseEvent*  event0)
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
  QGraphicsView::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsView::mouseReleaseEvent(QMouseEvent*  event0)
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
  QGraphicsView::mouseReleaseEvent(event0);
}
void PythonQtShell_QGraphicsView::moveEvent(QMoveEvent*  event0)
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
  QGraphicsView::moveEvent(event0);
}
bool  PythonQtShell_QGraphicsView::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QGraphicsView::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QGraphicsView::paintEngine() const
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
  return QGraphicsView::paintEngine();
}
void PythonQtShell_QGraphicsView::paintEvent(QPaintEvent*  event0)
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
  QGraphicsView::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QGraphicsView::redirected(QPoint*  offset0) const
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
  return QGraphicsView::redirected(offset0);
}
void PythonQtShell_QGraphicsView::resizeEvent(QResizeEvent*  event0)
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
  QGraphicsView::resizeEvent(event0);
}
void PythonQtShell_QGraphicsView::scrollContentsBy(int  dx0, int  dy1)
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
  QGraphicsView::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QGraphicsView::setVisible(bool  visible0)
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
  QGraphicsView::setVisible(visible0);
}
void PythonQtShell_QGraphicsView::setupViewport(QWidget*  widget0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setupViewport");
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
  QGraphicsView::setupViewport(widget0);
}
QPainter*  PythonQtShell_QGraphicsView::sharedPainter() const
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
  return QGraphicsView::sharedPainter();
}
void PythonQtShell_QGraphicsView::showEvent(QShowEvent*  event0)
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
  QGraphicsView::showEvent(event0);
}
QSize  PythonQtShell_QGraphicsView::sizeHint() const
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
  return QGraphicsView::sizeHint();
}
void PythonQtShell_QGraphicsView::tabletEvent(QTabletEvent*  event0)
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
  QGraphicsView::tabletEvent(event0);
}
void PythonQtShell_QGraphicsView::timerEvent(QTimerEvent*  event0)
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
  QGraphicsView::timerEvent(event0);
}
bool  PythonQtShell_QGraphicsView::viewportEvent(QEvent*  event0)
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
  return QGraphicsView::viewportEvent(event0);
}
QSize  PythonQtShell_QGraphicsView::viewportSizeHint() const
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
  return QGraphicsView::viewportSizeHint();
}
void PythonQtShell_QGraphicsView::wheelEvent(QWheelEvent*  event0)
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
  QGraphicsView::wheelEvent(event0);
}
QGraphicsView* PythonQtWrapper_QGraphicsView::new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent)
{ 
return new PythonQtShell_QGraphicsView(scene, parent); }

QGraphicsView* PythonQtWrapper_QGraphicsView::new_QGraphicsView(QWidget*  parent)
{ 
return new PythonQtShell_QGraphicsView(parent); }

const QMetaObject* PythonQtShell_QGraphicsView::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsView::staticMetaObject);
  } else {
    return &QGraphicsView::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsView::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsView::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
Qt::Alignment  PythonQtWrapper_QGraphicsView::alignment(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

QBrush  PythonQtWrapper_QGraphicsView::backgroundBrush(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->backgroundBrush());
}

QGraphicsView::CacheMode  PythonQtWrapper_QGraphicsView::cacheMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->cacheMode());
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item)
{
  ( theWrappedObject->centerOn(item));
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->centerOn(pos));
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->centerOn(x, y));
}

QGraphicsView::DragMode  PythonQtWrapper_QGraphicsView::dragMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->dragMode());
}

void PythonQtWrapper_QGraphicsView::drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_drawBackground(painter, rect));
}

void PythonQtWrapper_QGraphicsView::drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_drawForeground(painter, rect));
}

void PythonQtWrapper_QGraphicsView::drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options)
{
  ( ((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)->promoted_drawItems(painter, numItems, items, options));
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(item, xmargin, ymargin));
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(rect, xmargin, ymargin));
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin));
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode)
{
  ( theWrappedObject->fitInView(item, aspectRadioMode));
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode)
{
  ( theWrappedObject->fitInView(rect, aspectRadioMode));
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode)
{
  ( theWrappedObject->fitInView(x, y, w, h, aspectRadioMode));
}

QBrush  PythonQtWrapper_QGraphicsView::foregroundBrush(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->foregroundBrush());
}

bool  PythonQtWrapper_QGraphicsView::isInteractive(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->isInteractive());
}

bool  PythonQtWrapper_QGraphicsView::isTransformed(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->isTransformed());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsView::itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->itemAt(pos));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsView::itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->itemAt(x, y));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->items());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(path, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->items(pos));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(polygon, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(rect, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->items(x, y));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->items(x, y, w, h, mode));
}

QPainterPath  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromScene(path));
}

QPoint  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromScene(point));
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromScene(polygon));
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromScene(rect));
}

QPoint  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromScene(x, y));
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromScene(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToScene(path));
}

QPointF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const
{
  return ( theWrappedObject->mapToScene(point));
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const
{
  return ( theWrappedObject->mapToScene(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const
{
  return ( theWrappedObject->mapToScene(rect));
}

QPointF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->mapToScene(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const
{
  return ( theWrappedObject->mapToScene(x, y, w, h));
}

QMatrix  PythonQtWrapper_QGraphicsView::matrix(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->matrix());
}

QGraphicsView::OptimizationFlags  PythonQtWrapper_QGraphicsView::optimizationFlags(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->optimizationFlags());
}

void PythonQtWrapper_QGraphicsView::render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target, const QRect&  source, Qt::AspectRatioMode  aspectRatioMode)
{
  ( theWrappedObject->render(painter, target, source, aspectRatioMode));
}

QPainter::RenderHints  PythonQtWrapper_QGraphicsView::renderHints(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->renderHints());
}

void PythonQtWrapper_QGraphicsView::resetCachedContent(QGraphicsView* theWrappedObject)
{
  ( theWrappedObject->resetCachedContent());
}

void PythonQtWrapper_QGraphicsView::resetMatrix(QGraphicsView* theWrappedObject)
{
  ( theWrappedObject->resetMatrix());
}

void PythonQtWrapper_QGraphicsView::resetTransform(QGraphicsView* theWrappedObject)
{
  ( theWrappedObject->resetTransform());
}

QGraphicsView::ViewportAnchor  PythonQtWrapper_QGraphicsView::resizeAnchor(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->resizeAnchor());
}

void PythonQtWrapper_QGraphicsView::rotate(QGraphicsView* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->rotate(angle));
}

QRect  PythonQtWrapper_QGraphicsView::rubberBandRect(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->rubberBandRect());
}

Qt::ItemSelectionMode  PythonQtWrapper_QGraphicsView::rubberBandSelectionMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->rubberBandSelectionMode());
}

void PythonQtWrapper_QGraphicsView::scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy)
{
  ( theWrappedObject->scale(sx, sy));
}

QGraphicsScene*  PythonQtWrapper_QGraphicsView::scene(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->scene());
}

QRectF  PythonQtWrapper_QGraphicsView::sceneRect(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->sceneRect());
}

void PythonQtWrapper_QGraphicsView::setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QGraphicsView::setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackgroundBrush(brush));
}

void PythonQtWrapper_QGraphicsView::setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode)
{
  ( theWrappedObject->setCacheMode(mode));
}

void PythonQtWrapper_QGraphicsView::setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode)
{
  ( theWrappedObject->setDragMode(mode));
}

void PythonQtWrapper_QGraphicsView::setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForegroundBrush(brush));
}

void PythonQtWrapper_QGraphicsView::setInteractive(QGraphicsView* theWrappedObject, bool  allowed)
{
  ( theWrappedObject->setInteractive(allowed));
}

void PythonQtWrapper_QGraphicsView::setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine)
{
  ( theWrappedObject->setMatrix(matrix, combine));
}

void PythonQtWrapper_QGraphicsView::setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled)
{
  ( theWrappedObject->setOptimizationFlag(flag, enabled));
}

void PythonQtWrapper_QGraphicsView::setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags)
{
  ( theWrappedObject->setOptimizationFlags(flags));
}

void PythonQtWrapper_QGraphicsView::setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled)
{
  ( theWrappedObject->setRenderHint(hint, enabled));
}

void PythonQtWrapper_QGraphicsView::setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints)
{
  ( theWrappedObject->setRenderHints(hints));
}

void PythonQtWrapper_QGraphicsView::setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor)
{
  ( theWrappedObject->setResizeAnchor(anchor));
}

void PythonQtWrapper_QGraphicsView::setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode)
{
  ( theWrappedObject->setRubberBandSelectionMode(mode));
}

void PythonQtWrapper_QGraphicsView::setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene)
{
  ( theWrappedObject->setScene(scene));
}

void PythonQtWrapper_QGraphicsView::setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setSceneRect(rect));
}

void PythonQtWrapper_QGraphicsView::setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setSceneRect(x, y, w, h));
}

void PythonQtWrapper_QGraphicsView::setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine)
{
  ( theWrappedObject->setTransform(matrix, combine));
}

void PythonQtWrapper_QGraphicsView::setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor)
{
  ( theWrappedObject->setTransformationAnchor(anchor));
}

void PythonQtWrapper_QGraphicsView::setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode)
{
  ( theWrappedObject->setViewportUpdateMode(mode));
}

void PythonQtWrapper_QGraphicsView::shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv)
{
  ( theWrappedObject->shear(sh, sv));
}

QTransform  PythonQtWrapper_QGraphicsView::transform(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->transform());
}

QGraphicsView::ViewportAnchor  PythonQtWrapper_QGraphicsView::transformationAnchor(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->transformationAnchor());
}

void PythonQtWrapper_QGraphicsView::translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QTransform  PythonQtWrapper_QGraphicsView::viewportTransform(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->viewportTransform());
}

QGraphicsView::ViewportUpdateMode  PythonQtWrapper_QGraphicsView::viewportUpdateMode(QGraphicsView* theWrappedObject) const
{
  return ( theWrappedObject->viewportUpdateMode());
}



PythonQtShell_QGraphicsWidget::~PythonQtShell_QGraphicsWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsWidget::boundingRect() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
          } else {
            returnValue = *((QRectF*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsWidget::boundingRect();
}
void PythonQtShell_QGraphicsWidget::changeEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::changeEvent(event0);
}
void PythonQtShell_QGraphicsWidget::childEvent(QChildEvent*  event0)
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
  QGraphicsWidget::childEvent(event0);
}
void PythonQtShell_QGraphicsWidget::closeEvent(QCloseEvent*  event0)
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
  QGraphicsWidget::closeEvent(event0);
}
void PythonQtShell_QGraphicsWidget::customEvent(QEvent*  event0)
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
  QGraphicsWidget::customEvent(event0);
}
bool  PythonQtShell_QGraphicsWidget::event(QEvent*  event0)
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
  return QGraphicsWidget::event(event0);
}
bool  PythonQtShell_QGraphicsWidget::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsWidget::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsWidget::focusInEvent(QFocusEvent*  event0)
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
  QGraphicsWidget::focusInEvent(event0);
}
bool  PythonQtShell_QGraphicsWidget::focusNextPrevChild(bool  next0)
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
  return QGraphicsWidget::focusNextPrevChild(next0);
}
void PythonQtShell_QGraphicsWidget::focusOutEvent(QFocusEvent*  event0)
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
  QGraphicsWidget::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsWidget::getContentsMargins(qreal*  left0, qreal*  top1, qreal*  right2, qreal*  bottom3) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::getContentsMargins(left0, top1, right2, bottom3);
}
void PythonQtShell_QGraphicsWidget::grabKeyboardEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::grabKeyboardEvent(event0);
}
void PythonQtShell_QGraphicsWidget::grabMouseEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::grabMouseEvent(event0);
}
void PythonQtShell_QGraphicsWidget::hideEvent(QHideEvent*  event0)
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
  QGraphicsWidget::hideEvent(event0);
}
void PythonQtShell_QGraphicsWidget::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsWidget::hoverLeaveEvent(event0);
}
void PythonQtShell_QGraphicsWidget::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
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
  QGraphicsWidget::hoverMoveEvent(event0);
}
void PythonQtShell_QGraphicsWidget::initStyleOption(QStyleOption*  option0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::initStyleOption(option0);
}
QVariant  PythonQtShell_QGraphicsWidget::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QGraphicsWidget::itemChange(change0, value1);
}
void PythonQtShell_QGraphicsWidget::moveEvent(QGraphicsSceneMoveEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::moveEvent(event0);
}
void PythonQtShell_QGraphicsWidget::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paint");
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
}
  QGraphicsWidget::paint(painter0, option1, widget2);
}
void PythonQtShell_QGraphicsWidget::paintWindowFrame(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::paintWindowFrame(painter0, option1, widget2);
}
void PythonQtShell_QGraphicsWidget::polishEvent()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::polishEvent();
}
QVariant  PythonQtShell_QGraphicsWidget::propertyChange(const QString&  propertyName0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QGraphicsWidget::propertyChange(propertyName0, value1);
}
void PythonQtShell_QGraphicsWidget::resizeEvent(QGraphicsSceneResizeEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::resizeEvent(event0);
}
bool  PythonQtShell_QGraphicsWidget::sceneEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sceneEvent");
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
}
  return QGraphicsWidget::sceneEvent(event0);
}
void PythonQtShell_QGraphicsWidget::setGeometry(const QRectF&  rect0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::setGeometry(rect0);
}
QPainterPath  PythonQtShell_QGraphicsWidget::shape() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("shape");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsWidget::shape();
}
void PythonQtShell_QGraphicsWidget::showEvent(QShowEvent*  event0)
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
  QGraphicsWidget::showEvent(event0);
}
QSizeF  PythonQtShell_QGraphicsWidget::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QGraphicsWidget::sizeHint(which0, constraint1);
}
void PythonQtShell_QGraphicsWidget::timerEvent(QTimerEvent*  event0)
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
  QGraphicsWidget::timerEvent(event0);
}
int  PythonQtShell_QGraphicsWidget::type() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("type");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
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
  return QGraphicsWidget::type();
}
void PythonQtShell_QGraphicsWidget::ungrabKeyboardEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::ungrabKeyboardEvent(event0);
}
void PythonQtShell_QGraphicsWidget::ungrabMouseEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::ungrabMouseEvent(event0);
}
void PythonQtShell_QGraphicsWidget::updateGeometry()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGraphicsWidget::updateGeometry();
}
bool  PythonQtShell_QGraphicsWidget::windowFrameEvent(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("windowFrameEvent");
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
}
  return QGraphicsWidget::windowFrameEvent(e0);
}
Qt::WindowFrameSection  PythonQtShell_QGraphicsWidget::windowFrameSectionAt(const QPointF&  pos0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  return QGraphicsWidget::windowFrameSectionAt(pos0);
}
QGraphicsWidget* PythonQtWrapper_QGraphicsWidget::new_QGraphicsWidget(QGraphicsItem*  parent, Qt::WindowFlags  wFlags)
{ 
return new PythonQtShell_QGraphicsWidget(parent, wFlags); }

const QMetaObject* PythonQtShell_QGraphicsWidget::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsWidget::staticMetaObject);
  } else {
    return &QGraphicsWidget::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsWidget::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsWidget::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QAction* >  PythonQtWrapper_QGraphicsWidget::actions(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->actions());
}

void PythonQtWrapper_QGraphicsWidget::addAction(QGraphicsWidget* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->addAction(action));
}

void PythonQtWrapper_QGraphicsWidget::addActions(QGraphicsWidget* theWrappedObject, QList<QAction* >  actions)
{
  ( theWrappedObject->addActions(actions));
}

void PythonQtWrapper_QGraphicsWidget::adjustSize(QGraphicsWidget* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

bool  PythonQtWrapper_QGraphicsWidget::autoFillBackground(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->autoFillBackground());
}

QRectF  PythonQtWrapper_QGraphicsWidget::boundingRect(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

void PythonQtWrapper_QGraphicsWidget::changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_changeEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_closeEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::focusInEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_focusInEvent(event));
}

bool  PythonQtWrapper_QGraphicsWidget::focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QGraphicsWidget::focusOutEvent(QGraphicsWidget* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_focusOutEvent(event));
}

Qt::FocusPolicy  PythonQtWrapper_QGraphicsWidget::focusPolicy(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->focusPolicy());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsWidget::focusWidget(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->focusWidget());
}

QFont  PythonQtWrapper_QGraphicsWidget::font(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

void PythonQtWrapper_QGraphicsWidget::getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
  ( theWrappedObject->getWindowFrameMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_grabKeyboardEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_grabMouseEvent(event));
}

int  PythonQtWrapper_QGraphicsWidget::grabShortcut(QGraphicsWidget* theWrappedObject, const QKeySequence&  sequence, Qt::ShortcutContext  context)
{
  return ( theWrappedObject->grabShortcut(sequence, context));
}

void PythonQtWrapper_QGraphicsWidget::hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_hideEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_hoverLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_hoverMoveEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_initStyleOption(option));
}

void PythonQtWrapper_QGraphicsWidget::insertAction(QGraphicsWidget* theWrappedObject, QAction*  before, QAction*  action)
{
  ( theWrappedObject->insertAction(before, action));
}

void PythonQtWrapper_QGraphicsWidget::insertActions(QGraphicsWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions)
{
  ( theWrappedObject->insertActions(before, actions));
}

bool  PythonQtWrapper_QGraphicsWidget::isActiveWindow(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->isActiveWindow());
}

QVariant  PythonQtWrapper_QGraphicsWidget::itemChange(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_itemChange(change, value));
}

QGraphicsLayout*  PythonQtWrapper_QGraphicsWidget::layout(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->layout());
}

Qt::LayoutDirection  PythonQtWrapper_QGraphicsWidget::layoutDirection(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->layoutDirection());
}

void PythonQtWrapper_QGraphicsWidget::moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_moveEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsWidget::paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paintWindowFrame(painter, option, widget));
}

QPalette  PythonQtWrapper_QGraphicsWidget::palette(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->palette());
}

void PythonQtWrapper_QGraphicsWidget::polishEvent(QGraphicsWidget* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_polishEvent());
}

QVariant  PythonQtWrapper_QGraphicsWidget::propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_propertyChange(propertyName, value));
}

QRectF  PythonQtWrapper_QGraphicsWidget::rect(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QGraphicsWidget::releaseShortcut(QGraphicsWidget* theWrappedObject, int  id)
{
  ( theWrappedObject->releaseShortcut(id));
}

void PythonQtWrapper_QGraphicsWidget::removeAction(QGraphicsWidget* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->removeAction(action));
}

void PythonQtWrapper_QGraphicsWidget::resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->resize(size));
}

void PythonQtWrapper_QGraphicsWidget::resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->resize(w, h));
}

void PythonQtWrapper_QGraphicsWidget::resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_resizeEvent(event));
}

bool  PythonQtWrapper_QGraphicsWidget::sceneEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_sceneEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on)
{
  ( theWrappedObject->setAttribute(attribute, on));
}

void PythonQtWrapper_QGraphicsWidget::setAutoFillBackground(QGraphicsWidget* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAutoFillBackground(enabled));
}

void PythonQtWrapper_QGraphicsWidget::setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
  ( theWrappedObject->setContentsMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy)
{
  ( theWrappedObject->setFocusPolicy(policy));
}

void PythonQtWrapper_QGraphicsWidget::setFont(QGraphicsWidget* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsWidget::setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setGeometry(x, y, w, h));
}

void PythonQtWrapper_QGraphicsWidget::setLayout(QGraphicsWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayout* >  layout)
{
  ( theWrappedObject->setLayout(layout));
}

void PythonQtWrapper_QGraphicsWidget::setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction)
{
  ( theWrappedObject->setLayoutDirection(direction));
}

void PythonQtWrapper_QGraphicsWidget::setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette)
{
  ( theWrappedObject->setPalette(palette));
}

void PythonQtWrapper_QGraphicsWidget::setShortcutAutoRepeat(QGraphicsWidget* theWrappedObject, int  id, bool  enabled)
{
  ( theWrappedObject->setShortcutAutoRepeat(id, enabled));
}

void PythonQtWrapper_QGraphicsWidget::setShortcutEnabled(QGraphicsWidget* theWrappedObject, int  id, bool  enabled)
{
  ( theWrappedObject->setShortcutEnabled(id, enabled));
}

void PythonQtWrapper_QGraphicsWidget::setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style)
{
  ( theWrappedObject->setStyle(style));
}

void PythonQtWrapper_QGraphicsWidget::static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second)
{
  (QGraphicsWidget::setTabOrder(first, second));
}

void PythonQtWrapper_QGraphicsWidget::setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags)
{
  ( theWrappedObject->setWindowFlags(wFlags));
}

void PythonQtWrapper_QGraphicsWidget::setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
  ( theWrappedObject->setWindowFrameMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsWidget::setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setWindowTitle(title));
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::shape(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

void PythonQtWrapper_QGraphicsWidget::showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_showEvent(event));
}

QSizeF  PythonQtWrapper_QGraphicsWidget::size(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QStyle*  PythonQtWrapper_QGraphicsWidget::style(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

bool  PythonQtWrapper_QGraphicsWidget::testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const
{
  return ( theWrappedObject->testAttribute(attribute));
}

int  PythonQtWrapper_QGraphicsWidget::type(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QGraphicsWidget::ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_ungrabKeyboardEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_ungrabMouseEvent(event));
}

void PythonQtWrapper_QGraphicsWidget::unsetLayoutDirection(QGraphicsWidget* theWrappedObject)
{
  ( theWrappedObject->unsetLayoutDirection());
}

void PythonQtWrapper_QGraphicsWidget::unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject)
{
  ( theWrappedObject->unsetWindowFrameMargins());
}

Qt::WindowFlags  PythonQtWrapper_QGraphicsWidget::windowFlags(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFlags());
}

bool  PythonQtWrapper_QGraphicsWidget::windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_windowFrameEvent(e));
}

QRectF  PythonQtWrapper_QGraphicsWidget::windowFrameGeometry(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFrameGeometry());
}

QRectF  PythonQtWrapper_QGraphicsWidget::windowFrameRect(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowFrameRect());
}

Qt::WindowFrameSection  PythonQtWrapper_QGraphicsWidget::windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsWidget*)theWrappedObject)->promoted_windowFrameSectionAt(pos));
}

QString  PythonQtWrapper_QGraphicsWidget::windowTitle(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowTitle());
}

Qt::WindowType  PythonQtWrapper_QGraphicsWidget::windowType(QGraphicsWidget* theWrappedObject) const
{
  return ( theWrappedObject->windowType());
}



PythonQtShell_QGridLayout::~PythonQtShell_QGridLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGridLayout::addItem(QLayoutItem*  arg__1)
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
  QGridLayout::addItem(arg__1);
}
void PythonQtShell_QGridLayout::childEvent(QChildEvent*  e0)
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
  QGridLayout::childEvent(e0);
}
QSizePolicy::ControlTypes  PythonQtShell_QGridLayout::controlTypes() const
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
  return QGridLayout::controlTypes();
}
int  PythonQtShell_QGridLayout::count() const
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
  return QGridLayout::count();
}
void PythonQtShell_QGridLayout::customEvent(QEvent*  event0)
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
  QGridLayout::customEvent(event0);
}
bool  PythonQtShell_QGridLayout::event(QEvent*  event0)
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
  return QGridLayout::event(event0);
}
bool  PythonQtShell_QGridLayout::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGridLayout::eventFilter(watched0, event1);
}
Qt::Orientations  PythonQtShell_QGridLayout::expandingDirections() const
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
  return QGridLayout::expandingDirections();
}
QRect  PythonQtShell_QGridLayout::geometry() const
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
  return QGridLayout::geometry();
}
bool  PythonQtShell_QGridLayout::hasHeightForWidth() const
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
  return QGridLayout::hasHeightForWidth();
}
int  PythonQtShell_QGridLayout::heightForWidth(int  arg__1) const
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
  return QGridLayout::heightForWidth(arg__1);
}
int  PythonQtShell_QGridLayout::indexOf(QWidget*  arg__1) const
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
  return QGridLayout::indexOf(arg__1);
}
void PythonQtShell_QGridLayout::invalidate()
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
  QGridLayout::invalidate();
}
bool  PythonQtShell_QGridLayout::isEmpty() const
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
  return QGridLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QGridLayout::itemAt(int  index0) const
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
      void* args[2] = {NULL, (void*)&index0};
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
  return QGridLayout::itemAt(index0);
}
QLayout*  PythonQtShell_QGridLayout::layout()
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
  return QGridLayout::layout();
}
QSize  PythonQtShell_QGridLayout::maximumSize() const
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
  return QGridLayout::maximumSize();
}
int  PythonQtShell_QGridLayout::minimumHeightForWidth(int  arg__1) const
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
  return QGridLayout::minimumHeightForWidth(arg__1);
}
QSize  PythonQtShell_QGridLayout::minimumSize() const
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
  return QGridLayout::minimumSize();
}
void PythonQtShell_QGridLayout::setGeometry(const QRect&  arg__1)
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
  QGridLayout::setGeometry(arg__1);
}
QSize  PythonQtShell_QGridLayout::sizeHint() const
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
  return QGridLayout::sizeHint();
}
QLayoutItem*  PythonQtShell_QGridLayout::takeAt(int  index0)
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
      void* args[2] = {NULL, (void*)&index0};
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
  return QGridLayout::takeAt(index0);
}
void PythonQtShell_QGridLayout::timerEvent(QTimerEvent*  event0)
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
  QGridLayout::timerEvent(event0);
}
QGridLayout* PythonQtWrapper_QGridLayout::new_QGridLayout()
{ 
return new PythonQtShell_QGridLayout(); }

QGridLayout* PythonQtWrapper_QGridLayout::new_QGridLayout(QWidget*  parent)
{ 
return new PythonQtShell_QGridLayout(parent); }

const QMetaObject* PythonQtShell_QGridLayout::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGridLayout::staticMetaObject);
  } else {
    return &QGridLayout::staticMetaObject;
  }
}
int PythonQtShell_QGridLayout::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGridLayout::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QGridLayout::addItem(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
  ( theWrappedObject->addItem(item, row, column, rowSpan, columnSpan, arg__6));
}

void PythonQtWrapper_QGridLayout::addLayout(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1, int  row, int  column, Qt::Alignment  arg__4)
{
  ( theWrappedObject->addLayout(arg__1, row, column, arg__4));
}

void PythonQtWrapper_QGridLayout::addLayout(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
  ( theWrappedObject->addLayout(arg__1, row, column, rowSpan, columnSpan, arg__6));
}

void PythonQtWrapper_QGridLayout::addWidget(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  row, int  column, Qt::Alignment  arg__4)
{
  ( theWrappedObject->addWidget(arg__1, row, column, arg__4));
}

void PythonQtWrapper_QGridLayout::addWidget(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
  ( theWrappedObject->addWidget(arg__1, row, column, rowSpan, columnSpan, arg__6));
}

QRect  PythonQtWrapper_QGridLayout::cellRect(QGridLayout* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->cellRect(row, column));
}

int  PythonQtWrapper_QGridLayout::columnCount(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->columnCount());
}

int  PythonQtWrapper_QGridLayout::columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnMinimumWidth(column));
}

int  PythonQtWrapper_QGridLayout::columnStretch(QGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnStretch(column));
}

bool  PythonQtWrapper_QGridLayout::hasHeightForWidth(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->hasHeightForWidth());
}

int  PythonQtWrapper_QGridLayout::heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->heightForWidth(arg__1));
}

int  PythonQtWrapper_QGridLayout::horizontalSpacing(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->horizontalSpacing());
}

QLayoutItem*  PythonQtWrapper_QGridLayout::itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->itemAtPosition(row, column));
}

int  PythonQtWrapper_QGridLayout::minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->minimumHeightForWidth(arg__1));
}

Qt::Corner  PythonQtWrapper_QGridLayout::originCorner(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->originCorner());
}

int  PythonQtWrapper_QGridLayout::rowCount(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->rowCount());
}

int  PythonQtWrapper_QGridLayout::rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowMinimumHeight(row));
}

int  PythonQtWrapper_QGridLayout::rowStretch(QGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowStretch(row));
}

void PythonQtWrapper_QGridLayout::setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize)
{
  ( theWrappedObject->setColumnMinimumWidth(column, minSize));
}

void PythonQtWrapper_QGridLayout::setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch)
{
  ( theWrappedObject->setColumnStretch(column, stretch));
}

void PythonQtWrapper_QGridLayout::setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient)
{
  ( theWrappedObject->setDefaultPositioning(n, orient));
}

void PythonQtWrapper_QGridLayout::setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing)
{
  ( theWrappedObject->setHorizontalSpacing(spacing));
}

void PythonQtWrapper_QGridLayout::setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1)
{
  ( theWrappedObject->setOriginCorner(arg__1));
}

void PythonQtWrapper_QGridLayout::setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize)
{
  ( theWrappedObject->setRowMinimumHeight(row, minSize));
}

void PythonQtWrapper_QGridLayout::setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch)
{
  ( theWrappedObject->setRowStretch(row, stretch));
}

void PythonQtWrapper_QGridLayout::setSpacing(QGridLayout* theWrappedObject, int  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

void PythonQtWrapper_QGridLayout::setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing)
{
  ( theWrappedObject->setVerticalSpacing(spacing));
}

QSize  PythonQtWrapper_QGridLayout::sizeHint(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

int  PythonQtWrapper_QGridLayout::spacing(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->spacing());
}

int  PythonQtWrapper_QGridLayout::verticalSpacing(QGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->verticalSpacing());
}



PythonQtShell_QGroupBox::~PythonQtShell_QGroupBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGroupBox::actionEvent(QActionEvent*  event0)
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
  QGroupBox::actionEvent(event0);
}
void PythonQtShell_QGroupBox::changeEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QGroupBox::changeEvent(event0);
}
void PythonQtShell_QGroupBox::childEvent(QChildEvent*  event0)
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
  QGroupBox::childEvent(event0);
}
void PythonQtShell_QGroupBox::closeEvent(QCloseEvent*  event0)
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
  QGroupBox::closeEvent(event0);
}
void PythonQtShell_QGroupBox::contextMenuEvent(QContextMenuEvent*  event0)
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
  QGroupBox::contextMenuEvent(event0);
}
void PythonQtShell_QGroupBox::customEvent(QEvent*  event0)
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
  QGroupBox::customEvent(event0);
}
int  PythonQtShell_QGroupBox::devType() const
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
  return QGroupBox::devType();
}
void PythonQtShell_QGroupBox::dragEnterEvent(QDragEnterEvent*  event0)
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
  QGroupBox::dragEnterEvent(event0);
}
void PythonQtShell_QGroupBox::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QGroupBox::dragLeaveEvent(event0);
}
void PythonQtShell_QGroupBox::dragMoveEvent(QDragMoveEvent*  event0)
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
  QGroupBox::dragMoveEvent(event0);
}
void PythonQtShell_QGroupBox::dropEvent(QDropEvent*  event0)
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
  QGroupBox::dropEvent(event0);
}
void PythonQtShell_QGroupBox::enterEvent(QEvent*  event0)
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
  QGroupBox::enterEvent(event0);
}
bool  PythonQtShell_QGroupBox::event(QEvent*  event0)
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
  return QGroupBox::event(event0);
}
bool  PythonQtShell_QGroupBox::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGroupBox::eventFilter(watched0, event1);
}
void PythonQtShell_QGroupBox::focusInEvent(QFocusEvent*  event0)
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
  QGroupBox::focusInEvent(event0);
}
bool  PythonQtShell_QGroupBox::focusNextPrevChild(bool  next0)
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
  return QGroupBox::focusNextPrevChild(next0);
}
void PythonQtShell_QGroupBox::focusOutEvent(QFocusEvent*  event0)
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
  QGroupBox::focusOutEvent(event0);
}
bool  PythonQtShell_QGroupBox::hasHeightForWidth() const
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
  return QGroupBox::hasHeightForWidth();
}
int  PythonQtShell_QGroupBox::heightForWidth(int  arg__1) const
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
  return QGroupBox::heightForWidth(arg__1);
}
void PythonQtShell_QGroupBox::hideEvent(QHideEvent*  event0)
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
  QGroupBox::hideEvent(event0);
}
void PythonQtShell_QGroupBox::initPainter(QPainter*  painter0) const
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
  QGroupBox::initPainter(painter0);
}
void PythonQtShell_QGroupBox::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QGroupBox::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QGroupBox::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QGroupBox::inputMethodQuery(arg__1);
}
void PythonQtShell_QGroupBox::keyPressEvent(QKeyEvent*  event0)
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
  QGroupBox::keyPressEvent(event0);
}
void PythonQtShell_QGroupBox::keyReleaseEvent(QKeyEvent*  event0)
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
  QGroupBox::keyReleaseEvent(event0);
}
void PythonQtShell_QGroupBox::leaveEvent(QEvent*  event0)
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
  QGroupBox::leaveEvent(event0);
}
int  PythonQtShell_QGroupBox::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QGroupBox::metric(arg__1);
}
QSize  PythonQtShell_QGroupBox::minimumSizeHint() const
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
  return QGroupBox::minimumSizeHint();
}
void PythonQtShell_QGroupBox::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QGroupBox::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGroupBox::mouseMoveEvent(QMouseEvent*  event0)
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
  QGroupBox::mouseMoveEvent(event0);
}
void PythonQtShell_QGroupBox::mousePressEvent(QMouseEvent*  event0)
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
  QGroupBox::mousePressEvent(event0);
}
void PythonQtShell_QGroupBox::mouseReleaseEvent(QMouseEvent*  event0)
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
  QGroupBox::mouseReleaseEvent(event0);
}
void PythonQtShell_QGroupBox::moveEvent(QMoveEvent*  event0)
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
  QGroupBox::moveEvent(event0);
}
bool  PythonQtShell_QGroupBox::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QGroupBox::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QGroupBox::paintEngine() const
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
  return QGroupBox::paintEngine();
}
void PythonQtShell_QGroupBox::paintEvent(QPaintEvent*  event0)
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
  QGroupBox::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QGroupBox::redirected(QPoint*  offset0) const
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
  return QGroupBox::redirected(offset0);
}
void PythonQtShell_QGroupBox::resizeEvent(QResizeEvent*  event0)
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
  QGroupBox::resizeEvent(event0);
}
void PythonQtShell_QGroupBox::setVisible(bool  visible0)
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
  QGroupBox::setVisible(visible0);
}
QPainter*  PythonQtShell_QGroupBox::sharedPainter() const
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
  return QGroupBox::sharedPainter();
}
void PythonQtShell_QGroupBox::showEvent(QShowEvent*  event0)
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
  QGroupBox::showEvent(event0);
}
QSize  PythonQtShell_QGroupBox::sizeHint() const
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
  return QGroupBox::sizeHint();
}
void PythonQtShell_QGroupBox::tabletEvent(QTabletEvent*  event0)
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
  QGroupBox::tabletEvent(event0);
}
void PythonQtShell_QGroupBox::timerEvent(QTimerEvent*  event0)
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
  QGroupBox::timerEvent(event0);
}
void PythonQtShell_QGroupBox::wheelEvent(QWheelEvent*  event0)
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
  QGroupBox::wheelEvent(event0);
}
QGroupBox* PythonQtWrapper_QGroupBox::new_QGroupBox(QWidget*  parent)
{ 
return new PythonQtShell_QGroupBox(parent); }

QGroupBox* PythonQtWrapper_QGroupBox::new_QGroupBox(const QString&  title, QWidget*  parent)
{ 
return new PythonQtShell_QGroupBox(title, parent); }

const QMetaObject* PythonQtShell_QGroupBox::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGroupBox::staticMetaObject);
  } else {
    return &QGroupBox::staticMetaObject;
  }
}
int PythonQtShell_QGroupBox::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGroupBox::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
Qt::Alignment  PythonQtWrapper_QGroupBox::alignment(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

void PythonQtWrapper_QGroupBox::initStyleOption(QGroupBox* theWrappedObject, QStyleOptionGroupBox*  option) const
{
  ( ((PythonQtPublicPromoter_QGroupBox*)theWrappedObject)->promoted_initStyleOption(option));
}

bool  PythonQtWrapper_QGroupBox::isCheckable(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->isCheckable());
}

bool  PythonQtWrapper_QGroupBox::isChecked(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->isChecked());
}

bool  PythonQtWrapper_QGroupBox::isFlat(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->isFlat());
}

QSize  PythonQtWrapper_QGroupBox::minimumSizeHint(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QGroupBox::setAlignment(QGroupBox* theWrappedObject, int  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QGroupBox::setCheckable(QGroupBox* theWrappedObject, bool  checkable)
{
  ( theWrappedObject->setCheckable(checkable));
}

void PythonQtWrapper_QGroupBox::setFlat(QGroupBox* theWrappedObject, bool  flat)
{
  ( theWrappedObject->setFlat(flat));
}

void PythonQtWrapper_QGroupBox::setTitle(QGroupBox* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setTitle(title));
}

QString  PythonQtWrapper_QGroupBox::title(QGroupBox* theWrappedObject) const
{
  return ( theWrappedObject->title());
}



QList<QWindow* >  PythonQtWrapper_QGuiApplication::static_QGuiApplication_allWindows()
{
  return (QGuiApplication::allWindows());
}

QString  PythonQtWrapper_QGuiApplication::static_QGuiApplication_applicationDisplayName()
{
  return (QGuiApplication::applicationDisplayName());
}

Qt::ApplicationState  PythonQtWrapper_QGuiApplication::static_QGuiApplication_applicationState()
{
  return (QGuiApplication::applicationState());
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_changeOverrideCursor(const QCursor&  arg__1)
{
  (QGuiApplication::changeOverrideCursor(arg__1));
}

QClipboard*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_clipboard()
{
  return (QGuiApplication::clipboard());
}

bool  PythonQtWrapper_QGuiApplication::static_QGuiApplication_desktopSettingsAware()
{
  return (QGuiApplication::desktopSettingsAware());
}

qreal  PythonQtWrapper_QGuiApplication::devicePixelRatio(QGuiApplication* theWrappedObject) const
{
  return ( theWrappedObject->devicePixelRatio());
}

int  PythonQtWrapper_QGuiApplication::static_QGuiApplication_exec()
{
  return (QGuiApplication::exec());
}

QObject*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_focusObject()
{
  return (QGuiApplication::focusObject());
}

QWindow*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_focusWindow()
{
  return (QGuiApplication::focusWindow());
}

QFont  PythonQtWrapper_QGuiApplication::static_QGuiApplication_font()
{
  return (QGuiApplication::font());
}

QInputMethod*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_inputMethod()
{
  return (QGuiApplication::inputMethod());
}

bool  PythonQtWrapper_QGuiApplication::static_QGuiApplication_isFallbackSessionManagementEnabled()
{
  return (QGuiApplication::isFallbackSessionManagementEnabled());
}

bool  PythonQtWrapper_QGuiApplication::static_QGuiApplication_isLeftToRight()
{
  return (QGuiApplication::isLeftToRight());
}

bool  PythonQtWrapper_QGuiApplication::static_QGuiApplication_isRightToLeft()
{
  return (QGuiApplication::isRightToLeft());
}

bool  PythonQtWrapper_QGuiApplication::isSavingSession(QGuiApplication* theWrappedObject) const
{
  return ( theWrappedObject->isSavingSession());
}

bool  PythonQtWrapper_QGuiApplication::isSessionRestored(QGuiApplication* theWrappedObject) const
{
  return ( theWrappedObject->isSessionRestored());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGuiApplication::static_QGuiApplication_keyboardModifiers()
{
  return (QGuiApplication::keyboardModifiers());
}

Qt::LayoutDirection  PythonQtWrapper_QGuiApplication::static_QGuiApplication_layoutDirection()
{
  return (QGuiApplication::layoutDirection());
}

QWindow*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_modalWindow()
{
  return (QGuiApplication::modalWindow());
}

Qt::MouseButtons  PythonQtWrapper_QGuiApplication::static_QGuiApplication_mouseButtons()
{
  return (QGuiApplication::mouseButtons());
}

QCursor*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_overrideCursor()
{
  return (QGuiApplication::overrideCursor());
}

QPalette  PythonQtWrapper_QGuiApplication::static_QGuiApplication_palette()
{
  return (QGuiApplication::palette());
}

QString  PythonQtWrapper_QGuiApplication::static_QGuiApplication_platformName()
{
  return (QGuiApplication::platformName());
}

QScreen*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_primaryScreen()
{
  return (QGuiApplication::primaryScreen());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGuiApplication::static_QGuiApplication_queryKeyboardModifiers()
{
  return (QGuiApplication::queryKeyboardModifiers());
}

bool  PythonQtWrapper_QGuiApplication::static_QGuiApplication_quitOnLastWindowClosed()
{
  return (QGuiApplication::quitOnLastWindowClosed());
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_restoreOverrideCursor()
{
  (QGuiApplication::restoreOverrideCursor());
}

QList<QScreen* >  PythonQtWrapper_QGuiApplication::static_QGuiApplication_screens()
{
  return (QGuiApplication::screens());
}

QString  PythonQtWrapper_QGuiApplication::sessionId(QGuiApplication* theWrappedObject) const
{
  return ( theWrappedObject->sessionId());
}

QString  PythonQtWrapper_QGuiApplication::sessionKey(QGuiApplication* theWrappedObject) const
{
  return ( theWrappedObject->sessionKey());
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setApplicationDisplayName(const QString&  name)
{
  (QGuiApplication::setApplicationDisplayName(name));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setDesktopSettingsAware(bool  on)
{
  (QGuiApplication::setDesktopSettingsAware(on));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setFallbackSessionManagementEnabled(bool  arg__1)
{
  (QGuiApplication::setFallbackSessionManagementEnabled(arg__1));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setFont(const QFont&  arg__1)
{
  (QGuiApplication::setFont(arg__1));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setLayoutDirection(Qt::LayoutDirection  direction)
{
  (QGuiApplication::setLayoutDirection(direction));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setOverrideCursor(const QCursor&  arg__1)
{
  (QGuiApplication::setOverrideCursor(arg__1));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setPalette(const QPalette&  pal)
{
  (QGuiApplication::setPalette(pal));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setQuitOnLastWindowClosed(bool  quit)
{
  (QGuiApplication::setQuitOnLastWindowClosed(quit));
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_setWindowIcon(const QIcon&  icon)
{
  (QGuiApplication::setWindowIcon(icon));
}

QStyleHints*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_styleHints()
{
  return (QGuiApplication::styleHints());
}

void PythonQtWrapper_QGuiApplication::static_QGuiApplication_sync()
{
  (QGuiApplication::sync());
}

QWindow*  PythonQtWrapper_QGuiApplication::static_QGuiApplication_topLevelAt(const QPoint&  pos)
{
  return (QGuiApplication::topLevelAt(pos));
}

QList<QWindow* >  PythonQtWrapper_QGuiApplication::static_QGuiApplication_topLevelWindows()
{
  return (QGuiApplication::topLevelWindows());
}

QIcon  PythonQtWrapper_QGuiApplication::static_QGuiApplication_windowIcon()
{
  return (QGuiApplication::windowIcon());
}



PythonQtShell_QHBoxLayout::~PythonQtShell_QHBoxLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QHBoxLayout::addItem(QLayoutItem*  arg__1)
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
  QHBoxLayout::addItem(arg__1);
}
void PythonQtShell_QHBoxLayout::childEvent(QChildEvent*  e0)
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
  QHBoxLayout::childEvent(e0);
}
QSizePolicy::ControlTypes  PythonQtShell_QHBoxLayout::controlTypes() const
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
  return QHBoxLayout::controlTypes();
}
int  PythonQtShell_QHBoxLayout::count() const
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
  return QHBoxLayout::count();
}
void PythonQtShell_QHBoxLayout::customEvent(QEvent*  event0)
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
  QHBoxLayout::customEvent(event0);
}
bool  PythonQtShell_QHBoxLayout::event(QEvent*  event0)
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
  return QHBoxLayout::event(event0);
}
bool  PythonQtShell_QHBoxLayout::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QHBoxLayout::eventFilter(watched0, event1);
}
Qt::Orientations  PythonQtShell_QHBoxLayout::expandingDirections() const
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
  return QHBoxLayout::expandingDirections();
}
QRect  PythonQtShell_QHBoxLayout::geometry() const
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
  return QHBoxLayout::geometry();
}
bool  PythonQtShell_QHBoxLayout::hasHeightForWidth() const
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
  return QHBoxLayout::hasHeightForWidth();
}
int  PythonQtShell_QHBoxLayout::heightForWidth(int  arg__1) const
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
  return QHBoxLayout::heightForWidth(arg__1);
}
int  PythonQtShell_QHBoxLayout::indexOf(QWidget*  arg__1) const
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
  return QHBoxLayout::indexOf(arg__1);
}
void PythonQtShell_QHBoxLayout::invalidate()
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
  QHBoxLayout::invalidate();
}
bool  PythonQtShell_QHBoxLayout::isEmpty() const
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
  return QHBoxLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QHBoxLayout::itemAt(int  arg__1) const
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
  return QHBoxLayout::itemAt(arg__1);
}
QLayout*  PythonQtShell_QHBoxLayout::layout()
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
  return QHBoxLayout::layout();
}
QSize  PythonQtShell_QHBoxLayout::maximumSize() const
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
  return QHBoxLayout::maximumSize();
}
int  PythonQtShell_QHBoxLayout::minimumHeightForWidth(int  arg__1) const
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
  return QHBoxLayout::minimumHeightForWidth(arg__1);
}
QSize  PythonQtShell_QHBoxLayout::minimumSize() const
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
  return QHBoxLayout::minimumSize();
}
void PythonQtShell_QHBoxLayout::setGeometry(const QRect&  arg__1)
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
  QHBoxLayout::setGeometry(arg__1);
}
QSize  PythonQtShell_QHBoxLayout::sizeHint() const
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
  return QHBoxLayout::sizeHint();
}
QLayoutItem*  PythonQtShell_QHBoxLayout::takeAt(int  arg__1)
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
  return QHBoxLayout::takeAt(arg__1);
}
void PythonQtShell_QHBoxLayout::timerEvent(QTimerEvent*  event0)
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
  QHBoxLayout::timerEvent(event0);
}
QHBoxLayout* PythonQtWrapper_QHBoxLayout::new_QHBoxLayout()
{ 
return new PythonQtShell_QHBoxLayout(); }

QHBoxLayout* PythonQtWrapper_QHBoxLayout::new_QHBoxLayout(QWidget*  parent)
{ 
return new PythonQtShell_QHBoxLayout(parent); }

const QMetaObject* PythonQtShell_QHBoxLayout::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QHBoxLayout::staticMetaObject);
  } else {
    return &QHBoxLayout::staticMetaObject;
  }
}
int PythonQtShell_QHBoxLayout::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QHBoxLayout::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


PythonQtShell_QHeaderView::~PythonQtShell_QHeaderView() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QHeaderView::actionEvent(QActionEvent*  event0)
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
  QHeaderView::actionEvent(event0);
}
void PythonQtShell_QHeaderView::changeEvent(QEvent*  arg__1)
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
  QHeaderView::changeEvent(arg__1);
}
void PythonQtShell_QHeaderView::childEvent(QChildEvent*  event0)
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
  QHeaderView::childEvent(event0);
}
void PythonQtShell_QHeaderView::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
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
  QHeaderView::closeEditor(editor0, hint1);
}
void PythonQtShell_QHeaderView::closeEvent(QCloseEvent*  event0)
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
  QHeaderView::closeEvent(event0);
}
void PythonQtShell_QHeaderView::commitData(QWidget*  editor0)
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
  QHeaderView::commitData(editor0);
}
void PythonQtShell_QHeaderView::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QHeaderView::contextMenuEvent(arg__1);
}
void PythonQtShell_QHeaderView::currentChanged(const QModelIndex&  current0, const QModelIndex&  old1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("currentChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&current0, (void*)&old1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHeaderView::currentChanged(current0, old1);
}
void PythonQtShell_QHeaderView::customEvent(QEvent*  event0)
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
  QHeaderView::customEvent(event0);
}
void PythonQtShell_QHeaderView::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, const QVector<int >&  roles2)
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
  QHeaderView::dataChanged(topLeft0, bottomRight1, roles2);
}
int  PythonQtShell_QHeaderView::devType() const
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
  return QHeaderView::devType();
}
void PythonQtShell_QHeaderView::doItemsLayout()
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
  QHeaderView::doItemsLayout();
}
void PythonQtShell_QHeaderView::dragEnterEvent(QDragEnterEvent*  event0)
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
  QHeaderView::dragEnterEvent(event0);
}
void PythonQtShell_QHeaderView::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QHeaderView::dragLeaveEvent(event0);
}
void PythonQtShell_QHeaderView::dragMoveEvent(QDragMoveEvent*  event0)
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
  QHeaderView::dragMoveEvent(event0);
}
void PythonQtShell_QHeaderView::dropEvent(QDropEvent*  event0)
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
  QHeaderView::dropEvent(event0);
}
bool  PythonQtShell_QHeaderView::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
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
  return QHeaderView::edit(index0, trigger1, event2);
}
void PythonQtShell_QHeaderView::editorDestroyed(QObject*  editor0)
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
  QHeaderView::editorDestroyed(editor0);
}
void PythonQtShell_QHeaderView::enterEvent(QEvent*  event0)
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
  QHeaderView::enterEvent(event0);
}
bool  PythonQtShell_QHeaderView::event(QEvent*  e0)
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
  return QHeaderView::event(e0);
}
bool  PythonQtShell_QHeaderView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QHeaderView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QHeaderView::focusInEvent(QFocusEvent*  event0)
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
  QHeaderView::focusInEvent(event0);
}
bool  PythonQtShell_QHeaderView::focusNextPrevChild(bool  next0)
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
  return QHeaderView::focusNextPrevChild(next0);
}
void PythonQtShell_QHeaderView::focusOutEvent(QFocusEvent*  event0)
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
  QHeaderView::focusOutEvent(event0);
}
bool  PythonQtShell_QHeaderView::hasHeightForWidth() const
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
  return QHeaderView::hasHeightForWidth();
}
int  PythonQtShell_QHeaderView::heightForWidth(int  arg__1) const
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
  return QHeaderView::heightForWidth(arg__1);
}
void PythonQtShell_QHeaderView::hideEvent(QHideEvent*  event0)
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
  QHeaderView::hideEvent(event0);
}
int  PythonQtShell_QHeaderView::horizontalOffset() const
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
  return QHeaderView::horizontalOffset();
}
void PythonQtShell_QHeaderView::horizontalScrollbarAction(int  action0)
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
  QHeaderView::horizontalScrollbarAction(action0);
}
void PythonQtShell_QHeaderView::horizontalScrollbarValueChanged(int  value0)
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
  QHeaderView::horizontalScrollbarValueChanged(value0);
}
QModelIndex  PythonQtShell_QHeaderView::indexAt(const QPoint&  p0) const
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
  return QHeaderView::indexAt(p0);
}
void PythonQtShell_QHeaderView::initPainter(QPainter*  painter0) const
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
  QHeaderView::initPainter(painter0);
}
void PythonQtShell_QHeaderView::inputMethodEvent(QInputMethodEvent*  event0)
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
  QHeaderView::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QHeaderView::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QHeaderView::inputMethodQuery(query0);
}
bool  PythonQtShell_QHeaderView::isIndexHidden(const QModelIndex&  index0) const
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
  return QHeaderView::isIndexHidden(index0);
}
void PythonQtShell_QHeaderView::keyPressEvent(QKeyEvent*  event0)
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
  QHeaderView::keyPressEvent(event0);
}
void PythonQtShell_QHeaderView::keyReleaseEvent(QKeyEvent*  event0)
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
  QHeaderView::keyReleaseEvent(event0);
}
void PythonQtShell_QHeaderView::keyboardSearch(const QString&  search0)
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
  QHeaderView::keyboardSearch(search0);
}
void PythonQtShell_QHeaderView::leaveEvent(QEvent*  event0)
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
  QHeaderView::leaveEvent(event0);
}
int  PythonQtShell_QHeaderView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QHeaderView::metric(arg__1);
}
QSize  PythonQtShell_QHeaderView::minimumSizeHint() const
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
  return QHeaderView::minimumSizeHint();
}
void PythonQtShell_QHeaderView::mouseDoubleClickEvent(QMouseEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QHeaderView::mouseDoubleClickEvent(e0);
}
void PythonQtShell_QHeaderView::mouseMoveEvent(QMouseEvent*  e0)
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
  QHeaderView::mouseMoveEvent(e0);
}
void PythonQtShell_QHeaderView::mousePressEvent(QMouseEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QHeaderView::mousePressEvent(e0);
}
void PythonQtShell_QHeaderView::mouseReleaseEvent(QMouseEvent*  e0)
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
  QHeaderView::mouseReleaseEvent(e0);
}
QModelIndex  PythonQtShell_QHeaderView::moveCursor(QAbstractItemView::CursorAction  arg__1, Qt::KeyboardModifiers  arg__2)
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
      void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QHeaderView::moveCursor(arg__1, arg__2);
}
void PythonQtShell_QHeaderView::moveEvent(QMoveEvent*  event0)
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
  QHeaderView::moveEvent(event0);
}
bool  PythonQtShell_QHeaderView::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QHeaderView::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QHeaderView::paintEngine() const
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
  return QHeaderView::paintEngine();
}
void PythonQtShell_QHeaderView::paintEvent(QPaintEvent*  e0)
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
  QHeaderView::paintEvent(e0);
}
void PythonQtShell_QHeaderView::paintSection(QPainter*  painter0, const QRect&  rect1, int  logicalIndex2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paintSection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*" , "const QRect&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {NULL, (void*)&painter0, (void*)&rect1, (void*)&logicalIndex2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHeaderView::paintSection(painter0, rect1, logicalIndex2);
}
QPaintDevice*  PythonQtShell_QHeaderView::redirected(QPoint*  offset0) const
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
  return QHeaderView::redirected(offset0);
}
void PythonQtShell_QHeaderView::reset()
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
  QHeaderView::reset();
}
void PythonQtShell_QHeaderView::resizeEvent(QResizeEvent*  event0)
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
  QHeaderView::resizeEvent(event0);
}
void PythonQtShell_QHeaderView::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
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
  QHeaderView::rowsAboutToBeRemoved(parent0, start1, end2);
}
void PythonQtShell_QHeaderView::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
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
  QHeaderView::rowsInserted(parent0, start1, end2);
}
void PythonQtShell_QHeaderView::scrollContentsBy(int  dx0, int  dy1)
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
  QHeaderView::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QHeaderView::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
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
  QHeaderView::scrollTo(index0, hint1);
}
QSize  PythonQtShell_QHeaderView::sectionSizeFromContents(int  logicalIndex0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sectionSizeFromContents");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
      void* args[2] = {NULL, (void*)&logicalIndex0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sectionSizeFromContents", methodInfo, result);
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
  return QHeaderView::sectionSizeFromContents(logicalIndex0);
}
void PythonQtShell_QHeaderView::selectAll()
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
  QHeaderView::selectAll();
}
QList<QModelIndex >  PythonQtShell_QHeaderView::selectedIndexes() const
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
  return QHeaderView::selectedIndexes();
}
void PythonQtShell_QHeaderView::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
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
  QHeaderView::selectionChanged(selected0, deselected1);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QHeaderView::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
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
  return QHeaderView::selectionCommand(index0, event1);
}
void PythonQtShell_QHeaderView::setModel(QAbstractItemModel*  model0)
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
  QHeaderView::setModel(model0);
}
void PythonQtShell_QHeaderView::setRootIndex(const QModelIndex&  index0)
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
  QHeaderView::setRootIndex(index0);
}
void PythonQtShell_QHeaderView::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  flags1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setSelection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QRect&" , "QItemSelectionModel::SelectionFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&rect0, (void*)&flags1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHeaderView::setSelection(rect0, flags1);
}
void PythonQtShell_QHeaderView::setSelectionModel(QItemSelectionModel*  selectionModel0)
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
  QHeaderView::setSelectionModel(selectionModel0);
}
void PythonQtShell_QHeaderView::setVisible(bool  v0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setVisible");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&v0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHeaderView::setVisible(v0);
}
void PythonQtShell_QHeaderView::setupViewport(QWidget*  viewport0)
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
  QHeaderView::setupViewport(viewport0);
}
QPainter*  PythonQtShell_QHeaderView::sharedPainter() const
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
  return QHeaderView::sharedPainter();
}
void PythonQtShell_QHeaderView::showEvent(QShowEvent*  event0)
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
  QHeaderView::showEvent(event0);
}
QSize  PythonQtShell_QHeaderView::sizeHint() const
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
  return QHeaderView::sizeHint();
}
int  PythonQtShell_QHeaderView::sizeHintForColumn(int  column0) const
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
  return QHeaderView::sizeHintForColumn(column0);
}
int  PythonQtShell_QHeaderView::sizeHintForRow(int  row0) const
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
  return QHeaderView::sizeHintForRow(row0);
}
void PythonQtShell_QHeaderView::startDrag(Qt::DropActions  supportedActions0)
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
  QHeaderView::startDrag(supportedActions0);
}
void PythonQtShell_QHeaderView::tabletEvent(QTabletEvent*  event0)
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
  QHeaderView::tabletEvent(event0);
}
void PythonQtShell_QHeaderView::timerEvent(QTimerEvent*  event0)
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
  QHeaderView::timerEvent(event0);
}
void PythonQtShell_QHeaderView::updateEditorData()
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
  QHeaderView::updateEditorData();
}
void PythonQtShell_QHeaderView::updateEditorGeometries()
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
  QHeaderView::updateEditorGeometries();
}
void PythonQtShell_QHeaderView::updateGeometries()
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
  QHeaderView::updateGeometries();
}
int  PythonQtShell_QHeaderView::verticalOffset() const
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
  return QHeaderView::verticalOffset();
}
void PythonQtShell_QHeaderView::verticalScrollbarAction(int  action0)
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
  QHeaderView::verticalScrollbarAction(action0);
}
void PythonQtShell_QHeaderView::verticalScrollbarValueChanged(int  value0)
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
  QHeaderView::verticalScrollbarValueChanged(value0);
}
QStyleOptionViewItem  PythonQtShell_QHeaderView::viewOptions() const
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
  return QHeaderView::viewOptions();
}
bool  PythonQtShell_QHeaderView::viewportEvent(QEvent*  e0)
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
      void* args[2] = {NULL, (void*)&e0};
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
  return QHeaderView::viewportEvent(e0);
}
QSize  PythonQtShell_QHeaderView::viewportSizeHint() const
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
  return QHeaderView::viewportSizeHint();
}
QRect  PythonQtShell_QHeaderView::visualRect(const QModelIndex&  index0) const
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
  return QHeaderView::visualRect(index0);
}
QRegion  PythonQtShell_QHeaderView::visualRegionForSelection(const QItemSelection&  selection0) const
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
  return QHeaderView::visualRegionForSelection(selection0);
}
void PythonQtShell_QHeaderView::wheelEvent(QWheelEvent*  arg__1)
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
  QHeaderView::wheelEvent(arg__1);
}
QHeaderView* PythonQtWrapper_QHeaderView::new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent)
{ 
return new PythonQtShell_QHeaderView(orientation, parent); }

const QMetaObject* PythonQtShell_QHeaderView::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QHeaderView::staticMetaObject);
  } else {
    return &QHeaderView::staticMetaObject;
  }
}
int PythonQtShell_QHeaderView::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QHeaderView::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QHeaderView::cascadingSectionResizes(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->cascadingSectionResizes());
}

int  PythonQtWrapper_QHeaderView::count(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

Qt::Alignment  PythonQtWrapper_QHeaderView::defaultAlignment(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->defaultAlignment());
}

int  PythonQtWrapper_QHeaderView::defaultSectionSize(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->defaultSectionSize());
}

int  PythonQtWrapper_QHeaderView::hiddenSectionCount(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->hiddenSectionCount());
}

void PythonQtWrapper_QHeaderView::hideSection(QHeaderView* theWrappedObject, int  logicalIndex)
{
  ( theWrappedObject->hideSection(logicalIndex));
}

bool  PythonQtWrapper_QHeaderView::highlightSections(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->highlightSections());
}

void PythonQtWrapper_QHeaderView::initStyleOption(QHeaderView* theWrappedObject, QStyleOptionHeader*  option) const
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_initStyleOption(option));
}

void PythonQtWrapper_QHeaderView::initialize(QHeaderView* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_initialize());
}

void PythonQtWrapper_QHeaderView::initializeSections(QHeaderView* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_initializeSections());
}

void PythonQtWrapper_QHeaderView::initializeSections(QHeaderView* theWrappedObject, int  start, int  end)
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_initializeSections(start, end));
}

bool  PythonQtWrapper_QHeaderView::isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->isSectionHidden(logicalIndex));
}

bool  PythonQtWrapper_QHeaderView::isSortIndicatorShown(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->isSortIndicatorShown());
}

int  PythonQtWrapper_QHeaderView::length(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

int  PythonQtWrapper_QHeaderView::logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const
{
  return ( theWrappedObject->logicalIndex(visualIndex));
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->logicalIndexAt(pos));
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, int  position) const
{
  return ( theWrappedObject->logicalIndexAt(position));
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->logicalIndexAt(x, y));
}

int  PythonQtWrapper_QHeaderView::maximumSectionSize(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->maximumSectionSize());
}

int  PythonQtWrapper_QHeaderView::minimumSectionSize(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->minimumSectionSize());
}

void PythonQtWrapper_QHeaderView::moveSection(QHeaderView* theWrappedObject, int  from, int  to)
{
  ( theWrappedObject->moveSection(from, to));
}

int  PythonQtWrapper_QHeaderView::offset(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

Qt::Orientation  PythonQtWrapper_QHeaderView::orientation(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

void PythonQtWrapper_QHeaderView::paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const
{
  ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_paintSection(painter, rect, logicalIndex));
}

void PythonQtWrapper_QHeaderView::resetDefaultSectionSize(QHeaderView* theWrappedObject)
{
  ( theWrappedObject->resetDefaultSectionSize());
}

int  PythonQtWrapper_QHeaderView::resizeContentsPrecision(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->resizeContentsPrecision());
}

void PythonQtWrapper_QHeaderView::resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size)
{
  ( theWrappedObject->resizeSection(logicalIndex, size));
}

void PythonQtWrapper_QHeaderView::resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode)
{
  ( theWrappedObject->resizeSections(mode));
}

bool  PythonQtWrapper_QHeaderView::restoreState(QHeaderView* theWrappedObject, const QByteArray&  state)
{
  return ( theWrappedObject->restoreState(state));
}

QByteArray  PythonQtWrapper_QHeaderView::saveState(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->saveState());
}

int  PythonQtWrapper_QHeaderView::sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->sectionPosition(logicalIndex));
}

QHeaderView::ResizeMode  PythonQtWrapper_QHeaderView::sectionResizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->sectionResizeMode(logicalIndex));
}

int  PythonQtWrapper_QHeaderView::sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->sectionSize(logicalIndex));
}

QSize  PythonQtWrapper_QHeaderView::sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( ((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)->promoted_sectionSizeFromContents(logicalIndex));
}

int  PythonQtWrapper_QHeaderView::sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->sectionSizeHint(logicalIndex));
}

int  PythonQtWrapper_QHeaderView::sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->sectionViewportPosition(logicalIndex));
}

bool  PythonQtWrapper_QHeaderView::sectionsClickable(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sectionsClickable());
}

bool  PythonQtWrapper_QHeaderView::sectionsHidden(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sectionsHidden());
}

bool  PythonQtWrapper_QHeaderView::sectionsMovable(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sectionsMovable());
}

bool  PythonQtWrapper_QHeaderView::sectionsMoved(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sectionsMoved());
}

void PythonQtWrapper_QHeaderView::setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setCascadingSectionResizes(enable));
}

void PythonQtWrapper_QHeaderView::setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setDefaultAlignment(alignment));
}

void PythonQtWrapper_QHeaderView::setDefaultSectionSize(QHeaderView* theWrappedObject, int  size)
{
  ( theWrappedObject->setDefaultSectionSize(size));
}

void PythonQtWrapper_QHeaderView::setHighlightSections(QHeaderView* theWrappedObject, bool  highlight)
{
  ( theWrappedObject->setHighlightSections(highlight));
}

void PythonQtWrapper_QHeaderView::setMaximumSectionSize(QHeaderView* theWrappedObject, int  size)
{
  ( theWrappedObject->setMaximumSectionSize(size));
}

void PythonQtWrapper_QHeaderView::setMinimumSectionSize(QHeaderView* theWrappedObject, int  size)
{
  ( theWrappedObject->setMinimumSectionSize(size));
}

void PythonQtWrapper_QHeaderView::setResizeContentsPrecision(QHeaderView* theWrappedObject, int  precision)
{
  ( theWrappedObject->setResizeContentsPrecision(precision));
}

void PythonQtWrapper_QHeaderView::setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide)
{
  ( theWrappedObject->setSectionHidden(logicalIndex, hide));
}

void PythonQtWrapper_QHeaderView::setSectionResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode)
{
  ( theWrappedObject->setSectionResizeMode(mode));
}

void PythonQtWrapper_QHeaderView::setSectionResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode)
{
  ( theWrappedObject->setSectionResizeMode(logicalIndex, mode));
}

void PythonQtWrapper_QHeaderView::setSectionsClickable(QHeaderView* theWrappedObject, bool  clickable)
{
  ( theWrappedObject->setSectionsClickable(clickable));
}

void PythonQtWrapper_QHeaderView::setSectionsMovable(QHeaderView* theWrappedObject, bool  movable)
{
  ( theWrappedObject->setSectionsMovable(movable));
}

void PythonQtWrapper_QHeaderView::setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order)
{
  ( theWrappedObject->setSortIndicator(logicalIndex, order));
}

void PythonQtWrapper_QHeaderView::setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show)
{
  ( theWrappedObject->setSortIndicatorShown(show));
}

void PythonQtWrapper_QHeaderView::setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch)
{
  ( theWrappedObject->setStretchLastSection(stretch));
}

void PythonQtWrapper_QHeaderView::showSection(QHeaderView* theWrappedObject, int  logicalIndex)
{
  ( theWrappedObject->showSection(logicalIndex));
}

Qt::SortOrder  PythonQtWrapper_QHeaderView::sortIndicatorOrder(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sortIndicatorOrder());
}

int  PythonQtWrapper_QHeaderView::sortIndicatorSection(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->sortIndicatorSection());
}

bool  PythonQtWrapper_QHeaderView::stretchLastSection(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->stretchLastSection());
}

int  PythonQtWrapper_QHeaderView::stretchSectionCount(QHeaderView* theWrappedObject) const
{
  return ( theWrappedObject->stretchSectionCount());
}

void PythonQtWrapper_QHeaderView::swapSections(QHeaderView* theWrappedObject, int  first, int  second)
{
  ( theWrappedObject->swapSections(first, second));
}

int  PythonQtWrapper_QHeaderView::visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const
{
  return ( theWrappedObject->visualIndex(logicalIndex));
}

int  PythonQtWrapper_QHeaderView::visualIndexAt(QHeaderView* theWrappedObject, int  position) const
{
  return ( theWrappedObject->visualIndexAt(position));
}



QHelpEvent* PythonQtWrapper_QHelpEvent::new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos)
{ 
return new QHelpEvent(type, pos, globalPos); }

const QPoint*  PythonQtWrapper_QHelpEvent::globalPos(QHelpEvent* theWrappedObject) const
{
  return &( theWrappedObject->globalPos());
}

int  PythonQtWrapper_QHelpEvent::globalX(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalX());
}

int  PythonQtWrapper_QHelpEvent::globalY(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalY());
}

const QPoint*  PythonQtWrapper_QHelpEvent::pos(QHelpEvent* theWrappedObject) const
{
  return &( theWrappedObject->pos());
}

int  PythonQtWrapper_QHelpEvent::x(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QHelpEvent::y(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



QHideEvent* PythonQtWrapper_QHideEvent::new_QHideEvent()
{ 
return new QHideEvent(); }



PythonQtShell_QHoverEvent::~PythonQtShell_QHoverEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QHoverEvent* PythonQtWrapper_QHoverEvent::new_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QHoverEvent(type, pos, oldPos, modifiers); }

QPoint  PythonQtWrapper_QHoverEvent::oldPos(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldPos());
}

const QPointF*  PythonQtWrapper_QHoverEvent::oldPosF(QHoverEvent* theWrappedObject) const
{
  return &( theWrappedObject->oldPosF());
}

QPoint  PythonQtWrapper_QHoverEvent::pos(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

const QPointF*  PythonQtWrapper_QHoverEvent::posF(QHoverEvent* theWrappedObject) const
{
  return &( theWrappedObject->posF());
}



QIconDragEvent* PythonQtWrapper_QIconDragEvent::new_QIconDragEvent()
{ 
return new QIconDragEvent(); }


