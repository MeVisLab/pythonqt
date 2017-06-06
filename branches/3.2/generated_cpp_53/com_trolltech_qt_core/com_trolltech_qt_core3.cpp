#include "com_trolltech_qt_core3.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QTextCodec>
#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qeasingcurve.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qreadwritelock.h>
#include <qrunnable.h>
#include <qstringlist.h>
#include <qtextcodec.h>
#include <qtextstream.h>
#include <qthreadpool.h>
#include <qtimeline.h>
#include <qtimer.h>
#include <qtimezone.h>
#include <qtranslator.h>
#include <qurl.h>
#include <qurlquery.h>
#include <quuid.h>
#include <qvariantanimation.h>
#include <qvector.h>
#include <qwaitcondition.h>

PythonQtShell_QTextCodec::~PythonQtShell_QTextCodec() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QList<QByteArray >  PythonQtShell_QTextCodec::aliases() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("aliases");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QList<QByteArray >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QByteArray > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("aliases", methodInfo, result);
        } else {
          returnValue = *((QList<QByteArray >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QTextCodec::aliases();
}
QByteArray  PythonQtShell_QTextCodec::convertFromUnicode(const QChar*  in0, int  length1, QTextCodec::ConverterState*  state2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("convertFromUnicode");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QByteArray" , "const QChar*" , "int" , "QTextCodec::ConverterState*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QByteArray returnValue;
    void* args[4] = {NULL, (void*)&in0, (void*)&length1, (void*)&state2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("convertFromUnicode", methodInfo, result);
        } else {
          returnValue = *((QByteArray*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QByteArray();
}
QString  PythonQtShell_QTextCodec::convertToUnicode(const char*  in0, int  length1, QTextCodec::ConverterState*  state2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("convertToUnicode");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const char*" , "int" , "QTextCodec::ConverterState*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QString returnValue;
    void* args[4] = {NULL, (void*)&in0, (void*)&length1, (void*)&state2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("convertToUnicode", methodInfo, result);
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
  return QString();
}
int  PythonQtShell_QTextCodec::mibEnum() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mibEnum");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("mibEnum", methodInfo, result);
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
QByteArray  PythonQtShell_QTextCodec::name() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("name");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QByteArray"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QByteArray returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("name", methodInfo, result);
        } else {
          returnValue = *((QByteArray*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QByteArray();
}
QTextCodec* PythonQtWrapper_QTextCodec::new_QTextCodec()
{ 
return new PythonQtShell_QTextCodec(); }

QList<QByteArray >  PythonQtWrapper_QTextCodec::aliases(QTextCodec* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->promoted_aliases());
}

QList<QByteArray >  PythonQtWrapper_QTextCodec::static_QTextCodec_availableCodecs()
{
  return (QTextCodec::availableCodecs());
}

QList<int >  PythonQtWrapper_QTextCodec::static_QTextCodec_availableMibs()
{
  return (QTextCodec::availableMibs());
}

bool  PythonQtWrapper_QTextCodec::canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->canEncode(arg__1));
}

bool  PythonQtWrapper_QTextCodec::canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const
{
  return ( theWrappedObject->canEncode(arg__1));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForHtml(const QByteArray&  ba)
{
  return (QTextCodec::codecForHtml(ba));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec)
{
  return (QTextCodec::codecForHtml(ba, defaultCodec));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForLocale()
{
  return (QTextCodec::codecForLocale());
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForMib(int  mib)
{
  return (QTextCodec::codecForMib(mib));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForName(const QByteArray&  name)
{
  return (QTextCodec::codecForName(name));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForName(const char*  name)
{
  return (QTextCodec::codecForName(name));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForUtfText(const QByteArray&  ba)
{
  return (QTextCodec::codecForUtfText(ba));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForUtfText(const QByteArray&  ba, QTextCodec*  defaultCodec)
{
  return (QTextCodec::codecForUtfText(ba, defaultCodec));
}

QByteArray  PythonQtWrapper_QTextCodec::convertFromUnicode(QTextCodec* theWrappedObject, const QChar*  in, int  length, QTextCodec::ConverterState*  state) const
{
  return ( ((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->promoted_convertFromUnicode(in, length, state));
}

QString  PythonQtWrapper_QTextCodec::convertToUnicode(QTextCodec* theWrappedObject, const char*  in, int  length, QTextCodec::ConverterState*  state) const
{
  return ( ((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->promoted_convertToUnicode(in, length, state));
}

QByteArray  PythonQtWrapper_QTextCodec::fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const
{
  return ( theWrappedObject->fromUnicode(uc));
}

QTextDecoder*  PythonQtWrapper_QTextCodec::makeDecoder(QTextCodec* theWrappedObject, QTextCodec::ConversionFlags  flags) const
{
  return ( theWrappedObject->makeDecoder(flags));
}

QTextEncoder*  PythonQtWrapper_QTextCodec::makeEncoder(QTextCodec* theWrappedObject, QTextCodec::ConversionFlags  flags) const
{
  return ( theWrappedObject->makeEncoder(flags));
}

int  PythonQtWrapper_QTextCodec::mibEnum(QTextCodec* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->promoted_mibEnum());
}

QByteArray  PythonQtWrapper_QTextCodec::name(QTextCodec* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->promoted_name());
}

void PythonQtWrapper_QTextCodec::static_QTextCodec_setCodecForLocale(QTextCodec*  c)
{
  (QTextCodec::setCodecForLocale(c));
}

QString  PythonQtWrapper_QTextCodec::toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const
{
  return ( theWrappedObject->toUnicode(arg__1));
}



QTextDecoder* PythonQtWrapper_QTextDecoder::new_QTextDecoder(const QTextCodec*  codec)
{ 
return new QTextDecoder(codec); }

QTextDecoder* PythonQtWrapper_QTextDecoder::new_QTextDecoder(const QTextCodec*  codec, QTextCodec::ConversionFlags  flags)
{ 
return new QTextDecoder(codec, flags); }

bool  PythonQtWrapper_QTextDecoder::hasFailure(QTextDecoder* theWrappedObject) const
{
  return ( theWrappedObject->hasFailure());
}

QString  PythonQtWrapper_QTextDecoder::toUnicode(QTextDecoder* theWrappedObject, const QByteArray&  ba)
{
  return ( theWrappedObject->toUnicode(ba));
}



QTextEncoder* PythonQtWrapper_QTextEncoder::new_QTextEncoder(const QTextCodec*  codec)
{ 
return new QTextEncoder(codec); }

QTextEncoder* PythonQtWrapper_QTextEncoder::new_QTextEncoder(const QTextCodec*  codec, QTextCodec::ConversionFlags  flags)
{ 
return new QTextEncoder(codec, flags); }

QByteArray  PythonQtWrapper_QTextEncoder::fromUnicode(QTextEncoder* theWrappedObject, const QString&  str)
{
  return ( theWrappedObject->fromUnicode(str));
}

bool  PythonQtWrapper_QTextEncoder::hasFailure(QTextEncoder* theWrappedObject) const
{
  return ( theWrappedObject->hasFailure());
}



PythonQtShell_QTextStream::~PythonQtShell_QTextStream() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextStream* PythonQtWrapper_QTextStream::new_QTextStream()
{ 
return new PythonQtShell_QTextStream(); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(QIODevice*  device)
{ 
return new PythonQtShell_QTextStream(device); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode)
{ 
return new PythonQtShell_QTextStream(array, openMode); }

bool  PythonQtWrapper_QTextStream::atEnd(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

bool  PythonQtWrapper_QTextStream::autoDetectUnicode(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->autoDetectUnicode());
}

QTextCodec*  PythonQtWrapper_QTextStream::codec(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QIODevice*  PythonQtWrapper_QTextStream::device(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QTextStream::FieldAlignment  PythonQtWrapper_QTextStream::fieldAlignment(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->fieldAlignment());
}

int  PythonQtWrapper_QTextStream::fieldWidth(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->fieldWidth());
}

void PythonQtWrapper_QTextStream::flush(QTextStream* theWrappedObject)
{
  ( theWrappedObject->flush());
}

bool  PythonQtWrapper_QTextStream::generateByteOrderMark(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->generateByteOrderMark());
}

int  PythonQtWrapper_QTextStream::integerBase(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->integerBase());
}

QLocale  PythonQtWrapper_QTextStream::locale(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->locale());
}

QTextStream::NumberFlags  PythonQtWrapper_QTextStream::numberFlags(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->numberFlags());
}

QTextStream*  PythonQtWrapper_QTextStream::__lshift__(QTextStream* theWrappedObject, QLatin1String  s)
{
  return &( (*theWrappedObject) <<s);
}

QTextStream*  PythonQtWrapper_QTextStream::writeByte(QTextStream* theWrappedObject, char  ch)
{
  return &( (*theWrappedObject) <<ch);
}

QTextStream*  PythonQtWrapper_QTextStream::writeDouble(QTextStream* theWrappedObject, double  f)
{
  return &( (*theWrappedObject) <<f);
}

QTextStream*  PythonQtWrapper_QTextStream::writeFloat(QTextStream* theWrappedObject, float  f)
{
  return &( (*theWrappedObject) <<f);
}

QTextStream*  PythonQtWrapper_QTextStream::writeLongLong(QTextStream* theWrappedObject, qlonglong  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::writeInt(QTextStream* theWrappedObject, signed int  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::writeShort(QTextStream* theWrappedObject, signed short  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::readByte(QTextStream* theWrappedObject, char&  ch)
{
  return &( (*theWrappedObject) >>ch);
}

QTextStream*  PythonQtWrapper_QTextStream::readDouble(QTextStream* theWrappedObject, double&  f)
{
  return &( (*theWrappedObject) >>f);
}

QTextStream*  PythonQtWrapper_QTextStream::readFloat(QTextStream* theWrappedObject, float&  f)
{
  return &( (*theWrappedObject) >>f);
}

QTextStream*  PythonQtWrapper_QTextStream::readLongLong(QTextStream* theWrappedObject, qlonglong&  i)
{
  return &( (*theWrappedObject) >>i);
}

QTextStream*  PythonQtWrapper_QTextStream::readInt(QTextStream* theWrappedObject, signed int&  i)
{
  return &( (*theWrappedObject) >>i);
}

QTextStream*  PythonQtWrapper_QTextStream::readShort(QTextStream* theWrappedObject, signed short&  i)
{
  return &( (*theWrappedObject) >>i);
}

QChar  PythonQtWrapper_QTextStream::padChar(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->padChar());
}

qint64  PythonQtWrapper_QTextStream::pos(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QString  PythonQtWrapper_QTextStream::read(QTextStream* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->read(maxlen));
}

QString  PythonQtWrapper_QTextStream::readAll(QTextStream* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

QString  PythonQtWrapper_QTextStream::readLine(QTextStream* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->readLine(maxlen));
}

QTextStream::RealNumberNotation  PythonQtWrapper_QTextStream::realNumberNotation(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->realNumberNotation());
}

int  PythonQtWrapper_QTextStream::realNumberPrecision(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->realNumberPrecision());
}

void PythonQtWrapper_QTextStream::reset(QTextStream* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QTextStream::resetStatus(QTextStream* theWrappedObject)
{
  ( theWrappedObject->resetStatus());
}

bool  PythonQtWrapper_QTextStream::seek(QTextStream* theWrappedObject, qint64  pos)
{
  return ( theWrappedObject->seek(pos));
}

void PythonQtWrapper_QTextStream::setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAutoDetectUnicode(enabled));
}

void PythonQtWrapper_QTextStream::setCodec(QTextStream* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QTextStream::setCodec(QTextStream* theWrappedObject, const char*  codecName)
{
  ( theWrappedObject->setCodec(codecName));
}

void PythonQtWrapper_QTextStream::setDevice(QTextStream* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QTextStream::setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment)
{
  ( theWrappedObject->setFieldAlignment(alignment));
}

void PythonQtWrapper_QTextStream::setFieldWidth(QTextStream* theWrappedObject, int  width)
{
  ( theWrappedObject->setFieldWidth(width));
}

void PythonQtWrapper_QTextStream::setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate)
{
  ( theWrappedObject->setGenerateByteOrderMark(generate));
}

void PythonQtWrapper_QTextStream::setIntegerBase(QTextStream* theWrappedObject, int  base)
{
  ( theWrappedObject->setIntegerBase(base));
}

void PythonQtWrapper_QTextStream::setLocale(QTextStream* theWrappedObject, const QLocale&  locale)
{
  ( theWrappedObject->setLocale(locale));
}

void PythonQtWrapper_QTextStream::setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags)
{
  ( theWrappedObject->setNumberFlags(flags));
}

void PythonQtWrapper_QTextStream::setPadChar(QTextStream* theWrappedObject, QChar  ch)
{
  ( theWrappedObject->setPadChar(ch));
}

void PythonQtWrapper_QTextStream::setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation)
{
  ( theWrappedObject->setRealNumberNotation(notation));
}

void PythonQtWrapper_QTextStream::setRealNumberPrecision(QTextStream* theWrappedObject, int  precision)
{
  ( theWrappedObject->setRealNumberPrecision(precision));
}

void PythonQtWrapper_QTextStream::setStatus(QTextStream* theWrappedObject, QTextStream::Status  status)
{
  ( theWrappedObject->setStatus(status));
}

void PythonQtWrapper_QTextStream::skipWhiteSpace(QTextStream* theWrappedObject)
{
  ( theWrappedObject->skipWhiteSpace());
}

QTextStream::Status  PythonQtWrapper_QTextStream::status(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->status());
}



PythonQtShell_QThreadPool::~PythonQtShell_QThreadPool() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QThreadPool::childEvent(QChildEvent*  arg__1)
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
  QThreadPool::childEvent(arg__1);
}
void PythonQtShell_QThreadPool::customEvent(QEvent*  arg__1)
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
  QThreadPool::customEvent(arg__1);
}
bool  PythonQtShell_QThreadPool::event(QEvent*  arg__1)
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
  return QThreadPool::event(arg__1);
}
bool  PythonQtShell_QThreadPool::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QThreadPool::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QThreadPool::timerEvent(QTimerEvent*  arg__1)
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
  QThreadPool::timerEvent(arg__1);
}
QThreadPool* PythonQtWrapper_QThreadPool::new_QThreadPool(QObject*  parent)
{ 
return new PythonQtShell_QThreadPool(parent); }

int  PythonQtWrapper_QThreadPool::activeThreadCount(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->activeThreadCount());
}

void PythonQtWrapper_QThreadPool::clear(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QThreadPool::expiryTimeout(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->expiryTimeout());
}

QThreadPool*  PythonQtWrapper_QThreadPool::static_QThreadPool_globalInstance()
{
  return (QThreadPool::globalInstance());
}

int  PythonQtWrapper_QThreadPool::maxThreadCount(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->maxThreadCount());
}

