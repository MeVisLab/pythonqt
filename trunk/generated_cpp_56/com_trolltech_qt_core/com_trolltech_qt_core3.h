#include <PythonQt.h>
#include <QObject>
#include <QTextCodec>
#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qeasingcurve.h>
#include <qfile.h>
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
#include <qsystemsemaphore.h>
#include <qtemporarydir.h>
#include <qtemporaryfile.h>
#include <qtextboundaryfinder.h>
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
#include <qxmlstream.h>



class PythonQtWrapper_QSystemSemaphore : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AccessMode SystemSemaphoreError )
enum AccessMode{
  Open = QSystemSemaphore::Open,   Create = QSystemSemaphore::Create};
enum SystemSemaphoreError{
  NoError = QSystemSemaphore::NoError,   PermissionDenied = QSystemSemaphore::PermissionDenied,   KeyError = QSystemSemaphore::KeyError,   AlreadyExists = QSystemSemaphore::AlreadyExists,   NotFound = QSystemSemaphore::NotFound,   OutOfResources = QSystemSemaphore::OutOfResources,   UnknownError = QSystemSemaphore::UnknownError};
public slots:
QSystemSemaphore* new_QSystemSemaphore(const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
void delete_QSystemSemaphore(QSystemSemaphore* obj) { delete obj; } 
   bool  acquire(QSystemSemaphore* theWrappedObject);
   QSystemSemaphore::SystemSemaphoreError  error(QSystemSemaphore* theWrappedObject) const;
   QString  errorString(QSystemSemaphore* theWrappedObject) const;
   QString  key(QSystemSemaphore* theWrappedObject) const;
   bool  release(QSystemSemaphore* theWrappedObject, int  n = 1);
   void setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
};





class PythonQtWrapper_QTemporaryDir : public QObject
{ Q_OBJECT
public:
public slots:
QTemporaryDir* new_QTemporaryDir();
QTemporaryDir* new_QTemporaryDir(const QString&  templateName);
void delete_QTemporaryDir(QTemporaryDir* obj) { delete obj; } 
   bool  autoRemove(QTemporaryDir* theWrappedObject) const;
   QString  errorString(QTemporaryDir* theWrappedObject) const;
   bool  isValid(QTemporaryDir* theWrappedObject) const;
   QString  path(QTemporaryDir* theWrappedObject) const;
   bool  remove(QTemporaryDir* theWrappedObject);
   void setAutoRemove(QTemporaryDir* theWrappedObject, bool  b);
    bool __nonzero__(QTemporaryDir* obj) { return obj->isValid(); }
};





class PythonQtShell_QTemporaryFile : public QTemporaryFile
{
public:
    PythonQtShell_QTemporaryFile():QTemporaryFile(),_wrapper(NULL) {};
    PythonQtShell_QTemporaryFile(QObject*  parent):QTemporaryFile(parent),_wrapper(NULL) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName):QTemporaryFile(templateName),_wrapper(NULL) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName, QObject*  parent):QTemporaryFile(templateName, parent),_wrapper(NULL) {};

   ~PythonQtShell_QTemporaryFile();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QString  fileName() const;
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  flags);
virtual QFileDevice::Permissions  permissions() const;
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  resize(qint64  sz);
virtual bool  seek(qint64  offset);
virtual bool  setPermissions(QFileDevice::Permissions  permissionSpec);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTemporaryFile : public QTemporaryFile
{ public:
inline bool  promoted_open(QIODevice::OpenMode  flags) { return this->open(flags); }
inline QString  py_q_fileName() const { return QTemporaryFile::fileName(); }
inline bool  py_q_open(QIODevice::OpenMode  flags) { return QTemporaryFile::open(flags); }
};

class PythonQtWrapper_QTemporaryFile : public QObject
{ Q_OBJECT
public:
public slots:
QTemporaryFile* new_QTemporaryFile();
QTemporaryFile* new_QTemporaryFile(QObject*  parent);
QTemporaryFile* new_QTemporaryFile(const QString&  templateName);
QTemporaryFile* new_QTemporaryFile(const QString&  templateName, QObject*  parent);
void delete_QTemporaryFile(QTemporaryFile* obj) { delete obj; } 
   bool  autoRemove(QTemporaryFile* theWrappedObject) const;
   QTemporaryFile*  static_QTemporaryFile_createLocalFile(QFile&  file);
   QTemporaryFile*  static_QTemporaryFile_createLocalFile(const QString&  fileName);
   QTemporaryFile*  static_QTemporaryFile_createNativeFile(QFile&  file);
   QTemporaryFile*  static_QTemporaryFile_createNativeFile(const QString&  fileName);
   QString  fileName(QTemporaryFile* theWrappedObject) const;
   QString  py_q_fileName(QTemporaryFile* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTemporaryFile*)theWrappedObject)->py_q_fileName());}
   QString  fileTemplate(QTemporaryFile* theWrappedObject) const;
   bool  open(QTemporaryFile* theWrappedObject);
   bool  py_q_open(QTemporaryFile* theWrappedObject, QIODevice::OpenMode  flags){  return (((PythonQtPublicPromoter_QTemporaryFile*)theWrappedObject)->py_q_open(flags));}
   void setAutoRemove(QTemporaryFile* theWrappedObject, bool  b);
   void setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name);
};





