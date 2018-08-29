#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QInputMethodEvent>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qabstractstate.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qinputdialog.h>
#include <qinputmethod.h>
#include <qiodevice.h>
#include <qitemdelegate.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qkeyeventtransition.h>
#include <qkeysequence.h>
#include <qkeysequenceedit.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlcdnumber.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlistview.h>
#include <qlistwidget.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QIconEngine : public QIconEngine
{
public:
    PythonQtShell_QIconEngine():QIconEngine(),_wrapper(NULL) {};

   ~PythonQtShell_QIconEngine();

virtual QSize  actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
virtual QList<QSize >  availableSizes(QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
virtual QIconEngine*  clone() const;
virtual QString  iconName() const;
virtual QString  key() const;
virtual void paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
virtual QPixmap  pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual bool  read(QDataStream&  in);
virtual void virtual_hook(int  id, void*  data);
virtual bool  write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIconEngine : public QIconEngine
{ public:
inline QSize  py_q_actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::actualSize(size, mode, state); }
inline void py_q_addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addFile(fileName, size, mode, state); }
inline void py_q_addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addPixmap(pixmap, mode, state); }
inline QList<QSize >  py_q_availableSizes(QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const { return QIconEngine::availableSizes(mode, state); }
inline QIconEngine*  py_q_clone() const { return this->clone(); }
inline QString  py_q_iconName() const { return QIconEngine::iconName(); }
inline QString  py_q_key() const { return QIconEngine::key(); }
inline void py_q_paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state) { this->paint(painter, rect, mode, state); }
inline QPixmap  py_q_pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::pixmap(size, mode, state); }
inline bool  py_q_read(QDataStream&  in) { return QIconEngine::read(in); }
inline void py_q_virtual_hook(int  id, void*  data) { QIconEngine::virtual_hook(id, data); }
inline bool  py_q_write(QDataStream&  out) const { return QIconEngine::write(out); }
};

class PythonQtWrapper_QIconEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IconEngineHook )
enum IconEngineHook{
  AvailableSizesHook = QIconEngine::AvailableSizesHook,   IconNameHook = QIconEngine::IconNameHook};
public slots:
QIconEngine* new_QIconEngine();
void delete_QIconEngine(QIconEngine* obj) { delete obj; } 
   QSize  actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QSize  py_q_actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_actualSize(size, mode, state));}
   void addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void py_q_addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_addFile(fileName, size, mode, state));}
   void addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
   void py_q_addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_addPixmap(pixmap, mode, state));}
   QList<QSize >  availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QList<QSize >  py_q_availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_availableSizes(mode, state));}
   QIconEngine*  clone(QIconEngine* theWrappedObject) const;
   QIconEngine*  py_q_clone(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_clone());}
   QString  iconName(QIconEngine* theWrappedObject) const;
   QString  py_q_iconName(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_iconName());}
   QString  key(QIconEngine* theWrappedObject) const;
   QString  py_q_key(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_key());}
   void paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
   void py_q_paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_paint(painter, rect, mode, state));}
   QPixmap  pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QPixmap  py_q_pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_pixmap(size, mode, state));}
   bool  read(QIconEngine* theWrappedObject, QDataStream&  in);
   bool  py_q_read(QIconEngine* theWrappedObject, QDataStream&  in){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_read(in));}
   void virtual_hook(QIconEngine* theWrappedObject, int  id, void*  data);
   void py_q_virtual_hook(QIconEngine* theWrappedObject, int  id, void*  data){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_virtual_hook(id, data));}
   bool  write(QIconEngine* theWrappedObject, QDataStream&  out) const;
   bool  py_q_write(QIconEngine* theWrappedObject, QDataStream&  out) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_write(out));}
};





class PythonQtShell_QImageIOHandler : public QImageIOHandler
{
public:
    PythonQtShell_QImageIOHandler():QImageIOHandler(),_wrapper(NULL) {};

   ~PythonQtShell_QImageIOHandler();

virtual bool  canRead() const;
virtual int  currentImageNumber() const;
virtual QRect  currentImageRect() const;
virtual int  imageCount() const;
virtual bool  jumpToImage(int  imageNumber);
virtual bool  jumpToNextImage();
virtual int  loopCount() const;
virtual int  nextImageDelay() const;
virtual QVariant  option(QImageIOHandler::ImageOption  option) const;
virtual bool  read(QImage*  image);
virtual void setOption(QImageIOHandler::ImageOption  option, const QVariant&  value);
virtual bool  supportsOption(QImageIOHandler::ImageOption  option) const;
virtual bool  write(const QImage&  image);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QImageIOHandler : public QImageIOHandler
{ public:
inline bool  py_q_canRead() const { return this->canRead(); }
inline int  py_q_currentImageNumber() const { return QImageIOHandler::currentImageNumber(); }
inline QRect  py_q_currentImageRect() const { return QImageIOHandler::currentImageRect(); }
inline int  py_q_imageCount() const { return QImageIOHandler::imageCount(); }
inline bool  py_q_jumpToImage(int  imageNumber) { return QImageIOHandler::jumpToImage(imageNumber); }
inline bool  py_q_jumpToNextImage() { return QImageIOHandler::jumpToNextImage(); }
inline int  py_q_loopCount() const { return QImageIOHandler::loopCount(); }
inline int  py_q_nextImageDelay() const { return QImageIOHandler::nextImageDelay(); }
inline QVariant  py_q_option(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::option(option); }
inline bool  py_q_read(QImage*  image) { return this->read(image); }
inline void py_q_setOption(QImageIOHandler::ImageOption  option, const QVariant&  value) { QImageIOHandler::setOption(option, value); }
inline bool  py_q_supportsOption(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::supportsOption(option); }
inline bool  py_q_write(const QImage&  image) { return QImageIOHandler::write(image); }
};

class PythonQtWrapper_QImageIOHandler : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageOption Transformation )
enum ImageOption{
  Size = QImageIOHandler::Size,   ClipRect = QImageIOHandler::ClipRect,   Description = QImageIOHandler::Description,   ScaledClipRect = QImageIOHandler::ScaledClipRect,   ScaledSize = QImageIOHandler::ScaledSize,   CompressionRatio = QImageIOHandler::CompressionRatio,   Gamma = QImageIOHandler::Gamma,   Quality = QImageIOHandler::Quality,   Name = QImageIOHandler::Name,   SubType = QImageIOHandler::SubType,   IncrementalReading = QImageIOHandler::IncrementalReading,   Endianness = QImageIOHandler::Endianness,   Animation = QImageIOHandler::Animation,   BackgroundColor = QImageIOHandler::BackgroundColor,   ImageFormat = QImageIOHandler::ImageFormat,   SupportedSubTypes = QImageIOHandler::SupportedSubTypes,   OptimizedWrite = QImageIOHandler::OptimizedWrite,   ProgressiveScanWrite = QImageIOHandler::ProgressiveScanWrite,   ImageTransformation = QImageIOHandler::ImageTransformation,   TransformedByDefault = QImageIOHandler::TransformedByDefault};
enum Transformation{
  TransformationNone = QImageIOHandler::TransformationNone,   TransformationMirror = QImageIOHandler::TransformationMirror,   TransformationFlip = QImageIOHandler::TransformationFlip,   TransformationRotate180 = QImageIOHandler::TransformationRotate180,   TransformationRotate90 = QImageIOHandler::TransformationRotate90,   TransformationMirrorAndRotate90 = QImageIOHandler::TransformationMirrorAndRotate90,   TransformationFlipAndRotate90 = QImageIOHandler::TransformationFlipAndRotate90,   TransformationRotate270 = QImageIOHandler::TransformationRotate270};
public slots:
QImageIOHandler* new_QImageIOHandler();
void delete_QImageIOHandler(QImageIOHandler* obj) { delete obj; } 
   bool  canRead(QImageIOHandler* theWrappedObject) const;
   bool  py_q_canRead(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_canRead());}
   int  currentImageNumber(QImageIOHandler* theWrappedObject) const;
   int  py_q_currentImageNumber(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_currentImageNumber());}
   QRect  currentImageRect(QImageIOHandler* theWrappedObject) const;
   QRect  py_q_currentImageRect(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_currentImageRect());}
   QIODevice*  device(QImageIOHandler* theWrappedObject) const;
   QByteArray  format(QImageIOHandler* theWrappedObject) const;
   int  imageCount(QImageIOHandler* theWrappedObject) const;
   int  py_q_imageCount(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_imageCount());}
   bool  jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber);
   bool  py_q_jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_jumpToImage(imageNumber));}
   bool  jumpToNextImage(QImageIOHandler* theWrappedObject);
   bool  py_q_jumpToNextImage(QImageIOHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_jumpToNextImage());}
   int  loopCount(QImageIOHandler* theWrappedObject) const;
   int  py_q_loopCount(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_loopCount());}
   int  nextImageDelay(QImageIOHandler* theWrappedObject) const;
   int  py_q_nextImageDelay(QImageIOHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_nextImageDelay());}
   QVariant  option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QVariant  py_q_option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_option(option));}
   bool  read(QImageIOHandler* theWrappedObject, QImage*  image);
   bool  py_q_read(QImageIOHandler* theWrappedObject, QImage*  image){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_read(image));}
   void setDevice(QImageIOHandler* theWrappedObject, QIODevice*  device);
   void setFormat(QImageIOHandler* theWrappedObject, const QByteArray&  format);
   void setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value);
   void py_q_setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value){  (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_setOption(option, value));}
   bool  supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   bool  py_q_supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const{  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_supportsOption(option));}
   bool  write(QImageIOHandler* theWrappedObject, const QImage&  image);
   bool  py_q_write(QImageIOHandler* theWrappedObject, const QImage&  image){  return (((PythonQtPublicPromoter_QImageIOHandler*)theWrappedObject)->py_q_write(image));}
};





class PythonQtShell_QImageIOPlugin : public QImageIOPlugin
{
public:
    PythonQtShell_QImageIOPlugin(QObject*  parent = NULL):QImageIOPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QImageIOPlugin();

virtual QImageIOPlugin::Capabilities  capabilities(QIODevice*  device, const QByteArray&  format) const;
virtual void childEvent(QChildEvent*  event);
virtual QImageIOHandler*  create(QIODevice*  device, const QByteArray&  format = QByteArray()) const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QImageIOPlugin : public QImageIOPlugin
{ public:
inline QImageIOPlugin::Capabilities  py_q_capabilities(QIODevice*  device, const QByteArray&  format) const { return this->capabilities(device, format); }
inline QImageIOHandler*  py_q_create(QIODevice*  device, const QByteArray&  format = QByteArray()) const { return this->create(device, format); }
};

class PythonQtWrapper_QImageIOPlugin : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability )
Q_FLAGS(Capabilities )
enum Capability{
  CanRead = QImageIOPlugin::CanRead,   CanWrite = QImageIOPlugin::CanWrite,   CanReadIncremental = QImageIOPlugin::CanReadIncremental};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QImageIOPlugin* new_QImageIOPlugin(QObject*  parent = NULL);
void delete_QImageIOPlugin(QImageIOPlugin* obj) { delete obj; } 
   QImageIOPlugin::Capabilities  capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const;
   QImageIOPlugin::Capabilities  py_q_capabilities(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format) const{  return (((PythonQtPublicPromoter_QImageIOPlugin*)theWrappedObject)->py_q_capabilities(device, format));}
   QImageIOHandler*  create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format = QByteArray()) const;
   QImageIOHandler*  py_q_create(QImageIOPlugin* theWrappedObject, QIODevice*  device, const QByteArray&  format = QByteArray()) const{  return (((PythonQtPublicPromoter_QImageIOPlugin*)theWrappedObject)->py_q_create(device, format));}
};





class PythonQtWrapper_QImageReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageReaderError )
enum ImageReaderError{
  UnknownError = QImageReader::UnknownError,   FileNotFoundError = QImageReader::FileNotFoundError,   DeviceError = QImageReader::DeviceError,   UnsupportedFormatError = QImageReader::UnsupportedFormatError,   InvalidDataError = QImageReader::InvalidDataError};