void PythonQtWrapper_QThreadPool::releaseThread(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->releaseThread());
}

void PythonQtWrapper_QThreadPool::reserveThread(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->reserveThread());
}

void PythonQtWrapper_QThreadPool::setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout)
{
  ( theWrappedObject->setExpiryTimeout(expiryTimeout));
}

void PythonQtWrapper_QThreadPool::setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount)
{
  ( theWrappedObject->setMaxThreadCount(maxThreadCount));
}

void PythonQtWrapper_QThreadPool::start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority)
{
  ( theWrappedObject->start(runnable, priority));
}

bool  PythonQtWrapper_QThreadPool::tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable)
{
  return ( theWrappedObject->tryStart(runnable));
}

bool  PythonQtWrapper_QThreadPool::waitForDone(QThreadPool* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDone(msecs));
}



PythonQtShell_QTimeLine::~PythonQtShell_QTimeLine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTimeLine::childEvent(QChildEvent*  arg__1)
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
  QTimeLine::childEvent(arg__1);
}
void PythonQtShell_QTimeLine::customEvent(QEvent*  arg__1)
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
  QTimeLine::customEvent(arg__1);
}
bool  PythonQtShell_QTimeLine::event(QEvent*  arg__1)
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
  return QTimeLine::event(arg__1);
}
bool  PythonQtShell_QTimeLine::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTimeLine::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTimeLine::timerEvent(QTimerEvent*  event0)
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
  QTimeLine::timerEvent(event0);
}
qreal  PythonQtShell_QTimeLine::valueForTime(int  msec0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("valueForTime");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qreal" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      qreal returnValue;
    void* args[2] = {NULL, (void*)&msec0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("valueForTime", methodInfo, result);
        } else {
          returnValue = *((qreal*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QTimeLine::valueForTime(msec0);
}
QTimeLine* PythonQtWrapper_QTimeLine::new_QTimeLine(int  duration, QObject*  parent)
{ 
return new PythonQtShell_QTimeLine(duration, parent); }

int  PythonQtWrapper_QTimeLine::currentFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentFrame());
}

int  PythonQtWrapper_QTimeLine::currentTime(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentTime());
}

