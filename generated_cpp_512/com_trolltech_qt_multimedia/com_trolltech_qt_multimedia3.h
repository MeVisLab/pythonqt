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
#include <qthread.h>
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
    PythonQtShell_QVideoRendererControl(QObject*  parent = nullptr):QVideoRendererControl(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVideoRendererControl() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void setSurface(QAbstractVideoSurface*  surface) override;
QAbstractVideoSurface*  surface() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
QVideoRendererControl* new_QVideoRendererControl(QObject*  parent = nullptr);
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
   bool  isMirrored(QVideoSurfaceFormat* theWrappedObject) const;
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
   void setMirrored(QVideoSurfaceFormat* theWrappedObject, bool  mirrored);
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
    PythonQtShell_QVideoWidget(QWidget*  parent = nullptr):QVideoWidget(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVideoWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
QMediaObject*  mediaObject() const override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
bool  setMediaObject(QMediaObject*  object) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
inline QSize  py_q_sizeHint() const { return QVideoWidget::sizeHint(); }
};

class PythonQtWrapper_QVideoWidget : public QObject
{ Q_OBJECT
public:
public slots:
QVideoWidget* new_QVideoWidget(QWidget*  parent = nullptr);
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
   QSize  py_q_sizeHint(QVideoWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtShell_QVideoWidgetControl : public QVideoWidgetControl
{
public:
    PythonQtShell_QVideoWidgetControl(QObject*  parent = nullptr):QVideoWidgetControl(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVideoWidgetControl() override;

Qt::AspectRatioMode  aspectRatioMode() const override;
int  brightness() const override;
void childEvent(QChildEvent*  event) override;
int  contrast() const override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
int  hue() const override;
bool  isFullScreen() const override;
int  saturation() const override;
void setAspectRatioMode(Qt::AspectRatioMode  mode) override;
void setBrightness(int  brightness) override;
void setContrast(int  contrast) override;
void setFullScreen(bool  fullScreen) override;
void setHue(int  hue) override;
void setSaturation(int  saturation) override;
void timerEvent(QTimerEvent*  event) override;
QWidget*  videoWidget() override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
QVideoWidgetControl* new_QVideoWidgetControl(QObject*  parent = nullptr);
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
    PythonQtShell_QVideoWindowControl(QObject*  parent = nullptr):QVideoWindowControl(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVideoWindowControl() override;

Qt::AspectRatioMode  aspectRatioMode() const override;
int  brightness() const override;
void childEvent(QChildEvent*  event) override;
int  contrast() const override;
void customEvent(QEvent*  event) override;
QRect  displayRect() const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
int  hue() const override;
bool  isFullScreen() const override;
QSize  nativeSize() const override;
void repaint() override;
int  saturation() const override;
void setAspectRatioMode(Qt::AspectRatioMode  mode) override;
void setBrightness(int  brightness) override;
void setContrast(int  contrast) override;
void setDisplayRect(const QRect&  rect) override;
void setFullScreen(bool  fullScreen) override;
void setHue(int  hue) override;
void setSaturation(int  saturation) override;
void setWinId(WId  id) override;
void timerEvent(QTimerEvent*  event) override;
WId  winId() const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
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
QVideoWindowControl* new_QVideoWindowControl(QObject*  parent = nullptr);
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