public slots:
QImageReader* new_QImageReader();
QImageReader* new_QImageReader(QIODevice*  device, const QByteArray&  format = QByteArray());
QImageReader* new_QImageReader(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageReader(QImageReader* obj) { delete obj; } 
   bool  autoDetectImageFormat(QImageReader* theWrappedObject) const;
   bool  autoTransform(QImageReader* theWrappedObject) const;
   QColor  backgroundColor(QImageReader* theWrappedObject) const;
   bool  canRead(QImageReader* theWrappedObject) const;
   QRect  clipRect(QImageReader* theWrappedObject) const;
   int  currentImageNumber(QImageReader* theWrappedObject) const;
   QRect  currentImageRect(QImageReader* theWrappedObject) const;
   bool  decideFormatFromContent(QImageReader* theWrappedObject) const;
   QIODevice*  device(QImageReader* theWrappedObject) const;
   QImageReader::ImageReaderError  error(QImageReader* theWrappedObject) const;
   QString  errorString(QImageReader* theWrappedObject) const;
   QString  fileName(QImageReader* theWrappedObject) const;
   QByteArray  format(QImageReader* theWrappedObject) const;
   float  gamma(QImageReader* theWrappedObject) const;
   int  imageCount(QImageReader* theWrappedObject) const;
   QImage::Format  imageFormat(QImageReader* theWrappedObject) const;
   QByteArray  static_QImageReader_imageFormat(QIODevice*  device);
   QByteArray  static_QImageReader_imageFormat(const QString&  fileName);
   bool  jumpToImage(QImageReader* theWrappedObject, int  imageNumber);
   bool  jumpToNextImage(QImageReader* theWrappedObject);
   int  loopCount(QImageReader* theWrappedObject) const;
   int  nextImageDelay(QImageReader* theWrappedObject) const;
   int  quality(QImageReader* theWrappedObject) const;
   QImage  read(QImageReader* theWrappedObject);
   QRect  scaledClipRect(QImageReader* theWrappedObject) const;
   QSize  scaledSize(QImageReader* theWrappedObject) const;
   void setAutoDetectImageFormat(QImageReader* theWrappedObject, bool  enabled);
   void setAutoTransform(QImageReader* theWrappedObject, bool  enabled);
   void setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color);
   void setClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   void setDecideFormatFromContent(QImageReader* theWrappedObject, bool  ignored);
   void setDevice(QImageReader* theWrappedObject, QIODevice*  device);
   void setFileName(QImageReader* theWrappedObject, const QString&  fileName);
   void setFormat(QImageReader* theWrappedObject, const QByteArray&  format);
   void setGamma(QImageReader* theWrappedObject, float  gamma);
   void setQuality(QImageReader* theWrappedObject, int  quality);
   void setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   void setScaledSize(QImageReader* theWrappedObject, const QSize&  size);
   QSize  size(QImageReader* theWrappedObject) const;
   QByteArray  subType(QImageReader* theWrappedObject) const;
   QList<QByteArray >  static_QImageReader_supportedImageFormats();
   QList<QByteArray >  static_QImageReader_supportedMimeTypes();
   QList<QByteArray >  supportedSubTypes(QImageReader* theWrappedObject) const;
   bool  supportsAnimation(QImageReader* theWrappedObject) const;
   bool  supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QString  text(QImageReader* theWrappedObject, const QString&  key) const;
   QStringList  textKeys(QImageReader* theWrappedObject) const;
   QString  static_QImageReader_tr(const char*  sourceText, const char*  disambiguation = NULL, int  n = -1);
   QString  static_QImageReader_trUtf8(const char*  sourceText, const char*  disambiguation = NULL, int  n = -1);
};





class PythonQtWrapper_QImageWriter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageWriterError )
enum ImageWriterError{
  UnknownError = QImageWriter::UnknownError,   DeviceError = QImageWriter::DeviceError,   UnsupportedFormatError = QImageWriter::UnsupportedFormatError};
public slots:
QImageWriter* new_QImageWriter();
QImageWriter* new_QImageWriter(QIODevice*  device, const QByteArray&  format);
QImageWriter* new_QImageWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageWriter(QImageWriter* obj) { delete obj; } 
   bool  canWrite(QImageWriter* theWrappedObject) const;
   int  compression(QImageWriter* theWrappedObject) const;
   QIODevice*  device(QImageWriter* theWrappedObject) const;
   QImageWriter::ImageWriterError  error(QImageWriter* theWrappedObject) const;
   QString  errorString(QImageWriter* theWrappedObject) const;
   QString  fileName(QImageWriter* theWrappedObject) const;
   QByteArray  format(QImageWriter* theWrappedObject) const;
   float  gamma(QImageWriter* theWrappedObject) const;
   bool  optimizedWrite(QImageWriter* theWrappedObject) const;
   bool  progressiveScanWrite(QImageWriter* theWrappedObject) const;
   int  quality(QImageWriter* theWrappedObject) const;
   void setCompression(QImageWriter* theWrappedObject, int  compression);
   void setDevice(QImageWriter* theWrappedObject, QIODevice*  device);
   void setFileName(QImageWriter* theWrappedObject, const QString&  fileName);
   void setFormat(QImageWriter* theWrappedObject, const QByteArray&  format);
   void setGamma(QImageWriter* theWrappedObject, float  gamma);
   void setOptimizedWrite(QImageWriter* theWrappedObject, bool  optimize);
   void setProgressiveScanWrite(QImageWriter* theWrappedObject, bool  progressive);
   void setQuality(QImageWriter* theWrappedObject, int  quality);
   void setSubType(QImageWriter* theWrappedObject, const QByteArray&  type);
   void setText(QImageWriter* theWrappedObject, const QString&  key, const QString&  text);
   QByteArray  subType(QImageWriter* theWrappedObject) const;
   QList<QByteArray >  static_QImageWriter_supportedImageFormats();
   QList<QByteArray >  static_QImageWriter_supportedMimeTypes();
   QList<QByteArray >  supportedSubTypes(QImageWriter* theWrappedObject) const;
   bool  supportsOption(QImageWriter* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QString  static_QImageWriter_tr(const char*  sourceText, const char*  disambiguation = NULL, int  n = -1);
   QString  static_QImageWriter_trUtf8(const char*  sourceText, const char*  disambiguation = NULL, int  n = -1);
   bool  write(QImageWriter* theWrappedObject, const QImage&  image);
};





class PythonQtShell_QInputDialog : public QInputDialog
{
public:
    PythonQtShell_QInputDialog(QWidget*  parent = NULL, Qt::WindowFlags  flags = Qt::WindowFlags()):QInputDialog(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QInputDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void done(int  result);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
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
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QInputDialog : public QInputDialog
{ public:
inline void py_q_done(int  result) { QInputDialog::done(result); }
inline QSize  py_q_minimumSizeHint() const { return QInputDialog::minimumSizeHint(); }
inline void py_q_setVisible(bool  visible) { QInputDialog::setVisible(visible); }
inline QSize  py_q_sizeHint() const { return QInputDialog::sizeHint(); }
};

class PythonQtWrapper_QInputDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InputDialogOption InputMode )
Q_FLAGS(InputDialogOptions )
enum InputDialogOption{
  NoButtons = QInputDialog::NoButtons,   UseListViewForComboBoxItems = QInputDialog::UseListViewForComboBoxItems,   UsePlainTextEditForTextInput = QInputDialog::UsePlainTextEditForTextInput};
enum InputMode{
  TextInput = QInputDialog::TextInput,   IntInput = QInputDialog::IntInput,   DoubleInput = QInputDialog::DoubleInput};
Q_DECLARE_FLAGS(InputDialogOptions, InputDialogOption)
public slots:
QInputDialog* new_QInputDialog(QWidget*  parent = NULL, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QInputDialog(QInputDialog* obj) { delete obj; } 
   QString  cancelButtonText(QInputDialog* theWrappedObject) const;
   QStringList  comboBoxItems(QInputDialog* theWrappedObject) const;
   void py_q_done(QInputDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_done(result));}
   int  doubleDecimals(QInputDialog* theWrappedObject) const;
   double  doubleMaximum(QInputDialog* theWrappedObject) const;
   double  doubleMinimum(QInputDialog* theWrappedObject) const;
   double  doubleValue(QInputDialog* theWrappedObject) const;
   double  static_QInputDialog_getDouble(QWidget*  parent, const QString&  title, const QString&  label, double  value = 0, double  minValue = -2147483647, double  maxValue = 2147483647, int  decimals = 1, bool*  ok = NULL, Qt::WindowFlags  flags = Qt::WindowFlags());
   int  static_QInputDialog_getInt(QWidget*  parent, const QString&  title, const QString&  label, int  value = 0, int  minValue = -2147483647, int  maxValue = 2147483647, int  step = 1, bool*  ok = NULL, Qt::WindowFlags  flags = Qt::WindowFlags());
   QString  static_QInputDialog_getItem(QWidget*  parent, const QString&  title, const QString&  label, const QStringList&  items, int  current = 0, bool  editable = true, bool*  ok = NULL, Qt::WindowFlags  flags = Qt::WindowFlags(), Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
   QString  static_QInputDialog_getMultiLineText(QWidget*  parent, const QString&  title, const QString&  label, const QString&  text = QString(), bool*  ok = NULL, Qt::WindowFlags  flags = Qt::WindowFlags(), Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
   QString  static_QInputDialog_getText(QWidget*  parent, const QString&  title, const QString&  label, QLineEdit::EchoMode  echo = QLineEdit::Normal, const QString&  text = QString(), bool*  ok = NULL, Qt::WindowFlags  flags = Qt::WindowFlags(), Qt::InputMethodHints  inputMethodHints = Qt::ImhNone);
   QInputDialog::InputMode  inputMode(QInputDialog* theWrappedObject) const;
   int  intMaximum(QInputDialog* theWrappedObject) const;
   int  intMinimum(QInputDialog* theWrappedObject) const;
   int  intStep(QInputDialog* theWrappedObject) const;
   int  intValue(QInputDialog* theWrappedObject) const;
   bool  isComboBoxEditable(QInputDialog* theWrappedObject) const;
   QString  labelText(QInputDialog* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QInputDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_minimumSizeHint());}
   QString  okButtonText(QInputDialog* theWrappedObject) const;
   void open(QInputDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QInputDialog::InputDialogOptions  options(QInputDialog* theWrappedObject) const;
   void setCancelButtonText(QInputDialog* theWrappedObject, const QString&  text);
   void setComboBoxEditable(QInputDialog* theWrappedObject, bool  editable);
   void setComboBoxItems(QInputDialog* theWrappedObject, const QStringList&  items);
   void setDoubleDecimals(QInputDialog* theWrappedObject, int  decimals);
   void setDoubleMaximum(QInputDialog* theWrappedObject, double  max);
   void setDoubleMinimum(QInputDialog* theWrappedObject, double  min);
   void setDoubleRange(QInputDialog* theWrappedObject, double  min, double  max);
   void setDoubleValue(QInputDialog* theWrappedObject, double  value);
   void setInputMode(QInputDialog* theWrappedObject, QInputDialog::InputMode  mode);
   void setIntMaximum(QInputDialog* theWrappedObject, int  max);
   void setIntMinimum(QInputDialog* theWrappedObject, int  min);
   void setIntRange(QInputDialog* theWrappedObject, int  min, int  max);
   void setIntStep(QInputDialog* theWrappedObject, int  step);
   void setIntValue(QInputDialog* theWrappedObject, int  value);
   void setLabelText(QInputDialog* theWrappedObject, const QString&  text);
   void setOkButtonText(QInputDialog* theWrappedObject, const QString&  text);
   void setOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option, bool  on = true);
   void setOptions(QInputDialog* theWrappedObject, QInputDialog::InputDialogOptions  options);
   void setTextEchoMode(QInputDialog* theWrappedObject, QLineEdit::EchoMode  mode);
   void setTextValue(QInputDialog* theWrappedObject, const QString&  text);
   void py_q_setVisible(QInputDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_setVisible(visible));}
   QSize  py_q_sizeHint(QInputDialog* theWrappedObject) const{  return (((PythonQtPublicPromoter_QInputDialog*)theWrappedObject)->py_q_sizeHint());}
   bool  testOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option) const;
   QLineEdit::EchoMode  textEchoMode(QInputDialog* theWrappedObject) const;
   QString  textValue(QInputDialog* theWrappedObject) const;
};





