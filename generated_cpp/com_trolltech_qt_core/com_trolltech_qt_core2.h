#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qeasingcurve.h>
#include <qlist.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qreadwritelock.h>
#include <qtconcurrentexception.h>
#include <qtconcurrentreducekernel.h>
#include <qtconcurrentthreadengine.h>
#include <qtimer.h>
#include <qtranslator.h>
#include <quuid.h>
#include <qvariantanimation.h>
#include <qvector.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>



class PythonQtShell_QTimer : public QTimer
{
public:
    PythonQtShell_QTimer(QObject*  parent = 0):QTimer(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

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
   void timerEvent(QTimer* theWrappedObject, QTimerEvent*  arg__1);
   int  timerId(QTimer* theWrappedObject) const;
   void setSingleShot(QTimer* theWrappedObject, bool  singleShot);
   bool  isActive(QTimer* theWrappedObject) const;
   bool  isSingleShot(QTimer* theWrappedObject) const;
   void setInterval(QTimer* theWrappedObject, int  msec);
   void static_QTimer_singleShot(int  msec, QObject*  receiver, const char*  member);
   int  interval(QTimer* theWrappedObject) const;
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

virtual QString  translate(const char*  context, const char*  sourceText, const char*  disambiguation = 0) const;
virtual bool  isEmpty() const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTranslator : public QTranslator
{ public:
inline QString  promoted_translate(const char*  context, const char*  sourceText, const char*  disambiguation = 0) const { return QTranslator::translate(context, sourceText, disambiguation); }
inline bool  promoted_isEmpty() const { return QTranslator::isEmpty(); }
};

class PythonQtWrapper_QTranslator : public QObject
{ Q_OBJECT
public:
public slots:
QTranslator* new_QTranslator(QObject*  parent = 0);
void delete_QTranslator(QTranslator* obj) { delete obj; } 
   bool  load(QTranslator* theWrappedObject, const uchar*  data, int  len);
   bool  load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory = QString(), const QString&  search_delimiters = QString(), const QString&  suffix = QString());
   QString  translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation = 0) const;
   bool  isEmpty(QTranslator* theWrappedObject) const;
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
   QString  toString(QUuid* theWrappedObject) const;
   bool  __gt__(QUuid* theWrappedObject, const QUuid&  other) const;
   bool  __ne__(QUuid* theWrappedObject, const QUuid&  orig) const;
   bool  __lt__(QUuid* theWrappedObject, const QUuid&  other) const;
   QUuid::Version  version(QUuid* theWrappedObject) const;
   QUuid  static_QUuid_createUuid();
   bool  __eq__(QUuid* theWrappedObject, const QUuid&  orig) const;
   bool  isNull(QUuid* theWrappedObject) const;
   QUuid::Variant  variant(QUuid* theWrappedObject) const;
   void writeTo(QUuid* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QUuid* theWrappedObject, QDataStream&  arg__1);
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

virtual bool  event(QEvent*  event);
virtual void updateCurrentValue(const QVariant&  value);
virtual int  duration() const;
virtual void updateCurrentTime(int  arg__1);
virtual QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const;
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVariantAnimation : public QVariantAnimation
{ public:
inline bool  promoted_event(QEvent*  event) { return QVariantAnimation::event(event); }
inline int  promoted_duration() const { return QVariantAnimation::duration(); }
inline void promoted_updateCurrentTime(int  arg__1) { QVariantAnimation::updateCurrentTime(arg__1); }
inline QVariant  promoted_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return QVariantAnimation::interpolated(from, to, progress); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QVariantAnimation::updateState(newState, oldState); }
};

class PythonQtWrapper_QVariantAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QVariantAnimation* new_QVariantAnimation(QObject*  parent = 0);
void delete_QVariantAnimation(QVariantAnimation* obj) { delete obj; } 
   QEasingCurve  easingCurve(QVariantAnimation* theWrappedObject) const;
   QVariant  keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const;
   bool  event(QVariantAnimation* theWrappedObject, QEvent*  event);
   QVariant  currentValue(QVariantAnimation* theWrappedObject) const;
   QVariant  startValue(QVariantAnimation* theWrappedObject) const;
   void setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   int  duration(QVariantAnimation* theWrappedObject) const;
   void setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void updateCurrentTime(QVariantAnimation* theWrappedObject, int  arg__1);
   void setDuration(QVariantAnimation* theWrappedObject, int  msecs);
   QVariant  endValue(QVariantAnimation* theWrappedObject) const;
   QVector<QPair<qreal , QVariant >  >  keyValues(QVariantAnimation* theWrappedObject) const;
   void setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing);
   void setKeyValues(QVariantAnimation* theWrappedObject, const QVector<QPair<qreal , QVariant >  >&  values);
   QVariant  interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const;
   void setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value);
   void updateState(QVariantAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
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





class PythonQtShell_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{
public:
    PythonQtShell_QXmlStreamEntityResolver():QXmlStreamEntityResolver(),_wrapper(NULL) {};

virtual QString  resolveUndeclaredEntity(const QString&  name);
virtual QString  resolveEntity(const QString&  publicId, const QString&  systemId);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlStreamEntityResolver : public QXmlStreamEntityResolver
{ public:
inline QString  promoted_resolveUndeclaredEntity(const QString&  name) { return QXmlStreamEntityResolver::resolveUndeclaredEntity(name); }
inline QString  promoted_resolveEntity(const QString&  publicId, const QString&  systemId) { return QXmlStreamEntityResolver::resolveEntity(publicId, systemId); }
};

class PythonQtWrapper_QXmlStreamEntityResolver : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityResolver* new_QXmlStreamEntityResolver();
void delete_QXmlStreamEntityResolver(QXmlStreamEntityResolver* obj) { delete obj; } 
   QString  resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name);
   QString  resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId);
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