class PythonQtWrapper_QTextBoundaryFinder : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BoundaryReason BoundaryType )
Q_FLAGS(BoundaryReasons )
enum BoundaryReason{
  NotAtBoundary = QTextBoundaryFinder::NotAtBoundary,   BreakOpportunity = QTextBoundaryFinder::BreakOpportunity,   StartOfItem = QTextBoundaryFinder::StartOfItem,   EndOfItem = QTextBoundaryFinder::EndOfItem,   MandatoryBreak = QTextBoundaryFinder::MandatoryBreak,   SoftHyphen = QTextBoundaryFinder::SoftHyphen};
enum BoundaryType{
  Grapheme = QTextBoundaryFinder::Grapheme,   Word = QTextBoundaryFinder::Word,   Sentence = QTextBoundaryFinder::Sentence,   Line = QTextBoundaryFinder::Line};
Q_DECLARE_FLAGS(BoundaryReasons, BoundaryReason)
public slots:
QTextBoundaryFinder* new_QTextBoundaryFinder();
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string);
QTextBoundaryFinder* new_QTextBoundaryFinder(const QTextBoundaryFinder&  other);
void delete_QTextBoundaryFinder(QTextBoundaryFinder* obj) { delete obj; } 
   QTextBoundaryFinder::BoundaryReasons  boundaryReasons(QTextBoundaryFinder* theWrappedObject) const;
   bool  isAtBoundary(QTextBoundaryFinder* theWrappedObject) const;
   bool  isValid(QTextBoundaryFinder* theWrappedObject) const;
   int  position(QTextBoundaryFinder* theWrappedObject) const;
   void setPosition(QTextBoundaryFinder* theWrappedObject, int  position);
   QString  string(QTextBoundaryFinder* theWrappedObject) const;
   void toEnd(QTextBoundaryFinder* theWrappedObject);
   int  toNextBoundary(QTextBoundaryFinder* theWrappedObject);
   int  toPreviousBoundary(QTextBoundaryFinder* theWrappedObject);
   void toStart(QTextBoundaryFinder* theWrappedObject);
   QTextBoundaryFinder::BoundaryType  type(QTextBoundaryFinder* theWrappedObject) const;
    bool __nonzero__(QTextBoundaryFinder* obj) { return obj->isValid(); }
};





class PythonQtShell_QTextCodec : public QTextCodec
{
public:
    PythonQtShell_QTextCodec():QTextCodec(),_wrapper(NULL) {};

   ~PythonQtShell_QTextCodec();

virtual QList<QByteArray >  aliases() const;
virtual QByteArray  convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const;
virtual QString  convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const;
virtual int  mibEnum() const;
virtual QByteArray  name() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextCodec : public QTextCodec
{ public:
inline QByteArray  promoted_convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const { return this->convertFromUnicode(in, length, state); }
inline QString  promoted_convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const { return this->convertToUnicode(in, length, state); }
inline QList<QByteArray >  py_q_aliases() const { return QTextCodec::aliases(); }
inline QByteArray  py_q_convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const { return this->convertFromUnicode(in, length, state); }
inline QString  py_q_convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const { return this->convertToUnicode(in, length, state); }
inline int  py_q_mibEnum() const { return this->mibEnum(); }
inline QByteArray  py_q_name() const { return this->name(); }
};

class PythonQtWrapper_QTextCodec : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ConversionFlag )
Q_FLAGS(ConversionFlags )
enum ConversionFlag{
  DefaultConversion = QTextCodec::DefaultConversion,   ConvertInvalidToNull = QTextCodec::ConvertInvalidToNull,   IgnoreHeader = QTextCodec::IgnoreHeader,   FreeFunction = QTextCodec::FreeFunction};
