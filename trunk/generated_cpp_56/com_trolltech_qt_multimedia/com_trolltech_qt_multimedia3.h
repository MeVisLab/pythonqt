#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractvideosurface.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmediaobject.h>
#include <qmetaobject.h>
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
#include <qstyle.h>
#include <qvideorenderercontrol.h>
#include <qvideosurfaceformat.h>
#include <qvideowidget.h>
#include <qvideowidgetcontrol.h>
#include <qvideowindowcontrol.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QVideoRendererControl : public QVideoRendererControl
{
public:
    PythonQtShell_QVideoRendererControl(QObject*  parent = NULL):QVideoRendererControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVideoRendererControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void setSurface(QAbstractVideoSurface*  surface);
virtual QAbstractVideoSurface*  surface() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVideoRendererControl : public QVideoRendererControl
{ public:
inline void py_q_setSurface(QAbstractVideoSurface*  surface) { this->setSurface(surface); }
inline QAbstractVideoSurface*  py_q_surface() const { return this->surface(); }
};

class PythonQtWrapper_QVideoRendererControl : public QObject
{ Q_OBJECT
public:
public slots:
QVideoRendererControl* new_QVideoRendererControl(QObject*  parent = NULL);
void delete_QVideoRendererControl(QVideoRendererControl* obj) { delete obj; } 
   void setSurface(QVideoRendererControl* theWrappedObject, QAbstractVideoSurface*  surface);
   void py_q_setSurface(QVideoRendererControl* theWrappedObject, QAbstractVideoSurface*  surface){  (((PythonQtPublicPromoter_QVideoRendererControl*)theWrappedObject)->py_q_setSurface(surface));}
   QAbstractVideoSurface*  surface(QVideoRendererControl* theWrappedObject) const;
   QAbstractVideoSurface*  py_q_surface(QVideoRendererControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoRendererControl*)theWrappedObject)->py_q_surface());}
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
    bool __nonzero__(QVideoSurfaceFormat* obj) { return obj->isValid(); }
};





class PythonQtShell_QVideoWidget : public QVideoWidget
{
public:
    PythonQtShell_QVideoWidget(QWidget*  parent = NULL):QVideoWidget(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVideoWidget();

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
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVideoWidget : public QVideoWidget
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_moveEvent(QMoveEvent*  event) { this->moveEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline bool  promoted_setMediaObject(QMediaObject*  object) { return this->setMediaObject(object); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QVideoWidget::event(event); }
inline void py_q_hideEvent(QHideEvent*  event) { QVideoWidget::hideEvent(event); }
inline QMediaObject*  py_q_mediaObject() const { return QVideoWidget::mediaObject(); }
inline void py_q_moveEvent(QMoveEvent*  event) { QVideoWidget::moveEvent(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QVideoWidget::paintEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QVideoWidget::resizeEvent(event); }
inline bool  py_q_setMediaObject(QMediaObject*  object) { return QVideoWidget::setMediaObject(object); }
inline void py_q_showEvent(QShowEvent*  event) { QVideoWidget::showEvent(event); }
};

class PythonQtWrapper_QVideoWidget : public QObject
{ Q_OBJECT
public:
public slots:
QVideoWidget* new_QVideoWidget(QWidget*  parent = NULL);
void delete_QVideoWidget(QVideoWidget* obj) { delete obj; } 
   Qt::AspectRatioMode  aspectRatioMode(QVideoWidget* theWrappedObject) const;
   int  brightness(QVideoWidget* theWrappedObject) const;
   int  contrast(QVideoWidget* theWrappedObject) const;
   bool  py_q_event(QVideoWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_event(event));}
   void py_q_hideEvent(QVideoWidget* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_hideEvent(event));}
   int  hue(QVideoWidget* theWrappedObject) const;
   QMediaObject*  py_q_mediaObject(QVideoWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_mediaObject());}
   void py_q_moveEvent(QVideoWidget* theWrappedObject, QMoveEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_moveEvent(event));}
   void py_q_paintEvent(QVideoWidget* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_paintEvent(event));}
   void py_q_resizeEvent(QVideoWidget* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   int  saturation(QVideoWidget* theWrappedObject) const;
   bool  py_q_setMediaObject(QVideoWidget* theWrappedObject, QMediaObject*  object){  return (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_setMediaObject(object));}
   void py_q_showEvent(QVideoWidget* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_showEvent(event));}
   QSize  sizeHint(QVideoWidget* theWrappedObject) const;
};





