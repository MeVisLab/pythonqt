#include "com_trolltech_qt_gui6.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QAbstractTextDocumentLayout>
#include <QPixmap>
#include <QPrinterInfo>
#include <QSize>
#include <QStringList>
#include <QTextEdit>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractprintdialog.h>
#include <qaction.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdialog.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qplaintextedit.h>
#include <qplastiquestyle.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprintengine.h>
#include <qprinter.h>
#include <qprinterinfo.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qproxymodel.h>
#include <qproxystyle.h>
#include <qpushbutton.h>
#include <qquaternion.h>
#include <qradiobutton.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qscrollarea.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizegrip.h>
#include <qsizepolicy.h>
#include <qslider.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>

QPixmapCache::Key* PythonQtWrapper_QPixmapCache__Key::new_QPixmapCache__Key()
{ 
return new QPixmapCache::Key(); }

QPixmapCache::Key* PythonQtWrapper_QPixmapCache__Key::new_QPixmapCache__Key(const QPixmapCache::Key&  other)
{ 
return new QPixmapCache::Key(other); }

bool  PythonQtWrapper_QPixmapCache__Key::__ne__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const
{
  return ( (*theWrappedObject)!= key);
}

QPixmapCache::Key*  PythonQtWrapper_QPixmapCache__Key::operator_assign(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QPixmapCache__Key::__eq__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const
{
  return ( (*theWrappedObject)== key);
}



PythonQtShell_QPlainTextDocumentLayout::~PythonQtShell_QPlainTextDocumentLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QPlainTextDocumentLayout::blockBoundingRect(const QTextBlock&  block0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("blockBoundingRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRectF" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
    void* args[2] = {NULL, (void*)&block0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("blockBoundingRect", methodInfo, result);
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
  return QPlainTextDocumentLayout::blockBoundingRect(block0);
}
void PythonQtShell_QPlainTextDocumentLayout::childEvent(QChildEvent*  arg__1)
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
  QPlainTextDocumentLayout::childEvent(arg__1);
}
void PythonQtShell_QPlainTextDocumentLayout::customEvent(QEvent*  arg__1)
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
  QPlainTextDocumentLayout::customEvent(arg__1);
}
void PythonQtShell_QPlainTextDocumentLayout::documentChanged(int  from0, int  arg__2, int  charsAdded2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("documentChanged");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&from0, (void*)&arg__2, (void*)&charsAdded2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextDocumentLayout::documentChanged(from0, arg__2, charsAdded2);
}
QSizeF  PythonQtShell_QPlainTextDocumentLayout::documentSize() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("documentSize");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSizeF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSizeF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("documentSize", methodInfo, result);
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
  return QPlainTextDocumentLayout::documentSize();
}
void PythonQtShell_QPlainTextDocumentLayout::draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("draw");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QAbstractTextDocumentLayout::PaintContext&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextDocumentLayout::draw(arg__1, arg__2);
}
void PythonQtShell_QPlainTextDocumentLayout::drawInlineObject(QPainter*  painter0, const QRectF&  rect1, QTextInlineObject  object2, int  posInDocument3, const QTextFormat&  format4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawInlineObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QRectF&" , "QTextInlineObject" , "int" , "const QTextFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
    void* args[6] = {NULL, (void*)&painter0, (void*)&rect1, (void*)&object2, (void*)&posInDocument3, (void*)&format4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextDocumentLayout::drawInlineObject(painter0, rect1, object2, posInDocument3, format4);
}
bool  PythonQtShell_QPlainTextDocumentLayout::event(QEvent*  arg__1)
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
  return QPlainTextDocumentLayout::event(arg__1);
}
bool  PythonQtShell_QPlainTextDocumentLayout::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPlainTextDocumentLayout::eventFilter(arg__1, arg__2);
}
QRectF  PythonQtShell_QPlainTextDocumentLayout::frameBoundingRect(QTextFrame*  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("frameBoundingRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRectF" , "QTextFrame*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("frameBoundingRect", methodInfo, result);
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
  return QPlainTextDocumentLayout::frameBoundingRect(arg__1);
}
int  PythonQtShell_QPlainTextDocumentLayout::hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitTest");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QPointF&" , "Qt::HitTestAccuracy"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      int returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hitTest", methodInfo, result);
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
  return QPlainTextDocumentLayout::hitTest(arg__1, arg__2);
}
int  PythonQtShell_QPlainTextDocumentLayout::pageCount() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("pageCount");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("pageCount", methodInfo, result);
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
  return QPlainTextDocumentLayout::pageCount();
}
void PythonQtShell_QPlainTextDocumentLayout::positionInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("positionInlineObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTextInlineObject" , "int" , "const QTextFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&item0, (void*)&posInDocument1, (void*)&format2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextDocumentLayout::positionInlineObject(item0, posInDocument1, format2);
}
void PythonQtShell_QPlainTextDocumentLayout::resizeInlineObject(QTextInlineObject  item0, int  posInDocument1, const QTextFormat&  format2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resizeInlineObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTextInlineObject" , "int" , "const QTextFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&item0, (void*)&posInDocument1, (void*)&format2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlainTextDocumentLayout::resizeInlineObject(item0, posInDocument1, format2);
}
void PythonQtShell_QPlainTextDocumentLayout::timerEvent(QTimerEvent*  arg__1)
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
  QPlainTextDocumentLayout::timerEvent(arg__1);
}
QPlainTextDocumentLayout* PythonQtWrapper_QPlainTextDocumentLayout::new_QPlainTextDocumentLayout(QTextDocument*  document)
{ 
return new PythonQtShell_QPlainTextDocumentLayout(document); }

QRectF  PythonQtWrapper_QPlainTextDocumentLayout::blockBoundingRect(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_blockBoundingRect(block));
}

int  PythonQtWrapper_QPlainTextDocumentLayout::cursorWidth(QPlainTextDocumentLayout* theWrappedObject) const
{
  return ( theWrappedObject->cursorWidth());
}

void PythonQtWrapper_QPlainTextDocumentLayout::documentChanged(QPlainTextDocumentLayout* theWrappedObject, int  from, int  arg__2, int  charsAdded)
{
  ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_documentChanged(from, arg__2, charsAdded));
}

QSizeF  PythonQtWrapper_QPlainTextDocumentLayout::documentSize(QPlainTextDocumentLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_documentSize());
}

void PythonQtWrapper_QPlainTextDocumentLayout::draw(QPlainTextDocumentLayout* theWrappedObject, QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2)
{
  ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_draw(arg__1, arg__2));
}

void PythonQtWrapper_QPlainTextDocumentLayout::ensureBlockLayout(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const
{
  ( theWrappedObject->ensureBlockLayout(block));
}

QRectF  PythonQtWrapper_QPlainTextDocumentLayout::frameBoundingRect(QPlainTextDocumentLayout* theWrappedObject, QTextFrame*  arg__1) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_frameBoundingRect(arg__1));
}

int  PythonQtWrapper_QPlainTextDocumentLayout::hitTest(QPlainTextDocumentLayout* theWrappedObject, const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_hitTest(arg__1, arg__2));
}

int  PythonQtWrapper_QPlainTextDocumentLayout::pageCount(QPlainTextDocumentLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextDocumentLayout*)theWrappedObject)->promoted_pageCount());
}

void PythonQtWrapper_QPlainTextDocumentLayout::requestUpdate(QPlainTextDocumentLayout* theWrappedObject)
{
  ( theWrappedObject->requestUpdate());
}

void PythonQtWrapper_QPlainTextDocumentLayout::setCursorWidth(QPlainTextDocumentLayout* theWrappedObject, int  width)
{
  ( theWrappedObject->setCursorWidth(width));
}



PythonQtShell_QPlainTextEdit::~PythonQtShell_QPlainTextEdit() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPlainTextEdit::actionEvent(QActionEvent*  arg__1)
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
  QPlainTextEdit::actionEvent(arg__1);
}
bool  PythonQtShell_QPlainTextEdit::canInsertFromMimeData(const QMimeData*  source0) const
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
  return QPlainTextEdit::canInsertFromMimeData(source0);
}
void PythonQtShell_QPlainTextEdit::changeEvent(QEvent*  e0)
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
  QPlainTextEdit::changeEvent(e0);
}
void PythonQtShell_QPlainTextEdit::childEvent(QChildEvent*  arg__1)
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
  QPlainTextEdit::childEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::closeEvent(QCloseEvent*  arg__1)
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
  QPlainTextEdit::closeEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::contextMenuEvent(QContextMenuEvent*  e0)
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
  QPlainTextEdit::contextMenuEvent(e0);
}
QMimeData*  PythonQtShell_QPlainTextEdit::createMimeDataFromSelection() const
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
  return QPlainTextEdit::createMimeDataFromSelection();
}
void PythonQtShell_QPlainTextEdit::customEvent(QEvent*  arg__1)
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
  QPlainTextEdit::customEvent(arg__1);
}
int  PythonQtShell_QPlainTextEdit::devType() const
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
  return QPlainTextEdit::devType();
}
void PythonQtShell_QPlainTextEdit::dragEnterEvent(QDragEnterEvent*  e0)
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
  QPlainTextEdit::dragEnterEvent(e0);
}
void PythonQtShell_QPlainTextEdit::dragLeaveEvent(QDragLeaveEvent*  e0)
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
  QPlainTextEdit::dragLeaveEvent(e0);
}
void PythonQtShell_QPlainTextEdit::dragMoveEvent(QDragMoveEvent*  e0)
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
  QPlainTextEdit::dragMoveEvent(e0);
}
void PythonQtShell_QPlainTextEdit::dropEvent(QDropEvent*  e0)
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
  QPlainTextEdit::dropEvent(e0);
}
void PythonQtShell_QPlainTextEdit::enterEvent(QEvent*  arg__1)
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
  QPlainTextEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QPlainTextEdit::event(QEvent*  e0)
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
  return QPlainTextEdit::event(e0);
}
bool  PythonQtShell_QPlainTextEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPlainTextEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPlainTextEdit::focusInEvent(QFocusEvent*  e0)
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
  QPlainTextEdit::focusInEvent(e0);
}
bool  PythonQtShell_QPlainTextEdit::focusNextPrevChild(bool  next0)
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
  return QPlainTextEdit::focusNextPrevChild(next0);
}
void PythonQtShell_QPlainTextEdit::focusOutEvent(QFocusEvent*  e0)
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
  QPlainTextEdit::focusOutEvent(e0);
}
int  PythonQtShell_QPlainTextEdit::heightForWidth(int  arg__1) const
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
  return QPlainTextEdit::heightForWidth(arg__1);
}
void PythonQtShell_QPlainTextEdit::hideEvent(QHideEvent*  arg__1)
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
  QPlainTextEdit::hideEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QPlainTextEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QPlainTextEdit::inputMethodQuery(Qt::InputMethodQuery  property0) const
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
  return QPlainTextEdit::inputMethodQuery(property0);
}
void PythonQtShell_QPlainTextEdit::insertFromMimeData(const QMimeData*  source0)
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
  QPlainTextEdit::insertFromMimeData(source0);
}
void PythonQtShell_QPlainTextEdit::keyPressEvent(QKeyEvent*  e0)
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
  QPlainTextEdit::keyPressEvent(e0);
}
void PythonQtShell_QPlainTextEdit::keyReleaseEvent(QKeyEvent*  e0)
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
  QPlainTextEdit::keyReleaseEvent(e0);
}
void PythonQtShell_QPlainTextEdit::languageChange()
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
  QPlainTextEdit::languageChange();
}
void PythonQtShell_QPlainTextEdit::leaveEvent(QEvent*  arg__1)
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
  QPlainTextEdit::leaveEvent(arg__1);
}
QVariant  PythonQtShell_QPlainTextEdit::loadResource(int  type0, const QUrl&  name1)
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
  return QPlainTextEdit::loadResource(type0, name1);
}
int  PythonQtShell_QPlainTextEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QPlainTextEdit::metric(arg__1);
}
void PythonQtShell_QPlainTextEdit::mouseDoubleClickEvent(QMouseEvent*  e0)
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
  QPlainTextEdit::mouseDoubleClickEvent(e0);
}
void PythonQtShell_QPlainTextEdit::mouseMoveEvent(QMouseEvent*  e0)
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
  QPlainTextEdit::mouseMoveEvent(e0);
}
void PythonQtShell_QPlainTextEdit::mousePressEvent(QMouseEvent*  e0)
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
  QPlainTextEdit::mousePressEvent(e0);
}
void PythonQtShell_QPlainTextEdit::mouseReleaseEvent(QMouseEvent*  e0)
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
  QPlainTextEdit::mouseReleaseEvent(e0);
}
void PythonQtShell_QPlainTextEdit::moveEvent(QMoveEvent*  arg__1)
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
  QPlainTextEdit::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QPlainTextEdit::paintEngine() const
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
  return QPlainTextEdit::paintEngine();
}
void PythonQtShell_QPlainTextEdit::paintEvent(QPaintEvent*  e0)
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
  QPlainTextEdit::paintEvent(e0);
}
void PythonQtShell_QPlainTextEdit::resizeEvent(QResizeEvent*  e0)
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
  QPlainTextEdit::resizeEvent(e0);
}
void PythonQtShell_QPlainTextEdit::scrollContentsBy(int  dx0, int  dy1)
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
  QPlainTextEdit::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QPlainTextEdit::showEvent(QShowEvent*  arg__1)
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
  QPlainTextEdit::showEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::tabletEvent(QTabletEvent*  arg__1)
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
  QPlainTextEdit::tabletEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::timerEvent(QTimerEvent*  e0)
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
  QPlainTextEdit::timerEvent(e0);
}
bool  PythonQtShell_QPlainTextEdit::viewportEvent(QEvent*  arg__1)
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
  return QPlainTextEdit::viewportEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::wheelEvent(QWheelEvent*  e0)
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
  QPlainTextEdit::wheelEvent(e0);
}
QPlainTextEdit* PythonQtWrapper_QPlainTextEdit::new_QPlainTextEdit(QWidget*  parent)
{ 
return new PythonQtShell_QPlainTextEdit(parent); }

QPlainTextEdit* PythonQtWrapper_QPlainTextEdit::new_QPlainTextEdit(const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QPlainTextEdit(text, parent); }

QString  PythonQtWrapper_QPlainTextEdit::anchorAt(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->anchorAt(pos));
}

bool  PythonQtWrapper_QPlainTextEdit::backgroundVisible(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->backgroundVisible());
}

QRectF  PythonQtWrapper_QPlainTextEdit::blockBoundingGeometry(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_blockBoundingGeometry(block));
}

QRectF  PythonQtWrapper_QPlainTextEdit::blockBoundingRect(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_blockBoundingRect(block));
}

int  PythonQtWrapper_QPlainTextEdit::blockCount(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->blockCount());
}

bool  PythonQtWrapper_QPlainTextEdit::canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_canInsertFromMimeData(source));
}

bool  PythonQtWrapper_QPlainTextEdit::canPaste(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->canPaste());
}

bool  PythonQtWrapper_QPlainTextEdit::centerOnScroll(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->centerOnScroll());
}

void PythonQtWrapper_QPlainTextEdit::changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_changeEvent(e));
}

QPointF  PythonQtWrapper_QPlainTextEdit::contentOffset(QPlainTextEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_contentOffset());
}

void PythonQtWrapper_QPlainTextEdit::contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_contextMenuEvent(e));
}

QMimeData*  PythonQtWrapper_QPlainTextEdit::createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_createMimeDataFromSelection());
}

QMenu*  PythonQtWrapper_QPlainTextEdit::createStandardContextMenu(QPlainTextEdit* theWrappedObject)
{
  return ( theWrappedObject->createStandardContextMenu());
}

QTextCharFormat  PythonQtWrapper_QPlainTextEdit::currentCharFormat(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->currentCharFormat());
}

QTextCursor  PythonQtWrapper_QPlainTextEdit::cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->cursorForPosition(pos));
}

QRect  PythonQtWrapper_QPlainTextEdit::cursorRect(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->cursorRect());
}

QRect  PythonQtWrapper_QPlainTextEdit::cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const
{
  return ( theWrappedObject->cursorRect(cursor));
}

int  PythonQtWrapper_QPlainTextEdit::cursorWidth(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->cursorWidth());
}

QTextDocument*  PythonQtWrapper_QPlainTextEdit::document(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QString  PythonQtWrapper_QPlainTextEdit::documentTitle(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->documentTitle());
}

void PythonQtWrapper_QPlainTextEdit::dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dragEnterEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dragLeaveEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dragMoveEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dropEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::ensureCursorVisible(QPlainTextEdit* theWrappedObject)
{
  ( theWrappedObject->ensureCursorVisible());
}

bool  PythonQtWrapper_QPlainTextEdit::event(QPlainTextEdit* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_event(e));
}

QList<QTextEdit::ExtraSelection >  PythonQtWrapper_QPlainTextEdit::extraSelections(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->extraSelections());
}

bool  PythonQtWrapper_QPlainTextEdit::find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options)
{
  return ( theWrappedObject->find(exp, options));
}

QTextBlock  PythonQtWrapper_QPlainTextEdit::firstVisibleBlock(QPlainTextEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_firstVisibleBlock());
}

void PythonQtWrapper_QPlainTextEdit::focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_focusInEvent(e));
}

bool  PythonQtWrapper_QPlainTextEdit::focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QPlainTextEdit::focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_focusOutEvent(e));
}

QAbstractTextDocumentLayout::PaintContext  PythonQtWrapper_QPlainTextEdit::getPaintContext(QPlainTextEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_getPaintContext());
}

void PythonQtWrapper_QPlainTextEdit::inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_inputMethodEvent(arg__1));
}

QVariant  PythonQtWrapper_QPlainTextEdit::inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_inputMethodQuery(property));
}

void PythonQtWrapper_QPlainTextEdit::insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_insertFromMimeData(source));
}

bool  PythonQtWrapper_QPlainTextEdit::isReadOnly(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

bool  PythonQtWrapper_QPlainTextEdit::isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->isUndoRedoEnabled());
}

void PythonQtWrapper_QPlainTextEdit::keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_keyPressEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_keyReleaseEvent(e));
}

QPlainTextEdit::LineWrapMode  PythonQtWrapper_QPlainTextEdit::lineWrapMode(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->lineWrapMode());
}

QVariant  PythonQtWrapper_QPlainTextEdit::loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name)
{
  return ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_loadResource(type, name));
}

int  PythonQtWrapper_QPlainTextEdit::maximumBlockCount(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->maximumBlockCount());
}

void PythonQtWrapper_QPlainTextEdit::mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier)
{
  ( theWrappedObject->mergeCurrentCharFormat(modifier));
}

void PythonQtWrapper_QPlainTextEdit::mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mouseDoubleClickEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mouseMoveEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mousePressEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mouseReleaseEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode)
{
  ( theWrappedObject->moveCursor(operation, mode));
}

bool  PythonQtWrapper_QPlainTextEdit::overwriteMode(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->overwriteMode());
}

void PythonQtWrapper_QPlainTextEdit::paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_paintEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::print(QPlainTextEdit* theWrappedObject, QPrinter*  printer) const
{
  ( theWrappedObject->print(printer));
}

void PythonQtWrapper_QPlainTextEdit::resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_resizeEvent(e));
}

void PythonQtWrapper_QPlainTextEdit::scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_scrollContentsBy(dx, dy));
}

void PythonQtWrapper_QPlainTextEdit::setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setBackgroundVisible(visible));
}

void PythonQtWrapper_QPlainTextEdit::setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setCenterOnScroll(enabled));
}

void PythonQtWrapper_QPlainTextEdit::setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setCurrentCharFormat(format));
}

void PythonQtWrapper_QPlainTextEdit::setCursorWidth(QPlainTextEdit* theWrappedObject, int  width)
{
  ( theWrappedObject->setCursorWidth(width));
}

void PythonQtWrapper_QPlainTextEdit::setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document)
{
  ( theWrappedObject->setDocument(document));
}

void PythonQtWrapper_QPlainTextEdit::setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setDocumentTitle(title));
}

void PythonQtWrapper_QPlainTextEdit::setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections)
{
  ( theWrappedObject->setExtraSelections(selections));
}

void PythonQtWrapper_QPlainTextEdit::setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode)
{
  ( theWrappedObject->setLineWrapMode(mode));
}

void PythonQtWrapper_QPlainTextEdit::setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum)
{
  ( theWrappedObject->setMaximumBlockCount(maximum));
}

void PythonQtWrapper_QPlainTextEdit::setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite)
{
  ( theWrappedObject->setOverwriteMode(overwrite));
}

void PythonQtWrapper_QPlainTextEdit::setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro)
{
  ( theWrappedObject->setReadOnly(ro));
}

void PythonQtWrapper_QPlainTextEdit::setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b)
{
  ( theWrappedObject->setTabChangesFocus(b));
}

void PythonQtWrapper_QPlainTextEdit::setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width)
{
  ( theWrappedObject->setTabStopWidth(width));
}

void PythonQtWrapper_QPlainTextEdit::setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->setTextCursor(cursor));
}

void PythonQtWrapper_QPlainTextEdit::setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

void PythonQtWrapper_QPlainTextEdit::setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setUndoRedoEnabled(enable));
}

