#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractvideosurface.h>
#include <qaction.h>
#include <qaudiobuffer.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcamera.h>
#include <qcamerafocus.h>
#include <qcamerafocuscontrol.h>
#include <qcameraimagecapture.h>
#include <qcameraimagecapturecontrol.h>
#include <qcameraimageprocessing.h>
#include <qcameraimageprocessingcontrol.h>
#include <qcamerainfo.h>
#include <qcamerainfocontrol.h>
#include <qcameralockscontrol.h>
#include <qcameraviewfinder.h>
#include <qcameraviewfindersettings.h>
#include <qcameraviewfindersettingscontrol.h>
#include <qcamerazoomcontrol.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsvideoitem.h>
#include <qicon.h>
#include <qimage.h>
#include <qimageencodercontrol.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmediaaudioprobecontrol.h>
#include <qmediaavailabilitycontrol.h>
#include <qmediabindableinterface.h>
#include <qmediacontainercontrol.h>
#include <qmediacontent.h>
#include <qmediacontrol.h>
#include <qmediaencodersettings.h>
#include <qmediagaplessplaybackcontrol.h>
#include <qmedianetworkaccesscontrol.h>
#include <qmediaobject.h>
#include <qmediaplayer.h>
#include <qmediaplayercontrol.h>
#include <qmediaplaylist.h>
#include <qmediaresource.h>
#include <qmediaservice.h>
#include <qmediatimerange.h>
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
#include <qvideowidget.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtWrapper_QCameraFocus : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FocusMode )
Q_FLAGS(FocusModes )
enum FocusMode{
  ManualFocus = QCameraFocus::ManualFocus,   HyperfocalFocus = QCameraFocus::HyperfocalFocus,   InfinityFocus = QCameraFocus::InfinityFocus,   AutoFocus = QCameraFocus::AutoFocus,   ContinuousFocus = QCameraFocus::ContinuousFocus,   MacroFocus = QCameraFocus::MacroFocus};
Q_DECLARE_FLAGS(FocusModes, FocusMode)
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





class PythonQtShell_QCameraFocusControl : public QCameraFocusControl
{
public:
    PythonQtShell_QCameraFocusControl(QObject*  parent = nullptr):QCameraFocusControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraFocusControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QPointF  customFocusPoint() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QCameraFocus::FocusModes  focusMode() const;
virtual QCameraFocus::FocusPointMode  focusPointMode() const;
virtual QList<QCameraFocusZone >  focusZones() const;
virtual bool  isFocusModeSupported(QCameraFocus::FocusModes  mode) const;
virtual bool  isFocusPointModeSupported(QCameraFocus::FocusPointMode  mode) const;
virtual void setCustomFocusPoint(const QPointF&  point);
virtual void setFocusMode(QCameraFocus::FocusModes  mode);
virtual void setFocusPointMode(QCameraFocus::FocusPointMode  mode);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraFocusControl : public QCameraFocusControl
{ public:
inline QPointF  py_q_customFocusPoint() const { return this->customFocusPoint(); }
inline QCameraFocus::FocusModes  py_q_focusMode() const { return this->focusMode(); }
inline QCameraFocus::FocusPointMode  py_q_focusPointMode() const { return this->focusPointMode(); }
inline QList<QCameraFocusZone >  py_q_focusZones() const { return this->focusZones(); }
inline bool  py_q_isFocusModeSupported(QCameraFocus::FocusModes  mode) const { return this->isFocusModeSupported(mode); }
inline bool  py_q_isFocusPointModeSupported(QCameraFocus::FocusPointMode  mode) const { return this->isFocusPointModeSupported(mode); }
inline void py_q_setCustomFocusPoint(const QPointF&  point) { this->setCustomFocusPoint(point); }
inline void py_q_setFocusMode(QCameraFocus::FocusModes  mode) { this->setFocusMode(mode); }
inline void py_q_setFocusPointMode(QCameraFocus::FocusPointMode  mode) { this->setFocusPointMode(mode); }
};

class PythonQtWrapper_QCameraFocusControl : public QObject
{ Q_OBJECT
public:
public slots:
QCameraFocusControl* new_QCameraFocusControl(QObject*  parent = nullptr);
void delete_QCameraFocusControl(QCameraFocusControl* obj) { delete obj; } 
   QPointF  customFocusPoint(QCameraFocusControl* theWrappedObject) const;
   QPointF  py_q_customFocusPoint(QCameraFocusControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraFocusControl*)theWrappedObject)->py_q_customFocusPoint());}
   QCameraFocus::FocusModes  focusMode(QCameraFocusControl* theWrappedObject) const;
   QCameraFocus::FocusModes  py_q_focusMode(QCameraFocusControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraFocusControl*)theWrappedObject)->py_q_focusMode());}
   QCameraFocus::FocusPointMode  focusPointMode(QCameraFocusControl* theWrappedObject) const;
   QCameraFocus::FocusPointMode  py_q_focusPointMode(QCameraFocusControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraFocusControl*)theWrappedObject)->py_q_focusPointMode());}
   QList<QCameraFocusZone >  focusZones(QCameraFocusControl* theWrappedObject) const;
   QList<QCameraFocusZone >  py_q_focusZones(QCameraFocusControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraFocusControl*)theWrappedObject)->py_q_focusZones());}
   bool  isFocusModeSupported(QCameraFocusControl* theWrappedObject, QCameraFocus::FocusModes  mode) const;
   bool  py_q_isFocusModeSupported(QCameraFocusControl* theWrappedObject, QCameraFocus::FocusModes  mode) const{  return (((PythonQtPublicPromoter_QCameraFocusControl*)theWrappedObject)->py_q_isFocusModeSupported(mode));}
   bool  isFocusPointModeSupported(QCameraFocusControl* theWrappedObject, QCameraFocus::FocusPointMode  mode) const;
   bool  py_q_isFocusPointModeSupported(QCameraFocusControl* theWrappedObject, QCameraFocus::FocusPointMode  mode) const{  return (((PythonQtPublicPromoter_QCameraFocusControl*)theWrappedObject)->py_q_isFocusPointModeSupported(mode));}
   void setCustomFocusPoint(QCameraFocusControl* theWrappedObject, const QPointF&  point);
   void py_q_setCustomFocusPoint(QCameraFocusControl* theWrappedObject, const QPointF&  point){  (((PythonQtPublicPromoter_QCameraFocusControl*)theWrappedObject)->py_q_setCustomFocusPoint(point));}
   void setFocusMode(QCameraFocusControl* theWrappedObject, QCameraFocus::FocusModes  mode);
   void py_q_setFocusMode(QCameraFocusControl* theWrappedObject, QCameraFocus::FocusModes  mode){  (((PythonQtPublicPromoter_QCameraFocusControl*)theWrappedObject)->py_q_setFocusMode(mode));}
   void setFocusPointMode(QCameraFocusControl* theWrappedObject, QCameraFocus::FocusPointMode  mode);
   void py_q_setFocusPointMode(QCameraFocusControl* theWrappedObject, QCameraFocus::FocusPointMode  mode){  (((PythonQtPublicPromoter_QCameraFocusControl*)theWrappedObject)->py_q_setFocusPointMode(mode));}
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
    bool __nonzero__(QCameraFocusZone* obj) { return obj->isValid(); }
};





