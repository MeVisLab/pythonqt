#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qmediacontent.h>
#include <qmediacontrol.h>
#include <qmediaencodersettings.h>
#include <qmediaobject.h>
#include <qmediaplaylist.h>
#include <qmediarecorder.h>
#include <qmediarecordercontrol.h>
#include <qmediaresource.h>
#include <qmediaservice.h>
#include <qmediaserviceproviderplugin.h>
#include <qmediastreamscontrol.h>
#include <qmediatimerange.h>
#include <qmediavideoprobecontrol.h>
#include <qmetadatareadercontrol.h>
#include <qmetadatawritercontrol.h>
#include <qmetaobject.h>
#include <qmultimedia.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpair.h>
#include <qradiodata.h>
#include <qradiodatacontrol.h>
#include <qradiotuner.h>
#include <qradiotunercontrol.h>
#include <qsize.h>
#include <qsound.h>
#include <qsoundeffect.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvideodeviceselectorcontrol.h>
#include <qvideoencodersettingscontrol.h>
#include <qvideoframe.h>
#include <qvideoprobe.h>



class PythonQtShell_QMediaPlaylist : public QMediaPlaylist
{
public:
    PythonQtShell_QMediaPlaylist(QObject*  parent = nullptr):QMediaPlaylist(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaPlaylist();

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

class PythonQtPublicPromoter_QMediaPlaylist : public QMediaPlaylist
{ public:
inline bool  promoted_setMediaObject(QMediaObject*  object) { return this->setMediaObject(object); }
inline QMediaObject*  py_q_mediaObject() const { return QMediaPlaylist::mediaObject(); }
inline bool  py_q_setMediaObject(QMediaObject*  object) { return QMediaPlaylist::setMediaObject(object); }
};

class PythonQtWrapper_QMediaPlaylist : public QObject
{ Q_OBJECT
public:
public slots:
QMediaPlaylist* new_QMediaPlaylist(QObject*  parent = nullptr);
void delete_QMediaPlaylist(QMediaPlaylist* obj) { delete obj; } 
   bool  addMedia(QMediaPlaylist* theWrappedObject, const QList<QMediaContent >&  items);
   bool  addMedia(QMediaPlaylist* theWrappedObject, const QMediaContent&  content);
   bool  clear(QMediaPlaylist* theWrappedObject);
   int  currentIndex(QMediaPlaylist* theWrappedObject) const;
   QMediaContent  currentMedia(QMediaPlaylist* theWrappedObject) const;
   QMediaPlaylist::Error  error(QMediaPlaylist* theWrappedObject) const;
   QString  errorString(QMediaPlaylist* theWrappedObject) const;
   bool  insertMedia(QMediaPlaylist* theWrappedObject, int  index, const QList<QMediaContent >&  items);
   bool  insertMedia(QMediaPlaylist* theWrappedObject, int  index, const QMediaContent&  content);
   bool  isEmpty(QMediaPlaylist* theWrappedObject) const;
   bool  isReadOnly(QMediaPlaylist* theWrappedObject) const;
   void load(QMediaPlaylist* theWrappedObject, QIODevice*  device, const char*  format = nullptr);
   void load(QMediaPlaylist* theWrappedObject, const QNetworkRequest&  request, const char*  format = nullptr);
   void load(QMediaPlaylist* theWrappedObject, const QUrl&  location, const char*  format = nullptr);
   QMediaContent  media(QMediaPlaylist* theWrappedObject, int  index) const;
   int  mediaCount(QMediaPlaylist* theWrappedObject) const;
   QMediaObject*  py_q_mediaObject(QMediaPlaylist* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlaylist*)theWrappedObject)->py_q_mediaObject());}
   bool  moveMedia(QMediaPlaylist* theWrappedObject, int  from, int  to);
   int  nextIndex(QMediaPlaylist* theWrappedObject, int  steps = 1) const;
   QMediaPlaylist::PlaybackMode  playbackMode(QMediaPlaylist* theWrappedObject) const;
   int  previousIndex(QMediaPlaylist* theWrappedObject, int  steps = 1) const;
   bool  removeMedia(QMediaPlaylist* theWrappedObject, int  pos);
   bool  removeMedia(QMediaPlaylist* theWrappedObject, int  start, int  end);
   bool  save(QMediaPlaylist* theWrappedObject, QIODevice*  device, const char*  format);
   bool  save(QMediaPlaylist* theWrappedObject, const QUrl&  location, const char*  format = nullptr);
   bool  py_q_setMediaObject(QMediaPlaylist* theWrappedObject, QMediaObject*  object){  return (((PythonQtPublicPromoter_QMediaPlaylist*)theWrappedObject)->py_q_setMediaObject(object));}
   void setPlaybackMode(QMediaPlaylist* theWrappedObject, QMediaPlaylist::PlaybackMode  mode);
    bool __nonzero__(QMediaPlaylist* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QMediaRecorder : public QMediaRecorder
{
public:
    PythonQtShell_QMediaRecorder(QMediaObject*  mediaObject, QObject*  parent = nullptr):QMediaRecorder(mediaObject, parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaRecorder();

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

class PythonQtPublicPromoter_QMediaRecorder : public QMediaRecorder
{ public:
inline bool  promoted_setMediaObject(QMediaObject*  object) { return this->setMediaObject(object); }
inline QMediaObject*  py_q_mediaObject() const { return QMediaRecorder::mediaObject(); }
inline bool  py_q_setMediaObject(QMediaObject*  object) { return QMediaRecorder::setMediaObject(object); }
};

class PythonQtWrapper_QMediaRecorder : public QObject
{ Q_OBJECT
public:
public slots:
QMediaRecorder* new_QMediaRecorder(QMediaObject*  mediaObject, QObject*  parent = nullptr);
void delete_QMediaRecorder(QMediaRecorder* obj) { delete obj; } 
   QUrl  actualLocation(QMediaRecorder* theWrappedObject) const;
   QString  audioCodecDescription(QMediaRecorder* theWrappedObject, const QString&  codecName) const;
   QAudioEncoderSettings  audioSettings(QMediaRecorder* theWrappedObject) const;
   QMultimedia::AvailabilityStatus  availability(QMediaRecorder* theWrappedObject) const;
   QStringList  availableMetaData(QMediaRecorder* theWrappedObject) const;
   QString  containerDescription(QMediaRecorder* theWrappedObject, const QString&  format) const;
   QString  containerFormat(QMediaRecorder* theWrappedObject) const;
   qint64  duration(QMediaRecorder* theWrappedObject) const;
   QMediaRecorder::Error  error(QMediaRecorder* theWrappedObject) const;
   QString  errorString(QMediaRecorder* theWrappedObject) const;
   bool  isAvailable(QMediaRecorder* theWrappedObject) const;
   bool  isMetaDataAvailable(QMediaRecorder* theWrappedObject) const;
   bool  isMetaDataWritable(QMediaRecorder* theWrappedObject) const;
   bool  isMuted(QMediaRecorder* theWrappedObject) const;
   QMediaObject*  py_q_mediaObject(QMediaRecorder* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaRecorder*)theWrappedObject)->py_q_mediaObject());}
   QVariant  metaData(QMediaRecorder* theWrappedObject, const QString&  key) const;
   QUrl  outputLocation(QMediaRecorder* theWrappedObject) const;
   void setAudioSettings(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  audioSettings);
   void setContainerFormat(QMediaRecorder* theWrappedObject, const QString&  container);
   void setEncodingSettings(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  audioSettings, const QVideoEncoderSettings&  videoSettings = QVideoEncoderSettings(), const QString&  containerMimeType = QString());
   bool  py_q_setMediaObject(QMediaRecorder* theWrappedObject, QMediaObject*  object){  return (((PythonQtPublicPromoter_QMediaRecorder*)theWrappedObject)->py_q_setMediaObject(object));}
   void setMetaData(QMediaRecorder* theWrappedObject, const QString&  key, const QVariant&  value);
   bool  setOutputLocation(QMediaRecorder* theWrappedObject, const QUrl&  location);
   void setVideoSettings(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  videoSettings);
   QMediaRecorder::State  state(QMediaRecorder* theWrappedObject) const;
   QMediaRecorder::Status  status(QMediaRecorder* theWrappedObject) const;
   QStringList  supportedAudioCodecs(QMediaRecorder* theWrappedObject) const;
   QList<int >  supportedAudioSampleRates(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  settings = QAudioEncoderSettings(), bool*  continuous = nullptr) const;
   QStringList  supportedContainers(QMediaRecorder* theWrappedObject) const;
   QList<qreal >  supportedFrameRates(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  settings = QVideoEncoderSettings(), bool*  continuous = nullptr) const;
   QList<QSize >  supportedResolutions(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  settings = QVideoEncoderSettings(), bool*  continuous = nullptr) const;
   QStringList  supportedVideoCodecs(QMediaRecorder* theWrappedObject) const;
   QString  videoCodecDescription(QMediaRecorder* theWrappedObject, const QString&  codecName) const;
   QVideoEncoderSettings  videoSettings(QMediaRecorder* theWrappedObject) const;
   qreal  volume(QMediaRecorder* theWrappedObject) const;
};