void PythonQtWrapper_QPlainTextEdit::setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy)
{
  ( theWrappedObject->setWordWrapMode(policy));
}

void PythonQtWrapper_QPlainTextEdit::showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_showEvent(arg__1));
}

bool  PythonQtWrapper_QPlainTextEdit::tabChangesFocus(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->tabChangesFocus());
}

int  PythonQtWrapper_QPlainTextEdit::tabStopWidth(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->tabStopWidth());
}

QTextCursor  PythonQtWrapper_QPlainTextEdit::textCursor(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textCursor());
}

Qt::TextInteractionFlags  PythonQtWrapper_QPlainTextEdit::textInteractionFlags(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

void PythonQtWrapper_QPlainTextEdit::timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_timerEvent(e));
}

QString  PythonQtWrapper_QPlainTextEdit::toPlainText(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

void PythonQtWrapper_QPlainTextEdit::wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e)
{
  ( ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_wheelEvent(e));
}

QTextOption::WrapMode  PythonQtWrapper_QPlainTextEdit::wordWrapMode(QPlainTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->wordWrapMode());
}



PythonQtShell_QPlastiqueStyle::~PythonQtShell_QPlastiqueStyle() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPlastiqueStyle::childEvent(QChildEvent*  arg__1)
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
  QPlastiqueStyle::childEvent(arg__1);
}
void PythonQtShell_QPlastiqueStyle::customEvent(QEvent*  arg__1)
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
  QPlastiqueStyle::customEvent(arg__1);
}
void PythonQtShell_QPlastiqueStyle::drawComplexControl(QStyle::ComplexControl  control0, const QStyleOptionComplex*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawComplexControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&control0, (void*)&option1, (void*)&painter2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlastiqueStyle::drawComplexControl(control0, option1, painter2, widget3);
}
void PythonQtShell_QPlastiqueStyle::drawControl(QStyle::ControlElement  element0, const QStyleOption*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::ControlElement" , "const QStyleOption*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&element0, (void*)&option1, (void*)&painter2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlastiqueStyle::drawControl(element0, option1, painter2, widget3);
}
void PythonQtShell_QPlastiqueStyle::drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3) const
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
  QPlastiqueStyle::drawItemPixmap(painter0, rect1, alignment2, pixmap3);
}
void PythonQtShell_QPlastiqueStyle::drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, QPalette::ColorRole  textRole6) const
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
  QPlastiqueStyle::drawItemText(painter0, rect1, flags2, pal3, enabled4, text5, textRole6);
}
void PythonQtShell_QPlastiqueStyle::drawPrimitive(QStyle::PrimitiveElement  element0, const QStyleOption*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPrimitive");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::PrimitiveElement" , "const QStyleOption*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&element0, (void*)&option1, (void*)&painter2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlastiqueStyle::drawPrimitive(element0, option1, painter2, widget3);
}
bool  PythonQtShell_QPlastiqueStyle::event(QEvent*  arg__1)
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
  return QPlastiqueStyle::event(arg__1);
}
bool  PythonQtShell_QPlastiqueStyle::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
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
  return QPlastiqueStyle::eventFilter(watched0, event1);
}
QPixmap  PythonQtShell_QPlastiqueStyle::generatedIconPixmap(QIcon::Mode  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2) const
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
  return QPlastiqueStyle::generatedIconPixmap(iconMode0, pixmap1, opt2);
}
QStyle::SubControl  PythonQtShell_QPlastiqueStyle::hitTestComplexControl(QStyle::ComplexControl  control0, const QStyleOptionComplex*  option1, const QPoint&  pos2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitTestComplexControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QStyle::SubControl" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "const QPoint&" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QStyle::SubControl returnValue;
    void* args[5] = {NULL, (void*)&control0, (void*)&option1, (void*)&pos2, (void*)&widget3};
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
  return QPlastiqueStyle::hitTestComplexControl(control0, option1, pos2, widget3);
}
QRect  PythonQtShell_QPlastiqueStyle::itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2) const
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
  return QPlastiqueStyle::itemPixmapRect(r0, flags1, pixmap2);
}
int  PythonQtShell_QPlastiqueStyle::pixelMetric(QStyle::PixelMetric  metric0, const QStyleOption*  option1, const QWidget*  widget2) const
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
  return QPlastiqueStyle::pixelMetric(metric0, option1, widget2);
}
void PythonQtShell_QPlastiqueStyle::polish(QApplication*  app0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QApplication*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&app0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlastiqueStyle::polish(app0);
}
void PythonQtShell_QPlastiqueStyle::polish(QPalette&  pal0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPalette&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&pal0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlastiqueStyle::polish(pal0);
}
void PythonQtShell_QPlastiqueStyle::polish(QWidget*  widget0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
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
  QPlastiqueStyle::polish(widget0);
}
QSize  PythonQtShell_QPlastiqueStyle::sizeFromContents(QStyle::ContentsType  type0, const QStyleOption*  option1, const QSize&  size2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sizeFromContents");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSize" , "QStyle::ContentsType" , "const QStyleOption*" , "const QSize&" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QSize returnValue;
    void* args[5] = {NULL, (void*)&type0, (void*)&option1, (void*)&size2, (void*)&widget3};
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
  return QPlastiqueStyle::sizeFromContents(type0, option1, size2, widget3);
}
QPalette  PythonQtShell_QPlastiqueStyle::standardPalette() const
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
  return QPlastiqueStyle::standardPalette();
}
QPixmap  PythonQtShell_QPlastiqueStyle::standardPixmap(QStyle::StandardPixmap  standardPixmap0, const QStyleOption*  opt1, const QWidget*  widget2) const
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
int  PythonQtShell_QPlastiqueStyle::styleHint(QStyle::StyleHint  hint0, const QStyleOption*  option1, const QWidget*  widget2, QStyleHintReturn*  returnData3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("styleHint");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QStyle::StyleHint" , "const QStyleOption*" , "const QWidget*" , "QStyleHintReturn*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      int returnValue;
    void* args[5] = {NULL, (void*)&hint0, (void*)&option1, (void*)&widget2, (void*)&returnData3};
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
  return QPlastiqueStyle::styleHint(hint0, option1, widget2, returnData3);
}
QRect  PythonQtShell_QPlastiqueStyle::subControlRect(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QStyle::SubControl  sc2, const QWidget*  widget3) const
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
  return QPlastiqueStyle::subControlRect(cc0, opt1, sc2, widget3);
}
QRect  PythonQtShell_QPlastiqueStyle::subElementRect(QStyle::SubElement  element0, const QStyleOption*  option1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("subElementRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRect" , "QStyle::SubElement" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QRect returnValue;
    void* args[4] = {NULL, (void*)&element0, (void*)&option1, (void*)&widget2};
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
  return QPlastiqueStyle::subElementRect(element0, option1, widget2);
}
void PythonQtShell_QPlastiqueStyle::timerEvent(QTimerEvent*  event0)
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
  QPlastiqueStyle::timerEvent(event0);
}
void PythonQtShell_QPlastiqueStyle::unpolish(QApplication*  app0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unpolish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QApplication*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&app0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPlastiqueStyle::unpolish(app0);
}
void PythonQtShell_QPlastiqueStyle::unpolish(QWidget*  widget0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unpolish");
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
  QPlastiqueStyle::unpolish(widget0);
}
QPlastiqueStyle* PythonQtWrapper_QPlastiqueStyle::new_QPlastiqueStyle()
{ 
return new PythonQtShell_QPlastiqueStyle(); }

void PythonQtWrapper_QPlastiqueStyle::drawComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const
{
  ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_drawComplexControl(control, option, painter, widget));
}

void PythonQtWrapper_QPlastiqueStyle::drawControl(QPlastiqueStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
  ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_drawControl(element, option, painter, widget));
}

void PythonQtWrapper_QPlastiqueStyle::drawPrimitive(QPlastiqueStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
  ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_drawPrimitive(element, option, painter, widget));
}

bool  PythonQtWrapper_QPlastiqueStyle::eventFilter(QPlastiqueStyle* theWrappedObject, QObject*  watched, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_eventFilter(watched, event));
}

QStyle::SubControl  PythonQtWrapper_QPlastiqueStyle::hitTestComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_hitTestComplexControl(control, option, pos, widget));
}

int  PythonQtWrapper_QPlastiqueStyle::pixelMetric(QPlastiqueStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_pixelMetric(metric, option, widget));
}

void PythonQtWrapper_QPlastiqueStyle::polish(QPlastiqueStyle* theWrappedObject, QApplication*  app)
{
  ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_polish(app));
}

void PythonQtWrapper_QPlastiqueStyle::polish(QPlastiqueStyle* theWrappedObject, QPalette&  pal)
{
  ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_polish(pal));
}

void PythonQtWrapper_QPlastiqueStyle::polish(QPlastiqueStyle* theWrappedObject, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_polish(widget));
}

QSize  PythonQtWrapper_QPlastiqueStyle::sizeFromContents(QPlastiqueStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_sizeFromContents(type, option, size, widget));
}

QPalette  PythonQtWrapper_QPlastiqueStyle::standardPalette(QPlastiqueStyle* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_standardPalette());
}

int  PythonQtWrapper_QPlastiqueStyle::styleHint(QPlastiqueStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
  return ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_styleHint(hint, option, widget, returnData));
}

QRect  PythonQtWrapper_QPlastiqueStyle::subControlRect(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_subControlRect(cc, opt, sc, widget));
}

QRect  PythonQtWrapper_QPlastiqueStyle::subElementRect(QPlastiqueStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_subElementRect(element, option, widget));
}

void PythonQtWrapper_QPlastiqueStyle::timerEvent(QPlastiqueStyle* theWrappedObject, QTimerEvent*  event)
{
  ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_timerEvent(event));
}

void PythonQtWrapper_QPlastiqueStyle::unpolish(QPlastiqueStyle* theWrappedObject, QApplication*  app)
{
  ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_unpolish(app));
}

void PythonQtWrapper_QPlastiqueStyle::unpolish(QPlastiqueStyle* theWrappedObject, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QPlastiqueStyle*)theWrappedObject)->promoted_unpolish(widget));
}



QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF()
{ 
return new QPolygonF(); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QPolygon&  a)
{ 
return new QPolygonF(a); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QPolygonF&  a)
{ 
return new QPolygonF(a); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QRectF&  r)
{ 
return new QPolygonF(r); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QVector<QPointF >&  v)
{ 
return new QPolygonF(v); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(int  size)
{ 
return new QPolygonF(size); }

void PythonQtWrapper_QPolygonF::append(QPolygonF* theWrappedObject, const QPointF&  t)
{
  ( theWrappedObject->append(t));
}

const QPointF*  PythonQtWrapper_QPolygonF::at(QPolygonF* theWrappedObject, int  i) const
{
  return &( theWrappedObject->at(i));
}

QRectF  PythonQtWrapper_QPolygonF::boundingRect(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

int  PythonQtWrapper_QPolygonF::capacity(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->capacity());
}

void PythonQtWrapper_QPolygonF::clear(QPolygonF* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QPolygonF::contains(QPolygonF* theWrappedObject, const QPointF&  t) const
{
  return ( theWrappedObject->contains(t));
}

bool  PythonQtWrapper_QPolygonF::containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const
{
  return ( theWrappedObject->containsPoint(pt, fillRule));
}

int  PythonQtWrapper_QPolygonF::count(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

int  PythonQtWrapper_QPolygonF::count(QPolygonF* theWrappedObject, const QPointF&  t) const
{
  return ( theWrappedObject->count(t));
}

bool  PythonQtWrapper_QPolygonF::empty(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

bool  PythonQtWrapper_QPolygonF::endsWith(QPolygonF* theWrappedObject, const QPointF&  t) const
{
  return ( theWrappedObject->endsWith(t));
}

QVector<QPointF >*  PythonQtWrapper_QPolygonF::fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size)
{
  return &( theWrappedObject->fill(t, size));
}

const QPointF*  PythonQtWrapper_QPolygonF::first(QPolygonF* theWrappedObject) const
{
  return &( theWrappedObject->first());
}

QVector<QPointF >  PythonQtWrapper_QPolygonF::static_QPolygonF_fromList(const QList<QPointF >&  list)
{
  return (QPolygonF::fromList(list));
}

int  PythonQtWrapper_QPolygonF::indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const
{
  return ( theWrappedObject->indexOf(t, from));
}

QPolygonF  PythonQtWrapper_QPolygonF::intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const
{
  return ( theWrappedObject->intersected(r));
}

bool  PythonQtWrapper_QPolygonF::isClosed(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->isClosed());
}

bool  PythonQtWrapper_QPolygonF::isEmpty(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QPolygonF::isSharedWith(QPolygonF* theWrappedObject, const QVector<QPointF >&  other) const
{
  return ( theWrappedObject->isSharedWith(other));
}

const QPointF*  PythonQtWrapper_QPolygonF::last(QPolygonF* theWrappedObject) const
{
  return &( theWrappedObject->last());
}

int  PythonQtWrapper_QPolygonF::lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const
{
  return ( theWrappedObject->lastIndexOf(t, from));
}

QVector<QPointF >  PythonQtWrapper_QPolygonF::mid(QPolygonF* theWrappedObject, int  pos, int  length) const
{
  return ( theWrappedObject->mid(pos, length));
}

bool  PythonQtWrapper_QPolygonF::__ne__(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const
{
  return ( (*theWrappedObject)!= v);
}

QPolygonF  PythonQtWrapper_QPolygonF::__mul__(QPolygonF* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QPolygonF  PythonQtWrapper_QPolygonF::__mul__(QPolygonF* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QPolygonF::writeTo(QPolygonF* theWrappedObject, QDataStream&  stream)
{
  stream <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QPolygonF::__eq__(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const
{
  return ( (*theWrappedObject)== v);
}

void PythonQtWrapper_QPolygonF::readFrom(QPolygonF* theWrappedObject, QDataStream&  stream)
{
  stream >>  (*theWrappedObject);
}

void PythonQtWrapper_QPolygonF::pop_back(QPolygonF* theWrappedObject)
{
  ( theWrappedObject->pop_back());
}

void PythonQtWrapper_QPolygonF::pop_front(QPolygonF* theWrappedObject)
{
  ( theWrappedObject->pop_front());
}

void PythonQtWrapper_QPolygonF::prepend(QPolygonF* theWrappedObject, const QPointF&  t)
{
  ( theWrappedObject->prepend(t));
}

void PythonQtWrapper_QPolygonF::push_back(QPolygonF* theWrappedObject, const QPointF&  t)
{
  ( theWrappedObject->push_back(t));
}

void PythonQtWrapper_QPolygonF::push_front(QPolygonF* theWrappedObject, const QPointF&  t)
{
  ( theWrappedObject->push_front(t));
}

void PythonQtWrapper_QPolygonF::remove(QPolygonF* theWrappedObject, int  i)
{
  ( theWrappedObject->remove(i));
}

void PythonQtWrapper_QPolygonF::remove(QPolygonF* theWrappedObject, int  i, int  n)
{
  ( theWrappedObject->remove(i, n));
}

void PythonQtWrapper_QPolygonF::replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t)
{
  ( theWrappedObject->replace(i, t));
}

void PythonQtWrapper_QPolygonF::reserve(QPolygonF* theWrappedObject, int  size)
{
  ( theWrappedObject->reserve(size));
}

void PythonQtWrapper_QPolygonF::resize(QPolygonF* theWrappedObject, int  size)
{
  ( theWrappedObject->resize(size));
}

void PythonQtWrapper_QPolygonF::setSharable(QPolygonF* theWrappedObject, bool  sharable)
{
  ( theWrappedObject->setSharable(sharable));
}

int  PythonQtWrapper_QPolygonF::size(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QPolygonF::squeeze(QPolygonF* theWrappedObject)
{
  ( theWrappedObject->squeeze());
}

bool  PythonQtWrapper_QPolygonF::startsWith(QPolygonF* theWrappedObject, const QPointF&  t) const
{
  return ( theWrappedObject->startsWith(t));
}

QPolygonF  PythonQtWrapper_QPolygonF::subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const
{
  return ( theWrappedObject->subtracted(r));
}

void PythonQtWrapper_QPolygonF::swap(QPolygonF* theWrappedObject, QPolygonF&  other)
{
  ( theWrappedObject->swap(other));
}

QList<QPointF >  PythonQtWrapper_QPolygonF::toList(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->toList());
}

QPolygon  PythonQtWrapper_QPolygonF::toPolygon(QPolygonF* theWrappedObject) const
{
  return ( theWrappedObject->toPolygon());
}

void PythonQtWrapper_QPolygonF::translate(QPolygonF* theWrappedObject, const QPointF&  offset)
{
  ( theWrappedObject->translate(offset));
}

void PythonQtWrapper_QPolygonF::translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QPolygonF  PythonQtWrapper_QPolygonF::translated(QPolygonF* theWrappedObject, const QPointF&  offset) const
{
  return ( theWrappedObject->translated(offset));
}

QPolygonF  PythonQtWrapper_QPolygonF::translated(QPolygonF* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QPolygonF  PythonQtWrapper_QPolygonF::united(QPolygonF* theWrappedObject, const QPolygonF&  r) const
{
  return ( theWrappedObject->united(r));
}

QPointF  PythonQtWrapper_QPolygonF::value(QPolygonF* theWrappedObject, int  i) const
{
  return ( theWrappedObject->value(i));
}

QPointF  PythonQtWrapper_QPolygonF::value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const
{
  return ( theWrappedObject->value(i, defaultValue));
}

QString PythonQtWrapper_QPolygonF::py_toString(QPolygonF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QPrintDialog::~PythonQtShell_QPrintDialog() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPrintDialog::accept()
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
  QPrintDialog::accept();
}
void PythonQtShell_QPrintDialog::actionEvent(QActionEvent*  arg__1)
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
  QPrintDialog::actionEvent(arg__1);
}
void PythonQtShell_QPrintDialog::changeEvent(QEvent*  arg__1)
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
  QPrintDialog::changeEvent(arg__1);
}
void PythonQtShell_QPrintDialog::childEvent(QChildEvent*  arg__1)
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
  QPrintDialog::childEvent(arg__1);
}
void PythonQtShell_QPrintDialog::closeEvent(QCloseEvent*  arg__1)
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
  QPrintDialog::closeEvent(arg__1);
}
void PythonQtShell_QPrintDialog::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QPrintDialog::contextMenuEvent(arg__1);
}
void PythonQtShell_QPrintDialog::customEvent(QEvent*  arg__1)
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
  QPrintDialog::customEvent(arg__1);
}
int  PythonQtShell_QPrintDialog::devType() const
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
  return QPrintDialog::devType();
}
void PythonQtShell_QPrintDialog::done(int  result0)
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
  QPrintDialog::done(result0);
}
void PythonQtShell_QPrintDialog::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QPrintDialog::dragEnterEvent(arg__1);
}
void PythonQtShell_QPrintDialog::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QPrintDialog::dragLeaveEvent(arg__1);
}
void PythonQtShell_QPrintDialog::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QPrintDialog::dragMoveEvent(arg__1);
}
void PythonQtShell_QPrintDialog::dropEvent(QDropEvent*  arg__1)
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
  QPrintDialog::dropEvent(arg__1);
}
void PythonQtShell_QPrintDialog::enterEvent(QEvent*  arg__1)
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
  QPrintDialog::enterEvent(arg__1);
}
bool  PythonQtShell_QPrintDialog::event(QEvent*  arg__1)
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
  return QPrintDialog::event(arg__1);
}
bool  PythonQtShell_QPrintDialog::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPrintDialog::eventFilter(arg__1, arg__2);
}
int  PythonQtShell_QPrintDialog::exec()
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
  return QPrintDialog::exec();
}
void PythonQtShell_QPrintDialog::focusInEvent(QFocusEvent*  arg__1)
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
  QPrintDialog::focusInEvent(arg__1);
}
bool  PythonQtShell_QPrintDialog::focusNextPrevChild(bool  next0)
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
  return QPrintDialog::focusNextPrevChild(next0);
}
void PythonQtShell_QPrintDialog::focusOutEvent(QFocusEvent*  arg__1)
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
  QPrintDialog::focusOutEvent(arg__1);
}
int  PythonQtShell_QPrintDialog::heightForWidth(int  arg__1) const
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
  return QPrintDialog::heightForWidth(arg__1);
}
void PythonQtShell_QPrintDialog::hideEvent(QHideEvent*  arg__1)
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
  QPrintDialog::hideEvent(arg__1);
}
void PythonQtShell_QPrintDialog::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QPrintDialog::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QPrintDialog::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QPrintDialog::inputMethodQuery(arg__1);
}
void PythonQtShell_QPrintDialog::keyPressEvent(QKeyEvent*  arg__1)
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
  QPrintDialog::keyPressEvent(arg__1);
}
void PythonQtShell_QPrintDialog::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QPrintDialog::keyReleaseEvent(arg__1);
}
void PythonQtShell_QPrintDialog::languageChange()
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
  QPrintDialog::languageChange();
}
void PythonQtShell_QPrintDialog::leaveEvent(QEvent*  arg__1)
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
  QPrintDialog::leaveEvent(arg__1);
}
int  PythonQtShell_QPrintDialog::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QPrintDialog::metric(arg__1);
}
void PythonQtShell_QPrintDialog::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QPrintDialog::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QPrintDialog::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QPrintDialog::mouseMoveEvent(arg__1);
}
void PythonQtShell_QPrintDialog::mousePressEvent(QMouseEvent*  arg__1)
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
  QPrintDialog::mousePressEvent(arg__1);
}
void PythonQtShell_QPrintDialog::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QPrintDialog::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QPrintDialog::moveEvent(QMoveEvent*  arg__1)
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
  QPrintDialog::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QPrintDialog::paintEngine() const
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
  return QPrintDialog::paintEngine();
}
void PythonQtShell_QPrintDialog::paintEvent(QPaintEvent*  arg__1)
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
  QPrintDialog::paintEvent(arg__1);
}
void PythonQtShell_QPrintDialog::reject()
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
  QPrintDialog::reject();
}
void PythonQtShell_QPrintDialog::resizeEvent(QResizeEvent*  arg__1)
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
  QPrintDialog::resizeEvent(arg__1);
}
void PythonQtShell_QPrintDialog::showEvent(QShowEvent*  arg__1)
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
  QPrintDialog::showEvent(arg__1);
}
void PythonQtShell_QPrintDialog::tabletEvent(QTabletEvent*  arg__1)
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
  QPrintDialog::tabletEvent(arg__1);
}
void PythonQtShell_QPrintDialog::timerEvent(QTimerEvent*  arg__1)
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
  QPrintDialog::timerEvent(arg__1);
}
void PythonQtShell_QPrintDialog::wheelEvent(QWheelEvent*  arg__1)
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
  QPrintDialog::wheelEvent(arg__1);
}
QPrintDialog* PythonQtWrapper_QPrintDialog::new_QPrintDialog(QPrinter*  printer, QWidget*  parent)
{ 
return new PythonQtShell_QPrintDialog(printer, parent); }

