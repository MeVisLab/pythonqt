#include "com_trolltech_qt_gui2.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QPair>
#include <QStringList>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontdialog.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qframe.h>
#include <qgesture.h>
#include <qgesturerecognizer.h>
#include <qglyphrun.h>
#include <qgraphicsanchorlayout.h>
#include <qgraphicseffect.h>
#include <qgraphicsgridlayout.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicslinearlayout.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtimeline.h>
#include <qtransform.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>

QFontDatabase* PythonQtWrapper_QFontDatabase::new_QFontDatabase()
{ 
return new QFontDatabase(); }

int  PythonQtWrapper_QFontDatabase::static_QFontDatabase_addApplicationFont(const QString&  fileName)
{
  return (QFontDatabase::addApplicationFont(fileName));
}

int  PythonQtWrapper_QFontDatabase::static_QFontDatabase_addApplicationFontFromData(const QByteArray&  fontData)
{
  return (QFontDatabase::addApplicationFontFromData(fontData));
}

QStringList  PythonQtWrapper_QFontDatabase::static_QFontDatabase_applicationFontFamilies(int  id)
{
  return (QFontDatabase::applicationFontFamilies(id));
}

bool  PythonQtWrapper_QFontDatabase::bold(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style) const
{
  return ( theWrappedObject->bold(family, style));
}

QStringList  PythonQtWrapper_QFontDatabase::families(QFontDatabase* theWrappedObject, QFontDatabase::WritingSystem  writingSystem) const
{
  return ( theWrappedObject->families(writingSystem));
}

QFont  PythonQtWrapper_QFontDatabase::font(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style, int  pointSize) const
{
  return ( theWrappedObject->font(family, style, pointSize));
}

bool  PythonQtWrapper_QFontDatabase::hasFamily(QFontDatabase* theWrappedObject, const QString&  family) const
{
  return ( theWrappedObject->hasFamily(family));
}

bool  PythonQtWrapper_QFontDatabase::isBitmapScalable(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style) const
{
  return ( theWrappedObject->isBitmapScalable(family, style));
}

bool  PythonQtWrapper_QFontDatabase::isFixedPitch(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style) const
{
  return ( theWrappedObject->isFixedPitch(family, style));
}

bool  PythonQtWrapper_QFontDatabase::isPrivateFamily(QFontDatabase* theWrappedObject, const QString&  family) const
{
  return ( theWrappedObject->isPrivateFamily(family));
}

bool  PythonQtWrapper_QFontDatabase::isScalable(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style) const
{
  return ( theWrappedObject->isScalable(family, style));
}

bool  PythonQtWrapper_QFontDatabase::isSmoothlyScalable(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style) const
{
  return ( theWrappedObject->isSmoothlyScalable(family, style));
}

bool  PythonQtWrapper_QFontDatabase::italic(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style) const
{
  return ( theWrappedObject->italic(family, style));
}

QList<int >  PythonQtWrapper_QFontDatabase::pointSizes(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style)
{
  return ( theWrappedObject->pointSizes(family, style));
}

bool  PythonQtWrapper_QFontDatabase::static_QFontDatabase_removeAllApplicationFonts()
{
  return (QFontDatabase::removeAllApplicationFonts());
}

bool  PythonQtWrapper_QFontDatabase::static_QFontDatabase_removeApplicationFont(int  id)
{
  return (QFontDatabase::removeApplicationFont(id));
}

QList<int >  PythonQtWrapper_QFontDatabase::smoothSizes(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style)
{
  return ( theWrappedObject->smoothSizes(family, style));
}

QList<int >  PythonQtWrapper_QFontDatabase::static_QFontDatabase_standardSizes()
{
  return (QFontDatabase::standardSizes());
}

QString  PythonQtWrapper_QFontDatabase::styleString(QFontDatabase* theWrappedObject, const QFont&  font)
{
  return ( theWrappedObject->styleString(font));
}

QString  PythonQtWrapper_QFontDatabase::styleString(QFontDatabase* theWrappedObject, const QFontInfo&  fontInfo)
{
  return ( theWrappedObject->styleString(fontInfo));
}

QStringList  PythonQtWrapper_QFontDatabase::styles(QFontDatabase* theWrappedObject, const QString&  family) const
{
  return ( theWrappedObject->styles(family));
}

bool  PythonQtWrapper_QFontDatabase::static_QFontDatabase_supportsThreadedFontRendering()
{
  return (QFontDatabase::supportsThreadedFontRendering());
}

QFont  PythonQtWrapper_QFontDatabase::static_QFontDatabase_systemFont(QFontDatabase::SystemFont  type)
{
  return (QFontDatabase::systemFont(type));
}

int  PythonQtWrapper_QFontDatabase::weight(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style) const
{
  return ( theWrappedObject->weight(family, style));
}

QString  PythonQtWrapper_QFontDatabase::static_QFontDatabase_writingSystemName(QFontDatabase::WritingSystem  writingSystem)
{
  return (QFontDatabase::writingSystemName(writingSystem));
}

QString  PythonQtWrapper_QFontDatabase::static_QFontDatabase_writingSystemSample(QFontDatabase::WritingSystem  writingSystem)
{
  return (QFontDatabase::writingSystemSample(writingSystem));
}

QList<QFontDatabase::WritingSystem >  PythonQtWrapper_QFontDatabase::writingSystems(QFontDatabase* theWrappedObject) const
{
  return ( theWrappedObject->writingSystems());
}

QList<QFontDatabase::WritingSystem >  PythonQtWrapper_QFontDatabase::writingSystems(QFontDatabase* theWrappedObject, const QString&  family) const
{
  return ( theWrappedObject->writingSystems(family));
}



PythonQtShell_QFontDialog::~PythonQtShell_QFontDialog() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QFontDialog::accept()
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
  QFontDialog::accept();
}
void PythonQtShell_QFontDialog::actionEvent(QActionEvent*  event0)
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
  QFontDialog::actionEvent(event0);
}
void PythonQtShell_QFontDialog::changeEvent(QEvent*  event0)
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
  QFontDialog::changeEvent(event0);
}
void PythonQtShell_QFontDialog::childEvent(QChildEvent*  event0)
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
  QFontDialog::childEvent(event0);
}
void PythonQtShell_QFontDialog::closeEvent(QCloseEvent*  arg__1)
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
  QFontDialog::closeEvent(arg__1);
}
void PythonQtShell_QFontDialog::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QFontDialog::contextMenuEvent(arg__1);
}
void PythonQtShell_QFontDialog::customEvent(QEvent*  event0)
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
  QFontDialog::customEvent(event0);
}
int  PythonQtShell_QFontDialog::devType() const
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
  return QFontDialog::devType();
}
void PythonQtShell_QFontDialog::done(int  result0)
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
  QFontDialog::done(result0);
}
void PythonQtShell_QFontDialog::dragEnterEvent(QDragEnterEvent*  event0)
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
  QFontDialog::dragEnterEvent(event0);
}
void PythonQtShell_QFontDialog::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QFontDialog::dragLeaveEvent(event0);
}
void PythonQtShell_QFontDialog::dragMoveEvent(QDragMoveEvent*  event0)
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
  QFontDialog::dragMoveEvent(event0);
}
void PythonQtShell_QFontDialog::dropEvent(QDropEvent*  event0)
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
  QFontDialog::dropEvent(event0);
}
void PythonQtShell_QFontDialog::enterEvent(QEvent*  event0)
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
  QFontDialog::enterEvent(event0);
}
bool  PythonQtShell_QFontDialog::event(QEvent*  event0)
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
  return QFontDialog::event(event0);
}
bool  PythonQtShell_QFontDialog::eventFilter(QObject*  object0, QEvent*  event1)
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
  return QFontDialog::eventFilter(object0, event1);
}
int  PythonQtShell_QFontDialog::exec()
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
  return QFontDialog::exec();
}
void PythonQtShell_QFontDialog::focusInEvent(QFocusEvent*  event0)
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
  QFontDialog::focusInEvent(event0);
}
bool  PythonQtShell_QFontDialog::focusNextPrevChild(bool  next0)
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
  return QFontDialog::focusNextPrevChild(next0);
}
void PythonQtShell_QFontDialog::focusOutEvent(QFocusEvent*  event0)
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
  QFontDialog::focusOutEvent(event0);
}
bool  PythonQtShell_QFontDialog::hasHeightForWidth() const
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
  return QFontDialog::hasHeightForWidth();
}
int  PythonQtShell_QFontDialog::heightForWidth(int  arg__1) const
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
  return QFontDialog::heightForWidth(arg__1);
}
void PythonQtShell_QFontDialog::hideEvent(QHideEvent*  event0)
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
  QFontDialog::hideEvent(event0);
}
void PythonQtShell_QFontDialog::initPainter(QPainter*  painter0) const
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
  QFontDialog::initPainter(painter0);
}
void PythonQtShell_QFontDialog::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QFontDialog::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QFontDialog::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QFontDialog::inputMethodQuery(arg__1);
}
void PythonQtShell_QFontDialog::keyPressEvent(QKeyEvent*  arg__1)
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
  QFontDialog::keyPressEvent(arg__1);
}
void PythonQtShell_QFontDialog::keyReleaseEvent(QKeyEvent*  event0)
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
  QFontDialog::keyReleaseEvent(event0);
}
void PythonQtShell_QFontDialog::leaveEvent(QEvent*  event0)
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
  QFontDialog::leaveEvent(event0);
}
int  PythonQtShell_QFontDialog::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QFontDialog::metric(arg__1);
}
void PythonQtShell_QFontDialog::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QFontDialog::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QFontDialog::mouseMoveEvent(QMouseEvent*  event0)
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
  QFontDialog::mouseMoveEvent(event0);
}
void PythonQtShell_QFontDialog::mousePressEvent(QMouseEvent*  event0)
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
  QFontDialog::mousePressEvent(event0);
}
void PythonQtShell_QFontDialog::mouseReleaseEvent(QMouseEvent*  event0)
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
  QFontDialog::mouseReleaseEvent(event0);
}
void PythonQtShell_QFontDialog::moveEvent(QMoveEvent*  event0)
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
  QFontDialog::moveEvent(event0);
}
bool  PythonQtShell_QFontDialog::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QFontDialog::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QFontDialog::paintEngine() const
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
  return QFontDialog::paintEngine();
}
void PythonQtShell_QFontDialog::paintEvent(QPaintEvent*  event0)
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
  QFontDialog::paintEvent(event0);
}
QPaintDevice*  PythonQtShell_QFontDialog::redirected(QPoint*  offset0) const
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
  return QFontDialog::redirected(offset0);
}
void PythonQtShell_QFontDialog::reject()
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
  QFontDialog::reject();
}
void PythonQtShell_QFontDialog::resizeEvent(QResizeEvent*  arg__1)
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
  QFontDialog::resizeEvent(arg__1);
}
void PythonQtShell_QFontDialog::setVisible(bool  visible0)
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
  QFontDialog::setVisible(visible0);
}
QPainter*  PythonQtShell_QFontDialog::sharedPainter() const
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
  return QFontDialog::sharedPainter();
}
void PythonQtShell_QFontDialog::showEvent(QShowEvent*  arg__1)
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
  QFontDialog::showEvent(arg__1);
}
void PythonQtShell_QFontDialog::tabletEvent(QTabletEvent*  event0)
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
  QFontDialog::tabletEvent(event0);
}
void PythonQtShell_QFontDialog::timerEvent(QTimerEvent*  event0)
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
  QFontDialog::timerEvent(event0);
}
void PythonQtShell_QFontDialog::wheelEvent(QWheelEvent*  event0)
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
  QFontDialog::wheelEvent(event0);
}
QFontDialog* PythonQtWrapper_QFontDialog::new_QFontDialog(QWidget*  parent)
{ 
return new PythonQtShell_QFontDialog(parent); }

QFontDialog* PythonQtWrapper_QFontDialog::new_QFontDialog(const QFont&  initial, QWidget*  parent)
{ 
return new PythonQtShell_QFontDialog(initial, parent); }

const QMetaObject* PythonQtShell_QFontDialog::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFontDialog::staticMetaObject);
  } else {
    return &QFontDialog::staticMetaObject;
  }
}
int PythonQtShell_QFontDialog::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFontDialog::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QFont  PythonQtWrapper_QFontDialog::currentFont(QFontDialog* theWrappedObject) const
{
  return ( theWrappedObject->currentFont());
}

QFont  PythonQtWrapper_QFontDialog::static_QFontDialog_getFont(bool*  ok, QWidget*  parent)
{
  return (QFontDialog::getFont(ok, parent));
}

QFont  PythonQtWrapper_QFontDialog::static_QFontDialog_getFont(bool*  ok, const QFont&  initial, QWidget*  parent, const QString&  title, QFontDialog::FontDialogOptions  options)
{
  return (QFontDialog::getFont(ok, initial, parent, title, options));
}

void PythonQtWrapper_QFontDialog::open(QFontDialog* theWrappedObject, QObject*  receiver, const char*  member)
{
  ( theWrappedObject->open(receiver, member));
}

QFontDialog::FontDialogOptions  PythonQtWrapper_QFontDialog::options(QFontDialog* theWrappedObject) const
{
  return ( theWrappedObject->options());
}

QFont  PythonQtWrapper_QFontDialog::selectedFont(QFontDialog* theWrappedObject) const
{
  return ( theWrappedObject->selectedFont());
}

void PythonQtWrapper_QFontDialog::setCurrentFont(QFontDialog* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setCurrentFont(font));
}

void PythonQtWrapper_QFontDialog::setOption(QFontDialog* theWrappedObject, QFontDialog::FontDialogOption  option, bool  on)
{
  ( theWrappedObject->setOption(option, on));
}

void PythonQtWrapper_QFontDialog::setOptions(QFontDialog* theWrappedObject, QFontDialog::FontDialogOptions  options)
{
  ( theWrappedObject->setOptions(options));
}

bool  PythonQtWrapper_QFontDialog::testOption(QFontDialog* theWrappedObject, QFontDialog::FontDialogOption  option) const
{
  return ( theWrappedObject->testOption(option));
}



QFontInfo* PythonQtWrapper_QFontInfo::new_QFontInfo(const QFont&  arg__1)
{ 
return new QFontInfo(arg__1); }

QFontInfo* PythonQtWrapper_QFontInfo::new_QFontInfo(const QFontInfo&  arg__1)
{ 
return new QFontInfo(arg__1); }

bool  PythonQtWrapper_QFontInfo::bold(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->bold());
}

bool  PythonQtWrapper_QFontInfo::exactMatch(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->exactMatch());
}

QString  PythonQtWrapper_QFontInfo::family(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->family());
}

bool  PythonQtWrapper_QFontInfo::fixedPitch(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->fixedPitch());
}

bool  PythonQtWrapper_QFontInfo::italic(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->italic());
}

bool  PythonQtWrapper_QFontInfo::overline(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->overline());
}

int  PythonQtWrapper_QFontInfo::pixelSize(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->pixelSize());
}

int  PythonQtWrapper_QFontInfo::pointSize(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->pointSize());
}

qreal  PythonQtWrapper_QFontInfo::pointSizeF(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->pointSizeF());
}

bool  PythonQtWrapper_QFontInfo::rawMode(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->rawMode());
}

bool  PythonQtWrapper_QFontInfo::strikeOut(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->strikeOut());
}

QFont::Style  PythonQtWrapper_QFontInfo::style(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

QFont::StyleHint  PythonQtWrapper_QFontInfo::styleHint(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->styleHint());
}

QString  PythonQtWrapper_QFontInfo::styleName(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->styleName());
}

void PythonQtWrapper_QFontInfo::swap(QFontInfo* theWrappedObject, QFontInfo&  other)
{
  ( theWrappedObject->swap(other));
}

bool  PythonQtWrapper_QFontInfo::underline(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->underline());
}

int  PythonQtWrapper_QFontInfo::weight(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->weight());
}



QFontMetrics* PythonQtWrapper_QFontMetrics::new_QFontMetrics(const QFont&  arg__1)
{ 
return new QFontMetrics(arg__1); }

QFontMetrics* PythonQtWrapper_QFontMetrics::new_QFontMetrics(const QFont&  arg__1, QPaintDevice*  pd)
{ 
return new QFontMetrics(arg__1, pd); }

int  PythonQtWrapper_QFontMetrics::ascent(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

int  PythonQtWrapper_QFontMetrics::averageCharWidth(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->averageCharWidth());
}

QRect  PythonQtWrapper_QFontMetrics::boundingRect(QFontMetrics* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->boundingRect(arg__1));
}

QRect  PythonQtWrapper_QFontMetrics::boundingRect(QFontMetrics* theWrappedObject, const QRect&  r, int  flags, const QString&  text, int  tabstops, int*  tabarray) const
{
  return ( theWrappedObject->boundingRect(r, flags, text, tabstops, tabarray));
}

