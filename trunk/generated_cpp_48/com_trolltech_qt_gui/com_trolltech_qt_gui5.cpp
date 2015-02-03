#include "com_trolltech_qt_gui5.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QColor>
#include <QImage>
#include <QPainterPath>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVarLengthArray>
#include <QVariant>
#include <QWidget>
#include <qabstractanimation.h>
#include <qabstractbutton.h>
#include <qabstractstate.h>
#include <qaction.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdialog.h>
#include <qdockwidget.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qlistwidget.h>
#include <qlocale.h>
#include <qmainwindow.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qmdiarea.h>
#include <qmdisubwindow.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qmessagebox.h>
#include <qmotifstyle.h>
#include <qmouseeventtransition.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprinter.h>
#include <qpushbutton.h>
#include <qquaternion.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstatictext.h>
#include <qstatusbar.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextoption.h>
#include <qtoolbar.h>
#include <qtransform.h>
#include <qvector.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>

PythonQtShell_QListWidgetItem::~PythonQtShell_QListWidgetItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QListWidgetItem*  PythonQtShell_QListWidgetItem::clone() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("clone");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QListWidgetItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QListWidgetItem* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
        } else {
          returnValue = *((QListWidgetItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QListWidgetItem::clone();
}
QVariant  PythonQtShell_QListWidgetItem::data(int  role0) const
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
  return QListWidgetItem::data(role0);
}
bool  PythonQtShell_QListWidgetItem::__lt__(const QListWidgetItem&  other0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("__lt__");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QListWidgetItem&"};
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
  return QListWidgetItem::operator<(other0);
}
void PythonQtShell_QListWidgetItem::read(QDataStream&  in0)
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
  QListWidgetItem::read(in0);
}
void PythonQtShell_QListWidgetItem::setBackgroundColor(const QColor&  color0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setBackgroundColor");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QColor&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&color0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QListWidgetItem::setBackgroundColor(color0);
}
void PythonQtShell_QListWidgetItem::setData(int  role0, const QVariant&  value1)
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
  QListWidgetItem::setData(role0, value1);
}
void PythonQtShell_QListWidgetItem::write(QDataStream&  out0) const
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
  QListWidgetItem::write(out0);
}
QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(PythonQtNewOwnerOfThis<QListWidget* >  view, int  type)
{ 
return new PythonQtShell_QListWidgetItem(view, type); }

QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(const QIcon&  icon, const QString&  text, PythonQtNewOwnerOfThis<QListWidget* >  view, int  type)
{ 
return new PythonQtShell_QListWidgetItem(icon, text, view, type); }

QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(const QString&  text, PythonQtNewOwnerOfThis<QListWidget* >  view, int  type)
{ 
return new PythonQtShell_QListWidgetItem(text, view, type); }

QBrush  PythonQtWrapper_QListWidgetItem::background(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->background());
}

Qt::CheckState  PythonQtWrapper_QListWidgetItem::checkState(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->checkState());
}

QListWidgetItem*  PythonQtWrapper_QListWidgetItem::clone(QListWidgetItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->promoted_clone());
}

QVariant  PythonQtWrapper_QListWidgetItem::data(QListWidgetItem* theWrappedObject, int  role) const
{
  return ( ((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->promoted_data(role));
}

Qt::ItemFlags  PythonQtWrapper_QListWidgetItem::flags(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QFont  PythonQtWrapper_QListWidgetItem::font(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QBrush  PythonQtWrapper_QListWidgetItem::foreground(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->foreground());
}

QIcon  PythonQtWrapper_QListWidgetItem::icon(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

bool  PythonQtWrapper_QListWidgetItem::isHidden(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isHidden());
}

bool  PythonQtWrapper_QListWidgetItem::isSelected(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isSelected());
}

QListWidget*  PythonQtWrapper_QListWidgetItem::listWidget(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->listWidget());
}

void PythonQtWrapper_QListWidgetItem::writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out)
{
  out <<  (*theWrappedObject);
}

void PythonQtWrapper_QListWidgetItem::readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in)
{
  in >>  (*theWrappedObject);
}

void PythonQtWrapper_QListWidgetItem::setBackground(QListWidgetItem* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackground(brush));
}

void PythonQtWrapper_QListWidgetItem::setCheckState(QListWidgetItem* theWrappedObject, Qt::CheckState  state)
{
  ( theWrappedObject->setCheckState(state));
}

void PythonQtWrapper_QListWidgetItem::setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->promoted_setData(role, value));
}

void PythonQtWrapper_QListWidgetItem::setFlags(QListWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QListWidgetItem::setFont(QListWidgetItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QListWidgetItem::setForeground(QListWidgetItem* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForeground(brush));
}

void PythonQtWrapper_QListWidgetItem::setHidden(QListWidgetItem* theWrappedObject, bool  hide)
{
  ( theWrappedObject->setHidden(hide));
}

void PythonQtWrapper_QListWidgetItem::setIcon(QListWidgetItem* theWrappedObject, const QIcon&  icon)
{
  ( theWrappedObject->setIcon(icon));
}

void PythonQtWrapper_QListWidgetItem::setSelected(QListWidgetItem* theWrappedObject, bool  select)
{
  ( theWrappedObject->setSelected(select));
}

void PythonQtWrapper_QListWidgetItem::setSizeHint(QListWidgetItem* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setSizeHint(size));
}

void PythonQtWrapper_QListWidgetItem::setStatusTip(QListWidgetItem* theWrappedObject, const QString&  statusTip)
{
  ( theWrappedObject->setStatusTip(statusTip));
}

void PythonQtWrapper_QListWidgetItem::setText(QListWidgetItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

void PythonQtWrapper_QListWidgetItem::setTextAlignment(QListWidgetItem* theWrappedObject, int  alignment)
{
  ( theWrappedObject->setTextAlignment(alignment));
}

void PythonQtWrapper_QListWidgetItem::setToolTip(QListWidgetItem* theWrappedObject, const QString&  toolTip)
{
  ( theWrappedObject->setToolTip(toolTip));
}

void PythonQtWrapper_QListWidgetItem::setWhatsThis(QListWidgetItem* theWrappedObject, const QString&  whatsThis)
{
  ( theWrappedObject->setWhatsThis(whatsThis));
}

QSize  PythonQtWrapper_QListWidgetItem::sizeHint(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QString  PythonQtWrapper_QListWidgetItem::statusTip(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->statusTip());
}

QString  PythonQtWrapper_QListWidgetItem::text(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

int  PythonQtWrapper_QListWidgetItem::textAlignment(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->textAlignment());
}

QString  PythonQtWrapper_QListWidgetItem::toolTip(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

int  PythonQtWrapper_QListWidgetItem::type(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString  PythonQtWrapper_QListWidgetItem::whatsThis(QListWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->whatsThis());
}



PythonQtShell_QMainWindow::~PythonQtShell_QMainWindow() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMainWindow::actionEvent(QActionEvent*  arg__1)
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
  QMainWindow::actionEvent(arg__1);
}
void PythonQtShell_QMainWindow::changeEvent(QEvent*  arg__1)
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
  QMainWindow::changeEvent(arg__1);
}
void PythonQtShell_QMainWindow::childEvent(QChildEvent*  arg__1)
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
  QMainWindow::childEvent(arg__1);
}
void PythonQtShell_QMainWindow::closeEvent(QCloseEvent*  arg__1)
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
  QMainWindow::closeEvent(arg__1);
}
void PythonQtShell_QMainWindow::contextMenuEvent(QContextMenuEvent*  event0)
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
  QMainWindow::contextMenuEvent(event0);
}
QMenu*  PythonQtShell_QMainWindow::createPopupMenu()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("createPopupMenu");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMenu*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMenu* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createPopupMenu", methodInfo, result);
        } else {
          returnValue = *((QMenu**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMainWindow::createPopupMenu();
}
void PythonQtShell_QMainWindow::customEvent(QEvent*  arg__1)
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
  QMainWindow::customEvent(arg__1);
}
int  PythonQtShell_QMainWindow::devType() const
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
  return QMainWindow::devType();
}
void PythonQtShell_QMainWindow::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QMainWindow::dragEnterEvent(arg__1);
}
void PythonQtShell_QMainWindow::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QMainWindow::dragLeaveEvent(arg__1);
}
void PythonQtShell_QMainWindow::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QMainWindow::dragMoveEvent(arg__1);
}
void PythonQtShell_QMainWindow::dropEvent(QDropEvent*  arg__1)
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
  QMainWindow::dropEvent(arg__1);
}
void PythonQtShell_QMainWindow::enterEvent(QEvent*  arg__1)
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
  QMainWindow::enterEvent(arg__1);
}
bool  PythonQtShell_QMainWindow::event(QEvent*  event0)
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
  return QMainWindow::event(event0);
}
bool  PythonQtShell_QMainWindow::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QMainWindow::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QMainWindow::focusInEvent(QFocusEvent*  arg__1)
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
  QMainWindow::focusInEvent(arg__1);
}
bool  PythonQtShell_QMainWindow::focusNextPrevChild(bool  next0)
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
  return QMainWindow::focusNextPrevChild(next0);
}
void PythonQtShell_QMainWindow::focusOutEvent(QFocusEvent*  arg__1)
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
  QMainWindow::focusOutEvent(arg__1);
}
int  PythonQtShell_QMainWindow::heightForWidth(int  arg__1) const
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
  return QMainWindow::heightForWidth(arg__1);
}
void PythonQtShell_QMainWindow::hideEvent(QHideEvent*  arg__1)
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
  QMainWindow::hideEvent(arg__1);
}
void PythonQtShell_QMainWindow::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMainWindow::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMainWindow::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMainWindow::inputMethodQuery(arg__1);
}
void PythonQtShell_QMainWindow::keyPressEvent(QKeyEvent*  arg__1)
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
  QMainWindow::keyPressEvent(arg__1);
}
void PythonQtShell_QMainWindow::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QMainWindow::keyReleaseEvent(arg__1);
}
void PythonQtShell_QMainWindow::languageChange()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("languageChange");
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
  QMainWindow::languageChange();
}
void PythonQtShell_QMainWindow::leaveEvent(QEvent*  arg__1)
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
  QMainWindow::leaveEvent(arg__1);
}
int  PythonQtShell_QMainWindow::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMainWindow::metric(arg__1);
}
QSize  PythonQtShell_QMainWindow::minimumSizeHint() const
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
  return QMainWindow::minimumSizeHint();
}
void PythonQtShell_QMainWindow::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QMainWindow::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QMainWindow::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QMainWindow::mouseMoveEvent(arg__1);
}
void PythonQtShell_QMainWindow::mousePressEvent(QMouseEvent*  arg__1)
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
  QMainWindow::mousePressEvent(arg__1);
}
void PythonQtShell_QMainWindow::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QMainWindow::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QMainWindow::moveEvent(QMoveEvent*  arg__1)
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
  QMainWindow::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QMainWindow::paintEngine() const
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
  return QMainWindow::paintEngine();
}
void PythonQtShell_QMainWindow::paintEvent(QPaintEvent*  arg__1)
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
  QMainWindow::paintEvent(arg__1);
}
void PythonQtShell_QMainWindow::resizeEvent(QResizeEvent*  arg__1)
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
  QMainWindow::resizeEvent(arg__1);
}
void PythonQtShell_QMainWindow::showEvent(QShowEvent*  arg__1)
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
  QMainWindow::showEvent(arg__1);
}
QSize  PythonQtShell_QMainWindow::sizeHint() const
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
  return QMainWindow::sizeHint();
}
void PythonQtShell_QMainWindow::tabletEvent(QTabletEvent*  arg__1)
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
  QMainWindow::tabletEvent(arg__1);
}
void PythonQtShell_QMainWindow::timerEvent(QTimerEvent*  arg__1)
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
  QMainWindow::timerEvent(arg__1);
}
void PythonQtShell_QMainWindow::wheelEvent(QWheelEvent*  arg__1)
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
  QMainWindow::wheelEvent(arg__1);
}
QMainWindow* PythonQtWrapper_QMainWindow::new_QMainWindow(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QMainWindow(parent, flags); }

void PythonQtWrapper_QMainWindow::addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget)
{
  ( theWrappedObject->addDockWidget(area, dockwidget));
}

void PythonQtWrapper_QMainWindow::addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget, Qt::Orientation  orientation)
{
  ( theWrappedObject->addDockWidget(area, dockwidget, orientation));
}

void PythonQtWrapper_QMainWindow::addToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar)
{
  ( theWrappedObject->addToolBar(toolbar));
}

void PythonQtWrapper_QMainWindow::addToolBar(QMainWindow* theWrappedObject, Qt::ToolBarArea  area, QToolBar*  toolbar)
{
  ( theWrappedObject->addToolBar(area, toolbar));
}

QToolBar*  PythonQtWrapper_QMainWindow::addToolBar(QMainWindow* theWrappedObject, const QString&  title)
{
  return ( theWrappedObject->addToolBar(title));
}

void PythonQtWrapper_QMainWindow::addToolBarBreak(QMainWindow* theWrappedObject, Qt::ToolBarArea  area)
{
  ( theWrappedObject->addToolBarBreak(area));
}

QWidget*  PythonQtWrapper_QMainWindow::centralWidget(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->centralWidget());
}

void PythonQtWrapper_QMainWindow::contextMenuEvent(QMainWindow* theWrappedObject, QContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QMainWindow*)theWrappedObject)->promoted_contextMenuEvent(event));
}

Qt::DockWidgetArea  PythonQtWrapper_QMainWindow::corner(QMainWindow* theWrappedObject, Qt::Corner  corner) const
{
  return ( theWrappedObject->corner(corner));
}

QMenu*  PythonQtWrapper_QMainWindow::createPopupMenu(QMainWindow* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QMainWindow*)theWrappedObject)->promoted_createPopupMenu());
}

QMainWindow::DockOptions  PythonQtWrapper_QMainWindow::dockOptions(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->dockOptions());
}

Qt::DockWidgetArea  PythonQtWrapper_QMainWindow::dockWidgetArea(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const
{
  return ( theWrappedObject->dockWidgetArea(dockwidget));
}

bool  PythonQtWrapper_QMainWindow::documentMode(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->documentMode());
}

bool  PythonQtWrapper_QMainWindow::event(QMainWindow* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QMainWindow*)theWrappedObject)->promoted_event(event));
}

QSize  PythonQtWrapper_QMainWindow::iconSize(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->iconSize());
}

void PythonQtWrapper_QMainWindow::insertToolBar(QMainWindow* theWrappedObject, QToolBar*  before, QToolBar*  toolbar)
{
  ( theWrappedObject->insertToolBar(before, toolbar));
}

void PythonQtWrapper_QMainWindow::insertToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before)
{
  ( theWrappedObject->insertToolBarBreak(before));
}

bool  PythonQtWrapper_QMainWindow::isAnimated(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->isAnimated());
}

bool  PythonQtWrapper_QMainWindow::isDockNestingEnabled(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->isDockNestingEnabled());
}

bool  PythonQtWrapper_QMainWindow::isSeparator(QMainWindow* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->isSeparator(pos));
}

QMenuBar*  PythonQtWrapper_QMainWindow::menuBar(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->menuBar());
}

QWidget*  PythonQtWrapper_QMainWindow::menuWidget(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->menuWidget());
}

void PythonQtWrapper_QMainWindow::removeDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget)
{
  ( theWrappedObject->removeDockWidget(dockwidget));
}

void PythonQtWrapper_QMainWindow::removeToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar)
{
  ( theWrappedObject->removeToolBar(toolbar));
}

void PythonQtWrapper_QMainWindow::removeToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before)
{
  ( theWrappedObject->removeToolBarBreak(before));
}

bool  PythonQtWrapper_QMainWindow::restoreDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget)
{
  return ( theWrappedObject->restoreDockWidget(dockwidget));
}

bool  PythonQtWrapper_QMainWindow::restoreState(QMainWindow* theWrappedObject, const QByteArray&  state, int  version)
{
  return ( theWrappedObject->restoreState(state, version));
}

QByteArray  PythonQtWrapper_QMainWindow::saveState(QMainWindow* theWrappedObject, int  version) const
{
  return ( theWrappedObject->saveState(version));
}

void PythonQtWrapper_QMainWindow::setCentralWidget(QMainWindow* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->setCentralWidget(widget));
}

void PythonQtWrapper_QMainWindow::setCorner(QMainWindow* theWrappedObject, Qt::Corner  corner, Qt::DockWidgetArea  area)
{
  ( theWrappedObject->setCorner(corner, area));
}

void PythonQtWrapper_QMainWindow::setDockOptions(QMainWindow* theWrappedObject, QMainWindow::DockOptions  options)
{
  ( theWrappedObject->setDockOptions(options));
}

void PythonQtWrapper_QMainWindow::setDocumentMode(QMainWindow* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setDocumentMode(enabled));
}

void PythonQtWrapper_QMainWindow::setIconSize(QMainWindow* theWrappedObject, const QSize&  iconSize)
{
  ( theWrappedObject->setIconSize(iconSize));
}

void PythonQtWrapper_QMainWindow::setMenuBar(QMainWindow* theWrappedObject, QMenuBar*  menubar)
{
  ( theWrappedObject->setMenuBar(menubar));
}

void PythonQtWrapper_QMainWindow::setMenuWidget(QMainWindow* theWrappedObject, QWidget*  menubar)
{
  ( theWrappedObject->setMenuWidget(menubar));
}

void PythonQtWrapper_QMainWindow::setStatusBar(QMainWindow* theWrappedObject, QStatusBar*  statusbar)
{
  ( theWrappedObject->setStatusBar(statusbar));
}

void PythonQtWrapper_QMainWindow::setTabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetAreas  areas, QTabWidget::TabPosition  tabPosition)
{
  ( theWrappedObject->setTabPosition(areas, tabPosition));
}

void PythonQtWrapper_QMainWindow::setTabShape(QMainWindow* theWrappedObject, QTabWidget::TabShape  tabShape)
{
  ( theWrappedObject->setTabShape(tabShape));
}

void PythonQtWrapper_QMainWindow::setToolButtonStyle(QMainWindow* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle)
{
  ( theWrappedObject->setToolButtonStyle(toolButtonStyle));
}

void PythonQtWrapper_QMainWindow::setUnifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject, bool  set)
{
  ( theWrappedObject->setUnifiedTitleAndToolBarOnMac(set));
}

void PythonQtWrapper_QMainWindow::splitDockWidget(QMainWindow* theWrappedObject, QDockWidget*  after, QDockWidget*  dockwidget, Qt::Orientation  orientation)
{
  ( theWrappedObject->splitDockWidget(after, dockwidget, orientation));
}

QStatusBar*  PythonQtWrapper_QMainWindow::statusBar(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->statusBar());
}

QTabWidget::TabPosition  PythonQtWrapper_QMainWindow::tabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area) const
{
  return ( theWrappedObject->tabPosition(area));
}

QTabWidget::TabShape  PythonQtWrapper_QMainWindow::tabShape(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->tabShape());
}

QList<QDockWidget* >  PythonQtWrapper_QMainWindow::tabifiedDockWidgets(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const
{
  return ( theWrappedObject->tabifiedDockWidgets(dockwidget));
}

void PythonQtWrapper_QMainWindow::tabifyDockWidget(QMainWindow* theWrappedObject, QDockWidget*  first, QDockWidget*  second)
{
  ( theWrappedObject->tabifyDockWidget(first, second));
}

Qt::ToolBarArea  PythonQtWrapper_QMainWindow::toolBarArea(QMainWindow* theWrappedObject, QToolBar*  toolbar) const
{
  return ( theWrappedObject->toolBarArea(toolbar));
}

bool  PythonQtWrapper_QMainWindow::toolBarBreak(QMainWindow* theWrappedObject, QToolBar*  toolbar) const
{
  return ( theWrappedObject->toolBarBreak(toolbar));
}

Qt::ToolButtonStyle  PythonQtWrapper_QMainWindow::toolButtonStyle(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->toolButtonStyle());
}

bool  PythonQtWrapper_QMainWindow::unifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject) const
{
  return ( theWrappedObject->unifiedTitleAndToolBarOnMac());
}



QMargins* PythonQtWrapper_QMargins::new_QMargins()
{ 
return new QMargins(); }

QMargins* PythonQtWrapper_QMargins::new_QMargins(int  left, int  top, int  right, int  bottom)
{ 
return new QMargins(left, top, right, bottom); }

