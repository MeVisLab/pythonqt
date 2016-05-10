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
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstracttextdocumentlayout.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
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
#include <qtablewidget.h>
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
#include <qurl.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>

PythonQtShell_QTableWidget::~PythonQtShell_QTableWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTableWidget::actionEvent(QActionEvent*  arg__1)
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
  QTableWidget::actionEvent(arg__1);
}
void PythonQtShell_QTableWidget::changeEvent(QEvent*  arg__1)
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
  QTableWidget::changeEvent(arg__1);
}
void PythonQtShell_QTableWidget::childEvent(QChildEvent*  arg__1)
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
  QTableWidget::childEvent(arg__1);
}
void PythonQtShell_QTableWidget::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::closeEditor(editor0, hint1);
}
void PythonQtShell_QTableWidget::closeEvent(QCloseEvent*  arg__1)
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
  QTableWidget::closeEvent(arg__1);
}
void PythonQtShell_QTableWidget::commitData(QWidget*  editor0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::commitData(editor0);
}
void PythonQtShell_QTableWidget::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QTableWidget::contextMenuEvent(arg__1);
}
void PythonQtShell_QTableWidget::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::currentChanged(current0, previous1);
}
void PythonQtShell_QTableWidget::customEvent(QEvent*  arg__1)
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
  QTableWidget::customEvent(arg__1);
}
void PythonQtShell_QTableWidget::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, const QVector<int >&  roles2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::dataChanged(topLeft0, bottomRight1, roles2);
}
int  PythonQtShell_QTableWidget::devType() const
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
  return QTableWidget::devType();
}
void PythonQtShell_QTableWidget::doItemsLayout()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::doItemsLayout();
}
void PythonQtShell_QTableWidget::dragEnterEvent(QDragEnterEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::dragEnterEvent(event0);
}
void PythonQtShell_QTableWidget::dragLeaveEvent(QDragLeaveEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::dragLeaveEvent(event0);
}
void PythonQtShell_QTableWidget::dragMoveEvent(QDragMoveEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::dragMoveEvent(event0);
}
void PythonQtShell_QTableWidget::dropEvent(QDropEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::dropEvent(event0);
}
bool  PythonQtShell_QTableWidget::dropMimeData(int  row0, int  column1, const QMimeData*  data2, Qt::DropAction  action3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QMimeData*" , "Qt::DropAction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&row0, (void*)&column1, (void*)&data2, (void*)&action3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("dropMimeData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QTableWidget::dropMimeData(row0, column1, data2, action3);
}
bool  PythonQtShell_QTableWidget::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("edit");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "QAbstractItemView::EditTrigger" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QTableWidget::edit(index0, trigger1, event2);
}
void PythonQtShell_QTableWidget::editorDestroyed(QObject*  editor0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::editorDestroyed(editor0);
}
void PythonQtShell_QTableWidget::enterEvent(QEvent*  arg__1)
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
  QTableWidget::enterEvent(arg__1);
}
bool  PythonQtShell_QTableWidget::event(QEvent*  e0)
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
  return QTableWidget::event(e0);
}
bool  PythonQtShell_QTableWidget::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTableWidget::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTableWidget::focusInEvent(QFocusEvent*  event0)
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
  QTableWidget::focusInEvent(event0);
}
bool  PythonQtShell_QTableWidget::focusNextPrevChild(bool  next0)
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
  return QTableWidget::focusNextPrevChild(next0);
}
void PythonQtShell_QTableWidget::focusOutEvent(QFocusEvent*  event0)
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
  QTableWidget::focusOutEvent(event0);
}
bool  PythonQtShell_QTableWidget::hasHeightForWidth() const
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
  return QTableWidget::hasHeightForWidth();
}
int  PythonQtShell_QTableWidget::heightForWidth(int  arg__1) const
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
  return QTableWidget::heightForWidth(arg__1);
}
void PythonQtShell_QTableWidget::hideEvent(QHideEvent*  arg__1)
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
  QTableWidget::hideEvent(arg__1);
}
int  PythonQtShell_QTableWidget::horizontalOffset() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("horizontalOffset");
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
  return QTableWidget::horizontalOffset();
}
void PythonQtShell_QTableWidget::horizontalScrollbarAction(int  action0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::horizontalScrollbarAction(action0);
}
void PythonQtShell_QTableWidget::horizontalScrollbarValueChanged(int  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::horizontalScrollbarValueChanged(value0);
}
QModelIndex  PythonQtShell_QTableWidget::indexAt(const QPoint&  p0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QTableWidget::indexAt(p0);
}
void PythonQtShell_QTableWidget::initPainter(QPainter*  painter0) const
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
  QTableWidget::initPainter(painter0);
}
void PythonQtShell_QTableWidget::inputMethodEvent(QInputMethodEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QTableWidget::inputMethodQuery(Qt::InputMethodQuery  query0) const
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
  return QTableWidget::inputMethodQuery(query0);
}
bool  PythonQtShell_QTableWidget::isIndexHidden(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isIndexHidden");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QTableWidget::isIndexHidden(index0);
}
void PythonQtShell_QTableWidget::keyPressEvent(QKeyEvent*  event0)
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
  QTableWidget::keyPressEvent(event0);
}
void PythonQtShell_QTableWidget::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QTableWidget::keyReleaseEvent(arg__1);
}
void PythonQtShell_QTableWidget::keyboardSearch(const QString&  search0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::keyboardSearch(search0);
}
void PythonQtShell_QTableWidget::leaveEvent(QEvent*  arg__1)
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
  QTableWidget::leaveEvent(arg__1);
}
int  PythonQtShell_QTableWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QTableWidget::metric(arg__1);
}
QMimeData*  PythonQtShell_QTableWidget::mimeData(const QList<QTableWidgetItem* >  items0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QTableWidgetItem* >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&items0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mimeData", methodInfo, result);
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
  return QTableWidget::mimeData(items0);
}
QStringList  PythonQtShell_QTableWidget::mimeTypes() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mimeTypes");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("mimeTypes", methodInfo, result);
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
  return QTableWidget::mimeTypes();
}
void PythonQtShell_QTableWidget::mouseDoubleClickEvent(QMouseEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QTableWidget::mouseMoveEvent(QMouseEvent*  event0)
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
  QTableWidget::mouseMoveEvent(event0);
}
void PythonQtShell_QTableWidget::mousePressEvent(QMouseEvent*  event0)
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
  QTableWidget::mousePressEvent(event0);
}
void PythonQtShell_QTableWidget::mouseReleaseEvent(QMouseEvent*  event0)
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
  QTableWidget::mouseReleaseEvent(event0);
}
void PythonQtShell_QTableWidget::moveEvent(QMoveEvent*  arg__1)
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
  QTableWidget::moveEvent(arg__1);
}
bool  PythonQtShell_QTableWidget::nativeEvent(const QByteArray&  eventType0, void*  message1, long*  result2)
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
  return QTableWidget::nativeEvent(eventType0, message1, result2);
}
QPaintEngine*  PythonQtShell_QTableWidget::paintEngine() const
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
  return QTableWidget::paintEngine();
}
void PythonQtShell_QTableWidget::paintEvent(QPaintEvent*  e0)
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
  QTableWidget::paintEvent(e0);
}
QPaintDevice*  PythonQtShell_QTableWidget::redirected(QPoint*  offset0) const
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
  return QTableWidget::redirected(offset0);
}
void PythonQtShell_QTableWidget::reset()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::reset();
}
void PythonQtShell_QTableWidget::resizeEvent(QResizeEvent*  event0)
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
  QTableWidget::resizeEvent(event0);
}
void PythonQtShell_QTableWidget::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::rowsAboutToBeRemoved(parent0, start1, end2);
}
void PythonQtShell_QTableWidget::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::rowsInserted(parent0, start1, end2);
}
void PythonQtShell_QTableWidget::scrollContentsBy(int  dx0, int  dy1)
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
  QTableWidget::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QTableWidget::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::scrollTo(index0, hint1);
}
void PythonQtShell_QTableWidget::selectAll()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::selectAll();
}
QList<QModelIndex >  PythonQtShell_QTableWidget::selectedIndexes() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QTableWidget::selectedIndexes();
}
void PythonQtShell_QTableWidget::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::selectionChanged(selected0, deselected1);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QTableWidget::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QTableWidget::selectionCommand(index0, event1);
}
void PythonQtShell_QTableWidget::setRootIndex(const QModelIndex&  index0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::setRootIndex(index0);
}
void PythonQtShell_QTableWidget::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::setSelection(rect0, command1);
}
void PythonQtShell_QTableWidget::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::setSelectionModel(selectionModel0);
}
void PythonQtShell_QTableWidget::setupViewport(QWidget*  viewport0)
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
  QTableWidget::setupViewport(viewport0);
}
QPainter*  PythonQtShell_QTableWidget::sharedPainter() const
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
  return QTableWidget::sharedPainter();
}
void PythonQtShell_QTableWidget::showEvent(QShowEvent*  arg__1)
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
  QTableWidget::showEvent(arg__1);
}
int  PythonQtShell_QTableWidget::sizeHintForColumn(int  column0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sizeHintForColumn");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QTableWidget::sizeHintForColumn(column0);
}
int  PythonQtShell_QTableWidget::sizeHintForRow(int  row0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sizeHintForRow");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QTableWidget::sizeHintForRow(row0);
}
void PythonQtShell_QTableWidget::startDrag(Qt::DropActions  supportedActions0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::startDrag(supportedActions0);
}
Qt::DropActions  PythonQtShell_QTableWidget::supportedDropActions() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("supportedDropActions");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportedDropActions", methodInfo, result);
        } else {
          returnValue = *((Qt::DropActions*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QTableWidget::supportedDropActions();
}
void PythonQtShell_QTableWidget::tabletEvent(QTabletEvent*  arg__1)
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
  QTableWidget::tabletEvent(arg__1);
}
void PythonQtShell_QTableWidget::timerEvent(QTimerEvent*  event0)
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
  QTableWidget::timerEvent(event0);
}
void PythonQtShell_QTableWidget::updateEditorData()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::updateEditorData();
}
void PythonQtShell_QTableWidget::updateEditorGeometries()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::updateEditorGeometries();
}
void PythonQtShell_QTableWidget::updateGeometries()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::updateGeometries();
}
int  PythonQtShell_QTableWidget::verticalOffset() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("verticalOffset");
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
  return QTableWidget::verticalOffset();
}
void PythonQtShell_QTableWidget::verticalScrollbarAction(int  action0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::verticalScrollbarAction(action0);
}
void PythonQtShell_QTableWidget::verticalScrollbarValueChanged(int  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QTableWidget::verticalScrollbarValueChanged(value0);
}
QStyleOptionViewItem  PythonQtShell_QTableWidget::viewOptions() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QTableWidget::viewOptions();
}
bool  PythonQtShell_QTableWidget::viewportEvent(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("viewportEvent");
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
  return QTableWidget::viewportEvent(event0);
}
QSize  PythonQtShell_QTableWidget::viewportSizeHint() const
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
  return QTableWidget::viewportSizeHint();
}
QRect  PythonQtShell_QTableWidget::visualRect(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QTableWidget::visualRect(index0);
}
QRegion  PythonQtShell_QTableWidget::visualRegionForSelection(const QItemSelection&  selection0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QTableWidget::visualRegionForSelection(selection0);
}
void PythonQtShell_QTableWidget::wheelEvent(QWheelEvent*  arg__1)
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
  QTableWidget::wheelEvent(arg__1);
}
QTableWidget* PythonQtWrapper_QTableWidget::new_QTableWidget(QWidget*  parent)
{ 
return new PythonQtShell_QTableWidget(parent); }

