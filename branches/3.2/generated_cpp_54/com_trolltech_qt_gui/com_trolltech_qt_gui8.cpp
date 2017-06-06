#include "com_trolltech_qt_gui8.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

PythonQtShell_QStyle::~PythonQtShell_QStyle() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QStyle::childEvent(QChildEvent*  arg__1)
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
  QStyle::childEvent(arg__1);
}
void PythonQtShell_QStyle::customEvent(QEvent*  arg__1)
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
  QStyle::customEvent(arg__1);
}
void PythonQtShell_QStyle::drawComplexControl(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QPainter*  p2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawComplexControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&cc0, (void*)&opt1, (void*)&p2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
void PythonQtShell_QStyle::drawControl(QStyle::ControlElement  element0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::ControlElement" , "const QStyleOption*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&element0, (void*)&opt1, (void*)&p2, (void*)&w3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
void PythonQtShell_QStyle::drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawItemPixmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRect&" , "int" , "const QPixmap&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&painter0, (void*)&rect1, (void*)&alignment2, (void*)&pixmap3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QStyle::drawItemPixmap(painter0, rect1, alignment2, pixmap3);
}
void PythonQtShell_QStyle::drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, QPalette::ColorRole  textRole6) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawItemText");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRect&" , "int" , "const QPalette&" , "bool" , "const QString&" , "QPalette::ColorRole"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(8, argumentList);
    void* args[8] = {NULL, (void*)&painter0, (void*)&rect1, (void*)&flags2, (void*)&pal3, (void*)&enabled4, (void*)&text5, (void*)&textRole6};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QStyle::drawItemText(painter0, rect1, flags2, pal3, enabled4, text5, textRole6);
}
void PythonQtShell_QStyle::drawPrimitive(QStyle::PrimitiveElement  pe0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPrimitive");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::PrimitiveElement" , "const QStyleOption*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&pe0, (void*)&opt1, (void*)&p2, (void*)&w3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
bool  PythonQtShell_QStyle::event(QEvent*  arg__1)
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
  return QStyle::event(arg__1);
}
bool  PythonQtShell_QStyle::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QStyle::eventFilter(arg__1, arg__2);
}
QPixmap  PythonQtShell_QStyle::generatedIconPixmap(QIcon::Mode  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("generatedIconPixmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPixmap" , "QIcon::Mode" , "const QPixmap&" , "const QStyleOption*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QPixmap returnValue;
    void* args[4] = {NULL, (void*)&iconMode0, (void*)&pixmap1, (void*)&opt2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("generatedIconPixmap", methodInfo, result);
        } else {
          returnValue = *((QPixmap*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QPixmap();
}
QStyle::SubControl  PythonQtShell_QStyle::hitTestComplexControl(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, const QPoint&  pt2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitTestComplexControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QStyle::SubControl" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "const QPoint&" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QStyle::SubControl returnValue;
    void* args[5] = {NULL, (void*)&cc0, (void*)&opt1, (void*)&pt2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hitTestComplexControl", methodInfo, result);
        } else {
          returnValue = *((QStyle::SubControl*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QStyle::SubControl();
}
QRect  PythonQtShell_QStyle::itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("itemPixmapRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRect" , "const QRect&" , "int" , "const QPixmap&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QRect returnValue;
    void* args[4] = {NULL, (void*)&r0, (void*)&flags1, (void*)&pixmap2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemPixmapRect", methodInfo, result);
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
  return QStyle::itemPixmapRect(r0, flags1, pixmap2);
}
QRect  PythonQtShell_QStyle::itemTextRect(const QFontMetrics&  fm0, const QRect&  r1, int  flags2, bool  enabled3, const QString&  text4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("itemTextRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRect" , "const QFontMetrics&" , "const QRect&" , "int" , "bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QRect returnValue;
    void* args[6] = {NULL, (void*)&fm0, (void*)&r1, (void*)&flags2, (void*)&enabled3, (void*)&text4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemTextRect", methodInfo, result);
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
  return QStyle::itemTextRect(fm0, r1, flags2, enabled3, text4);
}
int  PythonQtShell_QStyle::layoutSpacing(QSizePolicy::ControlType  control10, QSizePolicy::ControlType  control21, Qt::Orientation  orientation2, const QStyleOption*  option3, const QWidget*  widget4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("layoutSpacing");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QSizePolicy::ControlType" , "QSizePolicy::ControlType" , "Qt::Orientation" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      int returnValue;
    void* args[6] = {NULL, (void*)&control10, (void*)&control21, (void*)&orientation2, (void*)&option3, (void*)&widget4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("layoutSpacing", methodInfo, result);
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
  return int();
}
int  PythonQtShell_QStyle::pixelMetric(QStyle::PixelMetric  metric0, const QStyleOption*  option1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("pixelMetric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QStyle::PixelMetric" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      int returnValue;
    void* args[4] = {NULL, (void*)&metric0, (void*)&option1, (void*)&widget2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("pixelMetric", methodInfo, result);
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
  return int();
}
void PythonQtShell_QStyle::polish(QApplication*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QApplication*"};
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
  QStyle::polish(arg__1);
}
void PythonQtShell_QStyle::polish(QPalette&  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPalette&"};
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
  QStyle::polish(arg__1);
}
void PythonQtShell_QStyle::polish(QWidget*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWidget*"};
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
  QStyle::polish(arg__1);
}
QSize  PythonQtShell_QStyle::sizeFromContents(QStyle::ContentsType  ct0, const QStyleOption*  opt1, const QSize&  contentsSize2, const QWidget*  w3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sizeFromContents");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSize" , "QStyle::ContentsType" , "const QStyleOption*" , "const QSize&" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QSize returnValue;
    void* args[5] = {NULL, (void*)&ct0, (void*)&opt1, (void*)&contentsSize2, (void*)&w3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sizeFromContents", methodInfo, result);
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
  return QSize();
}
QIcon  PythonQtShell_QStyle::standardIcon(QStyle::StandardPixmap  standardIcon0, const QStyleOption*  option1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("standardIcon");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QIcon" , "QStyle::StandardPixmap" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QIcon returnValue;
    void* args[4] = {NULL, (void*)&standardIcon0, (void*)&option1, (void*)&widget2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("standardIcon", methodInfo, result);
        } else {
          returnValue = *((QIcon*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QIcon();
}
QPalette  PythonQtShell_QStyle::standardPalette() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("standardPalette");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPalette"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPalette returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("standardPalette", methodInfo, result);
        } else {
          returnValue = *((QPalette*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QStyle::standardPalette();
}
QPixmap  PythonQtShell_QStyle::standardPixmap(QStyle::StandardPixmap  standardPixmap0, const QStyleOption*  opt1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("standardPixmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPixmap" , "QStyle::StandardPixmap" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QPixmap returnValue;
    void* args[4] = {NULL, (void*)&standardPixmap0, (void*)&opt1, (void*)&widget2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("standardPixmap", methodInfo, result);
        } else {
          returnValue = *((QPixmap*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QPixmap();
}
int  PythonQtShell_QStyle::styleHint(QStyle::StyleHint  stylehint0, const QStyleOption*  opt1, const QWidget*  widget2, QStyleHintReturn*  returnData3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("styleHint");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QStyle::StyleHint" , "const QStyleOption*" , "const QWidget*" , "QStyleHintReturn*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      int returnValue;
    void* args[5] = {NULL, (void*)&stylehint0, (void*)&opt1, (void*)&widget2, (void*)&returnData3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("styleHint", methodInfo, result);
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
  return int();
}
QRect  PythonQtShell_QStyle::subControlRect(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QStyle::SubControl  sc2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("subControlRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRect" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "QStyle::SubControl" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QRect returnValue;
    void* args[5] = {NULL, (void*)&cc0, (void*)&opt1, (void*)&sc2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("subControlRect", methodInfo, result);
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
  return QRect();
}
QRect  PythonQtShell_QStyle::subElementRect(QStyle::SubElement  subElement0, const QStyleOption*  option1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("subElementRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRect" , "QStyle::SubElement" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QRect returnValue;
    void* args[4] = {NULL, (void*)&subElement0, (void*)&option1, (void*)&widget2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("subElementRect", methodInfo, result);
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
  return QRect();
}
void PythonQtShell_QStyle::timerEvent(QTimerEvent*  arg__1)
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
  QStyle::timerEvent(arg__1);
}
void PythonQtShell_QStyle::unpolish(QApplication*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unpolish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QApplication*"};
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
  QStyle::unpolish(arg__1);
}
void PythonQtShell_QStyle::unpolish(QWidget*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unpolish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QWidget*"};
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
  QStyle::unpolish(arg__1);
}
QStyle* PythonQtWrapper_QStyle::new_QStyle()
{ 
return new PythonQtShell_QStyle(); }

QRect  PythonQtWrapper_QStyle::static_QStyle_alignedRect(Qt::LayoutDirection  direction, Qt::Alignment  alignment, const QSize&  size, const QRect&  rectangle)
{
  return (QStyle::alignedRect(direction, alignment, size, rectangle));
}

int  PythonQtWrapper_QStyle::combinedLayoutSpacing(QStyle* theWrappedObject, QSizePolicy::ControlTypes  controls1, QSizePolicy::ControlTypes  controls2, Qt::Orientation  orientation, QStyleOption*  option, QWidget*  widget) const
{
  return ( theWrappedObject->combinedLayoutSpacing(controls1, controls2, orientation, option, widget));
}

void PythonQtWrapper_QStyle::drawComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  widget) const
{
  ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_drawComplexControl(cc, opt, p, widget));
}

void PythonQtWrapper_QStyle::drawControl(QStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
  ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_drawControl(element, opt, p, w));
}

void PythonQtWrapper_QStyle::drawItemPixmap(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const
{
  ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_drawItemPixmap(painter, rect, alignment, pixmap));
}

void PythonQtWrapper_QStyle::drawItemText(QStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const
{
  ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_drawItemText(painter, rect, flags, pal, enabled, text, textRole));
}

void PythonQtWrapper_QStyle::drawPrimitive(QStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
  ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_drawPrimitive(pe, opt, p, w));
}

QPixmap  PythonQtWrapper_QStyle::generatedIconPixmap(QStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_generatedIconPixmap(iconMode, pixmap, opt));
}

QStyle::SubControl  PythonQtWrapper_QStyle::hitTestComplexControl(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_hitTestComplexControl(cc, opt, pt, widget));
}

QRect  PythonQtWrapper_QStyle::itemPixmapRect(QStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_itemPixmapRect(r, flags, pixmap));
}

int  PythonQtWrapper_QStyle::layoutSpacing(QStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_layoutSpacing(control1, control2, orientation, option, widget));
}

int  PythonQtWrapper_QStyle::pixelMetric(QStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_pixelMetric(metric, option, widget));
}

void PythonQtWrapper_QStyle::polish(QStyle* theWrappedObject, QApplication*  arg__1)
{
  ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_polish(arg__1));
}

void PythonQtWrapper_QStyle::polish(QStyle* theWrappedObject, QPalette&  arg__1)
{
  ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_polish(arg__1));
}

void PythonQtWrapper_QStyle::polish(QStyle* theWrappedObject, QWidget*  arg__1)
{
  ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_polish(arg__1));
}

const QStyle*  PythonQtWrapper_QStyle::proxy(QStyle* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

QSize  PythonQtWrapper_QStyle::sizeFromContents(QStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  w) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_sizeFromContents(ct, opt, contentsSize, w));
}

int  PythonQtWrapper_QStyle::static_QStyle_sliderPositionFromValue(int  min, int  max, int  val, int  space, bool  upsideDown)
{
  return (QStyle::sliderPositionFromValue(min, max, val, space, upsideDown));
}

int  PythonQtWrapper_QStyle::static_QStyle_sliderValueFromPosition(int  min, int  max, int  pos, int  space, bool  upsideDown)
{
  return (QStyle::sliderValueFromPosition(min, max, pos, space, upsideDown));
}

QIcon  PythonQtWrapper_QStyle::standardIcon(QStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_standardIcon(standardIcon, option, widget));
}

QPalette  PythonQtWrapper_QStyle::standardPalette(QStyle* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_standardPalette());
}

QPixmap  PythonQtWrapper_QStyle::standardPixmap(QStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_standardPixmap(standardPixmap, opt, widget));
}

int  PythonQtWrapper_QStyle::styleHint(QStyle* theWrappedObject, QStyle::StyleHint  stylehint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_styleHint(stylehint, opt, widget, returnData));
}

QRect  PythonQtWrapper_QStyle::subControlRect(QStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_subControlRect(cc, opt, sc, widget));
}

QRect  PythonQtWrapper_QStyle::subElementRect(QStyle* theWrappedObject, QStyle::SubElement  subElement, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_subElementRect(subElement, option, widget));
}

void PythonQtWrapper_QStyle::unpolish(QStyle* theWrappedObject, QApplication*  arg__1)
{
  ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_unpolish(arg__1));
}

void PythonQtWrapper_QStyle::unpolish(QStyle* theWrappedObject, QWidget*  arg__1)
{
  ( ((PythonQtPublicPromoter_QStyle*)theWrappedObject)->promoted_unpolish(arg__1));
}

Qt::Alignment  PythonQtWrapper_QStyle::static_QStyle_visualAlignment(Qt::LayoutDirection  direction, Qt::Alignment  alignment)
{
  return (QStyle::visualAlignment(direction, alignment));
}

QPoint  PythonQtWrapper_QStyle::static_QStyle_visualPos(Qt::LayoutDirection  direction, const QRect&  boundingRect, const QPoint&  logicalPos)
{
  return (QStyle::visualPos(direction, boundingRect, logicalPos));
}

QRect  PythonQtWrapper_QStyle::static_QStyle_visualRect(Qt::LayoutDirection  direction, const QRect&  boundingRect, const QRect&  logicalRect)
{
  return (QStyle::visualRect(direction, boundingRect, logicalRect));
}



PythonQtShell_QStyleFactory::~PythonQtShell_QStyleFactory() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleFactory* PythonQtWrapper_QStyleFactory::new_QStyleFactory()
{ 
return new PythonQtShell_QStyleFactory(); }

QStyle*  PythonQtWrapper_QStyleFactory::static_QStyleFactory_create(const QString&  arg__1)
{
  return (QStyleFactory::create(arg__1));
}

QStringList  PythonQtWrapper_QStyleFactory::static_QStyleFactory_keys()
{
  return (QStyleFactory::keys());
}



PythonQtShell_QStyleHintReturn::~PythonQtShell_QStyleHintReturn() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleHintReturn* PythonQtWrapper_QStyleHintReturn::new_QStyleHintReturn(int  version, int  type)
{ 
return new PythonQtShell_QStyleHintReturn(version, type); }



PythonQtShell_QStyleHintReturnMask::~PythonQtShell_QStyleHintReturnMask() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleHintReturnMask* PythonQtWrapper_QStyleHintReturnMask::new_QStyleHintReturnMask()
{ 
return new PythonQtShell_QStyleHintReturnMask(); }



PythonQtShell_QStyleHintReturnVariant::~PythonQtShell_QStyleHintReturnVariant() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleHintReturnVariant* PythonQtWrapper_QStyleHintReturnVariant::new_QStyleHintReturnVariant()
{ 
return new PythonQtShell_QStyleHintReturnVariant(); }



int  PythonQtWrapper_QStyleHints::cursorFlashTime(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->cursorFlashTime());
}

qreal  PythonQtWrapper_QStyleHints::fontSmoothingGamma(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->fontSmoothingGamma());
}

int  PythonQtWrapper_QStyleHints::keyboardAutoRepeatRate(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->keyboardAutoRepeatRate());
}

int  PythonQtWrapper_QStyleHints::keyboardInputInterval(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->keyboardInputInterval());
}

int  PythonQtWrapper_QStyleHints::mouseDoubleClickInterval(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->mouseDoubleClickInterval());
}

int  PythonQtWrapper_QStyleHints::mousePressAndHoldInterval(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->mousePressAndHoldInterval());
}