class PythonQtShell_QMediaRecorderControl : public QMediaRecorderControl
{
public:
    PythonQtShell_QMediaRecorderControl(QObject*  parent = nullptr):QMediaRecorderControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaRecorderControl();

virtual void applySettings();
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual qint64  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isMuted() const;
virtual QUrl  outputLocation() const;
virtual void setMuted(bool  muted);
virtual bool  setOutputLocation(const QUrl&  location);
virtual void setState(QMediaRecorder::State  state);
virtual void setVolume(qreal  volume);
virtual QMediaRecorder::State  state() const;
virtual QMediaRecorder::Status  status() const;
virtual void timerEvent(QTimerEvent*  event);
virtual qreal  volume() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaRecorderControl : public QMediaRecorderControl
{ public:
inline void py_q_applySettings() { this->applySettings(); }
inline qint64  py_q_duration() const { return this->duration(); }
inline bool  py_q_isMuted() const { return this->isMuted(); }
inline QUrl  py_q_outputLocation() const { return this->outputLocation(); }
inline void py_q_setMuted(bool  muted) { this->setMuted(muted); }
inline bool  py_q_setOutputLocation(const QUrl&  location) { return this->setOutputLocation(location); }
inline void py_q_setState(QMediaRecorder::State  state) { this->setState(state); }
inline void py_q_setVolume(qreal  volume) { this->setVolume(volume); }
inline QMediaRecorder::State  py_q_state() const { return this->state(); }
inline QMediaRecorder::Status  py_q_status() const { return this->status(); }
inline qreal  py_q_volume() const { return this->volume(); }
};

class PythonQtWrapper_QMediaRecorderControl : public QObject
{ Q_OBJECT
public:
public slots:
QMediaRecorderControl* new_QMediaRecorderControl(QObject*  parent = nullptr);
void delete_QMediaRecorderControl(QMediaRecorderControl* obj) { delete obj; } 
   void applySettings(QMediaRecorderControl* theWrappedObject);
   void py_q_applySettings(QMediaRecorderControl* theWrappedObject){  (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_applySettings());}
   qint64  duration(QMediaRecorderControl* theWrappedObject) const;
   qint64  py_q_duration(QMediaRecorderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_duration());}
   bool  isMuted(QMediaRecorderControl* theWrappedObject) const;
   bool  py_q_isMuted(QMediaRecorderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_isMuted());}
   QUrl  outputLocation(QMediaRecorderControl* theWrappedObject) const;
   QUrl  py_q_outputLocation(QMediaRecorderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_outputLocation());}
   void py_q_setMuted(QMediaRecorderControl* theWrappedObject, bool  muted){  (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_setMuted(muted));}
   bool  setOutputLocation(QMediaRecorderControl* theWrappedObject, const QUrl&  location);
   bool  py_q_setOutputLocation(QMediaRecorderControl* theWrappedObject, const QUrl&  location){  return (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_setOutputLocation(location));}
   void py_q_setState(QMediaRecorderControl* theWrappedObject, QMediaRecorder::State  state){  (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_setState(state));}
   void py_q_setVolume(QMediaRecorderControl* theWrappedObject, qreal  volume){  (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_setVolume(volume));}
   QMediaRecorder::State  state(QMediaRecorderControl* theWrappedObject) const;
   QMediaRecorder::State  py_q_state(QMediaRecorderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_state());}
   QMediaRecorder::Status  status(QMediaRecorderControl* theWrappedObject) const;
   QMediaRecorder::Status  py_q_status(QMediaRecorderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_status());}
   qreal  volume(QMediaRecorderControl* theWrappedObject) const;
   qreal  py_q_volume(QMediaRecorderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaRecorderControl*)theWrappedObject)->py_q_volume());}
};





class PythonQtWrapper_QMediaResource : public QObject
{ Q_OBJECT
public:
public slots:
QMediaResource* new_QMediaResource();
QMediaResource* new_QMediaResource(const QMediaResource&  other);
QMediaResource* new_QMediaResource(const QNetworkRequest&  request, const QString&  mimeType = QString());
QMediaResource* new_QMediaResource(const QUrl&  url, const QString&  mimeType = QString());
void delete_QMediaResource(QMediaResource* obj) { delete obj; } 
   int  audioBitRate(QMediaResource* theWrappedObject) const;
   QString  audioCodec(QMediaResource* theWrappedObject) const;
   int  channelCount(QMediaResource* theWrappedObject) const;
   qint64  dataSize(QMediaResource* theWrappedObject) const;
   bool  isNull(QMediaResource* theWrappedObject) const;
   QString  language(QMediaResource* theWrappedObject) const;
   QString  mimeType(QMediaResource* theWrappedObject) const;
   bool  __ne__(QMediaResource* theWrappedObject, const QMediaResource&  other) const;
   QMediaResource*  operator_assign(QMediaResource* theWrappedObject, const QMediaResource&  other);
   bool  __eq__(QMediaResource* theWrappedObject, const QMediaResource&  other) const;
   QNetworkRequest  request(QMediaResource* theWrappedObject) const;
   QSize  resolution(QMediaResource* theWrappedObject) const;
   int  sampleRate(QMediaResource* theWrappedObject) const;
   void setAudioBitRate(QMediaResource* theWrappedObject, int  rate);
   void setAudioCodec(QMediaResource* theWrappedObject, const QString&  codec);
   void setChannelCount(QMediaResource* theWrappedObject, int  channels);
   void setDataSize(QMediaResource* theWrappedObject, const qint64  size);
   void setLanguage(QMediaResource* theWrappedObject, const QString&  language);
   void setResolution(QMediaResource* theWrappedObject, const QSize&  resolution);
   void setResolution(QMediaResource* theWrappedObject, int  width, int  height);
   void setSampleRate(QMediaResource* theWrappedObject, int  frequency);
   void setVideoBitRate(QMediaResource* theWrappedObject, int  rate);
   void setVideoCodec(QMediaResource* theWrappedObject, const QString&  codec);
   QUrl  url(QMediaResource* theWrappedObject) const;
   int  videoBitRate(QMediaResource* theWrappedObject) const;
   QString  videoCodec(QMediaResource* theWrappedObject) const;
    bool __nonzero__(QMediaResource* obj) { return !obj->isNull(); }
};