class PythonQtShell_QCameraImageCapture : public QCameraImageCapture
{
public:
    PythonQtShell_QCameraImageCapture(QMediaObject*  mediaObject, QObject*  parent = nullptr):QCameraImageCapture(mediaObject, parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraImageCapture();

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

class PythonQtPublicPromoter_QCameraImageCapture : public QCameraImageCapture
{ public:
inline bool  promoted_setMediaObject(QMediaObject*  arg__1) { return this->setMediaObject(arg__1); }
inline QMediaObject*  py_q_mediaObject() const { return QCameraImageCapture::mediaObject(); }
inline bool  py_q_setMediaObject(QMediaObject*  arg__1) { return QCameraImageCapture::setMediaObject(arg__1); }
};

class PythonQtWrapper_QCameraImageCapture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CaptureDestination DriveMode )
Q_FLAGS(CaptureDestinations )
enum CaptureDestination{
  CaptureToFile = QCameraImageCapture::CaptureToFile,   CaptureToBuffer = QCameraImageCapture::CaptureToBuffer};
enum DriveMode{
  SingleImageCapture = QCameraImageCapture::SingleImageCapture};
Q_DECLARE_FLAGS(CaptureDestinations, CaptureDestination)
public slots:
QCameraImageCapture* new_QCameraImageCapture(QMediaObject*  mediaObject, QObject*  parent = nullptr);
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
   QMediaObject*  py_q_mediaObject(QCameraImageCapture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraImageCapture*)theWrappedObject)->py_q_mediaObject());}
   void setBufferFormat(QCameraImageCapture* theWrappedObject, const QVideoFrame::PixelFormat  format);
   void setCaptureDestination(QCameraImageCapture* theWrappedObject, QCameraImageCapture::CaptureDestinations  destination);
   void setEncodingSettings(QCameraImageCapture* theWrappedObject, const QImageEncoderSettings&  settings);
   bool  py_q_setMediaObject(QCameraImageCapture* theWrappedObject, QMediaObject*  arg__1){  return (((PythonQtPublicPromoter_QCameraImageCapture*)theWrappedObject)->py_q_setMediaObject(arg__1));}
   QList<QVideoFrame::PixelFormat >  supportedBufferFormats(QCameraImageCapture* theWrappedObject) const;
   QStringList  supportedImageCodecs(QCameraImageCapture* theWrappedObject) const;
   QList<QSize >  supportedResolutions(QCameraImageCapture* theWrappedObject, const QImageEncoderSettings&  settings = QImageEncoderSettings(), bool*  continuous = nullptr) const;
};





class PythonQtShell_QCameraImageCaptureControl : public QCameraImageCaptureControl
{
public:
    PythonQtShell_QCameraImageCaptureControl(QObject*  parent = nullptr):QCameraImageCaptureControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraImageCaptureControl();

virtual void cancelCapture();
virtual int  capture(const QString&  fileName);
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QCameraImageCapture::DriveMode  driveMode() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isReadyForCapture() const;
virtual void setDriveMode(QCameraImageCapture::DriveMode  mode);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraImageCaptureControl : public QCameraImageCaptureControl
{ public:
inline void py_q_cancelCapture() { this->cancelCapture(); }
inline int  py_q_capture(const QString&  fileName) { return this->capture(fileName); }
inline QCameraImageCapture::DriveMode  py_q_driveMode() const { return this->driveMode(); }
inline bool  py_q_isReadyForCapture() const { return this->isReadyForCapture(); }
inline void py_q_setDriveMode(QCameraImageCapture::DriveMode  mode) { this->setDriveMode(mode); }
};

class PythonQtWrapper_QCameraImageCaptureControl : public QObject
{ Q_OBJECT
public:
public slots:
QCameraImageCaptureControl* new_QCameraImageCaptureControl(QObject*  parent = nullptr);
void delete_QCameraImageCaptureControl(QCameraImageCaptureControl* obj) { delete obj; } 
   void cancelCapture(QCameraImageCaptureControl* theWrappedObject);
   void py_q_cancelCapture(QCameraImageCaptureControl* theWrappedObject){  (((PythonQtPublicPromoter_QCameraImageCaptureControl*)theWrappedObject)->py_q_cancelCapture());}
   int  capture(QCameraImageCaptureControl* theWrappedObject, const QString&  fileName);
   int  py_q_capture(QCameraImageCaptureControl* theWrappedObject, const QString&  fileName){  return (((PythonQtPublicPromoter_QCameraImageCaptureControl*)theWrappedObject)->py_q_capture(fileName));}
   QCameraImageCapture::DriveMode  driveMode(QCameraImageCaptureControl* theWrappedObject) const;
   QCameraImageCapture::DriveMode  py_q_driveMode(QCameraImageCaptureControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraImageCaptureControl*)theWrappedObject)->py_q_driveMode());}
   bool  isReadyForCapture(QCameraImageCaptureControl* theWrappedObject) const;
   bool  py_q_isReadyForCapture(QCameraImageCaptureControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraImageCaptureControl*)theWrappedObject)->py_q_isReadyForCapture());}
   void setDriveMode(QCameraImageCaptureControl* theWrappedObject, QCameraImageCapture::DriveMode  mode);
   void py_q_setDriveMode(QCameraImageCaptureControl* theWrappedObject, QCameraImageCapture::DriveMode  mode){  (((PythonQtPublicPromoter_QCameraImageCaptureControl*)theWrappedObject)->py_q_setDriveMode(mode));}
};





class PythonQtWrapper_QCameraImageProcessing : public QObject
{ Q_OBJECT
public:
public slots:
   qreal  brightness(QCameraImageProcessing* theWrappedObject) const;
   QCameraImageProcessing::ColorFilter  colorFilter(QCameraImageProcessing* theWrappedObject) const;
   qreal  contrast(QCameraImageProcessing* theWrappedObject) const;
   qreal  denoisingLevel(QCameraImageProcessing* theWrappedObject) const;
   bool  isAvailable(QCameraImageProcessing* theWrappedObject) const;
   bool  isColorFilterSupported(QCameraImageProcessing* theWrappedObject, QCameraImageProcessing::ColorFilter  filter) const;
   bool  isWhiteBalanceModeSupported(QCameraImageProcessing* theWrappedObject, QCameraImageProcessing::WhiteBalanceMode  mode) const;
   qreal  manualWhiteBalance(QCameraImageProcessing* theWrappedObject) const;
   qreal  saturation(QCameraImageProcessing* theWrappedObject) const;
   void setBrightness(QCameraImageProcessing* theWrappedObject, qreal  value);
   void setColorFilter(QCameraImageProcessing* theWrappedObject, QCameraImageProcessing::ColorFilter  filter);
   void setContrast(QCameraImageProcessing* theWrappedObject, qreal  value);
   void setDenoisingLevel(QCameraImageProcessing* theWrappedObject, qreal  value);
   void setManualWhiteBalance(QCameraImageProcessing* theWrappedObject, qreal  colorTemperature);
   void setSaturation(QCameraImageProcessing* theWrappedObject, qreal  value);
   void setSharpeningLevel(QCameraImageProcessing* theWrappedObject, qreal  value);
   void setWhiteBalanceMode(QCameraImageProcessing* theWrappedObject, QCameraImageProcessing::WhiteBalanceMode  mode);
   qreal  sharpeningLevel(QCameraImageProcessing* theWrappedObject) const;
   QCameraImageProcessing::WhiteBalanceMode  whiteBalanceMode(QCameraImageProcessing* theWrappedObject) const;
};