QChar  PythonQtWrapper_QStyleHints::passwordMaskCharacter(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->passwordMaskCharacter());
}

int  PythonQtWrapper_QStyleHints::passwordMaskDelay(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->passwordMaskDelay());
}

void PythonQtWrapper_QStyleHints::setCursorFlashTime(QStyleHints* theWrappedObject, int  cursorFlashTime)
{
  ( theWrappedObject->setCursorFlashTime(cursorFlashTime));
}

bool  PythonQtWrapper_QStyleHints::setFocusOnTouchRelease(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->setFocusOnTouchRelease());
}

void PythonQtWrapper_QStyleHints::setKeyboardInputInterval(QStyleHints* theWrappedObject, int  keyboardInputInterval)
{
  ( theWrappedObject->setKeyboardInputInterval(keyboardInputInterval));
}

void PythonQtWrapper_QStyleHints::setMouseDoubleClickInterval(QStyleHints* theWrappedObject, int  mouseDoubleClickInterval)
{
  ( theWrappedObject->setMouseDoubleClickInterval(mouseDoubleClickInterval));
}

void PythonQtWrapper_QStyleHints::setStartDragDistance(QStyleHints* theWrappedObject, int  startDragDistance)
{
  ( theWrappedObject->setStartDragDistance(startDragDistance));
}

