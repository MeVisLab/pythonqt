#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include <qabstractvideosurface.h>
#include <qaction.h>
#include <qaudio.h>
#include <qaudiobuffer.h>
#include <qaudiodecoder.h>
#include <qaudiodeviceinfo.h>
#include <qaudioformat.h>
#include <qaudioinput.h>
#include <qaudiooutput.h>
#include <qaudioprobe.h>
#include <qaudiorecorder.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcamera.h>
#include <qcameraexposure.h>
#include <qcamerafocus.h>
#include <qcameraimagecapture.h>
#include <qcameraimageprocessing.h>
#include <qcamerainfo.h>
#include <qcameraviewfinder.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsvideoitem.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmediabindableinterface.h>
#include <qmediacontent.h>
#include <qmediacontrol.h>
#include <qmediaencodersettings.h>
#include <qmediaobject.h>
#include <qmediaplayer.h>
#include <qmediaplaylist.h>
#include <qmediarecorder.h>
#include <qmediaresource.h>
#include <qmediaservice.h>
#include <qmetaobject.h>
#include <qnetworkconfiguration.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qurl.h>
#include <qvideoframe.h>
#include <qvideosurfaceformat.h>
#include <qvideowidget.h>
#include <qwidget.h>
#include <qwindow.h>



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
inline QVariant  promoted_handle() const { return QAbstractVideoBuffer::handle(); }
inline uchar*  promoted_map(QAbstractVideoBuffer::MapMode  mode, int*  numBytes, int*  bytesPerLine) { return this->map(mode, numBytes, bytesPerLine); }
inline QAbstractVideoBuffer::MapMode  promoted_mapMode() const { return this->mapMode(); }
inline void promoted_release() { QAbstractVideoBuffer::release(); }
inline void promoted_unmap() { this->unmap(); }
};

class PythonQtWrapper_QAbstractVideoBuffer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HandleType MapMode )
enum HandleType{
  NoHandle = QAbstractVideoBuffer::NoHandle,   GLTextureHandle = QAbstractVideoBuffer::GLTextureHandle,   XvShmImageHandle = QAbstractVideoBuffer::XvShmImageHandle,   CoreImageHandle = QAbstractVideoBuffer::CoreImageHandle,   QPixmapHandle = QAbstractVideoBuffer::QPixmapHandle,   UserHandle = QAbstractVideoBuffer::UserHandle};
enum MapMode{
  NotMapped = QAbstractVideoBuffer::NotMapped,   ReadOnly = QAbstractVideoBuffer::ReadOnly,   WriteOnly = QAbstractVideoBuffer::WriteOnly,   ReadWrite = QAbstractVideoBuffer::ReadWrite};
public slots:
QAbstractVideoBuffer* new_QAbstractVideoBuffer(QAbstractVideoBuffer::HandleType  type);
void delete_QAbstractVideoBuffer(QAbstractVideoBuffer* obj) { delete obj; } 
   QVariant  handle(QAbstractVideoBuffer* theWrappedObject) const;
   QAbstractVideoBuffer::HandleType  handleType(QAbstractVideoBuffer* theWrappedObject) const;
   uchar*  map(QAbstractVideoBuffer* theWrappedObject, QAbstractVideoBuffer::MapMode  mode, int*  numBytes, int*  bytesPerLine);
   QAbstractVideoBuffer::MapMode  mapMode(QAbstractVideoBuffer* theWrappedObject) const;
   void release(QAbstractVideoBuffer* theWrappedObject);
   void unmap(QAbstractVideoBuffer* theWrappedObject);
};