class PythonQtShell_QMediaService : public QMediaService
{
public:
    PythonQtShell_QMediaService(QObject*  parent):QMediaService(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaService();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void releaseControl(QMediaControl*  control);
virtual QMediaControl*  requestControl(const char*  name);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaService : public QMediaService
{ public:
inline void py_q_releaseControl(QMediaControl*  control) { this->releaseControl(control); }
inline QMediaControl*  py_q_requestControl(const char*  name) { return this->requestControl(name); }
};

class PythonQtWrapper_QMediaService : public QObject
{ Q_OBJECT
public:
public slots:
QMediaService* new_QMediaService(QObject*  parent);
void delete_QMediaService(QMediaService* obj) { delete obj; } 
   void releaseControl(QMediaService* theWrappedObject, QMediaControl*  control);
   void py_q_releaseControl(QMediaService* theWrappedObject, QMediaControl*  control){  (((PythonQtPublicPromoter_QMediaService*)theWrappedObject)->py_q_releaseControl(control));}
   QMediaControl*  requestControl(QMediaService* theWrappedObject, const char*  name);
   QMediaControl*  py_q_requestControl(QMediaService* theWrappedObject, const char*  name){  return (((PythonQtPublicPromoter_QMediaService*)theWrappedObject)->py_q_requestControl(name));}
};





class PythonQtShell_QMediaServiceCameraInfoInterface : public QMediaServiceCameraInfoInterface
{
public:
    PythonQtShell_QMediaServiceCameraInfoInterface():QMediaServiceCameraInfoInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QMediaServiceCameraInfoInterface();

virtual int  cameraOrientation(const QByteArray&  device) const;
virtual QCamera::Position  cameraPosition(const QByteArray&  device) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaServiceCameraInfoInterface : public QMediaServiceCameraInfoInterface
{ public:
inline int  py_q_cameraOrientation(const QByteArray&  device) const { return this->cameraOrientation(device); }
inline QCamera::Position  py_q_cameraPosition(const QByteArray&  device) const { return this->cameraPosition(device); }
};

class PythonQtWrapper_QMediaServiceCameraInfoInterface : public QObject
{ Q_OBJECT
public:
public slots:
QMediaServiceCameraInfoInterface* new_QMediaServiceCameraInfoInterface();
void delete_QMediaServiceCameraInfoInterface(QMediaServiceCameraInfoInterface* obj) { delete obj; } 
   int  cameraOrientation(QMediaServiceCameraInfoInterface* theWrappedObject, const QByteArray&  device) const;
   int  py_q_cameraOrientation(QMediaServiceCameraInfoInterface* theWrappedObject, const QByteArray&  device) const{  return (((PythonQtPublicPromoter_QMediaServiceCameraInfoInterface*)theWrappedObject)->py_q_cameraOrientation(device));}
   QCamera::Position  cameraPosition(QMediaServiceCameraInfoInterface* theWrappedObject, const QByteArray&  device) const;
   QCamera::Position  py_q_cameraPosition(QMediaServiceCameraInfoInterface* theWrappedObject, const QByteArray&  device) const{  return (((PythonQtPublicPromoter_QMediaServiceCameraInfoInterface*)theWrappedObject)->py_q_cameraPosition(device));}
};





class PythonQtShell_QMediaServiceDefaultDeviceInterface : public QMediaServiceDefaultDeviceInterface
{
public:
    PythonQtShell_QMediaServiceDefaultDeviceInterface():QMediaServiceDefaultDeviceInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QMediaServiceDefaultDeviceInterface();

virtual QByteArray  defaultDevice(const QByteArray&  service) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaServiceDefaultDeviceInterface : public QMediaServiceDefaultDeviceInterface
{ public:
inline QByteArray  py_q_defaultDevice(const QByteArray&  service) const { return this->defaultDevice(service); }
};

class PythonQtWrapper_QMediaServiceDefaultDeviceInterface : public QObject
{ Q_OBJECT
public:
public slots:
QMediaServiceDefaultDeviceInterface* new_QMediaServiceDefaultDeviceInterface();
void delete_QMediaServiceDefaultDeviceInterface(QMediaServiceDefaultDeviceInterface* obj) { delete obj; } 
   QByteArray  defaultDevice(QMediaServiceDefaultDeviceInterface* theWrappedObject, const QByteArray&  service) const;
   QByteArray  py_q_defaultDevice(QMediaServiceDefaultDeviceInterface* theWrappedObject, const QByteArray&  service) const{  return (((PythonQtPublicPromoter_QMediaServiceDefaultDeviceInterface*)theWrappedObject)->py_q_defaultDevice(service));}
};





class PythonQtShell_QMediaServiceProviderFactoryInterface : public QMediaServiceProviderFactoryInterface
{
public:
    PythonQtShell_QMediaServiceProviderFactoryInterface():QMediaServiceProviderFactoryInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QMediaServiceProviderFactoryInterface();

virtual QMediaService*  create(const QString&  key);
virtual void release(QMediaService*  service);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaServiceProviderFactoryInterface : public QMediaServiceProviderFactoryInterface
{ public:
inline QMediaService*  py_q_create(const QString&  key) { return this->create(key); }
inline void py_q_release(QMediaService*  service) { this->release(service); }
};

class PythonQtWrapper_QMediaServiceProviderFactoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QMediaServiceProviderFactoryInterface* new_QMediaServiceProviderFactoryInterface();
void delete_QMediaServiceProviderFactoryInterface(QMediaServiceProviderFactoryInterface* obj) { delete obj; } 
   QMediaService*  create(QMediaServiceProviderFactoryInterface* theWrappedObject, const QString&  key);
   QMediaService*  py_q_create(QMediaServiceProviderFactoryInterface* theWrappedObject, const QString&  key){  return (((PythonQtPublicPromoter_QMediaServiceProviderFactoryInterface*)theWrappedObject)->py_q_create(key));}
   void release(QMediaServiceProviderFactoryInterface* theWrappedObject, QMediaService*  service);
   void py_q_release(QMediaServiceProviderFactoryInterface* theWrappedObject, QMediaService*  service){  (((PythonQtPublicPromoter_QMediaServiceProviderFactoryInterface*)theWrappedObject)->py_q_release(service));}
};





class PythonQtWrapper_QMediaServiceProviderHint : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Feature Type )
enum Feature{
  LowLatencyPlayback = QMediaServiceProviderHint::LowLatencyPlayback,   RecordingSupport = QMediaServiceProviderHint::RecordingSupport,   StreamPlayback = QMediaServiceProviderHint::StreamPlayback,   VideoSurface = QMediaServiceProviderHint::VideoSurface};
enum Type{
  Null = QMediaServiceProviderHint::Null,   ContentType = QMediaServiceProviderHint::ContentType,   Device = QMediaServiceProviderHint::Device,   SupportedFeatures = QMediaServiceProviderHint::SupportedFeatures,   CameraPosition = QMediaServiceProviderHint::CameraPosition};
public slots:
QMediaServiceProviderHint* new_QMediaServiceProviderHint();
QMediaServiceProviderHint* new_QMediaServiceProviderHint(QCamera::Position  position);
QMediaServiceProviderHint* new_QMediaServiceProviderHint(const QByteArray&  device);
QMediaServiceProviderHint* new_QMediaServiceProviderHint(const QMediaServiceProviderHint&  other);
QMediaServiceProviderHint* new_QMediaServiceProviderHint(const QString&  mimeType, const QStringList&  codecs);
void delete_QMediaServiceProviderHint(QMediaServiceProviderHint* obj) { delete obj; } 
   QCamera::Position  cameraPosition(QMediaServiceProviderHint* theWrappedObject) const;
   QStringList  codecs(QMediaServiceProviderHint* theWrappedObject) const;
   QByteArray  device(QMediaServiceProviderHint* theWrappedObject) const;
   bool  isNull(QMediaServiceProviderHint* theWrappedObject) const;
   QString  mimeType(QMediaServiceProviderHint* theWrappedObject) const;
   bool  __ne__(QMediaServiceProviderHint* theWrappedObject, const QMediaServiceProviderHint&  other) const;
   QMediaServiceProviderHint*  operator_assign(QMediaServiceProviderHint* theWrappedObject, const QMediaServiceProviderHint&  other);
   bool  __eq__(QMediaServiceProviderHint* theWrappedObject, const QMediaServiceProviderHint&  other) const;
   QMediaServiceProviderHint::Type  type(QMediaServiceProviderHint* theWrappedObject) const;
    bool __nonzero__(QMediaServiceProviderHint* obj) { return !obj->isNull(); }
};





class PythonQtShell_QMediaServiceProviderPlugin : public QMediaServiceProviderPlugin
{
public:
    PythonQtShell_QMediaServiceProviderPlugin():QMediaServiceProviderPlugin(),_wrapper(NULL) {};

   ~PythonQtShell_QMediaServiceProviderPlugin();

virtual QMediaService*  create(const QString&  key);
virtual void release(QMediaService*  service);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaServiceProviderPlugin : public QMediaServiceProviderPlugin
{ public:
inline QMediaService*  py_q_create(const QString&  key) { return this->create(key); }
inline void py_q_release(QMediaService*  service) { this->release(service); }
};

class PythonQtWrapper_QMediaServiceProviderPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QMediaServiceProviderPlugin* new_QMediaServiceProviderPlugin();
void delete_QMediaServiceProviderPlugin(QMediaServiceProviderPlugin* obj) { delete obj; } 
   QMediaService*  create(QMediaServiceProviderPlugin* theWrappedObject, const QString&  key);
   QMediaService*  py_q_create(QMediaServiceProviderPlugin* theWrappedObject, const QString&  key){  return (((PythonQtPublicPromoter_QMediaServiceProviderPlugin*)theWrappedObject)->py_q_create(key));}
   void release(QMediaServiceProviderPlugin* theWrappedObject, QMediaService*  service);
   void py_q_release(QMediaServiceProviderPlugin* theWrappedObject, QMediaService*  service){  (((PythonQtPublicPromoter_QMediaServiceProviderPlugin*)theWrappedObject)->py_q_release(service));}
};





class PythonQtShell_QMediaServiceSupportedDevicesInterface : public QMediaServiceSupportedDevicesInterface
{
public:
    PythonQtShell_QMediaServiceSupportedDevicesInterface():QMediaServiceSupportedDevicesInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QMediaServiceSupportedDevicesInterface();

virtual QString  deviceDescription(const QByteArray&  service, const QByteArray&  device);
virtual QList<QByteArray >  devices(const QByteArray&  service) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaServiceSupportedDevicesInterface : public QMediaServiceSupportedDevicesInterface
{ public:
inline QString  py_q_deviceDescription(const QByteArray&  service, const QByteArray&  device) { return this->deviceDescription(service, device); }
inline QList<QByteArray >  py_q_devices(const QByteArray&  service) const { return this->devices(service); }
};

class PythonQtWrapper_QMediaServiceSupportedDevicesInterface : public QObject
{ Q_OBJECT
public:
public slots:
QMediaServiceSupportedDevicesInterface* new_QMediaServiceSupportedDevicesInterface();
void delete_QMediaServiceSupportedDevicesInterface(QMediaServiceSupportedDevicesInterface* obj) { delete obj; } 
   QString  deviceDescription(QMediaServiceSupportedDevicesInterface* theWrappedObject, const QByteArray&  service, const QByteArray&  device);
   QString  py_q_deviceDescription(QMediaServiceSupportedDevicesInterface* theWrappedObject, const QByteArray&  service, const QByteArray&  device){  return (((PythonQtPublicPromoter_QMediaServiceSupportedDevicesInterface*)theWrappedObject)->py_q_deviceDescription(service, device));}
   QList<QByteArray >  devices(QMediaServiceSupportedDevicesInterface* theWrappedObject, const QByteArray&  service) const;
   QList<QByteArray >  py_q_devices(QMediaServiceSupportedDevicesInterface* theWrappedObject, const QByteArray&  service) const{  return (((PythonQtPublicPromoter_QMediaServiceSupportedDevicesInterface*)theWrappedObject)->py_q_devices(service));}
};





class PythonQtShell_QMediaServiceSupportedFormatsInterface : public QMediaServiceSupportedFormatsInterface
{
public:
    PythonQtShell_QMediaServiceSupportedFormatsInterface():QMediaServiceSupportedFormatsInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QMediaServiceSupportedFormatsInterface();

virtual QMultimedia::SupportEstimate  hasSupport(const QString&  mimeType, const QStringList&  codecs) const;
virtual QStringList  supportedMimeTypes() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaServiceSupportedFormatsInterface : public QMediaServiceSupportedFormatsInterface
{ public:
inline QMultimedia::SupportEstimate  py_q_hasSupport(const QString&  mimeType, const QStringList&  codecs) const { return this->hasSupport(mimeType, codecs); }
inline QStringList  py_q_supportedMimeTypes() const { return this->supportedMimeTypes(); }
};

class PythonQtWrapper_QMediaServiceSupportedFormatsInterface : public QObject
{ Q_OBJECT
public:
public slots:
QMediaServiceSupportedFormatsInterface* new_QMediaServiceSupportedFormatsInterface();
void delete_QMediaServiceSupportedFormatsInterface(QMediaServiceSupportedFormatsInterface* obj) { delete obj; } 
   QMultimedia::SupportEstimate  hasSupport(QMediaServiceSupportedFormatsInterface* theWrappedObject, const QString&  mimeType, const QStringList&  codecs) const;
   QMultimedia::SupportEstimate  py_q_hasSupport(QMediaServiceSupportedFormatsInterface* theWrappedObject, const QString&  mimeType, const QStringList&  codecs) const{  return (((PythonQtPublicPromoter_QMediaServiceSupportedFormatsInterface*)theWrappedObject)->py_q_hasSupport(mimeType, codecs));}
   QStringList  supportedMimeTypes(QMediaServiceSupportedFormatsInterface* theWrappedObject) const;
   QStringList  py_q_supportedMimeTypes(QMediaServiceSupportedFormatsInterface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaServiceSupportedFormatsInterface*)theWrappedObject)->py_q_supportedMimeTypes());}
};





class PythonQtShell_QMediaStreamsControl : public QMediaStreamsControl
{
public:
    PythonQtShell_QMediaStreamsControl(QObject*  parent = nullptr):QMediaStreamsControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaStreamsControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isActive(int  streamNumber);
virtual QVariant  metaData(int  streamNumber, const QString&  key);
virtual void setActive(int  streamNumber, bool  state);
virtual int  streamCount();
virtual QMediaStreamsControl::StreamType  streamType(int  streamNumber);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaStreamsControl : public QMediaStreamsControl
{ public:
inline bool  py_q_isActive(int  streamNumber) { return this->isActive(streamNumber); }
inline QVariant  py_q_metaData(int  streamNumber, const QString&  key) { return this->metaData(streamNumber, key); }
inline void py_q_setActive(int  streamNumber, bool  state) { this->setActive(streamNumber, state); }
inline int  py_q_streamCount() { return this->streamCount(); }
inline QMediaStreamsControl::StreamType  py_q_streamType(int  streamNumber) { return this->streamType(streamNumber); }
};

class PythonQtWrapper_QMediaStreamsControl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StreamType )
enum StreamType{
  UnknownStream = QMediaStreamsControl::UnknownStream,   VideoStream = QMediaStreamsControl::VideoStream,   AudioStream = QMediaStreamsControl::AudioStream,   SubPictureStream = QMediaStreamsControl::SubPictureStream,   DataStream = QMediaStreamsControl::DataStream};
public slots:
QMediaStreamsControl* new_QMediaStreamsControl(QObject*  parent = nullptr);
void delete_QMediaStreamsControl(QMediaStreamsControl* obj) { delete obj; } 
   bool  isActive(QMediaStreamsControl* theWrappedObject, int  streamNumber);
   bool  py_q_isActive(QMediaStreamsControl* theWrappedObject, int  streamNumber){  return (((PythonQtPublicPromoter_QMediaStreamsControl*)theWrappedObject)->py_q_isActive(streamNumber));}
   QVariant  metaData(QMediaStreamsControl* theWrappedObject, int  streamNumber, const QString&  key);
   QVariant  py_q_metaData(QMediaStreamsControl* theWrappedObject, int  streamNumber, const QString&  key){  return (((PythonQtPublicPromoter_QMediaStreamsControl*)theWrappedObject)->py_q_metaData(streamNumber, key));}
   void setActive(QMediaStreamsControl* theWrappedObject, int  streamNumber, bool  state);
   void py_q_setActive(QMediaStreamsControl* theWrappedObject, int  streamNumber, bool  state){  (((PythonQtPublicPromoter_QMediaStreamsControl*)theWrappedObject)->py_q_setActive(streamNumber, state));}
   int  streamCount(QMediaStreamsControl* theWrappedObject);
   int  py_q_streamCount(QMediaStreamsControl* theWrappedObject){  return (((PythonQtPublicPromoter_QMediaStreamsControl*)theWrappedObject)->py_q_streamCount());}
   QMediaStreamsControl::StreamType  streamType(QMediaStreamsControl* theWrappedObject, int  streamNumber);
   QMediaStreamsControl::StreamType  py_q_streamType(QMediaStreamsControl* theWrappedObject, int  streamNumber){  return (((PythonQtPublicPromoter_QMediaStreamsControl*)theWrappedObject)->py_q_streamType(streamNumber));}
};