Q_DECLARE_FLAGS(ConversionFlags, ConversionFlag)
public slots:
QTextCodec* new_QTextCodec();
   QList<QByteArray >  aliases(QTextCodec* theWrappedObject) const;
   QList<QByteArray >  py_q_aliases(QTextCodec* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->py_q_aliases());}
   QList<QByteArray >  static_QTextCodec_availableCodecs();
   QList<int >  static_QTextCodec_availableMibs();
   bool  canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const;
   bool  canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const;
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba);
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec);
   QTextCodec*  static_QTextCodec_codecForLocale();
   QTextCodec*  static_QTextCodec_codecForMib(int  mib);
   QTextCodec*  static_QTextCodec_codecForName(const QByteArray&  name);
   QTextCodec*  static_QTextCodec_codecForName(const char*  name);
   QTextCodec*  static_QTextCodec_codecForUtfText(const QByteArray&  ba);
   QTextCodec*  static_QTextCodec_codecForUtfText(const QByteArray&  ba, QTextCodec*  defaultCodec);
   QByteArray  convertFromUnicode(QTextCodec* theWrappedObject, const QChar*  in, int  length, QTextCodec::ConverterState*  state) const;
   QByteArray  py_q_convertFromUnicode(QTextCodec* theWrappedObject, const QChar*  in, int  length, QTextCodec::ConverterState*  state) const{  return (((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->py_q_convertFromUnicode(in, length, state));}
   QString  convertToUnicode(QTextCodec* theWrappedObject, const char*  in, int  length, QTextCodec::ConverterState*  state) const;
   QString  py_q_convertToUnicode(QTextCodec* theWrappedObject, const char*  in, int  length, QTextCodec::ConverterState*  state) const{  return (((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->py_q_convertToUnicode(in, length, state));}
   QByteArray  fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const;
   QTextDecoder*  makeDecoder(QTextCodec* theWrappedObject, QTextCodec::ConversionFlags  flags = QTextCodec::DefaultConversion) const;
   QTextEncoder*  makeEncoder(QTextCodec* theWrappedObject, QTextCodec::ConversionFlags  flags = QTextCodec::DefaultConversion) const;
   int  mibEnum(QTextCodec* theWrappedObject) const;
   int  py_q_mibEnum(QTextCodec* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->py_q_mibEnum());}
   QByteArray  name(QTextCodec* theWrappedObject) const;
   QByteArray  py_q_name(QTextCodec* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->py_q_name());}
   void static_QTextCodec_setCodecForLocale(QTextCodec*  c);
   QString  toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const;
};





class PythonQtWrapper_QTextDecoder : public QObject
{ Q_OBJECT
public:
public slots:
QTextDecoder* new_QTextDecoder(const QTextCodec*  codec);
QTextDecoder* new_QTextDecoder(const QTextCodec*  codec, QTextCodec::ConversionFlags  flags);
void delete_QTextDecoder(QTextDecoder* obj) { delete obj; } 
   bool  hasFailure(QTextDecoder* theWrappedObject) const;
   QString  toUnicode(QTextDecoder* theWrappedObject, const QByteArray&  ba);
};





class PythonQtWrapper_QTextEncoder : public QObject
{ Q_OBJECT
public:
public slots:
QTextEncoder* new_QTextEncoder(const QTextCodec*  codec);
QTextEncoder* new_QTextEncoder(const QTextCodec*  codec, QTextCodec::ConversionFlags  flags);
void delete_QTextEncoder(QTextEncoder* obj) { delete obj; } 
   QByteArray  fromUnicode(QTextEncoder* theWrappedObject, const QString&  str);
   bool  hasFailure(QTextEncoder* theWrappedObject) const;
};





class PythonQtShell_QTextStream : public QTextStream
{
public:
    PythonQtShell_QTextStream():QTextStream(),_wrapper(NULL) {};
    PythonQtShell_QTextStream(QIODevice*  device):QTextStream(device),_wrapper(NULL) {};
    PythonQtShell_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly):QTextStream(array, openMode),_wrapper(NULL) {};

   ~PythonQtShell_QTextStream();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FieldAlignment NumberFlag RealNumberNotation Status )
Q_FLAGS(NumberFlags )
enum FieldAlignment{
  AlignLeft = QTextStream::AlignLeft,   AlignRight = QTextStream::AlignRight,   AlignCenter = QTextStream::AlignCenter,   AlignAccountingStyle = QTextStream::AlignAccountingStyle};
enum NumberFlag{
  ShowBase = QTextStream::ShowBase,   ForcePoint = QTextStream::ForcePoint,   ForceSign = QTextStream::ForceSign,   UppercaseBase = QTextStream::UppercaseBase,   UppercaseDigits = QTextStream::UppercaseDigits};
enum RealNumberNotation{
  SmartNotation = QTextStream::SmartNotation,   FixedNotation = QTextStream::FixedNotation,   ScientificNotation = QTextStream::ScientificNotation};
enum Status{
  Ok = QTextStream::Ok,   ReadPastEnd = QTextStream::ReadPastEnd,   ReadCorruptData = QTextStream::ReadCorruptData,   WriteFailed = QTextStream::WriteFailed};