QRect  PythonQtWrapper_QFontMetrics::boundingRect(QFontMetrics* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->boundingRect(text));
}

QRect  PythonQtWrapper_QFontMetrics::boundingRect(QFontMetrics* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, int  tabstops, int*  tabarray) const
{
  return ( theWrappedObject->boundingRect(x, y, w, h, flags, text, tabstops, tabarray));
}

int  PythonQtWrapper_QFontMetrics::charWidth(QFontMetrics* theWrappedObject, const QString&  str, int  pos) const
{
  return ( theWrappedObject->charWidth(str, pos));
}

int  PythonQtWrapper_QFontMetrics::descent(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QString  PythonQtWrapper_QFontMetrics::elidedText(QFontMetrics* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, int  width, int  flags) const
{
  return ( theWrappedObject->elidedText(text, mode, width, flags));
}

int  PythonQtWrapper_QFontMetrics::height(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QFontMetrics::inFont(QFontMetrics* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->inFont(arg__1));
}

bool  PythonQtWrapper_QFontMetrics::inFontUcs4(QFontMetrics* theWrappedObject, uint  ucs4) const
{
  return ( theWrappedObject->inFontUcs4(ucs4));
}

int  PythonQtWrapper_QFontMetrics::leading(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->leading());
}

int  PythonQtWrapper_QFontMetrics::leftBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->leftBearing(arg__1));
}

int  PythonQtWrapper_QFontMetrics::lineSpacing(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->lineSpacing());
}

int  PythonQtWrapper_QFontMetrics::lineWidth(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->lineWidth());
}

int  PythonQtWrapper_QFontMetrics::maxWidth(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->maxWidth());
}

int  PythonQtWrapper_QFontMetrics::minLeftBearing(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->minLeftBearing());
}

int  PythonQtWrapper_QFontMetrics::minRightBearing(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->minRightBearing());
}

int  PythonQtWrapper_QFontMetrics::overlinePos(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->overlinePos());
}

int  PythonQtWrapper_QFontMetrics::rightBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->rightBearing(arg__1));
}

QSize  PythonQtWrapper_QFontMetrics::size(QFontMetrics* theWrappedObject, int  flags, const QString&  str, int  tabstops, int*  tabarray) const
{
  return ( theWrappedObject->size(flags, str, tabstops, tabarray));
}

int  PythonQtWrapper_QFontMetrics::strikeOutPos(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->strikeOutPos());
}

void PythonQtWrapper_QFontMetrics::swap(QFontMetrics* theWrappedObject, QFontMetrics&  other)
{
  ( theWrappedObject->swap(other));
}

QRect  PythonQtWrapper_QFontMetrics::tightBoundingRect(QFontMetrics* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->tightBoundingRect(text));
}

int  PythonQtWrapper_QFontMetrics::underlinePos(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->underlinePos());
}

int  PythonQtWrapper_QFontMetrics::width(QFontMetrics* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->width(arg__1));
}

int  PythonQtWrapper_QFontMetrics::width(QFontMetrics* theWrappedObject, const QString&  arg__1, int  len) const
{
  return ( theWrappedObject->width(arg__1, len));
}

int  PythonQtWrapper_QFontMetrics::width(QFontMetrics* theWrappedObject, const QString&  arg__1, int  len, int  flags) const
{
  return ( theWrappedObject->width(arg__1, len, flags));
}

int  PythonQtWrapper_QFontMetrics::xHeight(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->xHeight());
}



QFontMetricsF* PythonQtWrapper_QFontMetricsF::new_QFontMetricsF(const QFont&  arg__1)
{ 
return new QFontMetricsF(arg__1); }

QFontMetricsF* PythonQtWrapper_QFontMetricsF::new_QFontMetricsF(const QFont&  arg__1, QPaintDevice*  pd)
{ 
return new QFontMetricsF(arg__1, pd); }

qreal  PythonQtWrapper_QFontMetricsF::ascent(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QFontMetricsF::averageCharWidth(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->averageCharWidth());
}

QRectF  PythonQtWrapper_QFontMetricsF::boundingRect(QFontMetricsF* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->boundingRect(arg__1));
}

QRectF  PythonQtWrapper_QFontMetricsF::boundingRect(QFontMetricsF* theWrappedObject, const QRectF&  r, int  flags, const QString&  string, int  tabstops, int*  tabarray) const
{
  return ( theWrappedObject->boundingRect(r, flags, string, tabstops, tabarray));
}

QRectF  PythonQtWrapper_QFontMetricsF::boundingRect(QFontMetricsF* theWrappedObject, const QString&  string) const
{
  return ( theWrappedObject->boundingRect(string));
}

qreal  PythonQtWrapper_QFontMetricsF::descent(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QString  PythonQtWrapper_QFontMetricsF::elidedText(QFontMetricsF* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, qreal  width, int  flags) const
{
  return ( theWrappedObject->elidedText(text, mode, width, flags));
}

qreal  PythonQtWrapper_QFontMetricsF::height(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QFontMetricsF::inFont(QFontMetricsF* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->inFont(arg__1));
}

bool  PythonQtWrapper_QFontMetricsF::inFontUcs4(QFontMetricsF* theWrappedObject, uint  ucs4) const
{
  return ( theWrappedObject->inFontUcs4(ucs4));
}

qreal  PythonQtWrapper_QFontMetricsF::leading(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->leading());
}

qreal  PythonQtWrapper_QFontMetricsF::leftBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->leftBearing(arg__1));
}

qreal  PythonQtWrapper_QFontMetricsF::lineSpacing(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->lineSpacing());
}

qreal  PythonQtWrapper_QFontMetricsF::lineWidth(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->lineWidth());
}

qreal  PythonQtWrapper_QFontMetricsF::maxWidth(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->maxWidth());
}

qreal  PythonQtWrapper_QFontMetricsF::minLeftBearing(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->minLeftBearing());
}

qreal  PythonQtWrapper_QFontMetricsF::minRightBearing(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->minRightBearing());
}

qreal  PythonQtWrapper_QFontMetricsF::overlinePos(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->overlinePos());
}

qreal  PythonQtWrapper_QFontMetricsF::rightBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->rightBearing(arg__1));
}

QSizeF  PythonQtWrapper_QFontMetricsF::size(QFontMetricsF* theWrappedObject, int  flags, const QString&  str, int  tabstops, int*  tabarray) const
{
  return ( theWrappedObject->size(flags, str, tabstops, tabarray));
}

qreal  PythonQtWrapper_QFontMetricsF::strikeOutPos(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->strikeOutPos());
}

void PythonQtWrapper_QFontMetricsF::swap(QFontMetricsF* theWrappedObject, QFontMetricsF&  other)
{
  ( theWrappedObject->swap(other));
}

QRectF  PythonQtWrapper_QFontMetricsF::tightBoundingRect(QFontMetricsF* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->tightBoundingRect(text));
}

qreal  PythonQtWrapper_QFontMetricsF::underlinePos(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->underlinePos());
}

qreal  PythonQtWrapper_QFontMetricsF::width(QFontMetricsF* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->width(arg__1));
}

qreal  PythonQtWrapper_QFontMetricsF::width(QFontMetricsF* theWrappedObject, const QString&  string) const
{
  return ( theWrappedObject->width(string));
}

qreal  PythonQtWrapper_QFontMetricsF::xHeight(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->xHeight());
}



PythonQtShell_QFormLayout::~PythonQtShell_QFormLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QFormLayout::addItem(QLayoutItem*  item0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("addItem");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QLayoutItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&item0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFormLayout::addItem(item0);
}
void PythonQtShell_QFormLayout::childEvent(QChildEvent*  e0)
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
  QFormLayout::childEvent(e0);
}
QSizePolicy::ControlTypes  PythonQtShell_QFormLayout::controlTypes() const
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
  return QFormLayout::controlTypes();
}
int  PythonQtShell_QFormLayout::count() const
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
  return QFormLayout::count();
}
void PythonQtShell_QFormLayout::customEvent(QEvent*  event0)
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
  QFormLayout::customEvent(event0);
}
bool  PythonQtShell_QFormLayout::event(QEvent*  event0)
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
  return QFormLayout::event(event0);
}
bool  PythonQtShell_QFormLayout::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QFormLayout::eventFilter(watched0, event1);
}
Qt::Orientations  PythonQtShell_QFormLayout::expandingDirections() const
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
  return QFormLayout::expandingDirections();
}
QRect  PythonQtShell_QFormLayout::geometry() const
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
  return QFormLayout::geometry();
}
bool  PythonQtShell_QFormLayout::hasHeightForWidth() const
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
  return QFormLayout::hasHeightForWidth();
}
int  PythonQtShell_QFormLayout::heightForWidth(int  width0) const
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
      void* args[2] = {NULL, (void*)&width0};
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
  return QFormLayout::heightForWidth(width0);
}
int  PythonQtShell_QFormLayout::indexOf(QWidget*  arg__1) const
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
  return QFormLayout::indexOf(arg__1);
}
void PythonQtShell_QFormLayout::invalidate()
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
  QFormLayout::invalidate();
}
bool  PythonQtShell_QFormLayout::isEmpty() const
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
  return QFormLayout::isEmpty();
}
QLayoutItem*  PythonQtShell_QFormLayout::itemAt(int  index0) const
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
  return QFormLayout::itemAt(index0);
}
QLayout*  PythonQtShell_QFormLayout::layout()
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
  return QFormLayout::layout();
}
QSize  PythonQtShell_QFormLayout::maximumSize() const
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
  return QFormLayout::maximumSize();
}
QSize  PythonQtShell_QFormLayout::minimumSize() const
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
  return QFormLayout::minimumSize();
}
void PythonQtShell_QFormLayout::setGeometry(const QRect&  rect0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setGeometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QRect&"};
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
  QFormLayout::setGeometry(rect0);
}
QSize  PythonQtShell_QFormLayout::sizeHint() const
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
  return QFormLayout::sizeHint();
}
QLayoutItem*  PythonQtShell_QFormLayout::takeAt(int  index0)
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
  return QFormLayout::takeAt(index0);
}
void PythonQtShell_QFormLayout::timerEvent(QTimerEvent*  event0)
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
  QFormLayout::timerEvent(event0);
}
QFormLayout* PythonQtWrapper_QFormLayout::new_QFormLayout(QWidget*  parent)
{ 
return new PythonQtShell_QFormLayout(parent); }

const QMetaObject* PythonQtShell_QFormLayout::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFormLayout::staticMetaObject);
  } else {
    return &QFormLayout::staticMetaObject;
  }
}
int PythonQtShell_QFormLayout::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFormLayout::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  layout)
{
  ( theWrappedObject->addRow(layout));
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QLayout* >  field)
{
  ( theWrappedObject->addRow(label, field));
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QWidget* >  field)
{
  ( theWrappedObject->addRow(label, field));
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget)
{
  ( theWrappedObject->addRow(widget));
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, const QString&  labelText, PythonQtPassOwnershipToCPP<QLayout* >  field)
{
  ( theWrappedObject->addRow(labelText, field));
}

void PythonQtWrapper_QFormLayout::addRow(QFormLayout* theWrappedObject, const QString&  labelText, PythonQtPassOwnershipToCPP<QWidget* >  field)
{
  ( theWrappedObject->addRow(labelText, field));
}

QFormLayout::FieldGrowthPolicy  PythonQtWrapper_QFormLayout::fieldGrowthPolicy(QFormLayout* theWrappedObject) const
{
  return ( theWrappedObject->fieldGrowthPolicy());
}

Qt::Alignment  PythonQtWrapper_QFormLayout::formAlignment(QFormLayout* theWrappedObject) const
{
  return ( theWrappedObject->formAlignment());
}

void PythonQtWrapper_QFormLayout::getItemPosition(QFormLayout* theWrappedObject, int  index, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const
{
  ( theWrappedObject->getItemPosition(index, rowPtr, rolePtr));
}

void PythonQtWrapper_QFormLayout::getLayoutPosition(QFormLayout* theWrappedObject, QLayout*  layout, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const
{
  ( theWrappedObject->getLayoutPosition(layout, rowPtr, rolePtr));
}

void PythonQtWrapper_QFormLayout::getWidgetPosition(QFormLayout* theWrappedObject, QWidget*  widget, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const
{
  ( theWrappedObject->getWidgetPosition(widget, rowPtr, rolePtr));
}

bool  PythonQtWrapper_QFormLayout::hasHeightForWidth(QFormLayout* theWrappedObject) const
{
  return ( theWrappedObject->hasHeightForWidth());
}

int  PythonQtWrapper_QFormLayout::heightForWidth(QFormLayout* theWrappedObject, int  width) const
{
  return ( theWrappedObject->heightForWidth(width));
}

int  PythonQtWrapper_QFormLayout::horizontalSpacing(QFormLayout* theWrappedObject) const
{
  return ( theWrappedObject->horizontalSpacing());
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QLayout* >  layout)
{
  ( theWrappedObject->insertRow(row, layout));
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QLayout* >  field)
{
  ( theWrappedObject->insertRow(row, label, field));
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QWidget* >  field)
{
  ( theWrappedObject->insertRow(row, label, field));
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QWidget* >  widget)
{
  ( theWrappedObject->insertRow(row, widget));
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, PythonQtPassOwnershipToCPP<QLayout* >  field)
{
  ( theWrappedObject->insertRow(row, labelText, field));
}

void PythonQtWrapper_QFormLayout::insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, PythonQtPassOwnershipToCPP<QWidget* >  field)
{
  ( theWrappedObject->insertRow(row, labelText, field));
}

QLayoutItem*  PythonQtWrapper_QFormLayout::itemAt(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role) const
{
  return ( theWrappedObject->itemAt(row, role));
}

Qt::Alignment  PythonQtWrapper_QFormLayout::labelAlignment(QFormLayout* theWrappedObject) const
{
  return ( theWrappedObject->labelAlignment());
}

QWidget*  PythonQtWrapper_QFormLayout::labelForField(QFormLayout* theWrappedObject, QLayout*  field) const
{
  return ( theWrappedObject->labelForField(field));
}

QWidget*  PythonQtWrapper_QFormLayout::labelForField(QFormLayout* theWrappedObject, QWidget*  field) const
{
  return ( theWrappedObject->labelForField(field));
}

int  PythonQtWrapper_QFormLayout::rowCount(QFormLayout* theWrappedObject) const
{
  return ( theWrappedObject->rowCount());
}

QFormLayout::RowWrapPolicy  PythonQtWrapper_QFormLayout::rowWrapPolicy(QFormLayout* theWrappedObject) const
{
  return ( theWrappedObject->rowWrapPolicy());
}

void PythonQtWrapper_QFormLayout::setFieldGrowthPolicy(QFormLayout* theWrappedObject, QFormLayout::FieldGrowthPolicy  policy)
{
  ( theWrappedObject->setFieldGrowthPolicy(policy));
}

void PythonQtWrapper_QFormLayout::setFormAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setFormAlignment(alignment));
}

void PythonQtWrapper_QFormLayout::setHorizontalSpacing(QFormLayout* theWrappedObject, int  spacing)
{
  ( theWrappedObject->setHorizontalSpacing(spacing));
}

void PythonQtWrapper_QFormLayout::setItem(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, PythonQtPassOwnershipToCPP<QLayoutItem* >  item)
{
  ( theWrappedObject->setItem(row, role, item));
}

void PythonQtWrapper_QFormLayout::setLabelAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setLabelAlignment(alignment));
}

void PythonQtWrapper_QFormLayout::setLayout(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, PythonQtPassOwnershipToCPP<QLayout* >  layout)
{
  ( theWrappedObject->setLayout(row, role, layout));
}

void PythonQtWrapper_QFormLayout::setRowWrapPolicy(QFormLayout* theWrappedObject, QFormLayout::RowWrapPolicy  policy)
{
  ( theWrappedObject->setRowWrapPolicy(policy));
}

void PythonQtWrapper_QFormLayout::setSpacing(QFormLayout* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setSpacing(arg__1));
}

void PythonQtWrapper_QFormLayout::setVerticalSpacing(QFormLayout* theWrappedObject, int  spacing)
{
  ( theWrappedObject->setVerticalSpacing(spacing));
}

void PythonQtWrapper_QFormLayout::setWidget(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, PythonQtPassOwnershipToCPP<QWidget* >  widget)
{
  ( theWrappedObject->setWidget(row, role, widget));
}