class PythonQtShell_QInputEvent : public QInputEvent
{
public:
    PythonQtShell_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QInputEvent(type, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QInputEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputEvent : public QObject
{ Q_OBJECT
public:
public slots:
QInputEvent* new_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QInputEvent(QInputEvent* obj) { delete obj; } 
   Qt::KeyboardModifiers  modifiers(QInputEvent* theWrappedObject) const;
   void setModifiers(QInputEvent* theWrappedObject, Qt::KeyboardModifiers  amodifiers);
   void setTimestamp(QInputEvent* theWrappedObject, ulong  atimestamp);
   ulong  timestamp(QInputEvent* theWrappedObject) const;
};





class PythonQtWrapper_QInputMethod : public QObject
{ Q_OBJECT
public:
public slots:
   QRectF  cursorRectangle(QInputMethod* theWrappedObject) const;
   Qt::LayoutDirection  inputDirection(QInputMethod* theWrappedObject) const;
   QRectF  inputItemRectangle(QInputMethod* theWrappedObject) const;
   QTransform  inputItemTransform(QInputMethod* theWrappedObject) const;
   bool  isAnimating(QInputMethod* theWrappedObject) const;
   bool  isVisible(QInputMethod* theWrappedObject) const;
   QRectF  keyboardRectangle(QInputMethod* theWrappedObject) const;
   QLocale  locale(QInputMethod* theWrappedObject) const;
   QVariant  static_QInputMethod_queryFocusObject(Qt::InputMethodQuery  query, QVariant  argument);
   void setInputItemRectangle(QInputMethod* theWrappedObject, const QRectF&  rect);
   void setInputItemTransform(QInputMethod* theWrappedObject, const QTransform&  transform);
   void setVisible(QInputMethod* theWrappedObject, bool  visible);
};





class PythonQtWrapper_QInputMethodEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AttributeType )
enum AttributeType{
  TextFormat = QInputMethodEvent::TextFormat,   Cursor = QInputMethodEvent::Cursor,   Language = QInputMethodEvent::Language,   Ruby = QInputMethodEvent::Ruby,   Selection = QInputMethodEvent::Selection};
public slots:
QInputMethodEvent* new_QInputMethodEvent();
QInputMethodEvent* new_QInputMethodEvent(const QInputMethodEvent&  other);
QInputMethodEvent* new_QInputMethodEvent(const QString&  preeditText, const QList<QInputMethodEvent::Attribute >&  attributes);
void delete_QInputMethodEvent(QInputMethodEvent* obj) { delete obj; } 
   const QList<QInputMethodEvent::Attribute >*  attributes(QInputMethodEvent* theWrappedObject) const;
   const QString*  commitString(QInputMethodEvent* theWrappedObject) const;
   const QString*  preeditString(QInputMethodEvent* theWrappedObject) const;
   int  replacementLength(QInputMethodEvent* theWrappedObject) const;
   int  replacementStart(QInputMethodEvent* theWrappedObject) const;
   void setCommitString(QInputMethodEvent* theWrappedObject, const QString&  commitString, int  replaceFrom = 0, int  replaceLength = 0);
};





class PythonQtShell_QInputMethodEvent__Attribute : public QInputMethodEvent::Attribute
{
public:
    PythonQtShell_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l, QVariant  val):QInputMethodEvent::Attribute(typ, s, l, val),_wrapper(NULL) {};

   ~PythonQtShell_QInputMethodEvent__Attribute();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputMethodEvent__Attribute : public QObject
{ Q_OBJECT
public:
public slots:
QInputMethodEvent::Attribute* new_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l, QVariant  val);
void delete_QInputMethodEvent__Attribute(QInputMethodEvent::Attribute* obj) { delete obj; } 
void py_set_length(QInputMethodEvent::Attribute* theWrappedObject, int  length){ theWrappedObject->length = length; }
int  py_get_length(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->length; }
void py_set_start(QInputMethodEvent::Attribute* theWrappedObject, int  start){ theWrappedObject->start = start; }
int  py_get_start(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->start; }
void py_set_type(QInputMethodEvent::Attribute* theWrappedObject, QInputMethodEvent::AttributeType  type){ theWrappedObject->type = type; }
QInputMethodEvent::AttributeType  py_get_type(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->type; }
void py_set_value(QInputMethodEvent::Attribute* theWrappedObject, QVariant  value){ theWrappedObject->value = value; }
QVariant  py_get_value(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->value; }
};





class PythonQtWrapper_QInputMethodQueryEvent : public QObject
{ Q_OBJECT
public:
public slots:
QInputMethodQueryEvent* new_QInputMethodQueryEvent(Qt::InputMethodQueries  queries);
void delete_QInputMethodQueryEvent(QInputMethodQueryEvent* obj) { delete obj; } 
   Qt::InputMethodQueries  queries(QInputMethodQueryEvent* theWrappedObject) const;
   void setValue(QInputMethodQueryEvent* theWrappedObject, Qt::InputMethodQuery  query, const QVariant&  value);
   QVariant  value(QInputMethodQueryEvent* theWrappedObject, Qt::InputMethodQuery  query) const;
};





class PythonQtShell_QIntValidator : public QIntValidator
{
public:
    PythonQtShell_QIntValidator(QObject*  parent = NULL):QIntValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QIntValidator(int  bottom, int  top, QObject*  parent = NULL):QIntValidator(bottom, top, parent),_wrapper(NULL) {};

   ~PythonQtShell_QIntValidator();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fixup(QString&  input) const;
virtual void setRange(int  bottom, int  top);
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIntValidator : public QIntValidator
{ public:
inline void py_q_fixup(QString&  input) const { QIntValidator::fixup(input); }
inline void py_q_setRange(int  bottom, int  top) { QIntValidator::setRange(bottom, top); }
inline QValidator::State  py_q_validate(QString&  arg__1, int&  arg__2) const { return QIntValidator::validate(arg__1, arg__2); }
};

class PythonQtWrapper_QIntValidator : public QObject
{ Q_OBJECT
public:
public slots:
QIntValidator* new_QIntValidator(QObject*  parent = NULL);
QIntValidator* new_QIntValidator(int  bottom, int  top, QObject*  parent = NULL);
void delete_QIntValidator(QIntValidator* obj) { delete obj; } 
   int  bottom(QIntValidator* theWrappedObject) const;
   void py_q_fixup(QIntValidator* theWrappedObject, QString&  input) const{  (((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->py_q_fixup(input));}
   void setBottom(QIntValidator* theWrappedObject, int  arg__1);
   void setRange(QIntValidator* theWrappedObject, int  bottom, int  top);
   void py_q_setRange(QIntValidator* theWrappedObject, int  bottom, int  top){  (((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->py_q_setRange(bottom, top));}
   void setTop(QIntValidator* theWrappedObject, int  arg__1);
   int  top(QIntValidator* theWrappedObject) const;
   QValidator::State  py_q_validate(QIntValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const{  return (((PythonQtPublicPromoter_QIntValidator*)theWrappedObject)->py_q_validate(arg__1, arg__2));}
};





class PythonQtShell_QItemDelegate : public QItemDelegate
{
public:
    PythonQtShell_QItemDelegate(QObject*  parent = NULL):QItemDelegate(parent),_wrapper(NULL) {};

   ~PythonQtShell_QItemDelegate();

virtual void childEvent(QChildEvent*  event);
virtual QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void customEvent(QEvent*  event);
virtual void destroyEditor(QWidget*  editor, const QModelIndex&  index) const;
virtual void drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const;
virtual void drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const;
virtual void drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const;
virtual void drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const;
virtual bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual bool  helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual QVector<int >  paintingRoles() const;
virtual void setEditorData(QWidget*  editor, const QModelIndex&  index) const;
virtual void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
virtual QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemDelegate : public QItemDelegate
{ public:
inline QPixmap  promoted_decoration(const QStyleOptionViewItem&  option, const QVariant&  variant) const { return this->decoration(option, variant); }
inline QRect  promoted_doCheck(const QStyleOptionViewItem&  option, const QRect&  bounding, const QVariant&  variant) const { return this->doCheck(option, bounding, variant); }
inline void promoted_drawBackground(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { this->drawBackground(painter, option, index); }
inline void promoted_drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const { this->drawCheck(painter, option, rect, state); }
inline void promoted_drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const { this->drawDecoration(painter, option, rect, pixmap); }
inline void promoted_drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const { this->drawDisplay(painter, option, rect, text); }
inline void promoted_drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const { this->drawFocus(painter, option, rect); }
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return this->editorEvent(event, model, option, index); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline QRect  promoted_rect(const QStyleOptionViewItem&  option, const QModelIndex&  index, int  role) const { return this->rect(option, index, role); }
inline QStyleOptionViewItem  promoted_setOptions(const QModelIndex&  index, const QStyleOptionViewItem&  option) const { return this->setOptions(index, option); }
inline QRect  promoted_textRectangle(QPainter*  painter, const QRect&  rect, const QFont&  font, const QString&  text) const { return this->textRectangle(painter, rect, font, text); }
inline QWidget*  py_q_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::createEditor(parent, option, index); }
inline void py_q_drawCheck(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const { QItemDelegate::drawCheck(painter, option, rect, state); }
inline void py_q_drawDecoration(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const { QItemDelegate::drawDecoration(painter, option, rect, pixmap); }
inline void py_q_drawDisplay(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const { QItemDelegate::drawDisplay(painter, option, rect, text); }
inline void py_q_drawFocus(QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const { QItemDelegate::drawFocus(painter, option, rect); }
inline bool  py_q_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QItemDelegate::editorEvent(event, model, option, index); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QItemDelegate::eventFilter(object, event); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::paint(painter, option, index); }
inline void py_q_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QItemDelegate::setEditorData(editor, index); }
inline void py_q_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QItemDelegate::setModelData(editor, model, index); }
inline QSize  py_q_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QItemDelegate::sizeHint(option, index); }
inline void py_q_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QItemDelegate* new_QItemDelegate(QObject*  parent = NULL);
void delete_QItemDelegate(QItemDelegate* obj) { delete obj; } 
   QWidget*  py_q_createEditor(QItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_createEditor(parent, option, index));}
   QPixmap  decoration(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QVariant&  variant) const;
   QRect  doCheck(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QRect&  bounding, const QVariant&  variant) const;
   void drawBackground(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const;
   void py_q_drawCheck(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, Qt::CheckState  state) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawCheck(painter, option, rect, state));}
   void drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const;
   void py_q_drawDecoration(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QPixmap&  pixmap) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawDecoration(painter, option, rect, pixmap));}
   void drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const;
   void py_q_drawDisplay(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect, const QString&  text) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawDisplay(painter, option, rect, text));}
   void drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const;
   void py_q_drawFocus(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QRect&  rect) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_drawFocus(painter, option, rect));}
   bool  py_q_editorEvent(QItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index){  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_editorEvent(event, model, option, index));}
   bool  py_q_eventFilter(QItemDelegate* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_eventFilter(object, event));}
   bool  hasClipping(QItemDelegate* theWrappedObject) const;
   QItemEditorFactory*  itemEditorFactory(QItemDelegate* theWrappedObject) const;
   void py_q_paint(QItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_paint(painter, option, index));}
   QRect  rect(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index, int  role) const;
   void setClipping(QItemDelegate* theWrappedObject, bool  clip);
   void py_q_setEditorData(QItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_setEditorData(editor, index));}
   void setItemEditorFactory(QItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   void py_q_setModelData(QItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_setModelData(editor, model, index));}
   QStyleOptionViewItem  setOptions(QItemDelegate* theWrappedObject, const QModelIndex&  index, const QStyleOptionViewItem&  option) const;
   QSize  py_q_sizeHint(QItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_sizeHint(option, index));}
   QRect  textRectangle(QItemDelegate* theWrappedObject, QPainter*  painter, const QRect&  rect, const QFont&  font, const QString&  text) const;
   void py_q_updateEditorGeometry(QItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QItemDelegate*)theWrappedObject)->py_q_updateEditorGeometry(editor, option, index));}
};





class PythonQtShell_QItemEditorCreatorBase : public QItemEditorCreatorBase
{
public:
    PythonQtShell_QItemEditorCreatorBase():QItemEditorCreatorBase(),_wrapper(NULL) {};

