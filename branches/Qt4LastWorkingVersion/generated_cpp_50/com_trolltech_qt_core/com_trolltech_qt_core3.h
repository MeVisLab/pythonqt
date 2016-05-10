#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qeasingcurve.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qreadwritelock.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qurlquery.h>
#include <quuid.h>
#include <qvariantanimation.h>
#include <qvector.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>



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
   bool  __eq__(QUuid* theWrappedObject, const QUuid&  orig) const;
   bool  __gt__(QUuid* theWrappedObject, const QUuid&  other) const;
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
    PythonQtShell_QVariantAnimation(QObject*  parent = 0):QVariantAnimation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVariantAnimation();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  arg__1);
virtual void updateCurrentValue(const QVariant&  value);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVariantAnimation : public QVariantAnimation
{ public:
inline int  promoted_duration() const { return QVariantAnimation::duration(); }
inline bool  promoted_event(QEvent*  event) { return QVariantAnimation::event(event); }
inline QVariant  promoted_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return QVariantAnimation::interpolated(from, to, progress); }
inline void promoted_updateCurrentTime(int  arg__1) { QVariantAnimation::updateCurrentTime(arg__1); }
inline void promoted_updateCurrentValue(const QVariant&  value) { QVariantAnimation::updateCurrentValue(value); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QVariantAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QVariantAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QVariantAnimation* new_QVariantAnimation(QObject*  parent = 0);
void delete_QVariantAnimation(QVariantAnimation* obj) { delete obj; } 
   QVariant  currentValue(QVariantAnimation* theWrappedObject) const;
   int  duration(QVariantAnimation* theWrappedObject) const;
   QEasingCurve  easingCurve(QVariantAnimation* theWrappedObject) const;
   QVariant  endValue(QVariantAnimation* theWrappedObject) const;
   bool  event(QVariantAnimation* theWrappedObject, QEvent*  event);
   QVariant  interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const;
   QVariant  keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const;
   QVector<QPair<qreal , QVariant >  >  keyValues(QVariantAnimation* theWrappedObject) const;
   void setDuration(QVariantAnimation* theWrappedObject, int  msecs);
   void setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing);
   void setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value);
   void setKeyValues(QVariantAnimation* theWrappedObject, const QVector<QPair<qreal , QVariant >  >&  values);
   void setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   QVariant  startValue(QVariantAnimation* theWrappedObject) const;
   void updateCurrentTime(QVariantAnimation* theWrappedObject, int  arg__1);
   void updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void updateState(QVariantAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
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