class PythonQtShell_QVideoWidgetControl : public QVideoWidgetControl
{
public:
    PythonQtShell_QVideoWidgetControl(QObject*  parent = NULL):QVideoWidgetControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVideoWidgetControl();

virtual Qt::AspectRatioMode  aspectRatioMode() const;
virtual int  brightness() const;
virtual void childEvent(QChildEvent*  event);
virtual int  contrast() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual int  hue() const;
virtual bool  isFullScreen() const;
virtual int  saturation() const;
virtual void setAspectRatioMode(Qt::AspectRatioMode  mode);
virtual void setBrightness(int  brightness);
virtual void setContrast(int  contrast);
virtual void setFullScreen(bool  fullScreen);
virtual void setHue(int  hue);
virtual void setSaturation(int  saturation);
virtual void timerEvent(QTimerEvent*  event);
virtual QWidget*  videoWidget();

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVideoWidgetControl : public QVideoWidgetControl
{ public:
inline Qt::AspectRatioMode  py_q_aspectRatioMode() const { return this->aspectRatioMode(); }
inline int  py_q_brightness() const { return this->brightness(); }
inline int  py_q_contrast() const { return this->contrast(); }
inline int  py_q_hue() const { return this->hue(); }
inline bool  py_q_isFullScreen() const { return this->isFullScreen(); }
inline int  py_q_saturation() const { return this->saturation(); }
inline void py_q_setAspectRatioMode(Qt::AspectRatioMode  mode) { this->setAspectRatioMode(mode); }
inline void py_q_setBrightness(int  brightness) { this->setBrightness(brightness); }
inline void py_q_setContrast(int  contrast) { this->setContrast(contrast); }
inline void py_q_setFullScreen(bool  fullScreen) { this->setFullScreen(fullScreen); }
inline void py_q_setHue(int  hue) { this->setHue(hue); }
inline void py_q_setSaturation(int  saturation) { this->setSaturation(saturation); }
inline QWidget*  py_q_videoWidget() { return this->videoWidget(); }
};

class PythonQtWrapper_QVideoWidgetControl : public QObject
{ Q_OBJECT
public:
public slots:
QVideoWidgetControl* new_QVideoWidgetControl(QObject*  parent = NULL);
void delete_QVideoWidgetControl(QVideoWidgetControl* obj) { delete obj; } 
   Qt::AspectRatioMode  aspectRatioMode(QVideoWidgetControl* theWrappedObject) const;
   Qt::AspectRatioMode  py_q_aspectRatioMode(QVideoWidgetControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_aspectRatioMode());}
   int  brightness(QVideoWidgetControl* theWrappedObject) const;
   int  py_q_brightness(QVideoWidgetControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_brightness());}
   int  contrast(QVideoWidgetControl* theWrappedObject) const;
   int  py_q_contrast(QVideoWidgetControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_contrast());}
   int  hue(QVideoWidgetControl* theWrappedObject) const;
   int  py_q_hue(QVideoWidgetControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_hue());}
   bool  isFullScreen(QVideoWidgetControl* theWrappedObject) const;
   bool  py_q_isFullScreen(QVideoWidgetControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_isFullScreen());}
   int  saturation(QVideoWidgetControl* theWrappedObject) const;
   int  py_q_saturation(QVideoWidgetControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_saturation());}
   void setAspectRatioMode(QVideoWidgetControl* theWrappedObject, Qt::AspectRatioMode  mode);
   void py_q_setAspectRatioMode(QVideoWidgetControl* theWrappedObject, Qt::AspectRatioMode  mode){  (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_setAspectRatioMode(mode));}
   void setBrightness(QVideoWidgetControl* theWrappedObject, int  brightness);
   void py_q_setBrightness(QVideoWidgetControl* theWrappedObject, int  brightness){  (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_setBrightness(brightness));}
   void setContrast(QVideoWidgetControl* theWrappedObject, int  contrast);
   void py_q_setContrast(QVideoWidgetControl* theWrappedObject, int  contrast){  (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_setContrast(contrast));}
   void setFullScreen(QVideoWidgetControl* theWrappedObject, bool  fullScreen);
   void py_q_setFullScreen(QVideoWidgetControl* theWrappedObject, bool  fullScreen){  (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_setFullScreen(fullScreen));}
   void setHue(QVideoWidgetControl* theWrappedObject, int  hue);
   void py_q_setHue(QVideoWidgetControl* theWrappedObject, int  hue){  (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_setHue(hue));}
   void setSaturation(QVideoWidgetControl* theWrappedObject, int  saturation);
   void py_q_setSaturation(QVideoWidgetControl* theWrappedObject, int  saturation){  (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_setSaturation(saturation));}
   QWidget*  videoWidget(QVideoWidgetControl* theWrappedObject);
   QWidget*  py_q_videoWidget(QVideoWidgetControl* theWrappedObject){  return (((PythonQtPublicPromoter_QVideoWidgetControl*)theWrappedObject)->py_q_videoWidget());}
};