qreal  PythonQtWrapper_QTimeLine::currentValue(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentValue());
}

QTimeLine::CurveShape  PythonQtWrapper_QTimeLine::curveShape(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->curveShape());
}

QTimeLine::Direction  PythonQtWrapper_QTimeLine::direction(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->direction());
}

int  PythonQtWrapper_QTimeLine::duration(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QEasingCurve  PythonQtWrapper_QTimeLine::easingCurve(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->easingCurve());
}

int  PythonQtWrapper_QTimeLine::endFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->endFrame());
}

int  PythonQtWrapper_QTimeLine::frameForTime(QTimeLine* theWrappedObject, int  msec) const
{
  return ( theWrappedObject->frameForTime(msec));
}

int  PythonQtWrapper_QTimeLine::loopCount(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

void PythonQtWrapper_QTimeLine::setCurveShape(QTimeLine* theWrappedObject, QTimeLine::CurveShape  shape)
{
  ( theWrappedObject->setCurveShape(shape));
}

void PythonQtWrapper_QTimeLine::setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction)
{
  ( theWrappedObject->setDirection(direction));
}

void PythonQtWrapper_QTimeLine::setDuration(QTimeLine* theWrappedObject, int  duration)
{
  ( theWrappedObject->setDuration(duration));
}