class PythonQtShell_QCameraImageProcessingControl : public QCameraImageProcessingControl
{
public:
    PythonQtShell_QCameraImageProcessingControl(QObject*  parent = nullptr):QCameraImageProcessingControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraImageProcessingControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isParameterSupported(QCameraImageProcessingControl::ProcessingParameter  arg__1) const;
virtual bool  isParameterValueSupported(QCameraImageProcessingControl::ProcessingParameter  parameter, const QVariant&  value) const;
virtual QVariant  parameter(QCameraImageProcessingControl::ProcessingParameter  parameter) const;
virtual void setParameter(QCameraImageProcessingControl::ProcessingParameter  parameter, const QVariant&  value);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraImageProcessingControl : public QCameraImageProcessingControl
{ public:
inline bool  py_q_isParameterSupported(QCameraImageProcessingControl::ProcessingParameter  arg__1) const { return this->isParameterSupported(arg__1); }
inline bool  py_q_isParameterValueSupported(QCameraImageProcessingControl::ProcessingParameter  parameter, const QVariant&  value) const { return this->isParameterValueSupported(parameter, value); }
inline QVariant  py_q_parameter(QCameraImageProcessingControl::ProcessingParameter  parameter) const { return this->parameter(parameter); }
inline void py_q_setParameter(QCameraImageProcessingControl::ProcessingParameter  parameter, const QVariant&  value) { this->setParameter(parameter, value); }
};

class PythonQtWrapper_QCameraImageProcessingControl : public QObject
{ Q_OBJECT
public:
public slots:
QCameraImageProcessingControl* new_QCameraImageProcessingControl(QObject*  parent = nullptr);
void delete_QCameraImageProcessingControl(QCameraImageProcessingControl* obj) { delete obj; } 
   bool  isParameterSupported(QCameraImageProcessingControl* theWrappedObject, QCameraImageProcessingControl::ProcessingParameter  arg__1) const;
   bool  py_q_isParameterSupported(QCameraImageProcessingControl* theWrappedObject, QCameraImageProcessingControl::ProcessingParameter  arg__1) const{  return (((PythonQtPublicPromoter_QCameraImageProcessingControl*)theWrappedObject)->py_q_isParameterSupported(arg__1));}
   bool  isParameterValueSupported(QCameraImageProcessingControl* theWrappedObject, QCameraImageProcessingControl::ProcessingParameter  parameter, const QVariant&  value) const;
   bool  py_q_isParameterValueSupported(QCameraImageProcessingControl* theWrappedObject, QCameraImageProcessingControl::ProcessingParameter  parameter, const QVariant&  value) const{  return (((PythonQtPublicPromoter_QCameraImageProcessingControl*)theWrappedObject)->py_q_isParameterValueSupported(parameter, value));}
   QVariant  parameter(QCameraImageProcessingControl* theWrappedObject, QCameraImageProcessingControl::ProcessingParameter  parameter) const;
   QVariant  py_q_parameter(QCameraImageProcessingControl* theWrappedObject, QCameraImageProcessingControl::ProcessingParameter  parameter) const{  return (((PythonQtPublicPromoter_QCameraImageProcessingControl*)theWrappedObject)->py_q_parameter(parameter));}
   void setParameter(QCameraImageProcessingControl* theWrappedObject, QCameraImageProcessingControl::ProcessingParameter  parameter, const QVariant&  value);
   void py_q_setParameter(QCameraImageProcessingControl* theWrappedObject, QCameraImageProcessingControl::ProcessingParameter  parameter, const QVariant&  value){  (((PythonQtPublicPromoter_QCameraImageProcessingControl*)theWrappedObject)->py_q_setParameter(parameter, value));}
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





class PythonQtShell_QCameraInfoControl : public QCameraInfoControl
{
public:
    PythonQtShell_QCameraInfoControl(QObject*  parent = nullptr):QCameraInfoControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraInfoControl();

virtual int  cameraOrientation(const QString&  deviceName) const;
virtual QCamera::Position  cameraPosition(const QString&  deviceName) const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraInfoControl : public QCameraInfoControl
{ public:
inline int  py_q_cameraOrientation(const QString&  deviceName) const { return this->cameraOrientation(deviceName); }
inline QCamera::Position  py_q_cameraPosition(const QString&  deviceName) const { return this->cameraPosition(deviceName); }
};

class PythonQtWrapper_QCameraInfoControl : public QObject
{ Q_OBJECT
public:
public slots:
QCameraInfoControl* new_QCameraInfoControl(QObject*  parent = nullptr);
void delete_QCameraInfoControl(QCameraInfoControl* obj) { delete obj; } 
   int  cameraOrientation(QCameraInfoControl* theWrappedObject, const QString&  deviceName) const;
   int  py_q_cameraOrientation(QCameraInfoControl* theWrappedObject, const QString&  deviceName) const{  return (((PythonQtPublicPromoter_QCameraInfoControl*)theWrappedObject)->py_q_cameraOrientation(deviceName));}
   QCamera::Position  cameraPosition(QCameraInfoControl* theWrappedObject, const QString&  deviceName) const;
   QCamera::Position  py_q_cameraPosition(QCameraInfoControl* theWrappedObject, const QString&  deviceName) const{  return (((PythonQtPublicPromoter_QCameraInfoControl*)theWrappedObject)->py_q_cameraPosition(deviceName));}
};





class PythonQtShell_QCameraLocksControl : public QCameraLocksControl
{
public:
    PythonQtShell_QCameraLocksControl(QObject*  parent = nullptr):QCameraLocksControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraLocksControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QCamera::LockStatus  lockStatus(QCamera::LockType  lock) const;
virtual void searchAndLock(QCamera::LockTypes  locks);
virtual QCamera::LockTypes  supportedLocks() const;
virtual void timerEvent(QTimerEvent*  event);
virtual void unlock(QCamera::LockTypes  locks);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraLocksControl : public QCameraLocksControl
{ public:
inline QCamera::LockStatus  py_q_lockStatus(QCamera::LockType  lock) const { return this->lockStatus(lock); }
inline void py_q_searchAndLock(QCamera::LockTypes  locks) { this->searchAndLock(locks); }
inline QCamera::LockTypes  py_q_supportedLocks() const { return this->supportedLocks(); }
inline void py_q_unlock(QCamera::LockTypes  locks) { this->unlock(locks); }
};

class PythonQtWrapper_QCameraLocksControl : public QObject
{ Q_OBJECT
public:
public slots:
QCameraLocksControl* new_QCameraLocksControl(QObject*  parent = nullptr);
void delete_QCameraLocksControl(QCameraLocksControl* obj) { delete obj; } 
   QCamera::LockStatus  lockStatus(QCameraLocksControl* theWrappedObject, QCamera::LockType  lock) const;
   QCamera::LockStatus  py_q_lockStatus(QCameraLocksControl* theWrappedObject, QCamera::LockType  lock) const{  return (((PythonQtPublicPromoter_QCameraLocksControl*)theWrappedObject)->py_q_lockStatus(lock));}
   void searchAndLock(QCameraLocksControl* theWrappedObject, QCamera::LockTypes  locks);
   void py_q_searchAndLock(QCameraLocksControl* theWrappedObject, QCamera::LockTypes  locks){  (((PythonQtPublicPromoter_QCameraLocksControl*)theWrappedObject)->py_q_searchAndLock(locks));}
   QCamera::LockTypes  supportedLocks(QCameraLocksControl* theWrappedObject) const;
   QCamera::LockTypes  py_q_supportedLocks(QCameraLocksControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraLocksControl*)theWrappedObject)->py_q_supportedLocks());}
   void unlock(QCameraLocksControl* theWrappedObject, QCamera::LockTypes  locks);
   void py_q_unlock(QCameraLocksControl* theWrappedObject, QCamera::LockTypes  locks){  (((PythonQtPublicPromoter_QCameraLocksControl*)theWrappedObject)->py_q_unlock(locks));}
};





class PythonQtShell_QCameraViewfinder : public QCameraViewfinder
{
public:
    PythonQtShell_QCameraViewfinder(QWidget*  parent = nullptr):QCameraViewfinder(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraViewfinder();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual QMediaObject*  mediaObject() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  setMediaObject(QMediaObject*  object);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraViewfinder : public QCameraViewfinder
{ public:
inline bool  promoted_setMediaObject(QMediaObject*  object) { return this->setMediaObject(object); }
inline QMediaObject*  py_q_mediaObject() const { return QCameraViewfinder::mediaObject(); }
inline bool  py_q_setMediaObject(QMediaObject*  object) { return QCameraViewfinder::setMediaObject(object); }
};

class PythonQtWrapper_QCameraViewfinder : public QObject
{ Q_OBJECT
public:
public slots:
QCameraViewfinder* new_QCameraViewfinder(QWidget*  parent = nullptr);
void delete_QCameraViewfinder(QCameraViewfinder* obj) { delete obj; } 
   QMediaObject*  py_q_mediaObject(QCameraViewfinder* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraViewfinder*)theWrappedObject)->py_q_mediaObject());}
   bool  py_q_setMediaObject(QCameraViewfinder* theWrappedObject, QMediaObject*  object){  return (((PythonQtPublicPromoter_QCameraViewfinder*)theWrappedObject)->py_q_setMediaObject(object));}
};