QPrintDialog* PythonQtWrapper_QPrintDialog::new_QPrintDialog(QWidget*  parent)
{ 
return new PythonQtShell_QPrintDialog(parent); }

void PythonQtWrapper_QPrintDialog::accepted(QPrintDialog* theWrappedObject)
{
  ( theWrappedObject->accepted());
}

void PythonQtWrapper_QPrintDialog::done(QPrintDialog* theWrappedObject, int  result)
{
  ( ((PythonQtPublicPromoter_QPrintDialog*)theWrappedObject)->promoted_done(result));
}

int  PythonQtWrapper_QPrintDialog::exec(QPrintDialog* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QPrintDialog*)theWrappedObject)->promoted_exec());
}

void PythonQtWrapper_QPrintDialog::open(QPrintDialog* theWrappedObject)
{
  ( theWrappedObject->open());
}

void PythonQtWrapper_QPrintDialog::open(QPrintDialog* theWrappedObject, QObject*  receiver, const char*  member)
{
  ( theWrappedObject->open(receiver, member));
}

QAbstractPrintDialog::PrintDialogOptions  PythonQtWrapper_QPrintDialog::options(QPrintDialog* theWrappedObject) const
{
  return ( theWrappedObject->options());
}

void PythonQtWrapper_QPrintDialog::setOption(QPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option, bool  on)
{
  ( theWrappedObject->setOption(option, on));
}

void PythonQtWrapper_QPrintDialog::setOptions(QPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOptions  options)
{
  ( theWrappedObject->setOptions(options));
}

bool  PythonQtWrapper_QPrintDialog::testOption(QPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option) const
{
  return ( theWrappedObject->testOption(option));
}



PythonQtShell_QPrintEngine::~PythonQtShell_QPrintEngine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QPrintEngine::abort()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("abort");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("abort", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
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
int  PythonQtShell_QPrintEngine::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return int();
}
bool  PythonQtShell_QPrintEngine::newPage()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("newPage");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("newPage", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
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
QPrinter::PrinterState  PythonQtShell_QPrintEngine::printerState() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("printerState");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QPrinter::PrinterState"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPrinter::PrinterState returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("printerState", methodInfo, result);
        } else {
          returnValue = *((QPrinter::PrinterState*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QPrinter::PrinterState();
}
QVariant  PythonQtShell_QPrintEngine::property(QPrintEngine::PrintEnginePropertyKey  key0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("property");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "QPrintEngine::PrintEnginePropertyKey"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&key0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("property", methodInfo, result);
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
  return QVariant();
}
void PythonQtShell_QPrintEngine::setProperty(QPrintEngine::PrintEnginePropertyKey  key0, const QVariant&  value1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setProperty");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPrintEngine::PrintEnginePropertyKey" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&key0, (void*)&value1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
QPrintEngine* PythonQtWrapper_QPrintEngine::new_QPrintEngine()
{ 
return new PythonQtShell_QPrintEngine(); }

bool  PythonQtWrapper_QPrintEngine::abort(QPrintEngine* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->promoted_abort());
}

int  PythonQtWrapper_QPrintEngine::metric(QPrintEngine* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const
{
  return ( ((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->promoted_metric(arg__1));
}

bool  PythonQtWrapper_QPrintEngine::newPage(QPrintEngine* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->promoted_newPage());
}

QPrinter::PrinterState  PythonQtWrapper_QPrintEngine::printerState(QPrintEngine* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->promoted_printerState());
}

QVariant  PythonQtWrapper_QPrintEngine::property(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key) const
{
  return ( ((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->promoted_property(key));
}

void PythonQtWrapper_QPrintEngine::setProperty(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QPrintEngine*)theWrappedObject)->promoted_setProperty(key, value));
}



PythonQtShell_QPrintPreviewDialog::~PythonQtShell_QPrintPreviewDialog() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPrintPreviewDialog::accept()
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
  QPrintPreviewDialog::accept();
}
void PythonQtShell_QPrintPreviewDialog::actionEvent(QActionEvent*  arg__1)
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
  QPrintPreviewDialog::actionEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::changeEvent(QEvent*  arg__1)
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
  QPrintPreviewDialog::changeEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::childEvent(QChildEvent*  arg__1)
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
  QPrintPreviewDialog::childEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::closeEvent(QCloseEvent*  arg__1)
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
  QPrintPreviewDialog::closeEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QPrintPreviewDialog::contextMenuEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::customEvent(QEvent*  arg__1)
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
  QPrintPreviewDialog::customEvent(arg__1);
}
int  PythonQtShell_QPrintPreviewDialog::devType() const
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
  return QPrintPreviewDialog::devType();
}
void PythonQtShell_QPrintPreviewDialog::done(int  result0)
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
  QPrintPreviewDialog::done(result0);
}
void PythonQtShell_QPrintPreviewDialog::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QPrintPreviewDialog::dragEnterEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QPrintPreviewDialog::dragLeaveEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QPrintPreviewDialog::dragMoveEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::dropEvent(QDropEvent*  arg__1)
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
  QPrintPreviewDialog::dropEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::enterEvent(QEvent*  arg__1)
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
  QPrintPreviewDialog::enterEvent(arg__1);
}
bool  PythonQtShell_QPrintPreviewDialog::event(QEvent*  arg__1)
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
  return QPrintPreviewDialog::event(arg__1);
}
bool  PythonQtShell_QPrintPreviewDialog::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPrintPreviewDialog::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPrintPreviewDialog::focusInEvent(QFocusEvent*  arg__1)
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
  QPrintPreviewDialog::focusInEvent(arg__1);
}
bool  PythonQtShell_QPrintPreviewDialog::focusNextPrevChild(bool  next0)
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
  return QPrintPreviewDialog::focusNextPrevChild(next0);
}
void PythonQtShell_QPrintPreviewDialog::focusOutEvent(QFocusEvent*  arg__1)
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
  QPrintPreviewDialog::focusOutEvent(arg__1);
}
int  PythonQtShell_QPrintPreviewDialog::heightForWidth(int  arg__1) const
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
  return QPrintPreviewDialog::heightForWidth(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::hideEvent(QHideEvent*  arg__1)
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
  QPrintPreviewDialog::hideEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QPrintPreviewDialog::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QPrintPreviewDialog::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QPrintPreviewDialog::inputMethodQuery(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::keyPressEvent(QKeyEvent*  arg__1)
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
  QPrintPreviewDialog::keyPressEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QPrintPreviewDialog::keyReleaseEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::languageChange()
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
  QPrintPreviewDialog::languageChange();
}
void PythonQtShell_QPrintPreviewDialog::leaveEvent(QEvent*  arg__1)
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
  QPrintPreviewDialog::leaveEvent(arg__1);
}
int  PythonQtShell_QPrintPreviewDialog::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QPrintPreviewDialog::metric(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QPrintPreviewDialog::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QPrintPreviewDialog::mouseMoveEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::mousePressEvent(QMouseEvent*  arg__1)
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
  QPrintPreviewDialog::mousePressEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QPrintPreviewDialog::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::moveEvent(QMoveEvent*  arg__1)
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
  QPrintPreviewDialog::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QPrintPreviewDialog::paintEngine() const
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
  return QPrintPreviewDialog::paintEngine();
}
void PythonQtShell_QPrintPreviewDialog::paintEvent(QPaintEvent*  arg__1)
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
  QPrintPreviewDialog::paintEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::reject()
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
  QPrintPreviewDialog::reject();
}
void PythonQtShell_QPrintPreviewDialog::resizeEvent(QResizeEvent*  arg__1)
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
  QPrintPreviewDialog::resizeEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::showEvent(QShowEvent*  arg__1)
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
  QPrintPreviewDialog::showEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::tabletEvent(QTabletEvent*  arg__1)
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
  QPrintPreviewDialog::tabletEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::timerEvent(QTimerEvent*  arg__1)
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
  QPrintPreviewDialog::timerEvent(arg__1);
}
void PythonQtShell_QPrintPreviewDialog::wheelEvent(QWheelEvent*  arg__1)
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
  QPrintPreviewDialog::wheelEvent(arg__1);
}
QPrintPreviewDialog* PythonQtWrapper_QPrintPreviewDialog::new_QPrintPreviewDialog(QPrinter*  printer, QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QPrintPreviewDialog(printer, parent, flags); }

QPrintPreviewDialog* PythonQtWrapper_QPrintPreviewDialog::new_QPrintPreviewDialog(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QPrintPreviewDialog(parent, flags); }

void PythonQtWrapper_QPrintPreviewDialog::done(QPrintPreviewDialog* theWrappedObject, int  result)
{
  ( ((PythonQtPublicPromoter_QPrintPreviewDialog*)theWrappedObject)->promoted_done(result));
}

void PythonQtWrapper_QPrintPreviewDialog::open(QPrintPreviewDialog* theWrappedObject)
{
  ( theWrappedObject->open());
}

void PythonQtWrapper_QPrintPreviewDialog::open(QPrintPreviewDialog* theWrappedObject, QObject*  receiver, const char*  member)
{
  ( theWrappedObject->open(receiver, member));
}

QPrinter*  PythonQtWrapper_QPrintPreviewDialog::printer(QPrintPreviewDialog* theWrappedObject)
{
  return ( theWrappedObject->printer());
}

void PythonQtWrapper_QPrintPreviewDialog::setVisible(QPrintPreviewDialog* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setVisible(visible));
}



PythonQtShell_QPrintPreviewWidget::~PythonQtShell_QPrintPreviewWidget() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPrintPreviewWidget::actionEvent(QActionEvent*  arg__1)
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
  QPrintPreviewWidget::actionEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::changeEvent(QEvent*  arg__1)
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
  QPrintPreviewWidget::changeEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::childEvent(QChildEvent*  arg__1)
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
  QPrintPreviewWidget::childEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::closeEvent(QCloseEvent*  arg__1)
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
  QPrintPreviewWidget::closeEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QPrintPreviewWidget::contextMenuEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::customEvent(QEvent*  arg__1)
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
  QPrintPreviewWidget::customEvent(arg__1);
}
int  PythonQtShell_QPrintPreviewWidget::devType() const
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
  return QPrintPreviewWidget::devType();
}
void PythonQtShell_QPrintPreviewWidget::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QPrintPreviewWidget::dragEnterEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QPrintPreviewWidget::dragLeaveEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QPrintPreviewWidget::dragMoveEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::dropEvent(QDropEvent*  arg__1)
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
  QPrintPreviewWidget::dropEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::enterEvent(QEvent*  arg__1)
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
  QPrintPreviewWidget::enterEvent(arg__1);
}
bool  PythonQtShell_QPrintPreviewWidget::event(QEvent*  arg__1)
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
  return QPrintPreviewWidget::event(arg__1);
}
bool  PythonQtShell_QPrintPreviewWidget::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPrintPreviewWidget::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPrintPreviewWidget::focusInEvent(QFocusEvent*  arg__1)
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
  QPrintPreviewWidget::focusInEvent(arg__1);
}
bool  PythonQtShell_QPrintPreviewWidget::focusNextPrevChild(bool  next0)
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
  return QPrintPreviewWidget::focusNextPrevChild(next0);
}
void PythonQtShell_QPrintPreviewWidget::focusOutEvent(QFocusEvent*  arg__1)
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
  QPrintPreviewWidget::focusOutEvent(arg__1);
}
int  PythonQtShell_QPrintPreviewWidget::heightForWidth(int  arg__1) const
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
  return QPrintPreviewWidget::heightForWidth(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::hideEvent(QHideEvent*  arg__1)
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
  QPrintPreviewWidget::hideEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QPrintPreviewWidget::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QPrintPreviewWidget::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QPrintPreviewWidget::inputMethodQuery(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::keyPressEvent(QKeyEvent*  arg__1)
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
  QPrintPreviewWidget::keyPressEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QPrintPreviewWidget::keyReleaseEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::languageChange()
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
  QPrintPreviewWidget::languageChange();
}
void PythonQtShell_QPrintPreviewWidget::leaveEvent(QEvent*  arg__1)
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
  QPrintPreviewWidget::leaveEvent(arg__1);
}
int  PythonQtShell_QPrintPreviewWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QPrintPreviewWidget::metric(arg__1);
}
QSize  PythonQtShell_QPrintPreviewWidget::minimumSizeHint() const
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
  return QPrintPreviewWidget::minimumSizeHint();
}
void PythonQtShell_QPrintPreviewWidget::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QPrintPreviewWidget::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QPrintPreviewWidget::mouseMoveEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::mousePressEvent(QMouseEvent*  arg__1)
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
  QPrintPreviewWidget::mousePressEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QPrintPreviewWidget::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::moveEvent(QMoveEvent*  arg__1)
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
  QPrintPreviewWidget::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QPrintPreviewWidget::paintEngine() const
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
  return QPrintPreviewWidget::paintEngine();
}
void PythonQtShell_QPrintPreviewWidget::paintEvent(QPaintEvent*  arg__1)
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
  QPrintPreviewWidget::paintEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::resizeEvent(QResizeEvent*  arg__1)
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
  QPrintPreviewWidget::resizeEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::showEvent(QShowEvent*  arg__1)
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
  QPrintPreviewWidget::showEvent(arg__1);
}
QSize  PythonQtShell_QPrintPreviewWidget::sizeHint() const
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
  return QPrintPreviewWidget::sizeHint();
}
void PythonQtShell_QPrintPreviewWidget::tabletEvent(QTabletEvent*  arg__1)
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
  QPrintPreviewWidget::tabletEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::timerEvent(QTimerEvent*  arg__1)
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
  QPrintPreviewWidget::timerEvent(arg__1);
}
void PythonQtShell_QPrintPreviewWidget::wheelEvent(QWheelEvent*  arg__1)
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
  QPrintPreviewWidget::wheelEvent(arg__1);
}
QPrintPreviewWidget* PythonQtWrapper_QPrintPreviewWidget::new_QPrintPreviewWidget(QPrinter*  printer, QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QPrintPreviewWidget(printer, parent, flags); }

QPrintPreviewWidget* PythonQtWrapper_QPrintPreviewWidget::new_QPrintPreviewWidget(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QPrintPreviewWidget(parent, flags); }

int  PythonQtWrapper_QPrintPreviewWidget::currentPage(QPrintPreviewWidget* theWrappedObject) const
{
  return ( theWrappedObject->currentPage());
}

int  PythonQtWrapper_QPrintPreviewWidget::numPages(QPrintPreviewWidget* theWrappedObject) const
{
  return ( theWrappedObject->numPages());
}

QPrinter::Orientation  PythonQtWrapper_QPrintPreviewWidget::orientation(QPrintPreviewWidget* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

int  PythonQtWrapper_QPrintPreviewWidget::pageCount(QPrintPreviewWidget* theWrappedObject) const
{
  return ( theWrappedObject->pageCount());
}

void PythonQtWrapper_QPrintPreviewWidget::setVisible(QPrintPreviewWidget* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setVisible(visible));
}

QPrintPreviewWidget::ViewMode  PythonQtWrapper_QPrintPreviewWidget::viewMode(QPrintPreviewWidget* theWrappedObject) const
{
  return ( theWrappedObject->viewMode());
}

qreal  PythonQtWrapper_QPrintPreviewWidget::zoomFactor(QPrintPreviewWidget* theWrappedObject) const
{
  return ( theWrappedObject->zoomFactor());
}

QPrintPreviewWidget::ZoomMode  PythonQtWrapper_QPrintPreviewWidget::zoomMode(QPrintPreviewWidget* theWrappedObject) const
{
  return ( theWrappedObject->zoomMode());
}



PythonQtShell_QPrinter::~PythonQtShell_QPrinter() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QPrinter::devType() const
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
  return QPrinter::devType();
}
int  PythonQtShell_QPrinter::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QPrinter::metric(arg__1);
}
QPaintEngine*  PythonQtShell_QPrinter::paintEngine() const
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
  return QPrinter::paintEngine();
}
QPrinter* PythonQtWrapper_QPrinter::new_QPrinter(QPrinter::PrinterMode  mode)
{ 
return new PythonQtShell_QPrinter(mode); }

QPrinter* PythonQtWrapper_QPrinter::new_QPrinter(const QPrinterInfo&  printer, QPrinter::PrinterMode  mode)
{ 
return new PythonQtShell_QPrinter(printer, mode); }

bool  PythonQtWrapper_QPrinter::abort(QPrinter* theWrappedObject)
{
  return ( theWrappedObject->abort());
}

int  PythonQtWrapper_QPrinter::actualNumCopies(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->actualNumCopies());
}

bool  PythonQtWrapper_QPrinter::collateCopies(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->collateCopies());
}

QPrinter::ColorMode  PythonQtWrapper_QPrinter::colorMode(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->colorMode());
}

int  PythonQtWrapper_QPrinter::copyCount(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->copyCount());
}

QString  PythonQtWrapper_QPrinter::creator(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->creator());
}

int  PythonQtWrapper_QPrinter::devType(QPrinter* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->promoted_devType());
}

QString  PythonQtWrapper_QPrinter::docName(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->docName());
}

bool  PythonQtWrapper_QPrinter::doubleSidedPrinting(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->doubleSidedPrinting());
}

QPrinter::DuplexMode  PythonQtWrapper_QPrinter::duplex(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->duplex());
}

bool  PythonQtWrapper_QPrinter::fontEmbeddingEnabled(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->fontEmbeddingEnabled());
}

int  PythonQtWrapper_QPrinter::fromPage(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->fromPage());
}

bool  PythonQtWrapper_QPrinter::fullPage(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->fullPage());
}

void PythonQtWrapper_QPrinter::getPageMargins(QPrinter* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom, QPrinter::Unit  unit) const
{
  ( theWrappedObject->getPageMargins(left, top, right, bottom, unit));
}

bool  PythonQtWrapper_QPrinter::isValid(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QPrinter::metric(QPrinter* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const
{
  return ( ((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->promoted_metric(arg__1));
}

bool  PythonQtWrapper_QPrinter::newPage(QPrinter* theWrappedObject)
{
  return ( theWrappedObject->newPage());
}

int  PythonQtWrapper_QPrinter::numCopies(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->numCopies());
}

QPrinter::Orientation  PythonQtWrapper_QPrinter::orientation(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

QString  PythonQtWrapper_QPrinter::outputFileName(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->outputFileName());
}

QPrinter::OutputFormat  PythonQtWrapper_QPrinter::outputFormat(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->outputFormat());
}

QPrinter::PageOrder  PythonQtWrapper_QPrinter::pageOrder(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->pageOrder());
}

QRect  PythonQtWrapper_QPrinter::pageRect(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->pageRect());
}

QRectF  PythonQtWrapper_QPrinter::pageRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const
{
  return ( theWrappedObject->pageRect(arg__1));
}

QPrinter::PageSize  PythonQtWrapper_QPrinter::pageSize(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->pageSize());
}

QPaintEngine*  PythonQtWrapper_QPrinter::paintEngine(QPrinter* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->promoted_paintEngine());
}

QRect  PythonQtWrapper_QPrinter::paperRect(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->paperRect());
}

QRectF  PythonQtWrapper_QPrinter::paperRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const
{
  return ( theWrappedObject->paperRect(arg__1));
}

QPrinter::PageSize  PythonQtWrapper_QPrinter::paperSize(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->paperSize());
}

QSizeF  PythonQtWrapper_QPrinter::paperSize(QPrinter* theWrappedObject, QPrinter::Unit  unit) const
{
  return ( theWrappedObject->paperSize(unit));
}

QPrinter::PaperSource  PythonQtWrapper_QPrinter::paperSource(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->paperSource());
}