int  PythonQtWrapper_QMargins::bottom(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

bool  PythonQtWrapper_QMargins::isNull(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

int  PythonQtWrapper_QMargins::left(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

bool  PythonQtWrapper_QMargins::__eq__(QMargins* theWrappedObject, const QMargins&  m2)
{
  return ( (*theWrappedObject)== m2);
}

int  PythonQtWrapper_QMargins::right(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

void PythonQtWrapper_QMargins::setBottom(QMargins* theWrappedObject, int  bottom)
{
  ( theWrappedObject->setBottom(bottom));
}

void PythonQtWrapper_QMargins::setLeft(QMargins* theWrappedObject, int  left)
{
  ( theWrappedObject->setLeft(left));
}

void PythonQtWrapper_QMargins::setRight(QMargins* theWrappedObject, int  right)
{
  ( theWrappedObject->setRight(right));
}

void PythonQtWrapper_QMargins::setTop(QMargins* theWrappedObject, int  top)
{
  ( theWrappedObject->setTop(top));
}

int  PythonQtWrapper_QMargins::top(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

QString PythonQtWrapper_QMargins::py_toString(QMargins* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4()
{ 
return new QMatrix4x4(); }

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4(const QMatrix&  matrix)
{ 
return new QMatrix4x4(matrix); }

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4(const QTransform&  transform)
{ 
return new QMatrix4x4(transform); }

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4(const qreal*  values)
{ 
return new QMatrix4x4(values); }

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4(const qreal*  values, int  cols, int  rows)
{ 
return new QMatrix4x4(values, cols, rows); }

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4(qreal  m11, qreal  m12, qreal  m13, qreal  m14, qreal  m21, qreal  m22, qreal  m23, qreal  m24, qreal  m31, qreal  m32, qreal  m33, qreal  m34, qreal  m41, qreal  m42, qreal  m43, qreal  m44)
{ 
return new QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44); }

QVector4D  PythonQtWrapper_QMatrix4x4::column(QMatrix4x4* theWrappedObject, int  index) const
{
  return ( theWrappedObject->column(index));
}

const qreal*  PythonQtWrapper_QMatrix4x4::constData(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->constData());
}

void PythonQtWrapper_QMatrix4x4::copyDataTo(QMatrix4x4* theWrappedObject, qreal*  values) const
{
  ( theWrappedObject->copyDataTo(values));
}

qreal*  PythonQtWrapper_QMatrix4x4::data(QMatrix4x4* theWrappedObject)
{
  return ( theWrappedObject->data());
}

qreal  PythonQtWrapper_QMatrix4x4::determinant(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->determinant());
}

void PythonQtWrapper_QMatrix4x4::fill(QMatrix4x4* theWrappedObject, qreal  value)
{
  ( theWrappedObject->fill(value));
}

void PythonQtWrapper_QMatrix4x4::flipCoordinates(QMatrix4x4* theWrappedObject)
{
  ( theWrappedObject->flipCoordinates());
}

void PythonQtWrapper_QMatrix4x4::frustum(QMatrix4x4* theWrappedObject, qreal  left, qreal  right, qreal  bottom, qreal  top, qreal  nearPlane, qreal  farPlane)
{
  ( theWrappedObject->frustum(left, right, bottom, top, nearPlane, farPlane));
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::inverted(QMatrix4x4* theWrappedObject, bool*  invertible) const
{
  return ( theWrappedObject->inverted(invertible));
}

bool  PythonQtWrapper_QMatrix4x4::isIdentity(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->isIdentity());
}

void PythonQtWrapper_QMatrix4x4::lookAt(QMatrix4x4* theWrappedObject, const QVector3D&  eye, const QVector3D&  center, const QVector3D&  up)
{
  ( theWrappedObject->lookAt(eye, center, up));
}

QPoint  PythonQtWrapper_QMatrix4x4::map(QMatrix4x4* theWrappedObject, const QPoint&  point) const
{
  return ( theWrappedObject->map(point));
}

QPointF  PythonQtWrapper_QMatrix4x4::map(QMatrix4x4* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->map(point));
}

QVector3D  PythonQtWrapper_QMatrix4x4::map(QMatrix4x4* theWrappedObject, const QVector3D&  point) const
{
  return ( theWrappedObject->map(point));
}

QVector4D  PythonQtWrapper_QMatrix4x4::map(QMatrix4x4* theWrappedObject, const QVector4D&  point) const
{
  return ( theWrappedObject->map(point));
}

QRect  PythonQtWrapper_QMatrix4x4::mapRect(QMatrix4x4* theWrappedObject, const QRect&  rect) const
{
  return ( theWrappedObject->mapRect(rect));
}

QRectF  PythonQtWrapper_QMatrix4x4::mapRect(QMatrix4x4* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRect(rect));
}

QVector3D  PythonQtWrapper_QMatrix4x4::mapVector(QMatrix4x4* theWrappedObject, const QVector3D&  vector) const
{
  return ( theWrappedObject->mapVector(vector));
}

bool  PythonQtWrapper_QMatrix4x4::__ne__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const
{
  return ( (*theWrappedObject)!= other);
}

qreal*  PythonQtWrapper_QMatrix4x4::operator_cast_(QMatrix4x4* theWrappedObject, int  row, int  column)
{
  return &( theWrappedObject->operator()(row, column));
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2)
{
  return ( (*theWrappedObject)* m2);
}

QPoint  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, const QPoint&  point)
{
  return ( (*theWrappedObject)* point);
}

QPointF  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, const QPointF&  point)
{
  return ( (*theWrappedObject)* point);
}

QVector3D  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, const QVector3D&  vector)
{
  return ( (*theWrappedObject)* vector);
}

QVector4D  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, const QVector4D&  vector)
{
  return ( (*theWrappedObject)* vector);
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, qreal  factor)
{
  return ( (*theWrappedObject)* factor);
}

QMatrix4x4*  PythonQtWrapper_QMatrix4x4::__imul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other)
{
  return &( (*theWrappedObject)*= other);
}

QMatrix4x4*  PythonQtWrapper_QMatrix4x4::__imul__(QMatrix4x4* theWrappedObject, qreal  factor)
{
  return &( (*theWrappedObject)*= factor);
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::__add__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2)
{
  return ( (*theWrappedObject)+ m2);
}

QMatrix4x4*  PythonQtWrapper_QMatrix4x4::__iadd__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other)
{
  return &( (*theWrappedObject)+= other);
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::__sub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2)
{
  return ( (*theWrappedObject)- m2);
}

QMatrix4x4*  PythonQtWrapper_QMatrix4x4::__isub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other)
{
  return &( (*theWrappedObject)-= other);
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::__div__(QMatrix4x4* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QMatrix4x4*  PythonQtWrapper_QMatrix4x4::__idiv__(QMatrix4x4* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QMatrix4x4::writeTo(QMatrix4x4* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QMatrix4x4::__eq__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QMatrix4x4::readFrom(QMatrix4x4* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QMatrix4x4::optimize(QMatrix4x4* theWrappedObject)
{
  ( theWrappedObject->optimize());
}

void PythonQtWrapper_QMatrix4x4::ortho(QMatrix4x4* theWrappedObject, const QRect&  rect)
{
  ( theWrappedObject->ortho(rect));
}

void PythonQtWrapper_QMatrix4x4::ortho(QMatrix4x4* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->ortho(rect));
}

void PythonQtWrapper_QMatrix4x4::ortho(QMatrix4x4* theWrappedObject, qreal  left, qreal  right, qreal  bottom, qreal  top, qreal  nearPlane, qreal  farPlane)
{
  ( theWrappedObject->ortho(left, right, bottom, top, nearPlane, farPlane));
}

void PythonQtWrapper_QMatrix4x4::perspective(QMatrix4x4* theWrappedObject, qreal  angle, qreal  aspect, qreal  nearPlane, qreal  farPlane)
{
  ( theWrappedObject->perspective(angle, aspect, nearPlane, farPlane));
}

void PythonQtWrapper_QMatrix4x4::rotate(QMatrix4x4* theWrappedObject, const QQuaternion&  quaternion)
{
  ( theWrappedObject->rotate(quaternion));
}

void PythonQtWrapper_QMatrix4x4::rotate(QMatrix4x4* theWrappedObject, qreal  angle, const QVector3D&  vector)
{
  ( theWrappedObject->rotate(angle, vector));
}

void PythonQtWrapper_QMatrix4x4::rotate(QMatrix4x4* theWrappedObject, qreal  angle, qreal  x, qreal  y, qreal  z)
{
  ( theWrappedObject->rotate(angle, x, y, z));
}

QVector4D  PythonQtWrapper_QMatrix4x4::row(QMatrix4x4* theWrappedObject, int  index) const
{
  return ( theWrappedObject->row(index));
}

void PythonQtWrapper_QMatrix4x4::scale(QMatrix4x4* theWrappedObject, const QVector3D&  vector)
{
  ( theWrappedObject->scale(vector));
}

void PythonQtWrapper_QMatrix4x4::scale(QMatrix4x4* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->scale(factor));
}

void PythonQtWrapper_QMatrix4x4::scale(QMatrix4x4* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->scale(x, y));
}

void PythonQtWrapper_QMatrix4x4::scale(QMatrix4x4* theWrappedObject, qreal  x, qreal  y, qreal  z)
{
  ( theWrappedObject->scale(x, y, z));
}

void PythonQtWrapper_QMatrix4x4::setColumn(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value)
{
  ( theWrappedObject->setColumn(index, value));
}

void PythonQtWrapper_QMatrix4x4::setRow(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value)
{
  ( theWrappedObject->setRow(index, value));
}

void PythonQtWrapper_QMatrix4x4::setToIdentity(QMatrix4x4* theWrappedObject)
{
  ( theWrappedObject->setToIdentity());
}

QMatrix  PythonQtWrapper_QMatrix4x4::toAffine(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->toAffine());
}

QTransform  PythonQtWrapper_QMatrix4x4::toTransform(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->toTransform());
}

QTransform  PythonQtWrapper_QMatrix4x4::toTransform(QMatrix4x4* theWrappedObject, qreal  distanceToPlane) const
{
  return ( theWrappedObject->toTransform(distanceToPlane));
}

void PythonQtWrapper_QMatrix4x4::translate(QMatrix4x4* theWrappedObject, const QVector3D&  vector)
{
  ( theWrappedObject->translate(vector));
}

void PythonQtWrapper_QMatrix4x4::translate(QMatrix4x4* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->translate(x, y));
}

void PythonQtWrapper_QMatrix4x4::translate(QMatrix4x4* theWrappedObject, qreal  x, qreal  y, qreal  z)
{
  ( theWrappedObject->translate(x, y, z));
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::transposed(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->transposed());
}

QString PythonQtWrapper_QMatrix4x4::py_toString(QMatrix4x4* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QMdiArea::~PythonQtShell_QMdiArea() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMdiArea::actionEvent(QActionEvent*  arg__1)
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
  QMdiArea::actionEvent(arg__1);
}
void PythonQtShell_QMdiArea::changeEvent(QEvent*  arg__1)
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
  QMdiArea::changeEvent(arg__1);
}
void PythonQtShell_QMdiArea::childEvent(QChildEvent*  childEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&childEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiArea::childEvent(childEvent0);
}
void PythonQtShell_QMdiArea::closeEvent(QCloseEvent*  arg__1)
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
  QMdiArea::closeEvent(arg__1);
}
void PythonQtShell_QMdiArea::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QMdiArea::contextMenuEvent(arg__1);
}
void PythonQtShell_QMdiArea::customEvent(QEvent*  arg__1)
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
  QMdiArea::customEvent(arg__1);
}
int  PythonQtShell_QMdiArea::devType() const
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
  return QMdiArea::devType();
}
void PythonQtShell_QMdiArea::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QMdiArea::dragEnterEvent(arg__1);
}
void PythonQtShell_QMdiArea::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QMdiArea::dragLeaveEvent(arg__1);
}
void PythonQtShell_QMdiArea::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QMdiArea::dragMoveEvent(arg__1);
}
void PythonQtShell_QMdiArea::dropEvent(QDropEvent*  arg__1)
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
  QMdiArea::dropEvent(arg__1);
}
void PythonQtShell_QMdiArea::enterEvent(QEvent*  arg__1)
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
  QMdiArea::enterEvent(arg__1);
}
bool  PythonQtShell_QMdiArea::event(QEvent*  event0)
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
  return QMdiArea::event(event0);
}
bool  PythonQtShell_QMdiArea::eventFilter(QObject*  object0, QEvent*  event1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
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
  return QMdiArea::eventFilter(object0, event1);
}
void PythonQtShell_QMdiArea::focusInEvent(QFocusEvent*  arg__1)
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
  QMdiArea::focusInEvent(arg__1);
}
bool  PythonQtShell_QMdiArea::focusNextPrevChild(bool  next0)
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
  return QMdiArea::focusNextPrevChild(next0);
}
void PythonQtShell_QMdiArea::focusOutEvent(QFocusEvent*  arg__1)
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
  QMdiArea::focusOutEvent(arg__1);
}
int  PythonQtShell_QMdiArea::heightForWidth(int  arg__1) const
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
  return QMdiArea::heightForWidth(arg__1);
}
void PythonQtShell_QMdiArea::hideEvent(QHideEvent*  arg__1)
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
  QMdiArea::hideEvent(arg__1);
}
void PythonQtShell_QMdiArea::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMdiArea::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMdiArea::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMdiArea::inputMethodQuery(arg__1);
}
void PythonQtShell_QMdiArea::keyPressEvent(QKeyEvent*  arg__1)
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
  QMdiArea::keyPressEvent(arg__1);
}
void PythonQtShell_QMdiArea::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QMdiArea::keyReleaseEvent(arg__1);
}
void PythonQtShell_QMdiArea::languageChange()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("languageChange");
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
  QMdiArea::languageChange();
}
void PythonQtShell_QMdiArea::leaveEvent(QEvent*  arg__1)
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
  QMdiArea::leaveEvent(arg__1);
}
int  PythonQtShell_QMdiArea::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMdiArea::metric(arg__1);
}
void PythonQtShell_QMdiArea::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QMdiArea::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QMdiArea::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QMdiArea::mouseMoveEvent(arg__1);
}
void PythonQtShell_QMdiArea::mousePressEvent(QMouseEvent*  arg__1)
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
  QMdiArea::mousePressEvent(arg__1);
}
void PythonQtShell_QMdiArea::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QMdiArea::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QMdiArea::moveEvent(QMoveEvent*  arg__1)
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
  QMdiArea::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QMdiArea::paintEngine() const
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
  return QMdiArea::paintEngine();
}
void PythonQtShell_QMdiArea::paintEvent(QPaintEvent*  paintEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("paintEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&paintEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiArea::paintEvent(paintEvent0);
}
void PythonQtShell_QMdiArea::resizeEvent(QResizeEvent*  resizeEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resizeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&resizeEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiArea::resizeEvent(resizeEvent0);
}
void PythonQtShell_QMdiArea::scrollContentsBy(int  dx0, int  dy1)
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
  QMdiArea::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QMdiArea::showEvent(QShowEvent*  showEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("showEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&showEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiArea::showEvent(showEvent0);
}
void PythonQtShell_QMdiArea::tabletEvent(QTabletEvent*  arg__1)
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
  QMdiArea::tabletEvent(arg__1);
}
void PythonQtShell_QMdiArea::timerEvent(QTimerEvent*  timerEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&timerEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiArea::timerEvent(timerEvent0);
}
bool  PythonQtShell_QMdiArea::viewportEvent(QEvent*  event0)
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
  return QMdiArea::viewportEvent(event0);
}
void PythonQtShell_QMdiArea::wheelEvent(QWheelEvent*  arg__1)
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
  QMdiArea::wheelEvent(arg__1);
}
QMdiArea* PythonQtWrapper_QMdiArea::new_QMdiArea(QWidget*  parent)
{ 
return new PythonQtShell_QMdiArea(parent); }

QMdiArea::WindowOrder  PythonQtWrapper_QMdiArea::activationOrder(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->activationOrder());
}

QMdiSubWindow*  PythonQtWrapper_QMdiArea::activeSubWindow(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->activeSubWindow());
}

QMdiSubWindow*  PythonQtWrapper_QMdiArea::addSubWindow(QMdiArea* theWrappedObject, QWidget*  widget, Qt::WindowFlags  flags)
{
  return ( theWrappedObject->addSubWindow(widget, flags));
}

QBrush  PythonQtWrapper_QMdiArea::background(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->background());
}

void PythonQtWrapper_QMdiArea::childEvent(QMdiArea* theWrappedObject, QChildEvent*  childEvent)
{
  ( ((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->promoted_childEvent(childEvent));
}

QMdiSubWindow*  PythonQtWrapper_QMdiArea::currentSubWindow(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->currentSubWindow());
}

bool  PythonQtWrapper_QMdiArea::documentMode(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->documentMode());
}

bool  PythonQtWrapper_QMdiArea::event(QMdiArea* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->promoted_event(event));
}

bool  PythonQtWrapper_QMdiArea::eventFilter(QMdiArea* theWrappedObject, QObject*  object, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->promoted_eventFilter(object, event));
}

QSize  PythonQtWrapper_QMdiArea::minimumSizeHint(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QMdiArea::paintEvent(QMdiArea* theWrappedObject, QPaintEvent*  paintEvent)
{
  ( ((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->promoted_paintEvent(paintEvent));
}

void PythonQtWrapper_QMdiArea::removeSubWindow(QMdiArea* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->removeSubWindow(widget));
}

void PythonQtWrapper_QMdiArea::resizeEvent(QMdiArea* theWrappedObject, QResizeEvent*  resizeEvent)
{
  ( ((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->promoted_resizeEvent(resizeEvent));
}

void PythonQtWrapper_QMdiArea::scrollContentsBy(QMdiArea* theWrappedObject, int  dx, int  dy)
{
  ( ((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->promoted_scrollContentsBy(dx, dy));
}

void PythonQtWrapper_QMdiArea::setActivationOrder(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order)
{
  ( theWrappedObject->setActivationOrder(order));
}

void PythonQtWrapper_QMdiArea::setBackground(QMdiArea* theWrappedObject, const QBrush&  background)
{
  ( theWrappedObject->setBackground(background));
}

void PythonQtWrapper_QMdiArea::setDocumentMode(QMdiArea* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setDocumentMode(enabled));
}

void PythonQtWrapper_QMdiArea::setOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  option, bool  on)
{
  ( theWrappedObject->setOption(option, on));
}

void PythonQtWrapper_QMdiArea::setTabPosition(QMdiArea* theWrappedObject, QTabWidget::TabPosition  position)
{
  ( theWrappedObject->setTabPosition(position));
}

void PythonQtWrapper_QMdiArea::setTabShape(QMdiArea* theWrappedObject, QTabWidget::TabShape  shape)
{
  ( theWrappedObject->setTabShape(shape));
}

void PythonQtWrapper_QMdiArea::setTabsClosable(QMdiArea* theWrappedObject, bool  closable)
{
  ( theWrappedObject->setTabsClosable(closable));
}

void PythonQtWrapper_QMdiArea::setTabsMovable(QMdiArea* theWrappedObject, bool  movable)
{
  ( theWrappedObject->setTabsMovable(movable));
}

void PythonQtWrapper_QMdiArea::setViewMode(QMdiArea* theWrappedObject, QMdiArea::ViewMode  mode)
{
  ( theWrappedObject->setViewMode(mode));
}

void PythonQtWrapper_QMdiArea::showEvent(QMdiArea* theWrappedObject, QShowEvent*  showEvent)
{
  ( ((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->promoted_showEvent(showEvent));
}

QSize  PythonQtWrapper_QMdiArea::sizeHint(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QList<QMdiSubWindow* >  PythonQtWrapper_QMdiArea::subWindowList(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order) const
{
  return ( theWrappedObject->subWindowList(order));
}

QTabWidget::TabPosition  PythonQtWrapper_QMdiArea::tabPosition(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->tabPosition());
}

QTabWidget::TabShape  PythonQtWrapper_QMdiArea::tabShape(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->tabShape());
}

bool  PythonQtWrapper_QMdiArea::tabsClosable(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->tabsClosable());
}

bool  PythonQtWrapper_QMdiArea::tabsMovable(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->tabsMovable());
}

bool  PythonQtWrapper_QMdiArea::testOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  opton) const
{
  return ( theWrappedObject->testOption(opton));
}

void PythonQtWrapper_QMdiArea::timerEvent(QMdiArea* theWrappedObject, QTimerEvent*  timerEvent)
{
  ( ((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->promoted_timerEvent(timerEvent));
}

QMdiArea::ViewMode  PythonQtWrapper_QMdiArea::viewMode(QMdiArea* theWrappedObject) const
{
  return ( theWrappedObject->viewMode());
}

bool  PythonQtWrapper_QMdiArea::viewportEvent(QMdiArea* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->promoted_viewportEvent(event));
}



PythonQtShell_QMdiSubWindow::~PythonQtShell_QMdiSubWindow() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMdiSubWindow::actionEvent(QActionEvent*  arg__1)
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
  QMdiSubWindow::actionEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::changeEvent(QEvent*  changeEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("changeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&changeEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::changeEvent(changeEvent0);
}
void PythonQtShell_QMdiSubWindow::childEvent(QChildEvent*  childEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&childEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::childEvent(childEvent0);
}
void PythonQtShell_QMdiSubWindow::closeEvent(QCloseEvent*  closeEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("closeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&closeEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::closeEvent(closeEvent0);
}
void PythonQtShell_QMdiSubWindow::contextMenuEvent(QContextMenuEvent*  contextMenuEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("contextMenuEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&contextMenuEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::contextMenuEvent(contextMenuEvent0);
}
void PythonQtShell_QMdiSubWindow::customEvent(QEvent*  arg__1)
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
  QMdiSubWindow::customEvent(arg__1);
}
int  PythonQtShell_QMdiSubWindow::devType() const
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
  return QMdiSubWindow::devType();
}
void PythonQtShell_QMdiSubWindow::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QMdiSubWindow::dragEnterEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QMdiSubWindow::dragLeaveEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QMdiSubWindow::dragMoveEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::dropEvent(QDropEvent*  arg__1)
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
  QMdiSubWindow::dropEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::enterEvent(QEvent*  arg__1)
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
  QMdiSubWindow::enterEvent(arg__1);
}
bool  PythonQtShell_QMdiSubWindow::event(QEvent*  event0)
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
  return QMdiSubWindow::event(event0);
}
bool  PythonQtShell_QMdiSubWindow::eventFilter(QObject*  object0, QEvent*  event1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
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
  return QMdiSubWindow::eventFilter(object0, event1);
}
void PythonQtShell_QMdiSubWindow::focusInEvent(QFocusEvent*  focusInEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusInEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&focusInEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::focusInEvent(focusInEvent0);
}
bool  PythonQtShell_QMdiSubWindow::focusNextPrevChild(bool  next0)
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
  return QMdiSubWindow::focusNextPrevChild(next0);
}
void PythonQtShell_QMdiSubWindow::focusOutEvent(QFocusEvent*  focusOutEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("focusOutEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&focusOutEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::focusOutEvent(focusOutEvent0);
}
int  PythonQtShell_QMdiSubWindow::heightForWidth(int  arg__1) const
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
  return QMdiSubWindow::heightForWidth(arg__1);
}
void PythonQtShell_QMdiSubWindow::hideEvent(QHideEvent*  hideEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hideEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&hideEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::hideEvent(hideEvent0);
}
void PythonQtShell_QMdiSubWindow::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMdiSubWindow::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMdiSubWindow::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMdiSubWindow::inputMethodQuery(arg__1);
}
void PythonQtShell_QMdiSubWindow::keyPressEvent(QKeyEvent*  keyEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keyPressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&keyEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::keyPressEvent(keyEvent0);
}
void PythonQtShell_QMdiSubWindow::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QMdiSubWindow::keyReleaseEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::languageChange()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("languageChange");
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
  QMdiSubWindow::languageChange();
}
void PythonQtShell_QMdiSubWindow::leaveEvent(QEvent*  leaveEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("leaveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&leaveEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::leaveEvent(leaveEvent0);
}
int  PythonQtShell_QMdiSubWindow::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMdiSubWindow::metric(arg__1);
}
void PythonQtShell_QMdiSubWindow::mouseDoubleClickEvent(QMouseEvent*  mouseEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&mouseEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::mouseDoubleClickEvent(mouseEvent0);
}
void PythonQtShell_QMdiSubWindow::mouseMoveEvent(QMouseEvent*  mouseEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseMoveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&mouseEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::mouseMoveEvent(mouseEvent0);
}
void PythonQtShell_QMdiSubWindow::mousePressEvent(QMouseEvent*  mouseEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mousePressEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&mouseEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::mousePressEvent(mouseEvent0);
}
void PythonQtShell_QMdiSubWindow::mouseReleaseEvent(QMouseEvent*  mouseEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mouseReleaseEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&mouseEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::mouseReleaseEvent(mouseEvent0);
}
void PythonQtShell_QMdiSubWindow::moveEvent(QMoveEvent*  moveEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&moveEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::moveEvent(moveEvent0);
}
QPaintEngine*  PythonQtShell_QMdiSubWindow::paintEngine() const
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
  return QMdiSubWindow::paintEngine();
}
void PythonQtShell_QMdiSubWindow::paintEvent(QPaintEvent*  paintEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("paintEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&paintEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::paintEvent(paintEvent0);
}
void PythonQtShell_QMdiSubWindow::resizeEvent(QResizeEvent*  resizeEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resizeEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&resizeEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::resizeEvent(resizeEvent0);
}
void PythonQtShell_QMdiSubWindow::showEvent(QShowEvent*  showEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("showEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&showEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::showEvent(showEvent0);
}
void PythonQtShell_QMdiSubWindow::tabletEvent(QTabletEvent*  arg__1)
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
  QMdiSubWindow::tabletEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::timerEvent(QTimerEvent*  timerEvent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&timerEvent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMdiSubWindow::timerEvent(timerEvent0);
}
void PythonQtShell_QMdiSubWindow::wheelEvent(QWheelEvent*  arg__1)
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
  QMdiSubWindow::wheelEvent(arg__1);
}
QMdiSubWindow* PythonQtWrapper_QMdiSubWindow::new_QMdiSubWindow(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QMdiSubWindow(parent, flags); }

void PythonQtWrapper_QMdiSubWindow::changeEvent(QMdiSubWindow* theWrappedObject, QEvent*  changeEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_changeEvent(changeEvent));
}