void PythonQtWrapper_QStyleHints::setStartDragTime(QStyleHints* theWrappedObject, int  startDragTime)
{
  ( theWrappedObject->setStartDragTime(startDragTime));
}

bool  PythonQtWrapper_QStyleHints::showIsFullScreen(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->showIsFullScreen());
}

int  PythonQtWrapper_QStyleHints::startDragDistance(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->startDragDistance());
}

int  PythonQtWrapper_QStyleHints::startDragTime(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->startDragTime());
}

int  PythonQtWrapper_QStyleHints::startDragVelocity(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->startDragVelocity());
}

bool  PythonQtWrapper_QStyleHints::useRtlExtensions(QStyleHints* theWrappedObject) const
{
  return ( theWrappedObject->useRtlExtensions());
}



PythonQtShell_QStyleOption::~PythonQtShell_QStyleOption() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOption* PythonQtWrapper_QStyleOption::new_QStyleOption(const QStyleOption&  other)
{ 
return new PythonQtShell_QStyleOption(other); }

QStyleOption* PythonQtWrapper_QStyleOption::new_QStyleOption(int  version, int  type)
{ 
return new PythonQtShell_QStyleOption(version, type); }

void PythonQtWrapper_QStyleOption::initFrom(QStyleOption* theWrappedObject, const QWidget*  w)
{
  ( theWrappedObject->initFrom(w));
}

