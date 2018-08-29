#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include <qabstractvideosurface.h>
#include <qaudio.h>
#include <qaudiobuffer.h>
#include <qaudiodecoder.h>
#include <qaudiodecodercontrol.h>
#include <qaudiodeviceinfo.h>
#include <qaudioencodersettingscontrol.h>
#include <qaudioformat.h>
#include <qaudioinput.h>
#include <qaudioinputselectorcontrol.h>
#include <qaudiooutput.h>
#include <qaudiooutputselectorcontrol.h>
#include <qaudioprobe.h>
#include <qaudiorecorder.h>
#include <qaudiorolecontrol.h>
#include <qaudiosystem.h>
#include <qaudiosystemplugin.h>
#include <qbytearray.h>
#include <qcamera.h>
#include <qcameracapturebufferformatcontrol.h>
#include <qcameracapturedestinationcontrol.h>
#include <qcameracontrol.h>
#include <qcameraexposure.h>
#include <qcameraexposurecontrol.h>
#include <qcamerafeedbackcontrol.h>
#include <qcameraflashcontrol.h>
#include <qcamerafocus.h>
#include <qcameraimageprocessing.h>
#include <qcamerainfo.h>
#include <qcameraviewfindersettings.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qgraphicsvideoitem.h>
#include <qiodevice.h>
#include <qmediaencodersettings.h>
#include <qmediaobject.h>
#include <qmediarecorder.h>
#include <qmediaservice.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpoint.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvideoframe.h>
#include <qvideosurfaceformat.h>
#include <qvideowidget.h>



class PythonQtShell_QAbstractAudioDeviceInfo : public QAbstractAudioDeviceInfo
{
public:
    PythonQtShell_QAbstractAudioDeviceInfo():QAbstractAudioDeviceInfo(),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractAudioDeviceInfo();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QString  deviceName() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isFormatSupported(const QAudioFormat&  format) const;
virtual QAudioFormat  preferredFormat() const;
virtual QList<QAudioFormat::Endian >  supportedByteOrders();
virtual QList<int >  supportedChannelCounts();
virtual QStringList  supportedCodecs();
virtual QList<int >  supportedSampleRates();
virtual QList<int >  supportedSampleSizes();
virtual QList<QAudioFormat::SampleType >  supportedSampleTypes();
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractAudioDeviceInfo : public QAbstractAudioDeviceInfo
{ public:
inline QString  py_q_deviceName() const { return this->deviceName(); }
inline bool  py_q_isFormatSupported(const QAudioFormat&  format) const { return this->isFormatSupported(format); }
inline QAudioFormat  py_q_preferredFormat() const { return this->preferredFormat(); }
inline QList<QAudioFormat::Endian >  py_q_supportedByteOrders() { return this->supportedByteOrders(); }
inline QList<int >  py_q_supportedChannelCounts() { return this->supportedChannelCounts(); }
inline QStringList  py_q_supportedCodecs() { return this->supportedCodecs(); }
inline QList<int >  py_q_supportedSampleRates() { return this->supportedSampleRates(); }
inline QList<int >  py_q_supportedSampleSizes() { return this->supportedSampleSizes(); }
inline QList<QAudioFormat::SampleType >  py_q_supportedSampleTypes() { return this->supportedSampleTypes(); }
};

class PythonQtWrapper_QAbstractAudioDeviceInfo : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractAudioDeviceInfo* new_QAbstractAudioDeviceInfo();
void delete_QAbstractAudioDeviceInfo(QAbstractAudioDeviceInfo* obj) { delete obj; } 
   QString  deviceName(QAbstractAudioDeviceInfo* theWrappedObject) const;
   QString  py_q_deviceName(QAbstractAudioDeviceInfo* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioDeviceInfo*)theWrappedObject)->py_q_deviceName());}
   bool  isFormatSupported(QAbstractAudioDeviceInfo* theWrappedObject, const QAudioFormat&  format) const;
   bool  py_q_isFormatSupported(QAbstractAudioDeviceInfo* theWrappedObject, const QAudioFormat&  format) const{  return (((PythonQtPublicPromoter_QAbstractAudioDeviceInfo*)theWrappedObject)->py_q_isFormatSupported(format));}
   QAudioFormat  preferredFormat(QAbstractAudioDeviceInfo* theWrappedObject) const;
   QAudioFormat  py_q_preferredFormat(QAbstractAudioDeviceInfo* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioDeviceInfo*)theWrappedObject)->py_q_preferredFormat());}
   QList<QAudioFormat::Endian >  supportedByteOrders(QAbstractAudioDeviceInfo* theWrappedObject);
   QList<QAudioFormat::Endian >  py_q_supportedByteOrders(QAbstractAudioDeviceInfo* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractAudioDeviceInfo*)theWrappedObject)->py_q_supportedByteOrders());}
   QList<int >  supportedChannelCounts(QAbstractAudioDeviceInfo* theWrappedObject);
   QList<int >  py_q_supportedChannelCounts(QAbstractAudioDeviceInfo* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractAudioDeviceInfo*)theWrappedObject)->py_q_supportedChannelCounts());}
   QStringList  supportedCodecs(QAbstractAudioDeviceInfo* theWrappedObject);
   QStringList  py_q_supportedCodecs(QAbstractAudioDeviceInfo* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractAudioDeviceInfo*)theWrappedObject)->py_q_supportedCodecs());}
   QList<int >  supportedSampleRates(QAbstractAudioDeviceInfo* theWrappedObject);
   QList<int >  py_q_supportedSampleRates(QAbstractAudioDeviceInfo* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractAudioDeviceInfo*)theWrappedObject)->py_q_supportedSampleRates());}
   QList<int >  supportedSampleSizes(QAbstractAudioDeviceInfo* theWrappedObject);
   QList<int >  py_q_supportedSampleSizes(QAbstractAudioDeviceInfo* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractAudioDeviceInfo*)theWrappedObject)->py_q_supportedSampleSizes());}
   QList<QAudioFormat::SampleType >  supportedSampleTypes(QAbstractAudioDeviceInfo* theWrappedObject);
   QList<QAudioFormat::SampleType >  py_q_supportedSampleTypes(QAbstractAudioDeviceInfo* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractAudioDeviceInfo*)theWrappedObject)->py_q_supportedSampleTypes());}
};





class PythonQtShell_QAbstractAudioInput : public QAbstractAudioInput
{
public:
    PythonQtShell_QAbstractAudioInput():QAbstractAudioInput(),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractAudioInput();

virtual int  bufferSize() const;
virtual int  bytesReady() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual qint64  elapsedUSecs() const;
virtual QAudio::Error  error() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QAudioFormat  format() const;
virtual int  notifyInterval() const;
virtual int  periodSize() const;
virtual qint64  processedUSecs() const;
virtual void reset();
virtual void resume();
virtual void setBufferSize(int  value);
virtual void setFormat(const QAudioFormat&  fmt);
virtual void setNotifyInterval(int  milliSeconds);
virtual void setVolume(qreal  arg__1);
virtual QIODevice*  start();
virtual void start(QIODevice*  device);
virtual QAudio::State  state() const;
virtual void stop();
virtual void suspend();
virtual void timerEvent(QTimerEvent*  event);
virtual qreal  volume() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractAudioInput : public QAbstractAudioInput
{ public:
inline int  py_q_bufferSize() const { return this->bufferSize(); }
inline int  py_q_bytesReady() const { return this->bytesReady(); }
inline qint64  py_q_elapsedUSecs() const { return this->elapsedUSecs(); }
inline QAudio::Error  py_q_error() const { return this->error(); }
inline QAudioFormat  py_q_format() const { return this->format(); }
inline int  py_q_notifyInterval() const { return this->notifyInterval(); }
inline int  py_q_periodSize() const { return this->periodSize(); }
inline qint64  py_q_processedUSecs() const { return this->processedUSecs(); }
inline void py_q_reset() { this->reset(); }
inline void py_q_resume() { this->resume(); }
inline void py_q_setBufferSize(int  value) { this->setBufferSize(value); }
inline void py_q_setFormat(const QAudioFormat&  fmt) { this->setFormat(fmt); }
inline void py_q_setNotifyInterval(int  milliSeconds) { this->setNotifyInterval(milliSeconds); }
inline void py_q_setVolume(qreal  arg__1) { this->setVolume(arg__1); }
inline QIODevice*  py_q_start() { return this->start(); }
inline void py_q_start(QIODevice*  device) { this->start(device); }
inline QAudio::State  py_q_state() const { return this->state(); }
inline void py_q_stop() { this->stop(); }
inline void py_q_suspend() { this->suspend(); }
inline qreal  py_q_volume() const { return this->volume(); }
};

class PythonQtWrapper_QAbstractAudioInput : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractAudioInput* new_QAbstractAudioInput();
void delete_QAbstractAudioInput(QAbstractAudioInput* obj) { delete obj; } 
   int  bufferSize(QAbstractAudioInput* theWrappedObject) const;
   int  py_q_bufferSize(QAbstractAudioInput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_bufferSize());}
   int  bytesReady(QAbstractAudioInput* theWrappedObject) const;
   int  py_q_bytesReady(QAbstractAudioInput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_bytesReady());}
   qint64  elapsedUSecs(QAbstractAudioInput* theWrappedObject) const;
   qint64  py_q_elapsedUSecs(QAbstractAudioInput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_elapsedUSecs());}
   QAudio::Error  error(QAbstractAudioInput* theWrappedObject) const;
   QAudio::Error  py_q_error(QAbstractAudioInput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_error());}
   QAudioFormat  format(QAbstractAudioInput* theWrappedObject) const;
   QAudioFormat  py_q_format(QAbstractAudioInput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_format());}
   int  notifyInterval(QAbstractAudioInput* theWrappedObject) const;
   int  py_q_notifyInterval(QAbstractAudioInput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_notifyInterval());}
   int  periodSize(QAbstractAudioInput* theWrappedObject) const;
   int  py_q_periodSize(QAbstractAudioInput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_periodSize());}
   qint64  processedUSecs(QAbstractAudioInput* theWrappedObject) const;
   qint64  py_q_processedUSecs(QAbstractAudioInput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_processedUSecs());}
   void reset(QAbstractAudioInput* theWrappedObject);
   void py_q_reset(QAbstractAudioInput* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_reset());}
   void resume(QAbstractAudioInput* theWrappedObject);
   void py_q_resume(QAbstractAudioInput* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_resume());}
   void setBufferSize(QAbstractAudioInput* theWrappedObject, int  value);
   void py_q_setBufferSize(QAbstractAudioInput* theWrappedObject, int  value){  (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_setBufferSize(value));}
   void setFormat(QAbstractAudioInput* theWrappedObject, const QAudioFormat&  fmt);
   void py_q_setFormat(QAbstractAudioInput* theWrappedObject, const QAudioFormat&  fmt){  (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_setFormat(fmt));}
   void setNotifyInterval(QAbstractAudioInput* theWrappedObject, int  milliSeconds);
   void py_q_setNotifyInterval(QAbstractAudioInput* theWrappedObject, int  milliSeconds){  (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_setNotifyInterval(milliSeconds));}
   void setVolume(QAbstractAudioInput* theWrappedObject, qreal  arg__1);
   void py_q_setVolume(QAbstractAudioInput* theWrappedObject, qreal  arg__1){  (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_setVolume(arg__1));}
   QIODevice*  start(QAbstractAudioInput* theWrappedObject);
   QIODevice*  py_q_start(QAbstractAudioInput* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_start());}
   void start(QAbstractAudioInput* theWrappedObject, QIODevice*  device);
   void py_q_start(QAbstractAudioInput* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_start(device));}
   QAudio::State  state(QAbstractAudioInput* theWrappedObject) const;
   QAudio::State  py_q_state(QAbstractAudioInput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_state());}
   void stop(QAbstractAudioInput* theWrappedObject);
   void py_q_stop(QAbstractAudioInput* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_stop());}
   void suspend(QAbstractAudioInput* theWrappedObject);
   void py_q_suspend(QAbstractAudioInput* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_suspend());}
   qreal  volume(QAbstractAudioInput* theWrappedObject) const;
   qreal  py_q_volume(QAbstractAudioInput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioInput*)theWrappedObject)->py_q_volume());}
};