void PythonQtWrapper_QTimeLine::setEasingCurve(QTimeLine* theWrappedObject, const QEasingCurve&  curve)
{
  ( theWrappedObject->setEasingCurve(curve));
}

void PythonQtWrapper_QTimeLine::setEndFrame(QTimeLine* theWrappedObject, int  frame)
{
  ( theWrappedObject->setEndFrame(frame));
}

void PythonQtWrapper_QTimeLine::setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame)
{
  ( theWrappedObject->setFrameRange(startFrame, endFrame));
}

void PythonQtWrapper_QTimeLine::setLoopCount(QTimeLine* theWrappedObject, int  count)
{
  ( theWrappedObject->setLoopCount(count));
}

void PythonQtWrapper_QTimeLine::setStartFrame(QTimeLine* theWrappedObject, int  frame)
{
  ( theWrappedObject->setStartFrame(frame));
}

void PythonQtWrapper_QTimeLine::setUpdateInterval(QTimeLine* theWrappedObject, int  interval)
{
  ( theWrappedObject->setUpdateInterval(interval));
}

int  PythonQtWrapper_QTimeLine::startFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->startFrame());
}

QTimeLine::State  PythonQtWrapper_QTimeLine::state(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QTimeLine::timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->promoted_timerEvent(event));
}

int  PythonQtWrapper_QTimeLine::updateInterval(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->updateInterval());
}