class PythonQtWrapper_QMediaTimeInterval : public QObject
{ Q_OBJECT
public:
public slots:
QMediaTimeInterval* new_QMediaTimeInterval();
QMediaTimeInterval* new_QMediaTimeInterval(const QMediaTimeInterval&  arg__1);
QMediaTimeInterval* new_QMediaTimeInterval(qint64  start, qint64  end);
void delete_QMediaTimeInterval(QMediaTimeInterval* obj) { delete obj; } 
   bool  contains(QMediaTimeInterval* theWrappedObject, qint64  time) const;
   qint64  end(QMediaTimeInterval* theWrappedObject) const;
   bool  isNormal(QMediaTimeInterval* theWrappedObject) const;
   QMediaTimeInterval  normalized(QMediaTimeInterval* theWrappedObject) const;
   bool  __eq__(QMediaTimeInterval* theWrappedObject, const QMediaTimeInterval&  arg__2);
   qint64  start(QMediaTimeInterval* theWrappedObject) const;
   QMediaTimeInterval  translated(QMediaTimeInterval* theWrappedObject, qint64  offset) const;
};





class PythonQtWrapper_QMediaTimeRange : public QObject
{ Q_OBJECT
public:
public slots:
QMediaTimeRange* new_QMediaTimeRange();
QMediaTimeRange* new_QMediaTimeRange(const QMediaTimeInterval&  arg__1);
QMediaTimeRange* new_QMediaTimeRange(const QMediaTimeRange&  range);
QMediaTimeRange* new_QMediaTimeRange(qint64  start, qint64  end);
void delete_QMediaTimeRange(QMediaTimeRange* obj) { delete obj; } 
   void addInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeInterval&  interval);
   void addInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end);
   void addTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   void clear(QMediaTimeRange* theWrappedObject);
   bool  contains(QMediaTimeRange* theWrappedObject, qint64  time) const;
   qint64  earliestTime(QMediaTimeRange* theWrappedObject) const;
   QList<QMediaTimeInterval >  intervals(QMediaTimeRange* theWrappedObject) const;
   bool  isContinuous(QMediaTimeRange* theWrappedObject) const;
   bool  isEmpty(QMediaTimeRange* theWrappedObject) const;
   qint64  latestTime(QMediaTimeRange* theWrappedObject) const;
   QMediaTimeRange  __add__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2);
   QMediaTimeRange*  __iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeInterval&  arg__1);
   QMediaTimeRange*  __iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   QMediaTimeRange  __sub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2);
   QMediaTimeRange*  __isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeInterval&  arg__1);
   QMediaTimeRange*  __isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   QMediaTimeRange*  operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeInterval&  arg__1);
   QMediaTimeRange*  operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   bool  __eq__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2);
   void removeInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeInterval&  interval);
   void removeInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end);
   void removeTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
    QString py_toString(QMediaTimeRange*);
    bool __nonzero__(QMediaTimeRange* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QMediaVideoProbeControl : public QMediaVideoProbeControl
{
public:
    PythonQtShell_QMediaVideoProbeControl(QObject*  parent = nullptr):QMediaVideoProbeControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaVideoProbeControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMediaVideoProbeControl : public QObject
{ Q_OBJECT
public:
public slots:
QMediaVideoProbeControl* new_QMediaVideoProbeControl(QObject*  parent = nullptr);
void delete_QMediaVideoProbeControl(QMediaVideoProbeControl* obj) { delete obj; } 
};





class PythonQtShell_QMetaDataReaderControl : public QMetaDataReaderControl
{
public:
    PythonQtShell_QMetaDataReaderControl(QObject*  parent = nullptr):QMetaDataReaderControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMetaDataReaderControl();

virtual QStringList  availableMetaData() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isMetaDataAvailable() const;
virtual QVariant  metaData(const QString&  key) const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMetaDataReaderControl : public QMetaDataReaderControl
{ public:
inline QStringList  py_q_availableMetaData() const { return this->availableMetaData(); }
inline bool  py_q_isMetaDataAvailable() const { return this->isMetaDataAvailable(); }
inline QVariant  py_q_metaData(const QString&  key) const { return this->metaData(key); }
};

class PythonQtWrapper_QMetaDataReaderControl : public QObject
{ Q_OBJECT
public:
public slots:
QMetaDataReaderControl* new_QMetaDataReaderControl(QObject*  parent = nullptr);
void delete_QMetaDataReaderControl(QMetaDataReaderControl* obj) { delete obj; } 
   QStringList  availableMetaData(QMetaDataReaderControl* theWrappedObject) const;
   QStringList  py_q_availableMetaData(QMetaDataReaderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMetaDataReaderControl*)theWrappedObject)->py_q_availableMetaData());}
   bool  isMetaDataAvailable(QMetaDataReaderControl* theWrappedObject) const;
   bool  py_q_isMetaDataAvailable(QMetaDataReaderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMetaDataReaderControl*)theWrappedObject)->py_q_isMetaDataAvailable());}
   QVariant  metaData(QMetaDataReaderControl* theWrappedObject, const QString&  key) const;
   QVariant  py_q_metaData(QMetaDataReaderControl* theWrappedObject, const QString&  key) const{  return (((PythonQtPublicPromoter_QMetaDataReaderControl*)theWrappedObject)->py_q_metaData(key));}
};