class PythonQtShell_QAbstractAudioOutput : public QAbstractAudioOutput
{
public:
    PythonQtShell_QAbstractAudioOutput():QAbstractAudioOutput(),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractAudioOutput();

virtual int  bufferSize() const;
virtual int  bytesFree() const;
virtual QString  category() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual qint64  elapsedUSecs() const;
virtual QAudio::Error  error() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QAudioFormat  format() const;
virtual int  notifyInterval() const;
virtual int  periodSize() const;
virtual qint64  processedUSecs() const;
virtual void reset();
virtual void resume();
virtual void setBufferSize(int  value);
virtual void setCategory(const QString&  arg__1);
virtual void setFormat(const QAudioFormat&  fmt);
virtual void setNotifyInterval(int  milliSeconds);
virtual void setVolume(qreal  arg__1);
virtual QIODevice*  start();
virtual void start(QIODevice*  device);
virtual QAudio::State  state() const;
virtual void stop();
virtual void suspend();
virtual void timerEvent(QTimerEvent*  event);
virtual qreal  volume() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractAudioOutput : public QAbstractAudioOutput
{ public:
inline int  py_q_bufferSize() const { return this->bufferSize(); }
inline int  py_q_bytesFree() const { return this->bytesFree(); }
inline QString  py_q_category() const { return QAbstractAudioOutput::category(); }
inline qint64  py_q_elapsedUSecs() const { return this->elapsedUSecs(); }
inline QAudio::Error  py_q_error() const { return this->error(); }
inline QAudioFormat  py_q_format() const { return this->format(); }
inline int  py_q_notifyInterval() const { return this->notifyInterval(); }
inline int  py_q_periodSize() const { return this->periodSize(); }
inline qint64  py_q_processedUSecs() const { return this->processedUSecs(); }
inline void py_q_reset() { this->reset(); }
inline void py_q_resume() { this->resume(); }
inline void py_q_setBufferSize(int  value) { this->setBufferSize(value); }
inline void py_q_setCategory(const QString&  arg__1) { QAbstractAudioOutput::setCategory(arg__1); }
inline void py_q_setFormat(const QAudioFormat&  fmt) { this->setFormat(fmt); }
inline void py_q_setNotifyInterval(int  milliSeconds) { this->setNotifyInterval(milliSeconds); }
inline void py_q_setVolume(qreal  arg__1) { QAbstractAudioOutput::setVolume(arg__1); }
inline QIODevice*  py_q_start() { return this->start(); }
inline void py_q_start(QIODevice*  device) { this->start(device); }
inline QAudio::State  py_q_state() const { return this->state(); }
inline void py_q_stop() { this->stop(); }
inline void py_q_suspend() { this->suspend(); }
inline qreal  py_q_volume() const { return QAbstractAudioOutput::volume(); }
};

class PythonQtWrapper_QAbstractAudioOutput : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractAudioOutput* new_QAbstractAudioOutput();
void delete_QAbstractAudioOutput(QAbstractAudioOutput* obj) { delete obj; } 
   int  bufferSize(QAbstractAudioOutput* theWrappedObject) const;
   int  py_q_bufferSize(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_bufferSize());}
   int  bytesFree(QAbstractAudioOutput* theWrappedObject) const;
   int  py_q_bytesFree(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_bytesFree());}
   QString  category(QAbstractAudioOutput* theWrappedObject) const;
   QString  py_q_category(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_category());}
   qint64  elapsedUSecs(QAbstractAudioOutput* theWrappedObject) const;
   qint64  py_q_elapsedUSecs(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_elapsedUSecs());}
   QAudio::Error  error(QAbstractAudioOutput* theWrappedObject) const;
   QAudio::Error  py_q_error(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_error());}
   QAudioFormat  format(QAbstractAudioOutput* theWrappedObject) const;
   QAudioFormat  py_q_format(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_format());}
   int  notifyInterval(QAbstractAudioOutput* theWrappedObject) const;
   int  py_q_notifyInterval(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_notifyInterval());}
   int  periodSize(QAbstractAudioOutput* theWrappedObject) const;
   int  py_q_periodSize(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_periodSize());}
   qint64  processedUSecs(QAbstractAudioOutput* theWrappedObject) const;
   qint64  py_q_processedUSecs(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_processedUSecs());}
   void reset(QAbstractAudioOutput* theWrappedObject);
   void py_q_reset(QAbstractAudioOutput* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_reset());}
   void resume(QAbstractAudioOutput* theWrappedObject);
   void py_q_resume(QAbstractAudioOutput* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_resume());}
   void setBufferSize(QAbstractAudioOutput* theWrappedObject, int  value);
   void py_q_setBufferSize(QAbstractAudioOutput* theWrappedObject, int  value){  (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_setBufferSize(value));}
   void setCategory(QAbstractAudioOutput* theWrappedObject, const QString&  arg__1);
   void py_q_setCategory(QAbstractAudioOutput* theWrappedObject, const QString&  arg__1){  (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_setCategory(arg__1));}
   void setFormat(QAbstractAudioOutput* theWrappedObject, const QAudioFormat&  fmt);
   void py_q_setFormat(QAbstractAudioOutput* theWrappedObject, const QAudioFormat&  fmt){  (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_setFormat(fmt));}
   void setNotifyInterval(QAbstractAudioOutput* theWrappedObject, int  milliSeconds);
   void py_q_setNotifyInterval(QAbstractAudioOutput* theWrappedObject, int  milliSeconds){  (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_setNotifyInterval(milliSeconds));}
   void setVolume(QAbstractAudioOutput* theWrappedObject, qreal  arg__1);
   void py_q_setVolume(QAbstractAudioOutput* theWrappedObject, qreal  arg__1){  (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_setVolume(arg__1));}
   QIODevice*  start(QAbstractAudioOutput* theWrappedObject);
   QIODevice*  py_q_start(QAbstractAudioOutput* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_start());}
   void start(QAbstractAudioOutput* theWrappedObject, QIODevice*  device);
   void py_q_start(QAbstractAudioOutput* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_start(device));}
   QAudio::State  state(QAbstractAudioOutput* theWrappedObject) const;
   QAudio::State  py_q_state(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_state());}
   void stop(QAbstractAudioOutput* theWrappedObject);
   void py_q_stop(QAbstractAudioOutput* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_stop());}
   void suspend(QAbstractAudioOutput* theWrappedObject);
   void py_q_suspend(QAbstractAudioOutput* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_suspend());}
   qreal  volume(QAbstractAudioOutput* theWrappedObject) const;
   qreal  py_q_volume(QAbstractAudioOutput* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractAudioOutput*)theWrappedObject)->py_q_volume());}
};





class PythonQtShell_QAbstractVideoBuffer : public QAbstractVideoBuffer
{
public:
    PythonQtShell_QAbstractVideoBuffer(QAbstractVideoBuffer::HandleType  type):QAbstractVideoBuffer(type),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractVideoBuffer();

virtual QVariant  handle() const;
virtual uchar*  map(QAbstractVideoBuffer::MapMode  mode, int*  numBytes, int*  bytesPerLine);
virtual QAbstractVideoBuffer::MapMode  mapMode() const;
virtual void release();
virtual void unmap();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractVideoBuffer : public QAbstractVideoBuffer
{ public:
inline QVariant  py_q_handle() const { return QAbstractVideoBuffer::handle(); }
inline uchar*  py_q_map(QAbstractVideoBuffer::MapMode  mode, int*  numBytes, int*  bytesPerLine) { return this->map(mode, numBytes, bytesPerLine); }
inline QAbstractVideoBuffer::MapMode  py_q_mapMode() const { return this->mapMode(); }
inline void py_q_release() { QAbstractVideoBuffer::release(); }
inline void py_q_unmap() { this->unmap(); }
};

class PythonQtWrapper_QAbstractVideoBuffer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HandleType MapMode )
enum HandleType{
  NoHandle = QAbstractVideoBuffer::NoHandle,   GLTextureHandle = QAbstractVideoBuffer::GLTextureHandle,   XvShmImageHandle = QAbstractVideoBuffer::XvShmImageHandle,   CoreImageHandle = QAbstractVideoBuffer::CoreImageHandle,   QPixmapHandle = QAbstractVideoBuffer::QPixmapHandle,   EGLImageHandle = QAbstractVideoBuffer::EGLImageHandle,   UserHandle = QAbstractVideoBuffer::UserHandle};
enum MapMode{
  NotMapped = QAbstractVideoBuffer::NotMapped,   ReadOnly = QAbstractVideoBuffer::ReadOnly,   WriteOnly = QAbstractVideoBuffer::WriteOnly,   ReadWrite = QAbstractVideoBuffer::ReadWrite};
public slots:
QAbstractVideoBuffer* new_QAbstractVideoBuffer(QAbstractVideoBuffer::HandleType  type);
void delete_QAbstractVideoBuffer(QAbstractVideoBuffer* obj) { delete obj; } 
   QVariant  handle(QAbstractVideoBuffer* theWrappedObject) const;
   QVariant  py_q_handle(QAbstractVideoBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractVideoBuffer*)theWrappedObject)->py_q_handle());}
   QAbstractVideoBuffer::HandleType  handleType(QAbstractVideoBuffer* theWrappedObject) const;
   uchar*  map(QAbstractVideoBuffer* theWrappedObject, QAbstractVideoBuffer::MapMode  mode, int*  numBytes, int*  bytesPerLine);
   uchar*  py_q_map(QAbstractVideoBuffer* theWrappedObject, QAbstractVideoBuffer::MapMode  mode, int*  numBytes, int*  bytesPerLine){  return (((PythonQtPublicPromoter_QAbstractVideoBuffer*)theWrappedObject)->py_q_map(mode, numBytes, bytesPerLine));}
   QAbstractVideoBuffer::MapMode  mapMode(QAbstractVideoBuffer* theWrappedObject) const;
   QAbstractVideoBuffer::MapMode  py_q_mapMode(QAbstractVideoBuffer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractVideoBuffer*)theWrappedObject)->py_q_mapMode());}
   void release(QAbstractVideoBuffer* theWrappedObject);
   void py_q_release(QAbstractVideoBuffer* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractVideoBuffer*)theWrappedObject)->py_q_release());}
   void unmap(QAbstractVideoBuffer* theWrappedObject);
   void py_q_unmap(QAbstractVideoBuffer* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractVideoBuffer*)theWrappedObject)->py_q_unmap());}
};





