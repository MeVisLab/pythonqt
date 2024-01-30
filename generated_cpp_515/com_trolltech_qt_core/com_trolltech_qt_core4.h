#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcborcommon.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdeadlinetimer.h>
#include <qeasingcurve.h>
#include <qlist.h>
#include <qlocale.h>
#include <qlogging.h>
#include <qmetaobject.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qreadwritelock.h>
#include <qstringlist.h>
#include <qthread.h>
#include <qtimer.h>
#include <qtranslator.h>
#include <qurl.h>
#include <qurlquery.h>
#include <quuid.h>
#include <qvariantanimation.h>
#include <qvector.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>



class PythonQtShell_QTimer : public QTimer
{
public:
    PythonQtShell_QTimer(QObject*  parent = nullptr):QTimer(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTimer() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
QTimer* new_QTimer(QObject*  parent = nullptr);
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
    PythonQtShell_QTimerEvent(int  timerId):QTimerEvent(timerId),_wrapper(nullptr) {};

   ~PythonQtShell_QTimerEvent() override;


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
    PythonQtShell_QTranslator(QObject*  parent = nullptr):QTranslator(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTranslator() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  isEmpty() const override;
void timerEvent(QTimerEvent*  event) override;
QString  translate(const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTranslator : public QTranslator
{ public:
inline bool  py_q_isEmpty() const { return QTranslator::isEmpty(); }
inline QString  py_q_translate(const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const { return QTranslator::translate(context, sourceText, disambiguation, n); }
};

class PythonQtWrapper_QTranslator : public QObject
{ Q_OBJECT
public:
public slots:
QTranslator* new_QTranslator(QObject*  parent = nullptr);
void delete_QTranslator(QTranslator* obj) { delete obj; }
   QString  filePath(QTranslator* theWrappedObject) const;
   bool  isEmpty(QTranslator* theWrappedObject) const;
   bool  py_q_isEmpty(QTranslator* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->py_q_isEmpty());}
   QString  language(QTranslator* theWrappedObject) const;
   bool  load(QTranslator* theWrappedObject, const QLocale&  locale, const QString&  filename, const QString&  prefix = QString(), const QString&  directory = QString(), const QString&  suffix = QString());
   bool  load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory = QString(), const QString&  search_delimiters = QString(), const QString&  suffix = QString());
   bool  load(QTranslator* theWrappedObject, const uchar*  data, int  len, const QString&  directory = QString());
   QString  translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const;
   QString  py_q_translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1) const{  return (((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->py_q_translate(context, sourceText, disambiguation, n));}
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
    PythonQtShell_QUuid():QUuid(),_wrapper(nullptr) {};
    PythonQtShell_QUuid(const QByteArray&  arg__1):QUuid(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QUuid(const QString&  arg__1):QUuid(arg__1),_wrapper(nullptr) {};
    PythonQtShell_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8):QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8),_wrapper(nullptr) {};

   ~PythonQtShell_QUuid();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QUuid : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StringFormat Variant Version )
enum StringFormat{
  WithBraces = QUuid::WithBraces,   WithoutBraces = QUuid::WithoutBraces,   Id128 = QUuid::Id128};
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
   QUuid  static_QUuid_fromString(QLatin1String  string);
   QUuid  static_QUuid_fromString(QStringView  string);
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
   QByteArray  toByteArray(QUuid* theWrappedObject, QUuid::StringFormat  mode) const;
   QByteArray  toRfc4122(QUuid* theWrappedObject) const;
   QString  toString(QUuid* theWrappedObject) const;
   QString  toString(QUuid* theWrappedObject, QUuid::StringFormat  mode) const;
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
    PythonQtShell_QVariantAnimation(QObject*  parent = nullptr):QVariantAnimation(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVariantAnimation() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
int  duration() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const override;
void timerEvent(QTimerEvent*  event) override;
void updateCurrentTime(int  arg__1) override;
void updateCurrentValue(const QVariant&  value) override;
void updateDirection(QAbstractAnimation::Direction  direction) override;
void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
QVariantAnimation* new_QVariantAnimation(QObject*  parent = nullptr);
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
   void notify_all(QWaitCondition* theWrappedObject);
   void notify_one(QWaitCondition* theWrappedObject);
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time);
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, QDeadlineTimer  deadline = QDeadlineTimer(QDeadlineTimer::Forever));
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time);
   void wakeAll(QWaitCondition* theWrappedObject);
   void wakeOne(QWaitCondition* theWrappedObject);
};