class PythonQtShell_QAbstractVideoSurface : public QAbstractVideoSurface
{
public:
    PythonQtShell_QAbstractVideoSurface(QObject*  parent = 0):QAbstractVideoSurface(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractVideoSurface();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isFormatSupported(const QVideoSurfaceFormat&  format) const;
virtual QVideoSurfaceFormat  nearestFormat(const QVideoSurfaceFormat&  format) const;
virtual bool  present(const QVideoFrame&  frame);
virtual bool  start(const QVideoSurfaceFormat&  format);
virtual void stop();
virtual QList<QVideoFrame::PixelFormat >  supportedPixelFormats(QAbstractVideoBuffer::HandleType  handleType = QAbstractVideoBuffer::NoHandle) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractVideoSurface : public QAbstractVideoSurface
{ public:
inline bool  promoted_isFormatSupported(const QVideoSurfaceFormat&  format) const { return QAbstractVideoSurface::isFormatSupported(format); }
inline QVideoSurfaceFormat  promoted_nearestFormat(const QVideoSurfaceFormat&  format) const { return QAbstractVideoSurface::nearestFormat(format); }
inline bool  promoted_present(const QVideoFrame&  frame) { return this->present(frame); }
inline void promoted_setError(QAbstractVideoSurface::Error  error) { QAbstractVideoSurface::setError(error); }
inline void promoted_setNativeResolution(const QSize&  resolution) { QAbstractVideoSurface::setNativeResolution(resolution); }
inline bool  promoted_start(const QVideoSurfaceFormat&  format) { return QAbstractVideoSurface::start(format); }
inline void promoted_stop() { QAbstractVideoSurface::stop(); }
inline QList<QVideoFrame::PixelFormat >  promoted_supportedPixelFormats(QAbstractVideoBuffer::HandleType  handleType = QAbstractVideoBuffer::NoHandle) const { return this->supportedPixelFormats(handleType); }
};

class PythonQtWrapper_QAbstractVideoSurface : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error )
enum Error{
  NoError = QAbstractVideoSurface::NoError,   UnsupportedFormatError = QAbstractVideoSurface::UnsupportedFormatError,   IncorrectFormatError = QAbstractVideoSurface::IncorrectFormatError,   StoppedError = QAbstractVideoSurface::StoppedError,   ResourceError = QAbstractVideoSurface::ResourceError};
public slots:
QAbstractVideoSurface* new_QAbstractVideoSurface(QObject*  parent = 0);
void delete_QAbstractVideoSurface(QAbstractVideoSurface* obj) { delete obj; } 
   QAbstractVideoSurface::Error  error(QAbstractVideoSurface* theWrappedObject) const;
   bool  isActive(QAbstractVideoSurface* theWrappedObject) const;
   bool  isFormatSupported(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format) const;
   QSize  nativeResolution(QAbstractVideoSurface* theWrappedObject) const;
   QVideoSurfaceFormat  nearestFormat(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format) const;
   bool  present(QAbstractVideoSurface* theWrappedObject, const QVideoFrame&  frame);
   void setError(QAbstractVideoSurface* theWrappedObject, QAbstractVideoSurface::Error  error);
   void setNativeResolution(QAbstractVideoSurface* theWrappedObject, const QSize&  resolution);
   bool  start(QAbstractVideoSurface* theWrappedObject, const QVideoSurfaceFormat&  format);
   void stop(QAbstractVideoSurface* theWrappedObject);
   QList<QVideoFrame::PixelFormat >  supportedPixelFormats(QAbstractVideoSurface* theWrappedObject, QAbstractVideoBuffer::HandleType  handleType = QAbstractVideoBuffer::NoHandle) const;
   QVideoSurfaceFormat  surfaceFormat(QAbstractVideoSurface* theWrappedObject) const;
};





class PythonQtWrapper_QAudio : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error Mode State )
enum Error{
  NoError = QAudio::NoError,   OpenError = QAudio::OpenError,   IOError = QAudio::IOError,   UnderrunError = QAudio::UnderrunError,   FatalError = QAudio::FatalError};
enum Mode{
  AudioInput = QAudio::AudioInput,   AudioOutput = QAudio::AudioOutput};
enum State{
  ActiveState = QAudio::ActiveState,   SuspendedState = QAudio::SuspendedState,   StoppedState = QAudio::StoppedState,   IdleState = QAudio::IdleState};
public slots:
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
};