class PythonQtShell_QAbstractVideoSurface : public QAbstractVideoSurface
{
public:
    PythonQtShell_QAbstractVideoSurface(QObject*  parent = nullptr):QAbstractVideoSurface(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractVideoSurface();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isFormatSupported(const QVideoSurfaceFormat&  format) const;
virtual QVideoSurfaceFormat  nearestFormat(const QVideoSurfaceFormat&  format) const;
virtual bool  present(const QVideoFrame&  frame);
virtual bool  start(const QVideoSurfaceFormat&  format);
virtual void stop();
virtual QList<QVideoFrame::PixelFormat >  supportedPixelFormats(QAbstractVideoBuffer::HandleType  type = QAbstractVideoBuffer::NoHandle) const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractVideoSurface : public QAbstractVideoSurface
{ public:
inline void promoted_setError(QAbstractVideoSurface::Error  error) { this->setError(error); }
inline void promoted_setNativeResolution(const QSize&  resolution) { this->setNativeResolution(resolution); }
inline bool  py_q_isFormatSupported(const QVideoSurfaceFormat&  format) const { return QAbstractVideoSurface::isFormatSupported(format); }
inline QVideoSurfaceFormat  py_q_nearestFormat(const QVideoSurfaceFormat&  format) const { return QAbstractVideoSurface::nearestFormat(format); }
inline bool  py_q_present(const QVideoFrame&  frame) { return this->present(frame); }
inline bool  py_q_start(const QVideoSurfaceFormat&  format) { return QAbstractVideoSurface::start(format); }
inline void py_q_stop() { QAbstractVideoSurface::stop(); }
inline QList<QVideoFrame::PixelFormat >  py_q_supportedPixelFormats(QAbstractVideoBuffer::HandleType  type = QAbstractVideoBuffer::NoHandle) const { return this->supportedPixelFormats(type); }
};

class PythonQtWrapper_QAbstractVideoSurface : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error )
enum Error{
  NoError = QAbstractVideoSurface::NoError,   UnsupportedFormatError = QAbstractVideoSurface::UnsupportedFormatError,   IncorrectFormatError = QAbstractVideoSurface::IncorrectFormatError,   StoppedError = QAbstractVideoSurface::StoppedError,   ResourceError = QAbstractVideoSurface::ResourceError};
public slots:
QAbstractVideoSurface* new_QAbstractVideoSurface(QObject*  parent = nullptr);
void delete_QAbstractVideoSurface(QAbstractVideoSurface* obj) { delete obj; } 
   QAbstractVideoSurface::Error  error(QAbstractVideoSurface* theWrappedObject) const;
   bool  isActive(QAbstractVideoSurface* theWrappedObject) const;
   bool  isFormatSupported(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format) const;
   bool  py_q_isFormatSupported(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format) const{  return (((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->py_q_isFormatSupported(format));}
   QSize  nativeResolution(QAbstractVideoSurface* theWrappedObject) const;
   QVideoSurfaceFormat  nearestFormat(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format) const;
   QVideoSurfaceFormat  py_q_nearestFormat(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format) const{  return (((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->py_q_nearestFormat(format));}
   bool  present(QAbstractVideoSurface* theWrappedObject, const QVideoFrame&  frame);
   bool  py_q_present(QAbstractVideoSurface* theWrappedObject, const QVideoFrame&  frame){  return (((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->py_q_present(frame));}
   void setError(QAbstractVideoSurface* theWrappedObject, QAbstractVideoSurface::Error  error);
   void setNativeResolution(QAbstractVideoSurface* theWrappedObject, const QSize&  resolution);
   bool  start(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format);
   bool  py_q_start(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format){  return (((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->py_q_start(format));}
   void stop(QAbstractVideoSurface* theWrappedObject);
   void py_q_stop(QAbstractVideoSurface* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->py_q_stop());}
   QList<QVideoFrame::PixelFormat >  supportedPixelFormats(QAbstractVideoSurface* theWrappedObject, QAbstractVideoBuffer::HandleType  type = QAbstractVideoBuffer::NoHandle) const;
   QList<QVideoFrame::PixelFormat >  py_q_supportedPixelFormats(QAbstractVideoSurface* theWrappedObject, QAbstractVideoBuffer::HandleType  type = QAbstractVideoBuffer::NoHandle) const{  return (((PythonQtPublicPromoter_QAbstractVideoSurface*)theWrappedObject)->py_q_supportedPixelFormats(type));}
   QVideoSurfaceFormat  surfaceFormat(QAbstractVideoSurface* theWrappedObject) const;
};





class PythonQtWrapper_QAudio : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error Mode Role State VolumeScale )
enum Error{
  NoError = QAudio::NoError,   OpenError = QAudio::OpenError,   IOError = QAudio::IOError,   UnderrunError = QAudio::UnderrunError,   FatalError = QAudio::FatalError};
enum Mode{
  AudioInput = QAudio::AudioInput,   AudioOutput = QAudio::AudioOutput};
enum Role{
  UnknownRole = QAudio::UnknownRole,   MusicRole = QAudio::MusicRole,   VideoRole = QAudio::VideoRole,   VoiceCommunicationRole = QAudio::VoiceCommunicationRole,   AlarmRole = QAudio::AlarmRole,   NotificationRole = QAudio::NotificationRole,   RingtoneRole = QAudio::RingtoneRole,   AccessibilityRole = QAudio::AccessibilityRole,   SonificationRole = QAudio::SonificationRole,   GameRole = QAudio::GameRole,   CustomRole = QAudio::CustomRole};
enum State{
  ActiveState = QAudio::ActiveState,   SuspendedState = QAudio::SuspendedState,   StoppedState = QAudio::StoppedState,   IdleState = QAudio::IdleState,   InterruptedState = QAudio::InterruptedState};
enum VolumeScale{
  LinearVolumeScale = QAudio::LinearVolumeScale,   CubicVolumeScale = QAudio::CubicVolumeScale,   LogarithmicVolumeScale = QAudio::LogarithmicVolumeScale,   DecibelVolumeScale = QAudio::DecibelVolumeScale};
public slots:
   qreal  static_QAudio_convertVolume(qreal  volume, QAudio::VolumeScale  from, QAudio::VolumeScale  to);
};





class PythonQtWrapper_QAudioBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QAudioBuffer* new_QAudioBuffer();
QAudioBuffer* new_QAudioBuffer(const QAudioBuffer&  other);
QAudioBuffer* new_QAudioBuffer(const QByteArray&  data, const QAudioFormat&  format, qint64  startTime = -1);
QAudioBuffer* new_QAudioBuffer(int  numFrames, const QAudioFormat&  format, qint64  startTime = -1);
void delete_QAudioBuffer(QAudioBuffer* obj) { delete obj; } 
   int  byteCount(QAudioBuffer* theWrappedObject) const;
   const void*  constData(QAudioBuffer* theWrappedObject) const;
   void*  data(QAudioBuffer* theWrappedObject);
   const void*  data(QAudioBuffer* theWrappedObject) const;
   qint64  duration(QAudioBuffer* theWrappedObject) const;
   QAudioFormat  format(QAudioBuffer* theWrappedObject) const;
   int  frameCount(QAudioBuffer* theWrappedObject) const;
   bool  isValid(QAudioBuffer* theWrappedObject) const;
   QAudioBuffer*  operator_assign(QAudioBuffer* theWrappedObject, const QAudioBuffer&  other);
   int  sampleCount(QAudioBuffer* theWrappedObject) const;
   qint64  startTime(QAudioBuffer* theWrappedObject) const;
    bool __nonzero__(QAudioBuffer* obj) { return obj->isValid(); }
};





class PythonQtShell_QAudioDecoder : public QAudioDecoder
{
public:
    PythonQtShell_QAudioDecoder(QObject*  parent = nullptr):QAudioDecoder(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioDecoder();

virtual QMultimedia::AvailabilityStatus  availability() const;
virtual bool  bind(QObject*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isAvailable() const;
virtual QMediaService*  service() const;
virtual void timerEvent(QTimerEvent*  event);
virtual void unbind(QObject*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAudioDecoder : public QAudioDecoder
{ public:
inline bool  py_q_bind(QObject*  arg__1) { return QAudioDecoder::bind(arg__1); }
inline void py_q_unbind(QObject*  arg__1) { QAudioDecoder::unbind(arg__1); }
};

class PythonQtWrapper_QAudioDecoder : public QObject
{ Q_OBJECT
public:
public slots:
QAudioDecoder* new_QAudioDecoder(QObject*  parent = nullptr);
void delete_QAudioDecoder(QAudioDecoder* obj) { delete obj; } 
   QAudioFormat  audioFormat(QAudioDecoder* theWrappedObject) const;
   bool  py_q_bind(QAudioDecoder* theWrappedObject, QObject*  arg__1){  return (((PythonQtPublicPromoter_QAudioDecoder*)theWrappedObject)->py_q_bind(arg__1));}
   bool  bufferAvailable(QAudioDecoder* theWrappedObject) const;
   qint64  duration(QAudioDecoder* theWrappedObject) const;
   QAudioDecoder::Error  error(QAudioDecoder* theWrappedObject) const;
   QString  errorString(QAudioDecoder* theWrappedObject) const;
   QMultimedia::SupportEstimate  static_QAudioDecoder_hasSupport(const QString&  mimeType, const QStringList&  codecs = QStringList());
   qint64  position(QAudioDecoder* theWrappedObject) const;
   QAudioBuffer  read(QAudioDecoder* theWrappedObject) const;
   void setAudioFormat(QAudioDecoder* theWrappedObject, const QAudioFormat&  format);
   void setSourceDevice(QAudioDecoder* theWrappedObject, QIODevice*  device);
   void setSourceFilename(QAudioDecoder* theWrappedObject, const QString&  fileName);
   QIODevice*  sourceDevice(QAudioDecoder* theWrappedObject) const;
   QString  sourceFilename(QAudioDecoder* theWrappedObject) const;
   QAudioDecoder::State  state(QAudioDecoder* theWrappedObject) const;
   void py_q_unbind(QAudioDecoder* theWrappedObject, QObject*  arg__1){  (((PythonQtPublicPromoter_QAudioDecoder*)theWrappedObject)->py_q_unbind(arg__1));}
};





class PythonQtShell_QAudioDecoderControl : public QAudioDecoderControl
{
public:
    PythonQtShell_QAudioDecoderControl(QObject*  parent = nullptr):QAudioDecoderControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioDecoderControl();

virtual QAudioFormat  audioFormat() const;
virtual bool  bufferAvailable() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual qint64  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual qint64  position() const;
virtual QAudioBuffer  read();
virtual void setAudioFormat(const QAudioFormat&  format);
virtual void setSourceDevice(QIODevice*  device);
virtual void setSourceFilename(const QString&  fileName);
virtual QIODevice*  sourceDevice() const;
virtual QString  sourceFilename() const;
virtual void start();
virtual QAudioDecoder::State  state() const;
virtual void stop();
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAudioDecoderControl : public QAudioDecoderControl
{ public:
inline QAudioFormat  py_q_audioFormat() const { return this->audioFormat(); }
inline bool  py_q_bufferAvailable() const { return this->bufferAvailable(); }
inline qint64  py_q_duration() const { return this->duration(); }
inline qint64  py_q_position() const { return this->position(); }
inline QAudioBuffer  py_q_read() { return this->read(); }
inline void py_q_setAudioFormat(const QAudioFormat&  format) { this->setAudioFormat(format); }
inline void py_q_setSourceDevice(QIODevice*  device) { this->setSourceDevice(device); }
inline void py_q_setSourceFilename(const QString&  fileName) { this->setSourceFilename(fileName); }
inline QIODevice*  py_q_sourceDevice() const { return this->sourceDevice(); }
inline QString  py_q_sourceFilename() const { return this->sourceFilename(); }
inline void py_q_start() { this->start(); }
inline QAudioDecoder::State  py_q_state() const { return this->state(); }
inline void py_q_stop() { this->stop(); }
};

class PythonQtWrapper_QAudioDecoderControl : public QObject
{ Q_OBJECT
public:
public slots:
QAudioDecoderControl* new_QAudioDecoderControl(QObject*  parent = nullptr);
void delete_QAudioDecoderControl(QAudioDecoderControl* obj) { delete obj; } 
   QAudioFormat  audioFormat(QAudioDecoderControl* theWrappedObject) const;
   QAudioFormat  py_q_audioFormat(QAudioDecoderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_audioFormat());}
   bool  bufferAvailable(QAudioDecoderControl* theWrappedObject) const;
   bool  py_q_bufferAvailable(QAudioDecoderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_bufferAvailable());}
   qint64  duration(QAudioDecoderControl* theWrappedObject) const;
   qint64  py_q_duration(QAudioDecoderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_duration());}
   qint64  position(QAudioDecoderControl* theWrappedObject) const;
   qint64  py_q_position(QAudioDecoderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_position());}
   QAudioBuffer  read(QAudioDecoderControl* theWrappedObject);
   QAudioBuffer  py_q_read(QAudioDecoderControl* theWrappedObject){  return (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_read());}
   void setAudioFormat(QAudioDecoderControl* theWrappedObject, const QAudioFormat&  format);
   void py_q_setAudioFormat(QAudioDecoderControl* theWrappedObject, const QAudioFormat&  format){  (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_setAudioFormat(format));}
   void setSourceDevice(QAudioDecoderControl* theWrappedObject, QIODevice*  device);
   void py_q_setSourceDevice(QAudioDecoderControl* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_setSourceDevice(device));}
   void setSourceFilename(QAudioDecoderControl* theWrappedObject, const QString&  fileName);
   void py_q_setSourceFilename(QAudioDecoderControl* theWrappedObject, const QString&  fileName){  (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_setSourceFilename(fileName));}
   QIODevice*  sourceDevice(QAudioDecoderControl* theWrappedObject) const;
   QIODevice*  py_q_sourceDevice(QAudioDecoderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_sourceDevice());}
   QString  sourceFilename(QAudioDecoderControl* theWrappedObject) const;
   QString  py_q_sourceFilename(QAudioDecoderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_sourceFilename());}
   void start(QAudioDecoderControl* theWrappedObject);
   void py_q_start(QAudioDecoderControl* theWrappedObject){  (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_start());}
   QAudioDecoder::State  state(QAudioDecoderControl* theWrappedObject) const;
   QAudioDecoder::State  py_q_state(QAudioDecoderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_state());}
   void stop(QAudioDecoderControl* theWrappedObject);
   void py_q_stop(QAudioDecoderControl* theWrappedObject){  (((PythonQtPublicPromoter_QAudioDecoderControl*)theWrappedObject)->py_q_stop());}
};





class PythonQtWrapper_QAudioDeviceInfo : public QObject
{ Q_OBJECT
public:
public slots:
QAudioDeviceInfo* new_QAudioDeviceInfo();
QAudioDeviceInfo* new_QAudioDeviceInfo(const QAudioDeviceInfo&  other);
void delete_QAudioDeviceInfo(QAudioDeviceInfo* obj) { delete obj; } 
   QList<QAudioDeviceInfo >  static_QAudioDeviceInfo_availableDevices(QAudio::Mode  mode);
   QAudioDeviceInfo  static_QAudioDeviceInfo_defaultInputDevice();
   QAudioDeviceInfo  static_QAudioDeviceInfo_defaultOutputDevice();
   QString  deviceName(QAudioDeviceInfo* theWrappedObject) const;
   bool  isFormatSupported(QAudioDeviceInfo* theWrappedObject, const QAudioFormat&  format) const;
   bool  isNull(QAudioDeviceInfo* theWrappedObject) const;
   QAudioFormat  nearestFormat(QAudioDeviceInfo* theWrappedObject, const QAudioFormat&  format) const;
   bool  __ne__(QAudioDeviceInfo* theWrappedObject, const QAudioDeviceInfo&  other) const;
   QAudioDeviceInfo*  operator_assign(QAudioDeviceInfo* theWrappedObject, const QAudioDeviceInfo&  other);
   bool  __eq__(QAudioDeviceInfo* theWrappedObject, const QAudioDeviceInfo&  other) const;
   QAudioFormat  preferredFormat(QAudioDeviceInfo* theWrappedObject) const;
   QList<QAudioFormat::Endian >  supportedByteOrders(QAudioDeviceInfo* theWrappedObject) const;
   QList<int >  supportedChannelCounts(QAudioDeviceInfo* theWrappedObject) const;
   QStringList  supportedCodecs(QAudioDeviceInfo* theWrappedObject) const;
   QList<int >  supportedSampleRates(QAudioDeviceInfo* theWrappedObject) const;
   QList<int >  supportedSampleSizes(QAudioDeviceInfo* theWrappedObject) const;
   QList<QAudioFormat::SampleType >  supportedSampleTypes(QAudioDeviceInfo* theWrappedObject) const;
    bool __nonzero__(QAudioDeviceInfo* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QAudioEncoderSettings : public QObject
{ Q_OBJECT
public:
public slots:
QAudioEncoderSettings* new_QAudioEncoderSettings();
QAudioEncoderSettings* new_QAudioEncoderSettings(const QAudioEncoderSettings&  other);
void delete_QAudioEncoderSettings(QAudioEncoderSettings* obj) { delete obj; } 
   int  bitRate(QAudioEncoderSettings* theWrappedObject) const;
   int  channelCount(QAudioEncoderSettings* theWrappedObject) const;
   QString  codec(QAudioEncoderSettings* theWrappedObject) const;
   QMultimedia::EncodingMode  encodingMode(QAudioEncoderSettings* theWrappedObject) const;
   QVariant  encodingOption(QAudioEncoderSettings* theWrappedObject, const QString&  option) const;
   QMap<QString , QVariant >  encodingOptions(QAudioEncoderSettings* theWrappedObject) const;
   bool  isNull(QAudioEncoderSettings* theWrappedObject) const;
   bool  __ne__(QAudioEncoderSettings* theWrappedObject, const QAudioEncoderSettings&  other) const;
   QAudioEncoderSettings*  operator_assign(QAudioEncoderSettings* theWrappedObject, const QAudioEncoderSettings&  other);
   bool  __eq__(QAudioEncoderSettings* theWrappedObject, const QAudioEncoderSettings&  other) const;
   QMultimedia::EncodingQuality  quality(QAudioEncoderSettings* theWrappedObject) const;
   int  sampleRate(QAudioEncoderSettings* theWrappedObject) const;
   void setBitRate(QAudioEncoderSettings* theWrappedObject, int  bitrate);
   void setChannelCount(QAudioEncoderSettings* theWrappedObject, int  channels);
   void setCodec(QAudioEncoderSettings* theWrappedObject, const QString&  codec);
   void setEncodingMode(QAudioEncoderSettings* theWrappedObject, QMultimedia::EncodingMode  arg__1);
   void setEncodingOption(QAudioEncoderSettings* theWrappedObject, const QString&  option, const QVariant&  value);
   void setEncodingOptions(QAudioEncoderSettings* theWrappedObject, const QMap<QString , QVariant >&  options);
   void setQuality(QAudioEncoderSettings* theWrappedObject, QMultimedia::EncodingQuality  quality);
   void setSampleRate(QAudioEncoderSettings* theWrappedObject, int  rate);
    bool __nonzero__(QAudioEncoderSettings* obj) { return !obj->isNull(); }
};





class PythonQtShell_QAudioEncoderSettingsControl : public QAudioEncoderSettingsControl
{
public:
    PythonQtShell_QAudioEncoderSettingsControl(QObject*  parent = nullptr):QAudioEncoderSettingsControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioEncoderSettingsControl();

virtual QAudioEncoderSettings  audioSettings() const;
virtual void childEvent(QChildEvent*  event);
virtual QString  codecDescription(const QString&  codecName) const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void setAudioSettings(const QAudioEncoderSettings&  settings);
virtual QStringList  supportedAudioCodecs() const;
virtual QList<int >  supportedSampleRates(const QAudioEncoderSettings&  settings, bool*  continuous = nullptr) const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAudioEncoderSettingsControl : public QAudioEncoderSettingsControl
{ public:
inline QAudioEncoderSettings  py_q_audioSettings() const { return this->audioSettings(); }
inline QString  py_q_codecDescription(const QString&  codecName) const { return this->codecDescription(codecName); }
inline void py_q_setAudioSettings(const QAudioEncoderSettings&  settings) { this->setAudioSettings(settings); }
inline QStringList  py_q_supportedAudioCodecs() const { return this->supportedAudioCodecs(); }
inline QList<int >  py_q_supportedSampleRates(const QAudioEncoderSettings&  settings, bool*  continuous = nullptr) const { return this->supportedSampleRates(settings, continuous); }
};

class PythonQtWrapper_QAudioEncoderSettingsControl : public QObject
{ Q_OBJECT
public:
public slots:
QAudioEncoderSettingsControl* new_QAudioEncoderSettingsControl(QObject*  parent = nullptr);
void delete_QAudioEncoderSettingsControl(QAudioEncoderSettingsControl* obj) { delete obj; } 
   QAudioEncoderSettings  audioSettings(QAudioEncoderSettingsControl* theWrappedObject) const;
   QAudioEncoderSettings  py_q_audioSettings(QAudioEncoderSettingsControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioEncoderSettingsControl*)theWrappedObject)->py_q_audioSettings());}
   QString  codecDescription(QAudioEncoderSettingsControl* theWrappedObject, const QString&  codecName) const;
   QString  py_q_codecDescription(QAudioEncoderSettingsControl* theWrappedObject, const QString&  codecName) const{  return (((PythonQtPublicPromoter_QAudioEncoderSettingsControl*)theWrappedObject)->py_q_codecDescription(codecName));}
   void setAudioSettings(QAudioEncoderSettingsControl* theWrappedObject, const QAudioEncoderSettings&  settings);
   void py_q_setAudioSettings(QAudioEncoderSettingsControl* theWrappedObject, const QAudioEncoderSettings&  settings){  (((PythonQtPublicPromoter_QAudioEncoderSettingsControl*)theWrappedObject)->py_q_setAudioSettings(settings));}
   QStringList  supportedAudioCodecs(QAudioEncoderSettingsControl* theWrappedObject) const;
   QStringList  py_q_supportedAudioCodecs(QAudioEncoderSettingsControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioEncoderSettingsControl*)theWrappedObject)->py_q_supportedAudioCodecs());}
   QList<int >  supportedSampleRates(QAudioEncoderSettingsControl* theWrappedObject, const QAudioEncoderSettings&  settings, bool*  continuous = nullptr) const;
   QList<int >  py_q_supportedSampleRates(QAudioEncoderSettingsControl* theWrappedObject, const QAudioEncoderSettings&  settings, bool*  continuous = nullptr) const{  return (((PythonQtPublicPromoter_QAudioEncoderSettingsControl*)theWrappedObject)->py_q_supportedSampleRates(settings, continuous));}
};