QSize  PythonQtWrapper_QFormLayout::sizeHint(QFormLayout* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

int  PythonQtWrapper_QFormLayout::spacing(QFormLayout* theWrappedObject) const
{
  return ( theWrappedObject->spacing());
}

int  PythonQtWrapper_QFormLayout::verticalSpacing(QFormLayout* theWrappedObject) const
{
  return ( theWrappedObject->verticalSpacing());
}



PythonQtShell_QFrame::~PythonQtShell_QFrame() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QFrame::actionEvent(QActionEvent*  event0)
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
  QFrame::actionEvent(event0);
}
void PythonQtShell_QFrame::changeEvent(QEvent*  arg__1)
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
  QFrame::changeEvent(arg__1);
}
void PythonQtShell_QFrame::childEvent(QChildEvent*  event0)
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
  QFrame::childEvent(event0);
}
void PythonQtShell_QFrame::closeEvent(QCloseEvent*  event0)
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
  QFrame::closeEvent(event0);
}
void PythonQtShell_QFrame::contextMenuEvent(QContextMenuEvent*  event0)
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
  QFrame::contextMenuEvent(event0);
}
void PythonQtShell_QFrame::customEvent(QEvent*  event0)
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
  QFrame::customEvent(event0);
}
int  PythonQtShell_QFrame::devType() const
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
  return QFrame::devType();
}
void PythonQtShell_QFrame::dragEnterEvent(QDragEnterEvent*  event0)
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
  QFrame::dragEnterEvent(event0);
}
void PythonQtShell_QFrame::dragLeaveEvent(QDragLeaveEvent*  event0)
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
  QFrame::dragLeaveEvent(event0);
}
void PythonQtShell_QFrame::dragMoveEvent(QDragMoveEvent*  event0)
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
  QFrame::dragMoveEvent(event0);
}
void PythonQtShell_QFrame::dropEvent(QDropEvent*  event0)
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
  QFrame::dropEvent(event0);
}
void PythonQtShell_QFrame::enterEvent(QEvent*  event0)
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
  QFrame::enterEvent(event0);
}
bool  PythonQtShell_QFrame::event(QEvent*  e0)
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
  return QFrame::event(e0);
}
bool  PythonQtShell_QFrame::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QFrame::eventFilter(watched0, event1);
}
void PythonQtShell_QFrame::focusInEvent(QFocusEvent*  event0)
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
  QFrame::focusInEvent(event0);
}
bool  PythonQtShell_QFrame::focusNextPrevChild(bool  next0)
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
  return QFrame::focusNextPrevChild(next0);
}
void PythonQtShell_QFrame::focusOutEvent(QFocusEvent*  event0)
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
  QFrame::focusOutEvent(event0);
}
bool  PythonQtShell_QFrame::hasHeightForWidth() const
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
  return QFrame::hasHeightForWidth();
}
int  PythonQtShell_QFrame::heightForWidth(int  arg__1) const
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
  return QFrame::heightForWidth(arg__1);
}
void PythonQtShell_QFrame::hideEvent(QHideEvent*  event0)
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
  QFrame::hideEvent(event0);
}
void PythonQtShell_QFrame::initPainter(QPainter*  painter0) const
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
  QFrame::initPainter(painter0);
}
void PythonQtShell_QFrame::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QFrame::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QFrame::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QFrame::inputMethodQuery(arg__1);
}
void PythonQtShell_QFrame::keyPressEvent(QKeyEvent*  event0)
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
  QFrame::keyPressEvent(event0);
}
void PythonQtShell_QFrame::keyReleaseEvent(QKeyEvent*  event0)
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
  QFrame::keyReleaseEvent(event0);
}
void PythonQtShell_QFrame::leaveEvent(QEvent*  event0)
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
  QFrame::leaveEvent(event0);
}
int  PythonQtShell_QFrame::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QFrame::metric(arg__1);
}
QSize  PythonQtShell_QFrame::minimumSizeHint() const
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
  return QFrame::minimumSizeHint();
}
void PythonQtShell_QFrame::mouseDoubleClickEvent(QMouseEvent*  event0)
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
  QFrame::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QFrame::mouseMoveEvent(QMouseEvent*  event0)
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
  QFrame::mouseMoveEvent(event0);
}
void PythonQtShell_QFrame::mousePressEvent(QMouseEvent*  event0)
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
  QFrame::mousePressEvent(event0);
}
void PythonQtShell_QFrame::mouseReleaseEvent(QMouseEvent*  event0)
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
  QFrame::mouseReleaseEvent(event0);
}
void PythonQtShell_QFrame::moveEvent(QMoveEvent*  event0)
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
  QFrame::moveEvent(event0);
}
bool  PythonQtShell_QFrame::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QFrame::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QFrame::paintEngine() const
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
  return QFrame::paintEngine();
}
void PythonQtShell_QFrame::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
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
}
  QFrame::paintEvent(arg__1);
}
QPaintDevice*  PythonQtShell_QFrame::redirected(QPoint*  offset0) const
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
  return QFrame::redirected(offset0);
}
void PythonQtShell_QFrame::resizeEvent(QResizeEvent*  event0)
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
  QFrame::resizeEvent(event0);
}
void PythonQtShell_QFrame::setVisible(bool  visible0)
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
  QFrame::setVisible(visible0);
}
QPainter*  PythonQtShell_QFrame::sharedPainter() const
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
  return QFrame::sharedPainter();
}
void PythonQtShell_QFrame::showEvent(QShowEvent*  event0)
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
  QFrame::showEvent(event0);
}
QSize  PythonQtShell_QFrame::sizeHint() const
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
  return QFrame::sizeHint();
}
void PythonQtShell_QFrame::tabletEvent(QTabletEvent*  event0)
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
  QFrame::tabletEvent(event0);
}
void PythonQtShell_QFrame::timerEvent(QTimerEvent*  event0)
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
  QFrame::timerEvent(event0);
}
void PythonQtShell_QFrame::wheelEvent(QWheelEvent*  event0)
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
  QFrame::wheelEvent(event0);
}
QFrame* PythonQtWrapper_QFrame::new_QFrame(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QFrame(parent, f); }

const QMetaObject* PythonQtShell_QFrame::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFrame::staticMetaObject);
  } else {
    return &QFrame::staticMetaObject;
  }
}
int PythonQtShell_QFrame::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFrame::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QFrame::drawFrame(QFrame* theWrappedObject, QPainter*  arg__1)
{
  ( ((PythonQtPublicPromoter_QFrame*)theWrappedObject)->promoted_drawFrame(arg__1));
}

QRect  PythonQtWrapper_QFrame::frameRect(QFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameRect());
}

QFrame::Shadow  PythonQtWrapper_QFrame::frameShadow(QFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameShadow());
}

QFrame::Shape  PythonQtWrapper_QFrame::frameShape(QFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameShape());
}

int  PythonQtWrapper_QFrame::frameStyle(QFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameStyle());
}

int  PythonQtWrapper_QFrame::frameWidth(QFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameWidth());
}

void PythonQtWrapper_QFrame::initStyleOption(QFrame* theWrappedObject, QStyleOptionFrame*  option) const
{
  ( ((PythonQtPublicPromoter_QFrame*)theWrappedObject)->promoted_initStyleOption(option));
}

int  PythonQtWrapper_QFrame::lineWidth(QFrame* theWrappedObject) const
{
  return ( theWrappedObject->lineWidth());
}

int  PythonQtWrapper_QFrame::midLineWidth(QFrame* theWrappedObject) const
{
  return ( theWrappedObject->midLineWidth());
}

void PythonQtWrapper_QFrame::setFrameRect(QFrame* theWrappedObject, const QRect&  arg__1)
{
  ( theWrappedObject->setFrameRect(arg__1));
}

void PythonQtWrapper_QFrame::setFrameShadow(QFrame* theWrappedObject, QFrame::Shadow  arg__1)
{
  ( theWrappedObject->setFrameShadow(arg__1));
}

void PythonQtWrapper_QFrame::setFrameShape(QFrame* theWrappedObject, QFrame::Shape  arg__1)
{
  ( theWrappedObject->setFrameShape(arg__1));
}

void PythonQtWrapper_QFrame::setFrameStyle(QFrame* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setFrameStyle(arg__1));
}

void PythonQtWrapper_QFrame::setLineWidth(QFrame* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setLineWidth(arg__1));
}

void PythonQtWrapper_QFrame::setMidLineWidth(QFrame* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setMidLineWidth(arg__1));
}

QSize  PythonQtWrapper_QFrame::sizeHint(QFrame* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}



PythonQtShell_QGesture::~PythonQtShell_QGesture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGesture::childEvent(QChildEvent*  event0)
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
  QGesture::childEvent(event0);
}
void PythonQtShell_QGesture::customEvent(QEvent*  event0)
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
  QGesture::customEvent(event0);
}
bool  PythonQtShell_QGesture::event(QEvent*  event0)
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
  return QGesture::event(event0);
}
bool  PythonQtShell_QGesture::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGesture::eventFilter(watched0, event1);
}
void PythonQtShell_QGesture::timerEvent(QTimerEvent*  event0)
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
  QGesture::timerEvent(event0);
}
QGesture* PythonQtWrapper_QGesture::new_QGesture(QObject*  parent)
{ 
return new PythonQtShell_QGesture(parent); }

const QMetaObject* PythonQtShell_QGesture::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGesture::staticMetaObject);
  } else {
    return &QGesture::staticMetaObject;
  }
}
int PythonQtShell_QGesture::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGesture::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QGesture::GestureCancelPolicy  PythonQtWrapper_QGesture::gestureCancelPolicy(QGesture* theWrappedObject) const
{
  return ( theWrappedObject->gestureCancelPolicy());
}

Qt::GestureType  PythonQtWrapper_QGesture::gestureType(QGesture* theWrappedObject) const
{
  return ( theWrappedObject->gestureType());
}

bool  PythonQtWrapper_QGesture::hasHotSpot(QGesture* theWrappedObject) const
{
  return ( theWrappedObject->hasHotSpot());
}

QPointF  PythonQtWrapper_QGesture::hotSpot(QGesture* theWrappedObject) const
{
  return ( theWrappedObject->hotSpot());
}

void PythonQtWrapper_QGesture::setGestureCancelPolicy(QGesture* theWrappedObject, QGesture::GestureCancelPolicy  policy)
{
  ( theWrappedObject->setGestureCancelPolicy(policy));
}

void PythonQtWrapper_QGesture::setHotSpot(QGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setHotSpot(value));
}

Qt::GestureState  PythonQtWrapper_QGesture::state(QGesture* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QGesture::unsetHotSpot(QGesture* theWrappedObject)
{
  ( theWrappedObject->unsetHotSpot());
}

QString PythonQtWrapper_QGesture::py_toString(QGesture* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



QGestureEvent* PythonQtWrapper_QGestureEvent::new_QGestureEvent(const QList<QGesture* >&  gestures)
{ 
return new QGestureEvent(gestures); }

void PythonQtWrapper_QGestureEvent::accept(QGestureEvent* theWrappedObject, QGesture*  arg__1)
{
  ( theWrappedObject->accept(arg__1));
}

void PythonQtWrapper_QGestureEvent::accept(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1)
{
  ( theWrappedObject->accept(arg__1));
}

QList<QGesture* >  PythonQtWrapper_QGestureEvent::activeGestures(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->activeGestures());
}

QList<QGesture* >  PythonQtWrapper_QGestureEvent::canceledGestures(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->canceledGestures());
}

QGesture*  PythonQtWrapper_QGestureEvent::gesture(QGestureEvent* theWrappedObject, Qt::GestureType  type) const
{
  return ( theWrappedObject->gesture(type));
}

QList<QGesture* >  PythonQtWrapper_QGestureEvent::gestures(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->gestures());
}

void PythonQtWrapper_QGestureEvent::ignore(QGestureEvent* theWrappedObject, QGesture*  arg__1)
{
  ( theWrappedObject->ignore(arg__1));
}

void PythonQtWrapper_QGestureEvent::ignore(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1)
{
  ( theWrappedObject->ignore(arg__1));
}

bool  PythonQtWrapper_QGestureEvent::isAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1) const
{
  return ( theWrappedObject->isAccepted(arg__1));
}

bool  PythonQtWrapper_QGestureEvent::isAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1) const
{
  return ( theWrappedObject->isAccepted(arg__1));
}

QPointF  PythonQtWrapper_QGestureEvent::mapToGraphicsScene(QGestureEvent* theWrappedObject, const QPointF&  gesturePoint) const
{
  return ( theWrappedObject->mapToGraphicsScene(gesturePoint));
}

void PythonQtWrapper_QGestureEvent::setAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1, bool  arg__2)
{
  ( theWrappedObject->setAccepted(arg__1, arg__2));
}

void PythonQtWrapper_QGestureEvent::setAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1, bool  arg__2)
{
  ( theWrappedObject->setAccepted(arg__1, arg__2));
}

void PythonQtWrapper_QGestureEvent::setWidget(QGestureEvent* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->setWidget(widget));
}

QWidget*  PythonQtWrapper_QGestureEvent::widget(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}