qreal  PythonQtWrapper_QTimeLine::valueForTime(QTimeLine* theWrappedObject, int  msec) const
{
  return ( ((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->promoted_valueForTime(msec));
}



QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone()
{ 
return new QTimeZone(); }

QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone(const QByteArray&  ianaId)
{ 
return new QTimeZone(ianaId); }

QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone(const QByteArray&  zoneId, int  offsetSeconds, const QString&  name, const QString&  abbreviation, QLocale::Country  country, const QString&  comment)
{ 
return new QTimeZone(zoneId, offsetSeconds, name, abbreviation, country, comment); }

QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone(const QTimeZone&  other)
{ 
return new QTimeZone(other); }

QTimeZone* PythonQtWrapper_QTimeZone::new_QTimeZone(int  offsetSeconds)
{ 
return new QTimeZone(offsetSeconds); }

QString  PythonQtWrapper_QTimeZone::abbreviation(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const
{
  return ( theWrappedObject->abbreviation(atDateTime));
}

QList<QByteArray >  PythonQtWrapper_QTimeZone::static_QTimeZone_availableTimeZoneIds()
{
  return (QTimeZone::availableTimeZoneIds());
}

QList<QByteArray >  PythonQtWrapper_QTimeZone::static_QTimeZone_availableTimeZoneIds(QLocale::Country  country)
{
  return (QTimeZone::availableTimeZoneIds(country));
}

QList<QByteArray >  PythonQtWrapper_QTimeZone::static_QTimeZone_availableTimeZoneIds(int  offsetSeconds)
{
  return (QTimeZone::availableTimeZoneIds(offsetSeconds));
}

QString  PythonQtWrapper_QTimeZone::comment(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->comment());
}

QLocale::Country  PythonQtWrapper_QTimeZone::country(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->country());
}

int  PythonQtWrapper_QTimeZone::daylightTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const
{
  return ( theWrappedObject->daylightTimeOffset(atDateTime));
}

QString  PythonQtWrapper_QTimeZone::displayName(QTimeZone* theWrappedObject, QTimeZone::TimeType  timeType, QTimeZone::NameType  nameType, const QLocale&  locale) const
{
  return ( theWrappedObject->displayName(timeType, nameType, locale));
}

QString  PythonQtWrapper_QTimeZone::displayName(QTimeZone* theWrappedObject, const QDateTime&  atDateTime, QTimeZone::NameType  nameType, const QLocale&  locale) const
{
  return ( theWrappedObject->displayName(atDateTime, nameType, locale));
}

bool  PythonQtWrapper_QTimeZone::hasDaylightTime(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->hasDaylightTime());
}

bool  PythonQtWrapper_QTimeZone::hasTransitions(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->hasTransitions());
}

QByteArray  PythonQtWrapper_QTimeZone::static_QTimeZone_ianaIdToWindowsId(const QByteArray&  ianaId)
{
  return (QTimeZone::ianaIdToWindowsId(ianaId));
}

QByteArray  PythonQtWrapper_QTimeZone::id(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

bool  PythonQtWrapper_QTimeZone::isDaylightTime(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const
{
  return ( theWrappedObject->isDaylightTime(atDateTime));
}

bool  PythonQtWrapper_QTimeZone::static_QTimeZone_isTimeZoneIdAvailable(const QByteArray&  ianaId)
{
  return (QTimeZone::isTimeZoneIdAvailable(ianaId));
}

bool  PythonQtWrapper_QTimeZone::isValid(QTimeZone* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QTimeZone::offsetFromUtc(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const
{
  return ( theWrappedObject->offsetFromUtc(atDateTime));
}

bool  PythonQtWrapper_QTimeZone::__ne__(QTimeZone* theWrappedObject, const QTimeZone&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QTimeZone::writeTo(QTimeZone* theWrappedObject, QDataStream&  ds)
{
  ds <<  (*theWrappedObject);
}

QTimeZone*  PythonQtWrapper_QTimeZone::operator_assign(QTimeZone* theWrappedObject, const QTimeZone&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QTimeZone::__eq__(QTimeZone* theWrappedObject, const QTimeZone&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QTimeZone::readFrom(QTimeZone* theWrappedObject, QDataStream&  ds)
{
  ds >>  (*theWrappedObject);
}

int  PythonQtWrapper_QTimeZone::standardTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const
{
  return ( theWrappedObject->standardTimeOffset(atDateTime));
}

void PythonQtWrapper_QTimeZone::swap(QTimeZone* theWrappedObject, QTimeZone&  other)
{
  ( theWrappedObject->swap(other));
}

QByteArray  PythonQtWrapper_QTimeZone::static_QTimeZone_systemTimeZoneId()
{
  return (QTimeZone::systemTimeZoneId());
}

QByteArray  PythonQtWrapper_QTimeZone::static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId)
{
  return (QTimeZone::windowsIdToDefaultIanaId(windowsId));
}

QByteArray  PythonQtWrapper_QTimeZone::static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId, QLocale::Country  country)
{
  return (QTimeZone::windowsIdToDefaultIanaId(windowsId, country));
}

QList<QByteArray >  PythonQtWrapper_QTimeZone::static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId)
{
  return (QTimeZone::windowsIdToIanaIds(windowsId));
}

QList<QByteArray >  PythonQtWrapper_QTimeZone::static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId, QLocale::Country  country)
{
  return (QTimeZone::windowsIdToIanaIds(windowsId, country));
}

QString PythonQtWrapper_QTimeZone::py_toString(QTimeZone* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QTimer::~PythonQtShell_QTimer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTimer::childEvent(QChildEvent*  arg__1)
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
  QTimer::childEvent(arg__1);
}
void PythonQtShell_QTimer::customEvent(QEvent*  arg__1)
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
  QTimer::customEvent(arg__1);
}
bool  PythonQtShell_QTimer::event(QEvent*  arg__1)
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
  return QTimer::event(arg__1);
}
bool  PythonQtShell_QTimer::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTimer::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTimer::timerEvent(QTimerEvent*  arg__1)
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
  QTimer::timerEvent(arg__1);
}
QTimer* PythonQtWrapper_QTimer::new_QTimer(QObject*  parent)
{ 
return new PythonQtShell_QTimer(parent); }