   ~PythonQtShell_QItemEditorCreatorBase();

virtual QWidget*  createWidget(QWidget*  parent) const;
virtual QByteArray  valuePropertyName() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemEditorCreatorBase : public QItemEditorCreatorBase
{ public:
inline QWidget*  py_q_createWidget(QWidget*  parent) const { return this->createWidget(parent); }
inline QByteArray  py_q_valuePropertyName() const { return this->valuePropertyName(); }
};

class PythonQtWrapper_QItemEditorCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorCreatorBase* new_QItemEditorCreatorBase();
void delete_QItemEditorCreatorBase(QItemEditorCreatorBase* obj) { delete obj; } 
   QWidget*  createWidget(QItemEditorCreatorBase* theWrappedObject, QWidget*  parent) const;
   QWidget*  py_q_createWidget(QItemEditorCreatorBase* theWrappedObject, QWidget*  parent) const{  return (((PythonQtPublicPromoter_QItemEditorCreatorBase*)theWrappedObject)->py_q_createWidget(parent));}
   QByteArray  valuePropertyName(QItemEditorCreatorBase* theWrappedObject) const;
   QByteArray  py_q_valuePropertyName(QItemEditorCreatorBase* theWrappedObject) const{  return (((PythonQtPublicPromoter_QItemEditorCreatorBase*)theWrappedObject)->py_q_valuePropertyName());}
};





class PythonQtShell_QItemEditorFactory : public QItemEditorFactory
{
public:
    PythonQtShell_QItemEditorFactory():QItemEditorFactory(),_wrapper(NULL) {};

   ~PythonQtShell_QItemEditorFactory();

virtual QWidget*  createEditor(int  userType, QWidget*  parent) const;
virtual QByteArray  valuePropertyName(int  userType) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemEditorFactory : public QItemEditorFactory
{ public:
inline QWidget*  py_q_createEditor(int  userType, QWidget*  parent) const { return QItemEditorFactory::createEditor(userType, parent); }
inline QByteArray  py_q_valuePropertyName(int  userType) const { return QItemEditorFactory::valuePropertyName(userType); }
};

class PythonQtWrapper_QItemEditorFactory : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorFactory* new_QItemEditorFactory();
void delete_QItemEditorFactory(QItemEditorFactory* obj) { delete obj; } 
   QWidget*  createEditor(QItemEditorFactory* theWrappedObject, int  userType, QWidget*  parent) const;
   QWidget*  py_q_createEditor(QItemEditorFactory* theWrappedObject, int  userType, QWidget*  parent) const{  return (((PythonQtPublicPromoter_QItemEditorFactory*)theWrappedObject)->py_q_createEditor(userType, parent));}
   const QItemEditorFactory*  static_QItemEditorFactory_defaultFactory();
   void registerEditor(QItemEditorFactory* theWrappedObject, int  userType, QItemEditorCreatorBase*  creator);
   void static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*  factory);
   QByteArray  valuePropertyName(QItemEditorFactory* theWrappedObject, int  userType) const;
   QByteArray  py_q_valuePropertyName(QItemEditorFactory* theWrappedObject, int  userType) const{  return (((PythonQtPublicPromoter_QItemEditorFactory*)theWrappedObject)->py_q_valuePropertyName(userType));}
};





class PythonQtWrapper_QItemSelection : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelection* new_QItemSelection();
QItemSelection* new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
QItemSelection* new_QItemSelection(const QItemSelection& other) {
QItemSelection* a = new QItemSelection();
*((QItemSelection*)a) = other;
return a; }
void delete_QItemSelection(QItemSelection* obj) { delete obj; } 
   void append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void append(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  t);
   const QItemSelectionRange*  at(QItemSelection* theWrappedObject, int  i) const;
   const QItemSelectionRange*  back(QItemSelection* theWrappedObject) const;
   void clear(QItemSelection* theWrappedObject);
   const QItemSelectionRange*  constFirst(QItemSelection* theWrappedObject) const;
   const QItemSelectionRange*  constLast(QItemSelection* theWrappedObject) const;
   bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
   int  count(QItemSelection* theWrappedObject) const;
   int  count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   void detachShared(QItemSelection* theWrappedObject);
   bool  empty(QItemSelection* theWrappedObject) const;
   bool  endsWith(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   const QItemSelectionRange*  first(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector);
   const QItemSelectionRange*  front(QItemSelection* theWrappedObject) const;
   int  indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from = 0) const;
   QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
   bool  isEmpty(QItemSelection* theWrappedObject) const;
   bool  isSharedWith(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  other) const;
   const QItemSelectionRange*  last(QItemSelection* theWrappedObject) const;
   int  lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from = -1) const;
   int  length(QItemSelection* theWrappedObject) const;
   void merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command);
   QList<QItemSelectionRange >  mid(QItemSelection* theWrappedObject, int  pos, int  length = -1) const;
   void move(QItemSelection* theWrappedObject, int  from, int  to);
   bool  __ne__(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
   bool  __eq__(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
   void pop_back(QItemSelection* theWrappedObject);
   void pop_front(QItemSelection* theWrappedObject);
   void prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   int  removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void removeAt(QItemSelection* theWrappedObject, int  i);
   void removeFirst(QItemSelection* theWrappedObject);
   void removeLast(QItemSelection* theWrappedObject);
   bool  removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t);
   void reserve(QItemSelection* theWrappedObject, int  size);
   void select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void setSharable(QItemSelection* theWrappedObject, bool  sharable);
   int  size(QItemSelection* theWrappedObject) const;
   void static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result);
   bool  startsWith(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   void swap(QItemSelection* theWrappedObject, QList<QItemSelectionRange >&  other);
   void swap(QItemSelection* theWrappedObject, int  i, int  j);
   QItemSelectionRange  takeAt(QItemSelection* theWrappedObject, int  i);
   QItemSelectionRange  takeFirst(QItemSelection* theWrappedObject);
   QItemSelectionRange  takeLast(QItemSelection* theWrappedObject);
   QVector<QItemSelectionRange >  toVector(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i) const;
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const;
    bool __nonzero__(QItemSelection* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QItemSelectionModel : public QItemSelectionModel
{
public:
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model = NULL):QItemSelectionModel(model),_wrapper(NULL) {};
    PythonQtShell_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent):QItemSelectionModel(model, parent),_wrapper(NULL) {};

   ~PythonQtShell_QItemSelectionModel();

virtual void childEvent(QChildEvent*  event);
virtual void clear();
virtual void clearCurrentIndex();
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void reset();
virtual void select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command);
virtual void select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command);
virtual void setCurrentIndex(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemSelectionModel : public QItemSelectionModel
{ public:
inline void promoted_emitSelectionChanged(const QItemSelection&  newSelection, const QItemSelection&  oldSelection) { this->emitSelectionChanged(newSelection, oldSelection); }
inline void py_q_clear() { QItemSelectionModel::clear(); }
inline void py_q_clearCurrentIndex() { QItemSelectionModel::clearCurrentIndex(); }
inline void py_q_reset() { QItemSelectionModel::reset(); }
inline void py_q_select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(selection, command); }
inline void py_q_select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::select(index, command); }
inline void py_q_setCurrentIndex(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command) { QItemSelectionModel::setCurrentIndex(index, command); }
};

class PythonQtWrapper_QItemSelectionModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectionFlag )
Q_FLAGS(SelectionFlags )
enum SelectionFlag{
  NoUpdate = QItemSelectionModel::NoUpdate,   Clear = QItemSelectionModel::Clear,   Select = QItemSelectionModel::Select,   Deselect = QItemSelectionModel::Deselect,   Toggle = QItemSelectionModel::Toggle,   Current = QItemSelectionModel::Current,   Rows = QItemSelectionModel::Rows,   Columns = QItemSelectionModel::Columns,   SelectCurrent = QItemSelectionModel::SelectCurrent,   ToggleCurrent = QItemSelectionModel::ToggleCurrent,   ClearAndSelect = QItemSelectionModel::ClearAndSelect};
Q_DECLARE_FLAGS(SelectionFlags, SelectionFlag)
public slots:
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model = NULL);
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent);
void delete_QItemSelectionModel(QItemSelectionModel* obj) { delete obj; } 
   void py_q_clear(QItemSelectionModel* theWrappedObject){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_clear());}
   void py_q_clearCurrentIndex(QItemSelectionModel* theWrappedObject){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_clearCurrentIndex());}
   bool  columnIntersectsSelection(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const;
   QModelIndex  currentIndex(QItemSelectionModel* theWrappedObject) const;
   void emitSelectionChanged(QItemSelectionModel* theWrappedObject, const QItemSelection&  newSelection, const QItemSelection&  oldSelection);
   bool  hasSelection(QItemSelectionModel* theWrappedObject) const;
   bool  isColumnSelected(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const;
   bool  isRowSelected(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const;
   bool  isSelected(QItemSelectionModel* theWrappedObject, const QModelIndex&  index) const;
   QAbstractItemModel*  model(QItemSelectionModel* theWrappedObject);
   const QAbstractItemModel*  model(QItemSelectionModel* theWrappedObject) const;
   void py_q_reset(QItemSelectionModel* theWrappedObject){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_reset());}
   bool  rowIntersectsSelection(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const;
   void py_q_select(QItemSelectionModel* theWrappedObject, const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_select(selection, command));}
   void py_q_select(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_select(index, command));}
   QList<QModelIndex >  selectedColumns(QItemSelectionModel* theWrappedObject, int  row = 0) const;
   QList<QModelIndex >  selectedIndexes(QItemSelectionModel* theWrappedObject) const;
   QList<QModelIndex >  selectedRows(QItemSelectionModel* theWrappedObject, int  column = 0) const;
   const QItemSelection  selection(QItemSelectionModel* theWrappedObject) const;
   void py_q_setCurrentIndex(QItemSelectionModel* theWrappedObject, const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QItemSelectionModel*)theWrappedObject)->py_q_setCurrentIndex(index, command));}
   void setModel(QItemSelectionModel* theWrappedObject, QAbstractItemModel*  model);
};





class PythonQtWrapper_QItemSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelectionRange* new_QItemSelectionRange();
QItemSelectionRange* new_QItemSelectionRange(const QItemSelectionRange&  other);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  index);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  topL, const QModelIndex&  bottomR);
void delete_QItemSelectionRange(QItemSelectionRange* obj) { delete obj; } 
   int  bottom(QItemSelectionRange* theWrappedObject) const;
   const QPersistentModelIndex*  bottomRight(QItemSelectionRange* theWrappedObject) const;
   bool  contains(QItemSelectionRange* theWrappedObject, const QModelIndex&  index) const;
   bool  contains(QItemSelectionRange* theWrappedObject, int  row, int  column, const QModelIndex&  parentIndex) const;
   int  height(QItemSelectionRange* theWrappedObject) const;
   QList<QModelIndex >  indexes(QItemSelectionRange* theWrappedObject) const;
   QItemSelectionRange  intersected(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  intersects(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  isEmpty(QItemSelectionRange* theWrappedObject) const;
   bool  isValid(QItemSelectionRange* theWrappedObject) const;
   int  left(QItemSelectionRange* theWrappedObject) const;
   const QAbstractItemModel*  model(QItemSelectionRange* theWrappedObject) const;
   bool  __ne__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   bool  __lt__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   QItemSelectionRange*  operator_assign(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other);
   bool  __eq__(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   QModelIndex  parent(QItemSelectionRange* theWrappedObject) const;
   int  right(QItemSelectionRange* theWrappedObject) const;
   void swap(QItemSelectionRange* theWrappedObject, QItemSelectionRange&  other);
   int  top(QItemSelectionRange* theWrappedObject) const;
   const QPersistentModelIndex*  topLeft(QItemSelectionRange* theWrappedObject) const;
   int  width(QItemSelectionRange* theWrappedObject) const;
    QString py_toString(QItemSelectionRange*);
    bool __nonzero__(QItemSelectionRange* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QKeyEvent : public QKeyEvent
{
public:
    PythonQtShell_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1):QKeyEvent(type, key, modifiers, text, autorep, count),_wrapper(NULL) {};
    PythonQtShell_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1):QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count),_wrapper(NULL) {};

   ~PythonQtShell_QKeyEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QKeyEvent : public QObject
{ Q_OBJECT
public:
public slots:
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1);
QKeyEvent* new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text = QString(), bool  autorep = false, ushort  count = 1);
void delete_QKeyEvent(QKeyEvent* obj) { delete obj; } 
   int  count(QKeyEvent* theWrappedObject) const;
   bool  isAutoRepeat(QKeyEvent* theWrappedObject) const;
   int  key(QKeyEvent* theWrappedObject) const;
   bool  matches(QKeyEvent* theWrappedObject, QKeySequence::StandardKey  key) const;
   Qt::KeyboardModifiers  modifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeModifiers(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeScanCode(QKeyEvent* theWrappedObject) const;
   unsigned int  nativeVirtualKey(QKeyEvent* theWrappedObject) const;
   QString  text(QKeyEvent* theWrappedObject) const;
};





class PythonQtShell_QKeyEventTransition : public QKeyEventTransition
{
public:
    PythonQtShell_QKeyEventTransition(QObject*  object, QEvent::Type  type, int  key, QState*  sourceState = NULL):QKeyEventTransition(object, type, key, sourceState),_wrapper(NULL) {};
    PythonQtShell_QKeyEventTransition(QState*  sourceState = NULL):QKeyEventTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QKeyEventTransition();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QKeyEventTransition : public QKeyEventTransition
{ public:
inline bool  promoted_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { this->onTransition(event); }
inline bool  py_q_eventTest(QEvent*  event) { return QKeyEventTransition::eventTest(event); }
inline void py_q_onTransition(QEvent*  event) { QKeyEventTransition::onTransition(event); }
};

class PythonQtWrapper_QKeyEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QKeyEventTransition* new_QKeyEventTransition(QObject*  object, QEvent::Type  type, int  key, QState*  sourceState = NULL);
QKeyEventTransition* new_QKeyEventTransition(QState*  sourceState = NULL);
void delete_QKeyEventTransition(QKeyEventTransition* obj) { delete obj; } 
   bool  py_q_eventTest(QKeyEventTransition* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QKeyEventTransition*)theWrappedObject)->py_q_eventTest(event));}
   int  key(QKeyEventTransition* theWrappedObject) const;
   Qt::KeyboardModifiers  modifierMask(QKeyEventTransition* theWrappedObject) const;
   void py_q_onTransition(QKeyEventTransition* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QKeyEventTransition*)theWrappedObject)->py_q_onTransition(event));}
   void setKey(QKeyEventTransition* theWrappedObject, int  key);
   void setModifierMask(QKeyEventTransition* theWrappedObject, Qt::KeyboardModifiers  modifiers);
};