QString PythonQtWrapper_QGestureEvent::py_toString(QGestureEvent* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QGestureRecognizer::~PythonQtShell_QGestureRecognizer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QGesture*  PythonQtShell_QGestureRecognizer::create(QObject*  target0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("create");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QGesture*" , "QObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGesture* returnValue;
      void* args[2] = {NULL, (void*)&target0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
          } else {
            returnValue = *((QGesture**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGestureRecognizer::create(target0);
}
QGestureRecognizer::Result  PythonQtShell_QGestureRecognizer::recognize(QGesture*  state0, QObject*  watched1, QEvent*  event2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("recognize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QGestureRecognizer::Result" , "QGesture*" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QGestureRecognizer::Result returnValue;
      void* args[4] = {NULL, (void*)&state0, (void*)&watched1, (void*)&event2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("recognize", methodInfo, result);
          } else {
            returnValue = *((QGestureRecognizer::Result*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGestureRecognizer::Result();
}
void PythonQtShell_QGestureRecognizer::reset(QGesture*  state0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGesture*"};
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
  QGestureRecognizer::reset(state0);
}
QGestureRecognizer* PythonQtWrapper_QGestureRecognizer::new_QGestureRecognizer()
{ 
return new PythonQtShell_QGestureRecognizer(); }

QGesture*  PythonQtWrapper_QGestureRecognizer::create(QGestureRecognizer* theWrappedObject, QObject*  target)
{
  return ( theWrappedObject->create(target));
}

QGestureRecognizer::Result  PythonQtWrapper_QGestureRecognizer::recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event)
{
  return ( theWrappedObject->recognize(state, watched, event));
}

Qt::GestureType  PythonQtWrapper_QGestureRecognizer::static_QGestureRecognizer_registerRecognizer(QGestureRecognizer*  recognizer)
{
  return (QGestureRecognizer::registerRecognizer(recognizer));
}

void PythonQtWrapper_QGestureRecognizer::reset(QGestureRecognizer* theWrappedObject, QGesture*  state)
{
  ( theWrappedObject->reset(state));
}

void PythonQtWrapper_QGestureRecognizer::static_QGestureRecognizer_unregisterRecognizer(Qt::GestureType  type)
{
  (QGestureRecognizer::unregisterRecognizer(type));
}



QGlyphRun* PythonQtWrapper_QGlyphRun::new_QGlyphRun()
{ 
return new QGlyphRun(); }

QGlyphRun* PythonQtWrapper_QGlyphRun::new_QGlyphRun(const QGlyphRun&  other)
{ 
return new QGlyphRun(other); }

QRectF  PythonQtWrapper_QGlyphRun::boundingRect(QGlyphRun* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

void PythonQtWrapper_QGlyphRun::clear(QGlyphRun* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QGlyphRun::GlyphRunFlags  PythonQtWrapper_QGlyphRun::flags(QGlyphRun* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QVector<unsigned int >  PythonQtWrapper_QGlyphRun::glyphIndexes(QGlyphRun* theWrappedObject) const
{
  return ( theWrappedObject->glyphIndexes());
}

bool  PythonQtWrapper_QGlyphRun::isEmpty(QGlyphRun* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QGlyphRun::isRightToLeft(QGlyphRun* theWrappedObject) const
{
  return ( theWrappedObject->isRightToLeft());
}

bool  PythonQtWrapper_QGlyphRun::__ne__(QGlyphRun* theWrappedObject, const QGlyphRun&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QGlyphRun*  PythonQtWrapper_QGlyphRun::operator_assign(QGlyphRun* theWrappedObject, const QGlyphRun&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QGlyphRun::__eq__(QGlyphRun* theWrappedObject, const QGlyphRun&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QGlyphRun::overline(QGlyphRun* theWrappedObject) const
{
  return ( theWrappedObject->overline());
}

QVector<QPointF >  PythonQtWrapper_QGlyphRun::positions(QGlyphRun* theWrappedObject) const
{
  return ( theWrappedObject->positions());
}

QRawFont  PythonQtWrapper_QGlyphRun::rawFont(QGlyphRun* theWrappedObject) const
{
  return ( theWrappedObject->rawFont());
}

void PythonQtWrapper_QGlyphRun::setBoundingRect(QGlyphRun* theWrappedObject, const QRectF&  boundingRect)
{
  ( theWrappedObject->setBoundingRect(boundingRect));
}

void PythonQtWrapper_QGlyphRun::setFlag(QGlyphRun* theWrappedObject, QGlyphRun::GlyphRunFlag  flag, bool  enabled)
{
  ( theWrappedObject->setFlag(flag, enabled));
}

void PythonQtWrapper_QGlyphRun::setFlags(QGlyphRun* theWrappedObject, QGlyphRun::GlyphRunFlags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QGlyphRun::setGlyphIndexes(QGlyphRun* theWrappedObject, const QVector<unsigned int >&  glyphIndexes)
{
  ( theWrappedObject->setGlyphIndexes(glyphIndexes));
}

void PythonQtWrapper_QGlyphRun::setOverline(QGlyphRun* theWrappedObject, bool  overline)
{
  ( theWrappedObject->setOverline(overline));
}

void PythonQtWrapper_QGlyphRun::setPositions(QGlyphRun* theWrappedObject, const QVector<QPointF >&  positions)
{
  ( theWrappedObject->setPositions(positions));
}

void PythonQtWrapper_QGlyphRun::setRawData(QGlyphRun* theWrappedObject, const unsigned int*  glyphIndexArray, const QPointF*  glyphPositionArray, int  size)
{
  ( theWrappedObject->setRawData(glyphIndexArray, glyphPositionArray, size));
}

void PythonQtWrapper_QGlyphRun::setRawFont(QGlyphRun* theWrappedObject, const QRawFont&  rawFont)
{
  ( theWrappedObject->setRawFont(rawFont));
}

void PythonQtWrapper_QGlyphRun::setRightToLeft(QGlyphRun* theWrappedObject, bool  on)
{
  ( theWrappedObject->setRightToLeft(on));
}

void PythonQtWrapper_QGlyphRun::setStrikeOut(QGlyphRun* theWrappedObject, bool  strikeOut)
{
  ( theWrappedObject->setStrikeOut(strikeOut));
}

void PythonQtWrapper_QGlyphRun::setUnderline(QGlyphRun* theWrappedObject, bool  underline)
{
  ( theWrappedObject->setUnderline(underline));
}

bool  PythonQtWrapper_QGlyphRun::strikeOut(QGlyphRun* theWrappedObject) const
{
  return ( theWrappedObject->strikeOut());
}

void PythonQtWrapper_QGlyphRun::swap(QGlyphRun* theWrappedObject, QGlyphRun&  other)
{
  ( theWrappedObject->swap(other));
}

bool  PythonQtWrapper_QGlyphRun::underline(QGlyphRun* theWrappedObject) const
{
  return ( theWrappedObject->underline());
}



QGradient* PythonQtWrapper_QGradient::new_QGradient()
{ 
return new QGradient(); }

QGradient::CoordinateMode  PythonQtWrapper_QGradient::coordinateMode(QGradient* theWrappedObject) const
{
  return ( theWrappedObject->coordinateMode());
}

bool  PythonQtWrapper_QGradient::__ne__(QGradient* theWrappedObject, const QGradient&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QGradient::__eq__(QGradient* theWrappedObject, const QGradient&  gradient) const
{
  return ( (*theWrappedObject)== gradient);
}

void PythonQtWrapper_QGradient::setColorAt(QGradient* theWrappedObject, qreal  pos, const QColor&  color)
{
  ( theWrappedObject->setColorAt(pos, color));
}

void PythonQtWrapper_QGradient::setCoordinateMode(QGradient* theWrappedObject, QGradient::CoordinateMode  mode)
{
  ( theWrappedObject->setCoordinateMode(mode));
}

void PythonQtWrapper_QGradient::setSpread(QGradient* theWrappedObject, QGradient::Spread  spread)
{
  ( theWrappedObject->setSpread(spread));
}

void PythonQtWrapper_QGradient::setStops(QGradient* theWrappedObject, const QVector<QPair<qreal , QColor >  >&  stops)
{
  ( theWrappedObject->setStops(stops));
}

QGradient::Spread  PythonQtWrapper_QGradient::spread(QGradient* theWrappedObject) const
{
  return ( theWrappedObject->spread());
}

QVector<QPair<qreal , QColor >  >  PythonQtWrapper_QGradient::stops(QGradient* theWrappedObject) const
{
  return ( theWrappedObject->stops());
}

QGradient::Type  PythonQtWrapper_QGradient::type(QGradient* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



void PythonQtWrapper_QGraphicsAnchor::setSizePolicy(QGraphicsAnchor* theWrappedObject, QSizePolicy::Policy  policy)
{
  ( theWrappedObject->setSizePolicy(policy));
}

void PythonQtWrapper_QGraphicsAnchor::setSpacing(QGraphicsAnchor* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

QSizePolicy::Policy  PythonQtWrapper_QGraphicsAnchor::sizePolicy(QGraphicsAnchor* theWrappedObject) const
{
  return ( theWrappedObject->sizePolicy());
}

qreal  PythonQtWrapper_QGraphicsAnchor::spacing(QGraphicsAnchor* theWrappedObject) const
{
  return ( theWrappedObject->spacing());
}

void PythonQtWrapper_QGraphicsAnchor::unsetSpacing(QGraphicsAnchor* theWrappedObject)
{
  ( theWrappedObject->unsetSpacing());
}



PythonQtShell_QGraphicsAnchorLayout::~PythonQtShell_QGraphicsAnchorLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGraphicsAnchorLayout::count() const
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
  return QGraphicsAnchorLayout::count();
}
void PythonQtShell_QGraphicsAnchorLayout::getContentsMargins(qreal*  left0, qreal*  top1, qreal*  right2, qreal*  bottom3) const
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
  QGraphicsAnchorLayout::getContentsMargins(left0, top1, right2, bottom3);
}
void PythonQtShell_QGraphicsAnchorLayout::invalidate()
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
  QGraphicsAnchorLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsAnchorLayout::itemAt(int  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("itemAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QGraphicsLayoutItem*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGraphicsLayoutItem* returnValue;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
          } else {
            returnValue = *((QGraphicsLayoutItem**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsAnchorLayout::itemAt(index0);
}
void PythonQtShell_QGraphicsAnchorLayout::removeAt(int  index0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("removeAt");
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
  QGraphicsAnchorLayout::removeAt(index0);
}
void PythonQtShell_QGraphicsAnchorLayout::setGeometry(const QRectF&  rect0)
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
  QGraphicsAnchorLayout::setGeometry(rect0);
}
QSizeF  PythonQtShell_QGraphicsAnchorLayout::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
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
  return QGraphicsAnchorLayout::sizeHint(which0, constraint1);
}
void PythonQtShell_QGraphicsAnchorLayout::updateGeometry()
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
  QGraphicsAnchorLayout::updateGeometry();
}
void PythonQtShell_QGraphicsAnchorLayout::widgetEvent(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("widgetEvent");
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
}
  QGraphicsAnchorLayout::widgetEvent(e0);
}
QGraphicsAnchorLayout* PythonQtWrapper_QGraphicsAnchorLayout::new_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsAnchorLayout(parent); }

QGraphicsAnchor*  PythonQtWrapper_QGraphicsAnchorLayout::addAnchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge)
{
  return ( theWrappedObject->addAnchor(firstItem, firstEdge, secondItem, secondEdge));
}

void PythonQtWrapper_QGraphicsAnchorLayout::addAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, QGraphicsLayoutItem*  secondItem, Qt::Orientations  orientations)
{
  ( theWrappedObject->addAnchors(firstItem, secondItem, orientations));
}

void PythonQtWrapper_QGraphicsAnchorLayout::addCornerAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::Corner  firstCorner, QGraphicsLayoutItem*  secondItem, Qt::Corner  secondCorner)
{
  ( theWrappedObject->addCornerAnchors(firstItem, firstCorner, secondItem, secondCorner));
}

QGraphicsAnchor*  PythonQtWrapper_QGraphicsAnchorLayout::anchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge)
{
  return ( theWrappedObject->anchor(firstItem, firstEdge, secondItem, secondEdge));
}

qreal  PythonQtWrapper_QGraphicsAnchorLayout::horizontalSpacing(QGraphicsAnchorLayout* theWrappedObject) const
{
  return ( theWrappedObject->horizontalSpacing());
}

void PythonQtWrapper_QGraphicsAnchorLayout::setGeometry(QGraphicsAnchorLayout* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setGeometry(rect));
}

void PythonQtWrapper_QGraphicsAnchorLayout::setHorizontalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setHorizontalSpacing(spacing));
}

void PythonQtWrapper_QGraphicsAnchorLayout::setSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

void PythonQtWrapper_QGraphicsAnchorLayout::setVerticalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setVerticalSpacing(spacing));
}

QSizeF  PythonQtWrapper_QGraphicsAnchorLayout::sizeHint(QGraphicsAnchorLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->promoted_sizeHint(which, constraint));
}

qreal  PythonQtWrapper_QGraphicsAnchorLayout::verticalSpacing(QGraphicsAnchorLayout* theWrappedObject) const
{
  return ( theWrappedObject->verticalSpacing());
}



PythonQtShell_QGraphicsBlurEffect::~PythonQtShell_QGraphicsBlurEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsBlurEffect::boundingRectFor(const QRectF&  rect0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRectFor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF" , "const QRectF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
      void* args[2] = {NULL, (void*)&rect0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
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
  return QGraphicsBlurEffect::boundingRectFor(rect0);
}
void PythonQtShell_QGraphicsBlurEffect::childEvent(QChildEvent*  event0)
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
  QGraphicsBlurEffect::childEvent(event0);
}
void PythonQtShell_QGraphicsBlurEffect::customEvent(QEvent*  event0)
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
  QGraphicsBlurEffect::customEvent(event0);
}
void PythonQtShell_QGraphicsBlurEffect::draw(QPainter*  painter0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("draw");
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
  QGraphicsBlurEffect::draw(painter0);
}
bool  PythonQtShell_QGraphicsBlurEffect::event(QEvent*  event0)
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
  return QGraphicsBlurEffect::event(event0);
}
bool  PythonQtShell_QGraphicsBlurEffect::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsBlurEffect::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsBlurEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sourceChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&flags0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsBlurEffect::sourceChanged(flags0);
}
void PythonQtShell_QGraphicsBlurEffect::timerEvent(QTimerEvent*  event0)
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
  QGraphicsBlurEffect::timerEvent(event0);
}
QGraphicsBlurEffect* PythonQtWrapper_QGraphicsBlurEffect::new_QGraphicsBlurEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsBlurEffect(parent); }

const QMetaObject* PythonQtShell_QGraphicsBlurEffect::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsBlurEffect::staticMetaObject);
  } else {
    return &QGraphicsBlurEffect::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsBlurEffect::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsBlurEffect::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QGraphicsBlurEffect::BlurHints  PythonQtWrapper_QGraphicsBlurEffect::blurHints(QGraphicsBlurEffect* theWrappedObject) const
{
  return ( theWrappedObject->blurHints());
}

qreal  PythonQtWrapper_QGraphicsBlurEffect::blurRadius(QGraphicsBlurEffect* theWrappedObject) const
{
  return ( theWrappedObject->blurRadius());
}



PythonQtShell_QGraphicsColorizeEffect::~PythonQtShell_QGraphicsColorizeEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsColorizeEffect::boundingRectFor(const QRectF&  sourceRect0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRectFor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF" , "const QRectF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
      void* args[2] = {NULL, (void*)&sourceRect0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
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
  return QGraphicsColorizeEffect::boundingRectFor(sourceRect0);
}
void PythonQtShell_QGraphicsColorizeEffect::childEvent(QChildEvent*  event0)
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
  QGraphicsColorizeEffect::childEvent(event0);
}
void PythonQtShell_QGraphicsColorizeEffect::customEvent(QEvent*  event0)
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
  QGraphicsColorizeEffect::customEvent(event0);
}
void PythonQtShell_QGraphicsColorizeEffect::draw(QPainter*  painter0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("draw");
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
  QGraphicsColorizeEffect::draw(painter0);
}
bool  PythonQtShell_QGraphicsColorizeEffect::event(QEvent*  event0)
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
  return QGraphicsColorizeEffect::event(event0);
}
bool  PythonQtShell_QGraphicsColorizeEffect::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsColorizeEffect::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsColorizeEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sourceChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&flags0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsColorizeEffect::sourceChanged(flags0);
}
void PythonQtShell_QGraphicsColorizeEffect::timerEvent(QTimerEvent*  event0)
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
  QGraphicsColorizeEffect::timerEvent(event0);
}
QGraphicsColorizeEffect* PythonQtWrapper_QGraphicsColorizeEffect::new_QGraphicsColorizeEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsColorizeEffect(parent); }

const QMetaObject* PythonQtShell_QGraphicsColorizeEffect::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsColorizeEffect::staticMetaObject);
  } else {
    return &QGraphicsColorizeEffect::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsColorizeEffect::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsColorizeEffect::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QColor  PythonQtWrapper_QGraphicsColorizeEffect::color(QGraphicsColorizeEffect* theWrappedObject) const
{
  return ( theWrappedObject->color());
}

qreal  PythonQtWrapper_QGraphicsColorizeEffect::strength(QGraphicsColorizeEffect* theWrappedObject) const
{
  return ( theWrappedObject->strength());
}



PythonQtShell_QGraphicsDropShadowEffect::~PythonQtShell_QGraphicsDropShadowEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsDropShadowEffect::boundingRectFor(const QRectF&  rect0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRectFor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF" , "const QRectF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
      void* args[2] = {NULL, (void*)&rect0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
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
  return QGraphicsDropShadowEffect::boundingRectFor(rect0);
}
void PythonQtShell_QGraphicsDropShadowEffect::childEvent(QChildEvent*  event0)
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
  QGraphicsDropShadowEffect::childEvent(event0);
}
void PythonQtShell_QGraphicsDropShadowEffect::customEvent(QEvent*  event0)
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
  QGraphicsDropShadowEffect::customEvent(event0);
}
void PythonQtShell_QGraphicsDropShadowEffect::draw(QPainter*  painter0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("draw");
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
  QGraphicsDropShadowEffect::draw(painter0);
}
bool  PythonQtShell_QGraphicsDropShadowEffect::event(QEvent*  event0)
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
  return QGraphicsDropShadowEffect::event(event0);
}
bool  PythonQtShell_QGraphicsDropShadowEffect::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsDropShadowEffect::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsDropShadowEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sourceChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&flags0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsDropShadowEffect::sourceChanged(flags0);
}
void PythonQtShell_QGraphicsDropShadowEffect::timerEvent(QTimerEvent*  event0)
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
  QGraphicsDropShadowEffect::timerEvent(event0);
}
QGraphicsDropShadowEffect* PythonQtWrapper_QGraphicsDropShadowEffect::new_QGraphicsDropShadowEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsDropShadowEffect(parent); }

const QMetaObject* PythonQtShell_QGraphicsDropShadowEffect::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsDropShadowEffect::staticMetaObject);
  } else {
    return &QGraphicsDropShadowEffect::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsDropShadowEffect::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsDropShadowEffect::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
qreal  PythonQtWrapper_QGraphicsDropShadowEffect::blurRadius(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->blurRadius());
}

QColor  PythonQtWrapper_QGraphicsDropShadowEffect::color(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->color());
}

QPointF  PythonQtWrapper_QGraphicsDropShadowEffect::offset(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

qreal  PythonQtWrapper_QGraphicsDropShadowEffect::xOffset(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->xOffset());
}

qreal  PythonQtWrapper_QGraphicsDropShadowEffect::yOffset(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->yOffset());
}



PythonQtShell_QGraphicsEffect::~PythonQtShell_QGraphicsEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsEffect::boundingRectFor(const QRectF&  sourceRect0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRectFor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF" , "const QRectF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
      void* args[2] = {NULL, (void*)&sourceRect0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
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
  return QGraphicsEffect::boundingRectFor(sourceRect0);
}
void PythonQtShell_QGraphicsEffect::childEvent(QChildEvent*  event0)
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
  QGraphicsEffect::childEvent(event0);
}
void PythonQtShell_QGraphicsEffect::customEvent(QEvent*  event0)
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
  QGraphicsEffect::customEvent(event0);
}
void PythonQtShell_QGraphicsEffect::draw(QPainter*  painter0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("draw");
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
  
}
bool  PythonQtShell_QGraphicsEffect::event(QEvent*  event0)
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
  return QGraphicsEffect::event(event0);
}
bool  PythonQtShell_QGraphicsEffect::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsEffect::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sourceChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&flags0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsEffect::sourceChanged(flags0);
}
void PythonQtShell_QGraphicsEffect::timerEvent(QTimerEvent*  event0)
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
  QGraphicsEffect::timerEvent(event0);
}
QGraphicsEffect* PythonQtWrapper_QGraphicsEffect::new_QGraphicsEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsEffect(parent); }