class PythonQtShell_QMetaDataWriterControl : public QMetaDataWriterControl
{
public:
    PythonQtShell_QMetaDataWriterControl(QObject*  parent = nullptr):QMetaDataWriterControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMetaDataWriterControl();

virtual QStringList  availableMetaData() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isMetaDataAvailable() const;
virtual bool  isWritable() const;
virtual QVariant  metaData(const QString&  key) const;
virtual void setMetaData(const QString&  key, const QVariant&  value);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMetaDataWriterControl : public QMetaDataWriterControl
{ public:
inline QStringList  py_q_availableMetaData() const { return this->availableMetaData(); }
inline bool  py_q_isMetaDataAvailable() const { return this->isMetaDataAvailable(); }
inline bool  py_q_isWritable() const { return this->isWritable(); }
inline QVariant  py_q_metaData(const QString&  key) const { return this->metaData(key); }
inline void py_q_setMetaData(const QString&  key, const QVariant&  value) { this->setMetaData(key, value); }
};

class PythonQtWrapper_QMetaDataWriterControl : public QObject
{ Q_OBJECT
public:
public slots:
QMetaDataWriterControl* new_QMetaDataWriterControl(QObject*  parent = nullptr);
void delete_QMetaDataWriterControl(QMetaDataWriterControl* obj) { delete obj; } 
   QStringList  availableMetaData(QMetaDataWriterControl* theWrappedObject) const;
   QStringList  py_q_availableMetaData(QMetaDataWriterControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMetaDataWriterControl*)theWrappedObject)->py_q_availableMetaData());}
   bool  isMetaDataAvailable(QMetaDataWriterControl* theWrappedObject) const;
   bool  py_q_isMetaDataAvailable(QMetaDataWriterControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMetaDataWriterControl*)theWrappedObject)->py_q_isMetaDataAvailable());}
   bool  isWritable(QMetaDataWriterControl* theWrappedObject) const;
   bool  py_q_isWritable(QMetaDataWriterControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMetaDataWriterControl*)theWrappedObject)->py_q_isWritable());}
   QVariant  metaData(QMetaDataWriterControl* theWrappedObject, const QString&  key) const;
   QVariant  py_q_metaData(QMetaDataWriterControl* theWrappedObject, const QString&  key) const{  return (((PythonQtPublicPromoter_QMetaDataWriterControl*)theWrappedObject)->py_q_metaData(key));}
   void setMetaData(QMetaDataWriterControl* theWrappedObject, const QString&  key, const QVariant&  value);
   void py_q_setMetaData(QMetaDataWriterControl* theWrappedObject, const QString&  key, const QVariant&  value){  (((PythonQtPublicPromoter_QMetaDataWriterControl*)theWrappedObject)->py_q_setMetaData(key, value));}
};





class PythonQtWrapper_QMultimedia : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AvailabilityStatus EncodingMode EncodingQuality SupportEstimate )
enum AvailabilityStatus{
  Available = QMultimedia::Available,   ServiceMissing = QMultimedia::ServiceMissing,   Busy = QMultimedia::Busy,   ResourceError = QMultimedia::ResourceError};
enum EncodingMode{
  ConstantQualityEncoding = QMultimedia::ConstantQualityEncoding,   ConstantBitRateEncoding = QMultimedia::ConstantBitRateEncoding,   AverageBitRateEncoding = QMultimedia::AverageBitRateEncoding,   TwoPassEncoding = QMultimedia::TwoPassEncoding};
enum EncodingQuality{
  VeryLowQuality = QMultimedia::VeryLowQuality,   LowQuality = QMultimedia::LowQuality,   NormalQuality = QMultimedia::NormalQuality,   HighQuality = QMultimedia::HighQuality,   VeryHighQuality = QMultimedia::VeryHighQuality};
enum SupportEstimate{
  NotSupported = QMultimedia::NotSupported,   MaybeSupported = QMultimedia::MaybeSupported,   ProbablySupported = QMultimedia::ProbablySupported,   PreferredService = QMultimedia::PreferredService};
public slots:
};





class PythonQtShell_QRadioData : public QRadioData
{
public:
    PythonQtShell_QRadioData(QMediaObject*  mediaObject, QObject*  parent = nullptr):QRadioData(mediaObject, parent),_wrapper(NULL) {};

   ~PythonQtShell_QRadioData();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QMediaObject*  mediaObject() const;
virtual bool  setMediaObject(QMediaObject*  arg__1);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRadioData : public QRadioData
{ public:
inline bool  promoted_setMediaObject(QMediaObject*  arg__1) { return this->setMediaObject(arg__1); }
inline QMediaObject*  py_q_mediaObject() const { return QRadioData::mediaObject(); }
inline bool  py_q_setMediaObject(QMediaObject*  arg__1) { return QRadioData::setMediaObject(arg__1); }
};

class PythonQtWrapper_QRadioData : public QObject
{ Q_OBJECT
public:
public slots:
QRadioData* new_QRadioData(QMediaObject*  mediaObject, QObject*  parent = nullptr);
void delete_QRadioData(QRadioData* obj) { delete obj; } 
   QMultimedia::AvailabilityStatus  availability(QRadioData* theWrappedObject) const;
   QRadioData::Error  error(QRadioData* theWrappedObject) const;
   QString  errorString(QRadioData* theWrappedObject) const;
   bool  isAlternativeFrequenciesEnabled(QRadioData* theWrappedObject) const;
   QMediaObject*  py_q_mediaObject(QRadioData* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioData*)theWrappedObject)->py_q_mediaObject());}
   QRadioData::ProgramType  programType(QRadioData* theWrappedObject) const;
   QString  programTypeName(QRadioData* theWrappedObject) const;
   QString  radioText(QRadioData* theWrappedObject) const;
   bool  py_q_setMediaObject(QRadioData* theWrappedObject, QMediaObject*  arg__1){  return (((PythonQtPublicPromoter_QRadioData*)theWrappedObject)->py_q_setMediaObject(arg__1));}
   QString  stationId(QRadioData* theWrappedObject) const;
   QString  stationName(QRadioData* theWrappedObject) const;
};





class PythonQtShell_QRadioDataControl : public QRadioDataControl
{
public:
    PythonQtShell_QRadioDataControl(QObject*  parent = nullptr):QRadioDataControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QRadioDataControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QRadioData::Error  error() const;
virtual QString  errorString() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isAlternativeFrequenciesEnabled() const;
virtual QRadioData::ProgramType  programType() const;
virtual QString  programTypeName() const;
virtual QString  radioText() const;
virtual void setAlternativeFrequenciesEnabled(bool  enabled);
virtual QString  stationId() const;
virtual QString  stationName() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRadioDataControl : public QRadioDataControl
{ public:
inline QRadioData::Error  py_q_error() const { return this->error(); }
inline QString  py_q_errorString() const { return this->errorString(); }
inline bool  py_q_isAlternativeFrequenciesEnabled() const { return this->isAlternativeFrequenciesEnabled(); }
inline QRadioData::ProgramType  py_q_programType() const { return this->programType(); }
inline QString  py_q_programTypeName() const { return this->programTypeName(); }
inline QString  py_q_radioText() const { return this->radioText(); }
inline void py_q_setAlternativeFrequenciesEnabled(bool  enabled) { this->setAlternativeFrequenciesEnabled(enabled); }
inline QString  py_q_stationId() const { return this->stationId(); }
inline QString  py_q_stationName() const { return this->stationName(); }
};

class PythonQtWrapper_QRadioDataControl : public QObject
{ Q_OBJECT
public:
public slots:
QRadioDataControl* new_QRadioDataControl(QObject*  parent = nullptr);
void delete_QRadioDataControl(QRadioDataControl* obj) { delete obj; } 
   QRadioData::Error  error(QRadioDataControl* theWrappedObject) const;
   QRadioData::Error  py_q_error(QRadioDataControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioDataControl*)theWrappedObject)->py_q_error());}
   QString  errorString(QRadioDataControl* theWrappedObject) const;
   QString  py_q_errorString(QRadioDataControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioDataControl*)theWrappedObject)->py_q_errorString());}
   bool  isAlternativeFrequenciesEnabled(QRadioDataControl* theWrappedObject) const;
   bool  py_q_isAlternativeFrequenciesEnabled(QRadioDataControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioDataControl*)theWrappedObject)->py_q_isAlternativeFrequenciesEnabled());}
   QRadioData::ProgramType  programType(QRadioDataControl* theWrappedObject) const;
   QRadioData::ProgramType  py_q_programType(QRadioDataControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioDataControl*)theWrappedObject)->py_q_programType());}
   QString  programTypeName(QRadioDataControl* theWrappedObject) const;
   QString  py_q_programTypeName(QRadioDataControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioDataControl*)theWrappedObject)->py_q_programTypeName());}
   QString  radioText(QRadioDataControl* theWrappedObject) const;
   QString  py_q_radioText(QRadioDataControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioDataControl*)theWrappedObject)->py_q_radioText());}
   void setAlternativeFrequenciesEnabled(QRadioDataControl* theWrappedObject, bool  enabled);
   void py_q_setAlternativeFrequenciesEnabled(QRadioDataControl* theWrappedObject, bool  enabled){  (((PythonQtPublicPromoter_QRadioDataControl*)theWrappedObject)->py_q_setAlternativeFrequenciesEnabled(enabled));}
   QString  stationId(QRadioDataControl* theWrappedObject) const;
   QString  py_q_stationId(QRadioDataControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioDataControl*)theWrappedObject)->py_q_stationId());}
   QString  stationName(QRadioDataControl* theWrappedObject) const;
   QString  py_q_stationName(QRadioDataControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioDataControl*)theWrappedObject)->py_q_stationName());}
};





class PythonQtShell_QRadioTuner : public QRadioTuner
{
public:
    PythonQtShell_QRadioTuner(QObject*  parent = nullptr):QRadioTuner(parent),_wrapper(NULL) {};