class PythonQtWrapper_QWriteLocker : public QObject
{ Q_OBJECT
public:
public slots:
QWriteLocker* new_QWriteLocker(QReadWriteLock*  readWriteLock);
void delete_QWriteLocker(QWriteLocker* obj) { delete obj; }
   QReadWriteLock*  readWriteLock(QWriteLocker* theWrappedObject) const;
   void relock(QWriteLocker* theWrappedObject);
   void unlock(QWriteLocker* theWrappedObject);

    void __enter__(QWriteLocker* /*self*/) {}
    void __exit__(QWriteLocker* self, PyObject* /*type*/, PyObject* /*value*/, PyObject* /*traceback*/) { self->unlock(); }
    
};





class PythonQtShell_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{
public:
    PythonQtShell_QXmlStreamEntityResolver():QXmlStreamEntityResolver(),_wrapper(nullptr) {};

   ~PythonQtShell_QXmlStreamEntityResolver() override;

QString  resolveEntity(const QString&  publicId, const QString&  systemId) override;
QString  resolveUndeclaredEntity(const QString&  name) override;

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





class PythonQtWrapper_QtCore : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QCborKnownTags QCborSimpleType QCborTag QtMsgType )
enum class QCborKnownTags{
  DateTimeString = static_cast<int>(::QCborKnownTags::DateTimeString),   UnixTime_t = static_cast<int>(::QCborKnownTags::UnixTime_t),   PositiveBignum = static_cast<int>(::QCborKnownTags::PositiveBignum),   NegativeBignum = static_cast<int>(::QCborKnownTags::NegativeBignum),   Decimal = static_cast<int>(::QCborKnownTags::Decimal),   Bigfloat = static_cast<int>(::QCborKnownTags::Bigfloat),   COSE_Encrypt0 = static_cast<int>(::QCborKnownTags::COSE_Encrypt0),   COSE_Mac0 = static_cast<int>(::QCborKnownTags::COSE_Mac0),   COSE_Sign1 = static_cast<int>(::QCborKnownTags::COSE_Sign1),   ExpectedBase64url = static_cast<int>(::QCborKnownTags::ExpectedBase64url),   ExpectedBase64 = static_cast<int>(::QCborKnownTags::ExpectedBase64),   ExpectedBase16 = static_cast<int>(::QCborKnownTags::ExpectedBase16),   EncodedCbor = static_cast<int>(::QCborKnownTags::EncodedCbor),   Url = static_cast<int>(::QCborKnownTags::Url),   Base64url = static_cast<int>(::QCborKnownTags::Base64url),   Base64 = static_cast<int>(::QCborKnownTags::Base64),   RegularExpression = static_cast<int>(::QCborKnownTags::RegularExpression),   MimeMessage = static_cast<int>(::QCborKnownTags::MimeMessage),   Uuid = static_cast<int>(::QCborKnownTags::Uuid),   COSE_Encrypt = static_cast<int>(::QCborKnownTags::COSE_Encrypt),   COSE_Mac = static_cast<int>(::QCborKnownTags::COSE_Mac),   COSE_Sign = static_cast<int>(::QCborKnownTags::COSE_Sign),   Signature = static_cast<int>(::QCborKnownTags::Signature)};
enum class QCborSimpleType{
  False = static_cast<int>(::QCborSimpleType::False),   True = static_cast<int>(::QCborSimpleType::True),   Null = static_cast<int>(::QCborSimpleType::Null),   Undefined = static_cast<int>(::QCborSimpleType::Undefined)};
enum class QCborTag{
};
enum QtMsgType{
  QtDebugMsg = ::QtDebugMsg,   QtWarningMsg = ::QtWarningMsg,   QtCriticalMsg = ::QtCriticalMsg,   QtFatalMsg = ::QtFatalMsg,   QtInfoMsg = ::QtInfoMsg,   QtSystemMsg = ::QtSystemMsg};
public slots:
};