QTableWidget* PythonQtWrapper_QTableWidget::new_QTableWidget(int  rows, int  columns, QWidget*  parent)
{ 
return new PythonQtShell_QTableWidget(rows, columns, parent); }

QWidget*  PythonQtWrapper_QTableWidget::cellWidget(QTableWidget* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->cellWidget(row, column));
}

void PythonQtWrapper_QTableWidget::closePersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item)
{
  ( theWrappedObject->closePersistentEditor(item));
}

int  PythonQtWrapper_QTableWidget::column(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const
{
  return ( theWrappedObject->column(item));
}

int  PythonQtWrapper_QTableWidget::columnCount(QTableWidget* theWrappedObject) const
{
  return ( theWrappedObject->columnCount());
}

int  PythonQtWrapper_QTableWidget::currentColumn(QTableWidget* theWrappedObject) const
{
  return ( theWrappedObject->currentColumn());
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::currentItem(QTableWidget* theWrappedObject) const
{
  return ( theWrappedObject->currentItem());
}

int  PythonQtWrapper_QTableWidget::currentRow(QTableWidget* theWrappedObject) const
{
  return ( theWrappedObject->currentRow());
}

void PythonQtWrapper_QTableWidget::dropEvent(QTableWidget* theWrappedObject, QDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->promoted_dropEvent(event));
}

bool  PythonQtWrapper_QTableWidget::dropMimeData(QTableWidget* theWrappedObject, int  row, int  column, const QMimeData*  data, Qt::DropAction  action)
{
  return ( ((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->promoted_dropMimeData(row, column, data, action));
}

void PythonQtWrapper_QTableWidget::editItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item)
{
  ( theWrappedObject->editItem(item));
}

bool  PythonQtWrapper_QTableWidget::event(QTableWidget* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->promoted_event(e));
}

QList<QTableWidgetItem* >  PythonQtWrapper_QTableWidget::findItems(QTableWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const
{
  return ( theWrappedObject->findItems(text, flags));
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::horizontalHeaderItem(QTableWidget* theWrappedObject, int  column) const
{
  return ( theWrappedObject->horizontalHeaderItem(column));
}

QModelIndex  PythonQtWrapper_QTableWidget::indexFromItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->promoted_indexFromItem(item));
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::item(QTableWidget* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->item(row, column));
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::itemAt(QTableWidget* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->itemAt(p));
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::itemAt(QTableWidget* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->itemAt(x, y));
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::itemFromIndex(QTableWidget* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->promoted_itemFromIndex(index));
}

const QTableWidgetItem*  PythonQtWrapper_QTableWidget::itemPrototype(QTableWidget* theWrappedObject) const
{
  return ( theWrappedObject->itemPrototype());
}

QList<QTableWidgetItem* >  PythonQtWrapper_QTableWidget::items(QTableWidget* theWrappedObject, const QMimeData*  data) const
{
  return ( ((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->promoted_items(data));
}

QStringList  PythonQtWrapper_QTableWidget::mimeTypes(QTableWidget* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->promoted_mimeTypes());
}

void PythonQtWrapper_QTableWidget::openPersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item)
{
  ( theWrappedObject->openPersistentEditor(item));
}

void PythonQtWrapper_QTableWidget::removeCellWidget(QTableWidget* theWrappedObject, int  row, int  column)
{
  ( theWrappedObject->removeCellWidget(row, column));
}

int  PythonQtWrapper_QTableWidget::row(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const
{
  return ( theWrappedObject->row(item));
}

int  PythonQtWrapper_QTableWidget::rowCount(QTableWidget* theWrappedObject) const
{
  return ( theWrappedObject->rowCount());
}

QList<QTableWidgetItem* >  PythonQtWrapper_QTableWidget::selectedItems(QTableWidget* theWrappedObject) const
{
  return ( theWrappedObject->selectedItems());
}

QList<QTableWidgetSelectionRange >  PythonQtWrapper_QTableWidget::selectedRanges(QTableWidget* theWrappedObject) const
{
  return ( theWrappedObject->selectedRanges());
}

void PythonQtWrapper_QTableWidget::setCellWidget(QTableWidget* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QWidget* >  widget)
{
  ( theWrappedObject->setCellWidget(row, column, widget));
}

void PythonQtWrapper_QTableWidget::setColumnCount(QTableWidget* theWrappedObject, int  columns)
{
  ( theWrappedObject->setColumnCount(columns));
}

void PythonQtWrapper_QTableWidget::setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column)
{
  ( theWrappedObject->setCurrentCell(row, column));
}

void PythonQtWrapper_QTableWidget::setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column, QItemSelectionModel::SelectionFlags  command)
{
  ( theWrappedObject->setCurrentCell(row, column, command));
}

