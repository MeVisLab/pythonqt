#include <PythonQt.h>
#include <QObject>
#include <QTextCodec>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qfile.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmutex.h>
#include <qobject.h>
#include <qreadwritelock.h>
#include <qrunnable.h>
#include <qsignalmapper.h>
#include <qsocketnotifier.h>
#include <qstringlist.h>
#include <qstringmatcher.h>
#include <qsystemsemaphore.h>
#include <qtconcurrentexception.h>
#include <qtconcurrentreducekernel.h>
#include <qtconcurrentthreadengine.h>
#include <qtemporaryfile.h>
#include <qtextboundaryfinder.h>
#include <qtextcodec.h>
#include <qtextcodecplugin.h>
#include <qtextstream.h>
#include <qthreadpool.h>
#include <qtimeline.h>
#include <qtimer.h>
#include <qtranslator.h>
#include <quuid.h>
#include <qvector.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>



class PythonQtShell_QSignalMapper : public QSignalMapper
{
public:
    PythonQtShell_QSignalMapper(QObject*  parent = 0):QSignalMapper(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSignalMapper : public QObject
{ Q_OBJECT
public:
public slots:
QSignalMapper* new_QSignalMapper(QObject*  parent = 0);
void delete_QSignalMapper(QSignalMapper* obj) { delete obj; } 
   QObject*  mapping(QSignalMapper* theWrappedObject, QObject*  object) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, int  id) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, const QString&  text) const;
   void removeMappings(QSignalMapper* theWrappedObject, QObject*  sender);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id);
};





class PythonQtShell_QSocketNotifier : public QSocketNotifier
{
public:
    PythonQtShell_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent = 0):QSocketNotifier(socket, arg__2, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSocketNotifier : public QSocketNotifier
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QSocketNotifier::event(arg__1); }
};

class PythonQtWrapper_QSocketNotifier : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Read = QSocketNotifier::Read,   Write = QSocketNotifier::Write,   Exception = QSocketNotifier::Exception};
public slots:
QSocketNotifier* new_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent = 0);
void delete_QSocketNotifier(QSocketNotifier* obj) { delete obj; } 
   int  socket(QSocketNotifier* theWrappedObject) const;
   bool  event(QSocketNotifier* theWrappedObject, QEvent*  arg__1);
   bool  isEnabled(QSocketNotifier* theWrappedObject) const;
   QSocketNotifier::Type  type(QSocketNotifier* theWrappedObject) const;
};





class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QStringMatcher* new_QStringMatcher();
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; } 
   void setPattern(QStringMatcher* theWrappedObject, const QString&  pattern);
   int  indexIn(QStringMatcher* theWrappedObject, const QString&  str, int  from = 0) const;
   QString  pattern(QStringMatcher* theWrappedObject) const;
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   void setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs);
};





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
   QSystemSemaphore::SystemSemaphoreError  error(QSystemSemaphore* theWrappedObject) const;
   QString  errorString(QSystemSemaphore* theWrappedObject) const;
   QString  key(QSystemSemaphore* theWrappedObject) const;
   bool  acquire(QSystemSemaphore* theWrappedObject);
   bool  release(QSystemSemaphore* theWrappedObject, int  n = 1);
   void setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
};





class PythonQtShell_QTemporaryFile : public QTemporaryFile
{
public:
    PythonQtShell_QTemporaryFile():QTemporaryFile(),_wrapper(NULL) {};
    PythonQtShell_QTemporaryFile(QObject*  parent):QTemporaryFile(parent),_wrapper(NULL) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName):QTemporaryFile(templateName),_wrapper(NULL) {};
    PythonQtShell_QTemporaryFile(const QString&  templateName, QObject*  parent):QTemporaryFile(templateName, parent),_wrapper(NULL) {};