QString PythonQtWrapper_QStyleOption::py_toString(QStyleOption* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QStyleOptionButton::~PythonQtShell_QStyleOptionButton() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionButton* PythonQtWrapper_QStyleOptionButton::new_QStyleOptionButton()
{ 
return new PythonQtShell_QStyleOptionButton(); }

QStyleOptionButton* PythonQtWrapper_QStyleOptionButton::new_QStyleOptionButton(const QStyleOptionButton&  other)
{ 
return new PythonQtShell_QStyleOptionButton(other); }

QStyleOptionButton* PythonQtWrapper_QStyleOptionButton::new_QStyleOptionButton(int  version)
{ 
return new PythonQtShell_QStyleOptionButton(version); }



PythonQtShell_QStyleOptionComboBox::~PythonQtShell_QStyleOptionComboBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox()
{ 
return new PythonQtShell_QStyleOptionComboBox(); }

QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox(const QStyleOptionComboBox&  other)
{ 
return new PythonQtShell_QStyleOptionComboBox(other); }

QStyleOptionComboBox* PythonQtWrapper_QStyleOptionComboBox::new_QStyleOptionComboBox(int  version)
{ 
return new PythonQtShell_QStyleOptionComboBox(version); }



PythonQtShell_QStyleOptionDockWidget::~PythonQtShell_QStyleOptionDockWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionDockWidget* PythonQtWrapper_QStyleOptionDockWidget::new_QStyleOptionDockWidget()
{ 
return new PythonQtShell_QStyleOptionDockWidget(); }

QStyleOptionDockWidget* PythonQtWrapper_QStyleOptionDockWidget::new_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other)
{ 
return new PythonQtShell_QStyleOptionDockWidget(other); }