class PythonQtWrapper_QAudioFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Endian SampleType )
enum Endian{
  BigEndian = QAudioFormat::BigEndian,   LittleEndian = QAudioFormat::LittleEndian};
enum SampleType{
  Unknown = QAudioFormat::Unknown,   SignedInt = QAudioFormat::SignedInt,   UnSignedInt = QAudioFormat::UnSignedInt,   Float = QAudioFormat::Float};
public slots:
QAudioFormat* new_QAudioFormat();
QAudioFormat* new_QAudioFormat(const QAudioFormat&  other);
void delete_QAudioFormat(QAudioFormat* obj) { delete obj; } 
   QAudioFormat::Endian  byteOrder(QAudioFormat* theWrappedObject) const;
   int  bytesForDuration(QAudioFormat* theWrappedObject, qint64  duration) const;
   int  bytesForFrames(QAudioFormat* theWrappedObject, int  frameCount) const;
   int  bytesPerFrame(QAudioFormat* theWrappedObject) const;
   int  channelCount(QAudioFormat* theWrappedObject) const;
   QString  codec(QAudioFormat* theWrappedObject) const;
   qint64  durationForBytes(QAudioFormat* theWrappedObject, int  byteCount) const;
   qint64  durationForFrames(QAudioFormat* theWrappedObject, int  frameCount) const;
   int  framesForBytes(QAudioFormat* theWrappedObject, int  byteCount) const;
   int  framesForDuration(QAudioFormat* theWrappedObject, qint64  duration) const;
   bool  isValid(QAudioFormat* theWrappedObject) const;
   bool  __ne__(QAudioFormat* theWrappedObject, const QAudioFormat&  other) const;
   QAudioFormat*  operator_assign(QAudioFormat* theWrappedObject, const QAudioFormat&  other);
   bool  __eq__(QAudioFormat* theWrappedObject, const QAudioFormat&  other) const;
   int  sampleRate(QAudioFormat* theWrappedObject) const;
   int  sampleSize(QAudioFormat* theWrappedObject) const;
   QAudioFormat::SampleType  sampleType(QAudioFormat* theWrappedObject) const;
   void setByteOrder(QAudioFormat* theWrappedObject, QAudioFormat::Endian  byteOrder);
   void setChannelCount(QAudioFormat* theWrappedObject, int  channelCount);
   void setCodec(QAudioFormat* theWrappedObject, const QString&  codec);
   void setSampleRate(QAudioFormat* theWrappedObject, int  sampleRate);
   void setSampleSize(QAudioFormat* theWrappedObject, int  sampleSize);
   void setSampleType(QAudioFormat* theWrappedObject, QAudioFormat::SampleType  sampleType);
    QString py_toString(QAudioFormat*);
    bool __nonzero__(QAudioFormat* obj) { return obj->isValid(); }
};