virtual QAbstractFileEngine*  fileEngine() const;
virtual bool  open(QIODevice::OpenMode  flags);
virtual void close();
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  atEnd() const;
virtual bool  isSequential() const;
virtual bool  seek(qint64  offset);
virtual qint64  size() const;
virtual qint64  pos() const;
virtual qint64  writeData(const char*  data, qint64  len);
virtual bool  reset();
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  canReadLine() const;
virtual bool  waitForReadyRead(int  msecs);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTemporaryFile : public QTemporaryFile
{ public:
inline QAbstractFileEngine*  promoted_fileEngine() const { return QTemporaryFile::fileEngine(); }
inline bool  promoted_open(QIODevice::OpenMode  flags) { return QTemporaryFile::open(flags); }
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
   QString  fileTemplate(QTemporaryFile* theWrappedObject) const;
   QTemporaryFile*  static_QTemporaryFile_createLocalFile(QFile&  file);
   void setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name);
   void setAutoRemove(QTemporaryFile* theWrappedObject, bool  b);
   bool  autoRemove(QTemporaryFile* theWrappedObject) const;
   QAbstractFileEngine*  fileEngine(QTemporaryFile* theWrappedObject) const;
   QString  fileName(QTemporaryFile* theWrappedObject) const;
   QTemporaryFile*  static_QTemporaryFile_createLocalFile(const QString&  fileName);
   bool  open(QTemporaryFile* theWrappedObject, QIODevice::OpenMode  flags);
   bool  open(QTemporaryFile* theWrappedObject);
};





class PythonQtWrapper_QTextBoundaryFinder : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BoundaryReason BoundaryType )
Q_FLAGS(BoundaryReasons )
enum BoundaryReason{
  NotAtBoundary = QTextBoundaryFinder::NotAtBoundary,   StartWord = QTextBoundaryFinder::StartWord,   EndWord = QTextBoundaryFinder::EndWord};
enum BoundaryType{
  Grapheme = QTextBoundaryFinder::Grapheme,   Word = QTextBoundaryFinder::Word,   Line = QTextBoundaryFinder::Line,   Sentence = QTextBoundaryFinder::Sentence};
Q_DECLARE_FLAGS(BoundaryReasons, BoundaryReason)
public slots:
QTextBoundaryFinder* new_QTextBoundaryFinder();
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string);
QTextBoundaryFinder* new_QTextBoundaryFinder(const QTextBoundaryFinder&  other);
void delete_QTextBoundaryFinder(QTextBoundaryFinder* obj) { delete obj; } 
   int  toPreviousBoundary(QTextBoundaryFinder* theWrappedObject);
   bool  isValid(QTextBoundaryFinder* theWrappedObject) const;
   QString  string(QTextBoundaryFinder* theWrappedObject) const;
   bool  isAtBoundary(QTextBoundaryFinder* theWrappedObject) const;
   QTextBoundaryFinder::BoundaryReasons  boundaryReasons(QTextBoundaryFinder* theWrappedObject) const;
   int  toNextBoundary(QTextBoundaryFinder* theWrappedObject);
   int  position(QTextBoundaryFinder* theWrappedObject) const;
   QTextBoundaryFinder::BoundaryType  type(QTextBoundaryFinder* theWrappedObject) const;
   void toEnd(QTextBoundaryFinder* theWrappedObject);
   void toStart(QTextBoundaryFinder* theWrappedObject);
   void setPosition(QTextBoundaryFinder* theWrappedObject, int  position);
};





class PythonQtShell_QTextCodec : public QTextCodec
{
public:
    PythonQtShell_QTextCodec():QTextCodec(),_wrapper(NULL) {};

virtual QList<QByteArray >  aliases() const;
virtual QString  convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const;
virtual QByteArray  name() const;
virtual int  mibEnum() const;
virtual QByteArray  convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextCodec : public QTextCodec
{ public:
inline QList<QByteArray >  promoted_aliases() const { return QTextCodec::aliases(); }
};

class PythonQtWrapper_QTextCodec : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ConversionFlag )
Q_FLAGS(ConversionFlags )
enum ConversionFlag{
  DefaultConversion = QTextCodec::DefaultConversion,   ConvertInvalidToNull = QTextCodec::ConvertInvalidToNull,   IgnoreHeader = QTextCodec::IgnoreHeader};
Q_DECLARE_FLAGS(ConversionFlags, ConversionFlag)
public slots:
   bool  canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const;
   QList<QByteArray >  aliases(QTextCodec* theWrappedObject) const;
   QString  toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const;
   QList<int >  static_QTextCodec_availableMibs();
   QTextCodec*  static_QTextCodec_codecForCStrings();
   QList<QByteArray >  static_QTextCodec_availableCodecs();
   QTextCodec*  static_QTextCodec_codecForLocale();
   QTextCodec*  static_QTextCodec_codecForMib(int  mib);
   QTextDecoder*  makeDecoder(QTextCodec* theWrappedObject) const;
   QTextEncoder*  makeEncoder(QTextCodec* theWrappedObject) const;
   QByteArray  fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const;
   bool  canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const;
   void static_QTextCodec_setCodecForCStrings(QTextCodec*  c);
   QTextCodec*  static_QTextCodec_codecForName(const QByteArray&  name);
   QTextCodec*  static_QTextCodec_codecForName(const char*  name);
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec);
   void static_QTextCodec_setCodecForTr(QTextCodec*  c);
   void static_QTextCodec_setCodecForLocale(QTextCodec*  c);
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba);
};