class PythonQtWrapper_QCameraViewfinderSettings : public QObject
{ Q_OBJECT
public:
public slots:
QCameraViewfinderSettings* new_QCameraViewfinderSettings();
QCameraViewfinderSettings* new_QCameraViewfinderSettings(const QCameraViewfinderSettings&  other);
void delete_QCameraViewfinderSettings(QCameraViewfinderSettings* obj) { delete obj; } 
   bool  isNull(QCameraViewfinderSettings* theWrappedObject) const;
   qreal  maximumFrameRate(QCameraViewfinderSettings* theWrappedObject) const;
   qreal  minimumFrameRate(QCameraViewfinderSettings* theWrappedObject) const;
   QCameraViewfinderSettings*  operator_assign(QCameraViewfinderSettings* theWrappedObject, const QCameraViewfinderSettings&  other);
   QSize  pixelAspectRatio(QCameraViewfinderSettings* theWrappedObject) const;
   QVideoFrame::PixelFormat  pixelFormat(QCameraViewfinderSettings* theWrappedObject) const;
   QSize  resolution(QCameraViewfinderSettings* theWrappedObject) const;
   void setMaximumFrameRate(QCameraViewfinderSettings* theWrappedObject, qreal  rate);
   void setMinimumFrameRate(QCameraViewfinderSettings* theWrappedObject, qreal  rate);
   void setPixelAspectRatio(QCameraViewfinderSettings* theWrappedObject, const QSize&  ratio);
   void setPixelAspectRatio(QCameraViewfinderSettings* theWrappedObject, int  horizontal, int  vertical);
   void setPixelFormat(QCameraViewfinderSettings* theWrappedObject, QVideoFrame::PixelFormat  format);
   void setResolution(QCameraViewfinderSettings* theWrappedObject, const QSize&  arg__1);
   void setResolution(QCameraViewfinderSettings* theWrappedObject, int  width, int  height);
   void swap(QCameraViewfinderSettings* theWrappedObject, QCameraViewfinderSettings&  other);
    bool __nonzero__(QCameraViewfinderSettings* obj) { return !obj->isNull(); }
};





class PythonQtShell_QCameraViewfinderSettingsControl : public QCameraViewfinderSettingsControl
{
public:
    PythonQtShell_QCameraViewfinderSettingsControl(QObject*  parent = nullptr):QCameraViewfinderSettingsControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraViewfinderSettingsControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter  parameter) const;
virtual void setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter  parameter, const QVariant&  value);
virtual void timerEvent(QTimerEvent*  event);
virtual QVariant  viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter  parameter) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraViewfinderSettingsControl : public QCameraViewfinderSettingsControl
{ public:
inline bool  py_q_isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter  parameter) const { return this->isViewfinderParameterSupported(parameter); }
inline void py_q_setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter  parameter, const QVariant&  value) { this->setViewfinderParameter(parameter, value); }
inline QVariant  py_q_viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter  parameter) const { return this->viewfinderParameter(parameter); }
};

class PythonQtWrapper_QCameraViewfinderSettingsControl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ViewfinderParameter )
enum ViewfinderParameter{
  Resolution = QCameraViewfinderSettingsControl::Resolution,   PixelAspectRatio = QCameraViewfinderSettingsControl::PixelAspectRatio,   MinimumFrameRate = QCameraViewfinderSettingsControl::MinimumFrameRate,   MaximumFrameRate = QCameraViewfinderSettingsControl::MaximumFrameRate,   PixelFormat = QCameraViewfinderSettingsControl::PixelFormat,   UserParameter = QCameraViewfinderSettingsControl::UserParameter};
public slots:
QCameraViewfinderSettingsControl* new_QCameraViewfinderSettingsControl(QObject*  parent = nullptr);
void delete_QCameraViewfinderSettingsControl(QCameraViewfinderSettingsControl* obj) { delete obj; } 
   bool  isViewfinderParameterSupported(QCameraViewfinderSettingsControl* theWrappedObject, QCameraViewfinderSettingsControl::ViewfinderParameter  parameter) const;
   bool  py_q_isViewfinderParameterSupported(QCameraViewfinderSettingsControl* theWrappedObject, QCameraViewfinderSettingsControl::ViewfinderParameter  parameter) const{  return (((PythonQtPublicPromoter_QCameraViewfinderSettingsControl*)theWrappedObject)->py_q_isViewfinderParameterSupported(parameter));}
   void setViewfinderParameter(QCameraViewfinderSettingsControl* theWrappedObject, QCameraViewfinderSettingsControl::ViewfinderParameter  parameter, const QVariant&  value);
   void py_q_setViewfinderParameter(QCameraViewfinderSettingsControl* theWrappedObject, QCameraViewfinderSettingsControl::ViewfinderParameter  parameter, const QVariant&  value){  (((PythonQtPublicPromoter_QCameraViewfinderSettingsControl*)theWrappedObject)->py_q_setViewfinderParameter(parameter, value));}
   QVariant  viewfinderParameter(QCameraViewfinderSettingsControl* theWrappedObject, QCameraViewfinderSettingsControl::ViewfinderParameter  parameter) const;
   QVariant  py_q_viewfinderParameter(QCameraViewfinderSettingsControl* theWrappedObject, QCameraViewfinderSettingsControl::ViewfinderParameter  parameter) const{  return (((PythonQtPublicPromoter_QCameraViewfinderSettingsControl*)theWrappedObject)->py_q_viewfinderParameter(parameter));}
};





class PythonQtShell_QCameraViewfinderSettingsControl2 : public QCameraViewfinderSettingsControl2
{
public:
    PythonQtShell_QCameraViewfinderSettingsControl2(QObject*  parent = nullptr):QCameraViewfinderSettingsControl2(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraViewfinderSettingsControl2();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void setViewfinderSettings(const QCameraViewfinderSettings&  settings);
virtual QList<QCameraViewfinderSettings >  supportedViewfinderSettings() const;
virtual void timerEvent(QTimerEvent*  event);
virtual QCameraViewfinderSettings  viewfinderSettings() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraViewfinderSettingsControl2 : public QCameraViewfinderSettingsControl2
{ public:
inline void py_q_setViewfinderSettings(const QCameraViewfinderSettings&  settings) { this->setViewfinderSettings(settings); }
inline QList<QCameraViewfinderSettings >  py_q_supportedViewfinderSettings() const { return this->supportedViewfinderSettings(); }
inline QCameraViewfinderSettings  py_q_viewfinderSettings() const { return this->viewfinderSettings(); }
};

class PythonQtWrapper_QCameraViewfinderSettingsControl2 : public QObject
{ Q_OBJECT
public:
public slots:
QCameraViewfinderSettingsControl2* new_QCameraViewfinderSettingsControl2(QObject*  parent = nullptr);
void delete_QCameraViewfinderSettingsControl2(QCameraViewfinderSettingsControl2* obj) { delete obj; } 
   void setViewfinderSettings(QCameraViewfinderSettingsControl2* theWrappedObject, const QCameraViewfinderSettings&  settings);
   void py_q_setViewfinderSettings(QCameraViewfinderSettingsControl2* theWrappedObject, const QCameraViewfinderSettings&  settings){  (((PythonQtPublicPromoter_QCameraViewfinderSettingsControl2*)theWrappedObject)->py_q_setViewfinderSettings(settings));}
   QList<QCameraViewfinderSettings >  supportedViewfinderSettings(QCameraViewfinderSettingsControl2* theWrappedObject) const;
   QList<QCameraViewfinderSettings >  py_q_supportedViewfinderSettings(QCameraViewfinderSettingsControl2* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraViewfinderSettingsControl2*)theWrappedObject)->py_q_supportedViewfinderSettings());}
   QCameraViewfinderSettings  viewfinderSettings(QCameraViewfinderSettingsControl2* theWrappedObject) const;
   QCameraViewfinderSettings  py_q_viewfinderSettings(QCameraViewfinderSettingsControl2* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraViewfinderSettingsControl2*)theWrappedObject)->py_q_viewfinderSettings());}
};