void PythonQtWrapper_QMdiSubWindow::childEvent(QMdiSubWindow* theWrappedObject, QChildEvent*  childEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_childEvent(childEvent));
}

void PythonQtWrapper_QMdiSubWindow::closeEvent(QMdiSubWindow* theWrappedObject, QCloseEvent*  closeEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_closeEvent(closeEvent));
}

void PythonQtWrapper_QMdiSubWindow::contextMenuEvent(QMdiSubWindow* theWrappedObject, QContextMenuEvent*  contextMenuEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_contextMenuEvent(contextMenuEvent));
}

bool  PythonQtWrapper_QMdiSubWindow::event(QMdiSubWindow* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_event(event));
}

bool  PythonQtWrapper_QMdiSubWindow::eventFilter(QMdiSubWindow* theWrappedObject, QObject*  object, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_eventFilter(object, event));
}

void PythonQtWrapper_QMdiSubWindow::focusInEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusInEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_focusInEvent(focusInEvent));
}

void PythonQtWrapper_QMdiSubWindow::focusOutEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusOutEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_focusOutEvent(focusOutEvent));
}

void PythonQtWrapper_QMdiSubWindow::hideEvent(QMdiSubWindow* theWrappedObject, QHideEvent*  hideEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_hideEvent(hideEvent));
}

bool  PythonQtWrapper_QMdiSubWindow::isShaded(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->isShaded());
}

void PythonQtWrapper_QMdiSubWindow::keyPressEvent(QMdiSubWindow* theWrappedObject, QKeyEvent*  keyEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_keyPressEvent(keyEvent));
}

int  PythonQtWrapper_QMdiSubWindow::keyboardPageStep(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->keyboardPageStep());
}

int  PythonQtWrapper_QMdiSubWindow::keyboardSingleStep(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->keyboardSingleStep());
}

void PythonQtWrapper_QMdiSubWindow::leaveEvent(QMdiSubWindow* theWrappedObject, QEvent*  leaveEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_leaveEvent(leaveEvent));
}

QWidget*  PythonQtWrapper_QMdiSubWindow::maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->maximizedButtonsWidget());
}

QWidget*  PythonQtWrapper_QMdiSubWindow::maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->maximizedSystemMenuIconWidget());
}

QMdiArea*  PythonQtWrapper_QMdiSubWindow::mdiArea(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->mdiArea());
}

QSize  PythonQtWrapper_QMdiSubWindow::minimumSizeHint(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QMdiSubWindow::mouseDoubleClickEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_mouseDoubleClickEvent(mouseEvent));
}

void PythonQtWrapper_QMdiSubWindow::mouseMoveEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_mouseMoveEvent(mouseEvent));
}

void PythonQtWrapper_QMdiSubWindow::mousePressEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_mousePressEvent(mouseEvent));
}

void PythonQtWrapper_QMdiSubWindow::mouseReleaseEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_mouseReleaseEvent(mouseEvent));
}

void PythonQtWrapper_QMdiSubWindow::moveEvent(QMdiSubWindow* theWrappedObject, QMoveEvent*  moveEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_moveEvent(moveEvent));
}

void PythonQtWrapper_QMdiSubWindow::paintEvent(QMdiSubWindow* theWrappedObject, QPaintEvent*  paintEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_paintEvent(paintEvent));
}

void PythonQtWrapper_QMdiSubWindow::resizeEvent(QMdiSubWindow* theWrappedObject, QResizeEvent*  resizeEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_resizeEvent(resizeEvent));
}

void PythonQtWrapper_QMdiSubWindow::setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step)
{
  ( theWrappedObject->setKeyboardPageStep(step));
}

void PythonQtWrapper_QMdiSubWindow::setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step)
{
  ( theWrappedObject->setKeyboardSingleStep(step));
}

void PythonQtWrapper_QMdiSubWindow::setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on)
{
  ( theWrappedObject->setOption(option, on));
}

void PythonQtWrapper_QMdiSubWindow::setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu)
{
  ( theWrappedObject->setSystemMenu(systemMenu));
}

void PythonQtWrapper_QMdiSubWindow::setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->setWidget(widget));
}

void PythonQtWrapper_QMdiSubWindow::showEvent(QMdiSubWindow* theWrappedObject, QShowEvent*  showEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_showEvent(showEvent));
}

QSize  PythonQtWrapper_QMdiSubWindow::sizeHint(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QMenu*  PythonQtWrapper_QMdiSubWindow::systemMenu(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->systemMenu());
}

bool  PythonQtWrapper_QMdiSubWindow::testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const
{
  return ( theWrappedObject->testOption(arg__1));
}

void PythonQtWrapper_QMdiSubWindow::timerEvent(QMdiSubWindow* theWrappedObject, QTimerEvent*  timerEvent)
{
  ( ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_timerEvent(timerEvent));
}

QWidget*  PythonQtWrapper_QMdiSubWindow::widget(QMdiSubWindow* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}



PythonQtShell_QMenu::~PythonQtShell_QMenu() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMenu::actionEvent(QActionEvent*  arg__1)
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
  QMenu::actionEvent(arg__1);
}
void PythonQtShell_QMenu::changeEvent(QEvent*  arg__1)
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
  QMenu::changeEvent(arg__1);
}
void PythonQtShell_QMenu::childEvent(QChildEvent*  arg__1)
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
  QMenu::childEvent(arg__1);
}
void PythonQtShell_QMenu::closeEvent(QCloseEvent*  arg__1)
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
  QMenu::closeEvent(arg__1);
}
void PythonQtShell_QMenu::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QMenu::contextMenuEvent(arg__1);
}
void PythonQtShell_QMenu::customEvent(QEvent*  arg__1)
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
  QMenu::customEvent(arg__1);
}
int  PythonQtShell_QMenu::devType() const
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
  return QMenu::devType();
}
void PythonQtShell_QMenu::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QMenu::dragEnterEvent(arg__1);
}
void PythonQtShell_QMenu::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QMenu::dragLeaveEvent(arg__1);
}
void PythonQtShell_QMenu::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QMenu::dragMoveEvent(arg__1);
}
void PythonQtShell_QMenu::dropEvent(QDropEvent*  arg__1)
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
  QMenu::dropEvent(arg__1);
}
void PythonQtShell_QMenu::enterEvent(QEvent*  arg__1)
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
  QMenu::enterEvent(arg__1);
}
bool  PythonQtShell_QMenu::event(QEvent*  arg__1)
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
  return QMenu::event(arg__1);
}
bool  PythonQtShell_QMenu::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QMenu::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QMenu::focusInEvent(QFocusEvent*  arg__1)
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
  QMenu::focusInEvent(arg__1);
}
bool  PythonQtShell_QMenu::focusNextPrevChild(bool  next0)
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
  return QMenu::focusNextPrevChild(next0);
}
void PythonQtShell_QMenu::focusOutEvent(QFocusEvent*  arg__1)
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
  QMenu::focusOutEvent(arg__1);
}
int  PythonQtShell_QMenu::heightForWidth(int  arg__1) const
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
  return QMenu::heightForWidth(arg__1);
}
void PythonQtShell_QMenu::hideEvent(QHideEvent*  arg__1)
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
  QMenu::hideEvent(arg__1);
}
void PythonQtShell_QMenu::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMenu::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMenu::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMenu::inputMethodQuery(arg__1);
}
void PythonQtShell_QMenu::keyPressEvent(QKeyEvent*  arg__1)
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
  QMenu::keyPressEvent(arg__1);
}
void PythonQtShell_QMenu::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QMenu::keyReleaseEvent(arg__1);
}
void PythonQtShell_QMenu::languageChange()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("languageChange");
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
  QMenu::languageChange();
}
void PythonQtShell_QMenu::leaveEvent(QEvent*  arg__1)
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
  QMenu::leaveEvent(arg__1);
}
int  PythonQtShell_QMenu::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMenu::metric(arg__1);
}
QSize  PythonQtShell_QMenu::minimumSizeHint() const
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
  return QMenu::minimumSizeHint();
}
void PythonQtShell_QMenu::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QMenu::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QMenu::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QMenu::mouseMoveEvent(arg__1);
}
void PythonQtShell_QMenu::mousePressEvent(QMouseEvent*  arg__1)
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
  QMenu::mousePressEvent(arg__1);
}
void PythonQtShell_QMenu::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QMenu::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QMenu::moveEvent(QMoveEvent*  arg__1)
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
  QMenu::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QMenu::paintEngine() const
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
  return QMenu::paintEngine();
}
void PythonQtShell_QMenu::paintEvent(QPaintEvent*  arg__1)
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
  QMenu::paintEvent(arg__1);
}
void PythonQtShell_QMenu::resizeEvent(QResizeEvent*  arg__1)
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
  QMenu::resizeEvent(arg__1);
}
void PythonQtShell_QMenu::showEvent(QShowEvent*  arg__1)
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
  QMenu::showEvent(arg__1);
}
void PythonQtShell_QMenu::tabletEvent(QTabletEvent*  arg__1)
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
  QMenu::tabletEvent(arg__1);
}
void PythonQtShell_QMenu::timerEvent(QTimerEvent*  arg__1)
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
  QMenu::timerEvent(arg__1);
}
void PythonQtShell_QMenu::wheelEvent(QWheelEvent*  arg__1)
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
  QMenu::wheelEvent(arg__1);
}
QMenu* PythonQtWrapper_QMenu::new_QMenu(QWidget*  parent)
{ 
return new PythonQtShell_QMenu(parent); }

QMenu* PythonQtWrapper_QMenu::new_QMenu(const QString&  title, QWidget*  parent)
{ 
return new PythonQtShell_QMenu(title, parent); }

QAction*  PythonQtWrapper_QMenu::actionAt(QMenu* theWrappedObject, const QPoint&  arg__1) const
{
  return ( theWrappedObject->actionAt(arg__1));
}

void PythonQtWrapper_QMenu::actionEvent(QMenu* theWrappedObject, QActionEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_actionEvent(arg__1));
}

QRect  PythonQtWrapper_QMenu::actionGeometry(QMenu* theWrappedObject, QAction*  arg__1) const
{
  return ( theWrappedObject->actionGeometry(arg__1));
}

QAction*  PythonQtWrapper_QMenu::activeAction(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->activeAction());
}

void PythonQtWrapper_QMenu::addAction(QMenu* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->addAction(action));
}

QAction*  PythonQtWrapper_QMenu::addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text)
{
  return ( theWrappedObject->addAction(icon, text));
}

QAction*  PythonQtWrapper_QMenu::addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member, const QKeySequence&  shortcut)
{
  return ( theWrappedObject->addAction(icon, text, receiver, member, shortcut));
}

QAction*  PythonQtWrapper_QMenu::addAction(QMenu* theWrappedObject, const QString&  text)
{
  return ( theWrappedObject->addAction(text));
}

QAction*  PythonQtWrapper_QMenu::addAction(QMenu* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member, const QKeySequence&  shortcut)
{
  return ( theWrappedObject->addAction(text, receiver, member, shortcut));
}

QAction*  PythonQtWrapper_QMenu::addMenu(QMenu* theWrappedObject, QMenu*  menu)
{
  return ( theWrappedObject->addMenu(menu));
}

QMenu*  PythonQtWrapper_QMenu::addMenu(QMenu* theWrappedObject, const QIcon&  icon, const QString&  title)
{
  return ( theWrappedObject->addMenu(icon, title));
}

QMenu*  PythonQtWrapper_QMenu::addMenu(QMenu* theWrappedObject, const QString&  title)
{
  return ( theWrappedObject->addMenu(title));
}

QAction*  PythonQtWrapper_QMenu::addSeparator(QMenu* theWrappedObject)
{
  return ( theWrappedObject->addSeparator());
}

void PythonQtWrapper_QMenu::changeEvent(QMenu* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_changeEvent(arg__1));
}

void PythonQtWrapper_QMenu::clear(QMenu* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QMenu::columnCount(QMenu* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_columnCount());
}

QAction*  PythonQtWrapper_QMenu::defaultAction(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->defaultAction());
}

void PythonQtWrapper_QMenu::enterEvent(QMenu* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_enterEvent(arg__1));
}

bool  PythonQtWrapper_QMenu::event(QMenu* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_event(arg__1));
}

QAction*  PythonQtWrapper_QMenu::exec(QMenu* theWrappedObject)
{
  return ( theWrappedObject->exec());
}

QAction*  PythonQtWrapper_QMenu::static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at)
{
  return (QMenu::exec(actions, pos, at));
}

QAction*  PythonQtWrapper_QMenu::static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at, QWidget*  parent)
{
  return (QMenu::exec(actions, pos, at, parent));
}

QAction*  PythonQtWrapper_QMenu::exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at)
{
  return ( theWrappedObject->exec(pos, at));
}

bool  PythonQtWrapper_QMenu::focusNextPrevChild(QMenu* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QMenu::hideEvent(QMenu* theWrappedObject, QHideEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_hideEvent(arg__1));
}

void PythonQtWrapper_QMenu::hideTearOffMenu(QMenu* theWrappedObject)
{
  ( theWrappedObject->hideTearOffMenu());
}

QIcon  PythonQtWrapper_QMenu::icon(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

void PythonQtWrapper_QMenu::initStyleOption(QMenu* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_initStyleOption(option, action));
}

QAction*  PythonQtWrapper_QMenu::insertMenu(QMenu* theWrappedObject, QAction*  before, QMenu*  menu)
{
  return ( theWrappedObject->insertMenu(before, menu));
}

QAction*  PythonQtWrapper_QMenu::insertSeparator(QMenu* theWrappedObject, QAction*  before)
{
  return ( theWrappedObject->insertSeparator(before));
}

bool  PythonQtWrapper_QMenu::isEmpty(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QMenu::isTearOffEnabled(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->isTearOffEnabled());
}

bool  PythonQtWrapper_QMenu::isTearOffMenuVisible(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->isTearOffMenuVisible());
}

void PythonQtWrapper_QMenu::keyPressEvent(QMenu* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_keyPressEvent(arg__1));
}

void PythonQtWrapper_QMenu::leaveEvent(QMenu* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_leaveEvent(arg__1));
}

QAction*  PythonQtWrapper_QMenu::menuAction(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->menuAction());
}

void PythonQtWrapper_QMenu::mouseMoveEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_mouseMoveEvent(arg__1));
}

void PythonQtWrapper_QMenu::mousePressEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_mousePressEvent(arg__1));
}

void PythonQtWrapper_QMenu::mouseReleaseEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1));
}

void PythonQtWrapper_QMenu::paintEvent(QMenu* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_paintEvent(arg__1));
}

void PythonQtWrapper_QMenu::popup(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at)
{
  ( theWrappedObject->popup(pos, at));
}

bool  PythonQtWrapper_QMenu::separatorsCollapsible(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->separatorsCollapsible());
}

void PythonQtWrapper_QMenu::setActiveAction(QMenu* theWrappedObject, QAction*  act)
{
  ( theWrappedObject->setActiveAction(act));
}

void PythonQtWrapper_QMenu::setDefaultAction(QMenu* theWrappedObject, QAction*  arg__1)
{
  ( theWrappedObject->setDefaultAction(arg__1));
}

void PythonQtWrapper_QMenu::setIcon(QMenu* theWrappedObject, const QIcon&  icon)
{
  ( theWrappedObject->setIcon(icon));
}

void PythonQtWrapper_QMenu::setSeparatorsCollapsible(QMenu* theWrappedObject, bool  collapse)
{
  ( theWrappedObject->setSeparatorsCollapsible(collapse));
}

void PythonQtWrapper_QMenu::setTearOffEnabled(QMenu* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setTearOffEnabled(arg__1));
}

void PythonQtWrapper_QMenu::setTitle(QMenu* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setTitle(title));
}

QSize  PythonQtWrapper_QMenu::sizeHint(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

void PythonQtWrapper_QMenu::timerEvent(QMenu* theWrappedObject, QTimerEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_timerEvent(arg__1));
}

QString  PythonQtWrapper_QMenu::title(QMenu* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

void PythonQtWrapper_QMenu::wheelEvent(QMenu* theWrappedObject, QWheelEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenu*)theWrappedObject)->promoted_wheelEvent(arg__1));
}