class PythonQtShell_QKeySequenceEdit : public QKeySequenceEdit
{
public:
    PythonQtShell_QKeySequenceEdit(QWidget*  parent = NULL):QKeySequenceEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QKeySequenceEdit(const QKeySequence&  keySequence, QWidget*  parent = NULL):QKeySequenceEdit(keySequence, parent),_wrapper(NULL) {};

   ~PythonQtShell_QKeySequenceEdit();

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
virtual bool  event(QEvent*  arg__1);
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
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  event);
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
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QKeySequenceEdit : public QKeySequenceEdit
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { this->keyReleaseEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QKeySequenceEdit::event(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QKeySequenceEdit::keyPressEvent(arg__1); }
inline void py_q_keyReleaseEvent(QKeyEvent*  arg__1) { QKeySequenceEdit::keyReleaseEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QKeySequenceEdit::timerEvent(arg__1); }
};

class PythonQtWrapper_QKeySequenceEdit : public QObject
{ Q_OBJECT
public:
public slots:
QKeySequenceEdit* new_QKeySequenceEdit(QWidget*  parent = NULL);
QKeySequenceEdit* new_QKeySequenceEdit(const QKeySequence&  keySequence, QWidget*  parent = NULL);
void delete_QKeySequenceEdit(QKeySequenceEdit* obj) { delete obj; } 
   bool  py_q_event(QKeySequenceEdit* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_event(arg__1));}
   void py_q_keyPressEvent(QKeySequenceEdit* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_keyReleaseEvent(QKeySequenceEdit* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_keyReleaseEvent(arg__1));}
   QKeySequence  keySequence(QKeySequenceEdit* theWrappedObject) const;
   void py_q_timerEvent(QKeySequenceEdit* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QKeySequenceEdit*)theWrappedObject)->py_q_timerEvent(arg__1));}
};





class PythonQtShell_QLCDNumber : public QLCDNumber
{
public:
    PythonQtShell_QLCDNumber(QWidget*  parent = NULL):QLCDNumber(parent),_wrapper(NULL) {};
    PythonQtShell_QLCDNumber(uint  numDigits, QWidget*  parent = NULL):QLCDNumber(numDigits, parent),_wrapper(NULL) {};

   ~PythonQtShell_QLCDNumber();

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
virtual bool  event(QEvent*  e);
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
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
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

class PythonQtPublicPromoter_QLCDNumber : public QLCDNumber
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QLCDNumber::event(e); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QLCDNumber::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QLCDNumber::sizeHint(); }
};

class PythonQtWrapper_QLCDNumber : public QObject
{ Q_OBJECT
public:
public slots:
QLCDNumber* new_QLCDNumber(QWidget*  parent = NULL);
QLCDNumber* new_QLCDNumber(uint  numDigits, QWidget*  parent = NULL);
void delete_QLCDNumber(QLCDNumber* obj) { delete obj; } 
   bool  checkOverflow(QLCDNumber* theWrappedObject, double  num) const;
   bool  checkOverflow(QLCDNumber* theWrappedObject, int  num) const;
   int  digitCount(QLCDNumber* theWrappedObject) const;
   bool  py_q_event(QLCDNumber* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QLCDNumber*)theWrappedObject)->py_q_event(e));}
   int  intValue(QLCDNumber* theWrappedObject) const;
   QLCDNumber::Mode  mode(QLCDNumber* theWrappedObject) const;
   void py_q_paintEvent(QLCDNumber* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QLCDNumber*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QLCDNumber::SegmentStyle  segmentStyle(QLCDNumber* theWrappedObject) const;
   void setDigitCount(QLCDNumber* theWrappedObject, int  nDigits);
   void setMode(QLCDNumber* theWrappedObject, QLCDNumber::Mode  arg__1);
   void setSegmentStyle(QLCDNumber* theWrappedObject, QLCDNumber::SegmentStyle  arg__1);
   QSize  py_q_sizeHint(QLCDNumber* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLCDNumber*)theWrappedObject)->py_q_sizeHint());}
   bool  smallDecimalPoint(QLCDNumber* theWrappedObject) const;
   double  value(QLCDNumber* theWrappedObject) const;
};





class PythonQtShell_QLabel : public QLabel
{
public:
    PythonQtShell_QLabel(QWidget*  parent = NULL, Qt::WindowFlags  f = Qt::WindowFlags()):QLabel(parent, f),_wrapper(NULL) {};
    PythonQtShell_QLabel(const QString&  text, QWidget*  parent = NULL, Qt::WindowFlags  f = Qt::WindowFlags()):QLabel(text, parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QLabel();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  ev);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  ev);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  ev);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
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

class PythonQtPublicPromoter_QLabel : public QLabel
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  ev) { this->contextMenuEvent(ev); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_focusInEvent(QFocusEvent*  ev) { this->focusInEvent(ev); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { this->focusOutEvent(ev); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { this->keyPressEvent(ev); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { this->mouseMoveEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { this->mousePressEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { this->mouseReleaseEvent(ev); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QLabel::changeEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  ev) { QLabel::contextMenuEvent(ev); }
inline bool  py_q_event(QEvent*  e) { return QLabel::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  ev) { QLabel::focusInEvent(ev); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QLabel::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  ev) { QLabel::focusOutEvent(ev); }
inline int  py_q_heightForWidth(int  arg__1) const { return QLabel::heightForWidth(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  ev) { QLabel::keyPressEvent(ev); }
inline QSize  py_q_minimumSizeHint() const { return QLabel::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  ev) { QLabel::mouseMoveEvent(ev); }
inline void py_q_mousePressEvent(QMouseEvent*  ev) { QLabel::mousePressEvent(ev); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  ev) { QLabel::mouseReleaseEvent(ev); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QLabel::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QLabel::sizeHint(); }
};

class PythonQtWrapper_QLabel : public QObject
{ Q_OBJECT
public:
public slots:
QLabel* new_QLabel(QWidget*  parent = NULL, Qt::WindowFlags  f = Qt::WindowFlags());
QLabel* new_QLabel(const QString&  text, QWidget*  parent = NULL, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QLabel(QLabel* obj) { delete obj; } 
   Qt::Alignment  alignment(QLabel* theWrappedObject) const;
   QWidget*  buddy(QLabel* theWrappedObject) const;
   void py_q_changeEvent(QLabel* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void py_q_contextMenuEvent(QLabel* theWrappedObject, QContextMenuEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_contextMenuEvent(ev));}
   bool  py_q_event(QLabel* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_event(e));}
   void py_q_focusInEvent(QLabel* theWrappedObject, QFocusEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_focusInEvent(ev));}
   bool  py_q_focusNextPrevChild(QLabel* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QLabel* theWrappedObject, QFocusEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_focusOutEvent(ev));}
   bool  hasScaledContents(QLabel* theWrappedObject) const;
   bool  hasSelectedText(QLabel* theWrappedObject) const;
   int  py_q_heightForWidth(QLabel* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   int  indent(QLabel* theWrappedObject) const;
   void py_q_keyPressEvent(QLabel* theWrappedObject, QKeyEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_keyPressEvent(ev));}
   int  margin(QLabel* theWrappedObject) const;
   QSize  minimumSizeHint(QLabel* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QLabel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QLabel* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_mouseMoveEvent(ev));}
   void py_q_mousePressEvent(QLabel* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_mousePressEvent(ev));}
   void py_q_mouseReleaseEvent(QLabel* theWrappedObject, QMouseEvent*  ev){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_mouseReleaseEvent(ev));}
   QMovie*  movie(QLabel* theWrappedObject) const;
   bool  openExternalLinks(QLabel* theWrappedObject) const;
   void py_q_paintEvent(QLabel* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_paintEvent(arg__1));}
   const QPicture*  picture(QLabel* theWrappedObject) const;
   const QPixmap*  pixmap(QLabel* theWrappedObject) const;
   QString  selectedText(QLabel* theWrappedObject) const;
   int  selectionStart(QLabel* theWrappedObject) const;
   void setAlignment(QLabel* theWrappedObject, Qt::Alignment  arg__1);
   void setBuddy(QLabel* theWrappedObject, QWidget*  arg__1);
   void setIndent(QLabel* theWrappedObject, int  arg__1);
   void setMargin(QLabel* theWrappedObject, int  arg__1);
   void setOpenExternalLinks(QLabel* theWrappedObject, bool  open);
   void setScaledContents(QLabel* theWrappedObject, bool  arg__1);
   void setSelection(QLabel* theWrappedObject, int  arg__1, int  arg__2);
   void setTextFormat(QLabel* theWrappedObject, Qt::TextFormat  arg__1);
   void setTextInteractionFlags(QLabel* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setWordWrap(QLabel* theWrappedObject, bool  on);
   QSize  py_q_sizeHint(QLabel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLabel*)theWrappedObject)->py_q_sizeHint());}
   QString  text(QLabel* theWrappedObject) const;
   Qt::TextFormat  textFormat(QLabel* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QLabel* theWrappedObject) const;
   bool  wordWrap(QLabel* theWrappedObject) const;
};





class PythonQtShell_QLayout : public QLayout
{
public:
    PythonQtShell_QLayout():QLayout(),_wrapper(NULL) {};
    PythonQtShell_QLayout(QWidget*  parent):QLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual int  count() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  event);