void PythonQtWrapper_QTableWidget::setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item)
{
  ( theWrappedObject->setCurrentItem(item));
}

void PythonQtWrapper_QTableWidget::setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item, QItemSelectionModel::SelectionFlags  command)
{
  ( theWrappedObject->setCurrentItem(item, command));
}

void PythonQtWrapper_QTableWidget::setHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item)
{
  ( theWrappedObject->setHorizontalHeaderItem(column, item));
}

void PythonQtWrapper_QTableWidget::setHorizontalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels)
{
  ( theWrappedObject->setHorizontalHeaderLabels(labels));
}

void PythonQtWrapper_QTableWidget::setItem(QTableWidget* theWrappedObject, int  row, int  column, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item)
{
  ( theWrappedObject->setItem(row, column, item));
}

void PythonQtWrapper_QTableWidget::setItemPrototype(QTableWidget* theWrappedObject, PythonQtPassOwnershipToCPP<const QTableWidgetItem* >  item)
{
  ( theWrappedObject->setItemPrototype(item));
}

void PythonQtWrapper_QTableWidget::setRangeSelected(QTableWidget* theWrappedObject, const QTableWidgetSelectionRange&  range, bool  select)
{
  ( theWrappedObject->setRangeSelected(range, select));
}

void PythonQtWrapper_QTableWidget::setRowCount(QTableWidget* theWrappedObject, int  rows)
{
  ( theWrappedObject->setRowCount(rows));
}

