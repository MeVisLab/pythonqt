#include "PythonQtWrapper_QTextDocument.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextFormat>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregexp.h>
#include <qsize.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qurl.h>
#include <qvector.h>

void PythonQtShell_QTextDocument::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextDocument::staticMetaObject,
      "childEvent(QTextDocument*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextDocument::childEvent(arg__1);
}
void PythonQtShell_QTextDocument::clear()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clear");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextDocument::staticMetaObject,
      "clear(QTextDocument*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextDocument::clear();
}
QTextObject*  PythonQtShell_QTextDocument::createObject(const QTextFormat&  f)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createObject");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextDocument::staticMetaObject,
      "createObject(QTextDocument*,const QTextFormat& )");
      QTextObject*  returnValue;
    void* args[2] = {NULL, (void*)&f};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QTextObject* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTextDocument::createObject(f);
}
void PythonQtShell_QTextDocument::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextDocument::staticMetaObject,
      "customEvent(QTextDocument*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextDocument::customEvent(arg__1);
}
bool  PythonQtShell_QTextDocument::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextDocument::staticMetaObject,
      "event(QTextDocument*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTextDocument::event(arg__1);
}
bool  PythonQtShell_QTextDocument::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextDocument::staticMetaObject,
      "eventFilter(QTextDocument*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTextDocument::eventFilter(arg__1, arg__2);
}
QVariant  PythonQtShell_QTextDocument::loadResource(int  type, const QUrl&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "loadResource");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextDocument::staticMetaObject,
      "loadResource(QTextDocument*,int ,const QUrl& )");
      QVariant  returnValue;
    void* args[3] = {NULL, (void*)&type, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTextDocument::loadResource(type, name);
}
void PythonQtShell_QTextDocument::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextDocument::staticMetaObject,
      "timerEvent(QTextDocument*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
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

QAbstractTextDocumentLayout*  PythonQtWrapper_QTextDocument::documentLayout(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->documentLayout();
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from, QTextDocument::FindFlags  options) const
{
return  theWrappedObject->find(expr, from, options);
}

QTextBlock  PythonQtWrapper_QTextDocument::findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const
{
return  theWrappedObject->findBlockByNumber(blockNumber);
}

void PythonQtWrapper_QTextDocument::drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
 theWrappedObject->drawContents(painter, rect);
}

QString  PythonQtWrapper_QTextDocument::defaultStyleSheet(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->defaultStyleSheet();
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options) const
{
return  theWrappedObject->find(expr, from, options);
}

QSizeF  PythonQtWrapper_QTextDocument::size(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->size();
}

QVariant  PythonQtWrapper_QTextDocument::resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const
{
return  theWrappedObject->resource(type, name);
}

QVariant  PythonQtWrapper_QTextDocument::loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name)
{
return  ((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->promoted_loadResource(type, name);
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QString&  subString, int  from, QTextDocument::FindFlags  options) const
{
return  theWrappedObject->find(subString, from, options);
}

bool  PythonQtWrapper_QTextDocument::isEmpty(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->isEmpty();
}

void PythonQtWrapper_QTextDocument::setTextWidth(QTextDocument* theWrappedObject, qreal  width)
{
 theWrappedObject->setTextWidth(width);
}

bool  PythonQtWrapper_QTextDocument::isUndoAvailable(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->isUndoAvailable();
}

QTextOption  PythonQtWrapper_QTextDocument::defaultTextOption(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->defaultTextOption();
}

void PythonQtWrapper_QTextDocument::setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout)
{
 theWrappedObject->setDocumentLayout(layout);
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options) const
{
return  theWrappedObject->find(subString, from, options);
}

void PythonQtWrapper_QTextDocument::setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum)
{
 theWrappedObject->setMaximumBlockCount(maximum);
}

QTextFrame*  PythonQtWrapper_QTextDocument::rootFrame(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->rootFrame();
}

void PythonQtWrapper_QTextDocument::setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size)
{
 theWrappedObject->setPageSize(size);
}

void PythonQtWrapper_QTextDocument::setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b)
{
 theWrappedObject->setUseDesignMetrics(b);
}