QStyleOptionDockWidget* PythonQtWrapper_QStyleOptionDockWidget::new_QStyleOptionDockWidget(int  version)
{ 
return new PythonQtShell_QStyleOptionDockWidget(version); }



PythonQtShell_QStyleOptionDockWidgetV2::~PythonQtShell_QStyleOptionDockWidgetV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionDockWidgetV2* PythonQtWrapper_QStyleOptionDockWidgetV2::new_QStyleOptionDockWidgetV2()
{ 
return new PythonQtShell_QStyleOptionDockWidgetV2(); }



PythonQtShell_QStyleOptionFocusRect::~PythonQtShell_QStyleOptionFocusRect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionFocusRect* PythonQtWrapper_QStyleOptionFocusRect::new_QStyleOptionFocusRect()
{ 
return new PythonQtShell_QStyleOptionFocusRect(); }

QStyleOptionFocusRect* PythonQtWrapper_QStyleOptionFocusRect::new_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other)
{ 
return new PythonQtShell_QStyleOptionFocusRect(other); }

QStyleOptionFocusRect* PythonQtWrapper_QStyleOptionFocusRect::new_QStyleOptionFocusRect(int  version)
{ 
return new PythonQtShell_QStyleOptionFocusRect(version); }



PythonQtShell_QStyleOptionFrame::~PythonQtShell_QStyleOptionFrame() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionFrame* PythonQtWrapper_QStyleOptionFrame::new_QStyleOptionFrame()
{ 
return new PythonQtShell_QStyleOptionFrame(); }