void PythonQtWrapper_QTableWidget::setVerticalHeaderItem(QTableWidget* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QTableWidgetItem* >  item)
{
  ( theWrappedObject->setVerticalHeaderItem(row, item));
}

void PythonQtWrapper_QTableWidget::setVerticalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels)
{
  ( theWrappedObject->setVerticalHeaderLabels(labels));
}

void PythonQtWrapper_QTableWidget::sortItems(QTableWidget* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( theWrappedObject->sortItems(column, order));
}

Qt::DropActions  PythonQtWrapper_QTableWidget::supportedDropActions(QTableWidget* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTableWidget*)theWrappedObject)->promoted_supportedDropActions());
}

PythonQtPassOwnershipToPython<QTableWidgetItem*  > PythonQtWrapper_QTableWidget::takeHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column)
{
  return ( theWrappedObject->takeHorizontalHeaderItem(column));
}

PythonQtPassOwnershipToPython<QTableWidgetItem*  > PythonQtWrapper_QTableWidget::takeItem(QTableWidget* theWrappedObject, int  row, int  column)
{
  return ( theWrappedObject->takeItem(row, column));
}

PythonQtPassOwnershipToPython<QTableWidgetItem*  > PythonQtWrapper_QTableWidget::takeVerticalHeaderItem(QTableWidget* theWrappedObject, int  row)
{
  return ( theWrappedObject->takeVerticalHeaderItem(row));
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::verticalHeaderItem(QTableWidget* theWrappedObject, int  row) const
{
  return ( theWrappedObject->verticalHeaderItem(row));
}

int  PythonQtWrapper_QTableWidget::visualColumn(QTableWidget* theWrappedObject, int  logicalColumn) const
{
  return ( theWrappedObject->visualColumn(logicalColumn));
}

QRect  PythonQtWrapper_QTableWidget::visualItemRect(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const
{
  return ( theWrappedObject->visualItemRect(item));
}

int  PythonQtWrapper_QTableWidget::visualRow(QTableWidget* theWrappedObject, int  logicalRow) const
{
  return ( theWrappedObject->visualRow(logicalRow));
}



PythonQtShell_QTableWidgetItem::~PythonQtShell_QTableWidgetItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTableWidgetItem*  PythonQtShell_QTableWidgetItem::clone() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("clone");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QTableWidgetItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QTableWidgetItem* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
        } else {
          returnValue = *((QTableWidgetItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QTableWidgetItem::clone();
}
QVariant  PythonQtShell_QTableWidgetItem::data(int  role0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("data");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&role0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
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
  return QTableWidgetItem::data(role0);
}
bool  PythonQtShell_QTableWidgetItem::__lt__(const QTableWidgetItem&  other0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("__lt__");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QTableWidgetItem&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&other0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("__lt__", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QTableWidgetItem::operator<(other0);
}
void PythonQtShell_QTableWidgetItem::read(QDataStream&  in0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("read");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDataStream&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&in0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTableWidgetItem::read(in0);
}
void PythonQtShell_QTableWidgetItem::setData(int  role0, const QVariant&  value1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&role0, (void*)&value1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTableWidgetItem::setData(role0, value1);
}
void PythonQtShell_QTableWidgetItem::write(QDataStream&  out0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("write");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QDataStream&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&out0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QTableWidgetItem::write(out0);
}
QTableWidgetItem* PythonQtWrapper_QTableWidgetItem::new_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type)
{ 
return new PythonQtShell_QTableWidgetItem(icon, text, type); }

QTableWidgetItem* PythonQtWrapper_QTableWidgetItem::new_QTableWidgetItem(const QString&  text, int  type)
{ 
return new PythonQtShell_QTableWidgetItem(text, type); }

QTableWidgetItem* PythonQtWrapper_QTableWidgetItem::new_QTableWidgetItem(int  type)
{ 
return new PythonQtShell_QTableWidgetItem(type); }

QBrush  PythonQtWrapper_QTableWidgetItem::background(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->background());
}

Qt::CheckState  PythonQtWrapper_QTableWidgetItem::checkState(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->checkState());
}

QTableWidgetItem*  PythonQtWrapper_QTableWidgetItem::clone(QTableWidgetItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->promoted_clone());
}

