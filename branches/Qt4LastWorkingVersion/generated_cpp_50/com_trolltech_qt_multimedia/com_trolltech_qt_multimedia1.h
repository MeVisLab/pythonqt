#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractvideobuffer.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmediaencodersettings.h>
#include <qmediaobject.h>
#include <qmediarecorder.h>
#include <qmediaservice.h>
#include <qmediatimerange.h>
#include <qmetaobject.h>
#include <qmultimedia.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qradiodata.h>
#include <qradiotuner.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qsoundeffect.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qurl.h>
#include <qvideoframe.h>
#include <qvideoprobe.h>
#include <qvideosurfaceformat.h>
#include <qvideowidget.h>
#include <qwidget.h>
#include <qwindow.h>



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
    PythonQtShell_QRadioData(QMediaObject*  mediaObject, QObject*  parent = 0):QRadioData(mediaObject, parent),_wrapper(NULL) {};

   ~PythonQtShell_QRadioData();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QMediaObject*  mediaObject() const;
virtual bool  setMediaObject(QMediaObject*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRadioData : public QRadioData
{ public:
inline QMediaObject*  promoted_mediaObject() const { return QRadioData::mediaObject(); }
inline bool  promoted_setMediaObject(QMediaObject*  arg__1) { return QRadioData::setMediaObject(arg__1); }
};

class PythonQtWrapper_QRadioData : public QObject
{ Q_OBJECT
public:
public slots:
QRadioData* new_QRadioData(QMediaObject*  mediaObject, QObject*  parent = 0);
void delete_QRadioData(QRadioData* obj) { delete obj; } 
   QMultimedia::AvailabilityStatus  availability(QRadioData* theWrappedObject) const;
   QRadioData::Error  error(QRadioData* theWrappedObject) const;
   QString  errorString(QRadioData* theWrappedObject) const;
   bool  isAlternativeFrequenciesEnabled(QRadioData* theWrappedObject) const;
   QMediaObject*  mediaObject(QRadioData* theWrappedObject) const;
   QRadioData::ProgramType  programType(QRadioData* theWrappedObject) const;
   QString  programTypeName(QRadioData* theWrappedObject) const;
   QString  radioText(QRadioData* theWrappedObject) const;
   bool  setMediaObject(QRadioData* theWrappedObject, QMediaObject*  arg__1);
   QString  stationId(QRadioData* theWrappedObject) const;
   QString  stationName(QRadioData* theWrappedObject) const;
};





class PythonQtShell_QRadioTuner : public QRadioTuner
{
public:
    PythonQtShell_QRadioTuner(QObject*  parent = 0):QRadioTuner(parent),_wrapper(NULL) {};

   ~PythonQtShell_QRadioTuner();

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

class PythonQtPublicPromoter_QRadioTuner : public QRadioTuner
{ public:
inline QMultimedia::AvailabilityStatus  promoted_availability() const { return QRadioTuner::availability(); }
};

class PythonQtWrapper_QRadioTuner : public QObject
{ Q_OBJECT
public:
public slots:
QRadioTuner* new_QRadioTuner(QObject*  parent = 0);
void delete_QRadioTuner(QRadioTuner* obj) { delete obj; } 
   QMultimedia::AvailabilityStatus  availability(QRadioTuner* theWrappedObject) const;
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





class PythonQtShell_QSoundEffect : public QSoundEffect
{
public:
    PythonQtShell_QSoundEffect(QObject*  parent = 0):QSoundEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSoundEffect();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

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
QSoundEffect* new_QSoundEffect(QObject*  parent = 0);
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





class PythonQtWrapper_QVideoFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FieldType PixelFormat )
enum FieldType{
  ProgressiveFrame = QVideoFrame::ProgressiveFrame,   TopField = QVideoFrame::TopField,   BottomField = QVideoFrame::BottomField,   InterlacedFrame = QVideoFrame::InterlacedFrame};
enum PixelFormat{
  Format_Invalid = QVideoFrame::Format_Invalid,   Format_ARGB32 = QVideoFrame::Format_ARGB32,   Format_ARGB32_Premultiplied = QVideoFrame::Format_ARGB32_Premultiplied,   Format_RGB32 = QVideoFrame::Format_RGB32,   Format_RGB24 = QVideoFrame::Format_RGB24,   Format_RGB565 = QVideoFrame::Format_RGB565,   Format_RGB555 = QVideoFrame::Format_RGB555,   Format_ARGB8565_Premultiplied = QVideoFrame::Format_ARGB8565_Premultiplied,   Format_BGRA32 = QVideoFrame::Format_BGRA32,   Format_BGRA32_Premultiplied = QVideoFrame::Format_BGRA32_Premultiplied,   Format_BGR32 = QVideoFrame::Format_BGR32,   Format_BGR24 = QVideoFrame::Format_BGR24,   Format_BGR565 = QVideoFrame::Format_BGR565,   Format_BGR555 = QVideoFrame::Format_BGR555,   Format_BGRA5658_Premultiplied = QVideoFrame::Format_BGRA5658_Premultiplied,   Format_AYUV444 = QVideoFrame::Format_AYUV444,   Format_AYUV444_Premultiplied = QVideoFrame::Format_AYUV444_Premultiplied,   Format_YUV444 = QVideoFrame::Format_YUV444,   Format_YUV420P = QVideoFrame::Format_YUV420P,   Format_YV12 = QVideoFrame::Format_YV12,   Format_UYVY = QVideoFrame::Format_UYVY,   Format_YUYV = QVideoFrame::Format_YUYV,   Format_NV12 = QVideoFrame::Format_NV12,   Format_NV21 = QVideoFrame::Format_NV21,   Format_IMC1 = QVideoFrame::Format_IMC1,   Format_IMC2 = QVideoFrame::Format_IMC2,   Format_IMC3 = QVideoFrame::Format_IMC3,   Format_IMC4 = QVideoFrame::Format_IMC4,   Format_Y8 = QVideoFrame::Format_Y8,   Format_Y16 = QVideoFrame::Format_Y16,   Format_Jpeg = QVideoFrame::Format_Jpeg,   Format_CameraRaw = QVideoFrame::Format_CameraRaw,   Format_AdobeDng = QVideoFrame::Format_AdobeDng,   Format_User = QVideoFrame::Format_User};
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
   int  bytesPerLine(QVideoFrame* theWrappedObject) const;
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
   QVideoFrame*  operator_assign(QVideoFrame* theWrappedObject, const QVideoFrame&  other);
   QVideoFrame::PixelFormat  pixelFormat(QVideoFrame* theWrappedObject) const;
   QVideoFrame::PixelFormat  static_QVideoFrame_pixelFormatFromImageFormat(QImage::Format  format);
   void setEndTime(QVideoFrame* theWrappedObject, qint64  time);
   void setFieldType(QVideoFrame* theWrappedObject, QVideoFrame::FieldType  arg__1);
   void setMetaData(QVideoFrame* theWrappedObject, const QString&  key, const QVariant&  value);
   void setStartTime(QVideoFrame* theWrappedObject, qint64  time);
   QSize  size(QVideoFrame* theWrappedObject) const;
   qint64  startTime(QVideoFrame* theWrappedObject) const;
   void unmap(QVideoFrame* theWrappedObject);
   int  width(QVideoFrame* theWrappedObject) const;
    QString py_toString(QVideoFrame*);
};





class PythonQtShell_QVideoProbe : public QVideoProbe
{
public:
    PythonQtShell_QVideoProbe(QObject*  parent = 0):QVideoProbe(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVideoProbe();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QVideoProbe : public QObject
{ Q_OBJECT
public:
public slots:
QVideoProbe* new_QVideoProbe(QObject*  parent = 0);
void delete_QVideoProbe(QVideoProbe* obj) { delete obj; } 
   bool  isActive(QVideoProbe* theWrappedObject) const;
   bool  setSource(QVideoProbe* theWrappedObject, QMediaObject*  source);
   bool  setSource(QVideoProbe* theWrappedObject, QMediaRecorder*  source);
};





class PythonQtWrapper_QVideoSurfaceFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction YCbCrColorSpace )
enum Direction{
  TopToBottom = QVideoSurfaceFormat::TopToBottom,   BottomToTop = QVideoSurfaceFormat::BottomToTop};
enum YCbCrColorSpace{
  YCbCr_Undefined = QVideoSurfaceFormat::YCbCr_Undefined,   YCbCr_BT601 = QVideoSurfaceFormat::YCbCr_BT601,   YCbCr_BT709 = QVideoSurfaceFormat::YCbCr_BT709,   YCbCr_xvYCC601 = QVideoSurfaceFormat::YCbCr_xvYCC601,   YCbCr_xvYCC709 = QVideoSurfaceFormat::YCbCr_xvYCC709,   YCbCr_JPEG = QVideoSurfaceFormat::YCbCr_JPEG,   YCbCr_CustomMatrix = QVideoSurfaceFormat::YCbCr_CustomMatrix};
public slots:
QVideoSurfaceFormat* new_QVideoSurfaceFormat();
QVideoSurfaceFormat* new_QVideoSurfaceFormat(const QSize&  size, QVideoFrame::PixelFormat  pixelFormat, QAbstractVideoBuffer::HandleType  handleType = QAbstractVideoBuffer::NoHandle);
QVideoSurfaceFormat* new_QVideoSurfaceFormat(const QVideoSurfaceFormat&  format);
void delete_QVideoSurfaceFormat(QVideoSurfaceFormat* obj) { delete obj; } 
   int  frameHeight(QVideoSurfaceFormat* theWrappedObject) const;
   qreal  frameRate(QVideoSurfaceFormat* theWrappedObject) const;
   QSize  frameSize(QVideoSurfaceFormat* theWrappedObject) const;
   int  frameWidth(QVideoSurfaceFormat* theWrappedObject) const;
   QAbstractVideoBuffer::HandleType  handleType(QVideoSurfaceFormat* theWrappedObject) const;
   bool  isValid(QVideoSurfaceFormat* theWrappedObject) const;
   bool  __ne__(QVideoSurfaceFormat* theWrappedObject, const QVideoSurfaceFormat&  format) const;
   QVideoSurfaceFormat*  operator_assign(QVideoSurfaceFormat* theWrappedObject, const QVideoSurfaceFormat&  format);
   bool  __eq__(QVideoSurfaceFormat* theWrappedObject, const QVideoSurfaceFormat&  format) const;
   QSize  pixelAspectRatio(QVideoSurfaceFormat* theWrappedObject) const;
   QVideoFrame::PixelFormat  pixelFormat(QVideoSurfaceFormat* theWrappedObject) const;
   QVariant  property(QVideoSurfaceFormat* theWrappedObject, const char*  name) const;
   QList<QByteArray >  propertyNames(QVideoSurfaceFormat* theWrappedObject) const;
   QVideoSurfaceFormat::Direction  scanLineDirection(QVideoSurfaceFormat* theWrappedObject) const;
   void setFrameRate(QVideoSurfaceFormat* theWrappedObject, qreal  rate);
   void setFrameSize(QVideoSurfaceFormat* theWrappedObject, const QSize&  size);
   void setFrameSize(QVideoSurfaceFormat* theWrappedObject, int  width, int  height);
   void setPixelAspectRatio(QVideoSurfaceFormat* theWrappedObject, const QSize&  ratio);
   void setPixelAspectRatio(QVideoSurfaceFormat* theWrappedObject, int  width, int  height);
   void setProperty(QVideoSurfaceFormat* theWrappedObject, const char*  name, const QVariant&  value);
   void setScanLineDirection(QVideoSurfaceFormat* theWrappedObject, QVideoSurfaceFormat::Direction  direction);
   void setViewport(QVideoSurfaceFormat* theWrappedObject, const QRect&  viewport);
   void setYCbCrColorSpace(QVideoSurfaceFormat* theWrappedObject, QVideoSurfaceFormat::YCbCrColorSpace  colorSpace);
   QSize  sizeHint(QVideoSurfaceFormat* theWrappedObject) const;
   QRect  viewport(QVideoSurfaceFormat* theWrappedObject) const;
   QVideoSurfaceFormat::YCbCrColorSpace  yCbCrColorSpace(QVideoSurfaceFormat* theWrappedObject) const;
    QString py_toString(QVideoSurfaceFormat*);
};





class PythonQtShell_QVideoWidget : public QVideoWidget
{
public:
    PythonQtShell_QVideoWidget(QWidget*  parent = 0):QVideoWidget(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVideoWidget();

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

class PythonQtPublicPromoter_QVideoWidget : public QVideoWidget
{ public:
inline bool  promoted_event(QEvent*  event) { return QVideoWidget::event(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QVideoWidget::hideEvent(event); }
inline QMediaObject*  promoted_mediaObject() const { return QVideoWidget::mediaObject(); }
inline void promoted_moveEvent(QMoveEvent*  event) { QVideoWidget::moveEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QVideoWidget::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QVideoWidget::resizeEvent(event); }
inline bool  promoted_setMediaObject(QMediaObject*  object) { return QVideoWidget::setMediaObject(object); }
inline void promoted_showEvent(QShowEvent*  event) { QVideoWidget::showEvent(event); }
};

class PythonQtWrapper_QVideoWidget : public QObject
{ Q_OBJECT
public:
public slots:
QVideoWidget* new_QVideoWidget(QWidget*  parent = 0);
void delete_QVideoWidget(QVideoWidget* obj) { delete obj; } 
   Qt::AspectRatioMode  aspectRatioMode(QVideoWidget* theWrappedObject) const;
   int  brightness(QVideoWidget* theWrappedObject) const;
   int  contrast(QVideoWidget* theWrappedObject) const;
   bool  event(QVideoWidget* theWrappedObject, QEvent*  event);
   void hideEvent(QVideoWidget* theWrappedObject, QHideEvent*  event);
   int  hue(QVideoWidget* theWrappedObject) const;
   QMediaObject*  mediaObject(QVideoWidget* theWrappedObject) const;
   void moveEvent(QVideoWidget* theWrappedObject, QMoveEvent*  event);
   void paintEvent(QVideoWidget* theWrappedObject, QPaintEvent*  event);
   void resizeEvent(QVideoWidget* theWrappedObject, QResizeEvent*  event);
   int  saturation(QVideoWidget* theWrappedObject) const;
   bool  setMediaObject(QVideoWidget* theWrappedObject, QMediaObject*  object);
   void showEvent(QVideoWidget* theWrappedObject, QShowEvent*  event);
   QSize  sizeHint(QVideoWidget* theWrappedObject) const;
};