Q_DECLARE_FLAGS(NumberFlags, NumberFlag)
public slots:
QTextStream* new_QTextStream();
QTextStream* new_QTextStream(QIODevice*  device);
QTextStream* new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly);
void delete_QTextStream(QTextStream* obj) { delete obj; } 
   bool  atEnd(QTextStream* theWrappedObject) const;
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   QTextCodec*  codec(QTextStream* theWrappedObject) const;
   QIODevice*  device(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   int  fieldWidth(QTextStream* theWrappedObject) const;
   void flush(QTextStream* theWrappedObject);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   int  integerBase(QTextStream* theWrappedObject) const;
   QLocale  locale(QTextStream* theWrappedObject) const;
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   QTextStream*  __lshift__(QTextStream* theWrappedObject, QLatin1String  s);
   QTextStream*  writeByte(QTextStream* theWrappedObject, char  ch);
   QTextStream*  __lshift__(QTextStream* theWrappedObject, const QStringRef&  s);
   QTextStream*  writeDouble(QTextStream* theWrappedObject, double  f);
   QTextStream*  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextStream*  writeLongLong(QTextStream* theWrappedObject, qlonglong  i);
   QTextStream*  writeInt(QTextStream* theWrappedObject, signed int  i);
   QTextStream*  writeShort(QTextStream* theWrappedObject, signed short  i);
   QTextStream*  readByte(QTextStream* theWrappedObject, char&  ch);
   QTextStream*  readDouble(QTextStream* theWrappedObject, double&  f);
   QTextStream*  readFloat(QTextStream* theWrappedObject, float&  f);
   QTextStream*  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   QTextStream*  readInt(QTextStream* theWrappedObject, signed int&  i);
   QTextStream*  readShort(QTextStream* theWrappedObject, signed short&  i);
   QChar  padChar(QTextStream* theWrappedObject) const;
   qint64  pos(QTextStream* theWrappedObject) const;
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   QString  readAll(QTextStream* theWrappedObject);
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   bool  readLineInto(QTextStream* theWrappedObject, QString*  line, qint64  maxlen = 0);
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   void reset(QTextStream* theWrappedObject);
   void resetStatus(QTextStream* theWrappedObject);
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   void setCodec(QTextStream* theWrappedObject, QTextCodec*  codec);
   void setCodec(QTextStream* theWrappedObject, const char*  codecName);
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   void setLocale(QTextStream* theWrappedObject, const QLocale&  locale);
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   void skipWhiteSpace(QTextStream* theWrappedObject);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
};





class PythonQtShell_QThreadPool : public QThreadPool
{
public:
    PythonQtShell_QThreadPool(QObject*  parent = NULL):QThreadPool(parent),_wrapper(NULL) {};

   ~PythonQtShell_QThreadPool();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QThreadPool : public QObject
{ Q_OBJECT
public:
public slots:
QThreadPool* new_QThreadPool(QObject*  parent = NULL);
void delete_QThreadPool(QThreadPool* obj) { delete obj; } 
   int  activeThreadCount(QThreadPool* theWrappedObject) const;
   void cancel(QThreadPool* theWrappedObject, QRunnable*  runnable);
   void clear(QThreadPool* theWrappedObject);
   int  expiryTimeout(QThreadPool* theWrappedObject) const;
   QThreadPool*  static_QThreadPool_globalInstance();
   int  maxThreadCount(QThreadPool* theWrappedObject) const;
   void releaseThread(QThreadPool* theWrappedObject);
   void reserveThread(QThreadPool* theWrappedObject);
   void setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout);
   void setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount);
   void start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority = 0);
   bool  tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable);
   bool  waitForDone(QThreadPool* theWrappedObject, int  msecs = -1);
};





class PythonQtShell_QTimeLine : public QTimeLine
{
public:
    PythonQtShell_QTimeLine(int  duration = 1000, QObject*  parent = NULL):QTimeLine(duration, parent),_wrapper(NULL) {};

   ~PythonQtShell_QTimeLine();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual qreal  valueForTime(int  msec) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTimeLine : public QTimeLine
{ public:
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void py_q_timerEvent(QTimerEvent*  event) { QTimeLine::timerEvent(event); }
inline qreal  py_q_valueForTime(int  msec) const { return QTimeLine::valueForTime(msec); }
};

class PythonQtWrapper_QTimeLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CurveShape Direction State )
enum CurveShape{
  EaseInCurve = QTimeLine::EaseInCurve,   EaseOutCurve = QTimeLine::EaseOutCurve,   EaseInOutCurve = QTimeLine::EaseInOutCurve,   LinearCurve = QTimeLine::LinearCurve,   SineCurve = QTimeLine::SineCurve,   CosineCurve = QTimeLine::CosineCurve};
enum Direction{
  Forward = QTimeLine::Forward,   Backward = QTimeLine::Backward};
enum State{
  NotRunning = QTimeLine::NotRunning,   Paused = QTimeLine::Paused,   Running = QTimeLine::Running};