int  PythonQtWrapper_QTableWidgetItem::column(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

QVariant  PythonQtWrapper_QTableWidgetItem::data(QTableWidgetItem* theWrappedObject, int  role) const
{
  return ( ((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->promoted_data(role));
}

Qt::ItemFlags  PythonQtWrapper_QTableWidgetItem::flags(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QFont  PythonQtWrapper_QTableWidgetItem::font(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QBrush  PythonQtWrapper_QTableWidgetItem::foreground(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->foreground());
}

QIcon  PythonQtWrapper_QTableWidgetItem::icon(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

bool  PythonQtWrapper_QTableWidgetItem::isSelected(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isSelected());
}

void PythonQtWrapper_QTableWidgetItem::writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out)
{
  out <<  (*theWrappedObject);
}

void PythonQtWrapper_QTableWidgetItem::readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in)
{
  in >>  (*theWrappedObject);
}

int  PythonQtWrapper_QTableWidgetItem::row(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

void PythonQtWrapper_QTableWidgetItem::setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackground(brush));
}

void PythonQtWrapper_QTableWidgetItem::setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state)
{
  ( theWrappedObject->setCheckState(state));
}

void PythonQtWrapper_QTableWidgetItem::setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QTableWidgetItem*)theWrappedObject)->promoted_setData(role, value));
}

void PythonQtWrapper_QTableWidgetItem::setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QTableWidgetItem::setFont(QTableWidgetItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QTableWidgetItem::setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForeground(brush));
}

void PythonQtWrapper_QTableWidgetItem::setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon)
{
  ( theWrappedObject->setIcon(icon));
}

void PythonQtWrapper_QTableWidgetItem::setSelected(QTableWidgetItem* theWrappedObject, bool  select)
{
  ( theWrappedObject->setSelected(select));
}

void PythonQtWrapper_QTableWidgetItem::setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setSizeHint(size));
}

void PythonQtWrapper_QTableWidgetItem::setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip)
{
  ( theWrappedObject->setStatusTip(statusTip));
}

void PythonQtWrapper_QTableWidgetItem::setText(QTableWidgetItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

void PythonQtWrapper_QTableWidgetItem::setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment)
{
  ( theWrappedObject->setTextAlignment(alignment));
}

void PythonQtWrapper_QTableWidgetItem::setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip)
{
  ( theWrappedObject->setToolTip(toolTip));
}

void PythonQtWrapper_QTableWidgetItem::setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis)
{
  ( theWrappedObject->setWhatsThis(whatsThis));
}

QSize  PythonQtWrapper_QTableWidgetItem::sizeHint(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QString  PythonQtWrapper_QTableWidgetItem::statusTip(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->statusTip());
}

QTableWidget*  PythonQtWrapper_QTableWidgetItem::tableWidget(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->tableWidget());
}

QString  PythonQtWrapper_QTableWidgetItem::text(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

int  PythonQtWrapper_QTableWidgetItem::textAlignment(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->textAlignment());
}

QString  PythonQtWrapper_QTableWidgetItem::toolTip(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

int  PythonQtWrapper_QTableWidgetItem::type(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString  PythonQtWrapper_QTableWidgetItem::whatsThis(QTableWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->whatsThis());
}



QTableWidgetSelectionRange* PythonQtWrapper_QTableWidgetSelectionRange::new_QTableWidgetSelectionRange()
{ 
return new QTableWidgetSelectionRange(); }

QTableWidgetSelectionRange* PythonQtWrapper_QTableWidgetSelectionRange::new_QTableWidgetSelectionRange(const QTableWidgetSelectionRange&  other)
{ 
return new QTableWidgetSelectionRange(other); }

QTableWidgetSelectionRange* PythonQtWrapper_QTableWidgetSelectionRange::new_QTableWidgetSelectionRange(int  top, int  left, int  bottom, int  right)
{ 
return new QTableWidgetSelectionRange(top, left, bottom, right); }

int  PythonQtWrapper_QTableWidgetSelectionRange::bottomRow(QTableWidgetSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->bottomRow());
}

int  PythonQtWrapper_QTableWidgetSelectionRange::columnCount(QTableWidgetSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->columnCount());
}

int  PythonQtWrapper_QTableWidgetSelectionRange::leftColumn(QTableWidgetSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->leftColumn());
}

int  PythonQtWrapper_QTableWidgetSelectionRange::rightColumn(QTableWidgetSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->rightColumn());
}

int  PythonQtWrapper_QTableWidgetSelectionRange::rowCount(QTableWidgetSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->rowCount());
}

int  PythonQtWrapper_QTableWidgetSelectionRange::topRow(QTableWidgetSelectionRange* theWrappedObject) const
{
  return ( theWrappedObject->topRow());
}



PythonQtShell_QTabletEvent::~PythonQtShell_QTabletEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTabletEvent* PythonQtWrapper_QTabletEvent::new_QTabletEvent(QEvent::Type  t, const QPointF&  pos, const QPointF&  globalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID)
{ 
return new PythonQtShell_QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID); }