QPrintEngine*  PythonQtWrapper_QPrinter::printEngine(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->printEngine());
}

QString  PythonQtWrapper_QPrinter::printProgram(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->printProgram());
}

QPrinter::PrintRange  PythonQtWrapper_QPrinter::printRange(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->printRange());
}

QString  PythonQtWrapper_QPrinter::printerName(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->printerName());
}

QPrinter::PrinterState  PythonQtWrapper_QPrinter::printerState(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->printerState());
}

int  PythonQtWrapper_QPrinter::resolution(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->resolution());
}

void PythonQtWrapper_QPrinter::setCollateCopies(QPrinter* theWrappedObject, bool  collate)
{
  ( theWrappedObject->setCollateCopies(collate));
}

void PythonQtWrapper_QPrinter::setColorMode(QPrinter* theWrappedObject, QPrinter::ColorMode  arg__1)
{
  ( theWrappedObject->setColorMode(arg__1));
}

void PythonQtWrapper_QPrinter::setCopyCount(QPrinter* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setCopyCount(arg__1));
}

void PythonQtWrapper_QPrinter::setCreator(QPrinter* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setCreator(arg__1));
}

void PythonQtWrapper_QPrinter::setDocName(QPrinter* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setDocName(arg__1));
}

void PythonQtWrapper_QPrinter::setDoubleSidedPrinting(QPrinter* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setDoubleSidedPrinting(enable));
}

void PythonQtWrapper_QPrinter::setDuplex(QPrinter* theWrappedObject, QPrinter::DuplexMode  duplex)
{
  ( theWrappedObject->setDuplex(duplex));
}

void PythonQtWrapper_QPrinter::setEngines(QPrinter* theWrappedObject, QPrintEngine*  printEngine, QPaintEngine*  paintEngine)
{
  ( ((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->promoted_setEngines(printEngine, paintEngine));
}

void PythonQtWrapper_QPrinter::setFontEmbeddingEnabled(QPrinter* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setFontEmbeddingEnabled(enable));
}

void PythonQtWrapper_QPrinter::setFromTo(QPrinter* theWrappedObject, int  fromPage, int  toPage)
{
  ( theWrappedObject->setFromTo(fromPage, toPage));
}

void PythonQtWrapper_QPrinter::setFullPage(QPrinter* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setFullPage(arg__1));
}

void PythonQtWrapper_QPrinter::setNumCopies(QPrinter* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setNumCopies(arg__1));
}

void PythonQtWrapper_QPrinter::setOrientation(QPrinter* theWrappedObject, QPrinter::Orientation  arg__1)
{
  ( theWrappedObject->setOrientation(arg__1));
}

void PythonQtWrapper_QPrinter::setOutputFileName(QPrinter* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setOutputFileName(arg__1));
}

void PythonQtWrapper_QPrinter::setOutputFormat(QPrinter* theWrappedObject, QPrinter::OutputFormat  format)
{
  ( theWrappedObject->setOutputFormat(format));
}

void PythonQtWrapper_QPrinter::setPageMargins(QPrinter* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom, QPrinter::Unit  unit)
{
  ( theWrappedObject->setPageMargins(left, top, right, bottom, unit));
}

void PythonQtWrapper_QPrinter::setPageOrder(QPrinter* theWrappedObject, QPrinter::PageOrder  arg__1)
{
  ( theWrappedObject->setPageOrder(arg__1));
}

void PythonQtWrapper_QPrinter::setPageSize(QPrinter* theWrappedObject, QPrinter::PageSize  arg__1)
{
  ( theWrappedObject->setPageSize(arg__1));
}

void PythonQtWrapper_QPrinter::setPaperSize(QPrinter* theWrappedObject, QPrinter::PageSize  arg__1)
{
  ( theWrappedObject->setPaperSize(arg__1));
}

void PythonQtWrapper_QPrinter::setPaperSize(QPrinter* theWrappedObject, const QSizeF&  paperSize, QPrinter::Unit  unit)
{
  ( theWrappedObject->setPaperSize(paperSize, unit));
}

void PythonQtWrapper_QPrinter::setPaperSource(QPrinter* theWrappedObject, QPrinter::PaperSource  arg__1)
{
  ( theWrappedObject->setPaperSource(arg__1));
}

void PythonQtWrapper_QPrinter::setPrintProgram(QPrinter* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setPrintProgram(arg__1));
}

void PythonQtWrapper_QPrinter::setPrintRange(QPrinter* theWrappedObject, QPrinter::PrintRange  range)
{
  ( theWrappedObject->setPrintRange(range));
}

void PythonQtWrapper_QPrinter::setPrinterName(QPrinter* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setPrinterName(arg__1));
}

void PythonQtWrapper_QPrinter::setResolution(QPrinter* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setResolution(arg__1));
}

QList<int >  PythonQtWrapper_QPrinter::supportedResolutions(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->supportedResolutions());
}

bool  PythonQtWrapper_QPrinter::supportsMultipleCopies(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->supportsMultipleCopies());
}

int  PythonQtWrapper_QPrinter::toPage(QPrinter* theWrappedObject) const
{
  return ( theWrappedObject->toPage());
}



QPrinterInfo* PythonQtWrapper_QPrinterInfo::new_QPrinterInfo()
{ 
return new QPrinterInfo(); }

QPrinterInfo* PythonQtWrapper_QPrinterInfo::new_QPrinterInfo(const QPrinter&  printer)
{ 
return new QPrinterInfo(printer); }

QPrinterInfo* PythonQtWrapper_QPrinterInfo::new_QPrinterInfo(const QPrinterInfo&  other)
{ 
return new QPrinterInfo(other); }

QList<QPrinterInfo >  PythonQtWrapper_QPrinterInfo::static_QPrinterInfo_availablePrinters()
{
  return (QPrinterInfo::availablePrinters());
}

QPrinterInfo  PythonQtWrapper_QPrinterInfo::static_QPrinterInfo_defaultPrinter()
{
  return (QPrinterInfo::defaultPrinter());
}

bool  PythonQtWrapper_QPrinterInfo::isDefault(QPrinterInfo* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

bool  PythonQtWrapper_QPrinterInfo::isNull(QPrinterInfo* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QPrinterInfo::printerName(QPrinterInfo* theWrappedObject) const
{
  return ( theWrappedObject->printerName());
}

QList<QPrinter::PageSize >  PythonQtWrapper_QPrinterInfo::supportedPaperSizes(QPrinterInfo* theWrappedObject) const
{
  return ( theWrappedObject->supportedPaperSizes());
}



PythonQtShell_QProgressBar::~PythonQtShell_QProgressBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QProgressBar::actionEvent(QActionEvent*  arg__1)
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
  QProgressBar::actionEvent(arg__1);
}
void PythonQtShell_QProgressBar::changeEvent(QEvent*  arg__1)
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
  QProgressBar::changeEvent(arg__1);
}
void PythonQtShell_QProgressBar::childEvent(QChildEvent*  arg__1)
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
  QProgressBar::childEvent(arg__1);
}
void PythonQtShell_QProgressBar::closeEvent(QCloseEvent*  arg__1)
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
  QProgressBar::closeEvent(arg__1);
}
void PythonQtShell_QProgressBar::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QProgressBar::contextMenuEvent(arg__1);
}
void PythonQtShell_QProgressBar::customEvent(QEvent*  arg__1)
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
  QProgressBar::customEvent(arg__1);
}
int  PythonQtShell_QProgressBar::devType() const
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
  return QProgressBar::devType();
}
void PythonQtShell_QProgressBar::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QProgressBar::dragEnterEvent(arg__1);
}
void PythonQtShell_QProgressBar::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QProgressBar::dragLeaveEvent(arg__1);
}
void PythonQtShell_QProgressBar::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QProgressBar::dragMoveEvent(arg__1);
}
void PythonQtShell_QProgressBar::dropEvent(QDropEvent*  arg__1)
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
  QProgressBar::dropEvent(arg__1);
}
void PythonQtShell_QProgressBar::enterEvent(QEvent*  arg__1)
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
  QProgressBar::enterEvent(arg__1);
}
bool  PythonQtShell_QProgressBar::event(QEvent*  e0)
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
  return QProgressBar::event(e0);
}
bool  PythonQtShell_QProgressBar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QProgressBar::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QProgressBar::focusInEvent(QFocusEvent*  arg__1)
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
  QProgressBar::focusInEvent(arg__1);
}
bool  PythonQtShell_QProgressBar::focusNextPrevChild(bool  next0)
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
  return QProgressBar::focusNextPrevChild(next0);
}
void PythonQtShell_QProgressBar::focusOutEvent(QFocusEvent*  arg__1)
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
  QProgressBar::focusOutEvent(arg__1);
}
int  PythonQtShell_QProgressBar::heightForWidth(int  arg__1) const
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
  return QProgressBar::heightForWidth(arg__1);
}
void PythonQtShell_QProgressBar::hideEvent(QHideEvent*  arg__1)
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
  QProgressBar::hideEvent(arg__1);
}
void PythonQtShell_QProgressBar::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QProgressBar::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QProgressBar::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QProgressBar::inputMethodQuery(arg__1);
}
void PythonQtShell_QProgressBar::keyPressEvent(QKeyEvent*  arg__1)
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
  QProgressBar::keyPressEvent(arg__1);
}
void PythonQtShell_QProgressBar::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QProgressBar::keyReleaseEvent(arg__1);
}
void PythonQtShell_QProgressBar::languageChange()
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
  QProgressBar::languageChange();
}
void PythonQtShell_QProgressBar::leaveEvent(QEvent*  arg__1)
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
  QProgressBar::leaveEvent(arg__1);
}
int  PythonQtShell_QProgressBar::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QProgressBar::metric(arg__1);
}
void PythonQtShell_QProgressBar::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QProgressBar::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QProgressBar::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QProgressBar::mouseMoveEvent(arg__1);
}
void PythonQtShell_QProgressBar::mousePressEvent(QMouseEvent*  arg__1)
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
  QProgressBar::mousePressEvent(arg__1);
}
void PythonQtShell_QProgressBar::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QProgressBar::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QProgressBar::moveEvent(QMoveEvent*  arg__1)
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
  QProgressBar::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QProgressBar::paintEngine() const
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
  return QProgressBar::paintEngine();
}
void PythonQtShell_QProgressBar::paintEvent(QPaintEvent*  arg__1)
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
  QProgressBar::paintEvent(arg__1);
}
void PythonQtShell_QProgressBar::resizeEvent(QResizeEvent*  arg__1)
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
  QProgressBar::resizeEvent(arg__1);
}
void PythonQtShell_QProgressBar::showEvent(QShowEvent*  arg__1)
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
  QProgressBar::showEvent(arg__1);
}
void PythonQtShell_QProgressBar::tabletEvent(QTabletEvent*  arg__1)
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
  QProgressBar::tabletEvent(arg__1);
}
QString  PythonQtShell_QProgressBar::text() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("text");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("text", methodInfo, result);
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
  return QProgressBar::text();
}
void PythonQtShell_QProgressBar::timerEvent(QTimerEvent*  arg__1)
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
  QProgressBar::timerEvent(arg__1);
}
void PythonQtShell_QProgressBar::wheelEvent(QWheelEvent*  arg__1)
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
  QProgressBar::wheelEvent(arg__1);
}
QProgressBar* PythonQtWrapper_QProgressBar::new_QProgressBar(QWidget*  parent)
{ 
return new PythonQtShell_QProgressBar(parent); }

Qt::Alignment  PythonQtWrapper_QProgressBar::alignment(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

bool  PythonQtWrapper_QProgressBar::event(QProgressBar* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->promoted_event(e));
}

QString  PythonQtWrapper_QProgressBar::format(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

void PythonQtWrapper_QProgressBar::initStyleOption(QProgressBar* theWrappedObject, QStyleOptionProgressBar*  option) const
{
  ( ((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->promoted_initStyleOption(option));
}

bool  PythonQtWrapper_QProgressBar::invertedAppearance(QProgressBar* theWrappedObject)
{
  return ( theWrappedObject->invertedAppearance());
}

bool  PythonQtWrapper_QProgressBar::invertedAppearance(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->invertedAppearance());
}

bool  PythonQtWrapper_QProgressBar::isTextVisible(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->isTextVisible());
}

int  PythonQtWrapper_QProgressBar::maximum(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->maximum());
}

int  PythonQtWrapper_QProgressBar::minimum(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->minimum());
}

QSize  PythonQtWrapper_QProgressBar::minimumSizeHint(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

Qt::Orientation  PythonQtWrapper_QProgressBar::orientation(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

void PythonQtWrapper_QProgressBar::paintEvent(QProgressBar* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->promoted_paintEvent(arg__1));
}

void PythonQtWrapper_QProgressBar::setAlignment(QProgressBar* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QProgressBar::setFormat(QProgressBar* theWrappedObject, const QString&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QProgressBar::setInvertedAppearance(QProgressBar* theWrappedObject, bool  invert)
{
  ( theWrappedObject->setInvertedAppearance(invert));
}

void PythonQtWrapper_QProgressBar::setTextDirection(QProgressBar* theWrappedObject, QProgressBar::Direction  textDirection)
{
  ( theWrappedObject->setTextDirection(textDirection));
}

void PythonQtWrapper_QProgressBar::setTextVisible(QProgressBar* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setTextVisible(visible));
}

QSize  PythonQtWrapper_QProgressBar::sizeHint(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QString  PythonQtWrapper_QProgressBar::text(QProgressBar* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProgressBar*)theWrappedObject)->promoted_text());
}

QProgressBar::Direction  PythonQtWrapper_QProgressBar::textDirection(QProgressBar* theWrappedObject)
{
  return ( theWrappedObject->textDirection());
}

QProgressBar::Direction  PythonQtWrapper_QProgressBar::textDirection(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

int  PythonQtWrapper_QProgressBar::value(QProgressBar* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



PythonQtShell_QProgressDialog::~PythonQtShell_QProgressDialog() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QProgressDialog::accept()
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
  QProgressDialog::accept();
}
void PythonQtShell_QProgressDialog::actionEvent(QActionEvent*  arg__1)
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
  QProgressDialog::actionEvent(arg__1);
}
void PythonQtShell_QProgressDialog::changeEvent(QEvent*  event0)
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
  QProgressDialog::changeEvent(event0);
}
void PythonQtShell_QProgressDialog::childEvent(QChildEvent*  arg__1)
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
  QProgressDialog::childEvent(arg__1);
}
void PythonQtShell_QProgressDialog::closeEvent(QCloseEvent*  event0)
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
  QProgressDialog::closeEvent(event0);
}
void PythonQtShell_QProgressDialog::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QProgressDialog::contextMenuEvent(arg__1);
}
void PythonQtShell_QProgressDialog::customEvent(QEvent*  arg__1)
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
  QProgressDialog::customEvent(arg__1);
}
int  PythonQtShell_QProgressDialog::devType() const
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
  return QProgressDialog::devType();
}
void PythonQtShell_QProgressDialog::done(int  arg__1)
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
  QProgressDialog::done(arg__1);
}
void PythonQtShell_QProgressDialog::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QProgressDialog::dragEnterEvent(arg__1);
}
void PythonQtShell_QProgressDialog::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QProgressDialog::dragLeaveEvent(arg__1);
}
void PythonQtShell_QProgressDialog::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QProgressDialog::dragMoveEvent(arg__1);
}
void PythonQtShell_QProgressDialog::dropEvent(QDropEvent*  arg__1)
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
  QProgressDialog::dropEvent(arg__1);
}
void PythonQtShell_QProgressDialog::enterEvent(QEvent*  arg__1)
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
  QProgressDialog::enterEvent(arg__1);
}
bool  PythonQtShell_QProgressDialog::event(QEvent*  arg__1)
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
  return QProgressDialog::event(arg__1);
}
bool  PythonQtShell_QProgressDialog::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QProgressDialog::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QProgressDialog::focusInEvent(QFocusEvent*  arg__1)
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
  QProgressDialog::focusInEvent(arg__1);
}
bool  PythonQtShell_QProgressDialog::focusNextPrevChild(bool  next0)
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
  return QProgressDialog::focusNextPrevChild(next0);
}
void PythonQtShell_QProgressDialog::focusOutEvent(QFocusEvent*  arg__1)
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
  QProgressDialog::focusOutEvent(arg__1);
}
int  PythonQtShell_QProgressDialog::heightForWidth(int  arg__1) const
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
  return QProgressDialog::heightForWidth(arg__1);
}
void PythonQtShell_QProgressDialog::hideEvent(QHideEvent*  arg__1)
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
  QProgressDialog::hideEvent(arg__1);
}
void PythonQtShell_QProgressDialog::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QProgressDialog::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QProgressDialog::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QProgressDialog::inputMethodQuery(arg__1);
}
void PythonQtShell_QProgressDialog::keyPressEvent(QKeyEvent*  arg__1)
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
  QProgressDialog::keyPressEvent(arg__1);
}
void PythonQtShell_QProgressDialog::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QProgressDialog::keyReleaseEvent(arg__1);
}
void PythonQtShell_QProgressDialog::languageChange()
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
  QProgressDialog::languageChange();
}
void PythonQtShell_QProgressDialog::leaveEvent(QEvent*  arg__1)
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
  QProgressDialog::leaveEvent(arg__1);
}
int  PythonQtShell_QProgressDialog::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QProgressDialog::metric(arg__1);
}
void PythonQtShell_QProgressDialog::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QProgressDialog::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QProgressDialog::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QProgressDialog::mouseMoveEvent(arg__1);
}
void PythonQtShell_QProgressDialog::mousePressEvent(QMouseEvent*  arg__1)
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
  QProgressDialog::mousePressEvent(arg__1);
}
void PythonQtShell_QProgressDialog::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QProgressDialog::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QProgressDialog::moveEvent(QMoveEvent*  arg__1)
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
  QProgressDialog::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QProgressDialog::paintEngine() const
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
  return QProgressDialog::paintEngine();
}
void PythonQtShell_QProgressDialog::paintEvent(QPaintEvent*  arg__1)
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
  QProgressDialog::paintEvent(arg__1);
}
void PythonQtShell_QProgressDialog::reject()
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
  QProgressDialog::reject();
}
void PythonQtShell_QProgressDialog::resizeEvent(QResizeEvent*  event0)
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
  QProgressDialog::resizeEvent(event0);
}
void PythonQtShell_QProgressDialog::showEvent(QShowEvent*  event0)
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
  QProgressDialog::showEvent(event0);
}
void PythonQtShell_QProgressDialog::tabletEvent(QTabletEvent*  arg__1)
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
  QProgressDialog::tabletEvent(arg__1);
}
void PythonQtShell_QProgressDialog::timerEvent(QTimerEvent*  arg__1)
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
  QProgressDialog::timerEvent(arg__1);
}
void PythonQtShell_QProgressDialog::wheelEvent(QWheelEvent*  arg__1)
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
  QProgressDialog::wheelEvent(arg__1);
}
QProgressDialog* PythonQtWrapper_QProgressDialog::new_QProgressDialog(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QProgressDialog(parent, flags); }

QProgressDialog* PythonQtWrapper_QProgressDialog::new_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags); }

bool  PythonQtWrapper_QProgressDialog::autoClose(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->autoClose());
}

bool  PythonQtWrapper_QProgressDialog::autoReset(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->autoReset());
}

void PythonQtWrapper_QProgressDialog::changeEvent(QProgressDialog* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->promoted_changeEvent(event));
}

void PythonQtWrapper_QProgressDialog::closeEvent(QProgressDialog* theWrappedObject, QCloseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->promoted_closeEvent(event));
}

QString  PythonQtWrapper_QProgressDialog::labelText(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->labelText());
}

int  PythonQtWrapper_QProgressDialog::maximum(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->maximum());
}

int  PythonQtWrapper_QProgressDialog::minimum(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->minimum());
}

int  PythonQtWrapper_QProgressDialog::minimumDuration(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->minimumDuration());
}

void PythonQtWrapper_QProgressDialog::open(QProgressDialog* theWrappedObject)
{
  ( theWrappedObject->open());
}

void PythonQtWrapper_QProgressDialog::open(QProgressDialog* theWrappedObject, QObject*  receiver, const char*  member)
{
  ( theWrappedObject->open(receiver, member));
}