QStyleOptionFrame* PythonQtWrapper_QStyleOptionFrame::new_QStyleOptionFrame(const QStyleOptionFrame&  other)
{ 
return new PythonQtShell_QStyleOptionFrame(other); }

QStyleOptionFrame* PythonQtWrapper_QStyleOptionFrame::new_QStyleOptionFrame(int  version)
{ 
return new PythonQtShell_QStyleOptionFrame(version); }



PythonQtShell_QStyleOptionFrameV2::~PythonQtShell_QStyleOptionFrameV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionFrameV2* PythonQtWrapper_QStyleOptionFrameV2::new_QStyleOptionFrameV2()
{ 
return new PythonQtShell_QStyleOptionFrameV2(); }



PythonQtShell_QStyleOptionFrameV3::~PythonQtShell_QStyleOptionFrameV3() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionFrameV3* PythonQtWrapper_QStyleOptionFrameV3::new_QStyleOptionFrameV3()
{ 
return new PythonQtShell_QStyleOptionFrameV3(); }



PythonQtShell_QStyleOptionGraphicsItem::~PythonQtShell_QStyleOptionGraphicsItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem()
{ 
return new PythonQtShell_QStyleOptionGraphicsItem(); }

QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other)
{ 
return new PythonQtShell_QStyleOptionGraphicsItem(other); }

QStyleOptionGraphicsItem* PythonQtWrapper_QStyleOptionGraphicsItem::new_QStyleOptionGraphicsItem(int  version)
{ 
return new PythonQtShell_QStyleOptionGraphicsItem(version); }