class PythonQtShell_QTextCodecPlugin : public QTextCodecPlugin
{
public:
    PythonQtShell_QTextCodecPlugin(QObject*  parent = 0):QTextCodecPlugin(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual QList<QByteArray >  names() const;
virtual QList<int >  mibEnums() const;
virtual QList<QByteArray >  aliases() const;
virtual QTextCodec*  createForName(const QByteArray&  name);
virtual QTextCodec*  createForMib(int  mib);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextCodecPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QTextCodecPlugin* new_QTextCodecPlugin(QObject*  parent = 0);
void delete_QTextCodecPlugin(QTextCodecPlugin* obj) { delete obj; } 
};





class PythonQtWrapper_QTextDecoder : public QObject
{ Q_OBJECT
public:
public slots:
QTextDecoder* new_QTextDecoder(const QTextCodec*  codec);
void delete_QTextDecoder(QTextDecoder* obj) { delete obj; } 
   QString  toUnicode(QTextDecoder* theWrappedObject, const QByteArray&  ba);
   bool  hasFailure(QTextDecoder* theWrappedObject) const;
};





class PythonQtWrapper_QTextEncoder : public QObject
{ Q_OBJECT
public:
public slots:
QTextEncoder* new_QTextEncoder(const QTextCodec*  codec);
void delete_QTextEncoder(QTextEncoder* obj) { delete obj; } 
   QByteArray  fromUnicode(QTextEncoder* theWrappedObject, const QString&  str);
};





class PythonQtShell_QTextStream : public QTextStream
{
public:
    PythonQtShell_QTextStream():QTextStream(),_wrapper(NULL) {};
    PythonQtShell_QTextStream(QIODevice*  device):QTextStream(device),_wrapper(NULL) {};
    PythonQtShell_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly):QTextStream(array, openMode),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RealNumberNotation NumberFlag FieldAlignment Status )
Q_FLAGS(NumberFlags )
enum RealNumberNotation{
  SmartNotation = QTextStream::SmartNotation,   FixedNotation = QTextStream::FixedNotation,   ScientificNotation = QTextStream::ScientificNotation};
enum NumberFlag{
  ShowBase = QTextStream::ShowBase,   ForcePoint = QTextStream::ForcePoint,   ForceSign = QTextStream::ForceSign,   UppercaseBase = QTextStream::UppercaseBase,   UppercaseDigits = QTextStream::UppercaseDigits};
enum FieldAlignment{
  AlignLeft = QTextStream::AlignLeft,   AlignRight = QTextStream::AlignRight,   AlignCenter = QTextStream::AlignCenter,   AlignAccountingStyle = QTextStream::AlignAccountingStyle};
enum Status{
  Ok = QTextStream::Ok,   ReadPastEnd = QTextStream::ReadPastEnd,   ReadCorruptData = QTextStream::ReadCorruptData};
Q_DECLARE_FLAGS(NumberFlags, NumberFlag)
public slots:
QTextStream* new_QTextStream();
QTextStream* new_QTextStream(QIODevice*  device);
QTextStream* new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly);
void delete_QTextStream(QTextStream* obj) { delete obj; } 
   QTextStream*  writeByte(QTextStream* theWrappedObject, char  ch);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   int  integerBase(QTextStream* theWrappedObject) const;
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   int  fieldWidth(QTextStream* theWrappedObject) const;
   QIODevice*  device(QTextStream* theWrappedObject) const;
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   void skipWhiteSpace(QTextStream* theWrappedObject);
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   void reset(QTextStream* theWrappedObject);
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
   void setCodec(QTextStream* theWrappedObject, const char*  codecName);
   qint64  pos(QTextStream* theWrappedObject) const;
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   void setCodec(QTextStream* theWrappedObject, QTextCodec*  codec);
   void flush(QTextStream* theWrappedObject);
   QTextCodec*  codec(QTextStream* theWrappedObject) const;
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   QString  readAll(QTextStream* theWrappedObject);
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   QTextStream*  readShort(QTextStream* theWrappedObject, signed short&  i);
   QTextStream*  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   QTextStream*  readUShort(QTextStream* theWrappedObject, unsigned short&  i);
   QTextStream*  writeDouble(QTextStream* theWrappedObject, double  f);
   QChar  padChar(QTextStream* theWrappedObject) const;
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   void resetStatus(QTextStream* theWrappedObject);
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   QTextStream*  writeString(QTextStream* theWrappedObject, const QString&  s);
   QTextStream*  writeByteArray(QTextStream* theWrappedObject, const QByteArray&  array);
   QTextStream*  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextStream*  writeInt(QTextStream* theWrappedObject, signed int  i);
   QTextStream*  writeShort(QTextStream* theWrappedObject, signed short  i);
   QTextStream*  readByte(QTextStream* theWrappedObject, char&  ch);
   QTextStream*  writeBoolean(QTextStream* theWrappedObject, QBool  b);
   QTextStream*  readDouble(QTextStream* theWrappedObject, double&  f);
   QTextStream*  readFloat(QTextStream* theWrappedObject, float&  f);
   bool  atEnd(QTextStream* theWrappedObject) const;
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   QTextStream*  readInt(QTextStream* theWrappedObject, signed int&  i);
   QTextStream*  readUInt(QTextStream* theWrappedObject, unsigned int&  i);
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
};