QTabletEvent::TabletDevice  PythonQtWrapper_QTabletEvent::device(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QPoint  PythonQtWrapper_QTabletEvent::globalPos(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalPos());
}

const QPointF*  PythonQtWrapper_QTabletEvent::globalPosF(QTabletEvent* theWrappedObject) const
{
  return &( theWrappedObject->globalPosF());
}

int  PythonQtWrapper_QTabletEvent::globalX(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalX());
}

int  PythonQtWrapper_QTabletEvent::globalY(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalY());
}

qreal  PythonQtWrapper_QTabletEvent::hiResGlobalX(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->hiResGlobalX());
}

qreal  PythonQtWrapper_QTabletEvent::hiResGlobalY(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->hiResGlobalY());
}

QTabletEvent::PointerType  PythonQtWrapper_QTabletEvent::pointerType(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->pointerType());
}

QPoint  PythonQtWrapper_QTabletEvent::pos(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

const QPointF*  PythonQtWrapper_QTabletEvent::posF(QTabletEvent* theWrappedObject) const
{
  return &( theWrappedObject->posF());
}

qreal  PythonQtWrapper_QTabletEvent::pressure(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->pressure());
}

qreal  PythonQtWrapper_QTabletEvent::rotation(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->rotation());
}

qreal  PythonQtWrapper_QTabletEvent::tangentialPressure(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->tangentialPressure());
}

qint64  PythonQtWrapper_QTabletEvent::uniqueId(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->uniqueId());
}

int  PythonQtWrapper_QTabletEvent::x(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QTabletEvent::xTilt(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->xTilt());
}

int  PythonQtWrapper_QTabletEvent::y(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

int  PythonQtWrapper_QTabletEvent::yTilt(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->yTilt());
}

int  PythonQtWrapper_QTabletEvent::z(QTabletEvent* theWrappedObject) const
{
  return ( theWrappedObject->z());
}



PythonQtShell_QTapAndHoldGesture::~PythonQtShell_QTapAndHoldGesture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTapAndHoldGesture::childEvent(QChildEvent*  arg__1)
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
  QTapAndHoldGesture::childEvent(arg__1);
}
void PythonQtShell_QTapAndHoldGesture::customEvent(QEvent*  arg__1)
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
  QTapAndHoldGesture::customEvent(arg__1);
}
bool  PythonQtShell_QTapAndHoldGesture::event(QEvent*  arg__1)
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
  return QTapAndHoldGesture::event(arg__1);
}
bool  PythonQtShell_QTapAndHoldGesture::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTapAndHoldGesture::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTapAndHoldGesture::timerEvent(QTimerEvent*  arg__1)
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
  QTapAndHoldGesture::timerEvent(arg__1);
}
QTapAndHoldGesture* PythonQtWrapper_QTapAndHoldGesture::new_QTapAndHoldGesture(QObject*  parent)
{ 
return new PythonQtShell_QTapAndHoldGesture(parent); }

QPointF  PythonQtWrapper_QTapAndHoldGesture::position(QTapAndHoldGesture* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

void PythonQtWrapper_QTapAndHoldGesture::setPosition(QTapAndHoldGesture* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPosition(pos));
}

void PythonQtWrapper_QTapAndHoldGesture::static_QTapAndHoldGesture_setTimeout(int  msecs)
{
  (QTapAndHoldGesture::setTimeout(msecs));
}

int  PythonQtWrapper_QTapAndHoldGesture::static_QTapAndHoldGesture_timeout()
{
  return (QTapAndHoldGesture::timeout());
}



PythonQtShell_QTapGesture::~PythonQtShell_QTapGesture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTapGesture::childEvent(QChildEvent*  arg__1)
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
  QTapGesture::childEvent(arg__1);
}
void PythonQtShell_QTapGesture::customEvent(QEvent*  arg__1)
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
  QTapGesture::customEvent(arg__1);
}
bool  PythonQtShell_QTapGesture::event(QEvent*  arg__1)
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
  return QTapGesture::event(arg__1);
}
bool  PythonQtShell_QTapGesture::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTapGesture::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTapGesture::timerEvent(QTimerEvent*  arg__1)
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
  QTapGesture::timerEvent(arg__1);
}
QTapGesture* PythonQtWrapper_QTapGesture::new_QTapGesture(QObject*  parent)
{ 
return new PythonQtShell_QTapGesture(parent); }

QPointF  PythonQtWrapper_QTapGesture::position(QTapGesture* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

void PythonQtWrapper_QTapGesture::setPosition(QTapGesture* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPosition(pos));
}



QTextBlock* PythonQtWrapper_QTextBlock::new_QTextBlock()
{ 
return new QTextBlock(); }

QTextBlock* PythonQtWrapper_QTextBlock::new_QTextBlock(const QTextBlock&  o)
{ 
return new QTextBlock(o); }

QTextBlock::iterator  PythonQtWrapper_QTextBlock::begin(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

QTextBlockFormat  PythonQtWrapper_QTextBlock::blockFormat(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->blockFormat());
}

int  PythonQtWrapper_QTextBlock::blockFormatIndex(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->blockFormatIndex());
}

int  PythonQtWrapper_QTextBlock::blockNumber(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->blockNumber());
}

QTextCharFormat  PythonQtWrapper_QTextBlock::charFormat(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->charFormat());
}

int  PythonQtWrapper_QTextBlock::charFormatIndex(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->charFormatIndex());
}