class PythonQtShell_QCameraZoomControl : public QCameraZoomControl
{
public:
    PythonQtShell_QCameraZoomControl(QObject*  parent = nullptr):QCameraZoomControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QCameraZoomControl();

virtual void childEvent(QChildEvent*  event);
virtual qreal  currentDigitalZoom() const;
virtual qreal  currentOpticalZoom() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual qreal  maximumDigitalZoom() const;
virtual qreal  maximumOpticalZoom() const;
virtual qreal  requestedDigitalZoom() const;
virtual qreal  requestedOpticalZoom() const;
virtual void timerEvent(QTimerEvent*  event);
virtual void zoomTo(qreal  optical, qreal  digital);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCameraZoomControl : public QCameraZoomControl
{ public:
inline qreal  py_q_currentDigitalZoom() const { return this->currentDigitalZoom(); }
inline qreal  py_q_currentOpticalZoom() const { return this->currentOpticalZoom(); }
inline qreal  py_q_maximumDigitalZoom() const { return this->maximumDigitalZoom(); }
inline qreal  py_q_maximumOpticalZoom() const { return this->maximumOpticalZoom(); }
inline qreal  py_q_requestedDigitalZoom() const { return this->requestedDigitalZoom(); }
inline qreal  py_q_requestedOpticalZoom() const { return this->requestedOpticalZoom(); }
inline void py_q_zoomTo(qreal  optical, qreal  digital) { this->zoomTo(optical, digital); }
};

class PythonQtWrapper_QCameraZoomControl : public QObject
{ Q_OBJECT
public:
public slots:
QCameraZoomControl* new_QCameraZoomControl(QObject*  parent = nullptr);
void delete_QCameraZoomControl(QCameraZoomControl* obj) { delete obj; } 
   qreal  currentDigitalZoom(QCameraZoomControl* theWrappedObject) const;
   qreal  py_q_currentDigitalZoom(QCameraZoomControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraZoomControl*)theWrappedObject)->py_q_currentDigitalZoom());}
   qreal  currentOpticalZoom(QCameraZoomControl* theWrappedObject) const;
   qreal  py_q_currentOpticalZoom(QCameraZoomControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraZoomControl*)theWrappedObject)->py_q_currentOpticalZoom());}
   qreal  maximumDigitalZoom(QCameraZoomControl* theWrappedObject) const;
   qreal  py_q_maximumDigitalZoom(QCameraZoomControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraZoomControl*)theWrappedObject)->py_q_maximumDigitalZoom());}
   qreal  maximumOpticalZoom(QCameraZoomControl* theWrappedObject) const;
   qreal  py_q_maximumOpticalZoom(QCameraZoomControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraZoomControl*)theWrappedObject)->py_q_maximumOpticalZoom());}
   qreal  requestedDigitalZoom(QCameraZoomControl* theWrappedObject) const;
   qreal  py_q_requestedDigitalZoom(QCameraZoomControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraZoomControl*)theWrappedObject)->py_q_requestedDigitalZoom());}
   qreal  requestedOpticalZoom(QCameraZoomControl* theWrappedObject) const;
   qreal  py_q_requestedOpticalZoom(QCameraZoomControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCameraZoomControl*)theWrappedObject)->py_q_requestedOpticalZoom());}
   void zoomTo(QCameraZoomControl* theWrappedObject, qreal  optical, qreal  digital);
   void py_q_zoomTo(QCameraZoomControl* theWrappedObject, qreal  optical, qreal  digital){  (((PythonQtPublicPromoter_QCameraZoomControl*)theWrappedObject)->py_q_zoomTo(optical, digital));}
};





class PythonQtShell_QCamera__FrameRateRange : public QCamera::FrameRateRange
{
public:
    PythonQtShell_QCamera__FrameRateRange():QCamera::FrameRateRange(),_wrapper(NULL) {};
    PythonQtShell_QCamera__FrameRateRange(qreal  minimum, qreal  maximum):QCamera::FrameRateRange(minimum, maximum),_wrapper(NULL) {};

   ~PythonQtShell_QCamera__FrameRateRange();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QCamera__FrameRateRange : public QObject
{ Q_OBJECT
public:
public slots:
QCamera::FrameRateRange* new_QCamera__FrameRateRange();
QCamera::FrameRateRange* new_QCamera__FrameRateRange(qreal  minimum, qreal  maximum);
void delete_QCamera__FrameRateRange(QCamera::FrameRateRange* obj) { delete obj; } 
   bool  __eq__(QCamera::FrameRateRange* theWrappedObject, const QCamera::FrameRateRange&  r2);
void py_set_maximumFrameRate(QCamera::FrameRateRange* theWrappedObject, qreal  maximumFrameRate){ theWrappedObject->maximumFrameRate = maximumFrameRate; }
qreal  py_get_maximumFrameRate(QCamera::FrameRateRange* theWrappedObject){ return theWrappedObject->maximumFrameRate; }
void py_set_minimumFrameRate(QCamera::FrameRateRange* theWrappedObject, qreal  minimumFrameRate){ theWrappedObject->minimumFrameRate = minimumFrameRate; }
qreal  py_get_minimumFrameRate(QCamera::FrameRateRange* theWrappedObject){ return theWrappedObject->minimumFrameRate; }
};





class PythonQtShell_QGraphicsVideoItem : public QGraphicsVideoItem
{
public:
    PythonQtShell_QGraphicsVideoItem(QGraphicsItem*  parent = nullptr):QGraphicsVideoItem(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsVideoItem();

virtual QRectF  boundingRect() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  ev);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual QMediaObject*  mediaObject() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
virtual bool  setMediaObject(QMediaObject*  object);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsVideoItem : public QGraphicsVideoItem
{ public:
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return this->itemChange(change, value); }
inline bool  promoted_setMediaObject(QMediaObject*  object) { return this->setMediaObject(object); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline QRectF  py_q_boundingRect() const { return QGraphicsVideoItem::boundingRect(); }
inline QVariant  py_q_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsVideoItem::itemChange(change, value); }
inline QMediaObject*  py_q_mediaObject() const { return QGraphicsVideoItem::mediaObject(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsVideoItem::paint(painter, option, widget); }
inline bool  py_q_setMediaObject(QMediaObject*  object) { return QGraphicsVideoItem::setMediaObject(object); }
inline void py_q_timerEvent(QTimerEvent*  event) { QGraphicsVideoItem::timerEvent(event); }
};

class PythonQtWrapper_QGraphicsVideoItem : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsVideoItem* new_QGraphicsVideoItem(QGraphicsItem*  parent = nullptr);
void delete_QGraphicsVideoItem(QGraphicsVideoItem* obj) { delete obj; } 
   Qt::AspectRatioMode  aspectRatioMode(QGraphicsVideoItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsVideoItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsVideoItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_boundingRect());}
   QVariant  itemChange(QGraphicsVideoItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   QVariant  py_q_itemChange(QGraphicsVideoItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_itemChange(change, value));}
   QMediaObject*  py_q_mediaObject(QGraphicsVideoItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_mediaObject());}
   QSizeF  nativeSize(QGraphicsVideoItem* theWrappedObject) const;
   QPointF  offset(QGraphicsVideoItem* theWrappedObject) const;
   void paint(QGraphicsVideoItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
   void py_q_paint(QGraphicsVideoItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void setAspectRatioMode(QGraphicsVideoItem* theWrappedObject, Qt::AspectRatioMode  mode);
   bool  py_q_setMediaObject(QGraphicsVideoItem* theWrappedObject, QMediaObject*  object){  return (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_setMediaObject(object));}
   void setOffset(QGraphicsVideoItem* theWrappedObject, const QPointF&  offset);
   void setSize(QGraphicsVideoItem* theWrappedObject, const QSizeF&  size);
   QSizeF  size(QGraphicsVideoItem* theWrappedObject) const;
   void py_q_timerEvent(QGraphicsVideoItem* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_timerEvent(event));}
};





class PythonQtShell_QImageEncoderControl : public QImageEncoderControl
{
public:
    PythonQtShell_QImageEncoderControl(QObject*  parent = nullptr):QImageEncoderControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QImageEncoderControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QString  imageCodecDescription(const QString&  codec) const;
virtual QImageEncoderSettings  imageSettings() const;
virtual void setImageSettings(const QImageEncoderSettings&  settings);
virtual QStringList  supportedImageCodecs() const;
virtual QList<QSize >  supportedResolutions(const QImageEncoderSettings&  settings, bool*  continuous = nullptr) const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QImageEncoderControl : public QImageEncoderControl
{ public:
inline QString  py_q_imageCodecDescription(const QString&  codec) const { return this->imageCodecDescription(codec); }
inline QImageEncoderSettings  py_q_imageSettings() const { return this->imageSettings(); }
inline void py_q_setImageSettings(const QImageEncoderSettings&  settings) { this->setImageSettings(settings); }
inline QStringList  py_q_supportedImageCodecs() const { return this->supportedImageCodecs(); }
inline QList<QSize >  py_q_supportedResolutions(const QImageEncoderSettings&  settings, bool*  continuous = nullptr) const { return this->supportedResolutions(settings, continuous); }
};

class PythonQtWrapper_QImageEncoderControl : public QObject
{ Q_OBJECT
public:
public slots:
QImageEncoderControl* new_QImageEncoderControl(QObject*  parent = nullptr);
void delete_QImageEncoderControl(QImageEncoderControl* obj) { delete obj; } 
   QString  imageCodecDescription(QImageEncoderControl* theWrappedObject, const QString&  codec) const;
   QString  py_q_imageCodecDescription(QImageEncoderControl* theWrappedObject, const QString&  codec) const{  return (((PythonQtPublicPromoter_QImageEncoderControl*)theWrappedObject)->py_q_imageCodecDescription(codec));}
   QImageEncoderSettings  imageSettings(QImageEncoderControl* theWrappedObject) const;
   QImageEncoderSettings  py_q_imageSettings(QImageEncoderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageEncoderControl*)theWrappedObject)->py_q_imageSettings());}
   void setImageSettings(QImageEncoderControl* theWrappedObject, const QImageEncoderSettings&  settings);
   void py_q_setImageSettings(QImageEncoderControl* theWrappedObject, const QImageEncoderSettings&  settings){  (((PythonQtPublicPromoter_QImageEncoderControl*)theWrappedObject)->py_q_setImageSettings(settings));}
   QStringList  supportedImageCodecs(QImageEncoderControl* theWrappedObject) const;
   QStringList  py_q_supportedImageCodecs(QImageEncoderControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageEncoderControl*)theWrappedObject)->py_q_supportedImageCodecs());}
   QList<QSize >  supportedResolutions(QImageEncoderControl* theWrappedObject, const QImageEncoderSettings&  settings, bool*  continuous = nullptr) const;
   QList<QSize >  py_q_supportedResolutions(QImageEncoderControl* theWrappedObject, const QImageEncoderSettings&  settings, bool*  continuous = nullptr) const{  return (((PythonQtPublicPromoter_QImageEncoderControl*)theWrappedObject)->py_q_supportedResolutions(settings, continuous));}
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