class PythonQtShell_QAudioInput : public QAudioInput
{
public:
    PythonQtShell_QAudioInput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr):QAudioInput(audioDeviceInfo, format, parent),_wrapper(NULL) {};
    PythonQtShell_QAudioInput(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr):QAudioInput(format, parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioInput();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioInput : public QObject
{ Q_OBJECT
public:
public slots:
QAudioInput* new_QAudioInput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr);
QAudioInput* new_QAudioInput(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr);
void delete_QAudioInput(QAudioInput* obj) { delete obj; } 
   int  bufferSize(QAudioInput* theWrappedObject) const;
   int  bytesReady(QAudioInput* theWrappedObject) const;
   qint64  elapsedUSecs(QAudioInput* theWrappedObject) const;
   QAudio::Error  error(QAudioInput* theWrappedObject) const;
   QAudioFormat  format(QAudioInput* theWrappedObject) const;
   int  notifyInterval(QAudioInput* theWrappedObject) const;
   int  periodSize(QAudioInput* theWrappedObject) const;
   qint64  processedUSecs(QAudioInput* theWrappedObject) const;
   void reset(QAudioInput* theWrappedObject);
   void resume(QAudioInput* theWrappedObject);
   void setBufferSize(QAudioInput* theWrappedObject, int  bytes);
   void setNotifyInterval(QAudioInput* theWrappedObject, int  milliSeconds);
   void setVolume(QAudioInput* theWrappedObject, qreal  volume);
   QIODevice*  start(QAudioInput* theWrappedObject);
   void start(QAudioInput* theWrappedObject, QIODevice*  device);
   QAudio::State  state(QAudioInput* theWrappedObject) const;
   void stop(QAudioInput* theWrappedObject);
   void suspend(QAudioInput* theWrappedObject);
   qreal  volume(QAudioInput* theWrappedObject) const;
};





class PythonQtShell_QAudioInputSelectorControl : public QAudioInputSelectorControl
{
public:
    PythonQtShell_QAudioInputSelectorControl(QObject*  parent = nullptr):QAudioInputSelectorControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioInputSelectorControl();

virtual QString  activeInput() const;
virtual QList<QString >  availableInputs() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QString  defaultInput() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QString  inputDescription(const QString&  name) const;
virtual void setActiveInput(const QString&  name);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAudioInputSelectorControl : public QAudioInputSelectorControl
{ public:
inline QString  py_q_activeInput() const { return this->activeInput(); }
inline QList<QString >  py_q_availableInputs() const { return this->availableInputs(); }
inline QString  py_q_defaultInput() const { return this->defaultInput(); }
inline QString  py_q_inputDescription(const QString&  name) const { return this->inputDescription(name); }
inline void py_q_setActiveInput(const QString&  name) { this->setActiveInput(name); }
};

class PythonQtWrapper_QAudioInputSelectorControl : public QObject
{ Q_OBJECT
public:
public slots:
QAudioInputSelectorControl* new_QAudioInputSelectorControl(QObject*  parent = nullptr);
void delete_QAudioInputSelectorControl(QAudioInputSelectorControl* obj) { delete obj; } 
   QString  activeInput(QAudioInputSelectorControl* theWrappedObject) const;
   QString  py_q_activeInput(QAudioInputSelectorControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioInputSelectorControl*)theWrappedObject)->py_q_activeInput());}
   QList<QString >  availableInputs(QAudioInputSelectorControl* theWrappedObject) const;
   QList<QString >  py_q_availableInputs(QAudioInputSelectorControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioInputSelectorControl*)theWrappedObject)->py_q_availableInputs());}
   QString  defaultInput(QAudioInputSelectorControl* theWrappedObject) const;
   QString  py_q_defaultInput(QAudioInputSelectorControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioInputSelectorControl*)theWrappedObject)->py_q_defaultInput());}
   QString  inputDescription(QAudioInputSelectorControl* theWrappedObject, const QString&  name) const;
   QString  py_q_inputDescription(QAudioInputSelectorControl* theWrappedObject, const QString&  name) const{  return (((PythonQtPublicPromoter_QAudioInputSelectorControl*)theWrappedObject)->py_q_inputDescription(name));}
   void py_q_setActiveInput(QAudioInputSelectorControl* theWrappedObject, const QString&  name){  (((PythonQtPublicPromoter_QAudioInputSelectorControl*)theWrappedObject)->py_q_setActiveInput(name));}
};





class PythonQtShell_QAudioOutput : public QAudioOutput
{
public:
    PythonQtShell_QAudioOutput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr):QAudioOutput(audioDeviceInfo, format, parent),_wrapper(NULL) {};
    PythonQtShell_QAudioOutput(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr):QAudioOutput(format, parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioOutput();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioOutput : public QObject
{ Q_OBJECT
public:
public slots:
QAudioOutput* new_QAudioOutput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr);
QAudioOutput* new_QAudioOutput(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = nullptr);
void delete_QAudioOutput(QAudioOutput* obj) { delete obj; } 
   int  bufferSize(QAudioOutput* theWrappedObject) const;
   int  bytesFree(QAudioOutput* theWrappedObject) const;
   QString  category(QAudioOutput* theWrappedObject) const;
   qint64  elapsedUSecs(QAudioOutput* theWrappedObject) const;
   QAudio::Error  error(QAudioOutput* theWrappedObject) const;
   QAudioFormat  format(QAudioOutput* theWrappedObject) const;
   int  notifyInterval(QAudioOutput* theWrappedObject) const;
   int  periodSize(QAudioOutput* theWrappedObject) const;
   qint64  processedUSecs(QAudioOutput* theWrappedObject) const;
   void reset(QAudioOutput* theWrappedObject);
   void resume(QAudioOutput* theWrappedObject);
   void setBufferSize(QAudioOutput* theWrappedObject, int  bytes);
   void setCategory(QAudioOutput* theWrappedObject, const QString&  category);
   void setNotifyInterval(QAudioOutput* theWrappedObject, int  milliSeconds);
   void setVolume(QAudioOutput* theWrappedObject, qreal  arg__1);
   QIODevice*  start(QAudioOutput* theWrappedObject);
   void start(QAudioOutput* theWrappedObject, QIODevice*  device);
   QAudio::State  state(QAudioOutput* theWrappedObject) const;
   void stop(QAudioOutput* theWrappedObject);
   void suspend(QAudioOutput* theWrappedObject);
   qreal  volume(QAudioOutput* theWrappedObject) const;
};





class PythonQtShell_QAudioOutputSelectorControl : public QAudioOutputSelectorControl
{
public:
    PythonQtShell_QAudioOutputSelectorControl(QObject*  parent = nullptr):QAudioOutputSelectorControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioOutputSelectorControl();

virtual QString  activeOutput() const;
virtual QList<QString >  availableOutputs() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QString  defaultOutput() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QString  outputDescription(const QString&  name) const;
virtual void setActiveOutput(const QString&  name);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAudioOutputSelectorControl : public QAudioOutputSelectorControl
{ public:
inline QString  py_q_activeOutput() const { return this->activeOutput(); }
inline QList<QString >  py_q_availableOutputs() const { return this->availableOutputs(); }
inline QString  py_q_defaultOutput() const { return this->defaultOutput(); }
inline QString  py_q_outputDescription(const QString&  name) const { return this->outputDescription(name); }
inline void py_q_setActiveOutput(const QString&  name) { this->setActiveOutput(name); }
};

class PythonQtWrapper_QAudioOutputSelectorControl : public QObject
{ Q_OBJECT
public:
public slots:
QAudioOutputSelectorControl* new_QAudioOutputSelectorControl(QObject*  parent = nullptr);
void delete_QAudioOutputSelectorControl(QAudioOutputSelectorControl* obj) { delete obj; } 
   QString  activeOutput(QAudioOutputSelectorControl* theWrappedObject) const;
   QString  py_q_activeOutput(QAudioOutputSelectorControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioOutputSelectorControl*)theWrappedObject)->py_q_activeOutput());}
   QList<QString >  availableOutputs(QAudioOutputSelectorControl* theWrappedObject) const;
   QList<QString >  py_q_availableOutputs(QAudioOutputSelectorControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioOutputSelectorControl*)theWrappedObject)->py_q_availableOutputs());}
   QString  defaultOutput(QAudioOutputSelectorControl* theWrappedObject) const;
   QString  py_q_defaultOutput(QAudioOutputSelectorControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioOutputSelectorControl*)theWrappedObject)->py_q_defaultOutput());}
   QString  outputDescription(QAudioOutputSelectorControl* theWrappedObject, const QString&  name) const;
   QString  py_q_outputDescription(QAudioOutputSelectorControl* theWrappedObject, const QString&  name) const{  return (((PythonQtPublicPromoter_QAudioOutputSelectorControl*)theWrappedObject)->py_q_outputDescription(name));}
   void py_q_setActiveOutput(QAudioOutputSelectorControl* theWrappedObject, const QString&  name){  (((PythonQtPublicPromoter_QAudioOutputSelectorControl*)theWrappedObject)->py_q_setActiveOutput(name));}
};