PythonQtShell_QMenuBar::~PythonQtShell_QMenuBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMenuBar::actionEvent(QActionEvent*  arg__1)
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
  QMenuBar::actionEvent(arg__1);
}
void PythonQtShell_QMenuBar::changeEvent(QEvent*  arg__1)
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
  QMenuBar::changeEvent(arg__1);
}
void PythonQtShell_QMenuBar::childEvent(QChildEvent*  arg__1)
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
  QMenuBar::childEvent(arg__1);
}
void PythonQtShell_QMenuBar::closeEvent(QCloseEvent*  arg__1)
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
  QMenuBar::closeEvent(arg__1);
}
void PythonQtShell_QMenuBar::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QMenuBar::contextMenuEvent(arg__1);
}
void PythonQtShell_QMenuBar::customEvent(QEvent*  arg__1)
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
  QMenuBar::customEvent(arg__1);
}
int  PythonQtShell_QMenuBar::devType() const
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
  return QMenuBar::devType();
}
void PythonQtShell_QMenuBar::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QMenuBar::dragEnterEvent(arg__1);
}
void PythonQtShell_QMenuBar::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QMenuBar::dragLeaveEvent(arg__1);
}
void PythonQtShell_QMenuBar::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QMenuBar::dragMoveEvent(arg__1);
}
void PythonQtShell_QMenuBar::dropEvent(QDropEvent*  arg__1)
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
  QMenuBar::dropEvent(arg__1);
}
void PythonQtShell_QMenuBar::enterEvent(QEvent*  arg__1)
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
  QMenuBar::enterEvent(arg__1);
}
bool  PythonQtShell_QMenuBar::event(QEvent*  arg__1)
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
  return QMenuBar::event(arg__1);
}
bool  PythonQtShell_QMenuBar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QMenuBar::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QMenuBar::focusInEvent(QFocusEvent*  arg__1)
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
  QMenuBar::focusInEvent(arg__1);
}
bool  PythonQtShell_QMenuBar::focusNextPrevChild(bool  next0)
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
  return QMenuBar::focusNextPrevChild(next0);
}
void PythonQtShell_QMenuBar::focusOutEvent(QFocusEvent*  arg__1)
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
  QMenuBar::focusOutEvent(arg__1);
}
int  PythonQtShell_QMenuBar::heightForWidth(int  arg__1) const
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
  return QMenuBar::heightForWidth(arg__1);
}
void PythonQtShell_QMenuBar::hideEvent(QHideEvent*  arg__1)
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
  QMenuBar::hideEvent(arg__1);
}
void PythonQtShell_QMenuBar::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMenuBar::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMenuBar::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMenuBar::inputMethodQuery(arg__1);
}
void PythonQtShell_QMenuBar::keyPressEvent(QKeyEvent*  arg__1)
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
  QMenuBar::keyPressEvent(arg__1);
}
void PythonQtShell_QMenuBar::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QMenuBar::keyReleaseEvent(arg__1);
}
void PythonQtShell_QMenuBar::languageChange()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("languageChange");
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
  QMenuBar::languageChange();
}
void PythonQtShell_QMenuBar::leaveEvent(QEvent*  arg__1)
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
  QMenuBar::leaveEvent(arg__1);
}
int  PythonQtShell_QMenuBar::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMenuBar::metric(arg__1);
}
void PythonQtShell_QMenuBar::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QMenuBar::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QMenuBar::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QMenuBar::mouseMoveEvent(arg__1);
}
void PythonQtShell_QMenuBar::mousePressEvent(QMouseEvent*  arg__1)
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
  QMenuBar::mousePressEvent(arg__1);
}
void PythonQtShell_QMenuBar::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QMenuBar::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QMenuBar::moveEvent(QMoveEvent*  arg__1)
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
  QMenuBar::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QMenuBar::paintEngine() const
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
  return QMenuBar::paintEngine();
}
void PythonQtShell_QMenuBar::paintEvent(QPaintEvent*  arg__1)
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
  QMenuBar::paintEvent(arg__1);
}
void PythonQtShell_QMenuBar::resizeEvent(QResizeEvent*  arg__1)
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
  QMenuBar::resizeEvent(arg__1);
}
void PythonQtShell_QMenuBar::setVisible(bool  visible0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QMenuBar::setVisible(visible0);
}
void PythonQtShell_QMenuBar::showEvent(QShowEvent*  arg__1)
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
  QMenuBar::showEvent(arg__1);
}
void PythonQtShell_QMenuBar::tabletEvent(QTabletEvent*  arg__1)
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
  QMenuBar::tabletEvent(arg__1);
}
void PythonQtShell_QMenuBar::timerEvent(QTimerEvent*  arg__1)
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
  QMenuBar::timerEvent(arg__1);
}
void PythonQtShell_QMenuBar::wheelEvent(QWheelEvent*  arg__1)
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
  QMenuBar::wheelEvent(arg__1);
}
QMenuBar* PythonQtWrapper_QMenuBar::new_QMenuBar(QWidget*  parent)
{ 
return new PythonQtShell_QMenuBar(parent); }

QAction*  PythonQtWrapper_QMenuBar::actionAt(QMenuBar* theWrappedObject, const QPoint&  arg__1) const
{
  return ( theWrappedObject->actionAt(arg__1));
}

void PythonQtWrapper_QMenuBar::actionEvent(QMenuBar* theWrappedObject, QActionEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_actionEvent(arg__1));
}

QRect  PythonQtWrapper_QMenuBar::actionGeometry(QMenuBar* theWrappedObject, QAction*  arg__1) const
{
  return ( theWrappedObject->actionGeometry(arg__1));
}

QAction*  PythonQtWrapper_QMenuBar::activeAction(QMenuBar* theWrappedObject) const
{
  return ( theWrappedObject->activeAction());
}

void PythonQtWrapper_QMenuBar::addAction(QMenuBar* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->addAction(action));
}

QAction*  PythonQtWrapper_QMenuBar::addAction(QMenuBar* theWrappedObject, const QString&  text)
{
  return ( theWrappedObject->addAction(text));
}

QAction*  PythonQtWrapper_QMenuBar::addAction(QMenuBar* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member)
{
  return ( theWrappedObject->addAction(text, receiver, member));
}

QAction*  PythonQtWrapper_QMenuBar::addMenu(QMenuBar* theWrappedObject, QMenu*  menu)
{
  return ( theWrappedObject->addMenu(menu));
}

QMenu*  PythonQtWrapper_QMenuBar::addMenu(QMenuBar* theWrappedObject, const QIcon&  icon, const QString&  title)
{
  return ( theWrappedObject->addMenu(icon, title));
}

QMenu*  PythonQtWrapper_QMenuBar::addMenu(QMenuBar* theWrappedObject, const QString&  title)
{
  return ( theWrappedObject->addMenu(title));
}

QAction*  PythonQtWrapper_QMenuBar::addSeparator(QMenuBar* theWrappedObject)
{
  return ( theWrappedObject->addSeparator());
}

void PythonQtWrapper_QMenuBar::changeEvent(QMenuBar* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_changeEvent(arg__1));
}

void PythonQtWrapper_QMenuBar::clear(QMenuBar* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QWidget*  PythonQtWrapper_QMenuBar::cornerWidget(QMenuBar* theWrappedObject, Qt::Corner  corner) const
{
  return ( theWrappedObject->cornerWidget(corner));
}

bool  PythonQtWrapper_QMenuBar::event(QMenuBar* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QMenuBar::eventFilter(QMenuBar* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
  return ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_eventFilter(arg__1, arg__2));
}

void PythonQtWrapper_QMenuBar::focusInEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_focusInEvent(arg__1));
}

void PythonQtWrapper_QMenuBar::focusOutEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_focusOutEvent(arg__1));
}

int  PythonQtWrapper_QMenuBar::heightForWidth(QMenuBar* theWrappedObject, int  arg__1) const
{
  return ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_heightForWidth(arg__1));
}

void PythonQtWrapper_QMenuBar::initStyleOption(QMenuBar* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_initStyleOption(option, action));
}

QAction*  PythonQtWrapper_QMenuBar::insertMenu(QMenuBar* theWrappedObject, QAction*  before, QMenu*  menu)
{
  return ( theWrappedObject->insertMenu(before, menu));
}

QAction*  PythonQtWrapper_QMenuBar::insertSeparator(QMenuBar* theWrappedObject, QAction*  before)
{
  return ( theWrappedObject->insertSeparator(before));
}

bool  PythonQtWrapper_QMenuBar::isDefaultUp(QMenuBar* theWrappedObject) const
{
  return ( theWrappedObject->isDefaultUp());
}

bool  PythonQtWrapper_QMenuBar::isNativeMenuBar(QMenuBar* theWrappedObject) const
{
  return ( theWrappedObject->isNativeMenuBar());
}

void PythonQtWrapper_QMenuBar::keyPressEvent(QMenuBar* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_keyPressEvent(arg__1));
}

void PythonQtWrapper_QMenuBar::leaveEvent(QMenuBar* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_leaveEvent(arg__1));
}

QSize  PythonQtWrapper_QMenuBar::minimumSizeHint(QMenuBar* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QMenuBar::mouseMoveEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_mouseMoveEvent(arg__1));
}

void PythonQtWrapper_QMenuBar::mousePressEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_mousePressEvent(arg__1));
}

void PythonQtWrapper_QMenuBar::mouseReleaseEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1));
}

void PythonQtWrapper_QMenuBar::paintEvent(QMenuBar* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_paintEvent(arg__1));
}

void PythonQtWrapper_QMenuBar::resizeEvent(QMenuBar* theWrappedObject, QResizeEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_resizeEvent(arg__1));
}

void PythonQtWrapper_QMenuBar::setActiveAction(QMenuBar* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->setActiveAction(action));
}

void PythonQtWrapper_QMenuBar::setCornerWidget(QMenuBar* theWrappedObject, QWidget*  w, Qt::Corner  corner)
{
  ( theWrappedObject->setCornerWidget(w, corner));
}

void PythonQtWrapper_QMenuBar::setDefaultUp(QMenuBar* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setDefaultUp(arg__1));
}

void PythonQtWrapper_QMenuBar::setNativeMenuBar(QMenuBar* theWrappedObject, bool  nativeMenuBar)
{
  ( theWrappedObject->setNativeMenuBar(nativeMenuBar));
}

void PythonQtWrapper_QMenuBar::setVisible(QMenuBar* theWrappedObject, bool  visible)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_setVisible(visible));
}

QSize  PythonQtWrapper_QMenuBar::sizeHint(QMenuBar* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

void PythonQtWrapper_QMenuBar::timerEvent(QMenuBar* theWrappedObject, QTimerEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->promoted_timerEvent(arg__1));
}



PythonQtShell_QMessageBox::~PythonQtShell_QMessageBox() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMessageBox::accept()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QMessageBox::accept();
}
void PythonQtShell_QMessageBox::actionEvent(QActionEvent*  arg__1)
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
  QMessageBox::actionEvent(arg__1);
}
void PythonQtShell_QMessageBox::changeEvent(QEvent*  event0)
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
  QMessageBox::changeEvent(event0);
}
void PythonQtShell_QMessageBox::childEvent(QChildEvent*  arg__1)
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
  QMessageBox::childEvent(arg__1);
}
void PythonQtShell_QMessageBox::closeEvent(QCloseEvent*  event0)
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
  QMessageBox::closeEvent(event0);
}
void PythonQtShell_QMessageBox::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QMessageBox::contextMenuEvent(arg__1);
}
void PythonQtShell_QMessageBox::customEvent(QEvent*  arg__1)
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
  QMessageBox::customEvent(arg__1);
}
int  PythonQtShell_QMessageBox::devType() const
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
  return QMessageBox::devType();
}
void PythonQtShell_QMessageBox::done(int  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("done");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMessageBox::done(arg__1);
}
void PythonQtShell_QMessageBox::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QMessageBox::dragEnterEvent(arg__1);
}
void PythonQtShell_QMessageBox::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QMessageBox::dragLeaveEvent(arg__1);
}
void PythonQtShell_QMessageBox::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QMessageBox::dragMoveEvent(arg__1);
}
void PythonQtShell_QMessageBox::dropEvent(QDropEvent*  arg__1)
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
  QMessageBox::dropEvent(arg__1);
}
void PythonQtShell_QMessageBox::enterEvent(QEvent*  arg__1)
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
  QMessageBox::enterEvent(arg__1);
}
bool  PythonQtShell_QMessageBox::event(QEvent*  e0)
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
  return QMessageBox::event(e0);
}
bool  PythonQtShell_QMessageBox::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QMessageBox::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QMessageBox::focusInEvent(QFocusEvent*  arg__1)
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
  QMessageBox::focusInEvent(arg__1);
}
bool  PythonQtShell_QMessageBox::focusNextPrevChild(bool  next0)
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
  return QMessageBox::focusNextPrevChild(next0);
}
void PythonQtShell_QMessageBox::focusOutEvent(QFocusEvent*  arg__1)
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
  QMessageBox::focusOutEvent(arg__1);
}
int  PythonQtShell_QMessageBox::heightForWidth(int  arg__1) const
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
  return QMessageBox::heightForWidth(arg__1);
}
void PythonQtShell_QMessageBox::hideEvent(QHideEvent*  arg__1)
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
  QMessageBox::hideEvent(arg__1);
}
void PythonQtShell_QMessageBox::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QMessageBox::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMessageBox::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QMessageBox::inputMethodQuery(arg__1);
}
void PythonQtShell_QMessageBox::keyPressEvent(QKeyEvent*  event0)
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
  QMessageBox::keyPressEvent(event0);
}
void PythonQtShell_QMessageBox::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QMessageBox::keyReleaseEvent(arg__1);
}
void PythonQtShell_QMessageBox::languageChange()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("languageChange");
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
  QMessageBox::languageChange();
}
void PythonQtShell_QMessageBox::leaveEvent(QEvent*  arg__1)
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
  QMessageBox::leaveEvent(arg__1);
}
int  PythonQtShell_QMessageBox::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QMessageBox::metric(arg__1);
}
void PythonQtShell_QMessageBox::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QMessageBox::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QMessageBox::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QMessageBox::mouseMoveEvent(arg__1);
}
void PythonQtShell_QMessageBox::mousePressEvent(QMouseEvent*  arg__1)
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
  QMessageBox::mousePressEvent(arg__1);
}
void PythonQtShell_QMessageBox::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QMessageBox::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QMessageBox::moveEvent(QMoveEvent*  arg__1)
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
  QMessageBox::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QMessageBox::paintEngine() const
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
  return QMessageBox::paintEngine();
}
void PythonQtShell_QMessageBox::paintEvent(QPaintEvent*  arg__1)
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
  QMessageBox::paintEvent(arg__1);
}
void PythonQtShell_QMessageBox::reject()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QMessageBox::reject();
}
void PythonQtShell_QMessageBox::resizeEvent(QResizeEvent*  event0)
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
  QMessageBox::resizeEvent(event0);
}
void PythonQtShell_QMessageBox::showEvent(QShowEvent*  event0)
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
  QMessageBox::showEvent(event0);
}
void PythonQtShell_QMessageBox::tabletEvent(QTabletEvent*  arg__1)
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
  QMessageBox::tabletEvent(arg__1);
}
void PythonQtShell_QMessageBox::timerEvent(QTimerEvent*  arg__1)
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
  QMessageBox::timerEvent(arg__1);
}
void PythonQtShell_QMessageBox::wheelEvent(QWheelEvent*  arg__1)
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
  QMessageBox::wheelEvent(arg__1);
}
QMessageBox* PythonQtWrapper_QMessageBox::new_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QMessageBox(icon, title, text, buttons, parent, flags); }

QMessageBox* PythonQtWrapper_QMessageBox::new_QMessageBox(QWidget*  parent)
{ 
return new PythonQtShell_QMessageBox(parent); }

void PythonQtWrapper_QMessageBox::static_QMessageBox_about(QWidget*  parent, const QString&  title, const QString&  text)
{
  (QMessageBox::about(parent, title, text));
}

void PythonQtWrapper_QMessageBox::static_QMessageBox_aboutQt(QWidget*  parent, const QString&  title)
{
  (QMessageBox::aboutQt(parent, title));
}

void PythonQtWrapper_QMessageBox::addButton(QMessageBox* theWrappedObject, QAbstractButton*  button, QMessageBox::ButtonRole  role)
{
  ( theWrappedObject->addButton(button, role));
}

QPushButton*  PythonQtWrapper_QMessageBox::addButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button)
{
  return ( theWrappedObject->addButton(button));
}

QPushButton*  PythonQtWrapper_QMessageBox::addButton(QMessageBox* theWrappedObject, const QString&  text, QMessageBox::ButtonRole  role)
{
  return ( theWrappedObject->addButton(text, role));
}

QAbstractButton*  PythonQtWrapper_QMessageBox::button(QMessageBox* theWrappedObject, QMessageBox::StandardButton  which) const
{
  return ( theWrappedObject->button(which));
}

QMessageBox::ButtonRole  PythonQtWrapper_QMessageBox::buttonRole(QMessageBox* theWrappedObject, QAbstractButton*  button) const
{
  return ( theWrappedObject->buttonRole(button));
}

QList<QAbstractButton* >  PythonQtWrapper_QMessageBox::buttons(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

void PythonQtWrapper_QMessageBox::changeEvent(QMessageBox* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->promoted_changeEvent(event));
}

QAbstractButton*  PythonQtWrapper_QMessageBox::clickedButton(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->clickedButton());
}

void PythonQtWrapper_QMessageBox::closeEvent(QMessageBox* theWrappedObject, QCloseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->promoted_closeEvent(event));
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
  return (QMessageBox::critical(parent, title, text, buttons, defaultButton));
}

int  PythonQtWrapper_QMessageBox::static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
  return (QMessageBox::critical(parent, title, text, button0, button1));
}

QPushButton*  PythonQtWrapper_QMessageBox::defaultButton(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->defaultButton());
}

QString  PythonQtWrapper_QMessageBox::detailedText(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->detailedText());
}

QAbstractButton*  PythonQtWrapper_QMessageBox::escapeButton(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->escapeButton());
}

bool  PythonQtWrapper_QMessageBox::event(QMessageBox* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->promoted_event(e));
}

QMessageBox::Icon  PythonQtWrapper_QMessageBox::icon(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

QPixmap  PythonQtWrapper_QMessageBox::iconPixmap(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->iconPixmap());
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
  return (QMessageBox::information(parent, title, text, buttons, defaultButton));
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
  return (QMessageBox::information(parent, title, text, button0, button1));
}

QString  PythonQtWrapper_QMessageBox::informativeText(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->informativeText());
}

void PythonQtWrapper_QMessageBox::keyPressEvent(QMessageBox* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QMessageBox::open(QMessageBox* theWrappedObject)
{
  ( theWrappedObject->open());
}

void PythonQtWrapper_QMessageBox::open(QMessageBox* theWrappedObject, QObject*  receiver, const char*  member)
{
  ( theWrappedObject->open(receiver, member));
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
  return (QMessageBox::question(parent, title, text, buttons, defaultButton));
}

int  PythonQtWrapper_QMessageBox::static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
  return (QMessageBox::question(parent, title, text, button0, button1));
}

void PythonQtWrapper_QMessageBox::removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button)
{
  ( theWrappedObject->removeButton(button));
}

void PythonQtWrapper_QMessageBox::resizeEvent(QMessageBox* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QMessageBox::setDefaultButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button)
{
  ( theWrappedObject->setDefaultButton(button));
}

void PythonQtWrapper_QMessageBox::setDefaultButton(QMessageBox* theWrappedObject, QPushButton*  button)
{
  ( theWrappedObject->setDefaultButton(button));
}

void PythonQtWrapper_QMessageBox::setDetailedText(QMessageBox* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setDetailedText(text));
}

void PythonQtWrapper_QMessageBox::setEscapeButton(QMessageBox* theWrappedObject, QAbstractButton*  button)
{
  ( theWrappedObject->setEscapeButton(button));
}

void PythonQtWrapper_QMessageBox::setEscapeButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button)
{
  ( theWrappedObject->setEscapeButton(button));
}

void PythonQtWrapper_QMessageBox::setIcon(QMessageBox* theWrappedObject, QMessageBox::Icon  arg__1)
{
  ( theWrappedObject->setIcon(arg__1));
}

void PythonQtWrapper_QMessageBox::setIconPixmap(QMessageBox* theWrappedObject, const QPixmap&  pixmap)
{
  ( theWrappedObject->setIconPixmap(pixmap));
}

void PythonQtWrapper_QMessageBox::setInformativeText(QMessageBox* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setInformativeText(text));
}

void PythonQtWrapper_QMessageBox::setStandardButtons(QMessageBox* theWrappedObject, QMessageBox::StandardButtons  buttons)
{
  ( theWrappedObject->setStandardButtons(buttons));
}

void PythonQtWrapper_QMessageBox::setText(QMessageBox* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

void PythonQtWrapper_QMessageBox::setTextFormat(QMessageBox* theWrappedObject, Qt::TextFormat  format)
{
  ( theWrappedObject->setTextFormat(format));
}

void PythonQtWrapper_QMessageBox::showEvent(QMessageBox* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->promoted_showEvent(event));
}

QSize  PythonQtWrapper_QMessageBox::sizeHint(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::standardButton(QMessageBox* theWrappedObject, QAbstractButton*  button) const
{
  return ( theWrappedObject->standardButton(button));
}

QMessageBox::StandardButtons  PythonQtWrapper_QMessageBox::standardButtons(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->standardButtons());
}

QString  PythonQtWrapper_QMessageBox::text(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

Qt::TextFormat  PythonQtWrapper_QMessageBox::textFormat(QMessageBox* theWrappedObject) const
{
  return ( theWrappedObject->textFormat());
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
  return (QMessageBox::warning(parent, title, text, buttons, defaultButton));
}

int  PythonQtWrapper_QMessageBox::static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
  return (QMessageBox::warning(parent, title, text, button0, button1));
}