   ~PythonQtShell_QRadioTuner();

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

class PythonQtPublicPromoter_QRadioTuner : public QRadioTuner
{ public:
inline QMultimedia::AvailabilityStatus  py_q_availability() const { return QRadioTuner::availability(); }
};

class PythonQtWrapper_QRadioTuner : public QObject
{ Q_OBJECT
public:
public slots:
QRadioTuner* new_QRadioTuner(QObject*  parent = nullptr);
void delete_QRadioTuner(QRadioTuner* obj) { delete obj; } 
   QMultimedia::AvailabilityStatus  py_q_availability(QRadioTuner* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTuner*)theWrappedObject)->py_q_availability());}
   QRadioTuner::Band  band(QRadioTuner* theWrappedObject) const;
   QRadioTuner::Error  error(QRadioTuner* theWrappedObject) const;
   QString  errorString(QRadioTuner* theWrappedObject) const;
   int  frequency(QRadioTuner* theWrappedObject) const;
   QPair<int , int >  frequencyRange(QRadioTuner* theWrappedObject, QRadioTuner::Band  band) const;
   int  frequencyStep(QRadioTuner* theWrappedObject, QRadioTuner::Band  band) const;
   bool  isAntennaConnected(QRadioTuner* theWrappedObject) const;
   bool  isBandSupported(QRadioTuner* theWrappedObject, QRadioTuner::Band  b) const;
   bool  isMuted(QRadioTuner* theWrappedObject) const;
   bool  isSearching(QRadioTuner* theWrappedObject) const;
   bool  isStereo(QRadioTuner* theWrappedObject) const;
   QRadioData*  radioData(QRadioTuner* theWrappedObject) const;
   void setStereoMode(QRadioTuner* theWrappedObject, QRadioTuner::StereoMode  mode);
   int  signalStrength(QRadioTuner* theWrappedObject) const;
   QRadioTuner::State  state(QRadioTuner* theWrappedObject) const;
   QRadioTuner::StereoMode  stereoMode(QRadioTuner* theWrappedObject) const;
   int  volume(QRadioTuner* theWrappedObject) const;
};





class PythonQtShell_QRadioTunerControl : public QRadioTunerControl
{
public:
    PythonQtShell_QRadioTunerControl(QObject*  parent = nullptr):QRadioTunerControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QRadioTunerControl();

virtual QRadioTuner::Band  band() const;
virtual void cancelSearch();
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QRadioTuner::Error  error() const;
virtual QString  errorString() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual int  frequency() const;
virtual QPair<int , int >  frequencyRange(QRadioTuner::Band  b) const;
virtual int  frequencyStep(QRadioTuner::Band  b) const;
virtual bool  isAntennaConnected() const;
virtual bool  isBandSupported(QRadioTuner::Band  b) const;
virtual bool  isMuted() const;
virtual bool  isSearching() const;
virtual bool  isStereo() const;
virtual void searchAllStations(QRadioTuner::SearchMode  searchMode = QRadioTuner::SearchFast);
virtual void searchBackward();
virtual void searchForward();
virtual void setBand(QRadioTuner::Band  b);
virtual void setFrequency(int  frequency);
virtual void setMuted(bool  muted);
virtual void setStereoMode(QRadioTuner::StereoMode  mode);
virtual void setVolume(int  volume);
virtual int  signalStrength() const;
virtual void start();
virtual QRadioTuner::State  state() const;
virtual QRadioTuner::StereoMode  stereoMode() const;
virtual void stop();
virtual void timerEvent(QTimerEvent*  event);
virtual int  volume() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRadioTunerControl : public QRadioTunerControl
{ public:
inline QRadioTuner::Band  py_q_band() const { return this->band(); }
inline void py_q_cancelSearch() { this->cancelSearch(); }
inline QRadioTuner::Error  py_q_error() const { return this->error(); }
inline QString  py_q_errorString() const { return this->errorString(); }
inline int  py_q_frequency() const { return this->frequency(); }
inline QPair<int , int >  py_q_frequencyRange(QRadioTuner::Band  b) const { return this->frequencyRange(b); }
inline int  py_q_frequencyStep(QRadioTuner::Band  b) const { return this->frequencyStep(b); }
inline bool  py_q_isAntennaConnected() const { return QRadioTunerControl::isAntennaConnected(); }
inline bool  py_q_isBandSupported(QRadioTuner::Band  b) const { return this->isBandSupported(b); }
inline bool  py_q_isMuted() const { return this->isMuted(); }
inline bool  py_q_isSearching() const { return this->isSearching(); }
inline bool  py_q_isStereo() const { return this->isStereo(); }
inline void py_q_searchAllStations(QRadioTuner::SearchMode  searchMode = QRadioTuner::SearchFast) { this->searchAllStations(searchMode); }
inline void py_q_searchBackward() { this->searchBackward(); }
inline void py_q_searchForward() { this->searchForward(); }
inline void py_q_setBand(QRadioTuner::Band  b) { this->setBand(b); }
inline void py_q_setFrequency(int  frequency) { this->setFrequency(frequency); }
inline void py_q_setMuted(bool  muted) { this->setMuted(muted); }
inline void py_q_setStereoMode(QRadioTuner::StereoMode  mode) { this->setStereoMode(mode); }
inline void py_q_setVolume(int  volume) { this->setVolume(volume); }
inline int  py_q_signalStrength() const { return this->signalStrength(); }
inline void py_q_start() { this->start(); }
inline QRadioTuner::State  py_q_state() const { return this->state(); }
inline QRadioTuner::StereoMode  py_q_stereoMode() const { return this->stereoMode(); }
inline void py_q_stop() { this->stop(); }
inline int  py_q_volume() const { return this->volume(); }
};

class PythonQtWrapper_QRadioTunerControl : public QObject
{ Q_OBJECT
public:
public slots:
QRadioTunerControl* new_QRadioTunerControl(QObject*  parent = nullptr);
void delete_QRadioTunerControl(QRadioTunerControl* obj) { delete obj; } 
   QRadioTuner::Band  band(QRadioTunerControl* theWrappedObject) const;
   QRadioTuner::Band  py_q_band(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_band());}
   void cancelSearch(QRadioTunerControl* theWrappedObject);
   void py_q_cancelSearch(QRadioTunerControl* theWrappedObject){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_cancelSearch());}
   QRadioTuner::Error  error(QRadioTunerControl* theWrappedObject) const;
   QRadioTuner::Error  py_q_error(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_error());}
   QString  errorString(QRadioTunerControl* theWrappedObject) const;
   QString  py_q_errorString(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_errorString());}
   int  frequency(QRadioTunerControl* theWrappedObject) const;
   int  py_q_frequency(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_frequency());}
   QPair<int , int >  frequencyRange(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b) const;
   QPair<int , int >  py_q_frequencyRange(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_frequencyRange(b));}
   int  frequencyStep(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b) const;
   int  py_q_frequencyStep(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_frequencyStep(b));}
   bool  isAntennaConnected(QRadioTunerControl* theWrappedObject) const;
   bool  py_q_isAntennaConnected(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_isAntennaConnected());}
   bool  isBandSupported(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b) const;
   bool  py_q_isBandSupported(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_isBandSupported(b));}
   bool  isMuted(QRadioTunerControl* theWrappedObject) const;
   bool  py_q_isMuted(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_isMuted());}
   bool  isSearching(QRadioTunerControl* theWrappedObject) const;
   bool  py_q_isSearching(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_isSearching());}
   bool  isStereo(QRadioTunerControl* theWrappedObject) const;
   bool  py_q_isStereo(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_isStereo());}
   void searchAllStations(QRadioTunerControl* theWrappedObject, QRadioTuner::SearchMode  searchMode = QRadioTuner::SearchFast);
   void py_q_searchAllStations(QRadioTunerControl* theWrappedObject, QRadioTuner::SearchMode  searchMode = QRadioTuner::SearchFast){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_searchAllStations(searchMode));}
   void searchBackward(QRadioTunerControl* theWrappedObject);
   void py_q_searchBackward(QRadioTunerControl* theWrappedObject){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_searchBackward());}
   void searchForward(QRadioTunerControl* theWrappedObject);
   void py_q_searchForward(QRadioTunerControl* theWrappedObject){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_searchForward());}
   void setBand(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b);
   void py_q_setBand(QRadioTunerControl* theWrappedObject, QRadioTuner::Band  b){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_setBand(b));}
   void setFrequency(QRadioTunerControl* theWrappedObject, int  frequency);
   void py_q_setFrequency(QRadioTunerControl* theWrappedObject, int  frequency){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_setFrequency(frequency));}
   void setMuted(QRadioTunerControl* theWrappedObject, bool  muted);
   void py_q_setMuted(QRadioTunerControl* theWrappedObject, bool  muted){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_setMuted(muted));}
   void setStereoMode(QRadioTunerControl* theWrappedObject, QRadioTuner::StereoMode  mode);
   void py_q_setStereoMode(QRadioTunerControl* theWrappedObject, QRadioTuner::StereoMode  mode){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_setStereoMode(mode));}
   void setVolume(QRadioTunerControl* theWrappedObject, int  volume);
   void py_q_setVolume(QRadioTunerControl* theWrappedObject, int  volume){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_setVolume(volume));}
   int  signalStrength(QRadioTunerControl* theWrappedObject) const;
   int  py_q_signalStrength(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_signalStrength());}
   void start(QRadioTunerControl* theWrappedObject);
   void py_q_start(QRadioTunerControl* theWrappedObject){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_start());}
   QRadioTuner::State  state(QRadioTunerControl* theWrappedObject) const;
   QRadioTuner::State  py_q_state(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_state());}
   QRadioTuner::StereoMode  stereoMode(QRadioTunerControl* theWrappedObject) const;
   QRadioTuner::StereoMode  py_q_stereoMode(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_stereoMode());}
   void stop(QRadioTunerControl* theWrappedObject);
   void py_q_stop(QRadioTunerControl* theWrappedObject){  (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_stop());}
   int  volume(QRadioTunerControl* theWrappedObject) const;
   int  py_q_volume(QRadioTunerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QRadioTunerControl*)theWrappedObject)->py_q_volume());}
};