class PythonQtShell_QAudioProbe : public QAudioProbe
{
public:
    PythonQtShell_QAudioProbe(QObject*  parent = nullptr):QAudioProbe(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioProbe();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioProbe : public QObject
{ Q_OBJECT
public:
public slots:
QAudioProbe* new_QAudioProbe(QObject*  parent = nullptr);
void delete_QAudioProbe(QAudioProbe* obj) { delete obj; } 
   bool  isActive(QAudioProbe* theWrappedObject) const;
   bool  setSource(QAudioProbe* theWrappedObject, QMediaObject*  source);
   bool  setSource(QAudioProbe* theWrappedObject, QMediaRecorder*  source);
};





class PythonQtShell_QAudioRecorder : public QAudioRecorder
{
public:
    PythonQtShell_QAudioRecorder(QObject*  parent = nullptr):QAudioRecorder(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioRecorder();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QMediaObject*  mediaObject() const;
virtual bool  setMediaObject(QMediaObject*  object);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioRecorder : public QObject
{ Q_OBJECT
public:
public slots:
QAudioRecorder* new_QAudioRecorder(QObject*  parent = nullptr);
void delete_QAudioRecorder(QAudioRecorder* obj) { delete obj; } 
   QString  audioInput(QAudioRecorder* theWrappedObject) const;
   QString  audioInputDescription(QAudioRecorder* theWrappedObject, const QString&  name) const;
   QStringList  audioInputs(QAudioRecorder* theWrappedObject) const;
   QString  defaultAudioInput(QAudioRecorder* theWrappedObject) const;
};





class PythonQtShell_QAudioRoleControl : public QAudioRoleControl
{
public:
    PythonQtShell_QAudioRoleControl(QObject*  parent = nullptr):QAudioRoleControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioRoleControl();

virtual QAudio::Role  audioRole() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void setAudioRole(QAudio::Role  role);
virtual QList<QAudio::Role >  supportedAudioRoles() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAudioRoleControl : public QAudioRoleControl
{ public:
inline QAudio::Role  py_q_audioRole() const { return this->audioRole(); }
inline void py_q_setAudioRole(QAudio::Role  role) { this->setAudioRole(role); }
inline QList<QAudio::Role >  py_q_supportedAudioRoles() const { return this->supportedAudioRoles(); }
};

class PythonQtWrapper_QAudioRoleControl : public QObject
{ Q_OBJECT
public:
public slots:
QAudioRoleControl* new_QAudioRoleControl(QObject*  parent = nullptr);
void delete_QAudioRoleControl(QAudioRoleControl* obj) { delete obj; } 
   QAudio::Role  audioRole(QAudioRoleControl* theWrappedObject) const;
   QAudio::Role  py_q_audioRole(QAudioRoleControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioRoleControl*)theWrappedObject)->py_q_audioRole());}
   void setAudioRole(QAudioRoleControl* theWrappedObject, QAudio::Role  role);
   void py_q_setAudioRole(QAudioRoleControl* theWrappedObject, QAudio::Role  role){  (((PythonQtPublicPromoter_QAudioRoleControl*)theWrappedObject)->py_q_setAudioRole(role));}
   QList<QAudio::Role >  supportedAudioRoles(QAudioRoleControl* theWrappedObject) const;
   QList<QAudio::Role >  py_q_supportedAudioRoles(QAudioRoleControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAudioRoleControl*)theWrappedObject)->py_q_supportedAudioRoles());}
};





class PythonQtShell_QAudioSystemFactoryInterface : public QAudioSystemFactoryInterface
{
public:
    PythonQtShell_QAudioSystemFactoryInterface():QAudioSystemFactoryInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QAudioSystemFactoryInterface();

virtual QList<QByteArray >  availableDevices(QAudio::Mode  arg__1) const;
virtual QAbstractAudioDeviceInfo*  createDeviceInfo(const QByteArray&  device, QAudio::Mode  mode);
virtual QAbstractAudioInput*  createInput(const QByteArray&  device);
virtual QAbstractAudioOutput*  createOutput(const QByteArray&  device);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAudioSystemFactoryInterface : public QAudioSystemFactoryInterface
{ public:
inline QList<QByteArray >  py_q_availableDevices(QAudio::Mode  arg__1) const { return this->availableDevices(arg__1); }
inline QAbstractAudioDeviceInfo*  py_q_createDeviceInfo(const QByteArray&  device, QAudio::Mode  mode) { return this->createDeviceInfo(device, mode); }
inline QAbstractAudioInput*  py_q_createInput(const QByteArray&  device) { return this->createInput(device); }
inline QAbstractAudioOutput*  py_q_createOutput(const QByteArray&  device) { return this->createOutput(device); }
};

class PythonQtWrapper_QAudioSystemFactoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QAudioSystemFactoryInterface* new_QAudioSystemFactoryInterface();
void delete_QAudioSystemFactoryInterface(QAudioSystemFactoryInterface* obj) { delete obj; } 
   QList<QByteArray >  availableDevices(QAudioSystemFactoryInterface* theWrappedObject, QAudio::Mode  arg__1) const;
   QList<QByteArray >  py_q_availableDevices(QAudioSystemFactoryInterface* theWrappedObject, QAudio::Mode  arg__1) const{  return (((PythonQtPublicPromoter_QAudioSystemFactoryInterface*)theWrappedObject)->py_q_availableDevices(arg__1));}
   QAbstractAudioDeviceInfo*  createDeviceInfo(QAudioSystemFactoryInterface* theWrappedObject, const QByteArray&  device, QAudio::Mode  mode);
   QAbstractAudioDeviceInfo*  py_q_createDeviceInfo(QAudioSystemFactoryInterface* theWrappedObject, const QByteArray&  device, QAudio::Mode  mode){  return (((PythonQtPublicPromoter_QAudioSystemFactoryInterface*)theWrappedObject)->py_q_createDeviceInfo(device, mode));}
   QAbstractAudioInput*  createInput(QAudioSystemFactoryInterface* theWrappedObject, const QByteArray&  device);
   QAbstractAudioInput*  py_q_createInput(QAudioSystemFactoryInterface* theWrappedObject, const QByteArray&  device){  return (((PythonQtPublicPromoter_QAudioSystemFactoryInterface*)theWrappedObject)->py_q_createInput(device));}
   QAbstractAudioOutput*  createOutput(QAudioSystemFactoryInterface* theWrappedObject, const QByteArray&  device);
   QAbstractAudioOutput*  py_q_createOutput(QAudioSystemFactoryInterface* theWrappedObject, const QByteArray&  device){  return (((PythonQtPublicPromoter_QAudioSystemFactoryInterface*)theWrappedObject)->py_q_createOutput(device));}
};





class PythonQtShell_QAudioSystemPlugin : public QAudioSystemPlugin
{
public:
    PythonQtShell_QAudioSystemPlugin(QObject*  parent = nullptr):QAudioSystemPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioSystemPlugin();

virtual QList<QByteArray >  availableDevices(QAudio::Mode  arg__1) const;
virtual QAbstractAudioDeviceInfo*  createDeviceInfo(const QByteArray&  device, QAudio::Mode  mode);
virtual QAbstractAudioInput*  createInput(const QByteArray&  device);
virtual QAbstractAudioOutput*  createOutput(const QByteArray&  device);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAudioSystemPlugin : public QAudioSystemPlugin
{ public:
inline QList<QByteArray >  py_q_availableDevices(QAudio::Mode  arg__1) const { return this->availableDevices(arg__1); }
inline QAbstractAudioDeviceInfo*  py_q_createDeviceInfo(const QByteArray&  device, QAudio::Mode  mode) { return this->createDeviceInfo(device, mode); }
inline QAbstractAudioInput*  py_q_createInput(const QByteArray&  device) { return this->createInput(device); }
inline QAbstractAudioOutput*  py_q_createOutput(const QByteArray&  device) { return this->createOutput(device); }
};

class PythonQtWrapper_QAudioSystemPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QAudioSystemPlugin* new_QAudioSystemPlugin(QObject*  parent = nullptr);
void delete_QAudioSystemPlugin(QAudioSystemPlugin* obj) { delete obj; } 
   QList<QByteArray >  availableDevices(QAudioSystemPlugin* theWrappedObject, QAudio::Mode  arg__1) const;
   QList<QByteArray >  py_q_availableDevices(QAudioSystemPlugin* theWrappedObject, QAudio::Mode  arg__1) const{  return (((PythonQtPublicPromoter_QAudioSystemPlugin*)theWrappedObject)->py_q_availableDevices(arg__1));}
   QAbstractAudioDeviceInfo*  createDeviceInfo(QAudioSystemPlugin* theWrappedObject, const QByteArray&  device, QAudio::Mode  mode);
   QAbstractAudioDeviceInfo*  py_q_createDeviceInfo(QAudioSystemPlugin* theWrappedObject, const QByteArray&  device, QAudio::Mode  mode){  return (((PythonQtPublicPromoter_QAudioSystemPlugin*)theWrappedObject)->py_q_createDeviceInfo(device, mode));}
   QAbstractAudioInput*  createInput(QAudioSystemPlugin* theWrappedObject, const QByteArray&  device);
   QAbstractAudioInput*  py_q_createInput(QAudioSystemPlugin* theWrappedObject, const QByteArray&  device){  return (((PythonQtPublicPromoter_QAudioSystemPlugin*)theWrappedObject)->py_q_createInput(device));}
   QAbstractAudioOutput*  createOutput(QAudioSystemPlugin* theWrappedObject, const QByteArray&  device);
   QAbstractAudioOutput*  py_q_createOutput(QAudioSystemPlugin* theWrappedObject, const QByteArray&  device){  return (((PythonQtPublicPromoter_QAudioSystemPlugin*)theWrappedObject)->py_q_createOutput(device));}
};





class PythonQtShell_QCamera : public QCamera
{
public:
    PythonQtShell_QCamera(QCamera::Position  position, QObject*  parent = nullptr):QCamera(position, parent),_wrapper(NULL) {};
    PythonQtShell_QCamera(QObject*  parent = nullptr):QCamera(parent),_wrapper(NULL) {};
    PythonQtShell_QCamera(const QByteArray&  deviceName, QObject*  parent = nullptr):QCamera(deviceName, parent),_wrapper(NULL) {};
    PythonQtShell_QCamera(const QCameraInfo&  cameraInfo, QObject*  parent = nullptr):QCamera(cameraInfo, parent),_wrapper(NULL) {};

   ~PythonQtShell_QCamera();

virtual QMultimedia::AvailabilityStatus  availability() const;
virtual bool  bind(QObject*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isAvailable() const;
virtual QMediaService*  service() const;
virtual void timerEvent(QTimerEvent*  event);
virtual void unbind(QObject*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCamera : public QCamera
{ public:
inline QMultimedia::AvailabilityStatus  py_q_availability() const { return QCamera::availability(); }
};

class PythonQtWrapper_QCamera : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CaptureMode LockType )
Q_FLAGS(CaptureModes LockTypes )
enum CaptureMode{
  CaptureViewfinder = QCamera::CaptureViewfinder,   CaptureStillImage = QCamera::CaptureStillImage,   CaptureVideo = QCamera::CaptureVideo};
enum LockType{
  NoLock = QCamera::NoLock,   LockExposure = QCamera::LockExposure,   LockWhiteBalance = QCamera::LockWhiteBalance,   LockFocus = QCamera::LockFocus};
Q_DECLARE_FLAGS(CaptureModes, CaptureMode)
Q_DECLARE_FLAGS(LockTypes, LockType)
public slots:
QCamera* new_QCamera(QCamera::Position  position, QObject*  parent = nullptr);
QCamera* new_QCamera(QObject*  parent = nullptr);
QCamera* new_QCamera(const QByteArray&  deviceName, QObject*  parent = nullptr);
QCamera* new_QCamera(const QCameraInfo&  cameraInfo, QObject*  parent = nullptr);
void delete_QCamera(QCamera* obj) { delete obj; } 
   QMultimedia::AvailabilityStatus  py_q_availability(QCamera* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCamera*)theWrappedObject)->py_q_availability());}
   QList<QByteArray >  static_QCamera_availableDevices();
   QCamera::CaptureModes  captureMode(QCamera* theWrappedObject) const;
   QString  static_QCamera_deviceDescription(const QByteArray&  device);
   QCamera::Error  error(QCamera* theWrappedObject) const;
   QString  errorString(QCamera* theWrappedObject) const;
   QCameraExposure*  exposure(QCamera* theWrappedObject) const;
   QCameraFocus*  focus(QCamera* theWrappedObject) const;
   QCameraImageProcessing*  imageProcessing(QCamera* theWrappedObject) const;
   bool  isCaptureModeSupported(QCamera* theWrappedObject, QCamera::CaptureModes  mode) const;
   QCamera::LockStatus  lockStatus(QCamera* theWrappedObject) const;
   QCamera::LockStatus  lockStatus(QCamera* theWrappedObject, QCamera::LockType  lock) const;
   QCamera::LockTypes  requestedLocks(QCamera* theWrappedObject) const;
   void setViewfinder(QCamera* theWrappedObject, QAbstractVideoSurface*  surface);
   void setViewfinder(QCamera* theWrappedObject, QGraphicsVideoItem*  viewfinder);
   void setViewfinder(QCamera* theWrappedObject, QVideoWidget*  viewfinder);
   void setViewfinderSettings(QCamera* theWrappedObject, const QCameraViewfinderSettings&  settings);
   QCamera::State  state(QCamera* theWrappedObject) const;
   QCamera::Status  status(QCamera* theWrappedObject) const;
   QCamera::LockTypes  supportedLocks(QCamera* theWrappedObject) const;
   QList<QCamera::FrameRateRange >  supportedViewfinderFrameRateRanges(QCamera* theWrappedObject, const QCameraViewfinderSettings&  settings = QCameraViewfinderSettings()) const;
   QList<QVideoFrame::PixelFormat >  supportedViewfinderPixelFormats(QCamera* theWrappedObject, const QCameraViewfinderSettings&  settings = QCameraViewfinderSettings()) const;
   QList<QSize >  supportedViewfinderResolutions(QCamera* theWrappedObject, const QCameraViewfinderSettings&  settings = QCameraViewfinderSettings()) const;
   QList<QCameraViewfinderSettings >  supportedViewfinderSettings(QCamera* theWrappedObject, const QCameraViewfinderSettings&  settings = QCameraViewfinderSettings()) const;
   QCameraViewfinderSettings  viewfinderSettings(QCamera* theWrappedObject) const;
};