qreal  PythonQtWrapper_QStyleOptionGraphicsItem::static_QStyleOptionGraphicsItem_levelOfDetailFromTransform(const QTransform&  worldTransform)
{
  return (QStyleOptionGraphicsItem::levelOfDetailFromTransform(worldTransform));
}



PythonQtShell_QStyleOptionGroupBox::~PythonQtShell_QStyleOptionGroupBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionGroupBox* PythonQtWrapper_QStyleOptionGroupBox::new_QStyleOptionGroupBox()
{ 
return new PythonQtShell_QStyleOptionGroupBox(); }

QStyleOptionGroupBox* PythonQtWrapper_QStyleOptionGroupBox::new_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other)
{ 
return new PythonQtShell_QStyleOptionGroupBox(other); }

QStyleOptionGroupBox* PythonQtWrapper_QStyleOptionGroupBox::new_QStyleOptionGroupBox(int  version)
{ 
return new PythonQtShell_QStyleOptionGroupBox(version); }



PythonQtShell_QStyleOptionHeader::~PythonQtShell_QStyleOptionHeader() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionHeader* PythonQtWrapper_QStyleOptionHeader::new_QStyleOptionHeader()
{ 
return new PythonQtShell_QStyleOptionHeader(); }

QStyleOptionHeader* PythonQtWrapper_QStyleOptionHeader::new_QStyleOptionHeader(const QStyleOptionHeader&  other)
{ 
return new PythonQtShell_QStyleOptionHeader(other); }

QStyleOptionHeader* PythonQtWrapper_QStyleOptionHeader::new_QStyleOptionHeader(int  version)
{ 
return new PythonQtShell_QStyleOptionHeader(version); }



PythonQtShell_QStyleOptionMenuItem::~PythonQtShell_QStyleOptionMenuItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem()
{ 
return new PythonQtShell_QStyleOptionMenuItem(); }

QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other)
{ 
return new PythonQtShell_QStyleOptionMenuItem(other); }

QStyleOptionMenuItem* PythonQtWrapper_QStyleOptionMenuItem::new_QStyleOptionMenuItem(int  version)
{ 
return new PythonQtShell_QStyleOptionMenuItem(version); }



PythonQtShell_QStyleOptionProgressBar::~PythonQtShell_QStyleOptionProgressBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar()
{ 
return new PythonQtShell_QStyleOptionProgressBar(); }

QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other)
{ 
return new PythonQtShell_QStyleOptionProgressBar(other); }

QStyleOptionProgressBar* PythonQtWrapper_QStyleOptionProgressBar::new_QStyleOptionProgressBar(int  version)
{ 
return new PythonQtShell_QStyleOptionProgressBar(version); }



PythonQtShell_QStyleOptionProgressBarV2::~PythonQtShell_QStyleOptionProgressBarV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionProgressBarV2* PythonQtWrapper_QStyleOptionProgressBarV2::new_QStyleOptionProgressBarV2()
{ 
return new PythonQtShell_QStyleOptionProgressBarV2(); }



PythonQtShell_QStyleOptionRubberBand::~PythonQtShell_QStyleOptionRubberBand() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionRubberBand* PythonQtWrapper_QStyleOptionRubberBand::new_QStyleOptionRubberBand()
{ 
return new PythonQtShell_QStyleOptionRubberBand(); }

QStyleOptionRubberBand* PythonQtWrapper_QStyleOptionRubberBand::new_QStyleOptionRubberBand(const QStyleOptionRubberBand&  other)
{ 
return new PythonQtShell_QStyleOptionRubberBand(other); }

QStyleOptionRubberBand* PythonQtWrapper_QStyleOptionRubberBand::new_QStyleOptionRubberBand(int  version)
{ 
return new PythonQtShell_QStyleOptionRubberBand(version); }