virtual QWidget*  widget();

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLayout : public QLayout
{ public:
inline void promoted_addChildLayout(QLayout*  l) { this->addChildLayout(l); }
inline void promoted_addChildWidget(QWidget*  w) { this->addChildWidget(w); }
inline bool  promoted_adoptLayout(QLayout*  layout) { return this->adoptLayout(layout); }
inline QRect  promoted_alignmentRect(const QRect&  arg__1) const { return this->alignmentRect(arg__1); }
inline void promoted_childEvent(QChildEvent*  e) { this->childEvent(e); }
inline void promoted_widgetEvent(QEvent*  arg__1) { this->widgetEvent(arg__1); }
inline void py_q_addItem(QLayoutItem*  arg__1) { this->addItem(arg__1); }
inline void py_q_childEvent(QChildEvent*  e) { QLayout::childEvent(e); }
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QLayout::controlTypes(); }
inline int  py_q_count() const { return this->count(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QLayout::expandingDirections(); }
inline QRect  py_q_geometry() const { return QLayout::geometry(); }
inline int  py_q_indexOf(QWidget*  arg__1) const { return QLayout::indexOf(arg__1); }
inline void py_q_invalidate() { QLayout::invalidate(); }
inline bool  py_q_isEmpty() const { return QLayout::isEmpty(); }
inline QLayoutItem*  py_q_itemAt(int  index) const { return this->itemAt(index); }
inline QLayout*  py_q_layout() { return QLayout::layout(); }
inline QSize  py_q_maximumSize() const { return QLayout::maximumSize(); }
inline QSize  py_q_minimumSize() const { return QLayout::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QLayout::setGeometry(arg__1); }
inline QLayoutItem*  py_q_takeAt(int  index) { return this->takeAt(index); }
};