class PythonQtShell_QCameraCaptureBufferFormatControl : public QCameraCaptureBufferFormatControl
{
public:
    PythonQtShell_QCameraCaptureBufferFormatControl(QObject*  parent = nullptr):QCameraCaptureBufferFormatControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraCaptureBufferFormatControl();

virtual QVideoFrame::PixelFormat  bufferFormat() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void setBufferFormat(QVideoFrame::PixelFormat  format);
virtual QList<QVideoFrame::PixelFormat >  supportedBufferFormats() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraCaptureBufferFormatControl : public QCameraCaptureBufferFormatControl
{ public:
inline QVideoFrame::PixelFormat  py_q_bufferFormat() const { return this->bufferFormat(); }
inline void py_q_setBufferFormat(QVideoFrame::PixelFormat  format) { this->setBufferFormat(format); }
inline QList<QVideoFrame::PixelFormat >  py_q_supportedBufferFormats() const { return this->supportedBufferFormats(); }
};

class PythonQtWrapper_QCameraCaptureBufferFormatControl : public QObject
{ Q_OBJECT
public:
public slots:
QCameraCaptureBufferFormatControl* new_QCameraCaptureBufferFormatControl(QObject*  parent = nullptr);
void delete_QCameraCaptureBufferFormatControl(QCameraCaptureBufferFormatControl* obj) { delete obj; } 
   QVideoFrame::PixelFormat  bufferFormat(QCameraCaptureBufferFormatControl* theWrappedObject) const;
   QVideoFrame::PixelFormat  py_q_bufferFormat(QCameraCaptureBufferFormatControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraCaptureBufferFormatControl*)theWrappedObject)->py_q_bufferFormat());}
   void setBufferFormat(QCameraCaptureBufferFormatControl* theWrappedObject, QVideoFrame::PixelFormat  format);
   void py_q_setBufferFormat(QCameraCaptureBufferFormatControl* theWrappedObject, QVideoFrame::PixelFormat  format){  (((PythonQtPublicPromoter_QCameraCaptureBufferFormatControl*)theWrappedObject)->py_q_setBufferFormat(format));}
   QList<QVideoFrame::PixelFormat >  supportedBufferFormats(QCameraCaptureBufferFormatControl* theWrappedObject) const;
   QList<QVideoFrame::PixelFormat >  py_q_supportedBufferFormats(QCameraCaptureBufferFormatControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraCaptureBufferFormatControl*)theWrappedObject)->py_q_supportedBufferFormats());}
};





class PythonQtShell_QCameraCaptureDestinationControl : public QCameraCaptureDestinationControl
{
public:
    PythonQtShell_QCameraCaptureDestinationControl(QObject*  parent = nullptr):QCameraCaptureDestinationControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraCaptureDestinationControl();

virtual QCameraImageCapture::CaptureDestinations  captureDestination() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations  destination) const;
virtual void setCaptureDestination(QCameraImageCapture::CaptureDestinations  destination);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraCaptureDestinationControl : public QCameraCaptureDestinationControl
{ public:
inline QCameraImageCapture::CaptureDestinations  py_q_captureDestination() const { return this->captureDestination(); }
inline bool  py_q_isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations  destination) const { return this->isCaptureDestinationSupported(destination); }
inline void py_q_setCaptureDestination(QCameraImageCapture::CaptureDestinations  destination) { this->setCaptureDestination(destination); }
};

class PythonQtWrapper_QCameraCaptureDestinationControl : public QObject
{ Q_OBJECT
public:
public slots:
QCameraCaptureDestinationControl* new_QCameraCaptureDestinationControl(QObject*  parent = nullptr);
void delete_QCameraCaptureDestinationControl(QCameraCaptureDestinationControl* obj) { delete obj; } 
   QCameraImageCapture::CaptureDestinations  captureDestination(QCameraCaptureDestinationControl* theWrappedObject) const;
   QCameraImageCapture::CaptureDestinations  py_q_captureDestination(QCameraCaptureDestinationControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraCaptureDestinationControl*)theWrappedObject)->py_q_captureDestination());}
   bool  isCaptureDestinationSupported(QCameraCaptureDestinationControl* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination) const;
   bool  py_q_isCaptureDestinationSupported(QCameraCaptureDestinationControl* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination) const{  return (((PythonQtPublicPromoter_QCameraCaptureDestinationControl*)theWrappedObject)->py_q_isCaptureDestinationSupported(destination));}
   void setCaptureDestination(QCameraCaptureDestinationControl* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination);
   void py_q_setCaptureDestination(QCameraCaptureDestinationControl* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination){  (((PythonQtPublicPromoter_QCameraCaptureDestinationControl*)theWrappedObject)->py_q_setCaptureDestination(destination));}
};





class PythonQtShell_QCameraControl : public QCameraControl
{
public:
    PythonQtShell_QCameraControl(QObject*  parent = nullptr):QCameraControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraControl();

virtual bool  canChangeProperty(QCameraControl::PropertyChangeType  changeType, QCamera::Status  status) const;
virtual QCamera::CaptureModes  captureMode() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isCaptureModeSupported(QCamera::CaptureModes  mode) const;
virtual void setCaptureMode(QCamera::CaptureModes  arg__1);
virtual void setState(QCamera::State  state);
virtual QCamera::State  state() const;
virtual QCamera::Status  status() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraControl : public QCameraControl
{ public:
inline bool  py_q_canChangeProperty(QCameraControl::PropertyChangeType  changeType, QCamera::Status  status) const { return this->canChangeProperty(changeType, status); }
inline QCamera::CaptureModes  py_q_captureMode() const { return this->captureMode(); }
inline bool  py_q_isCaptureModeSupported(QCamera::CaptureModes  mode) const { return this->isCaptureModeSupported(mode); }
inline void py_q_setCaptureMode(QCamera::CaptureModes  arg__1) { this->setCaptureMode(arg__1); }
inline void py_q_setState(QCamera::State  state) { this->setState(state); }
inline QCamera::State  py_q_state() const { return this->state(); }
inline QCamera::Status  py_q_status() const { return this->status(); }
};

class PythonQtWrapper_QCameraControl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PropertyChangeType )
enum PropertyChangeType{
  CaptureMode = QCameraControl::CaptureMode,   ImageEncodingSettings = QCameraControl::ImageEncodingSettings,   VideoEncodingSettings = QCameraControl::VideoEncodingSettings,   Viewfinder = QCameraControl::Viewfinder,   ViewfinderSettings = QCameraControl::ViewfinderSettings};
public slots:
QCameraControl* new_QCameraControl(QObject*  parent = nullptr);
void delete_QCameraControl(QCameraControl* obj) { delete obj; } 
   bool  canChangeProperty(QCameraControl* theWrappedObject, QCameraControl::PropertyChangeType  changeType, QCamera::Status  status) const;
   bool  py_q_canChangeProperty(QCameraControl* theWrappedObject, QCameraControl::PropertyChangeType  changeType, QCamera::Status  status) const{  return (((PythonQtPublicPromoter_QCameraControl*)theWrappedObject)->py_q_canChangeProperty(changeType, status));}
   QCamera::CaptureModes  captureMode(QCameraControl* theWrappedObject) const;
   QCamera::CaptureModes  py_q_captureMode(QCameraControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraControl*)theWrappedObject)->py_q_captureMode());}
   bool  isCaptureModeSupported(QCameraControl* theWrappedObject, QCamera::CaptureModes  mode) const;
   bool  py_q_isCaptureModeSupported(QCameraControl* theWrappedObject, QCamera::CaptureModes  mode) const{  return (((PythonQtPublicPromoter_QCameraControl*)theWrappedObject)->py_q_isCaptureModeSupported(mode));}
   void setCaptureMode(QCameraControl* theWrappedObject, QCamera::CaptureModes  arg__1);
   void py_q_setCaptureMode(QCameraControl* theWrappedObject, QCamera::CaptureModes  arg__1){  (((PythonQtPublicPromoter_QCameraControl*)theWrappedObject)->py_q_setCaptureMode(arg__1));}
   void setState(QCameraControl* theWrappedObject, QCamera::State  state);
   void py_q_setState(QCameraControl* theWrappedObject, QCamera::State  state){  (((PythonQtPublicPromoter_QCameraControl*)theWrappedObject)->py_q_setState(state));}
   QCamera::State  state(QCameraControl* theWrappedObject) const;
   QCamera::State  py_q_state(QCameraControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraControl*)theWrappedObject)->py_q_state());}
   QCamera::Status  status(QCameraControl* theWrappedObject) const;
   QCamera::Status  py_q_status(QCameraControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraControl*)theWrappedObject)->py_q_status());}
};





class PythonQtWrapper_QCameraExposure : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FlashMode )
Q_FLAGS(FlashModes )
enum FlashMode{
  FlashAuto = QCameraExposure::FlashAuto,   FlashOff = QCameraExposure::FlashOff,   FlashOn = QCameraExposure::FlashOn,   FlashRedEyeReduction = QCameraExposure::FlashRedEyeReduction,   FlashFill = QCameraExposure::FlashFill,   FlashTorch = QCameraExposure::FlashTorch,   FlashVideoLight = QCameraExposure::FlashVideoLight,   FlashSlowSyncFrontCurtain = QCameraExposure::FlashSlowSyncFrontCurtain,   FlashSlowSyncRearCurtain = QCameraExposure::FlashSlowSyncRearCurtain,   FlashManual = QCameraExposure::FlashManual};