class PythonQtShell_QVideoWindowControl : public QVideoWindowControl
{
public:
    PythonQtShell_QVideoWindowControl(QObject*  parent = NULL):QVideoWindowControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVideoWindowControl();

virtual Qt::AspectRatioMode  aspectRatioMode() const;
virtual int  brightness() const;
virtual void childEvent(QChildEvent*  event);
virtual int  contrast() const;
virtual void customEvent(QEvent*  event);
virtual QRect  displayRect() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual int  hue() const;
virtual bool  isFullScreen() const;
virtual QSize  nativeSize() const;
virtual void repaint();
virtual int  saturation() const;
virtual void setAspectRatioMode(Qt::AspectRatioMode  mode);
virtual void setBrightness(int  brightness);
virtual void setContrast(int  contrast);
virtual void setDisplayRect(const QRect&  rect);
virtual void setFullScreen(bool  fullScreen);
virtual void setHue(int  hue);
virtual void setSaturation(int  saturation);
virtual void setWinId(WId  id);
virtual void timerEvent(QTimerEvent*  event);
virtual WId  winId() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVideoWindowControl : public QVideoWindowControl
{ public:
inline Qt::AspectRatioMode  py_q_aspectRatioMode() const { return this->aspectRatioMode(); }
inline int  py_q_brightness() const { return this->brightness(); }
inline int  py_q_contrast() const { return this->contrast(); }
inline QRect  py_q_displayRect() const { return this->displayRect(); }
inline int  py_q_hue() const { return this->hue(); }
inline bool  py_q_isFullScreen() const { return this->isFullScreen(); }
inline QSize  py_q_nativeSize() const { return this->nativeSize(); }
inline void py_q_repaint() { this->repaint(); }
inline int  py_q_saturation() const { return this->saturation(); }
inline void py_q_setAspectRatioMode(Qt::AspectRatioMode  mode) { this->setAspectRatioMode(mode); }
inline void py_q_setBrightness(int  brightness) { this->setBrightness(brightness); }
inline void py_q_setContrast(int  contrast) { this->setContrast(contrast); }
inline void py_q_setDisplayRect(const QRect&  rect) { this->setDisplayRect(rect); }
inline void py_q_setFullScreen(bool  fullScreen) { this->setFullScreen(fullScreen); }
inline void py_q_setHue(int  hue) { this->setHue(hue); }
inline void py_q_setSaturation(int  saturation) { this->setSaturation(saturation); }
inline void py_q_setWinId(WId  id) { this->setWinId(id); }
inline WId  py_q_winId() const { return this->winId(); }
};

class PythonQtWrapper_QVideoWindowControl : public QObject
{ Q_OBJECT
public:
public slots:
QVideoWindowControl* new_QVideoWindowControl(QObject*  parent = NULL);
void delete_QVideoWindowControl(QVideoWindowControl* obj) { delete obj; } 
   Qt::AspectRatioMode  aspectRatioMode(QVideoWindowControl* theWrappedObject) const;
   Qt::AspectRatioMode  py_q_aspectRatioMode(QVideoWindowControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_aspectRatioMode());}
   int  brightness(QVideoWindowControl* theWrappedObject) const;
   int  py_q_brightness(QVideoWindowControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_brightness());}
   int  contrast(QVideoWindowControl* theWrappedObject) const;
   int  py_q_contrast(QVideoWindowControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_contrast());}
   QRect  displayRect(QVideoWindowControl* theWrappedObject) const;
   QRect  py_q_displayRect(QVideoWindowControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_displayRect());}
   int  hue(QVideoWindowControl* theWrappedObject) const;
   int  py_q_hue(QVideoWindowControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_hue());}
   bool  isFullScreen(QVideoWindowControl* theWrappedObject) const;
   bool  py_q_isFullScreen(QVideoWindowControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_isFullScreen());}
   QSize  nativeSize(QVideoWindowControl* theWrappedObject) const;
   QSize  py_q_nativeSize(QVideoWindowControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_nativeSize());}
   void repaint(QVideoWindowControl* theWrappedObject);
   void py_q_repaint(QVideoWindowControl* theWrappedObject){  (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_repaint());}
   int  saturation(QVideoWindowControl* theWrappedObject) const;
   int  py_q_saturation(QVideoWindowControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_saturation());}
   void setAspectRatioMode(QVideoWindowControl* theWrappedObject, Qt::AspectRatioMode  mode);
   void py_q_setAspectRatioMode(QVideoWindowControl* theWrappedObject, Qt::AspectRatioMode  mode){  (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_setAspectRatioMode(mode));}
   void setBrightness(QVideoWindowControl* theWrappedObject, int  brightness);
   void py_q_setBrightness(QVideoWindowControl* theWrappedObject, int  brightness){  (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_setBrightness(brightness));}
   void setContrast(QVideoWindowControl* theWrappedObject, int  contrast);
   void py_q_setContrast(QVideoWindowControl* theWrappedObject, int  contrast){  (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_setContrast(contrast));}
   void setDisplayRect(QVideoWindowControl* theWrappedObject, const QRect&  rect);
   void py_q_setDisplayRect(QVideoWindowControl* theWrappedObject, const QRect&  rect){  (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_setDisplayRect(rect));}
   void setFullScreen(QVideoWindowControl* theWrappedObject, bool  fullScreen);
   void py_q_setFullScreen(QVideoWindowControl* theWrappedObject, bool  fullScreen){  (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_setFullScreen(fullScreen));}
   void setHue(QVideoWindowControl* theWrappedObject, int  hue);
   void py_q_setHue(QVideoWindowControl* theWrappedObject, int  hue){  (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_setHue(hue));}
   void setSaturation(QVideoWindowControl* theWrappedObject, int  saturation);
   void py_q_setSaturation(QVideoWindowControl* theWrappedObject, int  saturation){  (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_setSaturation(saturation));}
   void setWinId(QVideoWindowControl* theWrappedObject, WId  id);
   void py_q_setWinId(QVideoWindowControl* theWrappedObject, WId  id){  (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_setWinId(id));}
   WId  winId(QVideoWindowControl* theWrappedObject) const;
   WId  py_q_winId(QVideoWindowControl* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWindowControl*)theWrappedObject)->py_q_winId());}
};