public slots:
QTimeLine* new_QTimeLine(int  duration = 1000, QObject*  parent = NULL);
void delete_QTimeLine(QTimeLine* obj) { delete obj; } 
   int  currentFrame(QTimeLine* theWrappedObject) const;
   int  currentTime(QTimeLine* theWrappedObject) const;
   qreal  currentValue(QTimeLine* theWrappedObject) const;
   QTimeLine::CurveShape  curveShape(QTimeLine* theWrappedObject) const;
   QTimeLine::Direction  direction(QTimeLine* theWrappedObject) const;
   int  duration(QTimeLine* theWrappedObject) const;
   QEasingCurve  easingCurve(QTimeLine* theWrappedObject) const;
   int  endFrame(QTimeLine* theWrappedObject) const;
   int  frameForTime(QTimeLine* theWrappedObject, int  msec) const;
   int  loopCount(QTimeLine* theWrappedObject) const;
   void setCurveShape(QTimeLine* theWrappedObject, QTimeLine::CurveShape  shape);
   void setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction);
   void setDuration(QTimeLine* theWrappedObject, int  duration);
   void setEasingCurve(QTimeLine* theWrappedObject, const QEasingCurve&  curve);
   void setEndFrame(QTimeLine* theWrappedObject, int  frame);
   void setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame);
   void setLoopCount(QTimeLine* theWrappedObject, int  count);
   void setStartFrame(QTimeLine* theWrappedObject, int  frame);
   void setUpdateInterval(QTimeLine* theWrappedObject, int  interval);
   int  startFrame(QTimeLine* theWrappedObject) const;
   QTimeLine::State  state(QTimeLine* theWrappedObject) const;
   void py_q_timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->py_q_timerEvent(event));}
   int  updateInterval(QTimeLine* theWrappedObject) const;
   qreal  valueForTime(QTimeLine* theWrappedObject, int  msec) const;
   qreal  py_q_valueForTime(QTimeLine* theWrappedObject, int  msec) const{  return (((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->py_q_valueForTime(msec));}
};





class PythonQtWrapper_QTimeZone : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NameType TimeType )
enum NameType{
  DefaultName = QTimeZone::DefaultName,   LongName = QTimeZone::LongName,   ShortName = QTimeZone::ShortName,   OffsetName = QTimeZone::OffsetName};
enum TimeType{
  StandardTime = QTimeZone::StandardTime,   DaylightTime = QTimeZone::DaylightTime,   GenericTime = QTimeZone::GenericTime};
public slots:
QTimeZone* new_QTimeZone();
QTimeZone* new_QTimeZone(const QByteArray&  ianaId);
QTimeZone* new_QTimeZone(const QByteArray&  zoneId, int  offsetSeconds, const QString&  name, const QString&  abbreviation, QLocale::Country  country = QLocale::AnyCountry, const QString&  comment = QString());
QTimeZone* new_QTimeZone(const QTimeZone&  other);
QTimeZone* new_QTimeZone(int  offsetSeconds);
void delete_QTimeZone(QTimeZone* obj) { delete obj; } 
   QString  abbreviation(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds();
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds(QLocale::Country  country);
   QList<QByteArray >  static_QTimeZone_availableTimeZoneIds(int  offsetSeconds);
   QString  comment(QTimeZone* theWrappedObject) const;
   QLocale::Country  country(QTimeZone* theWrappedObject) const;
   int  daylightTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   QString  displayName(QTimeZone* theWrappedObject, QTimeZone::TimeType  timeType, QTimeZone::NameType  nameType = QTimeZone::DefaultName, const QLocale&  locale = QLocale()) const;
   QString  displayName(QTimeZone* theWrappedObject, const QDateTime&  atDateTime, QTimeZone::NameType  nameType = QTimeZone::DefaultName, const QLocale&  locale = QLocale()) const;
   bool  hasDaylightTime(QTimeZone* theWrappedObject) const;
   bool  hasTransitions(QTimeZone* theWrappedObject) const;
   QByteArray  static_QTimeZone_ianaIdToWindowsId(const QByteArray&  ianaId);
   QByteArray  id(QTimeZone* theWrappedObject) const;
   bool  isDaylightTime(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   bool  static_QTimeZone_isTimeZoneIdAvailable(const QByteArray&  ianaId);
   bool  isValid(QTimeZone* theWrappedObject) const;
   int  offsetFromUtc(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   bool  __ne__(QTimeZone* theWrappedObject, const QTimeZone&  other) const;
   void writeTo(QTimeZone* theWrappedObject, QDataStream&  ds);
   QTimeZone*  operator_assign(QTimeZone* theWrappedObject, const QTimeZone&  other);
   bool  __eq__(QTimeZone* theWrappedObject, const QTimeZone&  other) const;
   void readFrom(QTimeZone* theWrappedObject, QDataStream&  ds);
   int  standardTimeOffset(QTimeZone* theWrappedObject, const QDateTime&  atDateTime) const;
   void swap(QTimeZone* theWrappedObject, QTimeZone&  other);
   QTimeZone  static_QTimeZone_systemTimeZone();
   QByteArray  static_QTimeZone_systemTimeZoneId();
   QTimeZone  static_QTimeZone_utc();
   QByteArray  static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId);
   QByteArray  static_QTimeZone_windowsIdToDefaultIanaId(const QByteArray&  windowsId, QLocale::Country  country);
   QList<QByteArray >  static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId);
   QList<QByteArray >  static_QTimeZone_windowsIdToIanaIds(const QByteArray&  windowsId, QLocale::Country  country);
    QString py_toString(QTimeZone*);
    bool __nonzero__(QTimeZone* obj) { return obj->isValid(); }
};