void PythonQtWrapper_QTextBlock::clearLayout(QTextBlock* theWrappedObject)
{
  ( theWrappedObject->clearLayout());
}

bool  PythonQtWrapper_QTextBlock::contains(QTextBlock* theWrappedObject, int  position) const
{
  return ( theWrappedObject->contains(position));
}

const QTextDocument*  PythonQtWrapper_QTextBlock::document(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QTextBlock::iterator  PythonQtWrapper_QTextBlock::end(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

int  PythonQtWrapper_QTextBlock::firstLineNumber(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->firstLineNumber());
}

int  PythonQtWrapper_QTextBlock::fragmentIndex(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->fragmentIndex());
}

bool  PythonQtWrapper_QTextBlock::isValid(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QTextBlock::isVisible(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

QTextLayout*  PythonQtWrapper_QTextBlock::layout(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->layout());
}

int  PythonQtWrapper_QTextBlock::length(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

int  PythonQtWrapper_QTextBlock::lineCount(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->lineCount());
}

QTextBlock  PythonQtWrapper_QTextBlock::next(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->next());
}

bool  PythonQtWrapper_QTextBlock::__ne__(QTextBlock* theWrappedObject, const QTextBlock&  o) const
{
  return ( (*theWrappedObject)!= o);
}

bool  PythonQtWrapper_QTextBlock::__lt__(QTextBlock* theWrappedObject, const QTextBlock&  o) const
{
  return ( (*theWrappedObject)< o);
}

bool  PythonQtWrapper_QTextBlock::__eq__(QTextBlock* theWrappedObject, const QTextBlock&  o) const
{
  return ( (*theWrappedObject)== o);
}

int  PythonQtWrapper_QTextBlock::position(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QTextBlock  PythonQtWrapper_QTextBlock::previous(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->previous());
}

int  PythonQtWrapper_QTextBlock::revision(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

void PythonQtWrapper_QTextBlock::setLineCount(QTextBlock* theWrappedObject, int  count)
{
  ( theWrappedObject->setLineCount(count));
}

void PythonQtWrapper_QTextBlock::setRevision(QTextBlock* theWrappedObject, int  rev)
{
  ( theWrappedObject->setRevision(rev));
}

void PythonQtWrapper_QTextBlock::setUserData(QTextBlock* theWrappedObject, QTextBlockUserData*  data)
{
  ( theWrappedObject->setUserData(data));
}

void PythonQtWrapper_QTextBlock::setUserState(QTextBlock* theWrappedObject, int  state)
{
  ( theWrappedObject->setUserState(state));
}

void PythonQtWrapper_QTextBlock::setVisible(QTextBlock* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setVisible(visible));
}

QString  PythonQtWrapper_QTextBlock::text(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

Qt::LayoutDirection  PythonQtWrapper_QTextBlock::textDirection(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

QVector<QTextLayout::FormatRange >  PythonQtWrapper_QTextBlock::textFormats(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->textFormats());
}

QTextList*  PythonQtWrapper_QTextBlock::textList(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->textList());
}

QTextBlockUserData*  PythonQtWrapper_QTextBlock::userData(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->userData());
}

int  PythonQtWrapper_QTextBlock::userState(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->userState());
}



PythonQtShell_QTextBlockFormat::~PythonQtShell_QTextBlockFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextBlockFormat* PythonQtWrapper_QTextBlockFormat::new_QTextBlockFormat()
{ 
return new PythonQtShell_QTextBlockFormat(); }

QTextBlockFormat* PythonQtWrapper_QTextBlockFormat::new_QTextBlockFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextBlockFormat(fmt); }

Qt::Alignment  PythonQtWrapper_QTextBlockFormat::alignment(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

qreal  PythonQtWrapper_QTextBlockFormat::bottomMargin(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomMargin());
}

int  PythonQtWrapper_QTextBlockFormat::indent(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->indent());
}

bool  PythonQtWrapper_QTextBlockFormat::isValid(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextBlockFormat::leftMargin(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftMargin());
}

qreal  PythonQtWrapper_QTextBlockFormat::lineHeight(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->lineHeight());
}

qreal  PythonQtWrapper_QTextBlockFormat::lineHeight(QTextBlockFormat* theWrappedObject, qreal  scriptLineHeight, qreal  scaling) const
{
  return ( theWrappedObject->lineHeight(scriptLineHeight, scaling));
}

int  PythonQtWrapper_QTextBlockFormat::lineHeightType(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->lineHeightType());
}

bool  PythonQtWrapper_QTextBlockFormat::nonBreakableLines(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->nonBreakableLines());
}

QTextFormat::PageBreakFlags  PythonQtWrapper_QTextBlockFormat::pageBreakPolicy(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->pageBreakPolicy());
}

qreal  PythonQtWrapper_QTextBlockFormat::rightMargin(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightMargin());
}

void PythonQtWrapper_QTextBlockFormat::setAlignment(QTextBlockFormat* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QTextBlockFormat::setBottomMargin(QTextBlockFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setBottomMargin(margin));
}

void PythonQtWrapper_QTextBlockFormat::setIndent(QTextBlockFormat* theWrappedObject, int  indent)
{
  ( theWrappedObject->setIndent(indent));
}

void PythonQtWrapper_QTextBlockFormat::setLeftMargin(QTextBlockFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setLeftMargin(margin));
}

void PythonQtWrapper_QTextBlockFormat::setLineHeight(QTextBlockFormat* theWrappedObject, qreal  height, int  heightType)
{
  ( theWrappedObject->setLineHeight(height, heightType));
}