class PythonQtShell_QThreadPool : public QThreadPool
{
public:
    PythonQtShell_QThreadPool(QObject*  parent = 0):QThreadPool(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QThreadPool : public QObject
{ Q_OBJECT
public:
public slots:
QThreadPool* new_QThreadPool(QObject*  parent = 0);
void delete_QThreadPool(QThreadPool* obj) { delete obj; } 
   void waitForDone(QThreadPool* theWrappedObject);
   void setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount);
   QThreadPool*  static_QThreadPool_globalInstance();
   bool  tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable);
   int  activeThreadCount(QThreadPool* theWrappedObject) const;
   void releaseThread(QThreadPool* theWrappedObject);
   int  maxThreadCount(QThreadPool* theWrappedObject) const;
   void start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority = 0);
   void reserveThread(QThreadPool* theWrappedObject);
   void setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout);
   int  expiryTimeout(QThreadPool* theWrappedObject) const;
};





class PythonQtShell_QTimeLine : public QTimeLine
{
public:
    PythonQtShell_QTimeLine(int  duration = 1000, QObject*  parent = 0):QTimeLine(duration, parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  event);
virtual qreal  valueForTime(int  msec) const;
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTimeLine : public QTimeLine
{ public:
inline void promoted_timerEvent(QTimerEvent*  event) { QTimeLine::timerEvent(event); }
inline qreal  promoted_valueForTime(int  msec) const { return QTimeLine::valueForTime(msec); }
};

class PythonQtWrapper_QTimeLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction CurveShape State )
enum Direction{
  Forward = QTimeLine::Forward,   Backward = QTimeLine::Backward};
enum CurveShape{
  EaseInCurve = QTimeLine::EaseInCurve,   EaseOutCurve = QTimeLine::EaseOutCurve,   EaseInOutCurve = QTimeLine::EaseInOutCurve,   LinearCurve = QTimeLine::LinearCurve,   SineCurve = QTimeLine::SineCurve,   CosineCurve = QTimeLine::CosineCurve};
enum State{
  NotRunning = QTimeLine::NotRunning,   Paused = QTimeLine::Paused,   Running = QTimeLine::Running};
public slots:
QTimeLine* new_QTimeLine(int  duration = 1000, QObject*  parent = 0);
void delete_QTimeLine(QTimeLine* obj) { delete obj; } 
   int  loopCount(QTimeLine* theWrappedObject) const;
   int  frameForTime(QTimeLine* theWrappedObject, int  msec) const;
   void setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction);
   QTimeLine::CurveShape  curveShape(QTimeLine* theWrappedObject) const;
   void setDuration(QTimeLine* theWrappedObject, int  duration);
   int  duration(QTimeLine* theWrappedObject) const;
   void timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event);
   void setLoopCount(QTimeLine* theWrappedObject, int  count);
   int  endFrame(QTimeLine* theWrappedObject) const;
   void setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame);
   qreal  valueForTime(QTimeLine* theWrappedObject, int  msec) const;
   void setCurveShape(QTimeLine* theWrappedObject, QTimeLine::CurveShape  shape);
   qreal  currentValue(QTimeLine* theWrappedObject) const;
   QTimeLine::State  state(QTimeLine* theWrappedObject) const;
   void setStartFrame(QTimeLine* theWrappedObject, int  frame);
   int  updateInterval(QTimeLine* theWrappedObject) const;
   void setUpdateInterval(QTimeLine* theWrappedObject, int  interval);
   int  currentTime(QTimeLine* theWrappedObject) const;
   void setEndFrame(QTimeLine* theWrappedObject, int  frame);
   int  currentFrame(QTimeLine* theWrappedObject) const;
   QTimeLine::Direction  direction(QTimeLine* theWrappedObject) const;
   int  startFrame(QTimeLine* theWrappedObject) const;
};