class PythonQtShell_QMediaAudioProbeControl : public QMediaAudioProbeControl
{
public:
    PythonQtShell_QMediaAudioProbeControl(QObject*  parent = nullptr):QMediaAudioProbeControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaAudioProbeControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMediaAudioProbeControl : public QObject
{ Q_OBJECT
public:
public slots:
QMediaAudioProbeControl* new_QMediaAudioProbeControl(QObject*  parent = nullptr);
void delete_QMediaAudioProbeControl(QMediaAudioProbeControl* obj) { delete obj; } 
};





class PythonQtShell_QMediaAvailabilityControl : public QMediaAvailabilityControl
{
public:
    PythonQtShell_QMediaAvailabilityControl(QObject*  parent = nullptr):QMediaAvailabilityControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaAvailabilityControl();

virtual QMultimedia::AvailabilityStatus  availability() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaAvailabilityControl : public QMediaAvailabilityControl
{ public:
inline QMultimedia::AvailabilityStatus  py_q_availability() const { return this->availability(); }
};

class PythonQtWrapper_QMediaAvailabilityControl : public QObject
{ Q_OBJECT
public:
public slots:
QMediaAvailabilityControl* new_QMediaAvailabilityControl(QObject*  parent = nullptr);
void delete_QMediaAvailabilityControl(QMediaAvailabilityControl* obj) { delete obj; } 
   QMultimedia::AvailabilityStatus  availability(QMediaAvailabilityControl* theWrappedObject) const;
   QMultimedia::AvailabilityStatus  py_q_availability(QMediaAvailabilityControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaAvailabilityControl*)theWrappedObject)->py_q_availability());}
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
inline bool  promoted_setMediaObject(QMediaObject*  object) { return this->setMediaObject(object); }
inline QMediaObject*  py_q_mediaObject() const { return this->mediaObject(); }
inline bool  py_q_setMediaObject(QMediaObject*  object) { return this->setMediaObject(object); }
};

class PythonQtWrapper_QMediaBindableInterface : public QObject
{ Q_OBJECT
public:
public slots:
QMediaBindableInterface* new_QMediaBindableInterface();
void delete_QMediaBindableInterface(QMediaBindableInterface* obj) { delete obj; } 
   QMediaObject*  mediaObject(QMediaBindableInterface* theWrappedObject) const;
   QMediaObject*  py_q_mediaObject(QMediaBindableInterface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaBindableInterface*)theWrappedObject)->py_q_mediaObject());}
   bool  setMediaObject(QMediaBindableInterface* theWrappedObject, QMediaObject*  object);
   bool  py_q_setMediaObject(QMediaBindableInterface* theWrappedObject, QMediaObject*  object){  return (((PythonQtPublicPromoter_QMediaBindableInterface*)theWrappedObject)->py_q_setMediaObject(object));}
};





class PythonQtShell_QMediaContainerControl : public QMediaContainerControl
{
public:
    PythonQtShell_QMediaContainerControl(QObject*  parent = nullptr):QMediaContainerControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaContainerControl();

virtual void childEvent(QChildEvent*  event);
virtual QString  containerDescription(const QString&  formatMimeType) const;
virtual QString  containerFormat() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void setContainerFormat(const QString&  format);
virtual QStringList  supportedContainers() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaContainerControl : public QMediaContainerControl
{ public:
inline QString  py_q_containerDescription(const QString&  formatMimeType) const { return this->containerDescription(formatMimeType); }
inline QString  py_q_containerFormat() const { return this->containerFormat(); }
inline void py_q_setContainerFormat(const QString&  format) { this->setContainerFormat(format); }
inline QStringList  py_q_supportedContainers() const { return this->supportedContainers(); }
};

class PythonQtWrapper_QMediaContainerControl : public QObject
{ Q_OBJECT
public:
public slots:
QMediaContainerControl* new_QMediaContainerControl(QObject*  parent = nullptr);
void delete_QMediaContainerControl(QMediaContainerControl* obj) { delete obj; } 
   QString  containerDescription(QMediaContainerControl* theWrappedObject, const QString&  formatMimeType) const;
   QString  py_q_containerDescription(QMediaContainerControl* theWrappedObject, const QString&  formatMimeType) const{  return (((PythonQtPublicPromoter_QMediaContainerControl*)theWrappedObject)->py_q_containerDescription(formatMimeType));}
   QString  containerFormat(QMediaContainerControl* theWrappedObject) const;
   QString  py_q_containerFormat(QMediaContainerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaContainerControl*)theWrappedObject)->py_q_containerFormat());}
   void setContainerFormat(QMediaContainerControl* theWrappedObject, const QString&  format);
   void py_q_setContainerFormat(QMediaContainerControl* theWrappedObject, const QString&  format){  (((PythonQtPublicPromoter_QMediaContainerControl*)theWrappedObject)->py_q_setContainerFormat(format));}
   QStringList  supportedContainers(QMediaContainerControl* theWrappedObject) const;
   QStringList  py_q_supportedContainers(QMediaContainerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaContainerControl*)theWrappedObject)->py_q_supportedContainers());}
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
    PythonQtShell_QMediaControl(QObject*  parent = nullptr):QMediaControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMediaControl : public QObject
{ Q_OBJECT
public:
public slots:
QMediaControl* new_QMediaControl(QObject*  parent = nullptr);
void delete_QMediaControl(QMediaControl* obj) { delete obj; } 
};