int  PythonQtWrapper_QTimer::interval(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->interval());
}

bool  PythonQtWrapper_QTimer::isActive(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QTimer::isSingleShot(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->isSingleShot());
}

int  PythonQtWrapper_QTimer::remainingTime(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->remainingTime());
}

void PythonQtWrapper_QTimer::setInterval(QTimer* theWrappedObject, int  msec)
{
  ( theWrappedObject->setInterval(msec));
}

void PythonQtWrapper_QTimer::setSingleShot(QTimer* theWrappedObject, bool  singleShot)
{
  ( theWrappedObject->setSingleShot(singleShot));
}

void PythonQtWrapper_QTimer::setTimerType(QTimer* theWrappedObject, Qt::TimerType  atype)
{
  ( theWrappedObject->setTimerType(atype));
}

void PythonQtWrapper_QTimer::static_QTimer_singleShot(int  msec, Qt::TimerType  timerType, const QObject*  receiver, const char*  member)
{
  (QTimer::singleShot(msec, timerType, receiver, member));
}

void PythonQtWrapper_QTimer::static_QTimer_singleShot(int  msec, const QObject*  receiver, const char*  member)
{
  (QTimer::singleShot(msec, receiver, member));
}

void PythonQtWrapper_QTimer::timerEvent(QTimer* theWrappedObject, QTimerEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QTimer*)theWrappedObject)->promoted_timerEvent(arg__1));
}

int  PythonQtWrapper_QTimer::timerId(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}

Qt::TimerType  PythonQtWrapper_QTimer::timerType(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerType());
}



PythonQtShell_QTimerEvent::~PythonQtShell_QTimerEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTimerEvent* PythonQtWrapper_QTimerEvent::new_QTimerEvent(int  timerId)
{ 
return new PythonQtShell_QTimerEvent(timerId); }

int  PythonQtWrapper_QTimerEvent::timerId(QTimerEvent* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}



PythonQtShell_QTranslator::~PythonQtShell_QTranslator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTranslator::childEvent(QChildEvent*  arg__1)
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
  QTranslator::childEvent(arg__1);
}
void PythonQtShell_QTranslator::customEvent(QEvent*  arg__1)
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
  QTranslator::customEvent(arg__1);
}
bool  PythonQtShell_QTranslator::event(QEvent*  arg__1)
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
  return QTranslator::event(arg__1);
}
bool  PythonQtShell_QTranslator::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTranslator::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QTranslator::isEmpty() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isEmpty");
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
  return QTranslator::isEmpty();
}
void PythonQtShell_QTranslator::timerEvent(QTimerEvent*  arg__1)
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
  QTranslator::timerEvent(arg__1);
}
QString  PythonQtShell_QTranslator::translate(const char*  context0, const char*  sourceText1, const char*  disambiguation2, int  n3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("translate");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const char*" , "const char*" , "const char*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QString returnValue;
    void* args[5] = {NULL, (void*)&context0, (void*)&sourceText1, (void*)&disambiguation2, (void*)&n3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("translate", methodInfo, result);
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
  return QTranslator::translate(context0, sourceText1, disambiguation2, n3);
}
QTranslator* PythonQtWrapper_QTranslator::new_QTranslator(QObject*  parent)
{ 
return new PythonQtShell_QTranslator(parent); }

bool  PythonQtWrapper_QTranslator::isEmpty(QTranslator* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->promoted_isEmpty());
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const QLocale&  locale, const QString&  filename, const QString&  prefix, const QString&  directory, const QString&  suffix)
{
  return ( theWrappedObject->load(locale, filename, prefix, directory, suffix));
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory, const QString&  search_delimiters, const QString&  suffix)
{
  return ( theWrappedObject->load(filename, directory, search_delimiters, suffix));
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const uchar*  data, int  len, const QString&  directory)
{
  return ( theWrappedObject->load(data, len, directory));
}



QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery()
{ 
return new QUrlQuery(); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QString&  queryString)
{ 
return new QUrlQuery(queryString); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QUrl&  url)
{ 
return new QUrlQuery(url); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QUrlQuery&  other)
{ 
return new QUrlQuery(other); }

void PythonQtWrapper_QUrlQuery::addQueryItem(QUrlQuery* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->addQueryItem(key, value));
}

QStringList  PythonQtWrapper_QUrlQuery::allQueryItemValues(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->allQueryItemValues(key, encoding));
}

void PythonQtWrapper_QUrlQuery::clear(QUrlQuery* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QChar  PythonQtWrapper_QUrlQuery::static_QUrlQuery_defaultQueryPairDelimiter()
{
  return (QUrlQuery::defaultQueryPairDelimiter());
}

QChar  PythonQtWrapper_QUrlQuery::static_QUrlQuery_defaultQueryValueDelimiter()
{
  return (QUrlQuery::defaultQueryValueDelimiter());
}

bool  PythonQtWrapper_QUrlQuery::hasQueryItem(QUrlQuery* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->hasQueryItem(key));
}