PythonQtShell_QMotifStyle::~PythonQtShell_QMotifStyle() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMotifStyle::childEvent(QChildEvent*  arg__1)
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
  QMotifStyle::childEvent(arg__1);
}
void PythonQtShell_QMotifStyle::customEvent(QEvent*  arg__1)
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
  QMotifStyle::customEvent(arg__1);
}
void PythonQtShell_QMotifStyle::drawComplexControl(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QPainter*  p2, const QWidget*  w3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawComplexControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&cc0, (void*)&opt1, (void*)&p2, (void*)&w3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QMotifStyle::drawComplexControl(cc0, opt1, p2, w3);
}
void PythonQtShell_QMotifStyle::drawControl(QStyle::ControlElement  element0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3) const
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
  QMotifStyle::drawControl(element0, opt1, p2, w3);
}
void PythonQtShell_QMotifStyle::drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3) const
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
  QMotifStyle::drawItemPixmap(painter0, rect1, alignment2, pixmap3);
}
void PythonQtShell_QMotifStyle::drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, QPalette::ColorRole  textRole6) const
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
  QMotifStyle::drawItemText(painter0, rect1, flags2, pal3, enabled4, text5, textRole6);
}
void PythonQtShell_QMotifStyle::drawPrimitive(QStyle::PrimitiveElement  pe0, const QStyleOption*  opt1, QPainter*  p2, const QWidget*  w3) const
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
  QMotifStyle::drawPrimitive(pe0, opt1, p2, w3);
}
bool  PythonQtShell_QMotifStyle::event(QEvent*  arg__1)
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
  return QMotifStyle::event(arg__1);
}
bool  PythonQtShell_QMotifStyle::eventFilter(QObject*  o0, QEvent*  e1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&o0, (void*)&e1};
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
  return QMotifStyle::eventFilter(o0, e1);
}
QPixmap  PythonQtShell_QMotifStyle::generatedIconPixmap(QIcon::Mode  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2) const
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
  return QMotifStyle::generatedIconPixmap(iconMode0, pixmap1, opt2);
}
QStyle::SubControl  PythonQtShell_QMotifStyle::hitTestComplexControl(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, const QPoint&  pt2, const QWidget*  w3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitTestComplexControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QStyle::SubControl" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "const QPoint&" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QStyle::SubControl returnValue;
    void* args[5] = {NULL, (void*)&cc0, (void*)&opt1, (void*)&pt2, (void*)&w3};
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
  return QMotifStyle::hitTestComplexControl(cc0, opt1, pt2, w3);
}
QRect  PythonQtShell_QMotifStyle::itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2) const
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
  return QMotifStyle::itemPixmapRect(r0, flags1, pixmap2);
}
int  PythonQtShell_QMotifStyle::pixelMetric(QStyle::PixelMetric  metric0, const QStyleOption*  option1, const QWidget*  widget2) const
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
  return QMotifStyle::pixelMetric(metric0, option1, widget2);
}
void PythonQtShell_QMotifStyle::polish(QApplication*  arg__1)
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
  QMotifStyle::polish(arg__1);
}
void PythonQtShell_QMotifStyle::polish(QPalette&  arg__1)
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
  QMotifStyle::polish(arg__1);
}
void PythonQtShell_QMotifStyle::polish(QWidget*  arg__1)
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
  QMotifStyle::polish(arg__1);
}
QSize  PythonQtShell_QMotifStyle::sizeFromContents(QStyle::ContentsType  ct0, const QStyleOption*  opt1, const QSize&  contentsSize2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sizeFromContents");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSize" , "QStyle::ContentsType" , "const QStyleOption*" , "const QSize&" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QSize returnValue;
    void* args[5] = {NULL, (void*)&ct0, (void*)&opt1, (void*)&contentsSize2, (void*)&widget3};
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
  return QMotifStyle::sizeFromContents(ct0, opt1, contentsSize2, widget3);
}
QPalette  PythonQtShell_QMotifStyle::standardPalette() const
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
  return QMotifStyle::standardPalette();
}
QPixmap  PythonQtShell_QMotifStyle::standardPixmap(QStyle::StandardPixmap  standardPixmap0, const QStyleOption*  opt1, const QWidget*  widget2) const
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
int  PythonQtShell_QMotifStyle::styleHint(QStyle::StyleHint  hint0, const QStyleOption*  opt1, const QWidget*  widget2, QStyleHintReturn*  returnData3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("styleHint");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QStyle::StyleHint" , "const QStyleOption*" , "const QWidget*" , "QStyleHintReturn*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      int returnValue;
    void* args[5] = {NULL, (void*)&hint0, (void*)&opt1, (void*)&widget2, (void*)&returnData3};
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
  return QMotifStyle::styleHint(hint0, opt1, widget2, returnData3);
}
QRect  PythonQtShell_QMotifStyle::subControlRect(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QStyle::SubControl  sc2, const QWidget*  widget3) const
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
  return QMotifStyle::subControlRect(cc0, opt1, sc2, widget3);
}
QRect  PythonQtShell_QMotifStyle::subElementRect(QStyle::SubElement  r0, const QStyleOption*  opt1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("subElementRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRect" , "QStyle::SubElement" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QRect returnValue;
    void* args[4] = {NULL, (void*)&r0, (void*)&opt1, (void*)&widget2};
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
  return QMotifStyle::subElementRect(r0, opt1, widget2);
}
void PythonQtShell_QMotifStyle::timerEvent(QTimerEvent*  event0)
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
  QMotifStyle::timerEvent(event0);
}
void PythonQtShell_QMotifStyle::unpolish(QApplication*  arg__1)
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
  QMotifStyle::unpolish(arg__1);
}
void PythonQtShell_QMotifStyle::unpolish(QWidget*  arg__1)
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
  QMotifStyle::unpolish(arg__1);
}
QMotifStyle* PythonQtWrapper_QMotifStyle::new_QMotifStyle(bool  useHighlightCols)
{ 
return new PythonQtShell_QMotifStyle(useHighlightCols); }

void PythonQtWrapper_QMotifStyle::drawComplexControl(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w) const
{
  ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_drawComplexControl(cc, opt, p, w));
}

void PythonQtWrapper_QMotifStyle::drawControl(QMotifStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
  ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_drawControl(element, opt, p, w));
}

void PythonQtWrapper_QMotifStyle::drawPrimitive(QMotifStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w) const
{
  ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_drawPrimitive(pe, opt, p, w));
}

bool  PythonQtWrapper_QMotifStyle::event(QMotifStyle* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QMotifStyle::eventFilter(QMotifStyle* theWrappedObject, QObject*  o, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_eventFilter(o, e));
}

int  PythonQtWrapper_QMotifStyle::pixelMetric(QMotifStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_pixelMetric(metric, option, widget));
}

void PythonQtWrapper_QMotifStyle::polish(QMotifStyle* theWrappedObject, QApplication*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_polish(arg__1));
}

void PythonQtWrapper_QMotifStyle::polish(QMotifStyle* theWrappedObject, QPalette&  arg__1)
{
  ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_polish(arg__1));
}

void PythonQtWrapper_QMotifStyle::polish(QMotifStyle* theWrappedObject, QWidget*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_polish(arg__1));
}

void PythonQtWrapper_QMotifStyle::setUseHighlightColors(QMotifStyle* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setUseHighlightColors(arg__1));
}

QSize  PythonQtWrapper_QMotifStyle::sizeFromContents(QMotifStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_sizeFromContents(ct, opt, contentsSize, widget));
}

QPalette  PythonQtWrapper_QMotifStyle::standardPalette(QMotifStyle* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_standardPalette());
}

int  PythonQtWrapper_QMotifStyle::styleHint(QMotifStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
  return ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_styleHint(hint, opt, widget, returnData));
}

QRect  PythonQtWrapper_QMotifStyle::subControlRect(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_subControlRect(cc, opt, sc, widget));
}

QRect  PythonQtWrapper_QMotifStyle::subElementRect(QMotifStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_subElementRect(r, opt, widget));
}

void PythonQtWrapper_QMotifStyle::timerEvent(QMotifStyle* theWrappedObject, QTimerEvent*  event)
{
  ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_timerEvent(event));
}

void PythonQtWrapper_QMotifStyle::unpolish(QMotifStyle* theWrappedObject, QApplication*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_unpolish(arg__1));
}

void PythonQtWrapper_QMotifStyle::unpolish(QMotifStyle* theWrappedObject, QWidget*  arg__1)
{
  ( ((PythonQtPublicPromoter_QMotifStyle*)theWrappedObject)->promoted_unpolish(arg__1));
}

bool  PythonQtWrapper_QMotifStyle::useHighlightColors(QMotifStyle* theWrappedObject) const
{
  return ( theWrappedObject->useHighlightColors());
}



PythonQtShell_QMouseEvent::~PythonQtShell_QMouseEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMouseEvent* PythonQtWrapper_QMouseEvent::new_QMouseEvent(QEvent::Type  type, const QPoint&  pos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QMouseEvent(type, pos, button, buttons, modifiers); }

QMouseEvent* PythonQtWrapper_QMouseEvent::new_QMouseEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QMouseEvent(type, pos, globalPos, button, buttons, modifiers); }

Qt::MouseButton  PythonQtWrapper_QMouseEvent::button(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->button());
}

Qt::MouseButtons  PythonQtWrapper_QMouseEvent::buttons(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

QMouseEvent*  PythonQtWrapper_QMouseEvent::static_QMouseEvent_createExtendedMouseEvent(QEvent::Type  type, const QPointF&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers)
{
  return (QMouseEvent::createExtendedMouseEvent(type, pos, globalPos, button, buttons, modifiers));
}

const QPoint*  PythonQtWrapper_QMouseEvent::globalPos(QMouseEvent* theWrappedObject) const
{
  return &( theWrappedObject->globalPos());
}

int  PythonQtWrapper_QMouseEvent::globalX(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalX());
}

int  PythonQtWrapper_QMouseEvent::globalY(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalY());
}

bool  PythonQtWrapper_QMouseEvent::hasExtendedInfo(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->hasExtendedInfo());
}

const QPoint*  PythonQtWrapper_QMouseEvent::pos(QMouseEvent* theWrappedObject) const
{
  return &( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QMouseEvent::posF(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->posF());
}

int  PythonQtWrapper_QMouseEvent::x(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QMouseEvent::y(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



PythonQtShell_QMouseEventTransition::~PythonQtShell_QMouseEventTransition() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMouseEventTransition::childEvent(QChildEvent*  arg__1)
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
  QMouseEventTransition::childEvent(arg__1);
}
void PythonQtShell_QMouseEventTransition::customEvent(QEvent*  arg__1)
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
  QMouseEventTransition::customEvent(arg__1);
}
bool  PythonQtShell_QMouseEventTransition::event(QEvent*  e0)
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
  return QMouseEventTransition::event(e0);
}
bool  PythonQtShell_QMouseEventTransition::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QMouseEventTransition::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QMouseEventTransition::eventTest(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventTest");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("eventTest", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QMouseEventTransition::eventTest(event0);
}
void PythonQtShell_QMouseEventTransition::onTransition(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("onTransition");
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
  QMouseEventTransition::onTransition(event0);
}
void PythonQtShell_QMouseEventTransition::timerEvent(QTimerEvent*  arg__1)
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
  QMouseEventTransition::timerEvent(arg__1);
}
QMouseEventTransition* PythonQtWrapper_QMouseEventTransition::new_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState)
{ 
return new PythonQtShell_QMouseEventTransition(object, type, button, sourceState); }

QMouseEventTransition* PythonQtWrapper_QMouseEventTransition::new_QMouseEventTransition(QState*  sourceState)
{ 
return new PythonQtShell_QMouseEventTransition(sourceState); }

Qt::MouseButton  PythonQtWrapper_QMouseEventTransition::button(QMouseEventTransition* theWrappedObject) const
{
  return ( theWrappedObject->button());
}

bool  PythonQtWrapper_QMouseEventTransition::eventTest(QMouseEventTransition* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QMouseEventTransition*)theWrappedObject)->promoted_eventTest(event));
}

QPainterPath  PythonQtWrapper_QMouseEventTransition::hitTestPath(QMouseEventTransition* theWrappedObject) const
{
  return ( theWrappedObject->hitTestPath());
}

Qt::KeyboardModifiers  PythonQtWrapper_QMouseEventTransition::modifierMask(QMouseEventTransition* theWrappedObject) const
{
  return ( theWrappedObject->modifierMask());
}

void PythonQtWrapper_QMouseEventTransition::onTransition(QMouseEventTransition* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QMouseEventTransition*)theWrappedObject)->promoted_onTransition(event));
}

void PythonQtWrapper_QMouseEventTransition::setButton(QMouseEventTransition* theWrappedObject, Qt::MouseButton  button)
{
  ( theWrappedObject->setButton(button));
}

void PythonQtWrapper_QMouseEventTransition::setHitTestPath(QMouseEventTransition* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->setHitTestPath(path));
}

void PythonQtWrapper_QMouseEventTransition::setModifierMask(QMouseEventTransition* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifierMask(modifiers));
}



PythonQtShell_QMoveEvent::~PythonQtShell_QMoveEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMoveEvent* PythonQtWrapper_QMoveEvent::new_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos)
{ 
return new PythonQtShell_QMoveEvent(pos, oldPos); }

const QPoint*  PythonQtWrapper_QMoveEvent::oldPos(QMoveEvent* theWrappedObject) const
{
  return &( theWrappedObject->oldPos());
}

const QPoint*  PythonQtWrapper_QMoveEvent::pos(QMoveEvent* theWrappedObject) const
{
  return &( theWrappedObject->pos());
}



PythonQtShell_QMovie::~PythonQtShell_QMovie() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMovie::childEvent(QChildEvent*  arg__1)
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
  QMovie::childEvent(arg__1);
}
void PythonQtShell_QMovie::customEvent(QEvent*  arg__1)
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
  QMovie::customEvent(arg__1);
}
bool  PythonQtShell_QMovie::event(QEvent*  arg__1)
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
  return QMovie::event(arg__1);
}
bool  PythonQtShell_QMovie::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QMovie::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QMovie::timerEvent(QTimerEvent*  arg__1)
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
  QMovie::timerEvent(arg__1);
}
QMovie* PythonQtWrapper_QMovie::new_QMovie(QIODevice*  device, const QByteArray&  format, QObject*  parent)
{ 
return new PythonQtShell_QMovie(device, format, parent); }

QMovie* PythonQtWrapper_QMovie::new_QMovie(QObject*  parent)
{ 
return new PythonQtShell_QMovie(parent); }

QMovie* PythonQtWrapper_QMovie::new_QMovie(const QString&  fileName, const QByteArray&  format, QObject*  parent)
{ 
return new PythonQtShell_QMovie(fileName, format, parent); }

QColor  PythonQtWrapper_QMovie::backgroundColor(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->backgroundColor());
}

QMovie::CacheMode  PythonQtWrapper_QMovie::cacheMode(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->cacheMode());
}

int  PythonQtWrapper_QMovie::currentFrameNumber(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->currentFrameNumber());
}

QImage  PythonQtWrapper_QMovie::currentImage(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->currentImage());
}

QPixmap  PythonQtWrapper_QMovie::currentPixmap(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->currentPixmap());
}

QIODevice*  PythonQtWrapper_QMovie::device(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QString  PythonQtWrapper_QMovie::fileName(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QByteArray  PythonQtWrapper_QMovie::format(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QMovie::frameCount(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->frameCount());
}

QRect  PythonQtWrapper_QMovie::frameRect(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->frameRect());
}

bool  PythonQtWrapper_QMovie::isValid(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMovie::jumpToFrame(QMovie* theWrappedObject, int  frameNumber)
{
  return ( theWrappedObject->jumpToFrame(frameNumber));
}

int  PythonQtWrapper_QMovie::loopCount(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

int  PythonQtWrapper_QMovie::nextFrameDelay(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->nextFrameDelay());
}

QSize  PythonQtWrapper_QMovie::scaledSize(QMovie* theWrappedObject)
{
  return ( theWrappedObject->scaledSize());
}

void PythonQtWrapper_QMovie::setBackgroundColor(QMovie* theWrappedObject, const QColor&  color)
{
  ( theWrappedObject->setBackgroundColor(color));
}

void PythonQtWrapper_QMovie::setCacheMode(QMovie* theWrappedObject, QMovie::CacheMode  mode)
{
  ( theWrappedObject->setCacheMode(mode));
}

void PythonQtWrapper_QMovie::setDevice(QMovie* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QMovie::setFileName(QMovie* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

void PythonQtWrapper_QMovie::setFormat(QMovie* theWrappedObject, const QByteArray&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QMovie::setScaledSize(QMovie* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setScaledSize(size));
}

int  PythonQtWrapper_QMovie::speed(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->speed());
}

QMovie::MovieState  PythonQtWrapper_QMovie::state(QMovie* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QList<QByteArray >  PythonQtWrapper_QMovie::static_QMovie_supportedFormats()
{
  return (QMovie::supportedFormats());
}



PythonQtShell_QPageSetupDialog::~PythonQtShell_QPageSetupDialog() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPageSetupDialog::accept()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPageSetupDialog::accept();
}
void PythonQtShell_QPageSetupDialog::actionEvent(QActionEvent*  arg__1)
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
  QPageSetupDialog::actionEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::changeEvent(QEvent*  arg__1)
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
  QPageSetupDialog::changeEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::childEvent(QChildEvent*  arg__1)
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
  QPageSetupDialog::childEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::closeEvent(QCloseEvent*  arg__1)
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
  QPageSetupDialog::closeEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QPageSetupDialog::contextMenuEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::customEvent(QEvent*  arg__1)
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
  QPageSetupDialog::customEvent(arg__1);
}
int  PythonQtShell_QPageSetupDialog::devType() const
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
  return QPageSetupDialog::devType();
}
void PythonQtShell_QPageSetupDialog::done(int  result0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPageSetupDialog::done(result0);
}
void PythonQtShell_QPageSetupDialog::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QPageSetupDialog::dragEnterEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QPageSetupDialog::dragLeaveEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QPageSetupDialog::dragMoveEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::dropEvent(QDropEvent*  arg__1)
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
  QPageSetupDialog::dropEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::enterEvent(QEvent*  arg__1)
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
  QPageSetupDialog::enterEvent(arg__1);
}
bool  PythonQtShell_QPageSetupDialog::event(QEvent*  arg__1)
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
  return QPageSetupDialog::event(arg__1);
}
bool  PythonQtShell_QPageSetupDialog::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPageSetupDialog::eventFilter(arg__1, arg__2);
}
int  PythonQtShell_QPageSetupDialog::exec()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("exec");
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
  return QPageSetupDialog::exec();
}
void PythonQtShell_QPageSetupDialog::focusInEvent(QFocusEvent*  arg__1)
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
  QPageSetupDialog::focusInEvent(arg__1);
}
bool  PythonQtShell_QPageSetupDialog::focusNextPrevChild(bool  next0)
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
  return QPageSetupDialog::focusNextPrevChild(next0);
}
void PythonQtShell_QPageSetupDialog::focusOutEvent(QFocusEvent*  arg__1)
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
  QPageSetupDialog::focusOutEvent(arg__1);
}
int  PythonQtShell_QPageSetupDialog::heightForWidth(int  arg__1) const
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
  return QPageSetupDialog::heightForWidth(arg__1);
}
void PythonQtShell_QPageSetupDialog::hideEvent(QHideEvent*  arg__1)
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
  QPageSetupDialog::hideEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QPageSetupDialog::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QPageSetupDialog::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QPageSetupDialog::inputMethodQuery(arg__1);
}
void PythonQtShell_QPageSetupDialog::keyPressEvent(QKeyEvent*  arg__1)
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
  QPageSetupDialog::keyPressEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QPageSetupDialog::keyReleaseEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::languageChange()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("languageChange");
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
  QPageSetupDialog::languageChange();
}
void PythonQtShell_QPageSetupDialog::leaveEvent(QEvent*  arg__1)
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
  QPageSetupDialog::leaveEvent(arg__1);
}
int  PythonQtShell_QPageSetupDialog::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QPageSetupDialog::metric(arg__1);
}
void PythonQtShell_QPageSetupDialog::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QPageSetupDialog::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QPageSetupDialog::mouseMoveEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::mousePressEvent(QMouseEvent*  arg__1)
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
  QPageSetupDialog::mousePressEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QPageSetupDialog::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::moveEvent(QMoveEvent*  arg__1)
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
  QPageSetupDialog::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QPageSetupDialog::paintEngine() const
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
  return QPageSetupDialog::paintEngine();
}
void PythonQtShell_QPageSetupDialog::paintEvent(QPaintEvent*  arg__1)
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
  QPageSetupDialog::paintEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::reject()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QPageSetupDialog::reject();
}
void PythonQtShell_QPageSetupDialog::resizeEvent(QResizeEvent*  arg__1)
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
  QPageSetupDialog::resizeEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::showEvent(QShowEvent*  arg__1)
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
  QPageSetupDialog::showEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::tabletEvent(QTabletEvent*  arg__1)
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
  QPageSetupDialog::tabletEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::timerEvent(QTimerEvent*  arg__1)
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
  QPageSetupDialog::timerEvent(arg__1);
}
void PythonQtShell_QPageSetupDialog::wheelEvent(QWheelEvent*  arg__1)
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
  QPageSetupDialog::wheelEvent(arg__1);
}
QPageSetupDialog* PythonQtWrapper_QPageSetupDialog::new_QPageSetupDialog(QPrinter*  printer, QWidget*  parent)
{ 
return new PythonQtShell_QPageSetupDialog(printer, parent); }

QPageSetupDialog* PythonQtWrapper_QPageSetupDialog::new_QPageSetupDialog(QWidget*  parent)
{ 
return new PythonQtShell_QPageSetupDialog(parent); }

void PythonQtWrapper_QPageSetupDialog::addEnabledOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option)
{
  ( theWrappedObject->addEnabledOption(option));
}

QPageSetupDialog::PageSetupDialogOptions  PythonQtWrapper_QPageSetupDialog::enabledOptions(QPageSetupDialog* theWrappedObject) const
{
  return ( theWrappedObject->enabledOptions());
}

int  PythonQtWrapper_QPageSetupDialog::exec(QPageSetupDialog* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QPageSetupDialog*)theWrappedObject)->promoted_exec());
}

bool  PythonQtWrapper_QPageSetupDialog::isOptionEnabled(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option) const
{
  return ( theWrappedObject->isOptionEnabled(option));
}

void PythonQtWrapper_QPageSetupDialog::open(QPageSetupDialog* theWrappedObject)
{
  ( theWrappedObject->open());
}

void PythonQtWrapper_QPageSetupDialog::open(QPageSetupDialog* theWrappedObject, QObject*  receiver, const char*  member)
{
  ( theWrappedObject->open(receiver, member));
}

QPageSetupDialog::PageSetupDialogOptions  PythonQtWrapper_QPageSetupDialog::options(QPageSetupDialog* theWrappedObject) const
{
  return ( theWrappedObject->options());
}

void PythonQtWrapper_QPageSetupDialog::setEnabledOptions(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOptions  options)
{
  ( theWrappedObject->setEnabledOptions(options));
}

void PythonQtWrapper_QPageSetupDialog::setOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option, bool  on)
{
  ( theWrappedObject->setOption(option, on));
}

void PythonQtWrapper_QPageSetupDialog::setOptions(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOptions  options)
{
  ( theWrappedObject->setOptions(options));
}

bool  PythonQtWrapper_QPageSetupDialog::testOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option) const
{
  return ( theWrappedObject->testOption(option));
}