class PythonQtShell_QMediaGaplessPlaybackControl : public QMediaGaplessPlaybackControl
{
public:
    PythonQtShell_QMediaGaplessPlaybackControl(QObject*  parent = nullptr):QMediaGaplessPlaybackControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaGaplessPlaybackControl();

virtual void childEvent(QChildEvent*  event);
virtual qreal  crossfadeTime() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isCrossfadeSupported() const;
virtual QMediaContent  nextMedia() const;
virtual void setCrossfadeTime(qreal  crossfadeTime);
virtual void setNextMedia(const QMediaContent&  media);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaGaplessPlaybackControl : public QMediaGaplessPlaybackControl
{ public:
inline qreal  py_q_crossfadeTime() const { return this->crossfadeTime(); }
inline bool  py_q_isCrossfadeSupported() const { return this->isCrossfadeSupported(); }
inline QMediaContent  py_q_nextMedia() const { return this->nextMedia(); }
inline void py_q_setCrossfadeTime(qreal  crossfadeTime) { this->setCrossfadeTime(crossfadeTime); }
inline void py_q_setNextMedia(const QMediaContent&  media) { this->setNextMedia(media); }
};

class PythonQtWrapper_QMediaGaplessPlaybackControl : public QObject
{ Q_OBJECT
public:
public slots:
QMediaGaplessPlaybackControl* new_QMediaGaplessPlaybackControl(QObject*  parent = nullptr);
void delete_QMediaGaplessPlaybackControl(QMediaGaplessPlaybackControl* obj) { delete obj; } 
   qreal  crossfadeTime(QMediaGaplessPlaybackControl* theWrappedObject) const;
   qreal  py_q_crossfadeTime(QMediaGaplessPlaybackControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaGaplessPlaybackControl*)theWrappedObject)->py_q_crossfadeTime());}
   bool  isCrossfadeSupported(QMediaGaplessPlaybackControl* theWrappedObject) const;
   bool  py_q_isCrossfadeSupported(QMediaGaplessPlaybackControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaGaplessPlaybackControl*)theWrappedObject)->py_q_isCrossfadeSupported());}
   QMediaContent  nextMedia(QMediaGaplessPlaybackControl* theWrappedObject) const;
   QMediaContent  py_q_nextMedia(QMediaGaplessPlaybackControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaGaplessPlaybackControl*)theWrappedObject)->py_q_nextMedia());}
   void setCrossfadeTime(QMediaGaplessPlaybackControl* theWrappedObject, qreal  crossfadeTime);
   void py_q_setCrossfadeTime(QMediaGaplessPlaybackControl* theWrappedObject, qreal  crossfadeTime){  (((PythonQtPublicPromoter_QMediaGaplessPlaybackControl*)theWrappedObject)->py_q_setCrossfadeTime(crossfadeTime));}
   void setNextMedia(QMediaGaplessPlaybackControl* theWrappedObject, const QMediaContent&  media);
   void py_q_setNextMedia(QMediaGaplessPlaybackControl* theWrappedObject, const QMediaContent&  media){  (((PythonQtPublicPromoter_QMediaGaplessPlaybackControl*)theWrappedObject)->py_q_setNextMedia(media));}
};





class PythonQtShell_QMediaNetworkAccessControl : public QMediaNetworkAccessControl
{
public:
    PythonQtShell_QMediaNetworkAccessControl(QObject*  parent = nullptr):QMediaNetworkAccessControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaNetworkAccessControl();

virtual void childEvent(QChildEvent*  event);
virtual QNetworkConfiguration  currentConfiguration() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void setConfigurations(const QList<QNetworkConfiguration >&  configuration);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaNetworkAccessControl : public QMediaNetworkAccessControl
{ public:
inline QNetworkConfiguration  py_q_currentConfiguration() const { return this->currentConfiguration(); }
inline void py_q_setConfigurations(const QList<QNetworkConfiguration >&  configuration) { this->setConfigurations(configuration); }
};

class PythonQtWrapper_QMediaNetworkAccessControl : public QObject
{ Q_OBJECT
public:
public slots:
QMediaNetworkAccessControl* new_QMediaNetworkAccessControl(QObject*  parent = nullptr);
void delete_QMediaNetworkAccessControl(QMediaNetworkAccessControl* obj) { delete obj; } 
   QNetworkConfiguration  currentConfiguration(QMediaNetworkAccessControl* theWrappedObject) const;
   QNetworkConfiguration  py_q_currentConfiguration(QMediaNetworkAccessControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaNetworkAccessControl*)theWrappedObject)->py_q_currentConfiguration());}
   void setConfigurations(QMediaNetworkAccessControl* theWrappedObject, const QList<QNetworkConfiguration >&  configuration);
   void py_q_setConfigurations(QMediaNetworkAccessControl* theWrappedObject, const QList<QNetworkConfiguration >&  configuration){  (((PythonQtPublicPromoter_QMediaNetworkAccessControl*)theWrappedObject)->py_q_setConfigurations(configuration));}
};





class PythonQtShell_QMediaObject : public QMediaObject
{
public:
    PythonQtShell_QMediaObject(QObject*  parent, QMediaService*  service):QMediaObject(parent, service),_wrapper(NULL) {};

   ~PythonQtShell_QMediaObject();

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

class PythonQtPublicPromoter_QMediaObject : public QMediaObject
{ public:
inline void promoted_addPropertyWatch(const QByteArray&  name) { this->addPropertyWatch(name); }
inline void promoted_removePropertyWatch(const QByteArray&  name) { this->removePropertyWatch(name); }
inline QMultimedia::AvailabilityStatus  py_q_availability() const { return QMediaObject::availability(); }
inline bool  py_q_bind(QObject*  arg__1) { return QMediaObject::bind(arg__1); }
inline bool  py_q_isAvailable() const { return QMediaObject::isAvailable(); }
inline QMediaService*  py_q_service() const { return QMediaObject::service(); }
inline void py_q_unbind(QObject*  arg__1) { QMediaObject::unbind(arg__1); }
};

class PythonQtWrapper_QMediaObject : public QObject
{ Q_OBJECT
public:
public slots:
QMediaObject* new_QMediaObject(QObject*  parent, QMediaService*  service);
void delete_QMediaObject(QMediaObject* obj) { delete obj; } 
   void addPropertyWatch(QMediaObject* theWrappedObject, const QByteArray&  name);
   QMultimedia::AvailabilityStatus  availability(QMediaObject* theWrappedObject) const;
   QMultimedia::AvailabilityStatus  py_q_availability(QMediaObject* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->py_q_availability());}
   QStringList  availableMetaData(QMediaObject* theWrappedObject) const;
   bool  bind(QMediaObject* theWrappedObject, QObject*  arg__1);
   bool  py_q_bind(QMediaObject* theWrappedObject, QObject*  arg__1){  return (((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->py_q_bind(arg__1));}
   bool  isAvailable(QMediaObject* theWrappedObject) const;
   bool  py_q_isAvailable(QMediaObject* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->py_q_isAvailable());}
   bool  isMetaDataAvailable(QMediaObject* theWrappedObject) const;
   QVariant  metaData(QMediaObject* theWrappedObject, const QString&  key) const;
   int  notifyInterval(QMediaObject* theWrappedObject) const;
   void removePropertyWatch(QMediaObject* theWrappedObject, const QByteArray&  name);
   QMediaService*  service(QMediaObject* theWrappedObject) const;
   QMediaService*  py_q_service(QMediaObject* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->py_q_service());}
   void setNotifyInterval(QMediaObject* theWrappedObject, int  milliSeconds);
   void unbind(QMediaObject* theWrappedObject, QObject*  arg__1);
   void py_q_unbind(QMediaObject* theWrappedObject, QObject*  arg__1){  (((PythonQtPublicPromoter_QMediaObject*)theWrappedObject)->py_q_unbind(arg__1));}
};





class PythonQtShell_QMediaPlayer : public QMediaPlayer
{
public:
    PythonQtShell_QMediaPlayer(QObject*  parent = nullptr, QMediaPlayer::Flags  flags = QMediaPlayer::Flags()):QMediaPlayer(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QMediaPlayer();

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

class PythonQtPublicPromoter_QMediaPlayer : public QMediaPlayer
{ public:
inline QMultimedia::AvailabilityStatus  py_q_availability() const { return QMediaPlayer::availability(); }
inline bool  py_q_bind(QObject*  arg__1) { return QMediaPlayer::bind(arg__1); }
inline void py_q_unbind(QObject*  arg__1) { QMediaPlayer::unbind(arg__1); }
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
QMediaPlayer* new_QMediaPlayer(QObject*  parent = nullptr, QMediaPlayer::Flags  flags = QMediaPlayer::Flags());
void delete_QMediaPlayer(QMediaPlayer* obj) { delete obj; } 
   QAudio::Role  audioRole(QMediaPlayer* theWrappedObject) const;
   QMultimedia::AvailabilityStatus  py_q_availability(QMediaPlayer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayer*)theWrappedObject)->py_q_availability());}
   bool  py_q_bind(QMediaPlayer* theWrappedObject, QObject*  arg__1){  return (((PythonQtPublicPromoter_QMediaPlayer*)theWrappedObject)->py_q_bind(arg__1));}
   int  bufferStatus(QMediaPlayer* theWrappedObject) const;
   QMediaContent  currentMedia(QMediaPlayer* theWrappedObject) const;
   QNetworkConfiguration  currentNetworkConfiguration(QMediaPlayer* theWrappedObject) const;
   QString  customAudioRole(QMediaPlayer* theWrappedObject) const;
   qint64  duration(QMediaPlayer* theWrappedObject) const;
   QMediaPlayer::Error  error(QMediaPlayer* theWrappedObject) const;
   QString  errorString(QMediaPlayer* theWrappedObject) const;
   QMultimedia::SupportEstimate  static_QMediaPlayer_hasSupport(const QString&  mimeType, const QStringList&  codecs = QStringList(), QMediaPlayer::Flags  flags = QMediaPlayer::Flags());
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
   void setAudioRole(QMediaPlayer* theWrappedObject, QAudio::Role  audioRole);
   void setCustomAudioRole(QMediaPlayer* theWrappedObject, const QString&  audioRole);
   void setVideoOutput(QMediaPlayer* theWrappedObject, QAbstractVideoSurface*  surface);
   void setVideoOutput(QMediaPlayer* theWrappedObject, QGraphicsVideoItem*  arg__1);
   void setVideoOutput(QMediaPlayer* theWrappedObject, QVideoWidget*  arg__1);
   QMediaPlayer::State  state(QMediaPlayer* theWrappedObject) const;
   QList<QAudio::Role >  supportedAudioRoles(QMediaPlayer* theWrappedObject) const;
   QStringList  supportedCustomAudioRoles(QMediaPlayer* theWrappedObject) const;
   QStringList  static_QMediaPlayer_supportedMimeTypes(QMediaPlayer::Flags  flags = QMediaPlayer::Flags());
   void py_q_unbind(QMediaPlayer* theWrappedObject, QObject*  arg__1){  (((PythonQtPublicPromoter_QMediaPlayer*)theWrappedObject)->py_q_unbind(arg__1));}
   int  volume(QMediaPlayer* theWrappedObject) const;
};