class PythonQtShell_QTimer : public QTimer
{
public:
    PythonQtShell_QTimer(QObject*  parent = 0):QTimer(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTimer : public QTimer
{ public:
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QTimer::timerEvent(arg__1); }
};

class PythonQtWrapper_QTimer : public QObject
{ Q_OBJECT
public:
public slots:
QTimer* new_QTimer(QObject*  parent = 0);
void delete_QTimer(QTimer* obj) { delete obj; } 
   int  timerId(QTimer* theWrappedObject) const;
   void setSingleShot(QTimer* theWrappedObject, bool  singleShot);
   bool  isActive(QTimer* theWrappedObject) const;
   bool  isSingleShot(QTimer* theWrappedObject) const;
   void setInterval(QTimer* theWrappedObject, int  msec);
   void timerEvent(QTimer* theWrappedObject, QTimerEvent*  arg__1);
   int  interval(QTimer* theWrappedObject) const;
   void static_QTimer_singleShot(int  msec, QObject*  receiver, const char*  member);
};





class PythonQtShell_QTimerEvent : public QTimerEvent
{
public:
    PythonQtShell_QTimerEvent(int  timerId):QTimerEvent(timerId),_wrapper(NULL) {};


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
    PythonQtShell_QTranslator(QObject*  parent = 0):QTranslator(parent),_wrapper(NULL) {};

virtual bool  isEmpty() const;
virtual QString  translate(const char*  context, const char*  sourceText, const char*  comment = 0) const;
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTranslator : public QTranslator
{ public:
inline bool  promoted_isEmpty() const { return QTranslator::isEmpty(); }
inline QString  promoted_translate(const char*  context, const char*  sourceText, const char*  comment = 0) const { return QTranslator::translate(context, sourceText, comment); }
};

class PythonQtWrapper_QTranslator : public QObject
{ Q_OBJECT
public:
public slots:
QTranslator* new_QTranslator(QObject*  parent = 0);
void delete_QTranslator(QTranslator* obj) { delete obj; } 
   bool  isEmpty(QTranslator* theWrappedObject) const;
   QString  translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  comment = 0) const;
   bool  load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory = QString(), const QString&  search_delimiters = QString(), const QString&  suffix = QString());
   bool  load(QTranslator* theWrappedObject, const uchar*  data, int  len);
};





class PythonQtShell_QUuid : public QUuid
{
public:
    PythonQtShell_QUuid():QUuid(),_wrapper(NULL) {};
    PythonQtShell_QUuid(const QString&  arg__1):QUuid(arg__1),_wrapper(NULL) {};
    PythonQtShell_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8):QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUuid : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Variant Version )
enum Variant{
  VarUnknown = QUuid::VarUnknown,   NCS = QUuid::NCS,   DCE = QUuid::DCE,   Microsoft = QUuid::Microsoft,   Reserved = QUuid::Reserved};
enum Version{
  VerUnknown = QUuid::VerUnknown,   Time = QUuid::Time,   EmbeddedPOSIX = QUuid::EmbeddedPOSIX,   Name = QUuid::Name,   Random = QUuid::Random};
public slots:
QUuid* new_QUuid();
QUuid* new_QUuid(const QString&  arg__1);
QUuid* new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8);
QUuid* new_QUuid(const QUuid& other) {
PythonQtShell_QUuid* a = new PythonQtShell_QUuid();
*((QUuid*)a) = other;
return a; }
void delete_QUuid(QUuid* obj) { delete obj; } 
   QUuid  static_QUuid_createUuid();
   QUuid::Version  version(QUuid* theWrappedObject) const;
   bool  operator_less(QUuid* theWrappedObject, const QUuid&  other) const;
   QString  toString(QUuid* theWrappedObject) const;
   bool  operator_equal(QUuid* theWrappedObject, const QUuid&  orig) const;
   QUuid::Variant  variant(QUuid* theWrappedObject) const;
   bool  isNull(QUuid* theWrappedObject) const;
   void writeTo(QUuid* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QUuid* theWrappedObject, QDataStream&  arg__1);
};