void PythonQtWrapper_QProgressDialog::resizeEvent(QProgressDialog* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QProgressDialog::setAutoClose(QProgressDialog* theWrappedObject, bool  close)
{
  ( theWrappedObject->setAutoClose(close));
}

void PythonQtWrapper_QProgressDialog::setAutoReset(QProgressDialog* theWrappedObject, bool  reset)
{
  ( theWrappedObject->setAutoReset(reset));
}

void PythonQtWrapper_QProgressDialog::setBar(QProgressDialog* theWrappedObject, QProgressBar*  bar)
{
  ( theWrappedObject->setBar(bar));
}

void PythonQtWrapper_QProgressDialog::setCancelButton(QProgressDialog* theWrappedObject, QPushButton*  button)
{
  ( theWrappedObject->setCancelButton(button));
}

void PythonQtWrapper_QProgressDialog::setLabel(QProgressDialog* theWrappedObject, QLabel*  label)
{
  ( theWrappedObject->setLabel(label));
}

void PythonQtWrapper_QProgressDialog::showEvent(QProgressDialog* theWrappedObject, QShowEvent*  event)
{
  ( ((PythonQtPublicPromoter_QProgressDialog*)theWrappedObject)->promoted_showEvent(event));
}

QSize  PythonQtWrapper_QProgressDialog::sizeHint(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

int  PythonQtWrapper_QProgressDialog::value(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

bool  PythonQtWrapper_QProgressDialog::wasCanceled(QProgressDialog* theWrappedObject) const
{
  return ( theWrappedObject->wasCanceled());
}



PythonQtShell_QProxyModel::~PythonQtShell_QProxyModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QModelIndex  PythonQtShell_QProxyModel::buddy(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("buddy");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("buddy", methodInfo, result);
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
  return QProxyModel::buddy(index0);
}
bool  PythonQtShell_QProxyModel::canFetchMore(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canFetchMore");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canFetchMore", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::canFetchMore(parent0);
}
void PythonQtShell_QProxyModel::childEvent(QChildEvent*  arg__1)
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
  QProxyModel::childEvent(arg__1);
}
int  PythonQtShell_QProxyModel::columnCount(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("columnCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("columnCount", methodInfo, result);
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
  return QProxyModel::columnCount(parent0);
}
void PythonQtShell_QProxyModel::customEvent(QEvent*  arg__1)
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
  QProxyModel::customEvent(arg__1);
}
QVariant  PythonQtShell_QProxyModel::data(const QModelIndex&  index0, int  role1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("data");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&index0, (void*)&role1};
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
  return QProxyModel::data(index0, role1);
}
bool  PythonQtShell_QProxyModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
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
  return QProxyModel::dropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QProxyModel::event(QEvent*  arg__1)
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
  return QProxyModel::event(arg__1);
}
bool  PythonQtShell_QProxyModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QProxyModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QProxyModel::fetchMore(const QModelIndex&  parent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fetchMore");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyModel::fetchMore(parent0);
}
Qt::ItemFlags  PythonQtShell_QProxyModel::flags(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("flags");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
        } else {
          returnValue = *((Qt::ItemFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::flags(index0);
}
bool  PythonQtShell_QProxyModel::hasChildren(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasChildren");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hasChildren", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::hasChildren(parent0);
}
QVariant  PythonQtShell_QProxyModel::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("headerData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&section0, (void*)&orientation1, (void*)&role2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("headerData", methodInfo, result);
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
  return QProxyModel::headerData(section0, orientation1, role2);
}
QModelIndex  PythonQtShell_QProxyModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("index");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("index", methodInfo, result);
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
  return QProxyModel::index(row0, column1, parent2);
}
bool  PythonQtShell_QProxyModel::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::insertColumns(column0, count1, parent2);
}
bool  PythonQtShell_QProxyModel::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::insertRows(row0, count1, parent2);
}
QMap<int , QVariant >  PythonQtShell_QProxyModel::itemData(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("itemData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemData", methodInfo, result);
        } else {
          returnValue = *((QMap<int , QVariant >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::itemData(index0);
}
QList<QModelIndex >  PythonQtShell_QProxyModel::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("match");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue;
    void* args[6] = {NULL, (void*)&start0, (void*)&role1, (void*)&value2, (void*)&hits3, (void*)&flags4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("match", methodInfo, result);
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
  return QProxyModel::match(start0, role1, value2, hits3, flags4);
}
QMimeData*  PythonQtShell_QProxyModel::mimeData(const QList<QModelIndex >&  indexes0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&indexes0};
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
  return QProxyModel::mimeData(indexes0);
}
QStringList  PythonQtShell_QProxyModel::mimeTypes() const
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
  return QProxyModel::mimeTypes();
}
QModelIndex  PythonQtShell_QProxyModel::parent(const QModelIndex&  child0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("parent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&child0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("parent", methodInfo, result);
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
  return QProxyModel::parent(child0);
}
bool  PythonQtShell_QProxyModel::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("removeColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::removeColumns(column0, count1, parent2);
}
bool  PythonQtShell_QProxyModel::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("removeRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::removeRows(row0, count1, parent2);
}
void PythonQtShell_QProxyModel::revert()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("revert");
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
  QProxyModel::revert();
}
int  PythonQtShell_QProxyModel::rowCount(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("rowCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("rowCount", methodInfo, result);
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
  return QProxyModel::rowCount(parent0);
}
bool  PythonQtShell_QProxyModel::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index0, (void*)&value1, (void*)&role2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::setData(index0, value1, role2);
}
bool  PythonQtShell_QProxyModel::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setHeaderData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&section0, (void*)&orientation1, (void*)&value2, (void*)&role3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setHeaderData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::setHeaderData(section0, orientation1, value2, role3);
}
bool  PythonQtShell_QProxyModel::setItemData(const QModelIndex&  index0, const QMap<int , QVariant >&  roles1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setItemData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&index0, (void*)&roles1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setItemData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::setItemData(index0, roles1);
}
void PythonQtShell_QProxyModel::setModel(QAbstractItemModel*  model0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QProxyModel::setModel(model0);
}
void PythonQtShell_QProxyModel::sort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sort");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column0, (void*)&order1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyModel::sort(column0, order1);
}
QSize  PythonQtShell_QProxyModel::span(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("span");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("span", methodInfo, result);
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
  return QProxyModel::span(index0);
}
bool  PythonQtShell_QProxyModel::submit()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("submit");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QProxyModel::submit();
}
Qt::DropActions  PythonQtShell_QProxyModel::supportedDropActions() const
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
  return QProxyModel::supportedDropActions();
}
void PythonQtShell_QProxyModel::timerEvent(QTimerEvent*  arg__1)
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
  QProxyModel::timerEvent(arg__1);
}
QProxyModel* PythonQtWrapper_QProxyModel::new_QProxyModel(QObject*  parent)
{ 
return new PythonQtShell_QProxyModel(parent); }

int  PythonQtWrapper_QProxyModel::columnCount(QProxyModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_columnCount(parent));
}

void PythonQtWrapper_QProxyModel::connectToModel(QProxyModel* theWrappedObject, const QAbstractItemModel*  model) const
{
  ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_connectToModel(model));
}

QVariant  PythonQtWrapper_QProxyModel::data(QProxyModel* theWrappedObject, const QModelIndex&  index, int  role) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_data(index, role));
}

void PythonQtWrapper_QProxyModel::disconnectFromModel(QProxyModel* theWrappedObject, const QAbstractItemModel*  model) const
{
  ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_disconnectFromModel(model));
}

bool  PythonQtWrapper_QProxyModel::dropMimeData(QProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_dropMimeData(data, action, row, column, parent));
}

void PythonQtWrapper_QProxyModel::fetchMore(QProxyModel* theWrappedObject, const QModelIndex&  parent)
{
  ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_fetchMore(parent));
}

Qt::ItemFlags  PythonQtWrapper_QProxyModel::flags(QProxyModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_flags(index));
}

bool  PythonQtWrapper_QProxyModel::hasChildren(QProxyModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_hasChildren(parent));
}

QVariant  PythonQtWrapper_QProxyModel::headerData(QProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_headerData(section, orientation, role));
}

QModelIndex  PythonQtWrapper_QProxyModel::index(QProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_index(row, column, parent));
}

bool  PythonQtWrapper_QProxyModel::insertColumns(QProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_insertColumns(column, count, parent));
}

bool  PythonQtWrapper_QProxyModel::insertRows(QProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_insertRows(row, count, parent));
}

QList<QModelIndex >  PythonQtWrapper_QProxyModel::match(QProxyModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_match(start, role, value, hits, flags));
}

QMimeData*  PythonQtWrapper_QProxyModel::mimeData(QProxyModel* theWrappedObject, const QList<QModelIndex >&  indexes) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_mimeData(indexes));
}

QStringList  PythonQtWrapper_QProxyModel::mimeTypes(QProxyModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_mimeTypes());
}

QAbstractItemModel*  PythonQtWrapper_QProxyModel::model(QProxyModel* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

QModelIndex  PythonQtWrapper_QProxyModel::parent(QProxyModel* theWrappedObject, const QModelIndex&  child) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_parent(child));
}

void PythonQtWrapper_QProxyModel::revert(QProxyModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_revert());
}

int  PythonQtWrapper_QProxyModel::rowCount(QProxyModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_rowCount(parent));
}

bool  PythonQtWrapper_QProxyModel::setData(QProxyModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role)
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_setData(index, value, role));
}

bool  PythonQtWrapper_QProxyModel::setHeaderData(QProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_setHeaderData(section, orientation, value, role));
}

void PythonQtWrapper_QProxyModel::setModel(QProxyModel* theWrappedObject, QAbstractItemModel*  model)
{
  ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_setModel(model));
}

QModelIndex  PythonQtWrapper_QProxyModel::setProxyModel(QProxyModel* theWrappedObject, const QModelIndex&  source_index) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_setProxyModel(source_index));
}

QModelIndex  PythonQtWrapper_QProxyModel::setSourceModel(QProxyModel* theWrappedObject, const QModelIndex&  proxy_index) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_setSourceModel(proxy_index));
}

void PythonQtWrapper_QProxyModel::sort(QProxyModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_sort(column, order));
}

QSize  PythonQtWrapper_QProxyModel::span(QProxyModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_span(index));
}

bool  PythonQtWrapper_QProxyModel::submit(QProxyModel* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_submit());
}

Qt::DropActions  PythonQtWrapper_QProxyModel::supportedDropActions(QProxyModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProxyModel*)theWrappedObject)->promoted_supportedDropActions());
}



PythonQtShell_QProxyStyle::~PythonQtShell_QProxyStyle() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QProxyStyle::childEvent(QChildEvent*  arg__1)
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
  QProxyStyle::childEvent(arg__1);
}
void PythonQtShell_QProxyStyle::customEvent(QEvent*  arg__1)
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
  QProxyStyle::customEvent(arg__1);
}
void PythonQtShell_QProxyStyle::drawComplexControl(QStyle::ComplexControl  control0, const QStyleOptionComplex*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawComplexControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&control0, (void*)&option1, (void*)&painter2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::drawComplexControl(control0, option1, painter2, widget3);
}
void PythonQtShell_QProxyStyle::drawControl(QStyle::ControlElement  element0, const QStyleOption*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::ControlElement" , "const QStyleOption*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&element0, (void*)&option1, (void*)&painter2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::drawControl(element0, option1, painter2, widget3);
}
void PythonQtShell_QProxyStyle::drawItemPixmap(QPainter*  painter0, const QRect&  rect1, int  alignment2, const QPixmap&  pixmap3) const
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
  QProxyStyle::drawItemPixmap(painter0, rect1, alignment2, pixmap3);
}
void PythonQtShell_QProxyStyle::drawItemText(QPainter*  painter0, const QRect&  rect1, int  flags2, const QPalette&  pal3, bool  enabled4, const QString&  text5, QPalette::ColorRole  textRole6) const
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
  QProxyStyle::drawItemText(painter0, rect1, flags2, pal3, enabled4, text5, textRole6);
}
void PythonQtShell_QProxyStyle::drawPrimitive(QStyle::PrimitiveElement  element0, const QStyleOption*  option1, QPainter*  painter2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("drawPrimitive");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QStyle::PrimitiveElement" , "const QStyleOption*" , "QPainter*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&element0, (void*)&option1, (void*)&painter2, (void*)&widget3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::drawPrimitive(element0, option1, painter2, widget3);
}
bool  PythonQtShell_QProxyStyle::event(QEvent*  e0)
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
  return QProxyStyle::event(e0);
}
bool  PythonQtShell_QProxyStyle::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QProxyStyle::eventFilter(arg__1, arg__2);
}
QPixmap  PythonQtShell_QProxyStyle::generatedIconPixmap(QIcon::Mode  iconMode0, const QPixmap&  pixmap1, const QStyleOption*  opt2) const
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
  return QProxyStyle::generatedIconPixmap(iconMode0, pixmap1, opt2);
}
QStyle::SubControl  PythonQtShell_QProxyStyle::hitTestComplexControl(QStyle::ComplexControl  control0, const QStyleOptionComplex*  option1, const QPoint&  pos2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitTestComplexControl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QStyle::SubControl" , "QStyle::ComplexControl" , "const QStyleOptionComplex*" , "const QPoint&" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QStyle::SubControl returnValue;
    void* args[5] = {NULL, (void*)&control0, (void*)&option1, (void*)&pos2, (void*)&widget3};
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
  return QProxyStyle::hitTestComplexControl(control0, option1, pos2, widget3);
}
QRect  PythonQtShell_QProxyStyle::itemPixmapRect(const QRect&  r0, int  flags1, const QPixmap&  pixmap2) const
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
  return QProxyStyle::itemPixmapRect(r0, flags1, pixmap2);
}
int  PythonQtShell_QProxyStyle::pixelMetric(QStyle::PixelMetric  metric0, const QStyleOption*  option1, const QWidget*  widget2) const
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
  return QProxyStyle::pixelMetric(metric0, option1, widget2);
}
void PythonQtShell_QProxyStyle::polish(QApplication*  app0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QApplication*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&app0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::polish(app0);
}
void PythonQtShell_QProxyStyle::polish(QPalette&  pal0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPalette&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&pal0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::polish(pal0);
}
void PythonQtShell_QProxyStyle::polish(QWidget*  widget0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("polish");
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
  QProxyStyle::polish(widget0);
}
QSize  PythonQtShell_QProxyStyle::sizeFromContents(QStyle::ContentsType  type0, const QStyleOption*  option1, const QSize&  size2, const QWidget*  widget3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sizeFromContents");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSize" , "QStyle::ContentsType" , "const QStyleOption*" , "const QSize&" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QSize returnValue;
    void* args[5] = {NULL, (void*)&type0, (void*)&option1, (void*)&size2, (void*)&widget3};
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
  return QProxyStyle::sizeFromContents(type0, option1, size2, widget3);
}
QPalette  PythonQtShell_QProxyStyle::standardPalette() const
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
  return QProxyStyle::standardPalette();
}
QPixmap  PythonQtShell_QProxyStyle::standardPixmap(QStyle::StandardPixmap  standardPixmap0, const QStyleOption*  opt1, const QWidget*  widget2) const
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
  return QProxyStyle::standardPixmap(standardPixmap0, opt1, widget2);
}
int  PythonQtShell_QProxyStyle::styleHint(QStyle::StyleHint  hint0, const QStyleOption*  option1, const QWidget*  widget2, QStyleHintReturn*  returnData3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("styleHint");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "QStyle::StyleHint" , "const QStyleOption*" , "const QWidget*" , "QStyleHintReturn*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      int returnValue;
    void* args[5] = {NULL, (void*)&hint0, (void*)&option1, (void*)&widget2, (void*)&returnData3};
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
  return QProxyStyle::styleHint(hint0, option1, widget2, returnData3);
}
QRect  PythonQtShell_QProxyStyle::subControlRect(QStyle::ComplexControl  cc0, const QStyleOptionComplex*  opt1, QStyle::SubControl  sc2, const QWidget*  widget3) const
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
  return QProxyStyle::subControlRect(cc0, opt1, sc2, widget3);
}
QRect  PythonQtShell_QProxyStyle::subElementRect(QStyle::SubElement  element0, const QStyleOption*  option1, const QWidget*  widget2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("subElementRect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QRect" , "QStyle::SubElement" , "const QStyleOption*" , "const QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QRect returnValue;
    void* args[4] = {NULL, (void*)&element0, (void*)&option1, (void*)&widget2};
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
  return QProxyStyle::subElementRect(element0, option1, widget2);
}
void PythonQtShell_QProxyStyle::timerEvent(QTimerEvent*  arg__1)
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
  QProxyStyle::timerEvent(arg__1);
}
void PythonQtShell_QProxyStyle::unpolish(QApplication*  app0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unpolish");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QApplication*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&app0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QProxyStyle::unpolish(app0);
}
void PythonQtShell_QProxyStyle::unpolish(QWidget*  widget0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unpolish");
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
  QProxyStyle::unpolish(widget0);
}
QProxyStyle* PythonQtWrapper_QProxyStyle::new_QProxyStyle(QStyle*  baseStyle)
{ 
return new PythonQtShell_QProxyStyle(baseStyle); }

QStyle*  PythonQtWrapper_QProxyStyle::baseStyle(QProxyStyle* theWrappedObject) const
{
  return ( theWrappedObject->baseStyle());
}

void PythonQtWrapper_QProxyStyle::drawComplexControl(QProxyStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_drawComplexControl(control, option, painter, widget));
}

void PythonQtWrapper_QProxyStyle::drawControl(QProxyStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_drawControl(element, option, painter, widget));
}

void PythonQtWrapper_QProxyStyle::drawItemPixmap(QProxyStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_drawItemPixmap(painter, rect, alignment, pixmap));
}

void PythonQtWrapper_QProxyStyle::drawItemText(QProxyStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_drawItemText(painter, rect, flags, pal, enabled, text, textRole));
}

void PythonQtWrapper_QProxyStyle::drawPrimitive(QProxyStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_drawPrimitive(element, option, painter, widget));
}

bool  PythonQtWrapper_QProxyStyle::event(QProxyStyle* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_event(e));
}

QPixmap  PythonQtWrapper_QProxyStyle::generatedIconPixmap(QProxyStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_generatedIconPixmap(iconMode, pixmap, opt));
}

QStyle::SubControl  PythonQtWrapper_QProxyStyle::hitTestComplexControl(QProxyStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_hitTestComplexControl(control, option, pos, widget));
}

QRect  PythonQtWrapper_QProxyStyle::itemPixmapRect(QProxyStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_itemPixmapRect(r, flags, pixmap));
}

QRect  PythonQtWrapper_QProxyStyle::itemTextRect(QProxyStyle* theWrappedObject, const QFontMetrics&  fm, const QRect&  r, int  flags, bool  enabled, const QString&  text) const
{
  return ( theWrappedObject->itemTextRect(fm, r, flags, enabled, text));
}

int  PythonQtWrapper_QProxyStyle::pixelMetric(QProxyStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_pixelMetric(metric, option, widget));
}

void PythonQtWrapper_QProxyStyle::polish(QProxyStyle* theWrappedObject, QApplication*  app)
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_polish(app));
}

void PythonQtWrapper_QProxyStyle::polish(QProxyStyle* theWrappedObject, QPalette&  pal)
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_polish(pal));
}

void PythonQtWrapper_QProxyStyle::polish(QProxyStyle* theWrappedObject, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_polish(widget));
}

void PythonQtWrapper_QProxyStyle::setBaseStyle(QProxyStyle* theWrappedObject, QStyle*  style)
{
  ( theWrappedObject->setBaseStyle(style));
}

QSize  PythonQtWrapper_QProxyStyle::sizeFromContents(QProxyStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_sizeFromContents(type, option, size, widget));
}

QPalette  PythonQtWrapper_QProxyStyle::standardPalette(QProxyStyle* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_standardPalette());
}

QPixmap  PythonQtWrapper_QProxyStyle::standardPixmap(QProxyStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_standardPixmap(standardPixmap, opt, widget));
}

int  PythonQtWrapper_QProxyStyle::styleHint(QProxyStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option, const QWidget*  widget, QStyleHintReturn*  returnData) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_styleHint(hint, option, widget, returnData));
}

QRect  PythonQtWrapper_QProxyStyle::subControlRect(QProxyStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_subControlRect(cc, opt, sc, widget));
}

QRect  PythonQtWrapper_QProxyStyle::subElementRect(QProxyStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const
{
  return ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_subElementRect(element, option, widget));
}

void PythonQtWrapper_QProxyStyle::unpolish(QProxyStyle* theWrappedObject, QApplication*  app)
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_unpolish(app));
}

void PythonQtWrapper_QProxyStyle::unpolish(QProxyStyle* theWrappedObject, QWidget*  widget)
{
  ( ((PythonQtPublicPromoter_QProxyStyle*)theWrappedObject)->promoted_unpolish(widget));
}