const QMetaObject* PythonQtShell_QGraphicsEffect::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsEffect::staticMetaObject);
  } else {
    return &QGraphicsEffect::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsEffect::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsEffect::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QRectF  PythonQtWrapper_QGraphicsEffect::boundingRect(QGraphicsEffect* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

QRectF  PythonQtWrapper_QGraphicsEffect::boundingRectFor(QGraphicsEffect* theWrappedObject, const QRectF&  sourceRect) const
{
  return ( theWrappedObject->boundingRectFor(sourceRect));
}

void PythonQtWrapper_QGraphicsEffect::draw(QGraphicsEffect* theWrappedObject, QPainter*  painter)
{
  ( ((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->promoted_draw(painter));
}

void PythonQtWrapper_QGraphicsEffect::drawSource(QGraphicsEffect* theWrappedObject, QPainter*  painter)
{
  ( ((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->promoted_drawSource(painter));
}

bool  PythonQtWrapper_QGraphicsEffect::isEnabled(QGraphicsEffect* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

QRectF  PythonQtWrapper_QGraphicsEffect::sourceBoundingRect(QGraphicsEffect* theWrappedObject, Qt::CoordinateSystem  system) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->promoted_sourceBoundingRect(system));
}

void PythonQtWrapper_QGraphicsEffect::sourceChanged(QGraphicsEffect* theWrappedObject, QGraphicsEffect::ChangeFlags  flags)
{
  ( ((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->promoted_sourceChanged(flags));
}

bool  PythonQtWrapper_QGraphicsEffect::sourceIsPixmap(QGraphicsEffect* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->promoted_sourceIsPixmap());
}

QPixmap  PythonQtWrapper_QGraphicsEffect::sourcePixmap(QGraphicsEffect* theWrappedObject, Qt::CoordinateSystem  system, QPoint*  offset, QGraphicsEffect::PixmapPadMode  mode) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->promoted_sourcePixmap(system, offset, mode));
}

void PythonQtWrapper_QGraphicsEffect::updateBoundingRect(QGraphicsEffect* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->promoted_updateBoundingRect());
}



PythonQtShell_QGraphicsEllipseItem::~PythonQtShell_QGraphicsEllipseItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsEllipseItem::boundingRect() const
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
  return QGraphicsEllipseItem::boundingRect();
}
bool  PythonQtShell_QGraphicsEllipseItem::contains(const QPointF&  point0) const
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
  return QGraphicsEllipseItem::contains(point0);
}
QVariant  PythonQtShell_QGraphicsEllipseItem::extension(const QVariant&  variant0) const
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
  return QGraphicsEllipseItem::extension(variant0);
}
bool  PythonQtShell_QGraphicsEllipseItem::isObscuredBy(const QGraphicsItem*  item0) const
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
  return QGraphicsEllipseItem::isObscuredBy(item0);
}
QPainterPath  PythonQtShell_QGraphicsEllipseItem::opaqueArea() const
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
  return QGraphicsEllipseItem::opaqueArea();
}
void PythonQtShell_QGraphicsEllipseItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
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
  QGraphicsEllipseItem::paint(painter0, option1, widget2);
}
void PythonQtShell_QGraphicsEllipseItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
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
  QGraphicsEllipseItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsEllipseItem::shape() const
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
  return QGraphicsEllipseItem::shape();
}
bool  PythonQtShell_QGraphicsEllipseItem::supportsExtension(QGraphicsItem::Extension  extension0) const
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
  return QGraphicsEllipseItem::supportsExtension(extension0);
}
int  PythonQtShell_QGraphicsEllipseItem::type() const
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
  return QGraphicsEllipseItem::type();
}
QGraphicsEllipseItem* PythonQtWrapper_QGraphicsEllipseItem::new_QGraphicsEllipseItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsEllipseItem(parent); }

QGraphicsEllipseItem* PythonQtWrapper_QGraphicsEllipseItem::new_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsEllipseItem(rect, parent); }

QGraphicsEllipseItem* PythonQtWrapper_QGraphicsEllipseItem::new_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsEllipseItem(x, y, w, h, parent); }

QRectF  PythonQtWrapper_QGraphicsEllipseItem::boundingRect(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsEllipseItem::contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QVariant  PythonQtWrapper_QGraphicsEllipseItem::extension(QGraphicsEllipseItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->promoted_extension(variant));
}

void PythonQtWrapper_QGraphicsEllipseItem::paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QRectF  PythonQtWrapper_QGraphicsEllipseItem::rect(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QGraphicsEllipseItem::setExtension(QGraphicsEllipseItem* theWrappedObject, int  extension, const QVariant&  variant)
{
  ( ((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->promoted_setExtension(extension, variant));
}

void PythonQtWrapper_QGraphicsEllipseItem::setRect(QGraphicsEllipseItem* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setRect(rect));
}

void PythonQtWrapper_QGraphicsEllipseItem::setRect(QGraphicsEllipseItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setRect(x, y, w, h));
}

void PythonQtWrapper_QGraphicsEllipseItem::setSpanAngle(QGraphicsEllipseItem* theWrappedObject, int  angle)
{
  ( theWrappedObject->setSpanAngle(angle));
}

void PythonQtWrapper_QGraphicsEllipseItem::setStartAngle(QGraphicsEllipseItem* theWrappedObject, int  angle)
{
  ( theWrappedObject->setStartAngle(angle));
}

QPainterPath  PythonQtWrapper_QGraphicsEllipseItem::shape(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

int  PythonQtWrapper_QGraphicsEllipseItem::spanAngle(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->spanAngle());
}

int  PythonQtWrapper_QGraphicsEllipseItem::startAngle(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->startAngle());
}

bool  PythonQtWrapper_QGraphicsEllipseItem::supportsExtension(QGraphicsEllipseItem* theWrappedObject, int  extension) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->promoted_supportsExtension(extension));
}

int  PythonQtWrapper_QGraphicsEllipseItem::type(QGraphicsEllipseItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QGraphicsGridLayout::~PythonQtShell_QGraphicsGridLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGraphicsGridLayout::count() const
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
  return QGraphicsGridLayout::count();
}
void PythonQtShell_QGraphicsGridLayout::getContentsMargins(qreal*  left0, qreal*  top1, qreal*  right2, qreal*  bottom3) const
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
  QGraphicsGridLayout::getContentsMargins(left0, top1, right2, bottom3);
}
void PythonQtShell_QGraphicsGridLayout::invalidate()
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
  QGraphicsGridLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsGridLayout::itemAt(int  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("itemAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QGraphicsLayoutItem*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGraphicsLayoutItem* returnValue;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
          } else {
            returnValue = *((QGraphicsLayoutItem**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsGridLayout::itemAt(index0);
}
void PythonQtShell_QGraphicsGridLayout::removeAt(int  index0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("removeAt");
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
  QGraphicsGridLayout::removeAt(index0);
}
void PythonQtShell_QGraphicsGridLayout::setGeometry(const QRectF&  rect0)
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
  QGraphicsGridLayout::setGeometry(rect0);
}
QSizeF  PythonQtShell_QGraphicsGridLayout::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
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
  return QGraphicsGridLayout::sizeHint(which0, constraint1);
}
void PythonQtShell_QGraphicsGridLayout::updateGeometry()
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
  QGraphicsGridLayout::updateGeometry();
}
void PythonQtShell_QGraphicsGridLayout::widgetEvent(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("widgetEvent");
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
}
  QGraphicsGridLayout::widgetEvent(e0);
}
QGraphicsGridLayout* PythonQtWrapper_QGraphicsGridLayout::new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsGridLayout(parent); }

void PythonQtWrapper_QGraphicsGridLayout::addItem(QGraphicsGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item, int  row, int  column, Qt::Alignment  alignment)
{
  ( theWrappedObject->addItem(item, row, column, alignment));
}

void PythonQtWrapper_QGraphicsGridLayout::addItem(QGraphicsGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment)
{
  ( theWrappedObject->addItem(item, row, column, rowSpan, columnSpan, alignment));
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
  return ( theWrappedObject->alignment(item));
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnAlignment(column));
}

int  PythonQtWrapper_QGraphicsGridLayout::columnCount(QGraphicsGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->columnCount());
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnMaximumWidth(column));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnMinimumWidth(column));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnPreferredWidth(column));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnSpacing(column));
}

int  PythonQtWrapper_QGraphicsGridLayout::columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const
{
  return ( theWrappedObject->columnStretchFactor(column));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->horizontalSpacing());
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsGridLayout::itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->itemAt(row, column));
}

void PythonQtWrapper_QGraphicsGridLayout::removeItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item)
{
  ( theWrappedObject->removeItem(item));
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowAlignment(row));
}

int  PythonQtWrapper_QGraphicsGridLayout::rowCount(QGraphicsGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->rowCount());
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowMaximumHeight(row));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowMinimumHeight(row));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowPreferredHeight(row));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowSpacing(row));
}

int  PythonQtWrapper_QGraphicsGridLayout::rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const
{
  return ( theWrappedObject->rowStretchFactor(row));
}

void PythonQtWrapper_QGraphicsGridLayout::setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(item, alignment));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment)
{
  ( theWrappedObject->setColumnAlignment(column, alignment));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
  ( theWrappedObject->setColumnFixedWidth(column, width));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
  ( theWrappedObject->setColumnMaximumWidth(column, width));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
  ( theWrappedObject->setColumnMinimumWidth(column, width));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
  ( theWrappedObject->setColumnPreferredWidth(column, width));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing)
{
  ( theWrappedObject->setColumnSpacing(column, spacing));
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch)
{
  ( theWrappedObject->setColumnStretchFactor(column, stretch));
}

void PythonQtWrapper_QGraphicsGridLayout::setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setGeometry(rect));
}

void PythonQtWrapper_QGraphicsGridLayout::setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setHorizontalSpacing(spacing));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment)
{
  ( theWrappedObject->setRowAlignment(row, alignment));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
  ( theWrappedObject->setRowFixedHeight(row, height));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
  ( theWrappedObject->setRowMaximumHeight(row, height));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
  ( theWrappedObject->setRowMinimumHeight(row, height));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
  ( theWrappedObject->setRowPreferredHeight(row, height));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing)
{
  ( theWrappedObject->setRowSpacing(row, spacing));
}

void PythonQtWrapper_QGraphicsGridLayout::setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch)
{
  ( theWrappedObject->setRowStretchFactor(row, stretch));
}

void PythonQtWrapper_QGraphicsGridLayout::setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

void PythonQtWrapper_QGraphicsGridLayout::setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setVerticalSpacing(spacing));
}

QSizeF  PythonQtWrapper_QGraphicsGridLayout::sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( theWrappedObject->sizeHint(which, constraint));
}

qreal  PythonQtWrapper_QGraphicsGridLayout::verticalSpacing(QGraphicsGridLayout* theWrappedObject) const
{
  return ( theWrappedObject->verticalSpacing());
}



PythonQtShell_QGraphicsItem::~PythonQtShell_QGraphicsItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsItem::advance(int  phase0)
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
  QGraphicsItem::advance(phase0);
}
QRectF  PythonQtShell_QGraphicsItem::boundingRect() const
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
  return QRectF();
}
bool  PythonQtShell_QGraphicsItem::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
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
  return QGraphicsItem::collidesWithItem(other0, mode1);
}
bool  PythonQtShell_QGraphicsItem::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
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
  return QGraphicsItem::collidesWithPath(path0, mode1);
}
bool  PythonQtShell_QGraphicsItem::contains(const QPointF&  point0) const
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
  return QGraphicsItem::contains(point0);
}
void PythonQtShell_QGraphicsItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
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
  QGraphicsItem::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsItem::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsItem::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsItem::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsItem::dropEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsItem::dropEvent(event0);
}
QVariant  PythonQtShell_QGraphicsItem::extension(const QVariant&  variant0) const
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
  return QGraphicsItem::extension(variant0);
}
void PythonQtShell_QGraphicsItem::focusInEvent(QFocusEvent*  event0)
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
  QGraphicsItem::focusInEvent(event0);
}
void PythonQtShell_QGraphicsItem::focusOutEvent(QFocusEvent*  event0)
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
  QGraphicsItem::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsItem::hoverEnterEvent(event0);
}
void PythonQtShell_QGraphicsItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsItem::hoverLeaveEvent(event0);
}
void PythonQtShell_QGraphicsItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsItem::hoverMoveEvent(event0);
}
void PythonQtShell_QGraphicsItem::inputMethodEvent(QInputMethodEvent*  event0)
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
  QGraphicsItem::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsItem::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QGraphicsItem::inputMethodQuery(query0);
}
bool  PythonQtShell_QGraphicsItem::isObscuredBy(const QGraphicsItem*  item0) const
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
  return QGraphicsItem::isObscuredBy(item0);
}
QVariant  PythonQtShell_QGraphicsItem::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
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
  return QGraphicsItem::itemChange(change0, value1);
}
void PythonQtShell_QGraphicsItem::keyPressEvent(QKeyEvent*  event0)
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
  QGraphicsItem::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsItem::keyReleaseEvent(QKeyEvent*  event0)
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
  QGraphicsItem::keyReleaseEvent(event0);
}
void PythonQtShell_QGraphicsItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsItem::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsItem::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsItem::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsItem::mouseReleaseEvent(event0);
}
QPainterPath  PythonQtShell_QGraphicsItem::opaqueArea() const
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
  return QGraphicsItem::opaqueArea();
}
void PythonQtShell_QGraphicsItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
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
  
}
bool  PythonQtShell_QGraphicsItem::sceneEvent(QEvent*  event0)
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
  return QGraphicsItem::sceneEvent(event0);
}
bool  PythonQtShell_QGraphicsItem::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
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
  return QGraphicsItem::sceneEventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
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
  QGraphicsItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsItem::shape() const
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
  return QGraphicsItem::shape();
}
bool  PythonQtShell_QGraphicsItem::supportsExtension(QGraphicsItem::Extension  extension0) const
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
  return QGraphicsItem::supportsExtension(extension0);
}
int  PythonQtShell_QGraphicsItem::type() const
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
  return QGraphicsItem::type();
}
void PythonQtShell_QGraphicsItem::wheelEvent(QGraphicsSceneWheelEvent*  event0)
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
  QGraphicsItem::wheelEvent(event0);
}
QGraphicsItem* PythonQtWrapper_QGraphicsItem::new_QGraphicsItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsItem(parent); }

bool  PythonQtWrapper_QGraphicsItem::acceptDrops(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptDrops());
}

bool  PythonQtWrapper_QGraphicsItem::acceptHoverEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptHoverEvents());
}

bool  PythonQtWrapper_QGraphicsItem::acceptTouchEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptTouchEvents());
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsItem::acceptedMouseButtons(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptedMouseButtons());
}

void PythonQtWrapper_QGraphicsItem::addToIndex(QGraphicsItem* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_addToIndex());
}

void PythonQtWrapper_QGraphicsItem::advance(QGraphicsItem* theWrappedObject, int  phase)
{
  ( theWrappedObject->advance(phase));
}

QRectF  PythonQtWrapper_QGraphicsItem::boundingRect(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

QRegion  PythonQtWrapper_QGraphicsItem::boundingRegion(QGraphicsItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const
{
  return ( theWrappedObject->boundingRegion(itemToDeviceTransform));
}

qreal  PythonQtWrapper_QGraphicsItem::boundingRegionGranularity(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRegionGranularity());
}

QGraphicsItem::CacheMode  PythonQtWrapper_QGraphicsItem::cacheMode(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->cacheMode());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsItem::childItems(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->childItems());
}

QRectF  PythonQtWrapper_QGraphicsItem::childrenBoundingRect(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->childrenBoundingRect());
}

void PythonQtWrapper_QGraphicsItem::clearFocus(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->clearFocus());
}

QPainterPath  PythonQtWrapper_QGraphicsItem::clipPath(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->clipPath());
}

bool  PythonQtWrapper_QGraphicsItem::collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->collidesWithItem(other, mode));
}

bool  PythonQtWrapper_QGraphicsItem::collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->collidesWithPath(path, mode));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsItem::collidingItems(QGraphicsItem* theWrappedObject, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->collidingItems(mode));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::commonAncestorItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other) const
{
  return ( theWrappedObject->commonAncestorItem(other));
}

bool  PythonQtWrapper_QGraphicsItem::contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