class PythonQtShell_QTimer : public QTimer
{
public:
    PythonQtShell_QTimer(QObject*  parent = NULL):QTimer(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTimer();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTimer : public QTimer
{ public:
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QTimer::timerEvent(arg__1); }
};

class PythonQtWrapper_QTimer : public QObject
{ Q_OBJECT
public:
public slots:
QTimer* new_QTimer(QObject*  parent = NULL);
void delete_QTimer(QTimer* obj) { delete obj; } 
   int  interval(QTimer* theWrappedObject) const;
   bool  isActive(QTimer* theWrappedObject) const;
   bool  isSingleShot(QTimer* theWrappedObject) const;
   int  remainingTime(QTimer* theWrappedObject) const;
   void setInterval(QTimer* theWrappedObject, int  msec);
   void setSingleShot(QTimer* theWrappedObject, bool  singleShot);
   void setTimerType(QTimer* theWrappedObject, Qt::TimerType  atype);
   void static_QTimer_singleShot(int  msec, Qt::TimerType  timerType, const QObject*  receiver, const char*  member);
   void static_QTimer_singleShot(int  msec, const QObject*  receiver, const char*  member);
   void py_q_timerEvent(QTimer* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QTimer*)theWrappedObject)->py_q_timerEvent(arg__1));}
   int  timerId(QTimer* theWrappedObject) const;
   Qt::TimerType  timerType(QTimer* theWrappedObject) const;
};





class PythonQtShell_QTimerEvent : public QTimerEvent
{
public:
    PythonQtShell_QTimerEvent(int  timerId):QTimerEvent(timerId),_wrapper(NULL) {};

   ~PythonQtShell_QTimerEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTimerEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTimerEvent* new_QTimerEvent(int  timerId);
void delete_QTimerEvent(QTimerEvent* obj) { delete obj; } 
   int  timerId(QTimerEvent* theWrappedObject) const;
};