PythonQtShell_QPushButton::~PythonQtShell_QPushButton() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPushButton::actionEvent(QActionEvent*  arg__1)
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
  QPushButton::actionEvent(arg__1);
}
void PythonQtShell_QPushButton::changeEvent(QEvent*  e0)
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
  QPushButton::changeEvent(e0);
}
void PythonQtShell_QPushButton::checkStateSet()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("checkStateSet");
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
  QPushButton::checkStateSet();
}
void PythonQtShell_QPushButton::childEvent(QChildEvent*  arg__1)
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
  QPushButton::childEvent(arg__1);
}
void PythonQtShell_QPushButton::closeEvent(QCloseEvent*  arg__1)
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
  QPushButton::closeEvent(arg__1);
}
void PythonQtShell_QPushButton::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QPushButton::contextMenuEvent(arg__1);
}
void PythonQtShell_QPushButton::customEvent(QEvent*  arg__1)
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
  QPushButton::customEvent(arg__1);
}
int  PythonQtShell_QPushButton::devType() const
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
  return QPushButton::devType();
}
void PythonQtShell_QPushButton::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QPushButton::dragEnterEvent(arg__1);
}
void PythonQtShell_QPushButton::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QPushButton::dragLeaveEvent(arg__1);
}
void PythonQtShell_QPushButton::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QPushButton::dragMoveEvent(arg__1);
}
void PythonQtShell_QPushButton::dropEvent(QDropEvent*  arg__1)
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
  QPushButton::dropEvent(arg__1);
}
void PythonQtShell_QPushButton::enterEvent(QEvent*  arg__1)
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
  QPushButton::enterEvent(arg__1);
}
bool  PythonQtShell_QPushButton::event(QEvent*  e0)
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
  return QPushButton::event(e0);
}
bool  PythonQtShell_QPushButton::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPushButton::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPushButton::focusInEvent(QFocusEvent*  arg__1)
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
  QPushButton::focusInEvent(arg__1);
}
bool  PythonQtShell_QPushButton::focusNextPrevChild(bool  next0)
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
  return QPushButton::focusNextPrevChild(next0);
}
void PythonQtShell_QPushButton::focusOutEvent(QFocusEvent*  arg__1)
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
  QPushButton::focusOutEvent(arg__1);
}
int  PythonQtShell_QPushButton::heightForWidth(int  arg__1) const
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
  return QPushButton::heightForWidth(arg__1);
}
void PythonQtShell_QPushButton::hideEvent(QHideEvent*  arg__1)
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
  QPushButton::hideEvent(arg__1);
}
bool  PythonQtShell_QPushButton::hitButton(const QPoint&  pos0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitButton");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pos0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hitButton", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QPushButton::hitButton(pos0);
}
void PythonQtShell_QPushButton::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QPushButton::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QPushButton::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QPushButton::inputMethodQuery(arg__1);
}
void PythonQtShell_QPushButton::keyPressEvent(QKeyEvent*  arg__1)
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
  QPushButton::keyPressEvent(arg__1);
}
void PythonQtShell_QPushButton::keyReleaseEvent(QKeyEvent*  e0)
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
  QPushButton::keyReleaseEvent(e0);
}
void PythonQtShell_QPushButton::languageChange()
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
  QPushButton::languageChange();
}
void PythonQtShell_QPushButton::leaveEvent(QEvent*  arg__1)
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
  QPushButton::leaveEvent(arg__1);
}
int  PythonQtShell_QPushButton::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QPushButton::metric(arg__1);
}
void PythonQtShell_QPushButton::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QPushButton::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QPushButton::mouseMoveEvent(QMouseEvent*  e0)
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
  QPushButton::mouseMoveEvent(e0);
}
void PythonQtShell_QPushButton::mousePressEvent(QMouseEvent*  e0)
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
  QPushButton::mousePressEvent(e0);
}
void PythonQtShell_QPushButton::mouseReleaseEvent(QMouseEvent*  e0)
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
  QPushButton::mouseReleaseEvent(e0);
}
void PythonQtShell_QPushButton::moveEvent(QMoveEvent*  arg__1)
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
  QPushButton::moveEvent(arg__1);
}
void PythonQtShell_QPushButton::nextCheckState()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nextCheckState");
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
  QPushButton::nextCheckState();
}
QPaintEngine*  PythonQtShell_QPushButton::paintEngine() const
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
  return QPushButton::paintEngine();
}
void PythonQtShell_QPushButton::paintEvent(QPaintEvent*  arg__1)
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
  QPushButton::paintEvent(arg__1);
}
void PythonQtShell_QPushButton::resizeEvent(QResizeEvent*  arg__1)
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
  QPushButton::resizeEvent(arg__1);
}
void PythonQtShell_QPushButton::showEvent(QShowEvent*  arg__1)
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
  QPushButton::showEvent(arg__1);
}
void PythonQtShell_QPushButton::tabletEvent(QTabletEvent*  arg__1)
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
  QPushButton::tabletEvent(arg__1);
}
void PythonQtShell_QPushButton::timerEvent(QTimerEvent*  e0)
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
  QPushButton::timerEvent(e0);
}
void PythonQtShell_QPushButton::wheelEvent(QWheelEvent*  arg__1)
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
  QPushButton::wheelEvent(arg__1);
}
QPushButton* PythonQtWrapper_QPushButton::new_QPushButton(QWidget*  parent)
{ 
return new PythonQtShell_QPushButton(parent); }

QPushButton* PythonQtWrapper_QPushButton::new_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QPushButton(icon, text, parent); }

QPushButton* PythonQtWrapper_QPushButton::new_QPushButton(const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QPushButton(text, parent); }

bool  PythonQtWrapper_QPushButton::autoDefault(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->autoDefault());
}

bool  PythonQtWrapper_QPushButton::event(QPushButton* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QPushButton::focusInEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_focusInEvent(arg__1));
}

void PythonQtWrapper_QPushButton::focusOutEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_focusOutEvent(arg__1));
}

void PythonQtWrapper_QPushButton::initStyleOption(QPushButton* theWrappedObject, QStyleOptionButton*  option) const
{
  ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_initStyleOption(option));
}

bool  PythonQtWrapper_QPushButton::isDefault(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

bool  PythonQtWrapper_QPushButton::isFlat(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->isFlat());
}

void PythonQtWrapper_QPushButton::keyPressEvent(QPushButton* theWrappedObject, QKeyEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_keyPressEvent(arg__1));
}

QMenu*  PythonQtWrapper_QPushButton::menu(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->menu());
}

QSize  PythonQtWrapper_QPushButton::minimumSizeHint(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QPushButton::paintEvent(QPushButton* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QPushButton*)theWrappedObject)->promoted_paintEvent(arg__1));
}

void PythonQtWrapper_QPushButton::setAutoDefault(QPushButton* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setAutoDefault(arg__1));
}

void PythonQtWrapper_QPushButton::setDefault(QPushButton* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setDefault(arg__1));
}

void PythonQtWrapper_QPushButton::setFlat(QPushButton* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setFlat(arg__1));
}

void PythonQtWrapper_QPushButton::setMenu(QPushButton* theWrappedObject, QMenu*  menu)
{
  ( theWrappedObject->setMenu(menu));
}

QSize  PythonQtWrapper_QPushButton::sizeHint(QPushButton* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}



QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion()
{ 
return new QQuaternion(); }

QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion(const QVector4D&  vector)
{ 
return new QQuaternion(vector); }

QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion(qreal  scalar, const QVector3D&  vector)
{ 
return new QQuaternion(scalar, vector); }

QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion(qreal  scalar, qreal  xpos, qreal  ypos, qreal  zpos)
{ 
return new QQuaternion(scalar, xpos, ypos, zpos); }

QQuaternion  PythonQtWrapper_QQuaternion::conjugate(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->conjugate());
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_fromAxisAndAngle(const QVector3D&  axis, qreal  angle)
{
  return (QQuaternion::fromAxisAndAngle(axis, angle));
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_fromAxisAndAngle(qreal  x, qreal  y, qreal  z, qreal  angle)
{
  return (QQuaternion::fromAxisAndAngle(x, y, z, angle));
}

bool  PythonQtWrapper_QQuaternion::isIdentity(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->isIdentity());
}

bool  PythonQtWrapper_QQuaternion::isNull(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qreal  PythonQtWrapper_QQuaternion::length(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

qreal  PythonQtWrapper_QQuaternion::lengthSquared(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->lengthSquared());
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_nlerp(const QQuaternion&  q1, const QQuaternion&  q2, qreal  t)
{
  return (QQuaternion::nlerp(q1, q2, t));
}

void PythonQtWrapper_QQuaternion::normalize(QQuaternion* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

QQuaternion  PythonQtWrapper_QQuaternion::normalized(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

const QQuaternion  PythonQtWrapper_QQuaternion::__mul__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)* q2);
}

const QQuaternion  PythonQtWrapper_QQuaternion::__mul__(QQuaternion* theWrappedObject, qreal  factor)
{
  return ( (*theWrappedObject)* factor);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__imul__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion)
{
  return &( (*theWrappedObject)*= quaternion);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__imul__(QQuaternion* theWrappedObject, qreal  factor)
{
  return &( (*theWrappedObject)*= factor);
}

const QQuaternion  PythonQtWrapper_QQuaternion::__add__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)+ q2);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__iadd__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion)
{
  return &( (*theWrappedObject)+= quaternion);
}

const QQuaternion  PythonQtWrapper_QQuaternion::__sub__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)- q2);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__isub__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion)
{
  return &( (*theWrappedObject)-= quaternion);
}

const QQuaternion  PythonQtWrapper_QQuaternion::__div__(QQuaternion* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__idiv__(QQuaternion* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QQuaternion::writeTo(QQuaternion* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QQuaternion::__eq__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)== q2);
}

void PythonQtWrapper_QQuaternion::readFrom(QQuaternion* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QVector3D  PythonQtWrapper_QQuaternion::rotatedVector(QQuaternion* theWrappedObject, const QVector3D&  vector) const
{
  return ( theWrappedObject->rotatedVector(vector));
}

qreal  PythonQtWrapper_QQuaternion::scalar(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->scalar());
}

void PythonQtWrapper_QQuaternion::setScalar(QQuaternion* theWrappedObject, qreal  scalar)
{
  ( theWrappedObject->setScalar(scalar));
}

void PythonQtWrapper_QQuaternion::setVector(QQuaternion* theWrappedObject, const QVector3D&  vector)
{
  ( theWrappedObject->setVector(vector));
}

void PythonQtWrapper_QQuaternion::setVector(QQuaternion* theWrappedObject, qreal  x, qreal  y, qreal  z)
{
  ( theWrappedObject->setVector(x, y, z));
}

void PythonQtWrapper_QQuaternion::setX(QQuaternion* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QQuaternion::setY(QQuaternion* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

void PythonQtWrapper_QQuaternion::setZ(QQuaternion* theWrappedObject, qreal  z)
{
  ( theWrappedObject->setZ(z));
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_slerp(const QQuaternion&  q1, const QQuaternion&  q2, qreal  t)
{
  return (QQuaternion::slerp(q1, q2, t));
}

QVector4D  PythonQtWrapper_QQuaternion::toVector4D(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->toVector4D());
}

QVector3D  PythonQtWrapper_QQuaternion::vector(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->vector());
}

qreal  PythonQtWrapper_QQuaternion::x(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

qreal  PythonQtWrapper_QQuaternion::y(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

qreal  PythonQtWrapper_QQuaternion::z(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->z());
}

QString PythonQtWrapper_QQuaternion::py_toString(QQuaternion* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient()
{ 
return new QRadialGradient(); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(const QPointF&  center, qreal  centerRadius, const QPointF&  focalPoint, qreal  focalRadius)
{ 
return new QRadialGradient(center, centerRadius, focalPoint, focalRadius); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(const QPointF&  center, qreal  radius)
{ 
return new QRadialGradient(center, radius); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(const QPointF&  center, qreal  radius, const QPointF&  focalPoint)
{ 
return new QRadialGradient(center, radius, focalPoint); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(qreal  cx, qreal  cy, qreal  centerRadius, qreal  fx, qreal  fy, qreal  focalRadius)
{ 
return new QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius)
{ 
return new QRadialGradient(cx, cy, radius); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius, qreal  fx, qreal  fy)
{ 
return new QRadialGradient(cx, cy, radius, fx, fy); }

QPointF  PythonQtWrapper_QRadialGradient::center(QRadialGradient* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

qreal  PythonQtWrapper_QRadialGradient::centerRadius(QRadialGradient* theWrappedObject) const
{
  return ( theWrappedObject->centerRadius());
}

QPointF  PythonQtWrapper_QRadialGradient::focalPoint(QRadialGradient* theWrappedObject) const
{
  return ( theWrappedObject->focalPoint());
}

qreal  PythonQtWrapper_QRadialGradient::focalRadius(QRadialGradient* theWrappedObject) const
{
  return ( theWrappedObject->focalRadius());
}

qreal  PythonQtWrapper_QRadialGradient::radius(QRadialGradient* theWrappedObject) const
{
  return ( theWrappedObject->radius());
}

void PythonQtWrapper_QRadialGradient::setCenter(QRadialGradient* theWrappedObject, const QPointF&  center)
{
  ( theWrappedObject->setCenter(center));
}

void PythonQtWrapper_QRadialGradient::setCenter(QRadialGradient* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setCenter(x, y));
}

void PythonQtWrapper_QRadialGradient::setCenterRadius(QRadialGradient* theWrappedObject, qreal  radius)
{
  ( theWrappedObject->setCenterRadius(radius));
}

void PythonQtWrapper_QRadialGradient::setFocalPoint(QRadialGradient* theWrappedObject, const QPointF&  focalPoint)
{
  ( theWrappedObject->setFocalPoint(focalPoint));
}

void PythonQtWrapper_QRadialGradient::setFocalPoint(QRadialGradient* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setFocalPoint(x, y));
}

void PythonQtWrapper_QRadialGradient::setFocalRadius(QRadialGradient* theWrappedObject, qreal  radius)
{
  ( theWrappedObject->setFocalRadius(radius));
}

void PythonQtWrapper_QRadialGradient::setRadius(QRadialGradient* theWrappedObject, qreal  radius)
{
  ( theWrappedObject->setRadius(radius));
}



PythonQtShell_QRadioButton::~PythonQtShell_QRadioButton() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRadioButton::actionEvent(QActionEvent*  arg__1)
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
  QRadioButton::actionEvent(arg__1);
}
void PythonQtShell_QRadioButton::changeEvent(QEvent*  e0)
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
  QRadioButton::changeEvent(e0);
}
void PythonQtShell_QRadioButton::checkStateSet()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("checkStateSet");
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
  QRadioButton::checkStateSet();
}
void PythonQtShell_QRadioButton::childEvent(QChildEvent*  arg__1)
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
  QRadioButton::childEvent(arg__1);
}
void PythonQtShell_QRadioButton::closeEvent(QCloseEvent*  arg__1)
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
  QRadioButton::closeEvent(arg__1);
}
void PythonQtShell_QRadioButton::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QRadioButton::contextMenuEvent(arg__1);
}
void PythonQtShell_QRadioButton::customEvent(QEvent*  arg__1)
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
  QRadioButton::customEvent(arg__1);
}
int  PythonQtShell_QRadioButton::devType() const
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
  return QRadioButton::devType();
}
void PythonQtShell_QRadioButton::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QRadioButton::dragEnterEvent(arg__1);
}
void PythonQtShell_QRadioButton::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QRadioButton::dragLeaveEvent(arg__1);
}
void PythonQtShell_QRadioButton::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QRadioButton::dragMoveEvent(arg__1);
}
void PythonQtShell_QRadioButton::dropEvent(QDropEvent*  arg__1)
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
  QRadioButton::dropEvent(arg__1);
}
void PythonQtShell_QRadioButton::enterEvent(QEvent*  arg__1)
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
  QRadioButton::enterEvent(arg__1);
}
bool  PythonQtShell_QRadioButton::event(QEvent*  e0)
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
  return QRadioButton::event(e0);
}
bool  PythonQtShell_QRadioButton::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QRadioButton::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QRadioButton::focusInEvent(QFocusEvent*  e0)
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
  QRadioButton::focusInEvent(e0);
}
bool  PythonQtShell_QRadioButton::focusNextPrevChild(bool  next0)
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
  return QRadioButton::focusNextPrevChild(next0);
}
void PythonQtShell_QRadioButton::focusOutEvent(QFocusEvent*  e0)
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
  QRadioButton::focusOutEvent(e0);
}
int  PythonQtShell_QRadioButton::heightForWidth(int  arg__1) const
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
  return QRadioButton::heightForWidth(arg__1);
}
void PythonQtShell_QRadioButton::hideEvent(QHideEvent*  arg__1)
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
  QRadioButton::hideEvent(arg__1);
}
bool  PythonQtShell_QRadioButton::hitButton(const QPoint&  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hitButton");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hitButton", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QRadioButton::hitButton(arg__1);
}
void PythonQtShell_QRadioButton::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QRadioButton::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QRadioButton::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QRadioButton::inputMethodQuery(arg__1);
}
void PythonQtShell_QRadioButton::keyPressEvent(QKeyEvent*  e0)
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
  QRadioButton::keyPressEvent(e0);
}
void PythonQtShell_QRadioButton::keyReleaseEvent(QKeyEvent*  e0)
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
  QRadioButton::keyReleaseEvent(e0);
}
void PythonQtShell_QRadioButton::languageChange()
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
  QRadioButton::languageChange();
}
void PythonQtShell_QRadioButton::leaveEvent(QEvent*  arg__1)
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
  QRadioButton::leaveEvent(arg__1);
}
int  PythonQtShell_QRadioButton::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QRadioButton::metric(arg__1);
}
void PythonQtShell_QRadioButton::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QRadioButton::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QRadioButton::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QRadioButton::mouseMoveEvent(arg__1);
}
void PythonQtShell_QRadioButton::mousePressEvent(QMouseEvent*  e0)
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
  QRadioButton::mousePressEvent(e0);
}
void PythonQtShell_QRadioButton::mouseReleaseEvent(QMouseEvent*  e0)
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
  QRadioButton::mouseReleaseEvent(e0);
}
void PythonQtShell_QRadioButton::moveEvent(QMoveEvent*  arg__1)
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
  QRadioButton::moveEvent(arg__1);
}
void PythonQtShell_QRadioButton::nextCheckState()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nextCheckState");
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
  QRadioButton::nextCheckState();
}
QPaintEngine*  PythonQtShell_QRadioButton::paintEngine() const
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
  return QRadioButton::paintEngine();
}
void PythonQtShell_QRadioButton::paintEvent(QPaintEvent*  arg__1)
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
  QRadioButton::paintEvent(arg__1);
}
void PythonQtShell_QRadioButton::resizeEvent(QResizeEvent*  arg__1)
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
  QRadioButton::resizeEvent(arg__1);
}
void PythonQtShell_QRadioButton::showEvent(QShowEvent*  arg__1)
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
  QRadioButton::showEvent(arg__1);
}
void PythonQtShell_QRadioButton::tabletEvent(QTabletEvent*  arg__1)
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
  QRadioButton::tabletEvent(arg__1);
}
void PythonQtShell_QRadioButton::timerEvent(QTimerEvent*  e0)
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
  QRadioButton::timerEvent(e0);
}
void PythonQtShell_QRadioButton::wheelEvent(QWheelEvent*  arg__1)
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
  QRadioButton::wheelEvent(arg__1);
}
QRadioButton* PythonQtWrapper_QRadioButton::new_QRadioButton(QWidget*  parent)
{ 
return new PythonQtShell_QRadioButton(parent); }

QRadioButton* PythonQtWrapper_QRadioButton::new_QRadioButton(const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QRadioButton(text, parent); }

bool  PythonQtWrapper_QRadioButton::event(QRadioButton* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->promoted_event(e));
}

bool  PythonQtWrapper_QRadioButton::hitButton(QRadioButton* theWrappedObject, const QPoint&  arg__1) const
{
  return ( ((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->promoted_hitButton(arg__1));
}

void PythonQtWrapper_QRadioButton::initStyleOption(QRadioButton* theWrappedObject, QStyleOptionButton*  button) const
{
  ( ((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->promoted_initStyleOption(button));
}

QSize  PythonQtWrapper_QRadioButton::minimumSizeHint(QRadioButton* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QRadioButton::mouseMoveEvent(QRadioButton* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->promoted_mouseMoveEvent(arg__1));
}

void PythonQtWrapper_QRadioButton::paintEvent(QRadioButton* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QRadioButton*)theWrappedObject)->promoted_paintEvent(arg__1));
}

QSize  PythonQtWrapper_QRadioButton::sizeHint(QRadioButton* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}



PythonQtShell_QRegExpValidator::~PythonQtShell_QRegExpValidator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRegExpValidator::childEvent(QChildEvent*  arg__1)
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
  QRegExpValidator::childEvent(arg__1);
}
void PythonQtShell_QRegExpValidator::customEvent(QEvent*  arg__1)
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
  QRegExpValidator::customEvent(arg__1);
}
bool  PythonQtShell_QRegExpValidator::event(QEvent*  arg__1)
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
  return QRegExpValidator::event(arg__1);
}
bool  PythonQtShell_QRegExpValidator::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QRegExpValidator::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QRegExpValidator::fixup(QString&  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QRegExpValidator::fixup(arg__1);
}
void PythonQtShell_QRegExpValidator::timerEvent(QTimerEvent*  arg__1)
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
  QRegExpValidator::timerEvent(arg__1);
}
QValidator::State  PythonQtShell_QRegExpValidator::validate(QString&  input0, int&  pos1) const
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
  return QRegExpValidator::validate(input0, pos1);
}
QRegExpValidator* PythonQtWrapper_QRegExpValidator::new_QRegExpValidator(QObject*  parent)
{ 
return new PythonQtShell_QRegExpValidator(parent); }

QRegExpValidator* PythonQtWrapper_QRegExpValidator::new_QRegExpValidator(const QRegExp&  rx, QObject*  parent)
{ 
return new PythonQtShell_QRegExpValidator(rx, parent); }

const QRegExp*  PythonQtWrapper_QRegExpValidator::regExp(QRegExpValidator* theWrappedObject) const
{
  return &( theWrappedObject->regExp());
}

void PythonQtWrapper_QRegExpValidator::setRegExp(QRegExpValidator* theWrappedObject, const QRegExp&  rx)
{
  ( theWrappedObject->setRegExp(rx));
}