class PythonQtShell_QMediaPlayerControl : public QMediaPlayerControl
{
public:
    PythonQtShell_QMediaPlayerControl(QObject*  parent = nullptr):QMediaPlayerControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaPlayerControl();

virtual QMediaTimeRange  availablePlaybackRanges() const;
virtual int  bufferStatus() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual qint64  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isAudioAvailable() const;
virtual bool  isMuted() const;
virtual bool  isSeekable() const;
virtual bool  isVideoAvailable() const;
virtual QMediaContent  media() const;
virtual QMediaPlayer::MediaStatus  mediaStatus() const;
virtual const QIODevice*  mediaStream() const;
virtual void pause();
virtual void play();
virtual qreal  playbackRate() const;
virtual qint64  position() const;
virtual void setMedia(const QMediaContent&  media, QIODevice*  stream);
virtual void setMuted(bool  mute);
virtual void setPlaybackRate(qreal  rate);
virtual void setPosition(qint64  position);
virtual void setVolume(int  volume);
virtual QMediaPlayer::State  state() const;
virtual void stop();
virtual void timerEvent(QTimerEvent*  event);
virtual int  volume() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMediaPlayerControl : public QMediaPlayerControl
{ public:
inline QMediaTimeRange  py_q_availablePlaybackRanges() const { return this->availablePlaybackRanges(); }
inline int  py_q_bufferStatus() const { return this->bufferStatus(); }
inline qint64  py_q_duration() const { return this->duration(); }
inline bool  py_q_isAudioAvailable() const { return this->isAudioAvailable(); }
inline bool  py_q_isMuted() const { return this->isMuted(); }
inline bool  py_q_isSeekable() const { return this->isSeekable(); }
inline bool  py_q_isVideoAvailable() const { return this->isVideoAvailable(); }
inline QMediaContent  py_q_media() const { return this->media(); }
inline QMediaPlayer::MediaStatus  py_q_mediaStatus() const { return this->mediaStatus(); }
inline const QIODevice*  py_q_mediaStream() const { return this->mediaStream(); }
inline void py_q_pause() { this->pause(); }
inline void py_q_play() { this->play(); }
inline qreal  py_q_playbackRate() const { return this->playbackRate(); }
inline qint64  py_q_position() const { return this->position(); }
inline void py_q_setMedia(const QMediaContent&  media, QIODevice*  stream) { this->setMedia(media, stream); }
inline void py_q_setMuted(bool  mute) { this->setMuted(mute); }
inline void py_q_setPlaybackRate(qreal  rate) { this->setPlaybackRate(rate); }
inline void py_q_setPosition(qint64  position) { this->setPosition(position); }
inline void py_q_setVolume(int  volume) { this->setVolume(volume); }
inline QMediaPlayer::State  py_q_state() const { return this->state(); }
inline void py_q_stop() { this->stop(); }
inline int  py_q_volume() const { return this->volume(); }
};

class PythonQtWrapper_QMediaPlayerControl : public QObject
{ Q_OBJECT
public:
public slots:
QMediaPlayerControl* new_QMediaPlayerControl(QObject*  parent = nullptr);
void delete_QMediaPlayerControl(QMediaPlayerControl* obj) { delete obj; } 
   QMediaTimeRange  availablePlaybackRanges(QMediaPlayerControl* theWrappedObject) const;
   QMediaTimeRange  py_q_availablePlaybackRanges(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_availablePlaybackRanges());}
   int  bufferStatus(QMediaPlayerControl* theWrappedObject) const;
   int  py_q_bufferStatus(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_bufferStatus());}
   qint64  duration(QMediaPlayerControl* theWrappedObject) const;
   qint64  py_q_duration(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_duration());}
   bool  isAudioAvailable(QMediaPlayerControl* theWrappedObject) const;
   bool  py_q_isAudioAvailable(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_isAudioAvailable());}
   bool  isMuted(QMediaPlayerControl* theWrappedObject) const;
   bool  py_q_isMuted(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_isMuted());}
   bool  isSeekable(QMediaPlayerControl* theWrappedObject) const;
   bool  py_q_isSeekable(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_isSeekable());}
   bool  isVideoAvailable(QMediaPlayerControl* theWrappedObject) const;
   bool  py_q_isVideoAvailable(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_isVideoAvailable());}
   QMediaContent  media(QMediaPlayerControl* theWrappedObject) const;
   QMediaContent  py_q_media(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_media());}
   QMediaPlayer::MediaStatus  mediaStatus(QMediaPlayerControl* theWrappedObject) const;
   QMediaPlayer::MediaStatus  py_q_mediaStatus(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_mediaStatus());}
   const QIODevice*  mediaStream(QMediaPlayerControl* theWrappedObject) const;
   const QIODevice*  py_q_mediaStream(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_mediaStream());}
   void pause(QMediaPlayerControl* theWrappedObject);
   void py_q_pause(QMediaPlayerControl* theWrappedObject){  (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_pause());}
   void play(QMediaPlayerControl* theWrappedObject);
   void py_q_play(QMediaPlayerControl* theWrappedObject){  (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_play());}
   qreal  playbackRate(QMediaPlayerControl* theWrappedObject) const;
   qreal  py_q_playbackRate(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_playbackRate());}
   qint64  position(QMediaPlayerControl* theWrappedObject) const;
   qint64  py_q_position(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_position());}
   void setMedia(QMediaPlayerControl* theWrappedObject, const QMediaContent&  media, QIODevice*  stream);
   void py_q_setMedia(QMediaPlayerControl* theWrappedObject, const QMediaContent&  media, QIODevice*  stream){  (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_setMedia(media, stream));}
   void setMuted(QMediaPlayerControl* theWrappedObject, bool  mute);
   void py_q_setMuted(QMediaPlayerControl* theWrappedObject, bool  mute){  (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_setMuted(mute));}
   void setPlaybackRate(QMediaPlayerControl* theWrappedObject, qreal  rate);
   void py_q_setPlaybackRate(QMediaPlayerControl* theWrappedObject, qreal  rate){  (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_setPlaybackRate(rate));}
   void setPosition(QMediaPlayerControl* theWrappedObject, qint64  position);
   void py_q_setPosition(QMediaPlayerControl* theWrappedObject, qint64  position){  (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_setPosition(position));}
   void setVolume(QMediaPlayerControl* theWrappedObject, int  volume);
   void py_q_setVolume(QMediaPlayerControl* theWrappedObject, int  volume){  (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_setVolume(volume));}
   QMediaPlayer::State  state(QMediaPlayerControl* theWrappedObject) const;
   QMediaPlayer::State  py_q_state(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_state());}
   void stop(QMediaPlayerControl* theWrappedObject);
   void py_q_stop(QMediaPlayerControl* theWrappedObject){  (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_stop());}
   int  volume(QMediaPlayerControl* theWrappedObject) const;
   int  py_q_volume(QMediaPlayerControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMediaPlayerControl*)theWrappedObject)->py_q_volume());}
};