class PythonQtShell_QSound : public QSound
{
public:
    PythonQtShell_QSound(const QString&  filename, QObject*  parent = nullptr):QSound(filename, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSound();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSound : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Loop )
enum Loop{
  Infinite = QSound::Infinite};
public slots:
QSound* new_QSound(const QString&  filename, QObject*  parent = nullptr);
void delete_QSound(QSound* obj) { delete obj; } 
   QString  fileName(QSound* theWrappedObject) const;
   bool  isFinished(QSound* theWrappedObject) const;
   int  loops(QSound* theWrappedObject) const;
   int  loopsRemaining(QSound* theWrappedObject) const;
   void static_QSound_play(const QString&  filename);
   void setLoops(QSound* theWrappedObject, int  arg__1);
};





class PythonQtShell_QSoundEffect : public QSoundEffect
{
public:
    PythonQtShell_QSoundEffect(QObject*  parent = nullptr):QSoundEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSoundEffect();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSoundEffect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Loop Status )
enum Loop{
  Infinite = QSoundEffect::Infinite};
enum Status{
  Null = QSoundEffect::Null,   Loading = QSoundEffect::Loading,   Ready = QSoundEffect::Ready,   Error = QSoundEffect::Error};
public slots:
QSoundEffect* new_QSoundEffect(QObject*  parent = nullptr);
void delete_QSoundEffect(QSoundEffect* obj) { delete obj; } 
   QString  category(QSoundEffect* theWrappedObject) const;
   bool  isLoaded(QSoundEffect* theWrappedObject) const;
   bool  isMuted(QSoundEffect* theWrappedObject) const;
   bool  isPlaying(QSoundEffect* theWrappedObject) const;
   int  loopCount(QSoundEffect* theWrappedObject) const;
   int  loopsRemaining(QSoundEffect* theWrappedObject) const;
   void setCategory(QSoundEffect* theWrappedObject, const QString&  category);
   void setLoopCount(QSoundEffect* theWrappedObject, int  loopCount);
   void setMuted(QSoundEffect* theWrappedObject, bool  muted);
   void setSource(QSoundEffect* theWrappedObject, const QUrl&  url);
   void setVolume(QSoundEffect* theWrappedObject, qreal  volume);
   QUrl  source(QSoundEffect* theWrappedObject) const;
   QSoundEffect::Status  status(QSoundEffect* theWrappedObject) const;
   QStringList  static_QSoundEffect_supportedMimeTypes();
   qreal  volume(QSoundEffect* theWrappedObject) const;
};





class PythonQtShell_QVideoDeviceSelectorControl : public QVideoDeviceSelectorControl
{
public:
    PythonQtShell_QVideoDeviceSelectorControl(QObject*  parent = nullptr):QVideoDeviceSelectorControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVideoDeviceSelectorControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  defaultDevice() const;
virtual int  deviceCount() const;
virtual QString  deviceDescription(int  index) const;
virtual QString  deviceName(int  index) const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual int  selectedDevice() const;
virtual void setSelectedDevice(int  index);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVideoDeviceSelectorControl : public QVideoDeviceSelectorControl
{ public:
inline int  py_q_defaultDevice() const { return this->defaultDevice(); }
inline int  py_q_deviceCount() const { return this->deviceCount(); }
inline QString  py_q_deviceDescription(int  index) const { return this->deviceDescription(index); }
inline QString  py_q_deviceName(int  index) const { return this->deviceName(index); }
inline int  py_q_selectedDevice() const { return this->selectedDevice(); }
inline void py_q_setSelectedDevice(int  index) { this->setSelectedDevice(index); }
};

class PythonQtWrapper_QVideoDeviceSelectorControl : public QObject
{ Q_OBJECT
public:
public slots:
QVideoDeviceSelectorControl* new_QVideoDeviceSelectorControl(QObject*  parent = nullptr);
void delete_QVideoDeviceSelectorControl(QVideoDeviceSelectorControl* obj) { delete obj; } 
   int  defaultDevice(QVideoDeviceSelectorControl* theWrappedObject) const;
   int  py_q_defaultDevice(QVideoDeviceSelectorControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoDeviceSelectorControl*)theWrappedObject)->py_q_defaultDevice());}
   int  deviceCount(QVideoDeviceSelectorControl* theWrappedObject) const;
   int  py_q_deviceCount(QVideoDeviceSelectorControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoDeviceSelectorControl*)theWrappedObject)->py_q_deviceCount());}
   QString  deviceDescription(QVideoDeviceSelectorControl* theWrappedObject, int  index) const;
   QString  py_q_deviceDescription(QVideoDeviceSelectorControl* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QVideoDeviceSelectorControl*)theWrappedObject)->py_q_deviceDescription(index));}
   QString  deviceName(QVideoDeviceSelectorControl* theWrappedObject, int  index) const;
   QString  py_q_deviceName(QVideoDeviceSelectorControl* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QVideoDeviceSelectorControl*)theWrappedObject)->py_q_deviceName(index));}
   int  selectedDevice(QVideoDeviceSelectorControl* theWrappedObject) const;
   int  py_q_selectedDevice(QVideoDeviceSelectorControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoDeviceSelectorControl*)theWrappedObject)->py_q_selectedDevice());}
   void py_q_setSelectedDevice(QVideoDeviceSelectorControl* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QVideoDeviceSelectorControl*)theWrappedObject)->py_q_setSelectedDevice(index));}
};





class PythonQtWrapper_QVideoEncoderSettings : public QObject
{ Q_OBJECT
public:
public slots:
QVideoEncoderSettings* new_QVideoEncoderSettings();
QVideoEncoderSettings* new_QVideoEncoderSettings(const QVideoEncoderSettings&  other);
void delete_QVideoEncoderSettings(QVideoEncoderSettings* obj) { delete obj; } 
   int  bitRate(QVideoEncoderSettings* theWrappedObject) const;
   QString  codec(QVideoEncoderSettings* theWrappedObject) const;
   QMultimedia::EncodingMode  encodingMode(QVideoEncoderSettings* theWrappedObject) const;
   QVariant  encodingOption(QVideoEncoderSettings* theWrappedObject, const QString&  option) const;
   QMap<QString , QVariant >  encodingOptions(QVideoEncoderSettings* theWrappedObject) const;
   qreal  frameRate(QVideoEncoderSettings* theWrappedObject) const;
   bool  isNull(QVideoEncoderSettings* theWrappedObject) const;
   bool  __ne__(QVideoEncoderSettings* theWrappedObject, const QVideoEncoderSettings&  other) const;
   QVideoEncoderSettings*  operator_assign(QVideoEncoderSettings* theWrappedObject, const QVideoEncoderSettings&  other);
   bool  __eq__(QVideoEncoderSettings* theWrappedObject, const QVideoEncoderSettings&  other) const;
   QMultimedia::EncodingQuality  quality(QVideoEncoderSettings* theWrappedObject) const;
   QSize  resolution(QVideoEncoderSettings* theWrappedObject) const;
   void setBitRate(QVideoEncoderSettings* theWrappedObject, int  bitrate);
   void setCodec(QVideoEncoderSettings* theWrappedObject, const QString&  arg__1);
   void setEncodingMode(QVideoEncoderSettings* theWrappedObject, QMultimedia::EncodingMode  arg__1);
   void setEncodingOption(QVideoEncoderSettings* theWrappedObject, const QString&  option, const QVariant&  value);
   void setEncodingOptions(QVideoEncoderSettings* theWrappedObject, const QMap<QString , QVariant >&  options);
   void setFrameRate(QVideoEncoderSettings* theWrappedObject, qreal  rate);
   void setQuality(QVideoEncoderSettings* theWrappedObject, QMultimedia::EncodingQuality  quality);
   void setResolution(QVideoEncoderSettings* theWrappedObject, const QSize&  arg__1);
   void setResolution(QVideoEncoderSettings* theWrappedObject, int  width, int  height);
    bool __nonzero__(QVideoEncoderSettings* obj) { return !obj->isNull(); }
};