QValidator::State  PythonQtWrapper_QRegExpValidator::validate(QRegExpValidator* theWrappedObject, QString&  input, int&  pos) const
{
  return ( ((PythonQtPublicPromoter_QRegExpValidator*)theWrappedObject)->promoted_validate(input, pos));
}



PythonQtShell_QResizeEvent::~PythonQtShell_QResizeEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QResizeEvent* PythonQtWrapper_QResizeEvent::new_QResizeEvent(const QSize&  size, const QSize&  oldSize)
{ 
return new PythonQtShell_QResizeEvent(size, oldSize); }

const QSize*  PythonQtWrapper_QResizeEvent::oldSize(QResizeEvent* theWrappedObject) const
{
  return &( theWrappedObject->oldSize());
}

const QSize*  PythonQtWrapper_QResizeEvent::size(QResizeEvent* theWrappedObject) const
{
  return &( theWrappedObject->size());
}



PythonQtShell_QRubberBand::~PythonQtShell_QRubberBand() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRubberBand::actionEvent(QActionEvent*  arg__1)
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
  QRubberBand::actionEvent(arg__1);
}
void PythonQtShell_QRubberBand::changeEvent(QEvent*  arg__1)
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
  QRubberBand::changeEvent(arg__1);
}
void PythonQtShell_QRubberBand::childEvent(QChildEvent*  arg__1)
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
  QRubberBand::childEvent(arg__1);
}
void PythonQtShell_QRubberBand::closeEvent(QCloseEvent*  arg__1)
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
  QRubberBand::closeEvent(arg__1);
}
void PythonQtShell_QRubberBand::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QRubberBand::contextMenuEvent(arg__1);
}
void PythonQtShell_QRubberBand::customEvent(QEvent*  arg__1)
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
  QRubberBand::customEvent(arg__1);
}
int  PythonQtShell_QRubberBand::devType() const
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
  return QRubberBand::devType();
}
void PythonQtShell_QRubberBand::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QRubberBand::dragEnterEvent(arg__1);
}
void PythonQtShell_QRubberBand::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QRubberBand::dragLeaveEvent(arg__1);
}
void PythonQtShell_QRubberBand::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QRubberBand::dragMoveEvent(arg__1);
}
void PythonQtShell_QRubberBand::dropEvent(QDropEvent*  arg__1)
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
  QRubberBand::dropEvent(arg__1);
}
void PythonQtShell_QRubberBand::enterEvent(QEvent*  arg__1)
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
  QRubberBand::enterEvent(arg__1);
}
bool  PythonQtShell_QRubberBand::event(QEvent*  e0)
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
  return QRubberBand::event(e0);
}
bool  PythonQtShell_QRubberBand::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QRubberBand::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QRubberBand::focusInEvent(QFocusEvent*  arg__1)
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
  QRubberBand::focusInEvent(arg__1);
}
bool  PythonQtShell_QRubberBand::focusNextPrevChild(bool  next0)
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
  return QRubberBand::focusNextPrevChild(next0);
}
void PythonQtShell_QRubberBand::focusOutEvent(QFocusEvent*  arg__1)
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
  QRubberBand::focusOutEvent(arg__1);
}
int  PythonQtShell_QRubberBand::heightForWidth(int  arg__1) const
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
  return QRubberBand::heightForWidth(arg__1);
}
void PythonQtShell_QRubberBand::hideEvent(QHideEvent*  arg__1)
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
  QRubberBand::hideEvent(arg__1);
}
void PythonQtShell_QRubberBand::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QRubberBand::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QRubberBand::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QRubberBand::inputMethodQuery(arg__1);
}
void PythonQtShell_QRubberBand::keyPressEvent(QKeyEvent*  arg__1)
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
  QRubberBand::keyPressEvent(arg__1);
}
void PythonQtShell_QRubberBand::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QRubberBand::keyReleaseEvent(arg__1);
}
void PythonQtShell_QRubberBand::languageChange()
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
  QRubberBand::languageChange();
}
void PythonQtShell_QRubberBand::leaveEvent(QEvent*  arg__1)
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
  QRubberBand::leaveEvent(arg__1);
}
int  PythonQtShell_QRubberBand::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QRubberBand::metric(arg__1);
}
QSize  PythonQtShell_QRubberBand::minimumSizeHint() const
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
  return QRubberBand::minimumSizeHint();
}
void PythonQtShell_QRubberBand::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QRubberBand::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QRubberBand::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QRubberBand::mouseMoveEvent(arg__1);
}
void PythonQtShell_QRubberBand::mousePressEvent(QMouseEvent*  arg__1)
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
  QRubberBand::mousePressEvent(arg__1);
}
void PythonQtShell_QRubberBand::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QRubberBand::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QRubberBand::moveEvent(QMoveEvent*  arg__1)
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
  QRubberBand::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QRubberBand::paintEngine() const
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
  return QRubberBand::paintEngine();
}
void PythonQtShell_QRubberBand::paintEvent(QPaintEvent*  arg__1)
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
  QRubberBand::paintEvent(arg__1);
}
void PythonQtShell_QRubberBand::resizeEvent(QResizeEvent*  arg__1)
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
  QRubberBand::resizeEvent(arg__1);
}
void PythonQtShell_QRubberBand::showEvent(QShowEvent*  arg__1)
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
  QRubberBand::showEvent(arg__1);
}
QSize  PythonQtShell_QRubberBand::sizeHint() const
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
  return QRubberBand::sizeHint();
}
void PythonQtShell_QRubberBand::tabletEvent(QTabletEvent*  arg__1)
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
  QRubberBand::tabletEvent(arg__1);
}
void PythonQtShell_QRubberBand::timerEvent(QTimerEvent*  arg__1)
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
  QRubberBand::timerEvent(arg__1);
}
void PythonQtShell_QRubberBand::wheelEvent(QWheelEvent*  arg__1)
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
  QRubberBand::wheelEvent(arg__1);
}
QRubberBand* PythonQtWrapper_QRubberBand::new_QRubberBand(QRubberBand::Shape  arg__1, QWidget*  arg__2)
{ 
return new PythonQtShell_QRubberBand(arg__1, arg__2); }

void PythonQtWrapper_QRubberBand::changeEvent(QRubberBand* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->promoted_changeEvent(arg__1));
}

bool  PythonQtWrapper_QRubberBand::event(QRubberBand* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QRubberBand::initStyleOption(QRubberBand* theWrappedObject, QStyleOptionRubberBand*  option) const
{
  ( ((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->promoted_initStyleOption(option));
}

void PythonQtWrapper_QRubberBand::move(QRubberBand* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->move(p));
}

void PythonQtWrapper_QRubberBand::move(QRubberBand* theWrappedObject, int  x, int  y)
{
  ( theWrappedObject->move(x, y));
}

void PythonQtWrapper_QRubberBand::moveEvent(QRubberBand* theWrappedObject, QMoveEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->promoted_moveEvent(arg__1));
}

void PythonQtWrapper_QRubberBand::paintEvent(QRubberBand* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->promoted_paintEvent(arg__1));
}

void PythonQtWrapper_QRubberBand::resize(QRubberBand* theWrappedObject, const QSize&  s)
{
  ( theWrappedObject->resize(s));
}

void PythonQtWrapper_QRubberBand::resize(QRubberBand* theWrappedObject, int  w, int  h)
{
  ( theWrappedObject->resize(w, h));
}

void PythonQtWrapper_QRubberBand::resizeEvent(QRubberBand* theWrappedObject, QResizeEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->promoted_resizeEvent(arg__1));
}

void PythonQtWrapper_QRubberBand::setGeometry(QRubberBand* theWrappedObject, const QRect&  r)
{
  ( theWrappedObject->setGeometry(r));
}

void PythonQtWrapper_QRubberBand::setGeometry(QRubberBand* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->setGeometry(x, y, w, h));
}

QRubberBand::Shape  PythonQtWrapper_QRubberBand::shape(QRubberBand* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

void PythonQtWrapper_QRubberBand::showEvent(QRubberBand* theWrappedObject, QShowEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QRubberBand*)theWrappedObject)->promoted_showEvent(arg__1));
}



PythonQtShell_QScrollArea::~PythonQtShell_QScrollArea() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QScrollArea::actionEvent(QActionEvent*  arg__1)
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
  QScrollArea::actionEvent(arg__1);
}
void PythonQtShell_QScrollArea::changeEvent(QEvent*  arg__1)
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
  QScrollArea::changeEvent(arg__1);
}
void PythonQtShell_QScrollArea::childEvent(QChildEvent*  arg__1)
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
  QScrollArea::childEvent(arg__1);
}
void PythonQtShell_QScrollArea::closeEvent(QCloseEvent*  arg__1)
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
  QScrollArea::closeEvent(arg__1);
}
void PythonQtShell_QScrollArea::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QScrollArea::contextMenuEvent(arg__1);
}
void PythonQtShell_QScrollArea::customEvent(QEvent*  arg__1)
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
  QScrollArea::customEvent(arg__1);
}
int  PythonQtShell_QScrollArea::devType() const
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
  return QScrollArea::devType();
}
void PythonQtShell_QScrollArea::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QScrollArea::dragEnterEvent(arg__1);
}
void PythonQtShell_QScrollArea::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QScrollArea::dragLeaveEvent(arg__1);
}
void PythonQtShell_QScrollArea::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QScrollArea::dragMoveEvent(arg__1);
}
void PythonQtShell_QScrollArea::dropEvent(QDropEvent*  arg__1)
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
  QScrollArea::dropEvent(arg__1);
}
void PythonQtShell_QScrollArea::enterEvent(QEvent*  arg__1)
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
  QScrollArea::enterEvent(arg__1);
}
bool  PythonQtShell_QScrollArea::event(QEvent*  arg__1)
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
  return QScrollArea::event(arg__1);
}
bool  PythonQtShell_QScrollArea::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QScrollArea::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QScrollArea::focusInEvent(QFocusEvent*  arg__1)
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
  QScrollArea::focusInEvent(arg__1);
}
bool  PythonQtShell_QScrollArea::focusNextPrevChild(bool  next0)
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
  return QScrollArea::focusNextPrevChild(next0);
}
void PythonQtShell_QScrollArea::focusOutEvent(QFocusEvent*  arg__1)
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
  QScrollArea::focusOutEvent(arg__1);
}
int  PythonQtShell_QScrollArea::heightForWidth(int  arg__1) const
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
  return QScrollArea::heightForWidth(arg__1);
}
void PythonQtShell_QScrollArea::hideEvent(QHideEvent*  arg__1)
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
  QScrollArea::hideEvent(arg__1);
}
void PythonQtShell_QScrollArea::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QScrollArea::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QScrollArea::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QScrollArea::inputMethodQuery(arg__1);
}
void PythonQtShell_QScrollArea::keyPressEvent(QKeyEvent*  arg__1)
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
  QScrollArea::keyPressEvent(arg__1);
}
void PythonQtShell_QScrollArea::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QScrollArea::keyReleaseEvent(arg__1);
}
void PythonQtShell_QScrollArea::languageChange()
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
  QScrollArea::languageChange();
}
void PythonQtShell_QScrollArea::leaveEvent(QEvent*  arg__1)
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
  QScrollArea::leaveEvent(arg__1);
}
int  PythonQtShell_QScrollArea::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QScrollArea::metric(arg__1);
}
void PythonQtShell_QScrollArea::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QScrollArea::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QScrollArea::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QScrollArea::mouseMoveEvent(arg__1);
}
void PythonQtShell_QScrollArea::mousePressEvent(QMouseEvent*  arg__1)
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
  QScrollArea::mousePressEvent(arg__1);
}
void PythonQtShell_QScrollArea::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QScrollArea::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QScrollArea::moveEvent(QMoveEvent*  arg__1)
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
  QScrollArea::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QScrollArea::paintEngine() const
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
  return QScrollArea::paintEngine();
}
void PythonQtShell_QScrollArea::paintEvent(QPaintEvent*  arg__1)
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
  QScrollArea::paintEvent(arg__1);
}
void PythonQtShell_QScrollArea::resizeEvent(QResizeEvent*  arg__1)
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
  QScrollArea::resizeEvent(arg__1);
}
void PythonQtShell_QScrollArea::scrollContentsBy(int  dx0, int  dy1)
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
  QScrollArea::scrollContentsBy(dx0, dy1);
}
void PythonQtShell_QScrollArea::showEvent(QShowEvent*  arg__1)
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
  QScrollArea::showEvent(arg__1);
}
void PythonQtShell_QScrollArea::tabletEvent(QTabletEvent*  arg__1)
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
  QScrollArea::tabletEvent(arg__1);
}
void PythonQtShell_QScrollArea::timerEvent(QTimerEvent*  arg__1)
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
  QScrollArea::timerEvent(arg__1);
}
bool  PythonQtShell_QScrollArea::viewportEvent(QEvent*  arg__1)
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
  return QScrollArea::viewportEvent(arg__1);
}
void PythonQtShell_QScrollArea::wheelEvent(QWheelEvent*  arg__1)
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
  QScrollArea::wheelEvent(arg__1);
}
QScrollArea* PythonQtWrapper_QScrollArea::new_QScrollArea(QWidget*  parent)
{ 
return new PythonQtShell_QScrollArea(parent); }

Qt::Alignment  PythonQtWrapper_QScrollArea::alignment(QScrollArea* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

void PythonQtWrapper_QScrollArea::ensureVisible(QScrollArea* theWrappedObject, int  x, int  y, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(x, y, xmargin, ymargin));
}

void PythonQtWrapper_QScrollArea::ensureWidgetVisible(QScrollArea* theWrappedObject, QWidget*  childWidget, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureWidgetVisible(childWidget, xmargin, ymargin));
}

bool  PythonQtWrapper_QScrollArea::event(QScrollArea* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QScrollArea::eventFilter(QScrollArea* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
  return ( ((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->promoted_eventFilter(arg__1, arg__2));
}

bool  PythonQtWrapper_QScrollArea::focusNextPrevChild(QScrollArea* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QScrollArea::resizeEvent(QScrollArea* theWrappedObject, QResizeEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->promoted_resizeEvent(arg__1));
}

void PythonQtWrapper_QScrollArea::scrollContentsBy(QScrollArea* theWrappedObject, int  dx, int  dy)
{
  ( ((PythonQtPublicPromoter_QScrollArea*)theWrappedObject)->promoted_scrollContentsBy(dx, dy));
}

void PythonQtWrapper_QScrollArea::setAlignment(QScrollArea* theWrappedObject, Qt::Alignment  arg__1)
{
  ( theWrappedObject->setAlignment(arg__1));
}

void PythonQtWrapper_QScrollArea::setWidget(QScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget)
{
  ( theWrappedObject->setWidget(widget));
}

void PythonQtWrapper_QScrollArea::setWidgetResizable(QScrollArea* theWrappedObject, bool  resizable)
{
  ( theWrappedObject->setWidgetResizable(resizable));
}

QSize  PythonQtWrapper_QScrollArea::sizeHint(QScrollArea* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

QWidget*  PythonQtWrapper_QScrollArea::takeWidget(QScrollArea* theWrappedObject)
{
  return ( theWrappedObject->takeWidget());
}

QWidget*  PythonQtWrapper_QScrollArea::widget(QScrollArea* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}

bool  PythonQtWrapper_QScrollArea::widgetResizable(QScrollArea* theWrappedObject) const
{
  return ( theWrappedObject->widgetResizable());
}



PythonQtShell_QScrollBar::~PythonQtShell_QScrollBar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QScrollBar::actionEvent(QActionEvent*  arg__1)
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
  QScrollBar::actionEvent(arg__1);
}
void PythonQtShell_QScrollBar::changeEvent(QEvent*  e0)
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
  QScrollBar::changeEvent(e0);
}
void PythonQtShell_QScrollBar::childEvent(QChildEvent*  arg__1)
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
  QScrollBar::childEvent(arg__1);
}
void PythonQtShell_QScrollBar::closeEvent(QCloseEvent*  arg__1)
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
  QScrollBar::closeEvent(arg__1);
}
void PythonQtShell_QScrollBar::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QScrollBar::contextMenuEvent(arg__1);
}
void PythonQtShell_QScrollBar::customEvent(QEvent*  arg__1)
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
  QScrollBar::customEvent(arg__1);
}
int  PythonQtShell_QScrollBar::devType() const
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
  return QScrollBar::devType();
}
void PythonQtShell_QScrollBar::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QScrollBar::dragEnterEvent(arg__1);
}
void PythonQtShell_QScrollBar::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QScrollBar::dragLeaveEvent(arg__1);
}
void PythonQtShell_QScrollBar::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QScrollBar::dragMoveEvent(arg__1);
}
void PythonQtShell_QScrollBar::dropEvent(QDropEvent*  arg__1)
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
  QScrollBar::dropEvent(arg__1);
}
void PythonQtShell_QScrollBar::enterEvent(QEvent*  arg__1)
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
  QScrollBar::enterEvent(arg__1);
}
bool  PythonQtShell_QScrollBar::event(QEvent*  event0)
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
  return QScrollBar::event(event0);
}
bool  PythonQtShell_QScrollBar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QScrollBar::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QScrollBar::focusInEvent(QFocusEvent*  arg__1)
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
  QScrollBar::focusInEvent(arg__1);
}
bool  PythonQtShell_QScrollBar::focusNextPrevChild(bool  next0)
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
  return QScrollBar::focusNextPrevChild(next0);
}
void PythonQtShell_QScrollBar::focusOutEvent(QFocusEvent*  arg__1)
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
  QScrollBar::focusOutEvent(arg__1);
}
int  PythonQtShell_QScrollBar::heightForWidth(int  arg__1) const
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
  return QScrollBar::heightForWidth(arg__1);
}
void PythonQtShell_QScrollBar::hideEvent(QHideEvent*  arg__1)
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
  QScrollBar::hideEvent(arg__1);
}
void PythonQtShell_QScrollBar::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QScrollBar::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QScrollBar::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QScrollBar::inputMethodQuery(arg__1);
}
void PythonQtShell_QScrollBar::keyPressEvent(QKeyEvent*  ev0)
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
  QScrollBar::keyPressEvent(ev0);
}
void PythonQtShell_QScrollBar::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QScrollBar::keyReleaseEvent(arg__1);
}
void PythonQtShell_QScrollBar::languageChange()
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
  QScrollBar::languageChange();
}
void PythonQtShell_QScrollBar::leaveEvent(QEvent*  arg__1)
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
  QScrollBar::leaveEvent(arg__1);
}
int  PythonQtShell_QScrollBar::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QScrollBar::metric(arg__1);
}
QSize  PythonQtShell_QScrollBar::minimumSizeHint() const
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
  return QScrollBar::minimumSizeHint();
}
void PythonQtShell_QScrollBar::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QScrollBar::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QScrollBar::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QScrollBar::mouseMoveEvent(arg__1);
}
void PythonQtShell_QScrollBar::mousePressEvent(QMouseEvent*  arg__1)
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
  QScrollBar::mousePressEvent(arg__1);
}
void PythonQtShell_QScrollBar::mouseReleaseEvent(QMouseEvent*  arg__1)
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
  QScrollBar::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QScrollBar::moveEvent(QMoveEvent*  arg__1)
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
  QScrollBar::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QScrollBar::paintEngine() const
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
  return QScrollBar::paintEngine();
}
void PythonQtShell_QScrollBar::paintEvent(QPaintEvent*  arg__1)
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
  QScrollBar::paintEvent(arg__1);
}
void PythonQtShell_QScrollBar::resizeEvent(QResizeEvent*  arg__1)
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
  QScrollBar::resizeEvent(arg__1);
}
void PythonQtShell_QScrollBar::showEvent(QShowEvent*  arg__1)
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
  QScrollBar::showEvent(arg__1);
}
void PythonQtShell_QScrollBar::tabletEvent(QTabletEvent*  arg__1)
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
  QScrollBar::tabletEvent(arg__1);
}
void PythonQtShell_QScrollBar::timerEvent(QTimerEvent*  arg__1)
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
  QScrollBar::timerEvent(arg__1);
}
void PythonQtShell_QScrollBar::wheelEvent(QWheelEvent*  e0)
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
  QScrollBar::wheelEvent(e0);
}
QScrollBar* PythonQtWrapper_QScrollBar::new_QScrollBar(QWidget*  parent)
{ 
return new PythonQtShell_QScrollBar(parent); }

QScrollBar* PythonQtWrapper_QScrollBar::new_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent)
{ 
return new PythonQtShell_QScrollBar(arg__1, parent); }

void PythonQtWrapper_QScrollBar::contextMenuEvent(QScrollBar* theWrappedObject, QContextMenuEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->promoted_contextMenuEvent(arg__1));
}

bool  PythonQtWrapper_QScrollBar::event(QScrollBar* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->promoted_event(event));
}

void PythonQtWrapper_QScrollBar::hideEvent(QScrollBar* theWrappedObject, QHideEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->promoted_hideEvent(arg__1));
}

void PythonQtWrapper_QScrollBar::initStyleOption(QScrollBar* theWrappedObject, QStyleOptionSlider*  option) const
{
  ( ((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->promoted_initStyleOption(option));
}

void PythonQtWrapper_QScrollBar::mouseMoveEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->promoted_mouseMoveEvent(arg__1));
}

void PythonQtWrapper_QScrollBar::mousePressEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->promoted_mousePressEvent(arg__1));
}