class PythonQtWrapper_QWaitCondition : public QObject
{ Q_OBJECT
public:
public slots:
QWaitCondition* new_QWaitCondition();
void delete_QWaitCondition(QWaitCondition* obj) { delete obj; } 
   void wakeAll(QWaitCondition* theWrappedObject);
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  readWriteLock, unsigned long  time = 0xffffffffUL);
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  mutex, unsigned long  time = 0xffffffffUL);
   void wakeOne(QWaitCondition* theWrappedObject);
};





class PythonQtWrapper_QXmlStreamAttribute : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamAttribute* new_QXmlStreamAttribute();
QXmlStreamAttribute* new_QXmlStreamAttribute(const QString&  namespaceUri, const QString&  name, const QString&  value);
QXmlStreamAttribute* new_QXmlStreamAttribute(const QString&  qualifiedName, const QString&  value);
QXmlStreamAttribute* new_QXmlStreamAttribute(const QXmlStreamAttribute&  arg__1);
void delete_QXmlStreamAttribute(QXmlStreamAttribute* obj) { delete obj; } 
   QStringRef  prefix(QXmlStreamAttribute* theWrappedObject) const;
   QStringRef  qualifiedName(QXmlStreamAttribute* theWrappedObject) const;
   bool  isDefault(QXmlStreamAttribute* theWrappedObject) const;
   QStringRef  namespaceUri(QXmlStreamAttribute* theWrappedObject) const;
   QStringRef  value(QXmlStreamAttribute* theWrappedObject) const;
   bool  operator_equal(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  other) const;
   QStringRef  name(QXmlStreamAttribute* theWrappedObject) const;
};





class PythonQtShell_QXmlStreamAttributes : public QXmlStreamAttributes
{
public:
    PythonQtShell_QXmlStreamAttributes():QXmlStreamAttributes(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlStreamAttributes : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamAttributes* new_QXmlStreamAttributes();
QXmlStreamAttributes* new_QXmlStreamAttributes(const QXmlStreamAttributes& other) {
PythonQtShell_QXmlStreamAttributes* a = new PythonQtShell_QXmlStreamAttributes();
*((QXmlStreamAttributes*)a) = other;
return a; }
void delete_QXmlStreamAttributes(QXmlStreamAttributes* obj) { delete obj; } 
   QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
   void append(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  attribute);
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void resize(QXmlStreamAttributes* theWrappedObject, int  size);
   void prepend(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t);
   QVector<QXmlStreamAttribute >  mid(QXmlStreamAttributes* theWrappedObject, int  pos, int  length) const;
   const QXmlStreamAttribute*  last(QXmlStreamAttributes* theWrappedObject) const;
   QVector<QXmlStreamAttribute >  static_QXmlStreamAttributes_fromList(const QList<QXmlStreamAttribute >&  list);
   bool  contains(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   void clear(QXmlStreamAttributes* theWrappedObject);
   bool  empty(QXmlStreamAttributes* theWrappedObject) const;
   const QXmlStreamAttribute*  at(QXmlStreamAttributes* theWrappedObject, int  i) const;
   int  lastIndexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const;
   int  capacity(QXmlStreamAttributes* theWrappedObject) const;
   int  count(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   int  count(QXmlStreamAttributes* theWrappedObject) const;
   QVector<QXmlStreamAttribute >*  fill(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  size);
   const QXmlStreamAttribute*  first(QXmlStreamAttributes* theWrappedObject) const;
   int  indexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const;
   bool  isEmpty(QXmlStreamAttributes* theWrappedObject) const;
   bool  operator_equal(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const;
   void setSharable(QXmlStreamAttributes* theWrappedObject, bool  sharable);
   void remove(QXmlStreamAttributes* theWrappedObject, int  i);
   void remove(QXmlStreamAttributes* theWrappedObject, int  i, int  n);
   void replace(QXmlStreamAttributes* theWrappedObject, int  i, const QXmlStreamAttribute&  t);
   void reserve(QXmlStreamAttributes* theWrappedObject, int  size);
   QList<QXmlStreamAttribute >  toList(QXmlStreamAttributes* theWrappedObject) const;
   void squeeze(QXmlStreamAttributes* theWrappedObject);
   int  size(QXmlStreamAttributes* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamEntityDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityDeclaration* new_QXmlStreamEntityDeclaration();
QXmlStreamEntityDeclaration* new_QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration&  arg__1);
void delete_QXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration* obj) { delete obj; } 
   QStringRef  publicId(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QStringRef  notationName(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QStringRef  value(QXmlStreamEntityDeclaration* theWrappedObject) const;
   bool  operator_equal(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  other) const;
   QStringRef  name(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QStringRef  systemId(QXmlStreamEntityDeclaration* theWrappedObject) const;
};





class PythonQtShell_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{
public:
    PythonQtShell_QXmlStreamEntityResolver():QXmlStreamEntityResolver(),_wrapper(NULL) {};

virtual QString  resolveEntity(const QString&  publicId, const QString&  systemId);
virtual QString  resolveUndeclaredEntity(const QString&  name);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{ public:
inline QString  promoted_resolveEntity(const QString&  publicId, const QString&  systemId) { return QXmlStreamEntityResolver::resolveEntity(publicId, systemId); }
inline QString  promoted_resolveUndeclaredEntity(const QString&  name) { return QXmlStreamEntityResolver::resolveUndeclaredEntity(name); }
};

class PythonQtWrapper_QXmlStreamEntityResolver : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityResolver* new_QXmlStreamEntityResolver();
void delete_QXmlStreamEntityResolver(QXmlStreamEntityResolver* obj) { delete obj; } 
   QString  resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId);
   QString  resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name);
};





class PythonQtWrapper_QXmlStreamNamespaceDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration();
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration(const QString&  prefix, const QString&  namespaceUri);
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration&  arg__1);
void delete_QXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration* obj) { delete obj; } 
   QStringRef  prefix(QXmlStreamNamespaceDeclaration* theWrappedObject) const;
   QStringRef  namespaceUri(QXmlStreamNamespaceDeclaration* theWrappedObject) const;
   bool  operator_equal(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  other) const;
};





class PythonQtWrapper_QXmlStreamNotationDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamNotationDeclaration* new_QXmlStreamNotationDeclaration();
QXmlStreamNotationDeclaration* new_QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration&  arg__1);
void delete_QXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration* obj) { delete obj; } 
   QStringRef  publicId(QXmlStreamNotationDeclaration* theWrappedObject) const;
   bool  operator_equal(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  other) const;
   QStringRef  name(QXmlStreamNotationDeclaration* theWrappedObject) const;
   QStringRef  systemId(QXmlStreamNotationDeclaration* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error TokenType )