bool  PythonQtWrapper_QUrlQuery::isEmpty(QUrlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QUrlQuery::__ne__(QUrlQuery* theWrappedObject, const QUrlQuery&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QUrlQuery*  PythonQtWrapper_QUrlQuery::operator_assign(QUrlQuery* theWrappedObject, const QUrlQuery&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QUrlQuery::__eq__(QUrlQuery* theWrappedObject, const QUrlQuery&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QUrlQuery::query(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->query(encoding));
}

QString  PythonQtWrapper_QUrlQuery::queryItemValue(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->queryItemValue(key, encoding));
}

QList<QPair<QString , QString >  >  PythonQtWrapper_QUrlQuery::queryItems(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->queryItems(encoding));
}

QChar  PythonQtWrapper_QUrlQuery::queryPairDelimiter(QUrlQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryPairDelimiter());
}

QChar  PythonQtWrapper_QUrlQuery::queryValueDelimiter(QUrlQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryValueDelimiter());
}

void PythonQtWrapper_QUrlQuery::removeAllQueryItems(QUrlQuery* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeAllQueryItems(key));
}

void PythonQtWrapper_QUrlQuery::removeQueryItem(QUrlQuery* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeQueryItem(key));
}

void PythonQtWrapper_QUrlQuery::setQuery(QUrlQuery* theWrappedObject, const QString&  queryString)
{
  ( theWrappedObject->setQuery(queryString));
}

void PythonQtWrapper_QUrlQuery::setQueryDelimiters(QUrlQuery* theWrappedObject, QChar  valueDelimiter, QChar  pairDelimiter)
{
  ( theWrappedObject->setQueryDelimiters(valueDelimiter, pairDelimiter));
}

void PythonQtWrapper_QUrlQuery::setQueryItems(QUrlQuery* theWrappedObject, const QList<QPair<QString , QString >  >&  query)
{
  ( theWrappedObject->setQueryItems(query));
}

void PythonQtWrapper_QUrlQuery::swap(QUrlQuery* theWrappedObject, QUrlQuery&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QUrlQuery::toString(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->toString(encoding));
}

QString PythonQtWrapper_QUrlQuery::py_toString(QUrlQuery* obj) { return obj->toString(); }


PythonQtShell_QUuid::~PythonQtShell_QUuid() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QUuid* PythonQtWrapper_QUuid::new_QUuid()
{ 
return new PythonQtShell_QUuid(); }

QUuid* PythonQtWrapper_QUuid::new_QUuid(const QByteArray&  arg__1)
{ 
return new PythonQtShell_QUuid(arg__1); }

QUuid* PythonQtWrapper_QUuid::new_QUuid(const QString&  arg__1)
{ 
return new PythonQtShell_QUuid(arg__1); }

QUuid* PythonQtWrapper_QUuid::new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8)
{ 
return new PythonQtShell_QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8); }

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuid()
{
  return (QUuid::createUuid());
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV3(const QUuid&  ns, const QByteArray&  baseData)
{
  return (QUuid::createUuidV3(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV3(const QUuid&  ns, const QString&  baseData)
{
  return (QUuid::createUuidV3(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV5(const QUuid&  ns, const QByteArray&  baseData)
{
  return (QUuid::createUuidV5(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV5(const QUuid&  ns, const QString&  baseData)
{
  return (QUuid::createUuidV5(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_fromRfc4122(const QByteArray&  arg__1)
{
  return (QUuid::fromRfc4122(arg__1));
}

bool  PythonQtWrapper_QUuid::isNull(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QUuid::__ne__(QUuid* theWrappedObject, const QUuid&  orig) const
{
  return ( (*theWrappedObject)!= orig);
}

bool  PythonQtWrapper_QUuid::__lt__(QUuid* theWrappedObject, const QUuid&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QUuid::writeTo(QUuid* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QUuid::__eq__(QUuid* theWrappedObject, const QUuid&  orig) const
{
  return ( (*theWrappedObject)== orig);
}

bool  PythonQtWrapper_QUuid::__gt__(QUuid* theWrappedObject, const QUuid&  other) const
{
  return ( (*theWrappedObject)> other);
}

void PythonQtWrapper_QUuid::readFrom(QUuid* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QByteArray  PythonQtWrapper_QUuid::toByteArray(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->toByteArray());
}

QByteArray  PythonQtWrapper_QUuid::toRfc4122(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->toRfc4122());
}

QString  PythonQtWrapper_QUuid::toString(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QUuid::Variant  PythonQtWrapper_QUuid::variant(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->variant());
}

QUuid::Version  PythonQtWrapper_QUuid::version(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->version());
}

QString PythonQtWrapper_QUuid::py_toString(QUuid* obj) { return obj->toString(); }


PythonQtShell_QVariantAnimation::~PythonQtShell_QVariantAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVariantAnimation::childEvent(QChildEvent*  arg__1)
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
  QVariantAnimation::childEvent(arg__1);
}
void PythonQtShell_QVariantAnimation::customEvent(QEvent*  arg__1)
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
  QVariantAnimation::customEvent(arg__1);
}
int  PythonQtShell_QVariantAnimation::duration() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("duration");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return QVariantAnimation::duration();
}
bool  PythonQtShell_QVariantAnimation::event(QEvent*  event0)
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
  return QVariantAnimation::event(event0);
}
bool  PythonQtShell_QVariantAnimation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QVariantAnimation::eventFilter(arg__1, arg__2);
}
QVariant  PythonQtShell_QVariantAnimation::interpolated(const QVariant&  from0, const QVariant&  to1, qreal  progress2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("interpolated");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&" , "const QVariant&" , "qreal"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&from0, (void*)&to1, (void*)&progress2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("interpolated", methodInfo, result);
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
  return QVariantAnimation::interpolated(from0, to1, progress2);
}
void PythonQtShell_QVariantAnimation::timerEvent(QTimerEvent*  arg__1)
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
  QVariantAnimation::timerEvent(arg__1);
}
void PythonQtShell_QVariantAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateCurrentTime");
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
  QVariantAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QVariantAnimation::updateCurrentValue(const QVariant&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateCurrentValue");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QVariant&"};
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
  QVariantAnimation::updateCurrentValue(value0);
}
void PythonQtShell_QVariantAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateDirection");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QVariantAnimation::updateDirection(direction0);
}
void PythonQtShell_QVariantAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateState");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState0, (void*)&oldState1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QVariantAnimation::updateState(newState0, oldState1);
}
QVariantAnimation* PythonQtWrapper_QVariantAnimation::new_QVariantAnimation(QObject*  parent)
{ 
return new PythonQtShell_QVariantAnimation(parent); }

QVariant  PythonQtWrapper_QVariantAnimation::currentValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentValue());
}

int  PythonQtWrapper_QVariantAnimation::duration(QVariantAnimation* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_duration());
}

QEasingCurve  PythonQtWrapper_QVariantAnimation::easingCurve(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->easingCurve());
}

QVariant  PythonQtWrapper_QVariantAnimation::endValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->endValue());
}