void PythonQtWrapper_QScrollBar::mouseReleaseEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1));
}

void PythonQtWrapper_QScrollBar::paintEvent(QScrollBar* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->promoted_paintEvent(arg__1));
}

QSize  PythonQtWrapper_QScrollBar::sizeHint(QScrollBar* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

void PythonQtWrapper_QScrollBar::sliderChange(QScrollBar* theWrappedObject, int  change)
{
  ( ((PythonQtPublicPromoter_QScrollBar*)theWrappedObject)->promoted_sliderChange(change));
}



bool  PythonQtWrapper_QSessionManager::allowsErrorInteraction(QSessionManager* theWrappedObject)
{
  return ( theWrappedObject->allowsErrorInteraction());
}

bool  PythonQtWrapper_QSessionManager::allowsInteraction(QSessionManager* theWrappedObject)
{
  return ( theWrappedObject->allowsInteraction());
}

void PythonQtWrapper_QSessionManager::cancel(QSessionManager* theWrappedObject)
{
  ( theWrappedObject->cancel());
}

QStringList  PythonQtWrapper_QSessionManager::discardCommand(QSessionManager* theWrappedObject) const
{
  return ( theWrappedObject->discardCommand());
}

bool  PythonQtWrapper_QSessionManager::isPhase2(QSessionManager* theWrappedObject) const
{
  return ( theWrappedObject->isPhase2());
}

void PythonQtWrapper_QSessionManager::release(QSessionManager* theWrappedObject)
{
  ( theWrappedObject->release());
}

void PythonQtWrapper_QSessionManager::requestPhase2(QSessionManager* theWrappedObject)
{
  ( theWrappedObject->requestPhase2());
}

QStringList  PythonQtWrapper_QSessionManager::restartCommand(QSessionManager* theWrappedObject) const
{
  return ( theWrappedObject->restartCommand());
}

QSessionManager::RestartHint  PythonQtWrapper_QSessionManager::restartHint(QSessionManager* theWrappedObject) const
{
  return ( theWrappedObject->restartHint());
}

QString  PythonQtWrapper_QSessionManager::sessionId(QSessionManager* theWrappedObject) const
{
  return ( theWrappedObject->sessionId());
}

QString  PythonQtWrapper_QSessionManager::sessionKey(QSessionManager* theWrappedObject) const
{
  return ( theWrappedObject->sessionKey());
}

void PythonQtWrapper_QSessionManager::setDiscardCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1)
{
  ( theWrappedObject->setDiscardCommand(arg__1));
}

void PythonQtWrapper_QSessionManager::setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->setManagerProperty(name, value));
}

void PythonQtWrapper_QSessionManager::setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QStringList&  value)
{
  ( theWrappedObject->setManagerProperty(name, value));
}

void PythonQtWrapper_QSessionManager::setRestartCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1)
{
  ( theWrappedObject->setRestartCommand(arg__1));
}

void PythonQtWrapper_QSessionManager::setRestartHint(QSessionManager* theWrappedObject, QSessionManager::RestartHint  arg__1)
{
  ( theWrappedObject->setRestartHint(arg__1));
}



PythonQtShell_QShortcut::~PythonQtShell_QShortcut() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QShortcut::childEvent(QChildEvent*  arg__1)
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
  QShortcut::childEvent(arg__1);
}
void PythonQtShell_QShortcut::customEvent(QEvent*  arg__1)
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
  QShortcut::customEvent(arg__1);
}
bool  PythonQtShell_QShortcut::event(QEvent*  e0)
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
  return QShortcut::event(e0);
}
bool  PythonQtShell_QShortcut::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QShortcut::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QShortcut::timerEvent(QTimerEvent*  arg__1)
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
  QShortcut::timerEvent(arg__1);
}
QShortcut* PythonQtWrapper_QShortcut::new_QShortcut(QWidget*  parent)
{ 
return new PythonQtShell_QShortcut(parent); }

QShortcut* PythonQtWrapper_QShortcut::new_QShortcut(const QKeySequence&  key, QWidget*  parent, const char*  member, const char*  ambiguousMember, Qt::ShortcutContext  context)
{ 
return new PythonQtShell_QShortcut(key, parent, member, ambiguousMember, context); }

bool  PythonQtWrapper_QShortcut::autoRepeat(QShortcut* theWrappedObject) const
{
  return ( theWrappedObject->autoRepeat());
}

Qt::ShortcutContext  PythonQtWrapper_QShortcut::context(QShortcut* theWrappedObject)
{
  return ( theWrappedObject->context());
}

bool  PythonQtWrapper_QShortcut::event(QShortcut* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QShortcut*)theWrappedObject)->promoted_event(e));
}

int  PythonQtWrapper_QShortcut::id(QShortcut* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

bool  PythonQtWrapper_QShortcut::isEnabled(QShortcut* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

QKeySequence  PythonQtWrapper_QShortcut::key(QShortcut* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

QWidget*  PythonQtWrapper_QShortcut::parentWidget(QShortcut* theWrappedObject) const
{
  return ( theWrappedObject->parentWidget());
}

void PythonQtWrapper_QShortcut::setAutoRepeat(QShortcut* theWrappedObject, bool  on)
{
  ( theWrappedObject->setAutoRepeat(on));
}

void PythonQtWrapper_QShortcut::setContext(QShortcut* theWrappedObject, Qt::ShortcutContext  context)
{
  ( theWrappedObject->setContext(context));
}

void PythonQtWrapper_QShortcut::setEnabled(QShortcut* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setEnabled(enable));
}

void PythonQtWrapper_QShortcut::setKey(QShortcut* theWrappedObject, const QKeySequence&  key)
{
  ( theWrappedObject->setKey(key));
}

void PythonQtWrapper_QShortcut::setWhatsThis(QShortcut* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setWhatsThis(text));
}

QString  PythonQtWrapper_QShortcut::whatsThis(QShortcut* theWrappedObject) const
{
  return ( theWrappedObject->whatsThis());
}



PythonQtShell_QShortcutEvent::~PythonQtShell_QShortcutEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QShortcutEvent* PythonQtWrapper_QShortcutEvent::new_QShortcutEvent(const QKeySequence&  key, int  id, bool  ambiguous)
{ 
return new PythonQtShell_QShortcutEvent(key, id, ambiguous); }

bool  PythonQtWrapper_QShortcutEvent::isAmbiguous(QShortcutEvent* theWrappedObject) const
{
  return ( theWrappedObject->isAmbiguous());
}

const QKeySequence*  PythonQtWrapper_QShortcutEvent::key(QShortcutEvent* theWrappedObject) const
{
  return &( theWrappedObject->key());
}

int  PythonQtWrapper_QShortcutEvent::shortcutId(QShortcutEvent* theWrappedObject) const
{
  return ( theWrappedObject->shortcutId());
}



QShowEvent* PythonQtWrapper_QShowEvent::new_QShowEvent()
{ 
return new QShowEvent(); }



PythonQtShell_QSizeGrip::~PythonQtShell_QSizeGrip() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSizeGrip::actionEvent(QActionEvent*  arg__1)
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
  QSizeGrip::actionEvent(arg__1);
}
void PythonQtShell_QSizeGrip::changeEvent(QEvent*  arg__1)
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
  QSizeGrip::changeEvent(arg__1);
}
void PythonQtShell_QSizeGrip::childEvent(QChildEvent*  arg__1)
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
  QSizeGrip::childEvent(arg__1);
}
void PythonQtShell_QSizeGrip::closeEvent(QCloseEvent*  arg__1)
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
  QSizeGrip::closeEvent(arg__1);
}
void PythonQtShell_QSizeGrip::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QSizeGrip::contextMenuEvent(arg__1);
}
void PythonQtShell_QSizeGrip::customEvent(QEvent*  arg__1)
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
  QSizeGrip::customEvent(arg__1);
}
int  PythonQtShell_QSizeGrip::devType() const
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
  return QSizeGrip::devType();
}
void PythonQtShell_QSizeGrip::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QSizeGrip::dragEnterEvent(arg__1);
}
void PythonQtShell_QSizeGrip::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QSizeGrip::dragLeaveEvent(arg__1);
}
void PythonQtShell_QSizeGrip::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QSizeGrip::dragMoveEvent(arg__1);
}
void PythonQtShell_QSizeGrip::dropEvent(QDropEvent*  arg__1)
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
  QSizeGrip::dropEvent(arg__1);
}
void PythonQtShell_QSizeGrip::enterEvent(QEvent*  arg__1)
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
  QSizeGrip::enterEvent(arg__1);
}
bool  PythonQtShell_QSizeGrip::event(QEvent*  arg__1)
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
  return QSizeGrip::event(arg__1);
}
bool  PythonQtShell_QSizeGrip::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSizeGrip::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSizeGrip::focusInEvent(QFocusEvent*  arg__1)
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
  QSizeGrip::focusInEvent(arg__1);
}
bool  PythonQtShell_QSizeGrip::focusNextPrevChild(bool  next0)
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
  return QSizeGrip::focusNextPrevChild(next0);
}
void PythonQtShell_QSizeGrip::focusOutEvent(QFocusEvent*  arg__1)
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
  QSizeGrip::focusOutEvent(arg__1);
}
int  PythonQtShell_QSizeGrip::heightForWidth(int  arg__1) const
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
  return QSizeGrip::heightForWidth(arg__1);
}
void PythonQtShell_QSizeGrip::hideEvent(QHideEvent*  hideEvent0)
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
  QSizeGrip::hideEvent(hideEvent0);
}
void PythonQtShell_QSizeGrip::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QSizeGrip::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QSizeGrip::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QSizeGrip::inputMethodQuery(arg__1);
}
void PythonQtShell_QSizeGrip::keyPressEvent(QKeyEvent*  arg__1)
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
  QSizeGrip::keyPressEvent(arg__1);
}
void PythonQtShell_QSizeGrip::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QSizeGrip::keyReleaseEvent(arg__1);
}
void PythonQtShell_QSizeGrip::languageChange()
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
  QSizeGrip::languageChange();
}
void PythonQtShell_QSizeGrip::leaveEvent(QEvent*  arg__1)
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
  QSizeGrip::leaveEvent(arg__1);
}
int  PythonQtShell_QSizeGrip::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QSizeGrip::metric(arg__1);
}
QSize  PythonQtShell_QSizeGrip::minimumSizeHint() const
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
  return QSizeGrip::minimumSizeHint();
}
void PythonQtShell_QSizeGrip::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QSizeGrip::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QSizeGrip::mouseMoveEvent(QMouseEvent*  arg__1)
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
  QSizeGrip::mouseMoveEvent(arg__1);
}
void PythonQtShell_QSizeGrip::mousePressEvent(QMouseEvent*  arg__1)
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
  QSizeGrip::mousePressEvent(arg__1);
}
void PythonQtShell_QSizeGrip::mouseReleaseEvent(QMouseEvent*  mouseEvent0)
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
  QSizeGrip::mouseReleaseEvent(mouseEvent0);
}
void PythonQtShell_QSizeGrip::moveEvent(QMoveEvent*  moveEvent0)
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
  QSizeGrip::moveEvent(moveEvent0);
}
QPaintEngine*  PythonQtShell_QSizeGrip::paintEngine() const
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
  return QSizeGrip::paintEngine();
}
void PythonQtShell_QSizeGrip::paintEvent(QPaintEvent*  arg__1)
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
  QSizeGrip::paintEvent(arg__1);
}
void PythonQtShell_QSizeGrip::resizeEvent(QResizeEvent*  arg__1)
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
  QSizeGrip::resizeEvent(arg__1);
}
void PythonQtShell_QSizeGrip::showEvent(QShowEvent*  showEvent0)
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
  QSizeGrip::showEvent(showEvent0);
}
void PythonQtShell_QSizeGrip::tabletEvent(QTabletEvent*  arg__1)
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
  QSizeGrip::tabletEvent(arg__1);
}
void PythonQtShell_QSizeGrip::timerEvent(QTimerEvent*  arg__1)
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
  QSizeGrip::timerEvent(arg__1);
}
void PythonQtShell_QSizeGrip::wheelEvent(QWheelEvent*  arg__1)
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
  QSizeGrip::wheelEvent(arg__1);
}
QSizeGrip* PythonQtWrapper_QSizeGrip::new_QSizeGrip(QWidget*  parent)
{ 
return new PythonQtShell_QSizeGrip(parent); }

bool  PythonQtWrapper_QSizeGrip::event(QSizeGrip* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QSizeGrip::eventFilter(QSizeGrip* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
  return ( ((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->promoted_eventFilter(arg__1, arg__2));
}

void PythonQtWrapper_QSizeGrip::hideEvent(QSizeGrip* theWrappedObject, QHideEvent*  hideEvent)
{
  ( ((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->promoted_hideEvent(hideEvent));
}

void PythonQtWrapper_QSizeGrip::mouseMoveEvent(QSizeGrip* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->promoted_mouseMoveEvent(arg__1));
}

void PythonQtWrapper_QSizeGrip::mousePressEvent(QSizeGrip* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->promoted_mousePressEvent(arg__1));
}

void PythonQtWrapper_QSizeGrip::mouseReleaseEvent(QSizeGrip* theWrappedObject, QMouseEvent*  mouseEvent)
{
  ( ((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->promoted_mouseReleaseEvent(mouseEvent));
}

void PythonQtWrapper_QSizeGrip::moveEvent(QSizeGrip* theWrappedObject, QMoveEvent*  moveEvent)
{
  ( ((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->promoted_moveEvent(moveEvent));
}

void PythonQtWrapper_QSizeGrip::paintEvent(QSizeGrip* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->promoted_paintEvent(arg__1));
}

void PythonQtWrapper_QSizeGrip::setVisible(QSizeGrip* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setVisible(arg__1));
}

void PythonQtWrapper_QSizeGrip::showEvent(QSizeGrip* theWrappedObject, QShowEvent*  showEvent)
{
  ( ((PythonQtPublicPromoter_QSizeGrip*)theWrappedObject)->promoted_showEvent(showEvent));
}

QSize  PythonQtWrapper_QSizeGrip::sizeHint(QSizeGrip* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}



PythonQtShell_QSlider::~PythonQtShell_QSlider() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSlider::actionEvent(QActionEvent*  arg__1)
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
  QSlider::actionEvent(arg__1);
}
void PythonQtShell_QSlider::changeEvent(QEvent*  e0)
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
  QSlider::changeEvent(e0);
}
void PythonQtShell_QSlider::childEvent(QChildEvent*  arg__1)
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
  QSlider::childEvent(arg__1);
}
void PythonQtShell_QSlider::closeEvent(QCloseEvent*  arg__1)
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
  QSlider::closeEvent(arg__1);
}
void PythonQtShell_QSlider::contextMenuEvent(QContextMenuEvent*  arg__1)
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
  QSlider::contextMenuEvent(arg__1);
}
void PythonQtShell_QSlider::customEvent(QEvent*  arg__1)
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
  QSlider::customEvent(arg__1);
}
int  PythonQtShell_QSlider::devType() const
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
  return QSlider::devType();
}
void PythonQtShell_QSlider::dragEnterEvent(QDragEnterEvent*  arg__1)
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
  QSlider::dragEnterEvent(arg__1);
}
void PythonQtShell_QSlider::dragLeaveEvent(QDragLeaveEvent*  arg__1)
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
  QSlider::dragLeaveEvent(arg__1);
}
void PythonQtShell_QSlider::dragMoveEvent(QDragMoveEvent*  arg__1)
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
  QSlider::dragMoveEvent(arg__1);
}
void PythonQtShell_QSlider::dropEvent(QDropEvent*  arg__1)
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
  QSlider::dropEvent(arg__1);
}
void PythonQtShell_QSlider::enterEvent(QEvent*  arg__1)
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
  QSlider::enterEvent(arg__1);
}
bool  PythonQtShell_QSlider::event(QEvent*  event0)
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
  return QSlider::event(event0);
}
bool  PythonQtShell_QSlider::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSlider::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSlider::focusInEvent(QFocusEvent*  arg__1)
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
  QSlider::focusInEvent(arg__1);
}
bool  PythonQtShell_QSlider::focusNextPrevChild(bool  next0)
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
  return QSlider::focusNextPrevChild(next0);
}
void PythonQtShell_QSlider::focusOutEvent(QFocusEvent*  arg__1)
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
  QSlider::focusOutEvent(arg__1);
}
int  PythonQtShell_QSlider::heightForWidth(int  arg__1) const
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
  return QSlider::heightForWidth(arg__1);
}
void PythonQtShell_QSlider::hideEvent(QHideEvent*  arg__1)
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
  QSlider::hideEvent(arg__1);
}
void PythonQtShell_QSlider::inputMethodEvent(QInputMethodEvent*  arg__1)
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
  QSlider::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QSlider::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
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
  return QSlider::inputMethodQuery(arg__1);
}
void PythonQtShell_QSlider::keyPressEvent(QKeyEvent*  ev0)
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
  QSlider::keyPressEvent(ev0);
}
void PythonQtShell_QSlider::keyReleaseEvent(QKeyEvent*  arg__1)
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
  QSlider::keyReleaseEvent(arg__1);
}
void PythonQtShell_QSlider::languageChange()
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
  QSlider::languageChange();
}
void PythonQtShell_QSlider::leaveEvent(QEvent*  arg__1)
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
  QSlider::leaveEvent(arg__1);
}
int  PythonQtShell_QSlider::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
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
  return QSlider::metric(arg__1);
}
void PythonQtShell_QSlider::mouseDoubleClickEvent(QMouseEvent*  arg__1)
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
  QSlider::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QSlider::mouseMoveEvent(QMouseEvent*  ev0)
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
  QSlider::mouseMoveEvent(ev0);
}
void PythonQtShell_QSlider::mousePressEvent(QMouseEvent*  ev0)
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
  QSlider::mousePressEvent(ev0);
}
void PythonQtShell_QSlider::mouseReleaseEvent(QMouseEvent*  ev0)
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
  QSlider::mouseReleaseEvent(ev0);
}
void PythonQtShell_QSlider::moveEvent(QMoveEvent*  arg__1)
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
  QSlider::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QSlider::paintEngine() const
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
  return QSlider::paintEngine();
}
void PythonQtShell_QSlider::paintEvent(QPaintEvent*  ev0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("paintEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
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
  QSlider::paintEvent(ev0);
}
void PythonQtShell_QSlider::resizeEvent(QResizeEvent*  arg__1)
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
  QSlider::resizeEvent(arg__1);
}
void PythonQtShell_QSlider::showEvent(QShowEvent*  arg__1)
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
  QSlider::showEvent(arg__1);
}
void PythonQtShell_QSlider::tabletEvent(QTabletEvent*  arg__1)
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
  QSlider::tabletEvent(arg__1);
}
void PythonQtShell_QSlider::timerEvent(QTimerEvent*  arg__1)
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
  QSlider::timerEvent(arg__1);
}
void PythonQtShell_QSlider::wheelEvent(QWheelEvent*  e0)
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
  QSlider::wheelEvent(e0);
}
QSlider* PythonQtWrapper_QSlider::new_QSlider(QWidget*  parent)
{ 
return new PythonQtShell_QSlider(parent); }

QSlider* PythonQtWrapper_QSlider::new_QSlider(Qt::Orientation  orientation, QWidget*  parent)
{ 
return new PythonQtShell_QSlider(orientation, parent); }

bool  PythonQtWrapper_QSlider::event(QSlider* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QSlider*)theWrappedObject)->promoted_event(event));
}

void PythonQtWrapper_QSlider::initStyleOption(QSlider* theWrappedObject, QStyleOptionSlider*  option) const
{
  ( ((PythonQtPublicPromoter_QSlider*)theWrappedObject)->promoted_initStyleOption(option));
}

QSize  PythonQtWrapper_QSlider::minimumSizeHint(QSlider* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QSlider::mouseMoveEvent(QSlider* theWrappedObject, QMouseEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QSlider*)theWrappedObject)->promoted_mouseMoveEvent(ev));
}

void PythonQtWrapper_QSlider::mousePressEvent(QSlider* theWrappedObject, QMouseEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QSlider*)theWrappedObject)->promoted_mousePressEvent(ev));
}

void PythonQtWrapper_QSlider::mouseReleaseEvent(QSlider* theWrappedObject, QMouseEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QSlider*)theWrappedObject)->promoted_mouseReleaseEvent(ev));
}

void PythonQtWrapper_QSlider::paintEvent(QSlider* theWrappedObject, QPaintEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QSlider*)theWrappedObject)->promoted_paintEvent(ev));
}

void PythonQtWrapper_QSlider::setTickInterval(QSlider* theWrappedObject, int  ti)
{
  ( theWrappedObject->setTickInterval(ti));
}

void PythonQtWrapper_QSlider::setTickPosition(QSlider* theWrappedObject, QSlider::TickPosition  position)
{
  ( theWrappedObject->setTickPosition(position));
}

QSize  PythonQtWrapper_QSlider::sizeHint(QSlider* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

int  PythonQtWrapper_QSlider::tickInterval(QSlider* theWrappedObject) const
{
  return ( theWrappedObject->tickInterval());
}

QSlider::TickPosition  PythonQtWrapper_QSlider::tickPosition(QSlider* theWrappedObject) const
{
  return ( theWrappedObject->tickPosition());
}