void PythonQtWrapper_QTextBlockFormat::setNonBreakableLines(QTextBlockFormat* theWrappedObject, bool  b)
{
  ( theWrappedObject->setNonBreakableLines(b));
}

void PythonQtWrapper_QTextBlockFormat::setPageBreakPolicy(QTextBlockFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags)
{
  ( theWrappedObject->setPageBreakPolicy(flags));
}

void PythonQtWrapper_QTextBlockFormat::setRightMargin(QTextBlockFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setRightMargin(margin));
}

void PythonQtWrapper_QTextBlockFormat::setTabPositions(QTextBlockFormat* theWrappedObject, const QList<QTextOption::Tab >&  tabs)
{
  ( theWrappedObject->setTabPositions(tabs));
}

void PythonQtWrapper_QTextBlockFormat::setTextIndent(QTextBlockFormat* theWrappedObject, qreal  aindent)
{
  ( theWrappedObject->setTextIndent(aindent));
}

void PythonQtWrapper_QTextBlockFormat::setTopMargin(QTextBlockFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setTopMargin(margin));
}

QList<QTextOption::Tab >  PythonQtWrapper_QTextBlockFormat::tabPositions(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->tabPositions());
}

qreal  PythonQtWrapper_QTextBlockFormat::textIndent(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->textIndent());
}

qreal  PythonQtWrapper_QTextBlockFormat::topMargin(QTextBlockFormat* theWrappedObject) const
{
  return ( theWrappedObject->topMargin());
}



PythonQtShell_QTextBlockGroup::~PythonQtShell_QTextBlockGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTextBlockGroup::blockFormatChanged(const QTextBlock&  block0)
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
  QTextBlockGroup::blockFormatChanged(block0);
}
void PythonQtShell_QTextBlockGroup::blockInserted(const QTextBlock&  block0)
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
  QTextBlockGroup::blockInserted(block0);
}
void PythonQtShell_QTextBlockGroup::blockRemoved(const QTextBlock&  block0)
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
  QTextBlockGroup::blockRemoved(block0);
}
void PythonQtShell_QTextBlockGroup::childEvent(QChildEvent*  arg__1)
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
  QTextBlockGroup::childEvent(arg__1);
}
void PythonQtShell_QTextBlockGroup::customEvent(QEvent*  arg__1)
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
  QTextBlockGroup::customEvent(arg__1);
}
bool  PythonQtShell_QTextBlockGroup::event(QEvent*  arg__1)
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
  return QTextBlockGroup::event(arg__1);
}
bool  PythonQtShell_QTextBlockGroup::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextBlockGroup::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextBlockGroup::timerEvent(QTimerEvent*  arg__1)
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
  QTextBlockGroup::timerEvent(arg__1);
}
QTextBlockGroup* PythonQtWrapper_QTextBlockGroup::new_QTextBlockGroup(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextBlockGroup(doc); }

void PythonQtWrapper_QTextBlockGroup::blockFormatChanged(QTextBlockGroup* theWrappedObject, const QTextBlock&  block)
{
  ( ((PythonQtPublicPromoter_QTextBlockGroup*)theWrappedObject)->promoted_blockFormatChanged(block));
}

void PythonQtWrapper_QTextBlockGroup::blockInserted(QTextBlockGroup* theWrappedObject, const QTextBlock&  block)
{
  ( ((PythonQtPublicPromoter_QTextBlockGroup*)theWrappedObject)->promoted_blockInserted(block));
}

QList<QTextBlock >  PythonQtWrapper_QTextBlockGroup::blockList(QTextBlockGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTextBlockGroup*)theWrappedObject)->promoted_blockList());
}

void PythonQtWrapper_QTextBlockGroup::blockRemoved(QTextBlockGroup* theWrappedObject, const QTextBlock&  block)
{
  ( ((PythonQtPublicPromoter_QTextBlockGroup*)theWrappedObject)->promoted_blockRemoved(block));
}



PythonQtShell_QTextBlockUserData::~PythonQtShell_QTextBlockUserData() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextBlockUserData* PythonQtWrapper_QTextBlockUserData::new_QTextBlockUserData()
{ 
return new PythonQtShell_QTextBlockUserData(); }



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

void PythonQtWrapper_QTextCharFormat::setFont(QTextCharFormat* theWrappedObject, const QFont&  font, QTextCharFormat::FontPropertiesInheritanceBehavior  behavior)
{
  ( theWrappedObject->setFont(font, behavior));
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

QUrl  PythonQtWrapper_QTextDocument::baseUrl(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->baseUrl());
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

void PythonQtWrapper_QTextDocument::setBaseUrl(QTextDocument* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setBaseUrl(url));
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

bool  PythonQtWrapper_QTextEdit::find(QTextEdit* theWrappedObject, const QRegExp&  exp, QTextDocument::FindFlags  options)
{
  return ( theWrappedObject->find(exp, options));
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

QVariant  PythonQtWrapper_QTextEdit::inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  query, QVariant  argument) const
{
  return ( theWrappedObject->inputMethodQuery(query, argument));
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

QString  PythonQtWrapper_QTextEdit::placeholderText(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->placeholderText());
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

void PythonQtWrapper_QTextEdit::setPlaceholderText(QTextEdit* theWrappedObject, const QString&  placeholderText)
{
  ( theWrappedObject->setPlaceholderText(placeholderText));
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