void PythonQtWrapper_QGraphicsItem::contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_contextMenuEvent(event));
}

QCursor  PythonQtWrapper_QGraphicsItem::cursor(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->cursor());
}

QVariant  PythonQtWrapper_QGraphicsItem::data(QGraphicsItem* theWrappedObject, int  key) const
{
  return ( theWrappedObject->data(key));
}

QTransform  PythonQtWrapper_QGraphicsItem::deviceTransform(QGraphicsItem* theWrappedObject, const QTransform&  viewportTransform) const
{
  return ( theWrappedObject->deviceTransform(viewportTransform));
}

void PythonQtWrapper_QGraphicsItem::dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QGraphicsItem::dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dropEvent(event));
}

qreal  PythonQtWrapper_QGraphicsItem::effectiveOpacity(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->effectiveOpacity());
}

void PythonQtWrapper_QGraphicsItem::ensureVisible(QGraphicsItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(rect, xmargin, ymargin));
}

void PythonQtWrapper_QGraphicsItem::ensureVisible(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin));
}

QVariant  PythonQtWrapper_QGraphicsItem::extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_extension(variant));
}

bool  PythonQtWrapper_QGraphicsItem::filtersChildEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->filtersChildEvents());
}

QGraphicsItem::GraphicsItemFlags  PythonQtWrapper_QGraphicsItem::flags(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

void PythonQtWrapper_QGraphicsItem::focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_focusInEvent(event));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::focusItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->focusItem());
}

void PythonQtWrapper_QGraphicsItem::focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_focusOutEvent(event));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::focusProxy(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->focusProxy());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::focusScopeItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->focusScopeItem());
}

void PythonQtWrapper_QGraphicsItem::grabKeyboard(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->grabKeyboard());
}

void PythonQtWrapper_QGraphicsItem::grabMouse(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->grabMouse());
}

QGraphicsEffect*  PythonQtWrapper_QGraphicsItem::graphicsEffect(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->graphicsEffect());
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsItem::group(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

bool  PythonQtWrapper_QGraphicsItem::handlesChildEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->handlesChildEvents());
}

bool  PythonQtWrapper_QGraphicsItem::hasCursor(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->hasCursor());
}

bool  PythonQtWrapper_QGraphicsItem::hasFocus(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

void PythonQtWrapper_QGraphicsItem::hide(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->hide());
}

void PythonQtWrapper_QGraphicsItem::hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_hoverEnterEvent(event));
}

void PythonQtWrapper_QGraphicsItem::hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_hoverLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_hoverMoveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_inputMethodEvent(event));
}

Qt::InputMethodHints  PythonQtWrapper_QGraphicsItem::inputMethodHints(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->inputMethodHints());
}

QVariant  PythonQtWrapper_QGraphicsItem::inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_inputMethodQuery(query));
}

void PythonQtWrapper_QGraphicsItem::installSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem)
{
  ( theWrappedObject->installSceneEventFilter(filterItem));
}

bool  PythonQtWrapper_QGraphicsItem::isActive(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QGraphicsItem::isAncestorOf(QGraphicsItem* theWrappedObject, const QGraphicsItem*  child) const
{
  return ( theWrappedObject->isAncestorOf(child));
}

bool  PythonQtWrapper_QGraphicsItem::isBlockedByModalPanel(QGraphicsItem* theWrappedObject, QGraphicsItem**  blockingPanel) const
{
  return ( theWrappedObject->isBlockedByModalPanel(blockingPanel));
}

bool  PythonQtWrapper_QGraphicsItem::isClipped(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isClipped());
}

bool  PythonQtWrapper_QGraphicsItem::isEnabled(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

bool  PythonQtWrapper_QGraphicsItem::isObscured(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->isObscured(rect));
}

bool  PythonQtWrapper_QGraphicsItem::isObscured(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->isObscured(x, y, w, h));
}

bool  PythonQtWrapper_QGraphicsItem::isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( theWrappedObject->isObscuredBy(item));
}

bool  PythonQtWrapper_QGraphicsItem::isPanel(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isPanel());
}

bool  PythonQtWrapper_QGraphicsItem::isSelected(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isSelected());
}

bool  PythonQtWrapper_QGraphicsItem::isUnderMouse(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isUnderMouse());
}

bool  PythonQtWrapper_QGraphicsItem::isVisible(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

bool  PythonQtWrapper_QGraphicsItem::isVisibleTo(QGraphicsItem* theWrappedObject, const QGraphicsItem*  parent) const
{
  return ( theWrappedObject->isVisibleTo(parent));
}

bool  PythonQtWrapper_QGraphicsItem::isWidget(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isWidget());
}

bool  PythonQtWrapper_QGraphicsItem::isWindow(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isWindow());
}

QVariant  PythonQtWrapper_QGraphicsItem::itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_itemChange(change, value));
}

QTransform  PythonQtWrapper_QGraphicsItem::itemTransform(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, bool*  ok) const
{
  return ( theWrappedObject->itemTransform(other, ok));
}

void PythonQtWrapper_QGraphicsItem::keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QGraphicsItem::keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromItem(item, path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromItem(item, point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromItem(item, polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromItem(item, rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromItem(item, x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromItem(item, x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromParent(path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromParent(point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromParent(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromParent(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromParent(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromParent(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromScene(path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromScene(point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromScene(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromScene(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromScene(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromScene(x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectFromItem(item, rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectFromItem(item, x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectFromParent(rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectFromParent(x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectFromScene(rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectFromScene(x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectToItem(item, rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectToItem(item, x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectToParent(rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectToParent(x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectToScene(rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectToScene(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToItem(item, path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
  return ( theWrappedObject->mapToItem(item, point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapToItem(item, polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapToItem(item, rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapToItem(item, x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapToItem(item, x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToParent(path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapToParent(point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapToParent(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapToParent(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapToParent(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapToParent(x, y, w, h));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToScene(path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapToScene(point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapToScene(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapToScene(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapToScene(x, y));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapToScene(x, y, w, h));
}

void PythonQtWrapper_QGraphicsItem::mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

void PythonQtWrapper_QGraphicsItem::mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsItem::mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

void PythonQtWrapper_QGraphicsItem::moveBy(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->moveBy(dx, dy));
}

qreal  PythonQtWrapper_QGraphicsItem::opacity(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QPainterPath  PythonQtWrapper_QGraphicsItem::opaqueArea(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->opaqueArea());
}

void PythonQtWrapper_QGraphicsItem::paint(QGraphicsItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::panel(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->panel());
}

QGraphicsItem::PanelModality  PythonQtWrapper_QGraphicsItem::panelModality(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->panelModality());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::parentItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->parentItem());
}

QGraphicsObject*  PythonQtWrapper_QGraphicsItem::parentObject(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->parentObject());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItem::parentWidget(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->parentWidget());
}

QPointF  PythonQtWrapper_QGraphicsItem::pos(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

void PythonQtWrapper_QGraphicsItem::prepareGeometryChange(QGraphicsItem* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_prepareGeometryChange());
}

void PythonQtWrapper_QGraphicsItem::removeFromIndex(QGraphicsItem* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_removeFromIndex());
}

void PythonQtWrapper_QGraphicsItem::removeSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem)
{
  ( theWrappedObject->removeSceneEventFilter(filterItem));
}

void PythonQtWrapper_QGraphicsItem::resetTransform(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->resetTransform());
}

qreal  PythonQtWrapper_QGraphicsItem::rotation(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->rotation());
}

qreal  PythonQtWrapper_QGraphicsItem::scale(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->scale());
}

QGraphicsScene*  PythonQtWrapper_QGraphicsItem::scene(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->scene());
}

QRectF  PythonQtWrapper_QGraphicsItem::sceneBoundingRect(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->sceneBoundingRect());
}

bool  PythonQtWrapper_QGraphicsItem::sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_sceneEvent(event));
}

bool  PythonQtWrapper_QGraphicsItem::sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_sceneEventFilter(watched, event));
}

QPointF  PythonQtWrapper_QGraphicsItem::scenePos(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

QTransform  PythonQtWrapper_QGraphicsItem::sceneTransform(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->sceneTransform());
}

void PythonQtWrapper_QGraphicsItem::scroll(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect)
{
  ( theWrappedObject->scroll(dx, dy, rect));
}

void PythonQtWrapper_QGraphicsItem::setAcceptDrops(QGraphicsItem* theWrappedObject, bool  on)
{
  ( theWrappedObject->setAcceptDrops(on));
}

void PythonQtWrapper_QGraphicsItem::setAcceptHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAcceptHoverEvents(enabled));
}

void PythonQtWrapper_QGraphicsItem::setAcceptTouchEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAcceptTouchEvents(enabled));
}

void PythonQtWrapper_QGraphicsItem::setAcceptedMouseButtons(QGraphicsItem* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setAcceptedMouseButtons(buttons));
}

void PythonQtWrapper_QGraphicsItem::setActive(QGraphicsItem* theWrappedObject, bool  active)
{
  ( theWrappedObject->setActive(active));
}

void PythonQtWrapper_QGraphicsItem::setBoundingRegionGranularity(QGraphicsItem* theWrappedObject, qreal  granularity)
{
  ( theWrappedObject->setBoundingRegionGranularity(granularity));
}

void PythonQtWrapper_QGraphicsItem::setCacheMode(QGraphicsItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize)
{
  ( theWrappedObject->setCacheMode(mode, cacheSize));
}

void PythonQtWrapper_QGraphicsItem::setCursor(QGraphicsItem* theWrappedObject, const QCursor&  cursor)
{
  ( theWrappedObject->setCursor(cursor));
}

void PythonQtWrapper_QGraphicsItem::setData(QGraphicsItem* theWrappedObject, int  key, const QVariant&  value)
{
  ( theWrappedObject->setData(key, value));
}

void PythonQtWrapper_QGraphicsItem::setEnabled(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setEnabled(enabled));
}

void PythonQtWrapper_QGraphicsItem::setExtension(QGraphicsItem* theWrappedObject, int  extension, const QVariant&  variant)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_setExtension(extension, variant));
}

void PythonQtWrapper_QGraphicsItem::setFiltersChildEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setFiltersChildEvents(enabled));
}

void PythonQtWrapper_QGraphicsItem::setFlag(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled)
{
  ( theWrappedObject->setFlag(flag, enabled));
}

void PythonQtWrapper_QGraphicsItem::setFlags(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QGraphicsItem::setFocus(QGraphicsItem* theWrappedObject, Qt::FocusReason  focusReason)
{
  ( theWrappedObject->setFocus(focusReason));
}

void PythonQtWrapper_QGraphicsItem::setFocusProxy(QGraphicsItem* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->setFocusProxy(item));
}

void PythonQtWrapper_QGraphicsItem::setGraphicsEffect(QGraphicsItem* theWrappedObject, QGraphicsEffect*  effect)
{
  ( theWrappedObject->setGraphicsEffect(effect));
}

void PythonQtWrapper_QGraphicsItem::setGroup(QGraphicsItem* theWrappedObject, QGraphicsItemGroup*  group)
{
  ( theWrappedObject->setGroup(group));
}

void PythonQtWrapper_QGraphicsItem::setHandlesChildEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setHandlesChildEvents(enabled));
}

void PythonQtWrapper_QGraphicsItem::setInputMethodHints(QGraphicsItem* theWrappedObject, Qt::InputMethodHints  hints)
{
  ( theWrappedObject->setInputMethodHints(hints));
}

void PythonQtWrapper_QGraphicsItem::setOpacity(QGraphicsItem* theWrappedObject, qreal  opacity)
{
  ( theWrappedObject->setOpacity(opacity));
}

void PythonQtWrapper_QGraphicsItem::setPanelModality(QGraphicsItem* theWrappedObject, QGraphicsItem::PanelModality  panelModality)
{
  ( theWrappedObject->setPanelModality(panelModality));
}

void PythonQtWrapper_QGraphicsItem::setParentItem(QGraphicsItem* theWrappedObject, PythonQtNewOwnerOfThis<QGraphicsItem* >  parent)
{
  ( theWrappedObject->setParentItem(parent));
}

void PythonQtWrapper_QGraphicsItem::setPos(QGraphicsItem* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsItem::setPos(QGraphicsItem* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setPos(x, y));
}

void PythonQtWrapper_QGraphicsItem::setRotation(QGraphicsItem* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->setRotation(angle));
}

void PythonQtWrapper_QGraphicsItem::setScale(QGraphicsItem* theWrappedObject, qreal  scale)
{
  ( theWrappedObject->setScale(scale));
}

void PythonQtWrapper_QGraphicsItem::setSelected(QGraphicsItem* theWrappedObject, bool  selected)
{
  ( theWrappedObject->setSelected(selected));
}

void PythonQtWrapper_QGraphicsItem::setToolTip(QGraphicsItem* theWrappedObject, const QString&  toolTip)
{
  ( theWrappedObject->setToolTip(toolTip));
}

void PythonQtWrapper_QGraphicsItem::setTransform(QGraphicsItem* theWrappedObject, const QTransform&  matrix, bool  combine)
{
  ( theWrappedObject->setTransform(matrix, combine));
}

void PythonQtWrapper_QGraphicsItem::setTransformOriginPoint(QGraphicsItem* theWrappedObject, const QPointF&  origin)
{
  ( theWrappedObject->setTransformOriginPoint(origin));
}

void PythonQtWrapper_QGraphicsItem::setTransformOriginPoint(QGraphicsItem* theWrappedObject, qreal  ax, qreal  ay)
{
  ( theWrappedObject->setTransformOriginPoint(ax, ay));
}

void PythonQtWrapper_QGraphicsItem::setTransformations(QGraphicsItem* theWrappedObject, const QList<QGraphicsTransform* >&  transformations)
{
  ( theWrappedObject->setTransformations(transformations));
}

void PythonQtWrapper_QGraphicsItem::setVisible(QGraphicsItem* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setVisible(visible));
}

void PythonQtWrapper_QGraphicsItem::setX(QGraphicsItem* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QGraphicsItem::setY(QGraphicsItem* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

void PythonQtWrapper_QGraphicsItem::setZValue(QGraphicsItem* theWrappedObject, qreal  z)
{
  ( theWrappedObject->setZValue(z));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::shape(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

void PythonQtWrapper_QGraphicsItem::show(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->show());
}

void PythonQtWrapper_QGraphicsItem::stackBefore(QGraphicsItem* theWrappedObject, const QGraphicsItem*  sibling)
{
  ( theWrappedObject->stackBefore(sibling));
}

bool  PythonQtWrapper_QGraphicsItem::supportsExtension(QGraphicsItem* theWrappedObject, int  extension) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_supportsExtension(extension));
}

QGraphicsObject*  PythonQtWrapper_QGraphicsItem::toGraphicsObject(QGraphicsItem* theWrappedObject)
{
  return ( theWrappedObject->toGraphicsObject());
}

QString  PythonQtWrapper_QGraphicsItem::toolTip(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::topLevelItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->topLevelItem());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItem::topLevelWidget(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->topLevelWidget());
}

QTransform  PythonQtWrapper_QGraphicsItem::transform(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->transform());
}

QPointF  PythonQtWrapper_QGraphicsItem::transformOriginPoint(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->transformOriginPoint());
}

QList<QGraphicsTransform* >  PythonQtWrapper_QGraphicsItem::transformations(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->transformations());
}

int  PythonQtWrapper_QGraphicsItem::type(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QGraphicsItem::ungrabKeyboard(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->ungrabKeyboard());
}

void PythonQtWrapper_QGraphicsItem::ungrabMouse(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->ungrabMouse());
}

void PythonQtWrapper_QGraphicsItem::unsetCursor(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->unsetCursor());
}

void PythonQtWrapper_QGraphicsItem::update(QGraphicsItem* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->update(rect));
}

void PythonQtWrapper_QGraphicsItem::update(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height)
{
  ( theWrappedObject->update(x, y, width, height));
}

void PythonQtWrapper_QGraphicsItem::updateMicroFocus(QGraphicsItem* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_updateMicroFocus());
}

void PythonQtWrapper_QGraphicsItem::wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_wheelEvent(event));
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItem::window(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->window());
}

qreal  PythonQtWrapper_QGraphicsItem::x(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

qreal  PythonQtWrapper_QGraphicsItem::y(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

qreal  PythonQtWrapper_QGraphicsItem::zValue(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->zValue());
}

QString PythonQtWrapper_QGraphicsItem::py_toString(QGraphicsItem* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QGraphicsItemAnimation::~PythonQtShell_QGraphicsItemAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsItemAnimation::afterAnimationStep(qreal  step0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("afterAnimationStep");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&step0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsItemAnimation::afterAnimationStep(step0);
}
void PythonQtShell_QGraphicsItemAnimation::beforeAnimationStep(qreal  step0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("beforeAnimationStep");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&step0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsItemAnimation::beforeAnimationStep(step0);
}
void PythonQtShell_QGraphicsItemAnimation::childEvent(QChildEvent*  event0)
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
  QGraphicsItemAnimation::childEvent(event0);
}
void PythonQtShell_QGraphicsItemAnimation::customEvent(QEvent*  event0)
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
  QGraphicsItemAnimation::customEvent(event0);
}
bool  PythonQtShell_QGraphicsItemAnimation::event(QEvent*  event0)
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
  return QGraphicsItemAnimation::event(event0);
}
bool  PythonQtShell_QGraphicsItemAnimation::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsItemAnimation::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsItemAnimation::timerEvent(QTimerEvent*  event0)
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
  QGraphicsItemAnimation::timerEvent(event0);
}
QGraphicsItemAnimation* PythonQtWrapper_QGraphicsItemAnimation::new_QGraphicsItemAnimation(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsItemAnimation(parent); }

const QMetaObject* PythonQtShell_QGraphicsItemAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsItemAnimation::staticMetaObject);
  } else {
    return &QGraphicsItemAnimation::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsItemAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsItemAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QGraphicsItemAnimation::afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step)
{
  ( ((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->promoted_afterAnimationStep(step));
}

void PythonQtWrapper_QGraphicsItemAnimation::beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step)
{
  ( ((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->promoted_beforeAnimationStep(step));
}

void PythonQtWrapper_QGraphicsItemAnimation::clear(QGraphicsItemAnimation* theWrappedObject)
{
  ( theWrappedObject->clear());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->horizontalScaleAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->horizontalShearAt(step));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItemAnimation::item(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->item());
}

QMatrix  PythonQtWrapper_QGraphicsItemAnimation::matrixAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->matrixAt(step));
}