enum Error{
  NoError = QXmlStreamReader::NoError,   UnexpectedElementError = QXmlStreamReader::UnexpectedElementError,   CustomError = QXmlStreamReader::CustomError,   NotWellFormedError = QXmlStreamReader::NotWellFormedError,   PrematureEndOfDocumentError = QXmlStreamReader::PrematureEndOfDocumentError};
enum TokenType{
  NoToken = QXmlStreamReader::NoToken,   Invalid = QXmlStreamReader::Invalid,   StartDocument = QXmlStreamReader::StartDocument,   EndDocument = QXmlStreamReader::EndDocument,   StartElement = QXmlStreamReader::StartElement,   EndElement = QXmlStreamReader::EndElement,   Characters = QXmlStreamReader::Characters,   Comment = QXmlStreamReader::Comment,   DTD = QXmlStreamReader::DTD,   EntityReference = QXmlStreamReader::EntityReference,   ProcessingInstruction = QXmlStreamReader::ProcessingInstruction};
public slots:
QXmlStreamReader* new_QXmlStreamReader();
QXmlStreamReader* new_QXmlStreamReader(QIODevice*  device);
QXmlStreamReader* new_QXmlStreamReader(const QByteArray&  data);
QXmlStreamReader* new_QXmlStreamReader(const QString&  data);
void delete_QXmlStreamReader(QXmlStreamReader* obj) { delete obj; } 
   QXmlStreamReader::Error  error(QXmlStreamReader* theWrappedObject) const;
   qint64  characterOffset(QXmlStreamReader* theWrappedObject) const;
   void setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1);
   bool  isCDATA(QXmlStreamReader* theWrappedObject) const;
   qint64  lineNumber(QXmlStreamReader* theWrappedObject) const;
   void setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver);
   void addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions);
   bool  hasError(QXmlStreamReader* theWrappedObject) const;
   QIODevice*  device(QXmlStreamReader* theWrappedObject) const;
   void clear(QXmlStreamReader* theWrappedObject);
   qint64  columnNumber(QXmlStreamReader* theWrappedObject) const;
   bool  isDTD(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::TokenType  readNext(QXmlStreamReader* theWrappedObject);
   QStringRef  namespaceUri(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamNamespaceDeclaration >  namespaceDeclarations(QXmlStreamReader* theWrappedObject) const;
   bool  isStandaloneDocument(QXmlStreamReader* theWrappedObject) const;
   QStringRef  dtdName(QXmlStreamReader* theWrappedObject) const;
   bool  isComment(QXmlStreamReader* theWrappedObject) const;
   QString  tokenString(QXmlStreamReader* theWrappedObject) const;
   QString  readElementText(QXmlStreamReader* theWrappedObject);
   QStringRef  dtdPublicId(QXmlStreamReader* theWrappedObject) const;
   QStringRef  processingInstructionData(QXmlStreamReader* theWrappedObject) const;
   bool  isEndDocument(QXmlStreamReader* theWrappedObject) const;
   QStringRef  processingInstructionTarget(QXmlStreamReader* theWrappedObject) const;
   QStringRef  qualifiedName(QXmlStreamReader* theWrappedObject) const;
   bool  atEnd(QXmlStreamReader* theWrappedObject) const;
   QString  errorString(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamEntityResolver*  entityResolver(QXmlStreamReader* theWrappedObject) const;
   bool  isStartDocument(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamEntityDeclaration >  entityDeclarations(QXmlStreamReader* theWrappedObject) const;
   bool  isEntityReference(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::TokenType  tokenType(QXmlStreamReader* theWrappedObject) const;
   QStringRef  documentVersion(QXmlStreamReader* theWrappedObject) const;
   QStringRef  prefix(QXmlStreamReader* theWrappedObject) const;
   bool  isProcessingInstruction(QXmlStreamReader* theWrappedObject) const;
   void addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction);
   bool  isWhitespace(QXmlStreamReader* theWrappedObject) const;
   bool  isStartElement(QXmlStreamReader* theWrappedObject) const;
   QStringRef  documentEncoding(QXmlStreamReader* theWrappedObject) const;
   QStringRef  dtdSystemId(QXmlStreamReader* theWrappedObject) const;
   void raiseError(QXmlStreamReader* theWrappedObject, const QString&  message = QString());
   bool  namespaceProcessing(QXmlStreamReader* theWrappedObject) const;
   bool  isCharacters(QXmlStreamReader* theWrappedObject) const;
   void addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data);
   void setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device);
   QStringRef  text(QXmlStreamReader* theWrappedObject) const;
   void addData(QXmlStreamReader* theWrappedObject, const QString&  data);
   bool  isEndElement(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamAttributes  attributes(QXmlStreamReader* theWrappedObject) const;
   QStringRef  name(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamNotationDeclaration >  notationDeclarations(QXmlStreamReader* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamWriter : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamWriter* new_QXmlStreamWriter();
QXmlStreamWriter* new_QXmlStreamWriter(QByteArray*  array);
QXmlStreamWriter* new_QXmlStreamWriter(QIODevice*  device);
void delete_QXmlStreamWriter(QXmlStreamWriter* obj) { delete obj; } 
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute);
   void setCodec(QXmlStreamWriter* theWrappedObject, const char*  codecName);
   int  autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const;
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject);
   void setCodec(QXmlStreamWriter* theWrappedObject, QTextCodec*  codec);
   QIODevice*  device(QXmlStreamWriter* theWrappedObject) const;
   void writeEndDocument(QXmlStreamWriter* theWrappedObject);
   void writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name);
   void writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri);
   QTextCodec*  codec(QXmlStreamWriter* theWrappedObject) const;
   void writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text);
   bool  autoFormatting(QXmlStreamWriter* theWrappedObject) const;
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd);
   void writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text);
   void setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spaces);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text);
   void writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix = QString());
   void setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1);
   void writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeEndElement(QXmlStreamWriter* theWrappedObject);
   void writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data = QString());
   void writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device);
};





class PythonQtWrapper_QtConcurrent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ReduceOption ThreadFunctionResult )
Q_FLAGS(ReduceOptions )
enum ReduceOption{
  UnorderedReduce = QtConcurrent::UnorderedReduce,   OrderedReduce = QtConcurrent::OrderedReduce,   SequentialReduce = QtConcurrent::SequentialReduce};
enum ThreadFunctionResult{
  ThrottleThread = QtConcurrent::ThrottleThread,   ThreadFinished = QtConcurrent::ThreadFinished};
Q_DECLARE_FLAGS(ReduceOptions, ReduceOption)
public slots:
};