PythonQtShell_QPaintDevice::~PythonQtShell_QPaintDevice() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QPaintDevice::devType() const
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
  return QPaintDevice::devType();
}
int  PythonQtShell_QPaintDevice::metric(QPaintDevice::PaintDeviceMetric  metric0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&metric0};
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
  return QPaintDevice::metric(metric0);
}
QPaintEngine*  PythonQtShell_QPaintDevice::paintEngine() const
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
  return 0;
}
QPaintDevice* PythonQtWrapper_QPaintDevice::new_QPaintDevice()
{ 
return new PythonQtShell_QPaintDevice(); }

int  PythonQtWrapper_QPaintDevice::colorCount(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->colorCount());
}

int  PythonQtWrapper_QPaintDevice::depth(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->depth());
}

int  PythonQtWrapper_QPaintDevice::devType(QPaintDevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->promoted_devType());
}

int  PythonQtWrapper_QPaintDevice::height(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

int  PythonQtWrapper_QPaintDevice::heightMM(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->heightMM());
}

int  PythonQtWrapper_QPaintDevice::logicalDpiX(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->logicalDpiX());
}

int  PythonQtWrapper_QPaintDevice::logicalDpiY(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->logicalDpiY());
}

int  PythonQtWrapper_QPaintDevice::metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
  return ( ((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->promoted_metric(metric));
}

int  PythonQtWrapper_QPaintDevice::numColors(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->numColors());
}

QPaintEngine*  PythonQtWrapper_QPaintDevice::paintEngine(QPaintDevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->promoted_paintEngine());
}

bool  PythonQtWrapper_QPaintDevice::paintingActive(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->paintingActive());
}

int  PythonQtWrapper_QPaintDevice::physicalDpiX(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->physicalDpiX());
}

int  PythonQtWrapper_QPaintDevice::physicalDpiY(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->physicalDpiY());
}

int  PythonQtWrapper_QPaintDevice::width(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

int  PythonQtWrapper_QPaintDevice::widthMM(QPaintDevice* theWrappedObject) const
{
  return ( theWrappedObject->widthMM());
}



PythonQtShell_QPaintEngine::~PythonQtShell_QPaintEngine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QPaintEngine::begin(QPaintDevice*  pdev0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("begin");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QPaintDevice*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pdev0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("begin", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
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
QPoint  PythonQtShell_QPaintEngine::coordinateOffset() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("coordinateOffset");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPoint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPoint returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("coordinateOffset", methodInfo, result);
        } else {
          returnValue = *((QPoint*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QPaintEngine::coordinateOffset();
}
void PythonQtShell_QPaintEngine::drawEllipse(const QRect&  r0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawEllipse");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRect&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&r0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawEllipse(r0);
}
void PythonQtShell_QPaintEngine::drawEllipse(const QRectF&  r0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawEllipse");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&r0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawEllipse(r0);
}
void PythonQtShell_QPaintEngine::drawImage(const QRectF&  r0, const QImage&  pm1, const QRectF&  sr2, Qt::ImageConversionFlags  flags3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawImage");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF&" , "const QImage&" , "const QRectF&" , "Qt::ImageConversionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&r0, (void*)&pm1, (void*)&sr2, (void*)&flags3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawImage(r0, pm1, sr2, flags3);
}
void PythonQtShell_QPaintEngine::drawLines(const QLine*  lines0, int  lineCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawLines");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QLine*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&lines0, (void*)&lineCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawLines(lines0, lineCount1);
}
void PythonQtShell_QPaintEngine::drawLines(const QLineF*  lines0, int  lineCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawLines");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QLineF*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&lines0, (void*)&lineCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawLines(lines0, lineCount1);
}
void PythonQtShell_QPaintEngine::drawPath(const QPainterPath&  path0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPath");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPainterPath&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&path0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawPath(path0);
}
void PythonQtShell_QPaintEngine::drawPixmap(const QRectF&  r0, const QPixmap&  pm1, const QRectF&  sr2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPixmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF&" , "const QPixmap&" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&r0, (void*)&pm1, (void*)&sr2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
void PythonQtShell_QPaintEngine::drawPoints(const QPoint*  points0, int  pointCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPoints");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPoint*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&points0, (void*)&pointCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawPoints(points0, pointCount1);
}
void PythonQtShell_QPaintEngine::drawPoints(const QPointF*  points0, int  pointCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPoints");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPointF*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&points0, (void*)&pointCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawPoints(points0, pointCount1);
}
void PythonQtShell_QPaintEngine::drawPolygon(const QPoint*  points0, int  pointCount1, QPaintEngine::PolygonDrawMode  mode2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPolygon");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPoint*" , "int" , "QPaintEngine::PolygonDrawMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&points0, (void*)&pointCount1, (void*)&mode2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawPolygon(points0, pointCount1, mode2);
}
void PythonQtShell_QPaintEngine::drawPolygon(const QPointF*  points0, int  pointCount1, QPaintEngine::PolygonDrawMode  mode2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPolygon");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPointF*" , "int" , "QPaintEngine::PolygonDrawMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&points0, (void*)&pointCount1, (void*)&mode2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawPolygon(points0, pointCount1, mode2);
}
void PythonQtShell_QPaintEngine::drawRects(const QRect*  rects0, int  rectCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawRects");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRect*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&rects0, (void*)&rectCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawRects(rects0, rectCount1);
}
void PythonQtShell_QPaintEngine::drawRects(const QRectF*  rects0, int  rectCount1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawRects");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&rects0, (void*)&rectCount1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawRects(rects0, rectCount1);
}
void PythonQtShell_QPaintEngine::drawTextItem(const QPointF&  p0, const QTextItem&  textItem1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawTextItem");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPointF&" , "const QTextItem&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&p0, (void*)&textItem1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawTextItem(p0, textItem1);
}
void PythonQtShell_QPaintEngine::drawTiledPixmap(const QRectF&  r0, const QPixmap&  pixmap1, const QPointF&  s2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawTiledPixmap");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QRectF&" , "const QPixmap&" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&r0, (void*)&pixmap1, (void*)&s2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPaintEngine::drawTiledPixmap(r0, pixmap1, s2);
}
bool  PythonQtShell_QPaintEngine::end()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("end");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("end", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
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
QPaintEngine::Type  PythonQtShell_QPaintEngine::type() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("type");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPaintEngine::Type"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine::Type returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine::Type*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QPaintEngine::Type();
}
void PythonQtShell_QPaintEngine::updateState(const QPaintEngineState&  state0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateState");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QPaintEngineState&"};
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
QPaintEngine* PythonQtWrapper_QPaintEngine::new_QPaintEngine(QPaintEngine::PaintEngineFeatures  features)
{ 
return new PythonQtShell_QPaintEngine(features); }

bool  PythonQtWrapper_QPaintEngine::begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev)
{
  return ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_begin(pdev));
}

void PythonQtWrapper_QPaintEngine::clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
  ( theWrappedObject->clearDirty(df));
}

QPoint  PythonQtWrapper_QPaintEngine::coordinateOffset(QPaintEngine* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_coordinateOffset());
}

void PythonQtWrapper_QPaintEngine::drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawEllipse(r));
}

void PythonQtWrapper_QPaintEngine::drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawEllipse(r));
}

void PythonQtWrapper_QPaintEngine::drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawImage(r, pm, sr, flags));
}

void PythonQtWrapper_QPaintEngine::drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawLines(lines, lineCount));
}

void PythonQtWrapper_QPaintEngine::drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawLines(lines, lineCount));
}

void PythonQtWrapper_QPaintEngine::drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPath(path));
}

void PythonQtWrapper_QPaintEngine::drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPixmap(r, pm, sr));
}

void PythonQtWrapper_QPaintEngine::drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPoints(points, pointCount));
}

void PythonQtWrapper_QPaintEngine::drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPoints(points, pointCount));
}

void PythonQtWrapper_QPaintEngine::drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPolygon(points, pointCount, mode));
}

void PythonQtWrapper_QPaintEngine::drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawPolygon(points, pointCount, mode));
}

void PythonQtWrapper_QPaintEngine::drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawRects(rects, rectCount));
}

void PythonQtWrapper_QPaintEngine::drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawRects(rects, rectCount));
}

void PythonQtWrapper_QPaintEngine::drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawTextItem(p, textItem));
}

void PythonQtWrapper_QPaintEngine::drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_drawTiledPixmap(r, pixmap, s));
}

bool  PythonQtWrapper_QPaintEngine::end(QPaintEngine* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_end());
}

bool  PythonQtWrapper_QPaintEngine::hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const
{
  return ( theWrappedObject->hasFeature(feature));
}

bool  PythonQtWrapper_QPaintEngine::isActive(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QPaintEngine::isExtended(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->isExtended());
}

QPaintDevice*  PythonQtWrapper_QPaintEngine::paintDevice(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->paintDevice());
}

QPainter*  PythonQtWrapper_QPaintEngine::painter(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->painter());
}

void PythonQtWrapper_QPaintEngine::setActive(QPaintEngine* theWrappedObject, bool  newState)
{
  ( theWrappedObject->setActive(newState));
}

void PythonQtWrapper_QPaintEngine::setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
  ( theWrappedObject->setDirty(df));
}

void PythonQtWrapper_QPaintEngine::setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip)
{
  ( theWrappedObject->setSystemClip(baseClip));
}

void PythonQtWrapper_QPaintEngine::setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect)
{
  ( theWrappedObject->setSystemRect(rect));
}

void PythonQtWrapper_QPaintEngine::syncState(QPaintEngine* theWrappedObject)
{
  ( theWrappedObject->syncState());
}

QRegion  PythonQtWrapper_QPaintEngine::systemClip(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->systemClip());
}

QRect  PythonQtWrapper_QPaintEngine::systemRect(QPaintEngine* theWrappedObject) const
{
  return ( theWrappedObject->systemRect());
}

bool  PythonQtWrapper_QPaintEngine::testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df)
{
  return ( theWrappedObject->testDirty(df));
}

QPaintEngine::Type  PythonQtWrapper_QPaintEngine::type(QPaintEngine* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_type());
}

void PythonQtWrapper_QPaintEngine::updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state)
{
  ( ((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->promoted_updateState(state));
}



PythonQtShell_QPaintEngineState::~PythonQtShell_QPaintEngineState() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QPaintEngineState* PythonQtWrapper_QPaintEngineState::new_QPaintEngineState()
{ 
return new PythonQtShell_QPaintEngineState(); }

QBrush  PythonQtWrapper_QPaintEngineState::backgroundBrush(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->backgroundBrush());
}

Qt::BGMode  PythonQtWrapper_QPaintEngineState::backgroundMode(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->backgroundMode());
}

QBrush  PythonQtWrapper_QPaintEngineState::brush(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->brush());
}

bool  PythonQtWrapper_QPaintEngineState::brushNeedsResolving(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->brushNeedsResolving());
}

QPointF  PythonQtWrapper_QPaintEngineState::brushOrigin(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->brushOrigin());
}

Qt::ClipOperation  PythonQtWrapper_QPaintEngineState::clipOperation(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->clipOperation());
}

QPainterPath  PythonQtWrapper_QPaintEngineState::clipPath(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->clipPath());
}

QRegion  PythonQtWrapper_QPaintEngineState::clipRegion(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->clipRegion());
}

QPainter::CompositionMode  PythonQtWrapper_QPaintEngineState::compositionMode(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->compositionMode());
}

QFont  PythonQtWrapper_QPaintEngineState::font(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

bool  PythonQtWrapper_QPaintEngineState::isClipEnabled(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->isClipEnabled());
}

QMatrix  PythonQtWrapper_QPaintEngineState::matrix(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->matrix());
}

qreal  PythonQtWrapper_QPaintEngineState::opacity(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QPainter*  PythonQtWrapper_QPaintEngineState::painter(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->painter());
}

QPen  PythonQtWrapper_QPaintEngineState::pen(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->pen());
}

bool  PythonQtWrapper_QPaintEngineState::penNeedsResolving(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->penNeedsResolving());
}

QPainter::RenderHints  PythonQtWrapper_QPaintEngineState::renderHints(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->renderHints());
}

QPaintEngine::DirtyFlags  PythonQtWrapper_QPaintEngineState::state(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QTransform  PythonQtWrapper_QPaintEngineState::transform(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->transform());
}



PythonQtShell_QPaintEvent::~PythonQtShell_QPaintEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QPaintEvent* PythonQtWrapper_QPaintEvent::new_QPaintEvent(const QRect&  paintRect)
{ 
return new PythonQtShell_QPaintEvent(paintRect); }

QPaintEvent* PythonQtWrapper_QPaintEvent::new_QPaintEvent(const QRegion&  paintRegion)
{ 
return new PythonQtShell_QPaintEvent(paintRegion); }

const QRect*  PythonQtWrapper_QPaintEvent::rect(QPaintEvent* theWrappedObject) const
{
  return &( theWrappedObject->rect());
}

const QRegion*  PythonQtWrapper_QPaintEvent::region(QPaintEvent* theWrappedObject) const
{
  return &( theWrappedObject->region());
}



QPainter* PythonQtWrapper_QPainter::new_QPainter()
{ 
return new QPainter(); }

QPainter* PythonQtWrapper_QPainter::new_QPainter(QPaintDevice*  arg__1)
{ 
return new QPainter(arg__1); }

const QBrush*  PythonQtWrapper_QPainter::background(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->background());
}

Qt::BGMode  PythonQtWrapper_QPainter::backgroundMode(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->backgroundMode());
}

bool  PythonQtWrapper_QPainter::begin(QPainter* theWrappedObject, QPaintDevice*  arg__1)
{
  return ( theWrappedObject->begin(arg__1));
}

void PythonQtWrapper_QPainter::beginNativePainting(QPainter* theWrappedObject)
{
  ( theWrappedObject->beginNativePainting());
}

QRect  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text)
{
  return ( theWrappedObject->boundingRect(rect, flags, text));
}

QRectF  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o)
{
  return ( theWrappedObject->boundingRect(rect, text, o));
}

QRectF  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text)
{
  return ( theWrappedObject->boundingRect(rect, flags, text));
}

QRect  PythonQtWrapper_QPainter::boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text)
{
  return ( theWrappedObject->boundingRect(x, y, w, h, flags, text));
}

const QBrush*  PythonQtWrapper_QPainter::brush(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->brush());
}

QPoint  PythonQtWrapper_QPainter::brushOrigin(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->brushOrigin());
}

QRectF  PythonQtWrapper_QPainter::clipBoundingRect(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->clipBoundingRect());
}

QPainterPath  PythonQtWrapper_QPainter::clipPath(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->clipPath());
}

QRegion  PythonQtWrapper_QPainter::clipRegion(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->clipRegion());
}

QMatrix  PythonQtWrapper_QPainter::combinedMatrix(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->combinedMatrix());
}

QTransform  PythonQtWrapper_QPainter::combinedTransform(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->combinedTransform());
}

QPainter::CompositionMode  PythonQtWrapper_QPainter::compositionMode(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->compositionMode());
}

QPaintDevice*  PythonQtWrapper_QPainter::device(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

const QMatrix*  PythonQtWrapper_QPainter::deviceMatrix(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->deviceMatrix());
}

const QTransform*  PythonQtWrapper_QPainter::deviceTransform(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->deviceTransform());
}

void PythonQtWrapper_QPainter::drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen)
{
  ( theWrappedObject->drawArc(arg__1, a, alen));
}

void PythonQtWrapper_QPainter::drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen)
{
  ( theWrappedObject->drawArc(rect, a, alen));
}

void PythonQtWrapper_QPainter::drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen)
{
  ( theWrappedObject->drawArc(x, y, w, h, a, alen));
}

void PythonQtWrapper_QPainter::drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen)
{
  ( theWrappedObject->drawChord(arg__1, a, alen));
}

void PythonQtWrapper_QPainter::drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen)
{
  ( theWrappedObject->drawChord(rect, a, alen));
}

void PythonQtWrapper_QPainter::drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen)
{
  ( theWrappedObject->drawChord(x, y, w, h, a, alen));
}

void PythonQtWrapper_QPainter::drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon)
{
  ( theWrappedObject->drawConvexPolygon(polygon));
}

void PythonQtWrapper_QPainter::drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon)
{
  ( theWrappedObject->drawConvexPolygon(polygon));
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry)
{
  ( theWrappedObject->drawEllipse(center, rx, ry));
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry)
{
  ( theWrappedObject->drawEllipse(center, rx, ry));
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QRect&  r)
{
  ( theWrappedObject->drawEllipse(r));
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, const QRectF&  r)
{
  ( theWrappedObject->drawEllipse(r));
}

void PythonQtWrapper_QPainter::drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->drawEllipse(x, y, w, h));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image)
{
  ( theWrappedObject->drawImage(p, image));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags)
{
  ( theWrappedObject->drawImage(p, image, sr, flags));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image)
{
  ( theWrappedObject->drawImage(p, image));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags)
{
  ( theWrappedObject->drawImage(p, image, sr, flags));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image)
{
  ( theWrappedObject->drawImage(r, image));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags)
{
  ( theWrappedObject->drawImage(targetRect, image, sourceRect, flags));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image)
{
  ( theWrappedObject->drawImage(r, image));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags)
{
  ( theWrappedObject->drawImage(targetRect, image, sourceRect, flags));
}

void PythonQtWrapper_QPainter::drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx, int  sy, int  sw, int  sh, Qt::ImageConversionFlags  flags)
{
  ( theWrappedObject->drawImage(x, y, image, sx, sy, sw, sh, flags));
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QLine&  line)
{
  ( theWrappedObject->drawLine(line));
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QLineF&  line)
{
  ( theWrappedObject->drawLine(line));
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2)
{
  ( theWrappedObject->drawLine(p1, p2));
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2)
{
  ( theWrappedObject->drawLine(p1, p2));
}

void PythonQtWrapper_QPainter::drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
  ( theWrappedObject->drawLine(x1, y1, x2, y2));
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QLine >&  lines)
{
  ( theWrappedObject->drawLines(lines));
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QLineF >&  lines)
{
  ( theWrappedObject->drawLines(lines));
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QPoint >&  pointPairs)
{
  ( theWrappedObject->drawLines(pointPairs));
}

void PythonQtWrapper_QPainter::drawLines(QPainter* theWrappedObject, const QVector<QPointF >&  pointPairs)
{
  ( theWrappedObject->drawLines(pointPairs));
}

void PythonQtWrapper_QPainter::drawPath(QPainter* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->drawPath(path));
}

void PythonQtWrapper_QPainter::drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture)
{
  ( theWrappedObject->drawPicture(p, picture));
}

void PythonQtWrapper_QPainter::drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture)
{
  ( theWrappedObject->drawPicture(p, picture));
}

void PythonQtWrapper_QPainter::drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture)
{
  ( theWrappedObject->drawPicture(x, y, picture));
}

void PythonQtWrapper_QPainter::drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen)
{
  ( theWrappedObject->drawPie(arg__1, a, alen));
}

void PythonQtWrapper_QPainter::drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen)
{
  ( theWrappedObject->drawPie(rect, a, alen));
}

void PythonQtWrapper_QPainter::drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen)
{
  ( theWrappedObject->drawPie(x, y, w, h, a, alen));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm)
{
  ( theWrappedObject->drawPixmap(p, pm));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr)
{
  ( theWrappedObject->drawPixmap(p, pm, sr));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm)
{
  ( theWrappedObject->drawPixmap(p, pm));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr)
{
  ( theWrappedObject->drawPixmap(p, pm, sr));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm)
{
  ( theWrappedObject->drawPixmap(r, pm));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect)
{
  ( theWrappedObject->drawPixmap(targetRect, pixmap, sourceRect));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect)
{
  ( theWrappedObject->drawPixmap(targetRect, pixmap, sourceRect));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm)
{
  ( theWrappedObject->drawPixmap(x, y, pm));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh)
{
  ( theWrappedObject->drawPixmap(x, y, pm, sx, sy, sw, sh));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm)
{
  ( theWrappedObject->drawPixmap(x, y, w, h, pm));
}

void PythonQtWrapper_QPainter::drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh)
{
  ( theWrappedObject->drawPixmap(x, y, w, h, pm, sx, sy, sw, sh));
}

void PythonQtWrapper_QPainter::drawPixmapFragments(QPainter* theWrappedObject, const QPainter::PixmapFragment*  fragments, int  fragmentCount, const QPixmap&  pixmap, QPainter::PixmapFragmentHints  hints)
{
  ( theWrappedObject->drawPixmapFragments(fragments, fragmentCount, pixmap, hints));
}

void PythonQtWrapper_QPainter::drawPixmapFragments(QPainter* theWrappedObject, const QRectF*  targetRects, const QRectF*  sourceRects, int  fragmentCount, const QPixmap&  pixmap, QPainter::PixmapFragmentHints  hints)
{
  ( theWrappedObject->drawPixmapFragments(targetRects, sourceRects, fragmentCount, pixmap, hints));
}

void PythonQtWrapper_QPainter::drawPoint(QPainter* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->drawPoint(p));
}

void PythonQtWrapper_QPainter::drawPoint(QPainter* theWrappedObject, const QPointF&  pt)
{
  ( theWrappedObject->drawPoint(pt));
}

void PythonQtWrapper_QPainter::drawPoint(QPainter* theWrappedObject, int  x, int  y)
{
  ( theWrappedObject->drawPoint(x, y));
}

void PythonQtWrapper_QPainter::drawPoints(QPainter* theWrappedObject, const QPolygon&  points)
{
  ( theWrappedObject->drawPoints(points));
}

void PythonQtWrapper_QPainter::drawPoints(QPainter* theWrappedObject, const QPolygonF&  points)
{
  ( theWrappedObject->drawPoints(points));
}

void PythonQtWrapper_QPainter::drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule)
{
  ( theWrappedObject->drawPolygon(polygon, fillRule));
}