class PythonQtShell_QVideoEncoderSettingsControl : public QVideoEncoderSettingsControl
{
public:
    PythonQtShell_QVideoEncoderSettingsControl(QObject*  parent = nullptr):QVideoEncoderSettingsControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVideoEncoderSettingsControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void setVideoSettings(const QVideoEncoderSettings&  settings);
virtual QList<qreal >  supportedFrameRates(const QVideoEncoderSettings&  settings, bool*  continuous = nullptr) const;
virtual QList<QSize >  supportedResolutions(const QVideoEncoderSettings&  settings, bool*  continuous = nullptr) const;
virtual QStringList  supportedVideoCodecs() const;
virtual void timerEvent(QTimerEvent*  event);
virtual QString  videoCodecDescription(const QString&  codec) const;
virtual QVideoEncoderSettings  videoSettings() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVideoEncoderSettingsControl : public QVideoEncoderSettingsControl
{ public:
inline void py_q_setVideoSettings(const QVideoEncoderSettings&  settings) { this->setVideoSettings(settings); }
inline QList<qreal >  py_q_supportedFrameRates(const QVideoEncoderSettings&  settings, bool*  continuous = nullptr) const { return this->supportedFrameRates(settings, continuous); }
inline QList<QSize >  py_q_supportedResolutions(const QVideoEncoderSettings&  settings, bool*  continuous = nullptr) const { return this->supportedResolutions(settings, continuous); }
inline QStringList  py_q_supportedVideoCodecs() const { return this->supportedVideoCodecs(); }
inline QString  py_q_videoCodecDescription(const QString&  codec) const { return this->videoCodecDescription(codec); }
inline QVideoEncoderSettings  py_q_videoSettings() const { return this->videoSettings(); }
};

class PythonQtWrapper_QVideoEncoderSettingsControl : public QObject
{ Q_OBJECT
public:
public slots:
QVideoEncoderSettingsControl* new_QVideoEncoderSettingsControl(QObject*  parent = nullptr);
void delete_QVideoEncoderSettingsControl(QVideoEncoderSettingsControl* obj) { delete obj; } 
   void setVideoSettings(QVideoEncoderSettingsControl* theWrappedObject, const QVideoEncoderSettings&  settings);
   void py_q_setVideoSettings(QVideoEncoderSettingsControl* theWrappedObject, const QVideoEncoderSettings&  settings){  (((PythonQtPublicPromoter_QVideoEncoderSettingsControl*)theWrappedObject)->py_q_setVideoSettings(settings));}
   QList<qreal >  supportedFrameRates(QVideoEncoderSettingsControl* theWrappedObject, const QVideoEncoderSettings&  settings, bool*  continuous = nullptr) const;
   QList<qreal >  py_q_supportedFrameRates(QVideoEncoderSettingsControl* theWrappedObject, const QVideoEncoderSettings&  settings, bool*  continuous = nullptr) const{  return (((PythonQtPublicPromoter_QVideoEncoderSettingsControl*)theWrappedObject)->py_q_supportedFrameRates(settings, continuous));}
   QList<QSize >  supportedResolutions(QVideoEncoderSettingsControl* theWrappedObject, const QVideoEncoderSettings&  settings, bool*  continuous = nullptr) const;
   QList<QSize >  py_q_supportedResolutions(QVideoEncoderSettingsControl* theWrappedObject, const QVideoEncoderSettings&  settings, bool*  continuous = nullptr) const{  return (((PythonQtPublicPromoter_QVideoEncoderSettingsControl*)theWrappedObject)->py_q_supportedResolutions(settings, continuous));}
   QStringList  supportedVideoCodecs(QVideoEncoderSettingsControl* theWrappedObject) const;
   QStringList  py_q_supportedVideoCodecs(QVideoEncoderSettingsControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoEncoderSettingsControl*)theWrappedObject)->py_q_supportedVideoCodecs());}
   QString  videoCodecDescription(QVideoEncoderSettingsControl* theWrappedObject, const QString&  codec) const;
   QString  py_q_videoCodecDescription(QVideoEncoderSettingsControl* theWrappedObject, const QString&  codec) const{  return (((PythonQtPublicPromoter_QVideoEncoderSettingsControl*)theWrappedObject)->py_q_videoCodecDescription(codec));}
   QVideoEncoderSettings  videoSettings(QVideoEncoderSettingsControl* theWrappedObject) const;
   QVideoEncoderSettings  py_q_videoSettings(QVideoEncoderSettingsControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoEncoderSettingsControl*)theWrappedObject)->py_q_videoSettings());}
};





class PythonQtWrapper_QVideoFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FieldType PixelFormat )
enum FieldType{
  ProgressiveFrame = QVideoFrame::ProgressiveFrame,   TopField = QVideoFrame::TopField,   BottomField = QVideoFrame::BottomField,   InterlacedFrame = QVideoFrame::InterlacedFrame};
enum PixelFormat{
  Format_Invalid = QVideoFrame::Format_Invalid,   Format_ARGB32 = QVideoFrame::Format_ARGB32,   Format_ARGB32_Premultiplied = QVideoFrame::Format_ARGB32_Premultiplied,   Format_RGB32 = QVideoFrame::Format_RGB32,   Format_RGB24 = QVideoFrame::Format_RGB24,   Format_RGB565 = QVideoFrame::Format_RGB565,   Format_RGB555 = QVideoFrame::Format_RGB555,   Format_ARGB8565_Premultiplied = QVideoFrame::Format_ARGB8565_Premultiplied,   Format_BGRA32 = QVideoFrame::Format_BGRA32,   Format_BGRA32_Premultiplied = QVideoFrame::Format_BGRA32_Premultiplied,   Format_BGR32 = QVideoFrame::Format_BGR32,   Format_BGR24 = QVideoFrame::Format_BGR24,   Format_BGR565 = QVideoFrame::Format_BGR565,   Format_BGR555 = QVideoFrame::Format_BGR555,   Format_BGRA5658_Premultiplied = QVideoFrame::Format_BGRA5658_Premultiplied,   Format_AYUV444 = QVideoFrame::Format_AYUV444,   Format_AYUV444_Premultiplied = QVideoFrame::Format_AYUV444_Premultiplied,   Format_YUV444 = QVideoFrame::Format_YUV444,   Format_YUV420P = QVideoFrame::Format_YUV420P,   Format_YV12 = QVideoFrame::Format_YV12,   Format_UYVY = QVideoFrame::Format_UYVY,   Format_YUYV = QVideoFrame::Format_YUYV,   Format_NV12 = QVideoFrame::Format_NV12,   Format_NV21 = QVideoFrame::Format_NV21,   Format_IMC1 = QVideoFrame::Format_IMC1,   Format_IMC2 = QVideoFrame::Format_IMC2,   Format_IMC3 = QVideoFrame::Format_IMC3,   Format_IMC4 = QVideoFrame::Format_IMC4,   Format_Y8 = QVideoFrame::Format_Y8,   Format_Y16 = QVideoFrame::Format_Y16,   Format_Jpeg = QVideoFrame::Format_Jpeg,   Format_CameraRaw = QVideoFrame::Format_CameraRaw,   Format_AdobeDng = QVideoFrame::Format_AdobeDng,   NPixelFormats = QVideoFrame::NPixelFormats,   Format_User = QVideoFrame::Format_User};
public slots:
QVideoFrame* new_QVideoFrame();
QVideoFrame* new_QVideoFrame(QAbstractVideoBuffer*  buffer, const QSize&  size, QVideoFrame::PixelFormat  format);
QVideoFrame* new_QVideoFrame(const QImage&  image);
QVideoFrame* new_QVideoFrame(const QVideoFrame&  other);
QVideoFrame* new_QVideoFrame(int  bytes, const QSize&  size, int  bytesPerLine, QVideoFrame::PixelFormat  format);
void delete_QVideoFrame(QVideoFrame* obj) { delete obj; } 
   QMap<QString , QVariant >  availableMetaData(QVideoFrame* theWrappedObject) const;
   uchar*  bits(QVideoFrame* theWrappedObject);
   const uchar*  bits(QVideoFrame* theWrappedObject) const;
   uchar*  bits(QVideoFrame* theWrappedObject, int  plane);
   const uchar*  bits(QVideoFrame* theWrappedObject, int  plane) const;
   int  bytesPerLine(QVideoFrame* theWrappedObject) const;
   int  bytesPerLine(QVideoFrame* theWrappedObject, int  plane) const;
   qint64  endTime(QVideoFrame* theWrappedObject) const;
   QVideoFrame::FieldType  fieldType(QVideoFrame* theWrappedObject) const;
   QVariant  handle(QVideoFrame* theWrappedObject) const;
   QAbstractVideoBuffer::HandleType  handleType(QVideoFrame* theWrappedObject) const;
   int  height(QVideoFrame* theWrappedObject) const;
   QImage::Format  static_QVideoFrame_imageFormatFromPixelFormat(QVideoFrame::PixelFormat  format);
   bool  isMapped(QVideoFrame* theWrappedObject) const;
   bool  isReadable(QVideoFrame* theWrappedObject) const;
   bool  isValid(QVideoFrame* theWrappedObject) const;
   bool  isWritable(QVideoFrame* theWrappedObject) const;
   bool  map(QVideoFrame* theWrappedObject, QAbstractVideoBuffer::MapMode  mode);
   QAbstractVideoBuffer::MapMode  mapMode(QVideoFrame* theWrappedObject) const;
   int  mappedBytes(QVideoFrame* theWrappedObject) const;
   QVariant  metaData(QVideoFrame* theWrappedObject, const QString&  key) const;
   bool  __ne__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const;
   QVideoFrame*  operator_assign(QVideoFrame* theWrappedObject, const QVideoFrame&  other);
   bool  __eq__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const;
   QVideoFrame::PixelFormat  pixelFormat(QVideoFrame* theWrappedObject) const;
   QVideoFrame::PixelFormat  static_QVideoFrame_pixelFormatFromImageFormat(QImage::Format  format);
   int  planeCount(QVideoFrame* theWrappedObject) const;
   void setEndTime(QVideoFrame* theWrappedObject, qint64  time);
   void setFieldType(QVideoFrame* theWrappedObject, QVideoFrame::FieldType  arg__1);
   void setMetaData(QVideoFrame* theWrappedObject, const QString&  key, const QVariant&  value);
   void setStartTime(QVideoFrame* theWrappedObject, qint64  time);
   QSize  size(QVideoFrame* theWrappedObject) const;
   qint64  startTime(QVideoFrame* theWrappedObject) const;
   void unmap(QVideoFrame* theWrappedObject);
   int  width(QVideoFrame* theWrappedObject) const;
    QString py_toString(QVideoFrame*);
    bool __nonzero__(QVideoFrame* obj) { return obj->isValid(); }
};





class PythonQtShell_QVideoProbe : public QVideoProbe
{
public:
    PythonQtShell_QVideoProbe(QObject*  parent = nullptr):QVideoProbe(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVideoProbe();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QVideoProbe : public QObject
{ Q_OBJECT
public:
public slots:
QVideoProbe* new_QVideoProbe(QObject*  parent = nullptr);
void delete_QVideoProbe(QVideoProbe* obj) { delete obj; } 
   bool  isActive(QVideoProbe* theWrappedObject) const;
   bool  setSource(QVideoProbe* theWrappedObject, QMediaObject*  source);
   bool  setSource(QVideoProbe* theWrappedObject, QMediaRecorder*  source);
};