QPointF  PythonQtWrapper_QGraphicsItemAnimation::posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->posAt(step));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::posList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->posList());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->rotationAt(step));
}

QList<QPair<qreal , qreal >  >  PythonQtWrapper_QGraphicsItemAnimation::rotationList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->rotationList());
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::scaleList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->scaleList());
}

void PythonQtWrapper_QGraphicsItemAnimation::setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->setItem(item));
}

void PythonQtWrapper_QGraphicsItemAnimation::setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos)
{
  ( theWrappedObject->setPosAt(step, pos));
}

void PythonQtWrapper_QGraphicsItemAnimation::setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle)
{
  ( theWrappedObject->setRotationAt(step, angle));
}

void PythonQtWrapper_QGraphicsItemAnimation::setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy)
{
  ( theWrappedObject->setScaleAt(step, sx, sy));
}

void PythonQtWrapper_QGraphicsItemAnimation::setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv)
{
  ( theWrappedObject->setShearAt(step, sh, sv));
}

void PythonQtWrapper_QGraphicsItemAnimation::setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine)
{
  ( theWrappedObject->setTimeLine(timeLine));
}

void PythonQtWrapper_QGraphicsItemAnimation::setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy)
{
  ( theWrappedObject->setTranslationAt(step, dx, dy));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::shearList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->shearList());
}

QTimeLine*  PythonQtWrapper_QGraphicsItemAnimation::timeLine(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->timeLine());
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::translationList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->translationList());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->verticalScaleAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->verticalShearAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->xTranslationAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->yTranslationAt(step));
}



PythonQtShell_QGraphicsItemGroup::~PythonQtShell_QGraphicsItemGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsItemGroup::advance(int  phase0)
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
  QGraphicsItemGroup::advance(phase0);
}
QRectF  PythonQtShell_QGraphicsItemGroup::boundingRect() const
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
  return QGraphicsItemGroup::boundingRect();
}
bool  PythonQtShell_QGraphicsItemGroup::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
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
  return QGraphicsItemGroup::collidesWithItem(other0, mode1);
}
bool  PythonQtShell_QGraphicsItemGroup::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
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
  return QGraphicsItemGroup::collidesWithPath(path0, mode1);
}
bool  PythonQtShell_QGraphicsItemGroup::contains(const QPointF&  point0) const
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
  return QGraphicsItemGroup::contains(point0);
}
void PythonQtShell_QGraphicsItemGroup::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
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
  QGraphicsItemGroup::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsItemGroup::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsItemGroup::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsItemGroup::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::dropEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsItemGroup::dropEvent(event0);
}
QVariant  PythonQtShell_QGraphicsItemGroup::extension(const QVariant&  variant0) const
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
  return QGraphicsItemGroup::extension(variant0);
}
void PythonQtShell_QGraphicsItemGroup::focusInEvent(QFocusEvent*  event0)
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
  QGraphicsItemGroup::focusInEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::focusOutEvent(QFocusEvent*  event0)
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
  QGraphicsItemGroup::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsItemGroup::hoverEnterEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsItemGroup::hoverLeaveEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsItemGroup::hoverMoveEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::inputMethodEvent(QInputMethodEvent*  event0)
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
  QGraphicsItemGroup::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsItemGroup::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QGraphicsItemGroup::inputMethodQuery(query0);
}
bool  PythonQtShell_QGraphicsItemGroup::isObscuredBy(const QGraphicsItem*  item0) const
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
  return QGraphicsItemGroup::isObscuredBy(item0);
}
QVariant  PythonQtShell_QGraphicsItemGroup::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
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
  return QGraphicsItemGroup::itemChange(change0, value1);
}
void PythonQtShell_QGraphicsItemGroup::keyPressEvent(QKeyEvent*  event0)
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
  QGraphicsItemGroup::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::keyReleaseEvent(QKeyEvent*  event0)
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
  QGraphicsItemGroup::keyReleaseEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsItemGroup::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsItemGroup::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsItemGroup::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsItemGroup::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsItemGroup::mouseReleaseEvent(event0);
}
QPainterPath  PythonQtShell_QGraphicsItemGroup::opaqueArea() const
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
  return QGraphicsItemGroup::opaqueArea();
}
void PythonQtShell_QGraphicsItemGroup::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
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
  QGraphicsItemGroup::paint(painter0, option1, widget2);
}
bool  PythonQtShell_QGraphicsItemGroup::sceneEvent(QEvent*  event0)
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
  return QGraphicsItemGroup::sceneEvent(event0);
}
bool  PythonQtShell_QGraphicsItemGroup::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
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
  return QGraphicsItemGroup::sceneEventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsItemGroup::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
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
  QGraphicsItemGroup::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsItemGroup::shape() const
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
  return QGraphicsItemGroup::shape();
}
bool  PythonQtShell_QGraphicsItemGroup::supportsExtension(QGraphicsItem::Extension  extension0) const
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
  return QGraphicsItemGroup::supportsExtension(extension0);
}
int  PythonQtShell_QGraphicsItemGroup::type() const
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
  return QGraphicsItemGroup::type();
}
void PythonQtShell_QGraphicsItemGroup::wheelEvent(QGraphicsSceneWheelEvent*  event0)
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
  QGraphicsItemGroup::wheelEvent(event0);
}
QGraphicsItemGroup* PythonQtWrapper_QGraphicsItemGroup::new_QGraphicsItemGroup(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsItemGroup(parent); }

void PythonQtWrapper_QGraphicsItemGroup::addToGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->addToGroup(item));
}

void PythonQtWrapper_QGraphicsItemGroup::removeFromGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->removeFromGroup(item));
}



PythonQtShell_QGraphicsLayout::~PythonQtShell_QGraphicsLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGraphicsLayout::count() const
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
  return int();
}
void PythonQtShell_QGraphicsLayout::getContentsMargins(qreal*  left0, qreal*  top1, qreal*  right2, qreal*  bottom3) const
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
  QGraphicsLayout::getContentsMargins(left0, top1, right2, bottom3);
}
void PythonQtShell_QGraphicsLayout::invalidate()
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
  QGraphicsLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsLayout::itemAt(int  i0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("itemAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QGraphicsLayoutItem*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGraphicsLayoutItem* returnValue;
      void* args[2] = {NULL, (void*)&i0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
          } else {
            returnValue = *((QGraphicsLayoutItem**)args[0]);
          }
        }
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
void PythonQtShell_QGraphicsLayout::removeAt(int  index0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("removeAt");
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
void PythonQtShell_QGraphicsLayout::setGeometry(const QRectF&  rect0)
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
  QGraphicsLayout::setGeometry(rect0);
}
QSizeF  PythonQtShell_QGraphicsLayout::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
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
  return QSizeF();
}
void PythonQtShell_QGraphicsLayout::updateGeometry()
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
  QGraphicsLayout::updateGeometry();
}
void PythonQtShell_QGraphicsLayout::widgetEvent(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("widgetEvent");
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
}
  QGraphicsLayout::widgetEvent(e0);
}
QGraphicsLayout* PythonQtWrapper_QGraphicsLayout::new_QGraphicsLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsLayout(parent); }

void PythonQtWrapper_QGraphicsLayout::activate(QGraphicsLayout* theWrappedObject)
{
  ( theWrappedObject->activate());
}

void PythonQtWrapper_QGraphicsLayout::addChildLayoutItem(QGraphicsLayout* theWrappedObject, QGraphicsLayoutItem*  layoutItem)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->promoted_addChildLayoutItem(layoutItem));
}

int  PythonQtWrapper_QGraphicsLayout::count(QGraphicsLayout* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QGraphicsLayout::static_QGraphicsLayout_instantInvalidatePropagation()
{
  return (QGraphicsLayout::instantInvalidatePropagation());
}

void PythonQtWrapper_QGraphicsLayout::invalidate(QGraphicsLayout* theWrappedObject)
{
  ( theWrappedObject->invalidate());
}

bool  PythonQtWrapper_QGraphicsLayout::isActivated(QGraphicsLayout* theWrappedObject) const
{
  return ( theWrappedObject->isActivated());
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsLayout::itemAt(QGraphicsLayout* theWrappedObject, int  i) const
{
  return ( theWrappedObject->itemAt(i));
}

void PythonQtWrapper_QGraphicsLayout::removeAt(QGraphicsLayout* theWrappedObject, int  index)
{
  ( theWrappedObject->removeAt(index));
}

void PythonQtWrapper_QGraphicsLayout::setContentsMargins(QGraphicsLayout* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
  ( theWrappedObject->setContentsMargins(left, top, right, bottom));
}

void PythonQtWrapper_QGraphicsLayout::static_QGraphicsLayout_setInstantInvalidatePropagation(bool  enable)
{
  (QGraphicsLayout::setInstantInvalidatePropagation(enable));
}

void PythonQtWrapper_QGraphicsLayout::widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e)
{
  ( theWrappedObject->widgetEvent(e));
}



PythonQtShell_QGraphicsLayoutItem::~PythonQtShell_QGraphicsLayoutItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsLayoutItem::getContentsMargins(qreal*  left0, qreal*  top1, qreal*  right2, qreal*  bottom3) const
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
  QGraphicsLayoutItem::getContentsMargins(left0, top1, right2, bottom3);
}
void PythonQtShell_QGraphicsLayoutItem::setGeometry(const QRectF&  rect0)
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
  QGraphicsLayoutItem::setGeometry(rect0);
}
QSizeF  PythonQtShell_QGraphicsLayoutItem::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
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
  return QSizeF();
}
void PythonQtShell_QGraphicsLayoutItem::updateGeometry()
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
  QGraphicsLayoutItem::updateGeometry();
}
QGraphicsLayoutItem* PythonQtWrapper_QGraphicsLayoutItem::new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent, bool  isLayout)
{ 
return new PythonQtShell_QGraphicsLayoutItem(parent, isLayout); }

QRectF  PythonQtWrapper_QGraphicsLayoutItem::contentsRect(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->contentsRect());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( theWrappedObject->effectiveSizeHint(which, constraint));
}

QRectF  PythonQtWrapper_QGraphicsLayoutItem::geometry(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->geometry());
}

void PythonQtWrapper_QGraphicsLayoutItem::getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
  ( theWrappedObject->getContentsMargins(left, top, right, bottom));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsLayoutItem::graphicsItem(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->graphicsItem());
}

bool  PythonQtWrapper_QGraphicsLayoutItem::isLayout(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->isLayout());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::maximumHeight(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->maximumHeight());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::maximumSize(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->maximumSize());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::maximumWidth(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->maximumWidth());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::minimumHeight(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->minimumHeight());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::minimumSize(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->minimumSize());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::minimumWidth(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->minimumWidth());
}

bool  PythonQtWrapper_QGraphicsLayoutItem::ownedByLayout(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->ownedByLayout());
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsLayoutItem::parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->parentLayoutItem());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::preferredHeight(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->preferredHeight());
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::preferredSize(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->preferredSize());
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::preferredWidth(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->preferredWidth());
}

void PythonQtWrapper_QGraphicsLayoutItem::setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setGeometry(rect));
}

void PythonQtWrapper_QGraphicsLayoutItem::setGraphicsItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsItem*  item)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->promoted_setGraphicsItem(item));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setMaximumHeight(height));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setMaximumSize(size));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->setMaximumSize(w, h));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setMaximumWidth(width));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setMinimumHeight(height));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setMinimumSize(size));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->setMinimumSize(w, h));
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setMinimumWidth(width));
}

void PythonQtWrapper_QGraphicsLayoutItem::setOwnedByLayout(QGraphicsLayoutItem* theWrappedObject, bool  ownedByLayout)
{
  ( ((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->promoted_setOwnedByLayout(ownedByLayout));
}

void PythonQtWrapper_QGraphicsLayoutItem::setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent)
{
  ( theWrappedObject->setParentLayoutItem(parent));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setPreferredHeight(height));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setPreferredSize(size));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
  ( theWrappedObject->setPreferredSize(w, h));
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setPreferredWidth(width));
}

void PythonQtWrapper_QGraphicsLayoutItem::setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType)
{
  ( theWrappedObject->setSizePolicy(hPolicy, vPolicy, controlType));
}

void PythonQtWrapper_QGraphicsLayoutItem::setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy)
{
  ( theWrappedObject->setSizePolicy(policy));
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::sizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->promoted_sizeHint(which, constraint));
}

QSizePolicy  PythonQtWrapper_QGraphicsLayoutItem::sizePolicy(QGraphicsLayoutItem* theWrappedObject) const
{
  return ( theWrappedObject->sizePolicy());
}

void PythonQtWrapper_QGraphicsLayoutItem::updateGeometry(QGraphicsLayoutItem* theWrappedObject)
{
  ( theWrappedObject->updateGeometry());
}



PythonQtShell_QGraphicsLineItem::~PythonQtShell_QGraphicsLineItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsLineItem::advance(int  phase0)
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
  QGraphicsLineItem::advance(phase0);
}
QRectF  PythonQtShell_QGraphicsLineItem::boundingRect() const
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
  return QGraphicsLineItem::boundingRect();
}
bool  PythonQtShell_QGraphicsLineItem::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
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
  return QGraphicsLineItem::collidesWithItem(other0, mode1);
}
bool  PythonQtShell_QGraphicsLineItem::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
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
  return QGraphicsLineItem::collidesWithPath(path0, mode1);
}
bool  PythonQtShell_QGraphicsLineItem::contains(const QPointF&  point0) const
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
  return QGraphicsLineItem::contains(point0);
}
void PythonQtShell_QGraphicsLineItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
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
  QGraphicsLineItem::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsLineItem::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsLineItem::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsLineItem::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::dropEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsLineItem::dropEvent(event0);
}
QVariant  PythonQtShell_QGraphicsLineItem::extension(const QVariant&  variant0) const
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
  return QGraphicsLineItem::extension(variant0);
}
void PythonQtShell_QGraphicsLineItem::focusInEvent(QFocusEvent*  event0)
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
  QGraphicsLineItem::focusInEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::focusOutEvent(QFocusEvent*  event0)
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
  QGraphicsLineItem::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsLineItem::hoverEnterEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsLineItem::hoverLeaveEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsLineItem::hoverMoveEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::inputMethodEvent(QInputMethodEvent*  event0)
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
  QGraphicsLineItem::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsLineItem::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QGraphicsLineItem::inputMethodQuery(query0);
}
bool  PythonQtShell_QGraphicsLineItem::isObscuredBy(const QGraphicsItem*  item0) const
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
  return QGraphicsLineItem::isObscuredBy(item0);
}
QVariant  PythonQtShell_QGraphicsLineItem::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
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
  return QGraphicsLineItem::itemChange(change0, value1);
}
void PythonQtShell_QGraphicsLineItem::keyPressEvent(QKeyEvent*  event0)
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
  QGraphicsLineItem::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::keyReleaseEvent(QKeyEvent*  event0)
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
  QGraphicsLineItem::keyReleaseEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsLineItem::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsLineItem::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsLineItem::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsLineItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsLineItem::mouseReleaseEvent(event0);
}
QPainterPath  PythonQtShell_QGraphicsLineItem::opaqueArea() const
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
  return QGraphicsLineItem::opaqueArea();
}
void PythonQtShell_QGraphicsLineItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
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
  QGraphicsLineItem::paint(painter0, option1, widget2);
}
bool  PythonQtShell_QGraphicsLineItem::sceneEvent(QEvent*  event0)
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
  return QGraphicsLineItem::sceneEvent(event0);
}
bool  PythonQtShell_QGraphicsLineItem::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
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
  return QGraphicsLineItem::sceneEventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsLineItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
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
  QGraphicsLineItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsLineItem::shape() const
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
  return QGraphicsLineItem::shape();
}
bool  PythonQtShell_QGraphicsLineItem::supportsExtension(QGraphicsItem::Extension  extension0) const
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
  return QGraphicsLineItem::supportsExtension(extension0);
}
int  PythonQtShell_QGraphicsLineItem::type() const
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
  return QGraphicsLineItem::type();
}
void PythonQtShell_QGraphicsLineItem::wheelEvent(QGraphicsSceneWheelEvent*  event0)
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
  QGraphicsLineItem::wheelEvent(event0);
}
QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsLineItem(parent); }

QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsLineItem(line, parent); }

QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsLineItem(x1, y1, x2, y2, parent); }

QLineF  PythonQtWrapper_QGraphicsLineItem::line(QGraphicsLineItem* theWrappedObject) const
{
  return ( theWrappedObject->line());
}

QPen  PythonQtWrapper_QGraphicsLineItem::pen(QGraphicsLineItem* theWrappedObject) const
{
  return ( theWrappedObject->pen());
}

void PythonQtWrapper_QGraphicsLineItem::setLine(QGraphicsLineItem* theWrappedObject, const QLineF&  line)
{
  ( theWrappedObject->setLine(line));
}

void PythonQtWrapper_QGraphicsLineItem::setLine(QGraphicsLineItem* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->setLine(x1, y1, x2, y2));
}

void PythonQtWrapper_QGraphicsLineItem::setPen(QGraphicsLineItem* theWrappedObject, const QPen&  pen)
{
  ( theWrappedObject->setPen(pen));
}



PythonQtShell_QGraphicsLinearLayout::~PythonQtShell_QGraphicsLinearLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QGraphicsLinearLayout::count() const
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
  return QGraphicsLinearLayout::count();
}
void PythonQtShell_QGraphicsLinearLayout::getContentsMargins(qreal*  left0, qreal*  top1, qreal*  right2, qreal*  bottom3) const
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
  QGraphicsLinearLayout::getContentsMargins(left0, top1, right2, bottom3);
}
void PythonQtShell_QGraphicsLinearLayout::invalidate()
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
  QGraphicsLinearLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsLinearLayout::itemAt(int  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("itemAt");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QGraphicsLayoutItem*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGraphicsLayoutItem* returnValue;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
          } else {
            returnValue = *((QGraphicsLayoutItem**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsLinearLayout::itemAt(index0);
}
void PythonQtShell_QGraphicsLinearLayout::removeAt(int  index0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("removeAt");
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
  QGraphicsLinearLayout::removeAt(index0);
}
void PythonQtShell_QGraphicsLinearLayout::setGeometry(const QRectF&  rect0)
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
  QGraphicsLinearLayout::setGeometry(rect0);
}
QSizeF  PythonQtShell_QGraphicsLinearLayout::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
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
  return QGraphicsLinearLayout::sizeHint(which0, constraint1);
}
void PythonQtShell_QGraphicsLinearLayout::updateGeometry()
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
  QGraphicsLinearLayout::updateGeometry();
}
void PythonQtShell_QGraphicsLinearLayout::widgetEvent(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("widgetEvent");
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
}
  QGraphicsLinearLayout::widgetEvent(e0);
}
QGraphicsLinearLayout* PythonQtWrapper_QGraphicsLinearLayout::new_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsLinearLayout(parent); }

QGraphicsLinearLayout* PythonQtWrapper_QGraphicsLinearLayout::new_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsLinearLayout(orientation, parent); }

void PythonQtWrapper_QGraphicsLinearLayout::addItem(QGraphicsLinearLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item)
{
  ( theWrappedObject->addItem(item));
}

void PythonQtWrapper_QGraphicsLinearLayout::addStretch(QGraphicsLinearLayout* theWrappedObject, int  stretch)
{
  ( theWrappedObject->addStretch(stretch));
}

Qt::Alignment  PythonQtWrapper_QGraphicsLinearLayout::alignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
  return ( theWrappedObject->alignment(item));
}

void PythonQtWrapper_QGraphicsLinearLayout::dump(QGraphicsLinearLayout* theWrappedObject, int  indent) const
{
  ( theWrappedObject->dump(indent));
}

void PythonQtWrapper_QGraphicsLinearLayout::insertItem(QGraphicsLinearLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item)
{
  ( theWrappedObject->insertItem(index, item));
}

void PythonQtWrapper_QGraphicsLinearLayout::insertStretch(QGraphicsLinearLayout* theWrappedObject, int  index, int  stretch)
{
  ( theWrappedObject->insertStretch(index, stretch));
}

qreal  PythonQtWrapper_QGraphicsLinearLayout::itemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index) const
{
  return ( theWrappedObject->itemSpacing(index));
}

Qt::Orientation  PythonQtWrapper_QGraphicsLinearLayout::orientation(QGraphicsLinearLayout* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

void PythonQtWrapper_QGraphicsLinearLayout::removeItem(QGraphicsLinearLayout* theWrappedObject, PythonQtPassOwnershipToPython<QGraphicsLayoutItem* >  item)
{
  ( theWrappedObject->removeItem(item));
}

void PythonQtWrapper_QGraphicsLinearLayout::setAlignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(item, alignment));
}

void PythonQtWrapper_QGraphicsLinearLayout::setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setGeometry(rect));
}

void PythonQtWrapper_QGraphicsLinearLayout::setItemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index, qreal  spacing)
{
  ( theWrappedObject->setItemSpacing(index, spacing));
}

void PythonQtWrapper_QGraphicsLinearLayout::setOrientation(QGraphicsLinearLayout* theWrappedObject, Qt::Orientation  orientation)
{
  ( theWrappedObject->setOrientation(orientation));
}

void PythonQtWrapper_QGraphicsLinearLayout::setSpacing(QGraphicsLinearLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

void PythonQtWrapper_QGraphicsLinearLayout::setStretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  stretch)
{
  ( theWrappedObject->setStretchFactor(item, stretch));
}

QSizeF  PythonQtWrapper_QGraphicsLinearLayout::sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
  return ( theWrappedObject->sizeHint(which, constraint));
}

qreal  PythonQtWrapper_QGraphicsLinearLayout::spacing(QGraphicsLinearLayout* theWrappedObject) const
{
  return ( theWrappedObject->spacing());
}

int  PythonQtWrapper_QGraphicsLinearLayout::stretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
  return ( theWrappedObject->stretchFactor(item));
}



PythonQtShell_QGraphicsObject::~PythonQtShell_QGraphicsObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsObject::advance(int  phase0)
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
  QGraphicsObject::advance(phase0);
}
QRectF  PythonQtShell_QGraphicsObject::boundingRect() const
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
  return QRectF();
}
void PythonQtShell_QGraphicsObject::childEvent(QChildEvent*  event0)
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
  QGraphicsObject::childEvent(event0);
}
bool  PythonQtShell_QGraphicsObject::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
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
  return QGraphicsObject::collidesWithItem(other0, mode1);
}
bool  PythonQtShell_QGraphicsObject::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
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
  return QGraphicsObject::collidesWithPath(path0, mode1);
}
bool  PythonQtShell_QGraphicsObject::contains(const QPointF&  point0) const
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
  return QGraphicsObject::contains(point0);
}
void PythonQtShell_QGraphicsObject::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
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
  QGraphicsObject::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsObject::customEvent(QEvent*  event0)
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
  QGraphicsObject::customEvent(event0);
}
void PythonQtShell_QGraphicsObject::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsObject::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsObject::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsObject::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsObject::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsObject::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsObject::dropEvent(QGraphicsSceneDragDropEvent*  event0)
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
  QGraphicsObject::dropEvent(event0);
}
bool  PythonQtShell_QGraphicsObject::event(QEvent*  ev0)
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
  return QGraphicsObject::event(ev0);
}
bool  PythonQtShell_QGraphicsObject::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsObject::eventFilter(watched0, event1);
}
QVariant  PythonQtShell_QGraphicsObject::extension(const QVariant&  variant0) const
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
  return QGraphicsObject::extension(variant0);
}
void PythonQtShell_QGraphicsObject::focusInEvent(QFocusEvent*  event0)
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
  QGraphicsObject::focusInEvent(event0);
}
void PythonQtShell_QGraphicsObject::focusOutEvent(QFocusEvent*  event0)
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
  QGraphicsObject::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsObject::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsObject::hoverEnterEvent(event0);
}
void PythonQtShell_QGraphicsObject::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsObject::hoverLeaveEvent(event0);
}
void PythonQtShell_QGraphicsObject::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
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
  QGraphicsObject::hoverMoveEvent(event0);
}
void PythonQtShell_QGraphicsObject::inputMethodEvent(QInputMethodEvent*  event0)
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
  QGraphicsObject::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsObject::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QGraphicsObject::inputMethodQuery(query0);
}
bool  PythonQtShell_QGraphicsObject::isObscuredBy(const QGraphicsItem*  item0) const
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
  return QGraphicsObject::isObscuredBy(item0);
}
QVariant  PythonQtShell_QGraphicsObject::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
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
  return QGraphicsObject::itemChange(change0, value1);
}
void PythonQtShell_QGraphicsObject::keyPressEvent(QKeyEvent*  event0)
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
  QGraphicsObject::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsObject::keyReleaseEvent(QKeyEvent*  event0)
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
  QGraphicsObject::keyReleaseEvent(event0);
}
void PythonQtShell_QGraphicsObject::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsObject::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsObject::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsObject::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsObject::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsObject::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsObject::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
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
  QGraphicsObject::mouseReleaseEvent(event0);
}
QPainterPath  PythonQtShell_QGraphicsObject::opaqueArea() const
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
  return QGraphicsObject::opaqueArea();
}
void PythonQtShell_QGraphicsObject::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
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
  
}
bool  PythonQtShell_QGraphicsObject::sceneEvent(QEvent*  event0)
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
  return QGraphicsObject::sceneEvent(event0);
}
bool  PythonQtShell_QGraphicsObject::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
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
  return QGraphicsObject::sceneEventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsObject::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
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
  QGraphicsObject::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsObject::shape() const
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
  return QGraphicsObject::shape();
}
bool  PythonQtShell_QGraphicsObject::supportsExtension(QGraphicsItem::Extension  extension0) const
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
  return QGraphicsObject::supportsExtension(extension0);
}
void PythonQtShell_QGraphicsObject::timerEvent(QTimerEvent*  event0)
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
  QGraphicsObject::timerEvent(event0);
}
int  PythonQtShell_QGraphicsObject::type() const
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
  return QGraphicsObject::type();
}
void PythonQtShell_QGraphicsObject::wheelEvent(QGraphicsSceneWheelEvent*  event0)
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
  QGraphicsObject::wheelEvent(event0);
}
QGraphicsObject* PythonQtWrapper_QGraphicsObject::new_QGraphicsObject(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsObject(parent); }

const QMetaObject* PythonQtShell_QGraphicsObject::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsObject::staticMetaObject);
  } else {
    return &QGraphicsObject::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsObject::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsObject::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QGraphicsObject::grabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags)
{
  ( theWrappedObject->grabGesture(type, flags));
}

void PythonQtWrapper_QGraphicsObject::ungrabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type)
{
  ( theWrappedObject->ungrabGesture(type));
}

QString PythonQtWrapper_QGraphicsObject::py_toString(QGraphicsObject* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QGraphicsOpacityEffect::~PythonQtShell_QGraphicsOpacityEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsOpacityEffect::boundingRectFor(const QRectF&  sourceRect0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRectFor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF" , "const QRectF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
      void* args[2] = {NULL, (void*)&sourceRect0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
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
  return QGraphicsOpacityEffect::boundingRectFor(sourceRect0);
}
void PythonQtShell_QGraphicsOpacityEffect::childEvent(QChildEvent*  event0)
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
  QGraphicsOpacityEffect::childEvent(event0);
}
void PythonQtShell_QGraphicsOpacityEffect::customEvent(QEvent*  event0)
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
  QGraphicsOpacityEffect::customEvent(event0);
}
void PythonQtShell_QGraphicsOpacityEffect::draw(QPainter*  painter0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("draw");
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
  QGraphicsOpacityEffect::draw(painter0);
}
bool  PythonQtShell_QGraphicsOpacityEffect::event(QEvent*  event0)
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
  return QGraphicsOpacityEffect::event(event0);
}
bool  PythonQtShell_QGraphicsOpacityEffect::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QGraphicsOpacityEffect::eventFilter(watched0, event1);
}
void PythonQtShell_QGraphicsOpacityEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sourceChanged");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&flags0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsOpacityEffect::sourceChanged(flags0);
}
void PythonQtShell_QGraphicsOpacityEffect::timerEvent(QTimerEvent*  event0)
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
  QGraphicsOpacityEffect::timerEvent(event0);
}
QGraphicsOpacityEffect* PythonQtWrapper_QGraphicsOpacityEffect::new_QGraphicsOpacityEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsOpacityEffect(parent); }

const QMetaObject* PythonQtShell_QGraphicsOpacityEffect::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsOpacityEffect::staticMetaObject);
  } else {
    return &QGraphicsOpacityEffect::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsOpacityEffect::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsOpacityEffect::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
qreal  PythonQtWrapper_QGraphicsOpacityEffect::opacity(QGraphicsOpacityEffect* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QBrush  PythonQtWrapper_QGraphicsOpacityEffect::opacityMask(QGraphicsOpacityEffect* theWrappedObject) const
{
  return ( theWrappedObject->opacityMask());
}



PythonQtShell_QGraphicsPathItem::~PythonQtShell_QGraphicsPathItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsPathItem::boundingRect() const
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
  return QGraphicsPathItem::boundingRect();
}
bool  PythonQtShell_QGraphicsPathItem::contains(const QPointF&  point0) const
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
  return QGraphicsPathItem::contains(point0);
}
QVariant  PythonQtShell_QGraphicsPathItem::extension(const QVariant&  variant0) const
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
  return QGraphicsPathItem::extension(variant0);
}
bool  PythonQtShell_QGraphicsPathItem::isObscuredBy(const QGraphicsItem*  item0) const
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
  return QGraphicsPathItem::isObscuredBy(item0);
}
QPainterPath  PythonQtShell_QGraphicsPathItem::opaqueArea() const
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
  return QGraphicsPathItem::opaqueArea();
}
void PythonQtShell_QGraphicsPathItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
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
  QGraphicsPathItem::paint(painter0, option1, widget2);
}
void PythonQtShell_QGraphicsPathItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
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
  QGraphicsPathItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsPathItem::shape() const
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
  return QGraphicsPathItem::shape();
}
bool  PythonQtShell_QGraphicsPathItem::supportsExtension(QGraphicsItem::Extension  extension0) const
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
  return QGraphicsPathItem::supportsExtension(extension0);
}
int  PythonQtShell_QGraphicsPathItem::type() const
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
  return QGraphicsPathItem::type();
}
QGraphicsPathItem* PythonQtWrapper_QGraphicsPathItem::new_QGraphicsPathItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPathItem(parent); }

QGraphicsPathItem* PythonQtWrapper_QGraphicsPathItem::new_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsPathItem(path, parent); }

QRectF  PythonQtWrapper_QGraphicsPathItem::boundingRect(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsPathItem::contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QVariant  PythonQtWrapper_QGraphicsPathItem::extension(QGraphicsPathItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->promoted_extension(variant));
}

void PythonQtWrapper_QGraphicsPathItem::paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::path(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

void PythonQtWrapper_QGraphicsPathItem::setExtension(QGraphicsPathItem* theWrappedObject, int  extension, const QVariant&  variant)
{
  ( ((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->promoted_setExtension(extension, variant));
}

void PythonQtWrapper_QGraphicsPathItem::setPath(QGraphicsPathItem* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->setPath(path));
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::shape(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

bool  PythonQtWrapper_QGraphicsPathItem::supportsExtension(QGraphicsPathItem* theWrappedObject, int  extension) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->promoted_supportsExtension(extension));
}

int  PythonQtWrapper_QGraphicsPathItem::type(QGraphicsPathItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}