void PythonQtWrapper_QPainter::drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule)
{
  ( theWrappedObject->drawPolygon(polygon, fillRule));
}

void PythonQtWrapper_QPainter::drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon)
{
  ( theWrappedObject->drawPolyline(polygon));
}

void PythonQtWrapper_QPainter::drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline)
{
  ( theWrappedObject->drawPolyline(polyline));
}

void PythonQtWrapper_QPainter::drawRect(QPainter* theWrappedObject, const QRect&  rect)
{
  ( theWrappedObject->drawRect(rect));
}

void PythonQtWrapper_QPainter::drawRect(QPainter* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->drawRect(rect));
}

void PythonQtWrapper_QPainter::drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h)
{
  ( theWrappedObject->drawRect(x1, y1, w, h));
}

void PythonQtWrapper_QPainter::drawRects(QPainter* theWrappedObject, const QVector<QRect >&  rectangles)
{
  ( theWrappedObject->drawRects(rectangles));
}

void PythonQtWrapper_QPainter::drawRects(QPainter* theWrappedObject, const QVector<QRectF >&  rectangles)
{
  ( theWrappedObject->drawRects(rectangles));
}

void PythonQtWrapper_QPainter::drawRoundRect(QPainter* theWrappedObject, const QRect&  r, int  xround, int  yround)
{
  ( theWrappedObject->drawRoundRect(r, xround, yround));
}

void PythonQtWrapper_QPainter::drawRoundRect(QPainter* theWrappedObject, const QRectF&  r, int  xround, int  yround)
{
  ( theWrappedObject->drawRoundRect(r, xround, yround));
}

void PythonQtWrapper_QPainter::drawRoundRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  arg__5, int  arg__6)
{
  ( theWrappedObject->drawRoundRect(x, y, w, h, arg__5, arg__6));
}

void PythonQtWrapper_QPainter::drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
  ( theWrappedObject->drawRoundedRect(rect, xRadius, yRadius, mode));
}

void PythonQtWrapper_QPainter::drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
  ( theWrappedObject->drawRoundedRect(rect, xRadius, yRadius, mode));
}

void PythonQtWrapper_QPainter::drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
  ( theWrappedObject->drawRoundedRect(x, y, w, h, xRadius, yRadius, mode));
}

void PythonQtWrapper_QPainter::drawStaticText(QPainter* theWrappedObject, const QPoint&  topLeftPosition, const QStaticText&  staticText)
{
  ( theWrappedObject->drawStaticText(topLeftPosition, staticText));
}

void PythonQtWrapper_QPainter::drawStaticText(QPainter* theWrappedObject, const QPointF&  topLeftPosition, const QStaticText&  staticText)
{
  ( theWrappedObject->drawStaticText(topLeftPosition, staticText));
}

void PythonQtWrapper_QPainter::drawStaticText(QPainter* theWrappedObject, int  left, int  top, const QStaticText&  staticText)
{
  ( theWrappedObject->drawStaticText(left, top, staticText));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s)
{
  ( theWrappedObject->drawText(p, s));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s)
{
  ( theWrappedObject->drawText(p, s));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br)
{
  ( theWrappedObject->drawText(r, flags, text, br));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o)
{
  ( theWrappedObject->drawText(r, text, o));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br)
{
  ( theWrappedObject->drawText(r, flags, text, br));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s)
{
  ( theWrappedObject->drawText(x, y, s));
}

void PythonQtWrapper_QPainter::drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br)
{
  ( theWrappedObject->drawText(x, y, w, h, flags, text, br));
}

void PythonQtWrapper_QPainter::drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti)
{
  ( theWrappedObject->drawTextItem(p, ti));
}

void PythonQtWrapper_QPainter::drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti)
{
  ( theWrappedObject->drawTextItem(p, ti));
}

void PythonQtWrapper_QPainter::drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti)
{
  ( theWrappedObject->drawTextItem(x, y, ti));
}

void PythonQtWrapper_QPainter::drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3)
{
  ( theWrappedObject->drawTiledPixmap(arg__1, arg__2, arg__3));
}

void PythonQtWrapper_QPainter::drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset)
{
  ( theWrappedObject->drawTiledPixmap(rect, pm, offset));
}

void PythonQtWrapper_QPainter::drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx, int  sy)
{
  ( theWrappedObject->drawTiledPixmap(x, y, w, h, arg__5, sx, sy));
}

bool  PythonQtWrapper_QPainter::end(QPainter* theWrappedObject)
{
  return ( theWrappedObject->end());
}

void PythonQtWrapper_QPainter::endNativePainting(QPainter* theWrappedObject)
{
  ( theWrappedObject->endNativePainting());
}

void PythonQtWrapper_QPainter::eraseRect(QPainter* theWrappedObject, const QRect&  arg__1)
{
  ( theWrappedObject->eraseRect(arg__1));
}

void PythonQtWrapper_QPainter::eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1)
{
  ( theWrappedObject->eraseRect(arg__1));
}

void PythonQtWrapper_QPainter::eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->eraseRect(x, y, w, h));
}

void PythonQtWrapper_QPainter::fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush)
{
  ( theWrappedObject->fillPath(path, brush));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2)
{
  ( theWrappedObject->fillRect(arg__1, arg__2));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QColor&  color)
{
  ( theWrappedObject->fillRect(arg__1, color));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::BrushStyle  style)
{
  ( theWrappedObject->fillRect(r, style));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::GlobalColor  c)
{
  ( theWrappedObject->fillRect(r, c));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2)
{
  ( theWrappedObject->fillRect(arg__1, arg__2));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QColor&  color)
{
  ( theWrappedObject->fillRect(arg__1, color));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::BrushStyle  style)
{
  ( theWrappedObject->fillRect(r, style));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::GlobalColor  c)
{
  ( theWrappedObject->fillRect(r, c));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::BrushStyle  style)
{
  ( theWrappedObject->fillRect(x, y, w, h, style));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::GlobalColor  c)
{
  ( theWrappedObject->fillRect(x, y, w, h, c));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5)
{
  ( theWrappedObject->fillRect(x, y, w, h, arg__5));
}

void PythonQtWrapper_QPainter::fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QColor&  color)
{
  ( theWrappedObject->fillRect(x, y, w, h, color));
}

const QFont*  PythonQtWrapper_QPainter::font(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->font());
}

QFontInfo  PythonQtWrapper_QPainter::fontInfo(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->fontInfo());
}

QFontMetrics  PythonQtWrapper_QPainter::fontMetrics(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->fontMetrics());
}

bool  PythonQtWrapper_QPainter::hasClipping(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->hasClipping());
}

void PythonQtWrapper_QPainter::initFrom(QPainter* theWrappedObject, const QWidget*  widget)
{
  ( theWrappedObject->initFrom(widget));
}

bool  PythonQtWrapper_QPainter::isActive(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

Qt::LayoutDirection  PythonQtWrapper_QPainter::layoutDirection(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->layoutDirection());
}

qreal  PythonQtWrapper_QPainter::opacity(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QPaintEngine*  PythonQtWrapper_QPainter::paintEngine(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->paintEngine());
}

const QPen*  PythonQtWrapper_QPainter::pen(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->pen());
}

QPaintDevice*  PythonQtWrapper_QPainter::static_QPainter_redirected(const QPaintDevice*  device, QPoint*  offset)
{
  return (QPainter::redirected(device, offset));
}

QPainter::RenderHints  PythonQtWrapper_QPainter::renderHints(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->renderHints());
}

void PythonQtWrapper_QPainter::resetMatrix(QPainter* theWrappedObject)
{
  ( theWrappedObject->resetMatrix());
}

void PythonQtWrapper_QPainter::resetTransform(QPainter* theWrappedObject)
{
  ( theWrappedObject->resetTransform());
}

void PythonQtWrapper_QPainter::restore(QPainter* theWrappedObject)
{
  ( theWrappedObject->restore());
}

void PythonQtWrapper_QPainter::static_QPainter_restoreRedirected(const QPaintDevice*  device)
{
  (QPainter::restoreRedirected(device));
}

void PythonQtWrapper_QPainter::rotate(QPainter* theWrappedObject, qreal  a)
{
  ( theWrappedObject->rotate(a));
}

void PythonQtWrapper_QPainter::save(QPainter* theWrappedObject)
{
  ( theWrappedObject->save());
}

void PythonQtWrapper_QPainter::scale(QPainter* theWrappedObject, qreal  sx, qreal  sy)
{
  ( theWrappedObject->scale(sx, sy));
}

void PythonQtWrapper_QPainter::setBackground(QPainter* theWrappedObject, const QBrush&  bg)
{
  ( theWrappedObject->setBackground(bg));
}

void PythonQtWrapper_QPainter::setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode)
{
  ( theWrappedObject->setBackgroundMode(mode));
}

void PythonQtWrapper_QPainter::setBrush(QPainter* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBrush(brush));
}

void PythonQtWrapper_QPainter::setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1)
{
  ( theWrappedObject->setBrushOrigin(arg__1));
}

void PythonQtWrapper_QPainter::setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1)
{
  ( theWrappedObject->setBrushOrigin(arg__1));
}

void PythonQtWrapper_QPainter::setBrushOrigin(QPainter* theWrappedObject, int  x, int  y)
{
  ( theWrappedObject->setBrushOrigin(x, y));
}

void PythonQtWrapper_QPainter::setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op)
{
  ( theWrappedObject->setClipPath(path, op));
}

void PythonQtWrapper_QPainter::setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op)
{
  ( theWrappedObject->setClipRect(arg__1, op));
}

void PythonQtWrapper_QPainter::setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op)
{
  ( theWrappedObject->setClipRect(arg__1, op));
}

void PythonQtWrapper_QPainter::setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op)
{
  ( theWrappedObject->setClipRect(x, y, w, h, op));
}

void PythonQtWrapper_QPainter::setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op)
{
  ( theWrappedObject->setClipRegion(arg__1, op));
}

void PythonQtWrapper_QPainter::setClipping(QPainter* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setClipping(enable));
}

void PythonQtWrapper_QPainter::setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode)
{
  ( theWrappedObject->setCompositionMode(mode));
}

void PythonQtWrapper_QPainter::setFont(QPainter* theWrappedObject, const QFont&  f)
{
  ( theWrappedObject->setFont(f));
}

void PythonQtWrapper_QPainter::setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction)
{
  ( theWrappedObject->setLayoutDirection(direction));
}

void PythonQtWrapper_QPainter::setOpacity(QPainter* theWrappedObject, qreal  opacity)
{
  ( theWrappedObject->setOpacity(opacity));
}

void PythonQtWrapper_QPainter::setPen(QPainter* theWrappedObject, Qt::PenStyle  style)
{
  ( theWrappedObject->setPen(style));
}

void PythonQtWrapper_QPainter::setPen(QPainter* theWrappedObject, const QColor&  color)
{
  ( theWrappedObject->setPen(color));
}

void PythonQtWrapper_QPainter::setPen(QPainter* theWrappedObject, const QPen&  pen)
{
  ( theWrappedObject->setPen(pen));
}

void PythonQtWrapper_QPainter::static_QPainter_setRedirected(const QPaintDevice*  device, QPaintDevice*  replacement, const QPoint&  offset)
{
  (QPainter::setRedirected(device, replacement, offset));
}

void PythonQtWrapper_QPainter::setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on)
{
  ( theWrappedObject->setRenderHint(hint, on));
}

void PythonQtWrapper_QPainter::setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on)
{
  ( theWrappedObject->setRenderHints(hints, on));
}

void PythonQtWrapper_QPainter::setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine)
{
  ( theWrappedObject->setTransform(transform, combine));
}

void PythonQtWrapper_QPainter::setViewTransformEnabled(QPainter* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setViewTransformEnabled(enable));
}

void PythonQtWrapper_QPainter::setViewport(QPainter* theWrappedObject, const QRect&  viewport)
{
  ( theWrappedObject->setViewport(viewport));
}

void PythonQtWrapper_QPainter::setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->setViewport(x, y, w, h));
}

void PythonQtWrapper_QPainter::setWindow(QPainter* theWrappedObject, const QRect&  window)
{
  ( theWrappedObject->setWindow(window));
}

void PythonQtWrapper_QPainter::setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->setWindow(x, y, w, h));
}

void PythonQtWrapper_QPainter::setWorldMatrix(QPainter* theWrappedObject, const QMatrix&  matrix, bool  combine)
{
  ( theWrappedObject->setWorldMatrix(matrix, combine));
}

void PythonQtWrapper_QPainter::setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setWorldMatrixEnabled(enabled));
}

void PythonQtWrapper_QPainter::setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine)
{
  ( theWrappedObject->setWorldTransform(matrix, combine));
}

void PythonQtWrapper_QPainter::shear(QPainter* theWrappedObject, qreal  sh, qreal  sv)
{
  ( theWrappedObject->shear(sh, sv));
}

void PythonQtWrapper_QPainter::strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen)
{
  ( theWrappedObject->strokePath(path, pen));
}

bool  PythonQtWrapper_QPainter::testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const
{
  return ( theWrappedObject->testRenderHint(hint));
}

const QTransform*  PythonQtWrapper_QPainter::transform(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->transform());
}

void PythonQtWrapper_QPainter::translate(QPainter* theWrappedObject, const QPoint&  offset)
{
  ( theWrappedObject->translate(offset));
}

void PythonQtWrapper_QPainter::translate(QPainter* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->translate(offset));
}

void PythonQtWrapper_QPainter::translate(QPainter* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

bool  PythonQtWrapper_QPainter::viewTransformEnabled(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->viewTransformEnabled());
}

QRect  PythonQtWrapper_QPainter::viewport(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->viewport());
}

QRect  PythonQtWrapper_QPainter::window(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->window());
}

const QMatrix*  PythonQtWrapper_QPainter::worldMatrix(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->worldMatrix());
}

bool  PythonQtWrapper_QPainter::worldMatrixEnabled(QPainter* theWrappedObject) const
{
  return ( theWrappedObject->worldMatrixEnabled());
}

const QTransform*  PythonQtWrapper_QPainter::worldTransform(QPainter* theWrappedObject) const
{
  return &( theWrappedObject->worldTransform());
}



QPainterPath* PythonQtWrapper_QPainterPath::new_QPainterPath()
{ 
return new QPainterPath(); }

QPainterPath* PythonQtWrapper_QPainterPath::new_QPainterPath(const QPainterPath&  other)
{ 
return new QPainterPath(other); }

QPainterPath* PythonQtWrapper_QPainterPath::new_QPainterPath(const QPointF&  startPoint)
{ 
return new QPainterPath(startPoint); }

void PythonQtWrapper_QPainterPath::addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry)
{
  ( theWrappedObject->addEllipse(center, rx, ry));
}

void PythonQtWrapper_QPainterPath::addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->addEllipse(rect));
}

void PythonQtWrapper_QPainterPath::addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->addEllipse(x, y, w, h));
}

void PythonQtWrapper_QPainterPath::addPath(QPainterPath* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->addPath(path));
}

void PythonQtWrapper_QPainterPath::addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon)
{
  ( theWrappedObject->addPolygon(polygon));
}

void PythonQtWrapper_QPainterPath::addRect(QPainterPath* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->addRect(rect));
}

void PythonQtWrapper_QPainterPath::addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->addRect(x, y, w, h));
}

void PythonQtWrapper_QPainterPath::addRegion(QPainterPath* theWrappedObject, const QRegion&  region)
{
  ( theWrappedObject->addRegion(region));
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness)
{
  ( theWrappedObject->addRoundRect(rect, roundness));
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd)
{
  ( theWrappedObject->addRoundRect(rect, xRnd, yRnd));
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness)
{
  ( theWrappedObject->addRoundRect(x, y, w, h, roundness));
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd)
{
  ( theWrappedObject->addRoundRect(x, y, w, h, xRnd, yRnd));
}

void PythonQtWrapper_QPainterPath::addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
  ( theWrappedObject->addRoundedRect(rect, xRadius, yRadius, mode));
}

void PythonQtWrapper_QPainterPath::addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
  ( theWrappedObject->addRoundedRect(x, y, w, h, xRadius, yRadius, mode));
}

void PythonQtWrapper_QPainterPath::addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text)
{
  ( theWrappedObject->addText(point, f, text));
}

void PythonQtWrapper_QPainterPath::addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text)
{
  ( theWrappedObject->addText(x, y, f, text));
}

qreal  PythonQtWrapper_QPainterPath::angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->angleAtPercent(t));
}

void PythonQtWrapper_QPainterPath::arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle)
{
  ( theWrappedObject->arcMoveTo(rect, angle));
}

void PythonQtWrapper_QPainterPath::arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle)
{
  ( theWrappedObject->arcMoveTo(x, y, w, h, angle));
}

void PythonQtWrapper_QPainterPath::arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength)
{
  ( theWrappedObject->arcTo(rect, startAngle, arcLength));
}

void PythonQtWrapper_QPainterPath::arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength)
{
  ( theWrappedObject->arcTo(x, y, w, h, startAngle, arcLength));
}

QRectF  PythonQtWrapper_QPainterPath::boundingRect(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

void PythonQtWrapper_QPainterPath::closeSubpath(QPainterPath* theWrappedObject)
{
  ( theWrappedObject->closeSubpath());
}

void PythonQtWrapper_QPainterPath::connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path)
{
  ( theWrappedObject->connectPath(path));
}

bool  PythonQtWrapper_QPainterPath::contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const
{
  return ( theWrappedObject->contains(p));
}

bool  PythonQtWrapper_QPainterPath::contains(QPainterPath* theWrappedObject, const QPointF&  pt) const
{
  return ( theWrappedObject->contains(pt));
}

bool  PythonQtWrapper_QPainterPath::contains(QPainterPath* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->contains(rect));
}

QRectF  PythonQtWrapper_QPainterPath::controlPointRect(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->controlPointRect());
}

void PythonQtWrapper_QPainterPath::cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt)
{
  ( theWrappedObject->cubicTo(ctrlPt1, ctrlPt2, endPt));
}

void PythonQtWrapper_QPainterPath::cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty)
{
  ( theWrappedObject->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty));
}

QPointF  PythonQtWrapper_QPainterPath::currentPosition(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->currentPosition());
}

const QPainterPath::Element*  PythonQtWrapper_QPainterPath::elementAt(QPainterPath* theWrappedObject, int  i) const
{
  return &( theWrappedObject->elementAt(i));
}

int  PythonQtWrapper_QPainterPath::elementCount(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->elementCount());
}

Qt::FillRule  PythonQtWrapper_QPainterPath::fillRule(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->fillRule());
}

QPainterPath  PythonQtWrapper_QPainterPath::intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
  return ( theWrappedObject->intersected(r));
}

bool  PythonQtWrapper_QPainterPath::intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const
{
  return ( theWrappedObject->intersects(p));
}

bool  PythonQtWrapper_QPainterPath::intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->intersects(rect));
}

bool  PythonQtWrapper_QPainterPath::isEmpty(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

qreal  PythonQtWrapper_QPainterPath::length(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

void PythonQtWrapper_QPainterPath::lineTo(QPainterPath* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->lineTo(p));
}

void PythonQtWrapper_QPainterPath::lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->lineTo(x, y));
}

void PythonQtWrapper_QPainterPath::moveTo(QPainterPath* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTo(p));
}

void PythonQtWrapper_QPainterPath::moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->moveTo(x, y));
}

bool  PythonQtWrapper_QPainterPath::__ne__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QPainterPath  PythonQtWrapper_QPainterPath::__and__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)& other);
}

QPainterPath*  PythonQtWrapper_QPainterPath::__iand__(QPainterPath* theWrappedObject, const QPainterPath&  other)
{
  return &( (*theWrappedObject)&= other);
}

QPainterPath  PythonQtWrapper_QPainterPath::__mul__(QPainterPath* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QPainterPath  PythonQtWrapper_QPainterPath::__mul__(QPainterPath* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

QPainterPath  PythonQtWrapper_QPainterPath::__add__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)+ other);
}

QPainterPath*  PythonQtWrapper_QPainterPath::__iadd__(QPainterPath* theWrappedObject, const QPainterPath&  other)
{
  return &( (*theWrappedObject)+= other);
}

QPainterPath  PythonQtWrapper_QPainterPath::__sub__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)- other);
}

QPainterPath*  PythonQtWrapper_QPainterPath::__isub__(QPainterPath* theWrappedObject, const QPainterPath&  other)
{
  return &( (*theWrappedObject)-= other);
}

void PythonQtWrapper_QPainterPath::writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QPainterPath::__eq__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QPainterPath::readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPainterPath  PythonQtWrapper_QPainterPath::__or__(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
  return ( (*theWrappedObject)| other);
}

QPainterPath*  PythonQtWrapper_QPainterPath::__ior__(QPainterPath* theWrappedObject, const QPainterPath&  other)
{
  return &( (*theWrappedObject)|= other);
}

qreal  PythonQtWrapper_QPainterPath::percentAtLength(QPainterPath* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->percentAtLength(t));
}

QPointF  PythonQtWrapper_QPainterPath::pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->pointAtPercent(t));
}

void PythonQtWrapper_QPainterPath::quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt)
{
  ( theWrappedObject->quadTo(ctrlPt, endPt));
}

void PythonQtWrapper_QPainterPath::quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty)
{
  ( theWrappedObject->quadTo(ctrlPtx, ctrlPty, endPtx, endPty));
}

void PythonQtWrapper_QPainterPath::setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y)
{
  ( theWrappedObject->setElementPositionAt(i, x, y));
}

void PythonQtWrapper_QPainterPath::setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule)
{
  ( theWrappedObject->setFillRule(fillRule));
}

QPainterPath  PythonQtWrapper_QPainterPath::simplified(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->simplified());
}