Q_DECLARE_FLAGS(FlashModes, FlashMode)
public slots:
   qreal  aperture(QCameraExposure* theWrappedObject) const;
   qreal  exposureCompensation(QCameraExposure* theWrappedObject) const;
   QCameraExposure::ExposureMode  exposureMode(QCameraExposure* theWrappedObject) const;
   QCameraExposure::FlashModes  flashMode(QCameraExposure* theWrappedObject) const;
   bool  isAvailable(QCameraExposure* theWrappedObject) const;
   bool  isExposureModeSupported(QCameraExposure* theWrappedObject, QCameraExposure::ExposureMode  mode) const;
   bool  isFlashModeSupported(QCameraExposure* theWrappedObject, QCameraExposure::FlashModes  mode) const;
   bool  isFlashReady(QCameraExposure* theWrappedObject) const;
   bool  isMeteringModeSupported(QCameraExposure* theWrappedObject, QCameraExposure::MeteringMode  mode) const;
   int  isoSensitivity(QCameraExposure* theWrappedObject) const;
   QCameraExposure::MeteringMode  meteringMode(QCameraExposure* theWrappedObject) const;
   qreal  requestedAperture(QCameraExposure* theWrappedObject) const;
   int  requestedIsoSensitivity(QCameraExposure* theWrappedObject) const;
   qreal  requestedShutterSpeed(QCameraExposure* theWrappedObject) const;
   void setSpotMeteringPoint(QCameraExposure* theWrappedObject, const QPointF&  point);
   qreal  shutterSpeed(QCameraExposure* theWrappedObject) const;
   QPointF  spotMeteringPoint(QCameraExposure* theWrappedObject) const;
   QList<qreal >  supportedApertures(QCameraExposure* theWrappedObject, bool*  continuous = nullptr) const;
   QList<int >  supportedIsoSensitivities(QCameraExposure* theWrappedObject, bool*  continuous = nullptr) const;
   QList<qreal >  supportedShutterSpeeds(QCameraExposure* theWrappedObject, bool*  continuous = nullptr) const;
};





class PythonQtShell_QCameraExposureControl : public QCameraExposureControl
{
public:
    PythonQtShell_QCameraExposureControl(QObject*  parent = nullptr):QCameraExposureControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraExposureControl();

virtual QVariant  actualValue(QCameraExposureControl::ExposureParameter  parameter) const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isParameterSupported(QCameraExposureControl::ExposureParameter  parameter) const;
virtual QVariant  requestedValue(QCameraExposureControl::ExposureParameter  parameter) const;
virtual bool  setValue(QCameraExposureControl::ExposureParameter  parameter, const QVariant&  value);
virtual QList<QVariant >  supportedParameterRange(QCameraExposureControl::ExposureParameter  parameter, bool*  continuous) const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraExposureControl : public QCameraExposureControl
{ public:
inline QVariant  py_q_actualValue(QCameraExposureControl::ExposureParameter  parameter) const { return this->actualValue(parameter); }
inline bool  py_q_isParameterSupported(QCameraExposureControl::ExposureParameter  parameter) const { return this->isParameterSupported(parameter); }
inline QVariant  py_q_requestedValue(QCameraExposureControl::ExposureParameter  parameter) const { return this->requestedValue(parameter); }
inline bool  py_q_setValue(QCameraExposureControl::ExposureParameter  parameter, const QVariant&  value) { return this->setValue(parameter, value); }
inline QList<QVariant >  py_q_supportedParameterRange(QCameraExposureControl::ExposureParameter  parameter, bool*  continuous) const { return this->supportedParameterRange(parameter, continuous); }
};

class PythonQtWrapper_QCameraExposureControl : public QObject
{ Q_OBJECT
public:
public slots:
QCameraExposureControl* new_QCameraExposureControl(QObject*  parent = nullptr);
void delete_QCameraExposureControl(QCameraExposureControl* obj) { delete obj; } 
   QVariant  actualValue(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter) const;
   QVariant  py_q_actualValue(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter) const{  return (((PythonQtPublicPromoter_QCameraExposureControl*)theWrappedObject)->py_q_actualValue(parameter));}
   bool  isParameterSupported(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter) const;
   bool  py_q_isParameterSupported(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter) const{  return (((PythonQtPublicPromoter_QCameraExposureControl*)theWrappedObject)->py_q_isParameterSupported(parameter));}
   QVariant  requestedValue(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter) const;
   QVariant  py_q_requestedValue(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter) const{  return (((PythonQtPublicPromoter_QCameraExposureControl*)theWrappedObject)->py_q_requestedValue(parameter));}
   bool  setValue(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter, const QVariant&  value);
   bool  py_q_setValue(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter, const QVariant&  value){  return (((PythonQtPublicPromoter_QCameraExposureControl*)theWrappedObject)->py_q_setValue(parameter, value));}
   QList<QVariant >  supportedParameterRange(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter, bool*  continuous) const;
   QList<QVariant >  py_q_supportedParameterRange(QCameraExposureControl* theWrappedObject, QCameraExposureControl::ExposureParameter  parameter, bool*  continuous) const{  return (((PythonQtPublicPromoter_QCameraExposureControl*)theWrappedObject)->py_q_supportedParameterRange(parameter, continuous));}
};





class PythonQtShell_QCameraFeedbackControl : public QCameraFeedbackControl
{
public:
    PythonQtShell_QCameraFeedbackControl(QObject*  parent = nullptr):QCameraFeedbackControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraFeedbackControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isEventFeedbackEnabled(QCameraFeedbackControl::EventType  arg__1) const;
virtual bool  isEventFeedbackLocked(QCameraFeedbackControl::EventType  arg__1) const;
virtual void resetEventFeedback(QCameraFeedbackControl::EventType  arg__1);
virtual bool  setEventFeedbackEnabled(QCameraFeedbackControl::EventType  arg__1, bool  arg__2);
virtual bool  setEventFeedbackSound(QCameraFeedbackControl::EventType  arg__1, const QString&  filePath);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraFeedbackControl : public QCameraFeedbackControl
{ public:
inline bool  py_q_isEventFeedbackEnabled(QCameraFeedbackControl::EventType  arg__1) const { return this->isEventFeedbackEnabled(arg__1); }
inline bool  py_q_isEventFeedbackLocked(QCameraFeedbackControl::EventType  arg__1) const { return this->isEventFeedbackLocked(arg__1); }
inline void py_q_resetEventFeedback(QCameraFeedbackControl::EventType  arg__1) { this->resetEventFeedback(arg__1); }
inline bool  py_q_setEventFeedbackEnabled(QCameraFeedbackControl::EventType  arg__1, bool  arg__2) { return this->setEventFeedbackEnabled(arg__1, arg__2); }
inline bool  py_q_setEventFeedbackSound(QCameraFeedbackControl::EventType  arg__1, const QString&  filePath) { return this->setEventFeedbackSound(arg__1, filePath); }
};

class PythonQtWrapper_QCameraFeedbackControl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EventType )
enum EventType{
  ViewfinderStarted = QCameraFeedbackControl::ViewfinderStarted,   ViewfinderStopped = QCameraFeedbackControl::ViewfinderStopped,   ImageCaptured = QCameraFeedbackControl::ImageCaptured,   ImageSaved = QCameraFeedbackControl::ImageSaved,   ImageError = QCameraFeedbackControl::ImageError,   RecordingStarted = QCameraFeedbackControl::RecordingStarted,   RecordingInProgress = QCameraFeedbackControl::RecordingInProgress,   RecordingStopped = QCameraFeedbackControl::RecordingStopped,   AutoFocusInProgress = QCameraFeedbackControl::AutoFocusInProgress,   AutoFocusLocked = QCameraFeedbackControl::AutoFocusLocked,   AutoFocusFailed = QCameraFeedbackControl::AutoFocusFailed};
public slots:
QCameraFeedbackControl* new_QCameraFeedbackControl(QObject*  parent = nullptr);
void delete_QCameraFeedbackControl(QCameraFeedbackControl* obj) { delete obj; } 
   bool  isEventFeedbackEnabled(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1) const;
   bool  py_q_isEventFeedbackEnabled(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1) const{  return (((PythonQtPublicPromoter_QCameraFeedbackControl*)theWrappedObject)->py_q_isEventFeedbackEnabled(arg__1));}
   bool  isEventFeedbackLocked(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1) const;
   bool  py_q_isEventFeedbackLocked(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1) const{  return (((PythonQtPublicPromoter_QCameraFeedbackControl*)theWrappedObject)->py_q_isEventFeedbackLocked(arg__1));}
   void resetEventFeedback(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1);
   void py_q_resetEventFeedback(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1){  (((PythonQtPublicPromoter_QCameraFeedbackControl*)theWrappedObject)->py_q_resetEventFeedback(arg__1));}
   bool  setEventFeedbackEnabled(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1, bool  arg__2);
   bool  py_q_setEventFeedbackEnabled(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1, bool  arg__2){  return (((PythonQtPublicPromoter_QCameraFeedbackControl*)theWrappedObject)->py_q_setEventFeedbackEnabled(arg__1, arg__2));}
   bool  setEventFeedbackSound(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1, const QString&  filePath);
   bool  py_q_setEventFeedbackSound(QCameraFeedbackControl* theWrappedObject, QCameraFeedbackControl::EventType  arg__1, const QString&  filePath){  return (((PythonQtPublicPromoter_QCameraFeedbackControl*)theWrappedObject)->py_q_setEventFeedbackSound(arg__1, filePath));}
};





class PythonQtShell_QCameraFlashControl : public QCameraFlashControl
{
public:
    PythonQtShell_QCameraFlashControl(QObject*  parent = nullptr):QCameraFlashControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraFlashControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QCameraExposure::FlashModes  flashMode() const;
virtual bool  isFlashModeSupported(QCameraExposure::FlashModes  mode) const;
virtual bool  isFlashReady() const;
virtual void setFlashMode(QCameraExposure::FlashModes  mode);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraFlashControl : public QCameraFlashControl
{ public:
inline QCameraExposure::FlashModes  py_q_flashMode() const { return this->flashMode(); }
inline bool  py_q_isFlashModeSupported(QCameraExposure::FlashModes  mode) const { return this->isFlashModeSupported(mode); }
inline bool  py_q_isFlashReady() const { return this->isFlashReady(); }
inline void py_q_setFlashMode(QCameraExposure::FlashModes  mode) { this->setFlashMode(mode); }
};

class PythonQtWrapper_QCameraFlashControl : public QObject
{ Q_OBJECT
public:
public slots:
QCameraFlashControl* new_QCameraFlashControl(QObject*  parent = nullptr);
void delete_QCameraFlashControl(QCameraFlashControl* obj) { delete obj; } 
   QCameraExposure::FlashModes  flashMode(QCameraFlashControl* theWrappedObject) const;
   QCameraExposure::FlashModes  py_q_flashMode(QCameraFlashControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraFlashControl*)theWrappedObject)->py_q_flashMode());}
   bool  isFlashModeSupported(QCameraFlashControl* theWrappedObject, QCameraExposure::FlashModes  mode) const;
   bool  py_q_isFlashModeSupported(QCameraFlashControl* theWrappedObject, QCameraExposure::FlashModes  mode) const{  return (((PythonQtPublicPromoter_QCameraFlashControl*)theWrappedObject)->py_q_isFlashModeSupported(mode));}
   bool  isFlashReady(QCameraFlashControl* theWrappedObject) const;
   bool  py_q_isFlashReady(QCameraFlashControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraFlashControl*)theWrappedObject)->py_q_isFlashReady());}
   void setFlashMode(QCameraFlashControl* theWrappedObject, QCameraExposure::FlashModes  mode);
   void py_q_setFlashMode(QCameraFlashControl* theWrappedObject, QCameraExposure::FlashModes  mode){  (((PythonQtPublicPromoter_QCameraFlashControl*)theWrappedObject)->py_q_setFlashMode(mode));}
};