class PythonQtWrapper_QLayout : public QObject
{ Q_OBJECT
public:
public slots:
QLayout* new_QLayout();
QLayout* new_QLayout(QWidget*  parent);
void delete_QLayout(QLayout* obj) { delete obj; } 
   bool  activate(QLayout* theWrappedObject);
   void addChildLayout(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  l);
   void addChildWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w);
   void addItem(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  arg__1);
   void py_q_addItem(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  arg__1){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_addItem(arg__1));}
   void addWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w);
   bool  adoptLayout(QLayout* theWrappedObject, QLayout*  layout);
   QRect  alignmentRect(QLayout* theWrappedObject, const QRect&  arg__1) const;
   void py_q_childEvent(QLayout* theWrappedObject, QChildEvent*  e){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_childEvent(e));}
   QSize  static_QLayout_closestAcceptableSize(const QWidget*  w, const QSize&  s);
   QMargins  contentsMargins(QLayout* theWrappedObject) const;
   QRect  contentsRect(QLayout* theWrappedObject) const;
   QSizePolicy::ControlTypes  py_q_controlTypes(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_controlTypes());}
   int  count(QLayout* theWrappedObject) const;
   int  py_q_count(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_count());}
   Qt::Orientations  py_q_expandingDirections(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_expandingDirections());}
   QRect  py_q_geometry(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_geometry());}
   int  indexOf(QLayout* theWrappedObject, QWidget*  arg__1) const;
   int  py_q_indexOf(QLayout* theWrappedObject, QWidget*  arg__1) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_indexOf(arg__1));}
   void py_q_invalidate(QLayout* theWrappedObject){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_invalidate());}
   bool  py_q_isEmpty(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_isEmpty());}
   bool  isEnabled(QLayout* theWrappedObject) const;
   QLayoutItem*  itemAt(QLayout* theWrappedObject, int  index) const;
   QLayoutItem*  py_q_itemAt(QLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_itemAt(index));}
   QLayout*  py_q_layout(QLayout* theWrappedObject){  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_layout());}
   QSize  py_q_maximumSize(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_maximumSize());}
   QWidget*  menuBar(QLayout* theWrappedObject) const;
   QSize  py_q_minimumSize(QLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_minimumSize());}
   QWidget*  parentWidget(QLayout* theWrappedObject) const;
   void removeItem(QLayout* theWrappedObject, PythonQtPassOwnershipToPython<QLayoutItem* >  arg__1);
   void removeWidget(QLayout* theWrappedObject, PythonQtPassOwnershipToPython<QWidget* >  w);
   QLayoutItem*  replaceWidget(QLayout* theWrappedObject, QWidget*  from, QWidget*  to, Qt::FindChildOptions  options = Qt::FindChildrenRecursively);
   bool  setAlignment(QLayout* theWrappedObject, QLayout*  l, Qt::Alignment  alignment);
   bool  setAlignment(QLayout* theWrappedObject, QWidget*  w, Qt::Alignment  alignment);
   void setContentsMargins(QLayout* theWrappedObject, const QMargins&  margins);
   void setContentsMargins(QLayout* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setEnabled(QLayout* theWrappedObject, bool  arg__1);
   void py_q_setGeometry(QLayout* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_setGeometry(arg__1));}
   void setMargin(QLayout* theWrappedObject, int  arg__1);
   void setMenuBar(QLayout* theWrappedObject, QWidget*  w);
   void setSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  arg__1);
   void setSpacing(QLayout* theWrappedObject, int  arg__1);
   QLayout::SizeConstraint  sizeConstraint(QLayout* theWrappedObject) const;
   int  spacing(QLayout* theWrappedObject) const;
   PythonQtPassOwnershipToPython<QLayoutItem*  > takeAt(QLayout* theWrappedObject, int  index);
   PythonQtPassOwnershipToPython<QLayoutItem*  > py_q_takeAt(QLayout* theWrappedObject, int  index){  return (((PythonQtPublicPromoter_QLayout*)theWrappedObject)->py_q_takeAt(index));}
   int  totalHeightForWidth(QLayout* theWrappedObject, int  w) const;
   QSize  totalMaximumSize(QLayout* theWrappedObject) const;
   QSize  totalMinimumSize(QLayout* theWrappedObject) const;
   QSize  totalSizeHint(QLayout* theWrappedObject) const;
   void update(QLayout* theWrappedObject);
   void widgetEvent(QLayout* theWrappedObject, QEvent*  arg__1);
    bool __nonzero__(QLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QLayoutItem : public QLayoutItem
{
public:
    PythonQtShell_QLayoutItem(Qt::Alignment  alignment = Qt::Alignment()):QLayoutItem(alignment),_wrapper(NULL) {};

   ~PythonQtShell_QLayoutItem();

virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLayoutItem : public QLayoutItem
{ public:
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QLayoutItem::controlTypes(); }
inline Qt::Orientations  py_q_expandingDirections() const { return this->expandingDirections(); }
inline QRect  py_q_geometry() const { return this->geometry(); }
inline bool  py_q_hasHeightForWidth() const { return QLayoutItem::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QLayoutItem::heightForWidth(arg__1); }
inline void py_q_invalidate() { QLayoutItem::invalidate(); }
inline bool  py_q_isEmpty() const { return this->isEmpty(); }
inline QLayout*  py_q_layout() { return QLayoutItem::layout(); }
inline QSize  py_q_maximumSize() const { return this->maximumSize(); }
inline int  py_q_minimumHeightForWidth(int  arg__1) const { return QLayoutItem::minimumHeightForWidth(arg__1); }
inline QSize  py_q_minimumSize() const { return this->minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { this->setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return this->sizeHint(); }
inline QSpacerItem*  py_q_spacerItem() { return QLayoutItem::spacerItem(); }
inline QWidget*  py_q_widget() { return QLayoutItem::widget(); }
};

class PythonQtWrapper_QLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QLayoutItem* new_QLayoutItem(Qt::Alignment  alignment = Qt::Alignment());
void delete_QLayoutItem(QLayoutItem* obj) { delete obj; } 
   Qt::Alignment  alignment(QLayoutItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  controlTypes(QLayoutItem* theWrappedObject) const;
   QSizePolicy::ControlTypes  py_q_controlTypes(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_controlTypes());}
   Qt::Orientations  expandingDirections(QLayoutItem* theWrappedObject) const;
   Qt::Orientations  py_q_expandingDirections(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  geometry(QLayoutItem* theWrappedObject) const;
   QRect  py_q_geometry(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_geometry());}
   bool  hasHeightForWidth(QLayoutItem* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   int  py_q_heightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   void invalidate(QLayoutItem* theWrappedObject);
   void py_q_invalidate(QLayoutItem* theWrappedObject){  (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_invalidate());}
   bool  isEmpty(QLayoutItem* theWrappedObject) const;
   bool  py_q_isEmpty(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_isEmpty());}
   QLayout*  layout(QLayoutItem* theWrappedObject);
   QLayout*  py_q_layout(QLayoutItem* theWrappedObject){  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_layout());}
   QSize  maximumSize(QLayoutItem* theWrappedObject) const;
   QSize  py_q_maximumSize(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_maximumSize());}
   int  minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const;
   int  py_q_minimumHeightForWidth(QLayoutItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_minimumHeightForWidth(arg__1));}
   QSize  minimumSize(QLayoutItem* theWrappedObject) const;
   QSize  py_q_minimumSize(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_minimumSize());}
   void setAlignment(QLayoutItem* theWrappedObject, Qt::Alignment  a);
   void setGeometry(QLayoutItem* theWrappedObject, const QRect&  arg__1);
   void py_q_setGeometry(QLayoutItem* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_setGeometry(arg__1));}
   QSize  sizeHint(QLayoutItem* theWrappedObject) const;
   QSize  py_q_sizeHint(QLayoutItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_sizeHint());}
   QSpacerItem*  spacerItem(QLayoutItem* theWrappedObject);
   QSpacerItem*  py_q_spacerItem(QLayoutItem* theWrappedObject){  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_spacerItem());}
   QWidget*  widget(QLayoutItem* theWrappedObject);
   QWidget*  py_q_widget(QLayoutItem* theWrappedObject){  return (((PythonQtPublicPromoter_QLayoutItem*)theWrappedObject)->py_q_widget());}
    bool __nonzero__(QLayoutItem* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QLineEdit : public QLineEdit
{
public:
    PythonQtShell_QLineEdit(QWidget*  parent = NULL):QLineEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QLineEdit(const QString&  arg__1, QWidget*  parent = NULL):QLineEdit(arg__1, parent),_wrapper(NULL) {};

   ~PythonQtShell_QLineEdit();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
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
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
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

class PythonQtPublicPromoter_QLineEdit : public QLineEdit
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { this->contextMenuEvent(arg__1); }
inline QRect  promoted_cursorRect() const { return this->cursorRect(); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { this->dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { this->dropEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { this->focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionFrame*  option) const { this->initStyleOption(option); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { this->mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QLineEdit::changeEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  arg__1) { QLineEdit::contextMenuEvent(arg__1); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  arg__1) { QLineEdit::dragEnterEvent(arg__1); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QLineEdit::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QLineEdit::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  arg__1) { QLineEdit::dropEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QLineEdit::event(arg__1); }
inline void py_q_focusInEvent(QFocusEvent*  arg__1) { QLineEdit::focusInEvent(arg__1); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QLineEdit::focusOutEvent(arg__1); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QLineEdit::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QLineEdit::inputMethodQuery(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QLineEdit::keyPressEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QLineEdit::minimumSizeHint(); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QLineEdit::mouseDoubleClickEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QLineEdit::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QLineEdit::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QLineEdit::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QLineEdit::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QLineEdit::sizeHint(); }
};

class PythonQtWrapper_QLineEdit : public QObject
{ Q_OBJECT
public:
public slots:
QLineEdit* new_QLineEdit(QWidget*  parent = NULL);
QLineEdit* new_QLineEdit(const QString&  arg__1, QWidget*  parent = NULL);
void delete_QLineEdit(QLineEdit* obj) { delete obj; } 
   void addAction(QLineEdit* theWrappedObject, QAction*  action, QLineEdit::ActionPosition  position);
   QAction*  addAction(QLineEdit* theWrappedObject, const QIcon&  icon, QLineEdit::ActionPosition  position);
   Qt::Alignment  alignment(QLineEdit* theWrappedObject) const;
   void backspace(QLineEdit* theWrappedObject);
   void py_q_changeEvent(QLineEdit* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_changeEvent(arg__1));}
   QCompleter*  completer(QLineEdit* theWrappedObject) const;
   void py_q_contextMenuEvent(QLineEdit* theWrappedObject, QContextMenuEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_contextMenuEvent(arg__1));}
   QMenu*  createStandardContextMenu(QLineEdit* theWrappedObject);
   void cursorBackward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   void cursorForward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   Qt::CursorMoveStyle  cursorMoveStyle(QLineEdit* theWrappedObject) const;
   int  cursorPosition(QLineEdit* theWrappedObject) const;
   int  cursorPositionAt(QLineEdit* theWrappedObject, const QPoint&  pos);
   QRect  cursorRect(QLineEdit* theWrappedObject) const;
   void cursorWordBackward(QLineEdit* theWrappedObject, bool  mark);
   void cursorWordForward(QLineEdit* theWrappedObject, bool  mark);
   void del(QLineEdit* theWrappedObject);
   void deselect(QLineEdit* theWrappedObject);
   QString  displayText(QLineEdit* theWrappedObject) const;
   bool  dragEnabled(QLineEdit* theWrappedObject) const;
   void py_q_dragEnterEvent(QLineEdit* theWrappedObject, QDragEnterEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_dragEnterEvent(arg__1));}
   void py_q_dragLeaveEvent(QLineEdit* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QLineEdit* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QLineEdit* theWrappedObject, QDropEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_dropEvent(arg__1));}
   QLineEdit::EchoMode  echoMode(QLineEdit* theWrappedObject) const;
   void end(QLineEdit* theWrappedObject, bool  mark);
   bool  py_q_event(QLineEdit* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_event(arg__1));}
   void py_q_focusInEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_focusInEvent(arg__1));}
   void py_q_focusOutEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   void getTextMargins(QLineEdit* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   bool  hasAcceptableInput(QLineEdit* theWrappedObject) const;
   bool  hasFrame(QLineEdit* theWrappedObject) const;
   bool  hasSelectedText(QLineEdit* theWrappedObject) const;
   void home(QLineEdit* theWrappedObject, bool  mark);
   void initStyleOption(QLineEdit* theWrappedObject, QStyleOptionFrame*  option) const;
   QString  inputMask(QLineEdit* theWrappedObject) const;
   void py_q_inputMethodEvent(QLineEdit* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   QVariant  py_q_inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  arg__1) const{  return (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_inputMethodQuery(arg__1));}
   void insert(QLineEdit* theWrappedObject, const QString&  arg__1);
   bool  isClearButtonEnabled(QLineEdit* theWrappedObject) const;
   bool  isModified(QLineEdit* theWrappedObject) const;
   bool  isReadOnly(QLineEdit* theWrappedObject) const;
   bool  isRedoAvailable(QLineEdit* theWrappedObject) const;
   bool  isUndoAvailable(QLineEdit* theWrappedObject) const;
   void py_q_keyPressEvent(QLineEdit* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   int  maxLength(QLineEdit* theWrappedObject) const;
   QSize  minimumSizeHint(QLineEdit* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QLineEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseDoubleClickEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_mouseDoubleClickEvent(arg__1));}
   void py_q_mouseMoveEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_paintEvent(QLineEdit* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QString  placeholderText(QLineEdit* theWrappedObject) const;
   QString  selectedText(QLineEdit* theWrappedObject) const;
   int  selectionStart(QLineEdit* theWrappedObject) const;
   void setAlignment(QLineEdit* theWrappedObject, Qt::Alignment  flag);
   void setClearButtonEnabled(QLineEdit* theWrappedObject, bool  enable);
   void setCompleter(QLineEdit* theWrappedObject, QCompleter*  completer);
   void setCursorMoveStyle(QLineEdit* theWrappedObject, Qt::CursorMoveStyle  style);
   void setCursorPosition(QLineEdit* theWrappedObject, int  arg__1);
   void setDragEnabled(QLineEdit* theWrappedObject, bool  b);
   void setEchoMode(QLineEdit* theWrappedObject, QLineEdit::EchoMode  arg__1);
   void setFrame(QLineEdit* theWrappedObject, bool  arg__1);
   void setInputMask(QLineEdit* theWrappedObject, const QString&  inputMask);
   void setMaxLength(QLineEdit* theWrappedObject, int  arg__1);
   void setModified(QLineEdit* theWrappedObject, bool  arg__1);
   void setPlaceholderText(QLineEdit* theWrappedObject, const QString&  arg__1);
   void setReadOnly(QLineEdit* theWrappedObject, bool  arg__1);
   void setSelection(QLineEdit* theWrappedObject, int  arg__1, int  arg__2);
   void setTextMargins(QLineEdit* theWrappedObject, const QMargins&  margins);
   void setTextMargins(QLineEdit* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setValidator(QLineEdit* theWrappedObject, const QValidator*  arg__1);
   QSize  sizeHint(QLineEdit* theWrappedObject) const;
   QSize  py_q_sizeHint(QLineEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->py_q_sizeHint());}
   QString  text(QLineEdit* theWrappedObject) const;
   QMargins  textMargins(QLineEdit* theWrappedObject) const;
   const QValidator*  validator(QLineEdit* theWrappedObject) const;
};





class PythonQtWrapper_QLinearGradient : public QObject
{ Q_OBJECT
public:
public slots:
QLinearGradient* new_QLinearGradient();
QLinearGradient* new_QLinearGradient(const QPointF&  start, const QPointF&  finalStop);
QLinearGradient* new_QLinearGradient(qreal  xStart, qreal  yStart, qreal  xFinalStop, qreal  yFinalStop);
QLinearGradient* new_QLinearGradient(const QLinearGradient& other) {
QLinearGradient* a = new QLinearGradient();
*((QLinearGradient*)a) = other;
return a; }
void delete_QLinearGradient(QLinearGradient* obj) { delete obj; } 
   QPointF  finalStop(QLinearGradient* theWrappedObject) const;
   void setFinalStop(QLinearGradient* theWrappedObject, const QPointF&  stop);
   void setFinalStop(QLinearGradient* theWrappedObject, qreal  x, qreal  y);
   void setStart(QLinearGradient* theWrappedObject, const QPointF&  start);
   void setStart(QLinearGradient* theWrappedObject, qreal  x, qreal  y);
   QPointF  start(QLinearGradient* theWrappedObject) const;
};





class PythonQtShell_QListView : public QListView
{
public:
    PythonQtShell_QListView(QWidget*  parent = NULL):QListView(parent),_wrapper(NULL) {};

   ~PythonQtShell_QListView();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  event);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void keyboardSearch(const QString&  search);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  e);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = NULL) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setVisible(bool  visible);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  e);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  e);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QListView : public QListView
{ public:
inline QSize  promoted_contentsSize() const { return this->contentsSize(); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { this->currentChanged(current, previous); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) { this->dataChanged(topLeft, bottomRight, roles); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { this->dropEvent(e); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { this->mouseMoveEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return this->moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline QRect  promoted_rectForIndex(const QModelIndex&  index) const { return this->rectForIndex(index); }
inline void promoted_resizeContents(int  width, int  height) { this->resizeContents(width, height); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { this->rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { this->rowsInserted(parent, start, end); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return this->selectedIndexes(); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { this->selectionChanged(selected, deselected); }
inline void promoted_setPositionForIndex(const QPoint&  position, const QModelIndex&  index) { this->setPositionForIndex(position, index); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline void promoted_startDrag(Qt::DropActions  supportedActions) { this->startDrag(supportedActions); }
inline void promoted_timerEvent(QTimerEvent*  e) { this->timerEvent(e); }
inline void promoted_updateGeometries() { this->updateGeometries(); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return this->viewOptions(); }
inline QSize  promoted_viewportSizeHint() const { return this->viewportSizeHint(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline void promoted_wheelEvent(QWheelEvent*  e) { this->wheelEvent(e); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QListView::currentChanged(current, previous); }
inline void py_q_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) { QListView::dataChanged(topLeft, bottomRight, roles); }
inline void py_q_doItemsLayout() { QListView::doItemsLayout(); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QListView::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QListView::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  e) { QListView::dropEvent(e); }
inline bool  py_q_event(QEvent*  e) { return QListView::event(e); }
inline int  py_q_horizontalOffset() const { return QListView::horizontalOffset(); }
inline QModelIndex  py_q_indexAt(const QPoint&  p) const { return QListView::indexAt(p); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return QListView::isIndexHidden(index); }
inline void py_q_mouseMoveEvent(QMouseEvent*  e) { QListView::mouseMoveEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QListView::mouseReleaseEvent(e); }
inline QModelIndex  py_q_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return QListView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void py_q_paintEvent(QPaintEvent*  e) { QListView::paintEvent(e); }
inline void py_q_reset() { QListView::reset(); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QListView::resizeEvent(e); }
inline void py_q_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QListView::rowsAboutToBeRemoved(parent, start, end); }
inline void py_q_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QListView::rowsInserted(parent, start, end); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QListView::scrollContentsBy(dx, dy); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QListView::scrollTo(index, hint); }
inline QList<QModelIndex >  py_q_selectedIndexes() const { return QListView::selectedIndexes(); }
inline void py_q_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QListView::selectionChanged(selected, deselected); }
inline void py_q_setRootIndex(const QModelIndex&  index) { QListView::setRootIndex(index); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QListView::setSelection(rect, command); }
inline void py_q_startDrag(Qt::DropActions  supportedActions) { QListView::startDrag(supportedActions); }
inline void py_q_timerEvent(QTimerEvent*  e) { QListView::timerEvent(e); }
inline void py_q_updateGeometries() { QListView::updateGeometries(); }
inline int  py_q_verticalOffset() const { return QListView::verticalOffset(); }
inline QStyleOptionViewItem  py_q_viewOptions() const { return QListView::viewOptions(); }
inline QSize  py_q_viewportSizeHint() const { return QListView::viewportSizeHint(); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return QListView::visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return QListView::visualRegionForSelection(selection); }
inline void py_q_wheelEvent(QWheelEvent*  e) { QListView::wheelEvent(e); }
};

class PythonQtWrapper_QListView : public QObject
{ Q_OBJECT
public:
public slots:
QListView* new_QListView(QWidget*  parent = NULL);
void delete_QListView(QListView* obj) { delete obj; } 
   int  batchSize(QListView* theWrappedObject) const;
   void clearPropertyFlags(QListView* theWrappedObject);
   QSize  contentsSize(QListView* theWrappedObject) const;
   void py_q_currentChanged(QListView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_currentChanged(current, previous));}
   void py_q_dataChanged(QListView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_dataChanged(topLeft, bottomRight, roles));}
   void py_q_doItemsLayout(QListView* theWrappedObject){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_doItemsLayout());}
   void py_q_dragLeaveEvent(QListView* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QListView* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QListView* theWrappedObject, QDropEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_dropEvent(e));}
   bool  py_q_event(QListView* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_event(e));}
   QListView::Flow  flow(QListView* theWrappedObject) const;
   QSize  gridSize(QListView* theWrappedObject) const;
   int  py_q_horizontalOffset(QListView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_horizontalOffset());}
   QModelIndex  py_q_indexAt(QListView* theWrappedObject, const QPoint&  p) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_indexAt(p));}
   bool  py_q_isIndexHidden(QListView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_isIndexHidden(index));}
   bool  isRowHidden(QListView* theWrappedObject, int  row) const;
   bool  isSelectionRectVisible(QListView* theWrappedObject) const;
   bool  isWrapping(QListView* theWrappedObject) const;
   QListView::LayoutMode  layoutMode(QListView* theWrappedObject) const;
   int  modelColumn(QListView* theWrappedObject) const;
   void py_q_mouseMoveEvent(QListView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_mouseMoveEvent(e));}
   void py_q_mouseReleaseEvent(QListView* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   QModelIndex  py_q_moveCursor(QListView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers){  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_moveCursor(cursorAction, modifiers));}
   QListView::Movement  movement(QListView* theWrappedObject) const;
   void py_q_paintEvent(QListView* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_paintEvent(e));}
   QRect  rectForIndex(QListView* theWrappedObject, const QModelIndex&  index) const;
   void py_q_reset(QListView* theWrappedObject){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_reset());}
   void resizeContents(QListView* theWrappedObject, int  width, int  height);
   void py_q_resizeEvent(QListView* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_resizeEvent(e));}
   QListView::ResizeMode  resizeMode(QListView* theWrappedObject) const;
   void py_q_rowsAboutToBeRemoved(QListView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_rowsAboutToBeRemoved(parent, start, end));}
   void py_q_rowsInserted(QListView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_rowsInserted(parent, start, end));}
   void py_q_scrollContentsBy(QListView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void py_q_scrollTo(QListView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   QList<QModelIndex >  py_q_selectedIndexes(QListView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_selectedIndexes());}
   void py_q_selectionChanged(QListView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_selectionChanged(selected, deselected));}
   void setBatchSize(QListView* theWrappedObject, int  batchSize);
   void setFlow(QListView* theWrappedObject, QListView::Flow  flow);
   void setGridSize(QListView* theWrappedObject, const QSize&  size);
   void setLayoutMode(QListView* theWrappedObject, QListView::LayoutMode  mode);
   void setModelColumn(QListView* theWrappedObject, int  column);
   void setMovement(QListView* theWrappedObject, QListView::Movement  movement);
   void setPositionForIndex(QListView* theWrappedObject, const QPoint&  position, const QModelIndex&  index);
   void setResizeMode(QListView* theWrappedObject, QListView::ResizeMode  mode);
   void py_q_setRootIndex(QListView* theWrappedObject, const QModelIndex&  index){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_setRootIndex(index));}
   void setRowHidden(QListView* theWrappedObject, int  row, bool  hide);
   void py_q_setSelection(QListView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_setSelection(rect, command));}
   void setSelectionRectVisible(QListView* theWrappedObject, bool  show);
   void setSpacing(QListView* theWrappedObject, int  space);
   void setUniformItemSizes(QListView* theWrappedObject, bool  enable);
   void setViewMode(QListView* theWrappedObject, QListView::ViewMode  mode);
   void setWordWrap(QListView* theWrappedObject, bool  on);
   void setWrapping(QListView* theWrappedObject, bool  enable);
   int  spacing(QListView* theWrappedObject) const;
   void py_q_startDrag(QListView* theWrappedObject, Qt::DropActions  supportedActions){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_startDrag(supportedActions));}
   void py_q_timerEvent(QListView* theWrappedObject, QTimerEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_timerEvent(e));}
   bool  uniformItemSizes(QListView* theWrappedObject) const;
   void py_q_updateGeometries(QListView* theWrappedObject){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_updateGeometries());}
   int  py_q_verticalOffset(QListView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_verticalOffset());}
   QListView::ViewMode  viewMode(QListView* theWrappedObject) const;
   QStyleOptionViewItem  py_q_viewOptions(QListView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_viewOptions());}
   QSize  py_q_viewportSizeHint(QListView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_viewportSizeHint());}
   QRect  py_q_visualRect(QListView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  py_q_visualRegionForSelection(QListView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
   void py_q_wheelEvent(QListView* theWrappedObject, QWheelEvent*  e){  (((PythonQtPublicPromoter_QListView*)theWrappedObject)->py_q_wheelEvent(e));}
   bool  wordWrap(QListView* theWrappedObject) const;
};





class PythonQtShell_QListWidget : public QListWidget
{
public:
    PythonQtShell_QListWidget(QWidget*  parent = NULL):QListWidget(parent),_wrapper(NULL) {};

   ~PythonQtShell_QListWidget();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  event);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  event);