qreal  PythonQtWrapper_QPainterPath::slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->slopeAtPercent(t));
}

QPainterPath  PythonQtWrapper_QPainterPath::subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
  return ( theWrappedObject->subtracted(r));
}

QPainterPath  PythonQtWrapper_QPainterPath::subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
  return ( theWrappedObject->subtractedInverted(r));
}

void PythonQtWrapper_QPainterPath::swap(QPainterPath* theWrappedObject, QPainterPath&  other)
{
  ( theWrappedObject->swap(other));
}

QPolygonF  PythonQtWrapper_QPainterPath::toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix) const
{
  return ( theWrappedObject->toFillPolygon(matrix));
}

QPolygonF  PythonQtWrapper_QPainterPath::toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const
{
  return ( theWrappedObject->toFillPolygon(matrix));
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix) const
{
  return ( theWrappedObject->toFillPolygons(matrix));
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const
{
  return ( theWrappedObject->toFillPolygons(matrix));
}

QPainterPath  PythonQtWrapper_QPainterPath::toReversed(QPainterPath* theWrappedObject) const
{
  return ( theWrappedObject->toReversed());
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix) const
{
  return ( theWrappedObject->toSubpathPolygons(matrix));
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const
{
  return ( theWrappedObject->toSubpathPolygons(matrix));
}

void PythonQtWrapper_QPainterPath::translate(QPainterPath* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->translate(offset));
}

void PythonQtWrapper_QPainterPath::translate(QPainterPath* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QPainterPath  PythonQtWrapper_QPainterPath::translated(QPainterPath* theWrappedObject, const QPointF&  offset) const
{
  return ( theWrappedObject->translated(offset));
}

QPainterPath  PythonQtWrapper_QPainterPath::translated(QPainterPath* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QPainterPath  PythonQtWrapper_QPainterPath::united(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
  return ( theWrappedObject->united(r));
}

QString PythonQtWrapper_QPainterPath::py_toString(QPainterPath* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QPainterPathStroker* PythonQtWrapper_QPainterPathStroker::new_QPainterPathStroker()
{ 
return new QPainterPathStroker(); }

Qt::PenCapStyle  PythonQtWrapper_QPainterPathStroker::capStyle(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->capStyle());
}

QPainterPath  PythonQtWrapper_QPainterPathStroker::createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->createStroke(path));
}

qreal  PythonQtWrapper_QPainterPathStroker::curveThreshold(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->curveThreshold());
}

qreal  PythonQtWrapper_QPainterPathStroker::dashOffset(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->dashOffset());
}

QVector<qreal >  PythonQtWrapper_QPainterPathStroker::dashPattern(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->dashPattern());
}

Qt::PenJoinStyle  PythonQtWrapper_QPainterPathStroker::joinStyle(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->joinStyle());
}

qreal  PythonQtWrapper_QPainterPathStroker::miterLimit(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->miterLimit());
}

void PythonQtWrapper_QPainterPathStroker::setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style)
{
  ( theWrappedObject->setCapStyle(style));
}

void PythonQtWrapper_QPainterPathStroker::setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold)
{
  ( theWrappedObject->setCurveThreshold(threshold));
}

void PythonQtWrapper_QPainterPathStroker::setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset)
{
  ( theWrappedObject->setDashOffset(offset));
}

void PythonQtWrapper_QPainterPathStroker::setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1)
{
  ( theWrappedObject->setDashPattern(arg__1));
}

void PythonQtWrapper_QPainterPathStroker::setDashPattern(QPainterPathStroker* theWrappedObject, const QVector<qreal >&  dashPattern)
{
  ( theWrappedObject->setDashPattern(dashPattern));
}

void PythonQtWrapper_QPainterPathStroker::setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style)
{
  ( theWrappedObject->setJoinStyle(style));
}

void PythonQtWrapper_QPainterPathStroker::setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length)
{
  ( theWrappedObject->setMiterLimit(length));
}

void PythonQtWrapper_QPainterPathStroker::setWidth(QPainterPathStroker* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setWidth(width));
}

qreal  PythonQtWrapper_QPainterPathStroker::width(QPainterPathStroker* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



PythonQtShell_QPainterPath__Element::~PythonQtShell_QPainterPath__Element() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QPainterPath::Element* PythonQtWrapper_QPainterPath__Element::new_QPainterPath__Element()
{ 
return new PythonQtShell_QPainterPath__Element(); }

bool  PythonQtWrapper_QPainterPath__Element::isCurveTo(QPainterPath::Element* theWrappedObject) const
{
  return ( theWrappedObject->isCurveTo());
}

bool  PythonQtWrapper_QPainterPath__Element::isLineTo(QPainterPath::Element* theWrappedObject) const
{
  return ( theWrappedObject->isLineTo());
}

bool  PythonQtWrapper_QPainterPath__Element::isMoveTo(QPainterPath::Element* theWrappedObject) const
{
  return ( theWrappedObject->isMoveTo());
}

QPointF  PythonQtWrapper_QPainterPath__Element::operator_cast_QPointF(QPainterPath::Element* theWrappedObject) const
{
  return ( theWrappedObject->operator QPointF());
}

bool  PythonQtWrapper_QPainterPath__Element::__ne__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const
{
  return ( (*theWrappedObject)!= e);
}

bool  PythonQtWrapper_QPainterPath__Element::__eq__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const
{
  return ( (*theWrappedObject)== e);
}



PythonQtShell_QPainter__PixmapFragment::~PythonQtShell_QPainter__PixmapFragment() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QPainter::PixmapFragment* PythonQtWrapper_QPainter__PixmapFragment::new_QPainter__PixmapFragment()
{ 
return new PythonQtShell_QPainter__PixmapFragment(); }

QPainter::PixmapFragment  PythonQtWrapper_QPainter__PixmapFragment::static_QPainter__PixmapFragment_create(const QPointF&  pos, const QRectF&  sourceRect, qreal  scaleX, qreal  scaleY, qreal  rotation, qreal  opacity)
{
  return (QPainter::PixmapFragment::create(pos, sourceRect, scaleX, scaleY, rotation, opacity));
}



PythonQtShell_QPanGesture::~PythonQtShell_QPanGesture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPanGesture::childEvent(QChildEvent*  arg__1)
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
  QPanGesture::childEvent(arg__1);
}
void PythonQtShell_QPanGesture::customEvent(QEvent*  arg__1)
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
  QPanGesture::customEvent(arg__1);
}
bool  PythonQtShell_QPanGesture::event(QEvent*  arg__1)
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
  return QPanGesture::event(arg__1);
}
bool  PythonQtShell_QPanGesture::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPanGesture::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPanGesture::timerEvent(QTimerEvent*  arg__1)
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
  QPanGesture::timerEvent(arg__1);
}
QPanGesture* PythonQtWrapper_QPanGesture::new_QPanGesture(QObject*  parent)
{ 
return new PythonQtShell_QPanGesture(parent); }

qreal  PythonQtWrapper_QPanGesture::acceleration(QPanGesture* theWrappedObject) const
{
  return ( theWrappedObject->acceleration());
}

QPointF  PythonQtWrapper_QPanGesture::delta(QPanGesture* theWrappedObject) const
{
  return ( theWrappedObject->delta());
}

QPointF  PythonQtWrapper_QPanGesture::lastOffset(QPanGesture* theWrappedObject) const
{
  return ( theWrappedObject->lastOffset());
}

QPointF  PythonQtWrapper_QPanGesture::offset(QPanGesture* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

void PythonQtWrapper_QPanGesture::setAcceleration(QPanGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setAcceleration(value));
}

void PythonQtWrapper_QPanGesture::setLastOffset(QPanGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setLastOffset(value));
}

void PythonQtWrapper_QPanGesture::setOffset(QPanGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setOffset(value));
}



PythonQtShell_QPicture::~PythonQtShell_QPicture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QPicture::devType() const
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
  return QPicture::devType();
}
int  PythonQtShell_QPicture::metric(QPaintDevice::PaintDeviceMetric  m0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("metric");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&m0};
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
  return QPicture::metric(m0);
}
QPaintEngine*  PythonQtShell_QPicture::paintEngine() const
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
  return QPicture::paintEngine();
}
void PythonQtShell_QPicture::setData(const char*  data0, uint  size1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const char*" , "uint"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&data0, (void*)&size1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPicture::setData(data0, size1);
}
QPicture* PythonQtWrapper_QPicture::new_QPicture(const QPicture&  arg__1)
{ 
return new PythonQtShell_QPicture(arg__1); }

QPicture* PythonQtWrapper_QPicture::new_QPicture(int  formatVersion)
{ 
return new PythonQtShell_QPicture(formatVersion); }

QRect  PythonQtWrapper_QPicture::boundingRect(QPicture* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

const char*  PythonQtWrapper_QPicture::data(QPicture* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

int  PythonQtWrapper_QPicture::devType(QPicture* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPicture*)theWrappedObject)->promoted_devType());
}

bool  PythonQtWrapper_QPicture::isNull(QPicture* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QPicture::load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format)
{
  return ( theWrappedObject->load(dev, format));
}

bool  PythonQtWrapper_QPicture::load(QPicture* theWrappedObject, const QString&  fileName, const char*  format)
{
  return ( theWrappedObject->load(fileName, format));
}

int  PythonQtWrapper_QPicture::metric(QPicture* theWrappedObject, QPaintDevice::PaintDeviceMetric  m) const
{
  return ( ((PythonQtPublicPromoter_QPicture*)theWrappedObject)->promoted_metric(m));
}

void PythonQtWrapper_QPicture::writeTo(QPicture* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QPicture::readFrom(QPicture* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPaintEngine*  PythonQtWrapper_QPicture::paintEngine(QPicture* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPicture*)theWrappedObject)->promoted_paintEngine());
}

bool  PythonQtWrapper_QPicture::play(QPicture* theWrappedObject, QPainter*  p)
{
  return ( theWrappedObject->play(p));
}

bool  PythonQtWrapper_QPicture::save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format)
{
  return ( theWrappedObject->save(dev, format));
}

bool  PythonQtWrapper_QPicture::save(QPicture* theWrappedObject, const QString&  fileName, const char*  format)
{
  return ( theWrappedObject->save(fileName, format));
}

void PythonQtWrapper_QPicture::setBoundingRect(QPicture* theWrappedObject, const QRect&  r)
{
  ( theWrappedObject->setBoundingRect(r));
}

uint  PythonQtWrapper_QPicture::size(QPicture* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QPicture::swap(QPicture* theWrappedObject, QPicture&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QPictureFormatPlugin::~PythonQtShell_QPictureFormatPlugin() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPictureFormatPlugin::childEvent(QChildEvent*  arg__1)
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
  QPictureFormatPlugin::childEvent(arg__1);
}
void PythonQtShell_QPictureFormatPlugin::customEvent(QEvent*  arg__1)
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
  QPictureFormatPlugin::customEvent(arg__1);
}
bool  PythonQtShell_QPictureFormatPlugin::event(QEvent*  arg__1)
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
  return QPictureFormatPlugin::event(arg__1);
}
bool  PythonQtShell_QPictureFormatPlugin::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPictureFormatPlugin::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QPictureFormatPlugin::installIOHandler(const QString&  format0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("installIOHandler");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&format0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("installIOHandler", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
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
QStringList  PythonQtShell_QPictureFormatPlugin::keys() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("keys");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("keys", methodInfo, result);
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
  return QStringList();
}
bool  PythonQtShell_QPictureFormatPlugin::loadPicture(const QString&  format0, const QString&  filename1, QPicture*  pic2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("loadPicture");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "QPicture*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&format0, (void*)&filename1, (void*)&pic2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("loadPicture", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QPictureFormatPlugin::loadPicture(format0, filename1, pic2);
}
bool  PythonQtShell_QPictureFormatPlugin::savePicture(const QString&  format0, const QString&  filename1, const QPicture&  pic2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("savePicture");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QPicture&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&format0, (void*)&filename1, (void*)&pic2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("savePicture", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QPictureFormatPlugin::savePicture(format0, filename1, pic2);
}
void PythonQtShell_QPictureFormatPlugin::timerEvent(QTimerEvent*  arg__1)
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
  QPictureFormatPlugin::timerEvent(arg__1);
}
QPictureFormatPlugin* PythonQtWrapper_QPictureFormatPlugin::new_QPictureFormatPlugin(QObject*  parent)
{ 
return new PythonQtShell_QPictureFormatPlugin(parent); }

bool  PythonQtWrapper_QPictureFormatPlugin::installIOHandler(QPictureFormatPlugin* theWrappedObject, const QString&  format)
{
  return ( ((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->promoted_installIOHandler(format));
}

QStringList  PythonQtWrapper_QPictureFormatPlugin::keys(QPictureFormatPlugin* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->promoted_keys());
}

bool  PythonQtWrapper_QPictureFormatPlugin::loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic)
{
  return ( ((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->promoted_loadPicture(format, filename, pic));
}

bool  PythonQtWrapper_QPictureFormatPlugin::savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic)
{
  return ( ((PythonQtPublicPromoter_QPictureFormatPlugin*)theWrappedObject)->promoted_savePicture(format, filename, pic));
}



QPictureIO* PythonQtWrapper_QPictureIO::new_QPictureIO()
{ 
return new QPictureIO(); }

QPictureIO* PythonQtWrapper_QPictureIO::new_QPictureIO(QIODevice*  ioDevice, const char*  format)
{ 
return new QPictureIO(ioDevice, format); }

QPictureIO* PythonQtWrapper_QPictureIO::new_QPictureIO(const QString&  fileName, const char*  format)
{ 
return new QPictureIO(fileName, format); }

QString  PythonQtWrapper_QPictureIO::description(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->description());
}

QString  PythonQtWrapper_QPictureIO::fileName(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

const char*  PythonQtWrapper_QPictureIO::format(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

float  PythonQtWrapper_QPictureIO::gamma(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->gamma());
}

QList<QByteArray >  PythonQtWrapper_QPictureIO::static_QPictureIO_inputFormats()
{
  return (QPictureIO::inputFormats());
}

QIODevice*  PythonQtWrapper_QPictureIO::ioDevice(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->ioDevice());
}

QList<QByteArray >  PythonQtWrapper_QPictureIO::static_QPictureIO_outputFormats()
{
  return (QPictureIO::outputFormats());
}

const char*  PythonQtWrapper_QPictureIO::parameters(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->parameters());
}

const QPicture*  PythonQtWrapper_QPictureIO::picture(QPictureIO* theWrappedObject) const
{
  return &( theWrappedObject->picture());
}

QByteArray  PythonQtWrapper_QPictureIO::static_QPictureIO_pictureFormat(QIODevice*  arg__1)
{
  return (QPictureIO::pictureFormat(arg__1));
}

QByteArray  PythonQtWrapper_QPictureIO::static_QPictureIO_pictureFormat(const QString&  fileName)
{
  return (QPictureIO::pictureFormat(fileName));
}

int  PythonQtWrapper_QPictureIO::quality(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->quality());
}

bool  PythonQtWrapper_QPictureIO::read(QPictureIO* theWrappedObject)
{
  return ( theWrappedObject->read());
}

void PythonQtWrapper_QPictureIO::setDescription(QPictureIO* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setDescription(arg__1));
}

void PythonQtWrapper_QPictureIO::setFileName(QPictureIO* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setFileName(arg__1));
}

void PythonQtWrapper_QPictureIO::setFormat(QPictureIO* theWrappedObject, const char*  arg__1)
{
  ( theWrappedObject->setFormat(arg__1));
}

void PythonQtWrapper_QPictureIO::setGamma(QPictureIO* theWrappedObject, float  arg__1)
{
  ( theWrappedObject->setGamma(arg__1));
}

void PythonQtWrapper_QPictureIO::setIODevice(QPictureIO* theWrappedObject, QIODevice*  arg__1)
{
  ( theWrappedObject->setIODevice(arg__1));
}

void PythonQtWrapper_QPictureIO::setParameters(QPictureIO* theWrappedObject, const char*  arg__1)
{
  ( theWrappedObject->setParameters(arg__1));
}

void PythonQtWrapper_QPictureIO::setPicture(QPictureIO* theWrappedObject, const QPicture&  arg__1)
{
  ( theWrappedObject->setPicture(arg__1));
}

void PythonQtWrapper_QPictureIO::setQuality(QPictureIO* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setQuality(arg__1));
}

void PythonQtWrapper_QPictureIO::setStatus(QPictureIO* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setStatus(arg__1));
}

int  PythonQtWrapper_QPictureIO::status(QPictureIO* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

bool  PythonQtWrapper_QPictureIO::write(QPictureIO* theWrappedObject)
{
  return ( theWrappedObject->write());
}



PythonQtShell_QPinchGesture::~PythonQtShell_QPinchGesture() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPinchGesture::childEvent(QChildEvent*  arg__1)
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
  QPinchGesture::childEvent(arg__1);
}
void PythonQtShell_QPinchGesture::customEvent(QEvent*  arg__1)
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
  QPinchGesture::customEvent(arg__1);
}
bool  PythonQtShell_QPinchGesture::event(QEvent*  arg__1)
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
  return QPinchGesture::event(arg__1);
}
bool  PythonQtShell_QPinchGesture::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPinchGesture::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPinchGesture::timerEvent(QTimerEvent*  arg__1)
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
  QPinchGesture::timerEvent(arg__1);
}
QPinchGesture* PythonQtWrapper_QPinchGesture::new_QPinchGesture(QObject*  parent)
{ 
return new PythonQtShell_QPinchGesture(parent); }

QPointF  PythonQtWrapper_QPinchGesture::centerPoint(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->centerPoint());
}

QPinchGesture::ChangeFlags  PythonQtWrapper_QPinchGesture::changeFlags(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->changeFlags());
}

QPointF  PythonQtWrapper_QPinchGesture::lastCenterPoint(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->lastCenterPoint());
}

qreal  PythonQtWrapper_QPinchGesture::lastRotationAngle(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->lastRotationAngle());
}

qreal  PythonQtWrapper_QPinchGesture::lastScaleFactor(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->lastScaleFactor());
}

qreal  PythonQtWrapper_QPinchGesture::rotationAngle(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->rotationAngle());
}

qreal  PythonQtWrapper_QPinchGesture::scaleFactor(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->scaleFactor());
}

void PythonQtWrapper_QPinchGesture::setCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setCenterPoint(value));
}

void PythonQtWrapper_QPinchGesture::setChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value)
{
  ( theWrappedObject->setChangeFlags(value));
}

void PythonQtWrapper_QPinchGesture::setLastCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setLastCenterPoint(value));
}

void PythonQtWrapper_QPinchGesture::setLastRotationAngle(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setLastRotationAngle(value));
}

void PythonQtWrapper_QPinchGesture::setLastScaleFactor(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setLastScaleFactor(value));
}

void PythonQtWrapper_QPinchGesture::setRotationAngle(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setRotationAngle(value));
}

void PythonQtWrapper_QPinchGesture::setScaleFactor(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setScaleFactor(value));
}

void PythonQtWrapper_QPinchGesture::setStartCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value)
{
  ( theWrappedObject->setStartCenterPoint(value));
}

void PythonQtWrapper_QPinchGesture::setTotalChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value)
{
  ( theWrappedObject->setTotalChangeFlags(value));
}

void PythonQtWrapper_QPinchGesture::setTotalRotationAngle(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setTotalRotationAngle(value));
}

void PythonQtWrapper_QPinchGesture::setTotalScaleFactor(QPinchGesture* theWrappedObject, qreal  value)
{
  ( theWrappedObject->setTotalScaleFactor(value));
}

QPointF  PythonQtWrapper_QPinchGesture::startCenterPoint(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->startCenterPoint());
}

QPinchGesture::ChangeFlags  PythonQtWrapper_QPinchGesture::totalChangeFlags(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->totalChangeFlags());
}

qreal  PythonQtWrapper_QPinchGesture::totalRotationAngle(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->totalRotationAngle());
}

qreal  PythonQtWrapper_QPinchGesture::totalScaleFactor(QPinchGesture* theWrappedObject) const
{
  return ( theWrappedObject->totalScaleFactor());
}



PythonQtShell_QPixmapCache::~PythonQtShell_QPixmapCache() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QPixmapCache* PythonQtWrapper_QPixmapCache::new_QPixmapCache()
{ 
return new PythonQtShell_QPixmapCache(); }

int  PythonQtWrapper_QPixmapCache::static_QPixmapCache_cacheLimit()
{
  return (QPixmapCache::cacheLimit());
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_clear()
{
  (QPixmapCache::clear());
}

bool  PythonQtWrapper_QPixmapCache::static_QPixmapCache_find(const QPixmapCache::Key&  key, QPixmap*  pixmap)
{
  return (QPixmapCache::find(key, pixmap));
}

bool  PythonQtWrapper_QPixmapCache::static_QPixmapCache_find(const QString&  key, QPixmap&  pixmap)
{
  return (QPixmapCache::find(key, pixmap));
}

QPixmapCache::Key  PythonQtWrapper_QPixmapCache::static_QPixmapCache_insert(const QPixmap&  pixmap)
{
  return (QPixmapCache::insert(pixmap));
}

bool  PythonQtWrapper_QPixmapCache::static_QPixmapCache_insert(const QString&  key, const QPixmap&  pixmap)
{
  return (QPixmapCache::insert(key, pixmap));
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_remove(const QPixmapCache::Key&  key)
{
  (QPixmapCache::remove(key));
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_remove(const QString&  key)
{
  (QPixmapCache::remove(key));
}

bool  PythonQtWrapper_QPixmapCache::static_QPixmapCache_replace(const QPixmapCache::Key&  key, const QPixmap&  pixmap)
{
  return (QPixmapCache::replace(key, pixmap));
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_setCacheLimit(int  arg__1)
{
  (QPixmapCache::setCacheLimit(arg__1));
}