class PythonQtShell_QAudioDecoder : public QAudioDecoder
{
public:
    PythonQtShell_QAudioDecoder(QObject*  parent = 0):QAudioDecoder(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioDecoder();

virtual QMultimedia::AvailabilityStatus  availability() const;
virtual bool  bind(QObject*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isAvailable() const;
virtual QMediaService*  service() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void unbind(QObject*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAudioDecoder : public QAudioDecoder
{ public:
inline bool  promoted_bind(QObject*  arg__1) { return QAudioDecoder::bind(arg__1); }
inline void promoted_unbind(QObject*  arg__1) { QAudioDecoder::unbind(arg__1); }
};

class PythonQtWrapper_QAudioDecoder : public QObject
{ Q_OBJECT
public:
public slots:
QAudioDecoder* new_QAudioDecoder(QObject*  parent = 0);
void delete_QAudioDecoder(QAudioDecoder* obj) { delete obj; } 
   QAudioFormat  audioFormat(QAudioDecoder* theWrappedObject) const;
   bool  bind(QAudioDecoder* theWrappedObject, QObject*  arg__1);
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
   void unbind(QAudioDecoder* theWrappedObject, QObject*  arg__1);
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
};





class PythonQtShell_QAudioInput : public QAudioInput
{
public:
    PythonQtShell_QAudioInput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = 0):QAudioInput(audioDeviceInfo, format, parent),_wrapper(NULL) {};
    PythonQtShell_QAudioInput(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = 0):QAudioInput(format, parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioInput();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioInput : public QObject
{ Q_OBJECT
public:
public slots:
QAudioInput* new_QAudioInput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = 0);
QAudioInput* new_QAudioInput(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = 0);
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





class PythonQtShell_QAudioOutput : public QAudioOutput
{
public:
    PythonQtShell_QAudioOutput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = 0):QAudioOutput(audioDeviceInfo, format, parent),_wrapper(NULL) {};
    PythonQtShell_QAudioOutput(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = 0):QAudioOutput(format, parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioOutput();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioOutput : public QObject
{ Q_OBJECT
public:
public slots:
QAudioOutput* new_QAudioOutput(const QAudioDeviceInfo&  audioDeviceInfo, const QAudioFormat&  format = QAudioFormat(), QObject*  parent = 0);
QAudioOutput* new_QAudioOutput(const QAudioFormat&  format = QAudioFormat(), QObject*  parent = 0);
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





class PythonQtShell_QAudioProbe : public QAudioProbe
{
public:
    PythonQtShell_QAudioProbe(QObject*  parent = 0):QAudioProbe(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioProbe();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioProbe : public QObject
{ Q_OBJECT
public:
public slots:
QAudioProbe* new_QAudioProbe(QObject*  parent = 0);
void delete_QAudioProbe(QAudioProbe* obj) { delete obj; } 
   bool  isActive(QAudioProbe* theWrappedObject) const;
   bool  setSource(QAudioProbe* theWrappedObject, QMediaObject*  source);
   bool  setSource(QAudioProbe* theWrappedObject, QMediaRecorder*  source);
};





class PythonQtShell_QAudioRecorder : public QAudioRecorder
{
public:
    PythonQtShell_QAudioRecorder(QObject*  parent = 0):QAudioRecorder(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioRecorder();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QMediaObject*  mediaObject() const;
virtual bool  setMediaObject(QMediaObject*  object);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioRecorder : public QObject
{ Q_OBJECT
public:
public slots:
QAudioRecorder* new_QAudioRecorder(QObject*  parent = 0);
void delete_QAudioRecorder(QAudioRecorder* obj) { delete obj; } 
   QString  audioInput(QAudioRecorder* theWrappedObject) const;
   QString  audioInputDescription(QAudioRecorder* theWrappedObject, const QString&  name) const;
   QStringList  audioInputs(QAudioRecorder* theWrappedObject) const;
   QString  defaultAudioInput(QAudioRecorder* theWrappedObject) const;
};





class PythonQtShell_QCamera : public QCamera
{
public:
    PythonQtShell_QCamera(QCamera::Position  position, QObject*  parent = 0):QCamera(position, parent),_wrapper(NULL) {};
    PythonQtShell_QCamera(QObject*  parent = 0):QCamera(parent),_wrapper(NULL) {};
    PythonQtShell_QCamera(const QByteArray&  deviceName, QObject*  parent = 0):QCamera(deviceName, parent),_wrapper(NULL) {};
    PythonQtShell_QCamera(const QCameraInfo&  cameraInfo, QObject*  parent = 0):QCamera(cameraInfo, parent),_wrapper(NULL) {};

   ~PythonQtShell_QCamera();

virtual QMultimedia::AvailabilityStatus  availability() const;
virtual bool  bind(QObject*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isAvailable() const;
virtual QMediaService*  service() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void unbind(QObject*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCamera : public QCamera
{ public:
inline QMultimedia::AvailabilityStatus  promoted_availability() const { return QCamera::availability(); }
};

class PythonQtWrapper_QCamera : public QObject
{ Q_OBJECT
public:
public slots:
QCamera* new_QCamera(QCamera::Position  position, QObject*  parent = 0);
QCamera* new_QCamera(QObject*  parent = 0);
QCamera* new_QCamera(const QByteArray&  deviceName, QObject*  parent = 0);
QCamera* new_QCamera(const QCameraInfo&  cameraInfo, QObject*  parent = 0);
void delete_QCamera(QCamera* obj) { delete obj; } 
   QMultimedia::AvailabilityStatus  availability(QCamera* theWrappedObject) const;
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
   QCamera::State  state(QCamera* theWrappedObject) const;
   QCamera::Status  status(QCamera* theWrappedObject) const;
   QCamera::LockTypes  supportedLocks(QCamera* theWrappedObject) const;
};





class PythonQtWrapper_QCameraExposure : public QObject
{ Q_OBJECT
public:
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
   QList<qreal >  supportedApertures(QCameraExposure* theWrappedObject, bool*  continuous = 0) const;
   QList<int >  supportedIsoSensitivities(QCameraExposure* theWrappedObject, bool*  continuous = 0) const;
   QList<qreal >  supportedShutterSpeeds(QCameraExposure* theWrappedObject, bool*  continuous = 0) const;
};





class PythonQtWrapper_QCameraFocus : public QObject
{ Q_OBJECT
public:
public slots:
   QPointF  customFocusPoint(QCameraFocus* theWrappedObject) const;
   qreal  digitalZoom(QCameraFocus* theWrappedObject) const;
   QCameraFocus::FocusModes  focusMode(QCameraFocus* theWrappedObject) const;
   QCameraFocus::FocusPointMode  focusPointMode(QCameraFocus* theWrappedObject) const;
   QList<QCameraFocusZone >  focusZones(QCameraFocus* theWrappedObject) const;
   bool  isAvailable(QCameraFocus* theWrappedObject) const;
   bool  isFocusModeSupported(QCameraFocus* theWrappedObject, QCameraFocus::FocusModes  mode) const;
   bool  isFocusPointModeSupported(QCameraFocus* theWrappedObject, QCameraFocus::FocusPointMode  arg__1) const;
   qreal  maximumDigitalZoom(QCameraFocus* theWrappedObject) const;
   qreal  maximumOpticalZoom(QCameraFocus* theWrappedObject) const;
   qreal  opticalZoom(QCameraFocus* theWrappedObject) const;
   void setCustomFocusPoint(QCameraFocus* theWrappedObject, const QPointF&  point);
   void setFocusMode(QCameraFocus* theWrappedObject, QCameraFocus::FocusModes  mode);
   void setFocusPointMode(QCameraFocus* theWrappedObject, QCameraFocus::FocusPointMode  mode);
   void zoomTo(QCameraFocus* theWrappedObject, qreal  opticalZoom, qreal  digitalZoom);
};





class PythonQtWrapper_QCameraFocusZone : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FocusZoneStatus )
enum FocusZoneStatus{
  Invalid = QCameraFocusZone::Invalid,   Unused = QCameraFocusZone::Unused,   Selected = QCameraFocusZone::Selected,   Focused = QCameraFocusZone::Focused};
public slots:
QCameraFocusZone* new_QCameraFocusZone();
QCameraFocusZone* new_QCameraFocusZone(const QCameraFocusZone&  other);
QCameraFocusZone* new_QCameraFocusZone(const QRectF&  area, QCameraFocusZone::FocusZoneStatus  status = QCameraFocusZone::Selected);
void delete_QCameraFocusZone(QCameraFocusZone* obj) { delete obj; } 
   QRectF  area(QCameraFocusZone* theWrappedObject) const;
   bool  isValid(QCameraFocusZone* theWrappedObject) const;
   bool  __ne__(QCameraFocusZone* theWrappedObject, const QCameraFocusZone&  other) const;
   QCameraFocusZone*  operator_assign(QCameraFocusZone* theWrappedObject, const QCameraFocusZone&  other);
   bool  __eq__(QCameraFocusZone* theWrappedObject, const QCameraFocusZone&  other) const;
   void setStatus(QCameraFocusZone* theWrappedObject, QCameraFocusZone::FocusZoneStatus  status);
   QCameraFocusZone::FocusZoneStatus  status(QCameraFocusZone* theWrappedObject) const;
};





class PythonQtShell_QCameraImageCapture : public QCameraImageCapture
{
public:
    PythonQtShell_QCameraImageCapture(QMediaObject*  mediaObject, QObject*  parent = 0):QCameraImageCapture(mediaObject, parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraImageCapture();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QMediaObject*  mediaObject() const;
virtual bool  setMediaObject(QMediaObject*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraImageCapture : public QCameraImageCapture
{ public:
inline QMediaObject*  promoted_mediaObject() const { return QCameraImageCapture::mediaObject(); }
inline bool  promoted_setMediaObject(QMediaObject*  arg__1) { return QCameraImageCapture::setMediaObject(arg__1); }
};

class PythonQtWrapper_QCameraImageCapture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DriveMode )
enum DriveMode{
  SingleImageCapture = QCameraImageCapture::SingleImageCapture};
public slots:
QCameraImageCapture* new_QCameraImageCapture(QMediaObject*  mediaObject, QObject*  parent = 0);
void delete_QCameraImageCapture(QCameraImageCapture* obj) { delete obj; } 
   QMultimedia::AvailabilityStatus  availability(QCameraImageCapture* theWrappedObject) const;
   QVideoFrame::PixelFormat  bufferFormat(QCameraImageCapture* theWrappedObject) const;
   QCameraImageCapture::CaptureDestinations  captureDestination(QCameraImageCapture* theWrappedObject) const;
   QImageEncoderSettings  encodingSettings(QCameraImageCapture* theWrappedObject) const;
   QCameraImageCapture::Error  error(QCameraImageCapture* theWrappedObject) const;
   QString  errorString(QCameraImageCapture* theWrappedObject) const;
   QString  imageCodecDescription(QCameraImageCapture* theWrappedObject, const QString&  codecName) const;
   bool  isAvailable(QCameraImageCapture* theWrappedObject) const;
   bool  isCaptureDestinationSupported(QCameraImageCapture* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination) const;
   bool  isReadyForCapture(QCameraImageCapture* theWrappedObject) const;
   QMediaObject*  mediaObject(QCameraImageCapture* theWrappedObject) const;
   void setBufferFormat(QCameraImageCapture* theWrappedObject, const QVideoFrame::PixelFormat  format);
   void setCaptureDestination(QCameraImageCapture* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination);
   void setEncodingSettings(QCameraImageCapture* theWrappedObject, const QImageEncoderSettings&  settings);
   bool  setMediaObject(QCameraImageCapture* theWrappedObject, QMediaObject*  arg__1);
   QList<QVideoFrame::PixelFormat >  supportedBufferFormats(QCameraImageCapture* theWrappedObject) const;
   QStringList  supportedImageCodecs(QCameraImageCapture* theWrappedObject) const;
   QList<QSize >  supportedResolutions(QCameraImageCapture* theWrappedObject, const QImageEncoderSettings&  settings = QImageEncoderSettings(), bool*  continuous = 0) const;
};





class PythonQtWrapper_QCameraImageProcessing : public QObject
{ Q_OBJECT
public:
public slots:
   qreal  contrast(QCameraImageProcessing* theWrappedObject) const;
   qreal  denoisingLevel(QCameraImageProcessing* theWrappedObject) const;
   bool  isAvailable(QCameraImageProcessing* theWrappedObject) const;
   bool  isWhiteBalanceModeSupported(QCameraImageProcessing* theWrappedObject, QCameraImageProcessing::WhiteBalanceMode  mode) const;
   qreal  manualWhiteBalance(QCameraImageProcessing* theWrappedObject) const;
   qreal  saturation(QCameraImageProcessing* theWrappedObject) const;
   void setContrast(QCameraImageProcessing* theWrappedObject, qreal  value);
   void setDenoisingLevel(QCameraImageProcessing* theWrappedObject, qreal  value);
   void setManualWhiteBalance(QCameraImageProcessing* theWrappedObject, qreal  colorTemperature);
   void setSaturation(QCameraImageProcessing* theWrappedObject, qreal  value);
   void setSharpeningLevel(QCameraImageProcessing* theWrappedObject, qreal  value);
   void setWhiteBalanceMode(QCameraImageProcessing* theWrappedObject, QCameraImageProcessing::WhiteBalanceMode  mode);
   qreal  sharpeningLevel(QCameraImageProcessing* theWrappedObject) const;
   QCameraImageProcessing::WhiteBalanceMode  whiteBalanceMode(QCameraImageProcessing* theWrappedObject) const;
};





class PythonQtWrapper_QCameraInfo : public QObject
{ Q_OBJECT
public:
public slots:
QCameraInfo* new_QCameraInfo(const QByteArray&  name = QByteArray());
QCameraInfo* new_QCameraInfo(const QCamera&  camera);
QCameraInfo* new_QCameraInfo(const QCameraInfo&  other);
void delete_QCameraInfo(QCameraInfo* obj) { delete obj; } 
   QList<QCameraInfo >  static_QCameraInfo_availableCameras(QCamera::Position  position = QCamera::UnspecifiedPosition);
   QCameraInfo  static_QCameraInfo_defaultCamera();
   QString  description(QCameraInfo* theWrappedObject) const;
   QString  deviceName(QCameraInfo* theWrappedObject) const;
   bool  isNull(QCameraInfo* theWrappedObject) const;
   bool  __ne__(QCameraInfo* theWrappedObject, const QCameraInfo&  other) const;
   QCameraInfo*  operator_assign(QCameraInfo* theWrappedObject, const QCameraInfo&  other);
   bool  __eq__(QCameraInfo* theWrappedObject, const QCameraInfo&  other) const;
   int  orientation(QCameraInfo* theWrappedObject) const;
   QCamera::Position  position(QCameraInfo* theWrappedObject) const;
    QString py_toString(QCameraInfo*);
    bool __nonzero__(QCameraInfo* obj) { return !obj->isNull(); }
};





class PythonQtShell_QCameraViewfinder : public QCameraViewfinder
{
public:
    PythonQtShell_QCameraViewfinder(QWidget*  parent = 0):QCameraViewfinder(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraViewfinder();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual QMediaObject*  mediaObject() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  setMediaObject(QMediaObject*  object);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraViewfinder : public QCameraViewfinder
{ public:
inline QMediaObject*  promoted_mediaObject() const { return QCameraViewfinder::mediaObject(); }
inline bool  promoted_setMediaObject(QMediaObject*  object) { return QCameraViewfinder::setMediaObject(object); }
};

class PythonQtWrapper_QCameraViewfinder : public QObject
{ Q_OBJECT
public:
public slots:
QCameraViewfinder* new_QCameraViewfinder(QWidget*  parent = 0);
void delete_QCameraViewfinder(QCameraViewfinder* obj) { delete obj; } 
   QMediaObject*  mediaObject(QCameraViewfinder* theWrappedObject) const;
   bool  setMediaObject(QCameraViewfinder* theWrappedObject, QMediaObject*  object);
};





class PythonQtShell_QGraphicsVideoItem : public QGraphicsVideoItem
{
public:
    PythonQtShell_QGraphicsVideoItem(QGraphicsItem*  parent = 0):QGraphicsVideoItem(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsVideoItem();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  ev);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QMediaObject*  mediaObject() const;
virtual bool  setMediaObject(QMediaObject*  object);
virtual void timerEvent(QTimerEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsVideoItem : public QGraphicsVideoItem
{ public:
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsVideoItem::itemChange(change, value); }
inline QMediaObject*  promoted_mediaObject() const { return QGraphicsVideoItem::mediaObject(); }
inline bool  promoted_setMediaObject(QMediaObject*  object) { return QGraphicsVideoItem::setMediaObject(object); }
inline void promoted_timerEvent(QTimerEvent*  event) { QGraphicsVideoItem::timerEvent(event); }
};

class PythonQtWrapper_QGraphicsVideoItem : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsVideoItem* new_QGraphicsVideoItem(QGraphicsItem*  parent = 0);
void delete_QGraphicsVideoItem(QGraphicsVideoItem* obj) { delete obj; } 
   Qt::AspectRatioMode  aspectRatioMode(QGraphicsVideoItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsVideoItem* theWrappedObject) const;
   QVariant  itemChange(QGraphicsVideoItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   QMediaObject*  mediaObject(QGraphicsVideoItem* theWrappedObject) const;
   QSizeF  nativeSize(QGraphicsVideoItem* theWrappedObject) const;
   QPointF  offset(QGraphicsVideoItem* theWrappedObject) const;
   void paint(QGraphicsVideoItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   void setAspectRatioMode(QGraphicsVideoItem* theWrappedObject, Qt::AspectRatioMode  mode);
   bool  setMediaObject(QGraphicsVideoItem* theWrappedObject, QMediaObject*  object);
   void setOffset(QGraphicsVideoItem* theWrappedObject, const QPointF&  offset);
   void setSize(QGraphicsVideoItem* theWrappedObject, const QSizeF&  size);
   QSizeF  size(QGraphicsVideoItem* theWrappedObject) const;
   void timerEvent(QGraphicsVideoItem* theWrappedObject, QTimerEvent*  event);
};





class PythonQtWrapper_QImageEncoderSettings : public QObject
{ Q_OBJECT
public:
public slots:
QImageEncoderSettings* new_QImageEncoderSettings();
QImageEncoderSettings* new_QImageEncoderSettings(const QImageEncoderSettings&  other);
void delete_QImageEncoderSettings(QImageEncoderSettings* obj) { delete obj; } 
   QString  codec(QImageEncoderSettings* theWrappedObject) const;
   QVariant  encodingOption(QImageEncoderSettings* theWrappedObject, const QString&  option) const;
   QMap<QString , QVariant >  encodingOptions(QImageEncoderSettings* theWrappedObject) const;
   bool  isNull(QImageEncoderSettings* theWrappedObject) const;
   bool  __ne__(QImageEncoderSettings* theWrappedObject, const QImageEncoderSettings&  other) const;
   QImageEncoderSettings*  operator_assign(QImageEncoderSettings* theWrappedObject, const QImageEncoderSettings&  other);
   bool  __eq__(QImageEncoderSettings* theWrappedObject, const QImageEncoderSettings&  other) const;
   QMultimedia::EncodingQuality  quality(QImageEncoderSettings* theWrappedObject) const;
   QSize  resolution(QImageEncoderSettings* theWrappedObject) const;
   void setCodec(QImageEncoderSettings* theWrappedObject, const QString&  arg__1);
   void setEncodingOption(QImageEncoderSettings* theWrappedObject, const QString&  option, const QVariant&  value);
   void setEncodingOptions(QImageEncoderSettings* theWrappedObject, const QMap<QString , QVariant >&  options);
   void setQuality(QImageEncoderSettings* theWrappedObject, QMultimedia::EncodingQuality  quality);
   void setResolution(QImageEncoderSettings* theWrappedObject, const QSize&  arg__1);
   void setResolution(QImageEncoderSettings* theWrappedObject, int  width, int  height);
    bool __nonzero__(QImageEncoderSettings* obj) { return !obj->isNull(); }
};





class PythonQtShell_QMediaBindableInterface : public QMediaBindableInterface
{
public:
    PythonQtShell_QMediaBindableInterface():QMediaBindableInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QMediaBindableInterface();

virtual QMediaObject*  mediaObject() const;
virtual bool  setMediaObject(QMediaObject*  object);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaBindableInterface : public QMediaBindableInterface
{ public:
inline QMediaObject*  promoted_mediaObject() const { return this->mediaObject(); }
inline bool  promoted_setMediaObject(QMediaObject*  object) { return this->setMediaObject(object); }
};

class PythonQtWrapper_QMediaBindableInterface : public QObject
{ Q_OBJECT
public:
public slots:
QMediaBindableInterface* new_QMediaBindableInterface();
void delete_QMediaBindableInterface(QMediaBindableInterface* obj) { delete obj; } 
   QMediaObject*  mediaObject(QMediaBindableInterface* theWrappedObject) const;
   bool  setMediaObject(QMediaBindableInterface* theWrappedObject, QMediaObject*  object);
};





class PythonQtWrapper_QMediaContent : public QObject
{ Q_OBJECT
public:
public slots:
QMediaContent* new_QMediaContent();
QMediaContent* new_QMediaContent(QMediaPlaylist*  playlist, const QUrl&  contentUrl = QUrl(), bool  takeOwnership = false);
QMediaContent* new_QMediaContent(const QList<QMediaResource >&  resources);
QMediaContent* new_QMediaContent(const QMediaContent&  other);
QMediaContent* new_QMediaContent(const QMediaResource&  contentResource);
QMediaContent* new_QMediaContent(const QNetworkRequest&  contentRequest);
QMediaContent* new_QMediaContent(const QUrl&  contentUrl);
void delete_QMediaContent(QMediaContent* obj) { delete obj; } 
   QNetworkRequest  canonicalRequest(QMediaContent* theWrappedObject) const;
   QMediaResource  canonicalResource(QMediaContent* theWrappedObject) const;
   QUrl  canonicalUrl(QMediaContent* theWrappedObject) const;
   bool  isNull(QMediaContent* theWrappedObject) const;
   bool  __ne__(QMediaContent* theWrappedObject, const QMediaContent&  other) const;
   QMediaContent*  operator_assign(QMediaContent* theWrappedObject, const QMediaContent&  other);
   bool  __eq__(QMediaContent* theWrappedObject, const QMediaContent&  other) const;
   QMediaPlaylist*  playlist(QMediaContent* theWrappedObject) const;
   QList<QMediaResource >  resources(QMediaContent* theWrappedObject) const;
    bool __nonzero__(QMediaContent* obj) { return !obj->isNull(); }
};





class PythonQtShell_QMediaControl : public QMediaControl
{
public:
    PythonQtShell_QMediaControl(QObject*  parent = 0):QMediaControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaControl();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMediaControl : public QObject
{ Q_OBJECT
public:
public slots:
QMediaControl* new_QMediaControl(QObject*  parent = 0);
void delete_QMediaControl(QMediaControl* obj) { delete obj; } 
};





class PythonQtShell_QMediaObject : public QMediaObject
{
public:
    PythonQtShell_QMediaObject(QObject*  parent, QMediaService*  service):QMediaObject(parent, service),_wrapper(NULL) {};

   ~PythonQtShell_QMediaObject();

virtual QMultimedia::AvailabilityStatus  availability() const;
virtual bool  bind(QObject*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isAvailable() const;
virtual QMediaService*  service() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void unbind(QObject*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaObject : public QMediaObject
{ public:
inline void promoted_addPropertyWatch(const QByteArray&  name) { QMediaObject::addPropertyWatch(name); }
inline QMultimedia::AvailabilityStatus  promoted_availability() const { return QMediaObject::availability(); }
inline bool  promoted_bind(QObject*  arg__1) { return QMediaObject::bind(arg__1); }
inline bool  promoted_isAvailable() const { return QMediaObject::isAvailable(); }
inline void promoted_removePropertyWatch(const QByteArray&  name) { QMediaObject::removePropertyWatch(name); }
inline QMediaService*  promoted_service() const { return QMediaObject::service(); }
inline void promoted_unbind(QObject*  arg__1) { QMediaObject::unbind(arg__1); }
};

class PythonQtWrapper_QMediaObject : public QObject
{ Q_OBJECT
public:
public slots:
QMediaObject* new_QMediaObject(QObject*  parent, QMediaService*  service);
void delete_QMediaObject(QMediaObject* obj) { delete obj; } 
   void addPropertyWatch(QMediaObject* theWrappedObject, const QByteArray&  name);
   QMultimedia::AvailabilityStatus  availability(QMediaObject* theWrappedObject) const;
   QStringList  availableMetaData(QMediaObject* theWrappedObject) const;
   bool  bind(QMediaObject* theWrappedObject, QObject*  arg__1);
   bool  isAvailable(QMediaObject* theWrappedObject) const;
   bool  isMetaDataAvailable(QMediaObject* theWrappedObject) const;
   QVariant  metaData(QMediaObject* theWrappedObject, const QString&  key) const;
   int  notifyInterval(QMediaObject* theWrappedObject) const;
   void removePropertyWatch(QMediaObject* theWrappedObject, const QByteArray&  name);
   QMediaService*  service(QMediaObject* theWrappedObject) const;
   void setNotifyInterval(QMediaObject* theWrappedObject, int  milliSeconds);
   void unbind(QMediaObject* theWrappedObject, QObject*  arg__1);
};





class PythonQtShell_QMediaPlayer : public QMediaPlayer
{
public:
    PythonQtShell_QMediaPlayer(QObject*  parent = 0, QMediaPlayer::Flags  flags = 0):QMediaPlayer(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QMediaPlayer();

virtual QMultimedia::AvailabilityStatus  availability() const;
virtual bool  bind(QObject*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isAvailable() const;
virtual QMediaService*  service() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void unbind(QObject*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaPlayer : public QMediaPlayer
{ public:
inline QMultimedia::AvailabilityStatus  promoted_availability() const { return QMediaPlayer::availability(); }
inline bool  promoted_bind(QObject*  arg__1) { return QMediaPlayer::bind(arg__1); }
inline void promoted_unbind(QObject*  arg__1) { QMediaPlayer::unbind(arg__1); }
};

class PythonQtWrapper_QMediaPlayer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Flag )
Q_FLAGS(Flags )
enum Flag{
  LowLatency = QMediaPlayer::LowLatency,   StreamPlayback = QMediaPlayer::StreamPlayback,   VideoSurface = QMediaPlayer::VideoSurface};
Q_DECLARE_FLAGS(Flags, Flag)
public slots:
QMediaPlayer* new_QMediaPlayer(QObject*  parent = 0, QMediaPlayer::Flags  flags = 0);
void delete_QMediaPlayer(QMediaPlayer* obj) { delete obj; } 
   QMultimedia::AvailabilityStatus  availability(QMediaPlayer* theWrappedObject) const;
   bool  bind(QMediaPlayer* theWrappedObject, QObject*  arg__1);
   int  bufferStatus(QMediaPlayer* theWrappedObject) const;
   QMediaContent  currentMedia(QMediaPlayer* theWrappedObject) const;
   QNetworkConfiguration  currentNetworkConfiguration(QMediaPlayer* theWrappedObject) const;
   qint64  duration(QMediaPlayer* theWrappedObject) const;
   QMediaPlayer::Error  error(QMediaPlayer* theWrappedObject) const;
   QString  errorString(QMediaPlayer* theWrappedObject) const;
   QMultimedia::SupportEstimate  static_QMediaPlayer_hasSupport(const QString&  mimeType, const QStringList&  codecs = QStringList(), QMediaPlayer::Flags  flags = 0);
   bool  isAudioAvailable(QMediaPlayer* theWrappedObject) const;
   bool  isMuted(QMediaPlayer* theWrappedObject) const;
   bool  isSeekable(QMediaPlayer* theWrappedObject) const;
   bool  isVideoAvailable(QMediaPlayer* theWrappedObject) const;
   QMediaContent  media(QMediaPlayer* theWrappedObject) const;
   QMediaPlayer::MediaStatus  mediaStatus(QMediaPlayer* theWrappedObject) const;
   const QIODevice*  mediaStream(QMediaPlayer* theWrappedObject) const;
   qreal  playbackRate(QMediaPlayer* theWrappedObject) const;
   QMediaPlaylist*  playlist(QMediaPlayer* theWrappedObject) const;
   qint64  position(QMediaPlayer* theWrappedObject) const;
   void setVideoOutput(QMediaPlayer* theWrappedObject, QAbstractVideoSurface*  surface);
   void setVideoOutput(QMediaPlayer* theWrappedObject, QGraphicsVideoItem*  arg__1);
   void setVideoOutput(QMediaPlayer* theWrappedObject, QVideoWidget*  arg__1);
   QMediaPlayer::State  state(QMediaPlayer* theWrappedObject) const;
   QStringList  static_QMediaPlayer_supportedMimeTypes(QMediaPlayer::Flags  flags = 0);
   void unbind(QMediaPlayer* theWrappedObject, QObject*  arg__1);
   int  volume(QMediaPlayer* theWrappedObject) const;
};





class PythonQtShell_QMediaPlaylist : public QMediaPlaylist
{
public:
    PythonQtShell_QMediaPlaylist(QObject*  parent = 0):QMediaPlaylist(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaPlaylist();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QMediaObject*  mediaObject() const;
virtual bool  setMediaObject(QMediaObject*  object);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaPlaylist : public QMediaPlaylist
{ public:
inline QMediaObject*  promoted_mediaObject() const { return QMediaPlaylist::mediaObject(); }
inline bool  promoted_setMediaObject(QMediaObject*  object) { return QMediaPlaylist::setMediaObject(object); }
};

class PythonQtWrapper_QMediaPlaylist : public QObject
{ Q_OBJECT
public:
public slots:
QMediaPlaylist* new_QMediaPlaylist(QObject*  parent = 0);
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
   void load(QMediaPlaylist* theWrappedObject, QIODevice*  device, const char*  format = 0);
   void load(QMediaPlaylist* theWrappedObject, const QNetworkRequest&  request, const char*  format = 0);
   void load(QMediaPlaylist* theWrappedObject, const QUrl&  location, const char*  format = 0);
   QMediaContent  media(QMediaPlaylist* theWrappedObject, int  index) const;
   int  mediaCount(QMediaPlaylist* theWrappedObject) const;
   QMediaObject*  mediaObject(QMediaPlaylist* theWrappedObject) const;
   int  nextIndex(QMediaPlaylist* theWrappedObject, int  steps = 1) const;
   QMediaPlaylist::PlaybackMode  playbackMode(QMediaPlaylist* theWrappedObject) const;
   int  previousIndex(QMediaPlaylist* theWrappedObject, int  steps = 1) const;
   bool  removeMedia(QMediaPlaylist* theWrappedObject, int  pos);
   bool  removeMedia(QMediaPlaylist* theWrappedObject, int  start, int  end);
   bool  save(QMediaPlaylist* theWrappedObject, QIODevice*  device, const char*  format);
   bool  save(QMediaPlaylist* theWrappedObject, const QUrl&  location, const char*  format = 0);
   bool  setMediaObject(QMediaPlaylist* theWrappedObject, QMediaObject*  object);
   void setPlaybackMode(QMediaPlaylist* theWrappedObject, QMediaPlaylist::PlaybackMode  mode);
};





class PythonQtShell_QMediaRecorder : public QMediaRecorder
{
public:
    PythonQtShell_QMediaRecorder(QMediaObject*  mediaObject, QObject*  parent = 0):QMediaRecorder(mediaObject, parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaRecorder();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QMediaObject*  mediaObject() const;
virtual bool  setMediaObject(QMediaObject*  object);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaRecorder : public QMediaRecorder
{ public:
inline QMediaObject*  promoted_mediaObject() const { return QMediaRecorder::mediaObject(); }
inline bool  promoted_setMediaObject(QMediaObject*  object) { return QMediaRecorder::setMediaObject(object); }
};

class PythonQtWrapper_QMediaRecorder : public QObject
{ Q_OBJECT
public:
public slots:
QMediaRecorder* new_QMediaRecorder(QMediaObject*  mediaObject, QObject*  parent = 0);
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
   QMediaObject*  mediaObject(QMediaRecorder* theWrappedObject) const;
   QVariant  metaData(QMediaRecorder* theWrappedObject, const QString&  key) const;
   QUrl  outputLocation(QMediaRecorder* theWrappedObject) const;
   void setAudioSettings(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  audioSettings);
   void setContainerFormat(QMediaRecorder* theWrappedObject, const QString&  container);
   void setEncodingSettings(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  audioSettings, const QVideoEncoderSettings&  videoSettings = QVideoEncoderSettings(), const QString&  containerMimeType = QString());
   bool  setMediaObject(QMediaRecorder* theWrappedObject, QMediaObject*  object);
   void setMetaData(QMediaRecorder* theWrappedObject, const QString&  key, const QVariant&  value);
   bool  setOutputLocation(QMediaRecorder* theWrappedObject, const QUrl&  location);
   void setVideoSettings(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  videoSettings);
   QMediaRecorder::State  state(QMediaRecorder* theWrappedObject) const;
   QMediaRecorder::Status  status(QMediaRecorder* theWrappedObject) const;
   QStringList  supportedAudioCodecs(QMediaRecorder* theWrappedObject) const;
   QList<int >  supportedAudioSampleRates(QMediaRecorder* theWrappedObject, const QAudioEncoderSettings&  settings = QAudioEncoderSettings(), bool*  continuous = 0) const;
   QStringList  supportedContainers(QMediaRecorder* theWrappedObject) const;
   QList<qreal >  supportedFrameRates(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  settings = QVideoEncoderSettings(), bool*  continuous = 0) const;
   QList<QSize >  supportedResolutions(QMediaRecorder* theWrappedObject, const QVideoEncoderSettings&  settings = QVideoEncoderSettings(), bool*  continuous = 0) const;
   QStringList  supportedVideoCodecs(QMediaRecorder* theWrappedObject) const;
   QString  videoCodecDescription(QMediaRecorder* theWrappedObject, const QString&  codecName) const;
   QVideoEncoderSettings  videoSettings(QMediaRecorder* theWrappedObject) const;
   qreal  volume(QMediaRecorder* theWrappedObject) const;
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