bool  PythonQtWrapper_QVariantAnimation::event(QVariantAnimation* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_event(event));
}

QVariant  PythonQtWrapper_QVariantAnimation::interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const
{
  return ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_interpolated(from, to, progress));
}

QVariant  PythonQtWrapper_QVariantAnimation::keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->keyValueAt(step));
}

QVector<QPair<qreal , QVariant >  >  PythonQtWrapper_QVariantAnimation::keyValues(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->keyValues());
}

void PythonQtWrapper_QVariantAnimation::setDuration(QVariantAnimation* theWrappedObject, int  msecs)
{
  ( theWrappedObject->setDuration(msecs));
}

void PythonQtWrapper_QVariantAnimation::setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing)
{
  ( theWrappedObject->setEasingCurve(easing));
}

void PythonQtWrapper_QVariantAnimation::setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setEndValue(value));
}

void PythonQtWrapper_QVariantAnimation::setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value)
{
  ( theWrappedObject->setKeyValueAt(step, value));
}

void PythonQtWrapper_QVariantAnimation::setKeyValues(QVariantAnimation* theWrappedObject, const QVector<QPair<qreal , QVariant >  >&  values)
{
  ( theWrappedObject->setKeyValues(values));
}

void PythonQtWrapper_QVariantAnimation::setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setStartValue(value));
}

QVariant  PythonQtWrapper_QVariantAnimation::startValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->startValue());
}

void PythonQtWrapper_QVariantAnimation::updateCurrentTime(QVariantAnimation* theWrappedObject, int  arg__1)
{
  ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_updateCurrentTime(arg__1));
}

void PythonQtWrapper_QVariantAnimation::updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_updateCurrentValue(value));
}

void PythonQtWrapper_QVariantAnimation::updateState(QVariantAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
  ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_updateState(newState, oldState));
}



QWaitCondition* PythonQtWrapper_QWaitCondition::new_QWaitCondition()
{ 
return new QWaitCondition(); }

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time)
{
  return ( theWrappedObject->wait(lockedMutex, time));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time)
{
  return ( theWrappedObject->wait(lockedReadWriteLock, time));
}

void PythonQtWrapper_QWaitCondition::wakeAll(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeAll());
}

void PythonQtWrapper_QWaitCondition::wakeOne(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeOne());
}



PythonQtShell_QXmlStreamEntityResolver::~PythonQtShell_QXmlStreamEntityResolver() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveEntity(const QString&  publicId0, const QString&  systemId1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resolveEntity");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const QString&" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue;
    void* args[3] = {NULL, (void*)&publicId0, (void*)&systemId1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("resolveEntity", methodInfo, result);
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
  return QXmlStreamEntityResolver::resolveEntity(publicId0, systemId1);
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString&  name0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resolveUndeclaredEntity");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
    void* args[2] = {NULL, (void*)&name0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("resolveUndeclaredEntity", methodInfo, result);
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
  return QXmlStreamEntityResolver::resolveUndeclaredEntity(name0);
}
QXmlStreamEntityResolver* PythonQtWrapper_QXmlStreamEntityResolver::new_QXmlStreamEntityResolver()
{ 
return new PythonQtShell_QXmlStreamEntityResolver(); }

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId)
{
  return ( ((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->promoted_resolveEntity(publicId, systemId));
}

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name)
{
  return ( ((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->promoted_resolveUndeclaredEntity(name));
}