virtual bool  dropMimeData(int  index, const QMimeData*  data, Qt::DropAction  action);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void keyboardSearch(const QString&  search);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QMimeData*  mimeData(const QList<QListWidgetItem* >  items) const;
virtual QStringList  mimeTypes() const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  e);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = NULL) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setVisible(bool  visible);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual Qt::DropActions  supportedDropActions() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  e);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  e);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QListWidget : public QListWidget
{ public:
inline bool  promoted_dropMimeData(int  index, const QMimeData*  data, Qt::DropAction  action) { return this->dropMimeData(index, data, action); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline QModelIndex  promoted_indexFromItem(QListWidgetItem*  item) const { return this->indexFromItem(item); }
inline QListWidgetItem*  promoted_itemFromIndex(const QModelIndex&  index) const { return this->itemFromIndex(index); }
inline QList<QListWidgetItem* >  promoted_items(const QMimeData*  data) const { return this->items(data); }
inline QMimeData*  promoted_mimeData(const QList<QListWidgetItem* >  items) const { return this->mimeData(items); }
inline QStringList  promoted_mimeTypes() const { return this->mimeTypes(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return this->supportedDropActions(); }
inline void py_q_dropEvent(QDropEvent*  event) { QListWidget::dropEvent(event); }
inline bool  py_q_dropMimeData(int  index, const QMimeData*  data, Qt::DropAction  action) { return QListWidget::dropMimeData(index, data, action); }
inline bool  py_q_event(QEvent*  e) { return QListWidget::event(e); }
inline QMimeData*  py_q_mimeData(const QList<QListWidgetItem* >  items) const { return QListWidget::mimeData(items); }
inline QStringList  py_q_mimeTypes() const { return QListWidget::mimeTypes(); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QListWidget::supportedDropActions(); }
};

class PythonQtWrapper_QListWidget : public QObject
{ Q_OBJECT
public:
public slots:
QListWidget* new_QListWidget(QWidget*  parent = NULL);
void delete_QListWidget(QListWidget* obj) { delete obj; } 
   void addItem(QListWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QListWidgetItem* >  item);
   void addItem(QListWidget* theWrappedObject, const QString&  label);
   void addItems(QListWidget* theWrappedObject, const QStringList&  labels);
   void closePersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item);
   int  count(QListWidget* theWrappedObject) const;
   QListWidgetItem*  currentItem(QListWidget* theWrappedObject) const;
   int  currentRow(QListWidget* theWrappedObject) const;
   void py_q_dropEvent(QListWidget* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_dropEvent(event));}
   bool  dropMimeData(QListWidget* theWrappedObject, int  index, const QMimeData*  data, Qt::DropAction  action);
   bool  py_q_dropMimeData(QListWidget* theWrappedObject, int  index, const QMimeData*  data, Qt::DropAction  action){  return (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_dropMimeData(index, data, action));}
   void editItem(QListWidget* theWrappedObject, QListWidgetItem*  item);
   bool  py_q_event(QListWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_event(e));}
   QList<QListWidgetItem* >  findItems(QListWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const;
   QModelIndex  indexFromItem(QListWidget* theWrappedObject, QListWidgetItem*  item) const;
   void insertItem(QListWidget* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QListWidgetItem* >  item);
   void insertItem(QListWidget* theWrappedObject, int  row, const QString&  label);
   void insertItems(QListWidget* theWrappedObject, int  row, const QStringList&  labels);
   bool  isSortingEnabled(QListWidget* theWrappedObject) const;
   QListWidgetItem*  item(QListWidget* theWrappedObject, int  row) const;
   QListWidgetItem*  itemAt(QListWidget* theWrappedObject, const QPoint&  p) const;
   QListWidgetItem*  itemAt(QListWidget* theWrappedObject, int  x, int  y) const;
   QListWidgetItem*  itemFromIndex(QListWidget* theWrappedObject, const QModelIndex&  index) const;
   QWidget*  itemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item) const;
   QList<QListWidgetItem* >  items(QListWidget* theWrappedObject, const QMimeData*  data) const;
   PythonQtPassOwnershipToPython<QMimeData*  > mimeData(QListWidget* theWrappedObject, const QList<QListWidgetItem* >  items) const;
   PythonQtPassOwnershipToPython<QMimeData*  > py_q_mimeData(QListWidget* theWrappedObject, const QList<QListWidgetItem* >  items) const{  return (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_mimeData(items));}
   QStringList  mimeTypes(QListWidget* theWrappedObject) const;
   QStringList  py_q_mimeTypes(QListWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_mimeTypes());}
   void openPersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item);
   void removeItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item);
   int  row(QListWidget* theWrappedObject, const QListWidgetItem*  item) const;
   QList<QListWidgetItem* >  selectedItems(QListWidget* theWrappedObject) const;
   void setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item);
   void setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item, QItemSelectionModel::SelectionFlags  command);
   void setCurrentRow(QListWidget* theWrappedObject, int  row);
   void setCurrentRow(QListWidget* theWrappedObject, int  row, QItemSelectionModel::SelectionFlags  command);
   void setItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setSortingEnabled(QListWidget* theWrappedObject, bool  enable);
   void sortItems(QListWidget* theWrappedObject, Qt::SortOrder  order = Qt::AscendingOrder);
   Qt::DropActions  supportedDropActions(QListWidget* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QListWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListWidget*)theWrappedObject)->py_q_supportedDropActions());}
   PythonQtPassOwnershipToPython<QListWidgetItem*  > takeItem(QListWidget* theWrappedObject, int  row);
   QRect  visualItemRect(QListWidget* theWrappedObject, const QListWidgetItem*  item) const;
};





class PythonQtShell_QListWidgetItem : public QListWidgetItem
{
public:
    PythonQtShell_QListWidgetItem(QListWidget*  view = NULL, int  type = Type):QListWidgetItem(view, type),_wrapper(NULL) {};
    PythonQtShell_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  view = NULL, int  type = Type):QListWidgetItem(icon, text, view, type),_wrapper(NULL) {};
    PythonQtShell_QListWidgetItem(const QString&  text, QListWidget*  view = NULL, int  type = Type):QListWidgetItem(text, view, type),_wrapper(NULL) {};

   ~PythonQtShell_QListWidgetItem();

virtual QListWidgetItem*  clone() const;
virtual QVariant  data(int  role) const;
virtual void read(QDataStream&  in);
virtual void setData(int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QListWidgetItem : public QListWidgetItem
{ public:
inline QListWidgetItem*  py_q_clone() const { return QListWidgetItem::clone(); }
inline QVariant  py_q_data(int  role) const { return QListWidgetItem::data(role); }
inline void py_q_read(QDataStream&  in) { QListWidgetItem::read(in); }
inline void py_q_setData(int  role, const QVariant&  value) { QListWidgetItem::setData(role, value); }
inline void py_q_write(QDataStream&  out) const { QListWidgetItem::write(out); }
};

class PythonQtWrapper_QListWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QListWidgetItem::Type,   UserType = QListWidgetItem::UserType};
public slots:
QListWidgetItem* new_QListWidgetItem(PythonQtNewOwnerOfThis<QListWidget* >  view = NULL, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QIcon&  icon, const QString&  text, PythonQtNewOwnerOfThis<QListWidget* >  view = NULL, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QString&  text, PythonQtNewOwnerOfThis<QListWidget* >  view = NULL, int  type = Type);
void delete_QListWidgetItem(QListWidgetItem* obj) { delete obj; } 
   QBrush  background(QListWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QListWidgetItem* theWrappedObject) const;
   QListWidgetItem*  clone(QListWidgetItem* theWrappedObject) const;
   QListWidgetItem*  py_q_clone(QListWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_clone());}
   QVariant  data(QListWidgetItem* theWrappedObject, int  role) const;
   QVariant  py_q_data(QListWidgetItem* theWrappedObject, int  role) const{  return (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_data(role));}
   Qt::ItemFlags  flags(QListWidgetItem* theWrappedObject) const;
   QFont  font(QListWidgetItem* theWrappedObject) const;
   QBrush  foreground(QListWidgetItem* theWrappedObject) const;
   QIcon  icon(QListWidgetItem* theWrappedObject) const;
   bool  isHidden(QListWidgetItem* theWrappedObject) const;
   bool  isSelected(QListWidgetItem* theWrappedObject) const;
   QListWidget*  listWidget(QListWidgetItem* theWrappedObject) const;
   void writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in);
   void read(QListWidgetItem* theWrappedObject, QDataStream&  in);
   void py_q_read(QListWidgetItem* theWrappedObject, QDataStream&  in){  (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_read(in));}
   void setBackground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QListWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   void py_q_setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value){  (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_setData(role, value));}
   void setFlags(QListWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QListWidgetItem* theWrappedObject, const QFont&  font);
   void setForeground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   void setHidden(QListWidgetItem* theWrappedObject, bool  hide);
   void setIcon(QListWidgetItem* theWrappedObject, const QIcon&  icon);
   void setSelected(QListWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QListWidgetItem* theWrappedObject, const QSize&  size);
   void setStatusTip(QListWidgetItem* theWrappedObject, const QString&  statusTip);
   void setText(QListWidgetItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QListWidgetItem* theWrappedObject, int  alignment);
   void setToolTip(QListWidgetItem* theWrappedObject, const QString&  toolTip);
   void setWhatsThis(QListWidgetItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QListWidgetItem* theWrappedObject) const;
   QString  statusTip(QListWidgetItem* theWrappedObject) const;
   QString  text(QListWidgetItem* theWrappedObject) const;
   int  textAlignment(QListWidgetItem* theWrappedObject) const;
   QString  toolTip(QListWidgetItem* theWrappedObject) const;
   int  type(QListWidgetItem* theWrappedObject) const;
   QString  whatsThis(QListWidgetItem* theWrappedObject) const;
   void write(QListWidgetItem* theWrappedObject, QDataStream&  out) const;
   void py_q_write(QListWidgetItem* theWrappedObject, QDataStream&  out) const{  (((PythonQtPublicPromoter_QListWidgetItem*)theWrappedObject)->py_q_write(out));}
};