class PythonQtShell_QTranslator : public QTranslator
{
public:
    PythonQtShell_QTranslator(QObject*  parent = NULL):QTranslator(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTranslator();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isEmpty() const;
virtual void timerEvent(QTimerEvent*  event);
virtual QString  translate(const char*  context, const char*  sourceText, const char*  disambiguation = NULL, int  n = -1) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTranslator : public QTranslator
{ public:
inline bool  py_q_isEmpty() const { return QTranslator::isEmpty(); }
inline QString  py_q_translate(const char*  context, const char*  sourceText, const char*  disambiguation = NULL, int  n = -1) const { return QTranslator::translate(context, sourceText, disambiguation, n); }
};

class PythonQtWrapper_QTranslator : public QObject
{ Q_OBJECT
public:
public slots:
QTranslator* new_QTranslator(QObject*  parent = NULL);
void delete_QTranslator(QTranslator* obj) { delete obj; } 
   bool  isEmpty(QTranslator* theWrappedObject) const;
   bool  py_q_isEmpty(QTranslator* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->py_q_isEmpty());}
   bool  load(QTranslator* theWrappedObject, const QLocale&  locale, const QString&  filename, const QString&  prefix = QString(), const QString&  directory = QString(), const QString&  suffix = QString());
   bool  load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory = QString(), const QString&  search_delimiters = QString(), const QString&  suffix = QString());
   bool  load(QTranslator* theWrappedObject, const uchar*  data, int  len, const QString&  directory = QString());
   QString  translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation = NULL, int  n = -1) const;
   QString  py_q_translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation = NULL, int  n = -1) const{  return (((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->py_q_translate(context, sourceText, disambiguation, n));}
    bool __nonzero__(QTranslator* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QUrlQuery : public QObject
{ Q_OBJECT
public:
public slots:
QUrlQuery* new_QUrlQuery();
QUrlQuery* new_QUrlQuery(const QString&  queryString);
QUrlQuery* new_QUrlQuery(const QUrl&  url);
QUrlQuery* new_QUrlQuery(const QUrlQuery&  other);
void delete_QUrlQuery(QUrlQuery* obj) { delete obj; } 
   void addQueryItem(QUrlQuery* theWrappedObject, const QString&  key, const QString&  value);
   QStringList  allQueryItemValues(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   void clear(QUrlQuery* theWrappedObject);
   QChar  static_QUrlQuery_defaultQueryPairDelimiter();
   QChar  static_QUrlQuery_defaultQueryValueDelimiter();
   bool  hasQueryItem(QUrlQuery* theWrappedObject, const QString&  key) const;
   bool  isEmpty(QUrlQuery* theWrappedObject) const;
   bool  __ne__(QUrlQuery* theWrappedObject, const QUrlQuery&  other) const;
   QUrlQuery*  operator_assign(QUrlQuery* theWrappedObject, const QUrlQuery&  other);
   bool  __eq__(QUrlQuery* theWrappedObject, const QUrlQuery&  other) const;
   QString  query(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   QString  queryItemValue(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   QList<QPair<QString , QString >  >  queryItems(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
   QChar  queryPairDelimiter(QUrlQuery* theWrappedObject) const;
   QChar  queryValueDelimiter(QUrlQuery* theWrappedObject) const;
   void removeAllQueryItems(QUrlQuery* theWrappedObject, const QString&  key);
   void removeQueryItem(QUrlQuery* theWrappedObject, const QString&  key);
   void setQuery(QUrlQuery* theWrappedObject, const QString&  queryString);
   void setQueryDelimiters(QUrlQuery* theWrappedObject, QChar  valueDelimiter, QChar  pairDelimiter);
   void setQueryItems(QUrlQuery* theWrappedObject, const QList<QPair<QString , QString >  >&  query);
   void swap(QUrlQuery* theWrappedObject, QUrlQuery&  other);
   QString  toString(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding = QUrl::PrettyDecoded) const;
    QString py_toString(QUrlQuery*);
    bool __nonzero__(QUrlQuery* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QUuid : public QUuid
{
public:
    PythonQtShell_QUuid():QUuid(),_wrapper(NULL) {};
    PythonQtShell_QUuid(const QByteArray&  arg__1):QUuid(arg__1),_wrapper(NULL) {};
    PythonQtShell_QUuid(const QString&  arg__1):QUuid(arg__1),_wrapper(NULL) {};
    PythonQtShell_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8):QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8),_wrapper(NULL) {};

   ~PythonQtShell_QUuid();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUuid : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Variant Version )
enum Variant{
  VarUnknown = QUuid::VarUnknown,   NCS = QUuid::NCS,   DCE = QUuid::DCE,   Microsoft = QUuid::Microsoft,   Reserved = QUuid::Reserved};
enum Version{
  VerUnknown = QUuid::VerUnknown,   Time = QUuid::Time,   EmbeddedPOSIX = QUuid::EmbeddedPOSIX,   Md5 = QUuid::Md5,   Name = QUuid::Name,   Random = QUuid::Random,   Sha1 = QUuid::Sha1};
public slots:
QUuid* new_QUuid();
QUuid* new_QUuid(const QByteArray&  arg__1);
QUuid* new_QUuid(const QString&  arg__1);
QUuid* new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8);
QUuid* new_QUuid(const QUuid& other) {
PythonQtShell_QUuid* a = new PythonQtShell_QUuid();
*((QUuid*)a) = other;
return a; }
void delete_QUuid(QUuid* obj) { delete obj; } 
   QUuid  static_QUuid_createUuid();
   QUuid  static_QUuid_createUuidV3(const QUuid&  ns, const QByteArray&  baseData);
   QUuid  static_QUuid_createUuidV3(const QUuid&  ns, const QString&  baseData);
   QUuid  static_QUuid_createUuidV5(const QUuid&  ns, const QByteArray&  baseData);
   QUuid  static_QUuid_createUuidV5(const QUuid&  ns, const QString&  baseData);
   QUuid  static_QUuid_fromRfc4122(const QByteArray&  arg__1);
   bool  isNull(QUuid* theWrappedObject) const;
   bool  __ne__(QUuid* theWrappedObject, const QUuid&  orig) const;
   bool  __lt__(QUuid* theWrappedObject, const QUuid&  other) const;
   void writeTo(QUuid* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QUuid* theWrappedObject, const QUuid&  rhs);
   bool  __eq__(QUuid* theWrappedObject, const QUuid&  orig) const;
   bool  __gt__(QUuid* theWrappedObject, const QUuid&  other) const;
   bool  __ge__(QUuid* theWrappedObject, const QUuid&  rhs);
   void readFrom(QUuid* theWrappedObject, QDataStream&  arg__1);
   QByteArray  toByteArray(QUuid* theWrappedObject) const;
   QByteArray  toRfc4122(QUuid* theWrappedObject) const;
   QString  toString(QUuid* theWrappedObject) const;
   QUuid::Variant  variant(QUuid* theWrappedObject) const;
   QUuid::Version  version(QUuid* theWrappedObject) const;
    QString py_toString(QUuid*);
    bool __nonzero__(QUuid* obj) { return !obj->isNull(); }
void py_set_data1(QUuid* theWrappedObject, uint  data1){ theWrappedObject->data1 = data1; }
uint  py_get_data1(QUuid* theWrappedObject){ return theWrappedObject->data1; }
void py_set_data2(QUuid* theWrappedObject, ushort  data2){ theWrappedObject->data2 = data2; }
ushort  py_get_data2(QUuid* theWrappedObject){ return theWrappedObject->data2; }
void py_set_data3(QUuid* theWrappedObject, ushort  data3){ theWrappedObject->data3 = data3; }
ushort  py_get_data3(QUuid* theWrappedObject){ return theWrappedObject->data3; }
};





class PythonQtShell_QVariantAnimation : public QVariantAnimation
{
public:
    PythonQtShell_QVariantAnimation(QObject*  parent = NULL):QVariantAnimation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVariantAnimation();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void updateCurrentTime(int  arg__1);
virtual void updateCurrentValue(const QVariant&  value);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVariantAnimation : public QVariantAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline QVariant  promoted_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return this->interpolated(from, to, progress); }
inline void promoted_updateCurrentTime(int  arg__1) { this->updateCurrentTime(arg__1); }
inline void promoted_updateCurrentValue(const QVariant&  value) { this->updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { this->updateState(newState, oldState); }
inline int  py_q_duration() const { return QVariantAnimation::duration(); }
inline bool  py_q_event(QEvent*  event) { return QVariantAnimation::event(event); }
inline QVariant  py_q_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return QVariantAnimation::interpolated(from, to, progress); }
inline void py_q_updateCurrentTime(int  arg__1) { QVariantAnimation::updateCurrentTime(arg__1); }
inline void py_q_updateCurrentValue(const QVariant&  value) { QVariantAnimation::updateCurrentValue(value); }
inline void py_q_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QVariantAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QVariantAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QVariantAnimation* new_QVariantAnimation(QObject*  parent = NULL);
void delete_QVariantAnimation(QVariantAnimation* obj) { delete obj; } 
   QVariant  currentValue(QVariantAnimation* theWrappedObject) const;
   int  py_q_duration(QVariantAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_duration());}
   QEasingCurve  easingCurve(QVariantAnimation* theWrappedObject) const;
   QVariant  endValue(QVariantAnimation* theWrappedObject) const;
   bool  py_q_event(QVariantAnimation* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_event(event));}
   QVariant  interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const;
   QVariant  py_q_interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const{  return (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_interpolated(from, to, progress));}
   QVariant  keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const;
   QVector<QPair<qreal , QVariant >  >  keyValues(QVariantAnimation* theWrappedObject) const;
   void setDuration(QVariantAnimation* theWrappedObject, int  msecs);
   void setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing);
   void setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value);
   void setKeyValues(QVariantAnimation* theWrappedObject, const QVector<QPair<qreal , QVariant >  >&  values);
   void setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   QVariant  startValue(QVariantAnimation* theWrappedObject) const;
   void py_q_updateCurrentTime(QVariantAnimation* theWrappedObject, int  arg__1){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateCurrentTime(arg__1));}
   void updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void py_q_updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateCurrentValue(value));}
   void py_q_updateState(QVariantAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState){  (((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->py_q_updateState(newState, oldState));}
};





class PythonQtWrapper_QWaitCondition : public QObject
{ Q_OBJECT
public:
public slots:
QWaitCondition* new_QWaitCondition();
void delete_QWaitCondition(QWaitCondition* obj) { delete obj; } 
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time = ULONG_MAX);
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time = ULONG_MAX);
   void wakeAll(QWaitCondition* theWrappedObject);
   void wakeOne(QWaitCondition* theWrappedObject);
};





class PythonQtShell_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{
public:
    PythonQtShell_QXmlStreamEntityResolver():QXmlStreamEntityResolver(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlStreamEntityResolver();

virtual QString  resolveEntity(const QString&  publicId, const QString&  systemId);
virtual QString  resolveUndeclaredEntity(const QString&  name);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{ public:
inline QString  py_q_resolveEntity(const QString&  publicId, const QString&  systemId) { return QXmlStreamEntityResolver::resolveEntity(publicId, systemId); }
inline QString  py_q_resolveUndeclaredEntity(const QString&  name) { return QXmlStreamEntityResolver::resolveUndeclaredEntity(name); }
};

class PythonQtWrapper_QXmlStreamEntityResolver : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityResolver* new_QXmlStreamEntityResolver();
void delete_QXmlStreamEntityResolver(QXmlStreamEntityResolver* obj) { delete obj; } 
   QString  resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId);
   QString  py_q_resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId){  return (((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->py_q_resolveEntity(publicId, systemId));}
   QString  resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name);
   QString  py_q_resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->py_q_resolveUndeclaredEntity(name));}
};