PythonQtShell_QStyleOptionSizeGrip::~PythonQtShell_QStyleOptionSizeGrip() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionSizeGrip* PythonQtWrapper_QStyleOptionSizeGrip::new_QStyleOptionSizeGrip()
{ 
return new PythonQtShell_QStyleOptionSizeGrip(); }

QStyleOptionSizeGrip* PythonQtWrapper_QStyleOptionSizeGrip::new_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other)
{ 
return new PythonQtShell_QStyleOptionSizeGrip(other); }

QStyleOptionSizeGrip* PythonQtWrapper_QStyleOptionSizeGrip::new_QStyleOptionSizeGrip(int  version)
{ 
return new PythonQtShell_QStyleOptionSizeGrip(version); }



PythonQtShell_QStyleOptionSlider::~PythonQtShell_QStyleOptionSlider() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionSlider* PythonQtWrapper_QStyleOptionSlider::new_QStyleOptionSlider()
{ 
return new PythonQtShell_QStyleOptionSlider(); }

QStyleOptionSlider* PythonQtWrapper_QStyleOptionSlider::new_QStyleOptionSlider(const QStyleOptionSlider&  other)
{ 
return new PythonQtShell_QStyleOptionSlider(other); }

QStyleOptionSlider* PythonQtWrapper_QStyleOptionSlider::new_QStyleOptionSlider(int  version)
{ 
return new PythonQtShell_QStyleOptionSlider(version); }



PythonQtShell_QStyleOptionSpinBox::~PythonQtShell_QStyleOptionSpinBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox()
{ 
return new PythonQtShell_QStyleOptionSpinBox(); }

QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other)
{ 
return new PythonQtShell_QStyleOptionSpinBox(other); }

QStyleOptionSpinBox* PythonQtWrapper_QStyleOptionSpinBox::new_QStyleOptionSpinBox(int  version)
{ 
return new PythonQtShell_QStyleOptionSpinBox(version); }



PythonQtShell_QStyleOptionTab::~PythonQtShell_QStyleOptionTab() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab()
{ 
return new PythonQtShell_QStyleOptionTab(); }

QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab(const QStyleOptionTab&  other)
{ 
return new PythonQtShell_QStyleOptionTab(other); }

QStyleOptionTab* PythonQtWrapper_QStyleOptionTab::new_QStyleOptionTab(int  version)
{ 
return new PythonQtShell_QStyleOptionTab(version); }



PythonQtShell_QStyleOptionTabBarBase::~PythonQtShell_QStyleOptionTabBarBase() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabBarBase* PythonQtWrapper_QStyleOptionTabBarBase::new_QStyleOptionTabBarBase()
{ 
return new PythonQtShell_QStyleOptionTabBarBase(); }

QStyleOptionTabBarBase* PythonQtWrapper_QStyleOptionTabBarBase::new_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other)
{ 
return new PythonQtShell_QStyleOptionTabBarBase(other); }

QStyleOptionTabBarBase* PythonQtWrapper_QStyleOptionTabBarBase::new_QStyleOptionTabBarBase(int  version)
{ 
return new PythonQtShell_QStyleOptionTabBarBase(version); }



PythonQtShell_QStyleOptionTabBarBaseV2::~PythonQtShell_QStyleOptionTabBarBaseV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabBarBaseV2* PythonQtWrapper_QStyleOptionTabBarBaseV2::new_QStyleOptionTabBarBaseV2()
{ 
return new PythonQtShell_QStyleOptionTabBarBaseV2(); }



PythonQtShell_QStyleOptionTabV2::~PythonQtShell_QStyleOptionTabV2() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabV2* PythonQtWrapper_QStyleOptionTabV2::new_QStyleOptionTabV2()
{ 
return new PythonQtShell_QStyleOptionTabV2(); }



PythonQtShell_QStyleOptionTabV3::~PythonQtShell_QStyleOptionTabV3() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStyleOptionTabV3* PythonQtWrapper_QStyleOptionTabV3::new_QStyleOptionTabV3()
{ 
return new PythonQtShell_QStyleOptionTabV3(); }