void PythonQtWrapper_QTextDocument::clear(QTextDocument* theWrappedObject)
{
 ((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->promoted_clear();
}

QString  PythonQtWrapper_QTextDocument::toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding) const
{
return  theWrappedObject->toHtml(encoding);
}

int  PythonQtWrapper_QTextDocument::maximumBlockCount(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->maximumBlockCount();
}

qreal  PythonQtWrapper_QTextDocument::indentWidth(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->indentWidth();
}

bool  PythonQtWrapper_QTextDocument::useDesignMetrics(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->useDesignMetrics();
}

QString  PythonQtWrapper_QTextDocument::metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const
{
return  theWrappedObject->metaInformation(info);
}

QVector<QTextFormat >  PythonQtWrapper_QTextDocument::allFormats(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->allFormats();
}

void PythonQtWrapper_QTextDocument::undo(QTextDocument* theWrappedObject, QTextCursor*  cursor)
{
 theWrappedObject->undo(cursor);
}

QTextBlock  PythonQtWrapper_QTextDocument::lastBlock(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->lastBlock();
}

void PythonQtWrapper_QTextDocument::setHtml(QTextDocument* theWrappedObject, const QString&  html)
{
 theWrappedObject->setHtml(html);
}

bool  PythonQtWrapper_QTextDocument::isRedoAvailable(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->isRedoAvailable();
}

void PythonQtWrapper_QTextDocument::redo(QTextDocument* theWrappedObject, QTextCursor*  cursor)
{
 theWrappedObject->redo(cursor);
}

void PythonQtWrapper_QTextDocument::setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option)
{
 theWrappedObject->setDefaultTextOption(option);
}

QSizeF  PythonQtWrapper_QTextDocument::pageSize(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->pageSize();
}

void PythonQtWrapper_QTextDocument::setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet)
{
 theWrappedObject->setDefaultStyleSheet(sheet);
}

QTextBlock  PythonQtWrapper_QTextDocument::findBlock(QTextDocument* theWrappedObject, int  pos) const
{
return  theWrappedObject->findBlock(pos);
}

QTextObject*  PythonQtWrapper_QTextDocument::createObject(QTextDocument* theWrappedObject, const QTextFormat&  f)
{
return  ((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->promoted_createObject(f);
}

int  PythonQtWrapper_QTextDocument::blockCount(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->blockCount();
}

QFont  PythonQtWrapper_QTextDocument::defaultFont(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->defaultFont();
}

QString  PythonQtWrapper_QTextDocument::toPlainText(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->toPlainText();
}

void PythonQtWrapper_QTextDocument::markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length)
{
 theWrappedObject->markContentsDirty(from, length);
}

void PythonQtWrapper_QTextDocument::setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable)
{
 theWrappedObject->setUndoRedoEnabled(enable);
}

QTextBlock  PythonQtWrapper_QTextDocument::end(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->end();
}

QTextBlock  PythonQtWrapper_QTextDocument::firstBlock(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->firstBlock();
}

QTextBlock  PythonQtWrapper_QTextDocument::begin(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->begin();
}

void PythonQtWrapper_QTextDocument::adjustSize(QTextDocument* theWrappedObject)
{
 theWrappedObject->adjustSize();
}

bool  PythonQtWrapper_QTextDocument::isUndoRedoEnabled(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->isUndoRedoEnabled();
}

void PythonQtWrapper_QTextDocument::setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font)
{
 theWrappedObject->setDefaultFont(font);
}

qreal  PythonQtWrapper_QTextDocument::textWidth(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->textWidth();
}

void PythonQtWrapper_QTextDocument::addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource)
{
 theWrappedObject->addResource(type, name, resource);
}

void PythonQtWrapper_QTextDocument::setPlainText(QTextDocument* theWrappedObject, const QString&  text)
{
 theWrappedObject->setPlainText(text);
}

QTextFrame*  PythonQtWrapper_QTextDocument::frameAt(QTextDocument* theWrappedObject, int  pos) const
{
return  theWrappedObject->frameAt(pos);
}

void PythonQtWrapper_QTextDocument::setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2)
{
 theWrappedObject->setMetaInformation(info, arg__2);
}

QTextObject*  PythonQtWrapper_QTextDocument::objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const
{
return  theWrappedObject->objectForFormat(arg__1);
}

qreal  PythonQtWrapper_QTextDocument::idealWidth(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->idealWidth();
}

QTextDocument*  PythonQtWrapper_QTextDocument::clone(QTextDocument* theWrappedObject, QObject*  parent) const
{
return  theWrappedObject->clone(parent);
}

int  PythonQtWrapper_QTextDocument::pageCount(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->pageCount();
}

void PythonQtWrapper_QTextDocument::print(QTextDocument* theWrappedObject, QPrinter*  printer) const
{
 theWrappedObject->print(printer);
}

void PythonQtWrapper_QTextDocument::setIndentWidth(QTextDocument* theWrappedObject, qreal  width)
{
 theWrappedObject->setIndentWidth(width);
}

bool  PythonQtWrapper_QTextDocument::isModified(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->isModified();
}

QTextObject*  PythonQtWrapper_QTextDocument::object(QTextDocument* theWrappedObject, int  objectIndex) const
{
return  theWrappedObject->object(objectIndex);
}

int  PythonQtWrapper_QTextDocument::revision(QTextDocument* theWrappedObject) const
{
return  theWrappedObject->revision();
}

