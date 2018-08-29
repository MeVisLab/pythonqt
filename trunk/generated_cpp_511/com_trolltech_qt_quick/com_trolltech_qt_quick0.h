#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qjsvalue.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qopenglcontext.h>
#include <qopenglframebufferobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qqmlcomponent.h>
#include <qqmlcontext.h>
#include <qqmlengine.h>
#include <qqmlerror.h>
#include <qqmlincubator.h>
#include <qquickframebufferobject.h>
#include <qquickimageprovider.h>
#include <qquickitem.h>
#include <qquickitemgrabresult.h>
#include <qquickpainteditem.h>
#include <qquickrendercontrol.h>
#include <qquicktextdocument.h>
#include <qquickview.h>
#include <qquickwidget.h>
#include <qquickwindow.h>
#include <qrect.h>
#include <qregion.h>
#include <qrunnable.h>
#include <qscreen.h>
#include <qsgabstractrenderer.h>
#include <qsgengine.h>
#include <qsgflatcolormaterial.h>
#include <qsggeometry.h>
#include <qsgimagenode.h>
#include <qsgmaterial.h>
#include <qsgninepatchnode.h>
#include <qsgnode.h>
#include <qsgrectanglenode.h>
#include <qsgtexture.h>
#include <qsgtextureprovider.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qsurfaceformat.h>
#include <qtextdocument.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvector.h>
#include <qvector4d.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QQuickFramebufferObject : public QQuickFramebufferObject
{
public:
    PythonQtShell_QQuickFramebufferObject(QQuickItem*  parent = nullptr):QQuickFramebufferObject(parent),_wrapper(NULL) {};

   ~PythonQtShell_QQuickFramebufferObject();

virtual QRectF  boundingRect() const;
virtual bool  childMouseEventFilter(QQuickItem*  arg__1, QEvent*  arg__2);
virtual void classBegin();
virtual QRectF  clipRect() const;
virtual void componentComplete();
virtual bool  contains(const QPointF&  point) const;
virtual QQuickFramebufferObject::Renderer*  createRenderer() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void geometryChanged(const QRectF&  newGeometry, const QRectF&  oldGeometry);
virtual void hoverEnterEvent(QHoverEvent*  event);
virtual void hoverLeaveEvent(QHoverEvent*  event);
virtual void hoverMoveEvent(QHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isTextureProvider() const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void mouseUngrabEvent();
virtual void releaseResources();
virtual QSGTextureProvider*  textureProvider() const;
virtual void touchEvent(QTouchEvent*  event);
virtual void touchUngrabEvent();
virtual QSGNode*  updatePaintNode(QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2);
virtual void updatePolish();
virtual void wheelEvent(QWheelEvent*  event);
virtual void windowDeactivateEvent();

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQuickFramebufferObject : public QQuickFramebufferObject
{ public:
inline void promoted_geometryChanged(const QRectF&  newGeometry, const QRectF&  oldGeometry) { this->geometryChanged(newGeometry, oldGeometry); }
inline QSGNode*  promoted_updatePaintNode(QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2) { return this->updatePaintNode(arg__1, arg__2); }
inline QQuickFramebufferObject::Renderer*  py_q_createRenderer() const { return this->createRenderer(); }
inline void py_q_geometryChanged(const QRectF&  newGeometry, const QRectF&  oldGeometry) { QQuickFramebufferObject::geometryChanged(newGeometry, oldGeometry); }
inline bool  py_q_isTextureProvider() const { return QQuickFramebufferObject::isTextureProvider(); }
inline void py_q_releaseResources() { QQuickFramebufferObject::releaseResources(); }
inline QSGTextureProvider*  py_q_textureProvider() const { return QQuickFramebufferObject::textureProvider(); }
inline QSGNode*  py_q_updatePaintNode(QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2) { return QQuickFramebufferObject::updatePaintNode(arg__1, arg__2); }
};

class PythonQtWrapper_QQuickFramebufferObject : public QObject
{ Q_OBJECT
public:
public slots:
QQuickFramebufferObject* new_QQuickFramebufferObject(QQuickItem*  parent = nullptr);
void delete_QQuickFramebufferObject(QQuickFramebufferObject* obj) { delete obj; } 
   QQuickFramebufferObject::Renderer*  createRenderer(QQuickFramebufferObject* theWrappedObject) const;
   QQuickFramebufferObject::Renderer*  py_q_createRenderer(QQuickFramebufferObject* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickFramebufferObject*)theWrappedObject)->py_q_createRenderer());}
   void py_q_geometryChanged(QQuickFramebufferObject* theWrappedObject, const QRectF&  newGeometry, const QRectF&  oldGeometry){  (((PythonQtPublicPromoter_QQuickFramebufferObject*)theWrappedObject)->py_q_geometryChanged(newGeometry, oldGeometry));}
   bool  py_q_isTextureProvider(QQuickFramebufferObject* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickFramebufferObject*)theWrappedObject)->py_q_isTextureProvider());}
   bool  mirrorVertically(QQuickFramebufferObject* theWrappedObject) const;
   void py_q_releaseResources(QQuickFramebufferObject* theWrappedObject){  (((PythonQtPublicPromoter_QQuickFramebufferObject*)theWrappedObject)->py_q_releaseResources());}
   void setMirrorVertically(QQuickFramebufferObject* theWrappedObject, bool  enable);
   void setTextureFollowsItemSize(QQuickFramebufferObject* theWrappedObject, bool  follows);
   bool  textureFollowsItemSize(QQuickFramebufferObject* theWrappedObject) const;
   QSGTextureProvider*  py_q_textureProvider(QQuickFramebufferObject* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickFramebufferObject*)theWrappedObject)->py_q_textureProvider());}
   QSGNode*  py_q_updatePaintNode(QQuickFramebufferObject* theWrappedObject, QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2){  return (((PythonQtPublicPromoter_QQuickFramebufferObject*)theWrappedObject)->py_q_updatePaintNode(arg__1, arg__2));}
};





class PythonQtShell_QQuickFramebufferObject__Renderer : public QQuickFramebufferObject::Renderer
{
public:
    PythonQtShell_QQuickFramebufferObject__Renderer():QQuickFramebufferObject::Renderer(),_wrapper(NULL) {};

   ~PythonQtShell_QQuickFramebufferObject__Renderer();

virtual QOpenGLFramebufferObject*  createFramebufferObject(const QSize&  size);
virtual void render();
virtual void synchronize(QQuickFramebufferObject*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQuickFramebufferObject__Renderer : public QQuickFramebufferObject::Renderer
{ public:
inline QOpenGLFramebufferObject*  promoted_createFramebufferObject(const QSize&  size) { return this->createFramebufferObject(size); }
inline QOpenGLFramebufferObject*  promoted_framebufferObject() const { return this->framebufferObject(); }
inline void promoted_invalidateFramebufferObject() { this->invalidateFramebufferObject(); }
inline void promoted_render() { this->render(); }
inline void promoted_synchronize(QQuickFramebufferObject*  arg__1) { this->synchronize(arg__1); }
inline void promoted_update() { this->update(); }
inline QOpenGLFramebufferObject*  py_q_createFramebufferObject(const QSize&  size) { return QQuickFramebufferObject::Renderer::createFramebufferObject(size); }
inline void py_q_render() { this->render(); }
inline void py_q_synchronize(QQuickFramebufferObject*  arg__1) { QQuickFramebufferObject::Renderer::synchronize(arg__1); }
};

class PythonQtWrapper_QQuickFramebufferObject__Renderer : public QObject
{ Q_OBJECT
public:
public slots:
QQuickFramebufferObject::Renderer* new_QQuickFramebufferObject__Renderer();
   QOpenGLFramebufferObject*  createFramebufferObject(QQuickFramebufferObject::Renderer* theWrappedObject, const QSize&  size);
   QOpenGLFramebufferObject*  py_q_createFramebufferObject(QQuickFramebufferObject::Renderer* theWrappedObject, const QSize&  size){  return (((PythonQtPublicPromoter_QQuickFramebufferObject__Renderer*)theWrappedObject)->py_q_createFramebufferObject(size));}
   QOpenGLFramebufferObject*  framebufferObject(QQuickFramebufferObject::Renderer* theWrappedObject) const;
   void invalidateFramebufferObject(QQuickFramebufferObject::Renderer* theWrappedObject);
   void render(QQuickFramebufferObject::Renderer* theWrappedObject);
   void py_q_render(QQuickFramebufferObject::Renderer* theWrappedObject){  (((PythonQtPublicPromoter_QQuickFramebufferObject__Renderer*)theWrappedObject)->py_q_render());}
   void synchronize(QQuickFramebufferObject::Renderer* theWrappedObject, QQuickFramebufferObject*  arg__1);
   void py_q_synchronize(QQuickFramebufferObject::Renderer* theWrappedObject, QQuickFramebufferObject*  arg__1){  (((PythonQtPublicPromoter_QQuickFramebufferObject__Renderer*)theWrappedObject)->py_q_synchronize(arg__1));}
   void update(QQuickFramebufferObject::Renderer* theWrappedObject);
};





class PythonQtPublicPromoter_QQuickImageProvider : public QQuickImageProvider
{ public:
inline QImage  py_q_requestImage(const QString&  id, QSize*  size, const QSize&  requestedSize) { return QQuickImageProvider::requestImage(id, size, requestedSize); }
inline QPixmap  py_q_requestPixmap(const QString&  id, QSize*  size, const QSize&  requestedSize) { return QQuickImageProvider::requestPixmap(id, size, requestedSize); }
};

class PythonQtWrapper_QQuickImageProvider : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QQuickImageProvider(QQuickImageProvider* obj) { delete obj; } 
   QImage  requestImage(QQuickImageProvider* theWrappedObject, const QString&  id, QSize*  size, const QSize&  requestedSize);
   QImage  py_q_requestImage(QQuickImageProvider* theWrappedObject, const QString&  id, QSize*  size, const QSize&  requestedSize){  return (((PythonQtPublicPromoter_QQuickImageProvider*)theWrappedObject)->py_q_requestImage(id, size, requestedSize));}
   QPixmap  requestPixmap(QQuickImageProvider* theWrappedObject, const QString&  id, QSize*  size, const QSize&  requestedSize);
   QPixmap  py_q_requestPixmap(QQuickImageProvider* theWrappedObject, const QString&  id, QSize*  size, const QSize&  requestedSize){  return (((PythonQtPublicPromoter_QQuickImageProvider*)theWrappedObject)->py_q_requestPixmap(id, size, requestedSize));}
};





class PythonQtShell_QQuickItem : public QQuickItem
{
public:
    PythonQtShell_QQuickItem(QQuickItem*  parent = nullptr):QQuickItem(parent),_wrapper(NULL) {};

   ~PythonQtShell_QQuickItem();

virtual QRectF  boundingRect() const;
virtual bool  childMouseEventFilter(QQuickItem*  arg__1, QEvent*  arg__2);
virtual void classBegin();
virtual QRectF  clipRect() const;
virtual void componentComplete();
virtual bool  contains(const QPointF&  point) const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void geometryChanged(const QRectF&  newGeometry, const QRectF&  oldGeometry);
virtual void hoverEnterEvent(QHoverEvent*  event);
virtual void hoverLeaveEvent(QHoverEvent*  event);
virtual void hoverMoveEvent(QHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isTextureProvider() const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void mouseUngrabEvent();
virtual void releaseResources();
virtual QSGTextureProvider*  textureProvider() const;
virtual void touchEvent(QTouchEvent*  event);
virtual void touchUngrabEvent();
virtual QSGNode*  updatePaintNode(QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2);
virtual void updatePolish();
virtual void wheelEvent(QWheelEvent*  event);
virtual void windowDeactivateEvent();

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQuickItem : public QQuickItem
{ public:
inline bool  promoted_childMouseEventFilter(QQuickItem*  arg__1, QEvent*  arg__2) { return this->childMouseEventFilter(arg__1, arg__2); }
inline void promoted_classBegin() { this->classBegin(); }
inline void promoted_componentComplete() { this->componentComplete(); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { this->dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { this->dragLeaveEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { this->dragMoveEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { this->dropEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { this->focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_geometryChanged(const QRectF&  newGeometry, const QRectF&  oldGeometry) { this->geometryChanged(newGeometry, oldGeometry); }
inline bool  promoted_heightValid() const { return this->heightValid(); }
inline void promoted_hoverEnterEvent(QHoverEvent*  event) { this->hoverEnterEvent(event); }
inline void promoted_hoverLeaveEvent(QHoverEvent*  event) { this->hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QHoverEvent*  event) { this->hoverMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline bool  promoted_isComponentComplete() const { return this->isComponentComplete(); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_mouseUngrabEvent() { this->mouseUngrabEvent(); }
inline void promoted_releaseResources() { this->releaseResources(); }
inline void promoted_setImplicitSize(qreal  arg__1, qreal  arg__2) { this->setImplicitSize(arg__1, arg__2); }
inline void promoted_touchEvent(QTouchEvent*  event) { this->touchEvent(event); }
inline void promoted_touchUngrabEvent() { this->touchUngrabEvent(); }
inline void promoted_updateInputMethod(Qt::InputMethodQueries  queries = Qt::ImQueryInput) { this->updateInputMethod(queries); }
inline QSGNode*  promoted_updatePaintNode(QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2) { return this->updatePaintNode(arg__1, arg__2); }
inline void promoted_updatePolish() { this->updatePolish(); }
inline void promoted_wheelEvent(QWheelEvent*  event) { this->wheelEvent(event); }
inline bool  promoted_widthValid() const { return this->widthValid(); }
inline void promoted_windowDeactivateEvent() { this->windowDeactivateEvent(); }
inline QRectF  py_q_boundingRect() const { return QQuickItem::boundingRect(); }
inline bool  py_q_childMouseEventFilter(QQuickItem*  arg__1, QEvent*  arg__2) { return QQuickItem::childMouseEventFilter(arg__1, arg__2); }
inline void py_q_classBegin() { QQuickItem::classBegin(); }
inline QRectF  py_q_clipRect() const { return QQuickItem::clipRect(); }
inline void py_q_componentComplete() { QQuickItem::componentComplete(); }
inline bool  py_q_contains(const QPointF&  point) const { return QQuickItem::contains(point); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  arg__1) { QQuickItem::dragEnterEvent(arg__1); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QQuickItem::dragLeaveEvent(arg__1); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  arg__1) { QQuickItem::dragMoveEvent(arg__1); }
inline void py_q_dropEvent(QDropEvent*  arg__1) { QQuickItem::dropEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QQuickItem::event(arg__1); }
inline void py_q_focusInEvent(QFocusEvent*  arg__1) { QQuickItem::focusInEvent(arg__1); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QQuickItem::focusOutEvent(arg__1); }
inline void py_q_geometryChanged(const QRectF&  newGeometry, const QRectF&  oldGeometry) { QQuickItem::geometryChanged(newGeometry, oldGeometry); }
inline void py_q_hoverEnterEvent(QHoverEvent*  event) { QQuickItem::hoverEnterEvent(event); }
inline void py_q_hoverLeaveEvent(QHoverEvent*  event) { QQuickItem::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QHoverEvent*  event) { QQuickItem::hoverMoveEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QQuickItem::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QQuickItem::inputMethodQuery(query); }
inline bool  py_q_isTextureProvider() const { return QQuickItem::isTextureProvider(); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QQuickItem::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QQuickItem::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  event) { QQuickItem::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QQuickItem::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QQuickItem::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QQuickItem::mouseReleaseEvent(event); }
inline void py_q_mouseUngrabEvent() { QQuickItem::mouseUngrabEvent(); }
inline void py_q_releaseResources() { QQuickItem::releaseResources(); }
inline QSGTextureProvider*  py_q_textureProvider() const { return QQuickItem::textureProvider(); }
inline void py_q_touchEvent(QTouchEvent*  event) { QQuickItem::touchEvent(event); }
inline void py_q_touchUngrabEvent() { QQuickItem::touchUngrabEvent(); }
inline QSGNode*  py_q_updatePaintNode(QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2) { return QQuickItem::updatePaintNode(arg__1, arg__2); }
inline void py_q_updatePolish() { QQuickItem::updatePolish(); }
inline void py_q_wheelEvent(QWheelEvent*  event) { QQuickItem::wheelEvent(event); }
inline void py_q_windowDeactivateEvent() { QQuickItem::windowDeactivateEvent(); }
};

class PythonQtWrapper_QQuickItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Flag ItemChange )
enum Flag{
  ItemClipsChildrenToShape = QQuickItem::ItemClipsChildrenToShape,   ItemAcceptsInputMethod = QQuickItem::ItemAcceptsInputMethod,   ItemIsFocusScope = QQuickItem::ItemIsFocusScope,   ItemHasContents = QQuickItem::ItemHasContents,   ItemAcceptsDrops = QQuickItem::ItemAcceptsDrops};
enum ItemChange{
  ItemChildAddedChange = QQuickItem::ItemChildAddedChange,   ItemChildRemovedChange = QQuickItem::ItemChildRemovedChange,   ItemSceneChange = QQuickItem::ItemSceneChange,   ItemVisibleHasChanged = QQuickItem::ItemVisibleHasChanged,   ItemParentHasChanged = QQuickItem::ItemParentHasChanged,   ItemOpacityHasChanged = QQuickItem::ItemOpacityHasChanged,   ItemActiveFocusHasChanged = QQuickItem::ItemActiveFocusHasChanged,   ItemRotationHasChanged = QQuickItem::ItemRotationHasChanged,   ItemAntialiasingHasChanged = QQuickItem::ItemAntialiasingHasChanged,   ItemDevicePixelRatioHasChanged = QQuickItem::ItemDevicePixelRatioHasChanged,   ItemEnabledHasChanged = QQuickItem::ItemEnabledHasChanged};
public slots:
QQuickItem* new_QQuickItem(QQuickItem*  parent = nullptr);
void delete_QQuickItem(QQuickItem* obj) { delete obj; } 
   bool  acceptHoverEvents(QQuickItem* theWrappedObject) const;
   bool  acceptTouchEvents(QQuickItem* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QQuickItem* theWrappedObject) const;
   bool  activeFocusOnTab(QQuickItem* theWrappedObject) const;
   bool  antialiasing(QQuickItem* theWrappedObject) const;
   qreal  baselineOffset(QQuickItem* theWrappedObject) const;
   QRectF  boundingRect(QQuickItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QQuickItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_boundingRect());}
   QQuickItem*  childAt(QQuickItem* theWrappedObject, qreal  x, qreal  y) const;
   QList<QQuickItem* >  childItems(QQuickItem* theWrappedObject) const;
   bool  childMouseEventFilter(QQuickItem* theWrappedObject, QQuickItem*  arg__1, QEvent*  arg__2);
   bool  py_q_childMouseEventFilter(QQuickItem* theWrappedObject, QQuickItem*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_childMouseEventFilter(arg__1, arg__2));}
   QRectF  childrenRect(QQuickItem* theWrappedObject);
   void classBegin(QQuickItem* theWrappedObject);
   void py_q_classBegin(QQuickItem* theWrappedObject){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_classBegin());}
   bool  clip(QQuickItem* theWrappedObject) const;
   QRectF  clipRect(QQuickItem* theWrappedObject) const;
   QRectF  py_q_clipRect(QQuickItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_clipRect());}
   void componentComplete(QQuickItem* theWrappedObject);
   void py_q_componentComplete(QQuickItem* theWrappedObject){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_componentComplete());}
   QObject*  containmentMask(QQuickItem* theWrappedObject) const;
   bool  contains(QQuickItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QQuickItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_contains(point));}
   QCursor  cursor(QQuickItem* theWrappedObject) const;
   void dragEnterEvent(QQuickItem* theWrappedObject, QDragEnterEvent*  arg__1);
   void py_q_dragEnterEvent(QQuickItem* theWrappedObject, QDragEnterEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_dragEnterEvent(arg__1));}
   void dragLeaveEvent(QQuickItem* theWrappedObject, QDragLeaveEvent*  arg__1);
   void py_q_dragLeaveEvent(QQuickItem* theWrappedObject, QDragLeaveEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_dragLeaveEvent(arg__1));}
   void dragMoveEvent(QQuickItem* theWrappedObject, QDragMoveEvent*  arg__1);
   void py_q_dragMoveEvent(QQuickItem* theWrappedObject, QDragMoveEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_dragMoveEvent(arg__1));}
   void dropEvent(QQuickItem* theWrappedObject, QDropEvent*  arg__1);
   void py_q_dropEvent(QQuickItem* theWrappedObject, QDropEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_dropEvent(arg__1));}
   bool  event(QQuickItem* theWrappedObject, QEvent*  arg__1);
   bool  py_q_event(QQuickItem* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_event(arg__1));}
   bool  filtersChildMouseEvents(QQuickItem* theWrappedObject) const;
   void focusInEvent(QQuickItem* theWrappedObject, QFocusEvent*  arg__1);
   void py_q_focusInEvent(QQuickItem* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_focusInEvent(arg__1));}
   void focusOutEvent(QQuickItem* theWrappedObject, QFocusEvent*  arg__1);
   void py_q_focusOutEvent(QQuickItem* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   void forceActiveFocus(QQuickItem* theWrappedObject);
   void forceActiveFocus(QQuickItem* theWrappedObject, Qt::FocusReason  reason);
   void geometryChanged(QQuickItem* theWrappedObject, const QRectF&  newGeometry, const QRectF&  oldGeometry);
   void py_q_geometryChanged(QQuickItem* theWrappedObject, const QRectF&  newGeometry, const QRectF&  oldGeometry){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_geometryChanged(newGeometry, oldGeometry));}
   void grabMouse(QQuickItem* theWrappedObject);
   bool  grabToImage(QQuickItem* theWrappedObject, const QJSValue&  callback, const QSize&  targetSize = QSize());
   void grabTouchPoints(QQuickItem* theWrappedObject, const QVector<int >&  ids);
   bool  hasActiveFocus(QQuickItem* theWrappedObject) const;
   bool  hasFocus(QQuickItem* theWrappedObject) const;
   qreal  height(QQuickItem* theWrappedObject) const;
   bool  heightValid(QQuickItem* theWrappedObject) const;
   void hoverEnterEvent(QQuickItem* theWrappedObject, QHoverEvent*  event);
   void py_q_hoverEnterEvent(QQuickItem* theWrappedObject, QHoverEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_hoverEnterEvent(event));}
   void hoverLeaveEvent(QQuickItem* theWrappedObject, QHoverEvent*  event);
   void py_q_hoverLeaveEvent(QQuickItem* theWrappedObject, QHoverEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void hoverMoveEvent(QQuickItem* theWrappedObject, QHoverEvent*  event);
   void py_q_hoverMoveEvent(QQuickItem* theWrappedObject, QHoverEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   qreal  implicitHeight(QQuickItem* theWrappedObject) const;
   qreal  implicitWidth(QQuickItem* theWrappedObject) const;
   void inputMethodEvent(QQuickItem* theWrappedObject, QInputMethodEvent*  arg__1);
   void py_q_inputMethodEvent(QQuickItem* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   QVariant  inputMethodQuery(QQuickItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  py_q_inputMethodQuery(QQuickItem* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_inputMethodQuery(query));}
   bool  isAncestorOf(QQuickItem* theWrappedObject, const QQuickItem*  child) const;
   bool  isComponentComplete(QQuickItem* theWrappedObject) const;
   bool  isEnabled(QQuickItem* theWrappedObject) const;
   bool  isFocusScope(QQuickItem* theWrappedObject) const;
   bool  isTextureProvider(QQuickItem* theWrappedObject) const;
   bool  py_q_isTextureProvider(QQuickItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_isTextureProvider());}
   bool  isUnderMouse(QQuickItem* theWrappedObject) const;
   bool  isVisible(QQuickItem* theWrappedObject) const;
   QTransform  itemTransform(QQuickItem* theWrappedObject, QQuickItem*  arg__1, bool*  arg__2) const;
   bool  keepMouseGrab(QQuickItem* theWrappedObject) const;
   bool  keepTouchGrab(QQuickItem* theWrappedObject) const;
   void keyPressEvent(QQuickItem* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QQuickItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QQuickItem* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QQuickItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   QPointF  mapFromGlobal(QQuickItem* theWrappedObject, const QPointF&  point) const;
   QPointF  mapFromItem(QQuickItem* theWrappedObject, const QQuickItem*  item, const QPointF&  point) const;
   QPointF  mapFromScene(QQuickItem* theWrappedObject, const QPointF&  point) const;
   QRectF  mapRectFromItem(QQuickItem* theWrappedObject, const QQuickItem*  item, const QRectF&  rect) const;
   QRectF  mapRectFromScene(QQuickItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectToItem(QQuickItem* theWrappedObject, const QQuickItem*  item, const QRectF&  rect) const;
   QRectF  mapRectToScene(QQuickItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToGlobal(QQuickItem* theWrappedObject, const QPointF&  point) const;
   QPointF  mapToItem(QQuickItem* theWrappedObject, const QQuickItem*  item, const QPointF&  point) const;
   QPointF  mapToScene(QQuickItem* theWrappedObject, const QPointF&  point) const;
   void mouseDoubleClickEvent(QQuickItem* theWrappedObject, QMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QQuickItem* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void mouseMoveEvent(QQuickItem* theWrappedObject, QMouseEvent*  event);
   void py_q_mouseMoveEvent(QQuickItem* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QQuickItem* theWrappedObject, QMouseEvent*  event);
   void py_q_mousePressEvent(QQuickItem* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QQuickItem* theWrappedObject, QMouseEvent*  event);
   void py_q_mouseReleaseEvent(QQuickItem* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void mouseUngrabEvent(QQuickItem* theWrappedObject);
   void py_q_mouseUngrabEvent(QQuickItem* theWrappedObject){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_mouseUngrabEvent());}
   QQuickItem*  nextItemInFocusChain(QQuickItem* theWrappedObject, bool  forward = true);
   qreal  opacity(QQuickItem* theWrappedObject) const;
   QQuickItem*  parentItem(QQuickItem* theWrappedObject) const;
   void polish(QQuickItem* theWrappedObject);
   QPointF  position(QQuickItem* theWrappedObject) const;
   void releaseResources(QQuickItem* theWrappedObject);
   void py_q_releaseResources(QQuickItem* theWrappedObject){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_releaseResources());}
   void resetAntialiasing(QQuickItem* theWrappedObject);
   void resetHeight(QQuickItem* theWrappedObject);
   void resetWidth(QQuickItem* theWrappedObject);
   qreal  rotation(QQuickItem* theWrappedObject) const;
   qreal  scale(QQuickItem* theWrappedObject) const;
   QQuickItem*  scopedFocusItem(QQuickItem* theWrappedObject) const;
   void setAcceptHoverEvents(QQuickItem* theWrappedObject, bool  enabled);
   void setAcceptTouchEvents(QQuickItem* theWrappedObject, bool  accept);
   void setAcceptedMouseButtons(QQuickItem* theWrappedObject, Qt::MouseButtons  buttons);
   void setActiveFocusOnTab(QQuickItem* theWrappedObject, bool  arg__1);
   void setAntialiasing(QQuickItem* theWrappedObject, bool  arg__1);
   void setBaselineOffset(QQuickItem* theWrappedObject, qreal  arg__1);
   void setClip(QQuickItem* theWrappedObject, bool  arg__1);
   void setContainmentMask(QQuickItem* theWrappedObject, QObject*  mask);
   void setCursor(QQuickItem* theWrappedObject, const QCursor&  cursor);
   void setEnabled(QQuickItem* theWrappedObject, bool  arg__1);
   void setFiltersChildMouseEvents(QQuickItem* theWrappedObject, bool  filter);
   void setFlag(QQuickItem* theWrappedObject, QQuickItem::Flag  flag, bool  enabled = true);
   void setFocus(QQuickItem* theWrappedObject, bool  arg__1);
   void setFocus(QQuickItem* theWrappedObject, bool  focus, Qt::FocusReason  reason);
   void setHeight(QQuickItem* theWrappedObject, qreal  arg__1);
   void setImplicitHeight(QQuickItem* theWrappedObject, qreal  arg__1);
   void setImplicitSize(QQuickItem* theWrappedObject, qreal  arg__1, qreal  arg__2);
   void setImplicitWidth(QQuickItem* theWrappedObject, qreal  arg__1);
   void setKeepMouseGrab(QQuickItem* theWrappedObject, bool  arg__1);
   void setKeepTouchGrab(QQuickItem* theWrappedObject, bool  arg__1);
   void setOpacity(QQuickItem* theWrappedObject, qreal  arg__1);
   void setParentItem(QQuickItem* theWrappedObject, QQuickItem*  parent);
   void setPosition(QQuickItem* theWrappedObject, const QPointF&  arg__1);
   void setRotation(QQuickItem* theWrappedObject, qreal  arg__1);
   void setScale(QQuickItem* theWrappedObject, qreal  arg__1);
   void setSize(QQuickItem* theWrappedObject, const QSizeF&  size);
   void setSmooth(QQuickItem* theWrappedObject, bool  arg__1);
   void setState(QQuickItem* theWrappedObject, const QString&  arg__1);
   void setTransformOrigin(QQuickItem* theWrappedObject, QQuickItem::TransformOrigin  arg__1);
   void setTransformOriginPoint(QQuickItem* theWrappedObject, const QPointF&  arg__1);
   void setVisible(QQuickItem* theWrappedObject, bool  arg__1);
   void setWidth(QQuickItem* theWrappedObject, qreal  arg__1);
   void setX(QQuickItem* theWrappedObject, qreal  arg__1);
   void setY(QQuickItem* theWrappedObject, qreal  arg__1);
   void setZ(QQuickItem* theWrappedObject, qreal  arg__1);
   QSizeF  size(QQuickItem* theWrappedObject) const;
   bool  smooth(QQuickItem* theWrappedObject) const;
   void stackAfter(QQuickItem* theWrappedObject, const QQuickItem*  arg__1);
   void stackBefore(QQuickItem* theWrappedObject, const QQuickItem*  arg__1);
   QString  state(QQuickItem* theWrappedObject) const;
   QSGTextureProvider*  textureProvider(QQuickItem* theWrappedObject) const;
   QSGTextureProvider*  py_q_textureProvider(QQuickItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_textureProvider());}
   void touchEvent(QQuickItem* theWrappedObject, QTouchEvent*  event);
   void py_q_touchEvent(QQuickItem* theWrappedObject, QTouchEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_touchEvent(event));}
   void touchUngrabEvent(QQuickItem* theWrappedObject);
   void py_q_touchUngrabEvent(QQuickItem* theWrappedObject){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_touchUngrabEvent());}
   QQuickItem::TransformOrigin  transformOrigin(QQuickItem* theWrappedObject) const;
   QPointF  transformOriginPoint(QQuickItem* theWrappedObject) const;
   void ungrabMouse(QQuickItem* theWrappedObject);
   void ungrabTouchPoints(QQuickItem* theWrappedObject);
   void unsetCursor(QQuickItem* theWrappedObject);
   void updateInputMethod(QQuickItem* theWrappedObject, Qt::InputMethodQueries  queries = Qt::ImQueryInput);
   QSGNode*  updatePaintNode(QQuickItem* theWrappedObject, QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2);
   QSGNode*  py_q_updatePaintNode(QQuickItem* theWrappedObject, QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2){  return (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_updatePaintNode(arg__1, arg__2));}
   void updatePolish(QQuickItem* theWrappedObject);
   void py_q_updatePolish(QQuickItem* theWrappedObject){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_updatePolish());}
   void wheelEvent(QQuickItem* theWrappedObject, QWheelEvent*  event);
   void py_q_wheelEvent(QQuickItem* theWrappedObject, QWheelEvent*  event){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_wheelEvent(event));}
   qreal  width(QQuickItem* theWrappedObject) const;
   bool  widthValid(QQuickItem* theWrappedObject) const;
   QQuickWindow*  window(QQuickItem* theWrappedObject) const;
   void windowDeactivateEvent(QQuickItem* theWrappedObject);
   void py_q_windowDeactivateEvent(QQuickItem* theWrappedObject){  (((PythonQtPublicPromoter_QQuickItem*)theWrappedObject)->py_q_windowDeactivateEvent());}
   qreal  x(QQuickItem* theWrappedObject) const;
   qreal  y(QQuickItem* theWrappedObject) const;
   qreal  z(QQuickItem* theWrappedObject) const;
    QString py_toString(QQuickItem*);
};





class PythonQtPublicPromoter_QQuickItemGrabResult : public QQuickItemGrabResult
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QQuickItemGrabResult::event(arg__1); }
};

class PythonQtWrapper_QQuickItemGrabResult : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QQuickItemGrabResult(QQuickItemGrabResult* obj) { delete obj; } 
   bool  py_q_event(QQuickItemGrabResult* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QQuickItemGrabResult*)theWrappedObject)->py_q_event(arg__1));}
   QImage  image(QQuickItemGrabResult* theWrappedObject) const;
   bool  saveToFile(QQuickItemGrabResult* theWrappedObject, const QString&  fileName);
   bool  saveToFile(QQuickItemGrabResult* theWrappedObject, const QString&  fileName) const;
   QUrl  url(QQuickItemGrabResult* theWrappedObject) const;
};





class PythonQtWrapper_QQuickItem__UpdatePaintNodeData : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QQuickItem__UpdatePaintNodeData(QQuickItem::UpdatePaintNodeData* obj) { delete obj; } 
void py_set_transformNode(QQuickItem::UpdatePaintNodeData* theWrappedObject, QSGTransformNode*  transformNode){ theWrappedObject->transformNode = transformNode; }
QSGTransformNode*  py_get_transformNode(QQuickItem::UpdatePaintNodeData* theWrappedObject){ return theWrappedObject->transformNode; }
};





class PythonQtShell_QQuickPaintedItem : public QQuickPaintedItem
{
public:
    PythonQtShell_QQuickPaintedItem(QQuickItem*  parent = nullptr):QQuickPaintedItem(parent),_wrapper(NULL) {};

   ~PythonQtShell_QQuickPaintedItem();

virtual QRectF  boundingRect() const;
virtual bool  childMouseEventFilter(QQuickItem*  arg__1, QEvent*  arg__2);
virtual void classBegin();
virtual QRectF  clipRect() const;
virtual void componentComplete();
virtual bool  contains(const QPointF&  point) const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void geometryChanged(const QRectF&  newGeometry, const QRectF&  oldGeometry);
virtual void hoverEnterEvent(QHoverEvent*  event);
virtual void hoverLeaveEvent(QHoverEvent*  event);
virtual void hoverMoveEvent(QHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isTextureProvider() const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void mouseUngrabEvent();
virtual void paint(QPainter*  painter);
virtual void releaseResources();
virtual QSGTextureProvider*  textureProvider() const;
virtual void touchEvent(QTouchEvent*  event);
virtual void touchUngrabEvent();
virtual QSGNode*  updatePaintNode(QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2);
virtual void updatePolish();
virtual void wheelEvent(QWheelEvent*  event);
virtual void windowDeactivateEvent();

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQuickPaintedItem : public QQuickPaintedItem
{ public:
inline void promoted_releaseResources() { this->releaseResources(); }
inline QSGNode*  promoted_updatePaintNode(QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2) { return this->updatePaintNode(arg__1, arg__2); }
inline bool  py_q_isTextureProvider() const { return QQuickPaintedItem::isTextureProvider(); }
inline void py_q_paint(QPainter*  painter) { this->paint(painter); }
inline void py_q_releaseResources() { QQuickPaintedItem::releaseResources(); }
inline QSGTextureProvider*  py_q_textureProvider() const { return QQuickPaintedItem::textureProvider(); }
inline QSGNode*  py_q_updatePaintNode(QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2) { return QQuickPaintedItem::updatePaintNode(arg__1, arg__2); }
};

class PythonQtWrapper_QQuickPaintedItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PerformanceHint )
enum PerformanceHint{
  FastFBOResizing = QQuickPaintedItem::FastFBOResizing};
public slots:
QQuickPaintedItem* new_QQuickPaintedItem(QQuickItem*  parent = nullptr);
void delete_QQuickPaintedItem(QQuickPaintedItem* obj) { delete obj; } 
   bool  antialiasing(QQuickPaintedItem* theWrappedObject) const;
   QRectF  contentsBoundingRect(QQuickPaintedItem* theWrappedObject) const;
   qreal  contentsScale(QQuickPaintedItem* theWrappedObject) const;
   QSize  contentsSize(QQuickPaintedItem* theWrappedObject) const;
   QColor  fillColor(QQuickPaintedItem* theWrappedObject) const;
   bool  py_q_isTextureProvider(QQuickPaintedItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickPaintedItem*)theWrappedObject)->py_q_isTextureProvider());}
   bool  mipmap(QQuickPaintedItem* theWrappedObject) const;
   bool  opaquePainting(QQuickPaintedItem* theWrappedObject) const;
   void paint(QQuickPaintedItem* theWrappedObject, QPainter*  painter);
   void py_q_paint(QQuickPaintedItem* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QQuickPaintedItem*)theWrappedObject)->py_q_paint(painter));}
   void py_q_releaseResources(QQuickPaintedItem* theWrappedObject){  (((PythonQtPublicPromoter_QQuickPaintedItem*)theWrappedObject)->py_q_releaseResources());}
   QQuickPaintedItem::RenderTarget  renderTarget(QQuickPaintedItem* theWrappedObject) const;
   void resetContentsSize(QQuickPaintedItem* theWrappedObject);
   void setAntialiasing(QQuickPaintedItem* theWrappedObject, bool  enable);
   void setContentsScale(QQuickPaintedItem* theWrappedObject, qreal  arg__1);
   void setContentsSize(QQuickPaintedItem* theWrappedObject, const QSize&  arg__1);
   void setFillColor(QQuickPaintedItem* theWrappedObject, const QColor&  arg__1);
   void setMipmap(QQuickPaintedItem* theWrappedObject, bool  enable);
   void setOpaquePainting(QQuickPaintedItem* theWrappedObject, bool  opaque);
   void setPerformanceHint(QQuickPaintedItem* theWrappedObject, QQuickPaintedItem::PerformanceHint  hint, bool  enabled = true);
   void setRenderTarget(QQuickPaintedItem* theWrappedObject, QQuickPaintedItem::RenderTarget  target);
   void setTextureSize(QQuickPaintedItem* theWrappedObject, const QSize&  size);
   QSGTextureProvider*  py_q_textureProvider(QQuickPaintedItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickPaintedItem*)theWrappedObject)->py_q_textureProvider());}
   QSize  textureSize(QQuickPaintedItem* theWrappedObject) const;
   void update(QQuickPaintedItem* theWrappedObject, const QRect&  rect = QRect());
   QSGNode*  py_q_updatePaintNode(QQuickPaintedItem* theWrappedObject, QSGNode*  arg__1, QQuickItem::UpdatePaintNodeData*  arg__2){  return (((PythonQtPublicPromoter_QQuickPaintedItem*)theWrappedObject)->py_q_updatePaintNode(arg__1, arg__2));}
};





class PythonQtShell_QQuickRenderControl : public QQuickRenderControl
{
public:
    PythonQtShell_QQuickRenderControl(QObject*  parent = nullptr):QQuickRenderControl(parent),_wrapper(NULL) {};

   ~PythonQtShell_QQuickRenderControl();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QWindow*  renderWindow(QPoint*  offset);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQuickRenderControl : public QQuickRenderControl
{ public:
inline QWindow*  py_q_renderWindow(QPoint*  offset) { return QQuickRenderControl::renderWindow(offset); }
};

class PythonQtWrapper_QQuickRenderControl : public QObject
{ Q_OBJECT
public:
public slots:
QQuickRenderControl* new_QQuickRenderControl(QObject*  parent = nullptr);
void delete_QQuickRenderControl(QQuickRenderControl* obj) { delete obj; } 
   QImage  grab(QQuickRenderControl* theWrappedObject);
   void initialize(QQuickRenderControl* theWrappedObject, QOpenGLContext*  gl);
   void invalidate(QQuickRenderControl* theWrappedObject);
   void polishItems(QQuickRenderControl* theWrappedObject);
   void prepareThread(QQuickRenderControl* theWrappedObject, QThread*  targetThread);
   void render(QQuickRenderControl* theWrappedObject);
   QWindow*  renderWindow(QQuickRenderControl* theWrappedObject, QPoint*  offset);
   QWindow*  py_q_renderWindow(QQuickRenderControl* theWrappedObject, QPoint*  offset){  return (((PythonQtPublicPromoter_QQuickRenderControl*)theWrappedObject)->py_q_renderWindow(offset));}
   QWindow*  static_QQuickRenderControl_renderWindowFor(QQuickWindow*  win, QPoint*  offset = nullptr);
   bool  sync(QQuickRenderControl* theWrappedObject);
};





class PythonQtShell_QQuickTextDocument : public QQuickTextDocument
{
public:
    PythonQtShell_QQuickTextDocument(QQuickItem*  parent):QQuickTextDocument(parent),_wrapper(NULL) {};

   ~PythonQtShell_QQuickTextDocument();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QQuickTextDocument : public QObject
{ Q_OBJECT
public:
public slots:
QQuickTextDocument* new_QQuickTextDocument(QQuickItem*  parent);
void delete_QQuickTextDocument(QQuickTextDocument* obj) { delete obj; } 
   QTextDocument*  textDocument(QQuickTextDocument* theWrappedObject) const;
};





class PythonQtShell_QQuickTransform : public QQuickTransform
{
public:
    PythonQtShell_QQuickTransform(QObject*  parent = nullptr):QQuickTransform(parent),_wrapper(NULL) {};

   ~PythonQtShell_QQuickTransform();

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQuickTransform : public QQuickTransform
{ public:
inline void promoted_update() { this->update(); }
inline void py_q_applyTo(QMatrix4x4*  matrix) const { this->applyTo(matrix); }
};

class PythonQtWrapper_QQuickTransform : public QObject
{ Q_OBJECT
public:
public slots:
QQuickTransform* new_QQuickTransform(QObject*  parent = nullptr);
void delete_QQuickTransform(QQuickTransform* obj) { delete obj; } 
   void appendToItem(QQuickTransform* theWrappedObject, QQuickItem*  arg__1);
   void applyTo(QQuickTransform* theWrappedObject, QMatrix4x4*  matrix) const;
   void py_q_applyTo(QQuickTransform* theWrappedObject, QMatrix4x4*  matrix) const{  (((PythonQtPublicPromoter_QQuickTransform*)theWrappedObject)->py_q_applyTo(matrix));}
   void prependToItem(QQuickTransform* theWrappedObject, QQuickItem*  arg__1);
};





class PythonQtShell_QQuickView : public QQuickView
{
public:
    PythonQtShell_QQuickView(QQmlEngine*  engine, QWindow*  parent):QQuickView(engine, parent),_wrapper(NULL) {};
    PythonQtShell_QQuickView(QWindow*  parent = nullptr):QQuickView(parent),_wrapper(NULL) {};
    PythonQtShell_QQuickView(const QUrl&  source, QQuickRenderControl*  renderControl):QQuickView(source, renderControl),_wrapper(NULL) {};
    PythonQtShell_QQuickView(const QUrl&  source, QWindow*  parent = nullptr):QQuickView(source, parent),_wrapper(NULL) {};

   ~PythonQtShell_QQuickView();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void exposeEvent(QExposeEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QObject*  focusObject() const;
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QSurfaceFormat  format() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  size() const;
virtual QSurface::SurfaceType  surfaceType() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void touchEvent(QTouchEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQuickView : public QQuickView
{ public:
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { this->keyReleaseEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QQuickView::keyPressEvent(arg__1); }
inline void py_q_keyReleaseEvent(QKeyEvent*  arg__1) { QQuickView::keyReleaseEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QQuickView::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QQuickView::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QQuickView::mouseReleaseEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QQuickView::resizeEvent(arg__1); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QQuickView::timerEvent(arg__1); }
};

class PythonQtWrapper_QQuickView : public QObject
{ Q_OBJECT
public:
public slots:
QQuickView* new_QQuickView(QQmlEngine*  engine, QWindow*  parent);
QQuickView* new_QQuickView(QWindow*  parent = nullptr);
QQuickView* new_QQuickView(const QUrl&  source, QQuickRenderControl*  renderControl);
QQuickView* new_QQuickView(const QUrl&  source, QWindow*  parent = nullptr);
void delete_QQuickView(QQuickView* obj) { delete obj; } 
   QQmlEngine*  engine(QQuickView* theWrappedObject) const;
   QList<QQmlError >  errors(QQuickView* theWrappedObject) const;
   QSize  initialSize(QQuickView* theWrappedObject) const;
   void py_q_keyPressEvent(QQuickView* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickView*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_keyReleaseEvent(QQuickView* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickView*)theWrappedObject)->py_q_keyReleaseEvent(arg__1));}
   void py_q_mouseMoveEvent(QQuickView* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickView*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QQuickView* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickView*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QQuickView* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickView*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_resizeEvent(QQuickView* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickView*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   QQuickView::ResizeMode  resizeMode(QQuickView* theWrappedObject) const;
   QQmlContext*  rootContext(QQuickView* theWrappedObject) const;
   QQuickItem*  rootObject(QQuickView* theWrappedObject) const;
   void setResizeMode(QQuickView* theWrappedObject, QQuickView::ResizeMode  arg__1);
   QSize  sizeHint(QQuickView* theWrappedObject) const;
   QUrl  source(QQuickView* theWrappedObject) const;
   QQuickView::Status  status(QQuickView* theWrappedObject) const;
   void py_q_timerEvent(QQuickView* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickView*)theWrappedObject)->py_q_timerEvent(arg__1));}
};





class PythonQtShell_QQuickWidget : public QQuickWidget
{
public:
    PythonQtShell_QQuickWidget(QQmlEngine*  engine, QWidget*  parent):QQuickWidget(engine, parent),_wrapper(NULL) {};
    PythonQtShell_QQuickWidget(QWidget*  parent = nullptr):QQuickWidget(parent),_wrapper(NULL) {};
    PythonQtShell_QQuickWidget(const QUrl&  source, QWidget*  parent = nullptr):QQuickWidget(source, parent),_wrapper(NULL) {};

   ~PythonQtShell_QQuickWidget();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
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
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQuickWidget : public QQuickWidget
{ public:
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { this->dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { this->dragLeaveEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { this->dragMoveEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { this->dropEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { this->keyReleaseEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { this->mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { this->wheelEvent(arg__1); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  arg__1) { QQuickWidget::dragEnterEvent(arg__1); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QQuickWidget::dragLeaveEvent(arg__1); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  arg__1) { QQuickWidget::dragMoveEvent(arg__1); }
inline void py_q_dropEvent(QDropEvent*  arg__1) { QQuickWidget::dropEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QQuickWidget::event(arg__1); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QQuickWidget::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QQuickWidget::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QQuickWidget::focusOutEvent(event); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QQuickWidget::hideEvent(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QQuickWidget::keyPressEvent(arg__1); }
inline void py_q_keyReleaseEvent(QKeyEvent*  arg__1) { QQuickWidget::keyReleaseEvent(arg__1); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QQuickWidget::mouseDoubleClickEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QQuickWidget::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QQuickWidget::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QQuickWidget::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  event) { QQuickWidget::paintEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QQuickWidget::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QQuickWidget::showEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QQuickWidget::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QQuickWidget::timerEvent(arg__1); }
inline void py_q_wheelEvent(QWheelEvent*  arg__1) { QQuickWidget::wheelEvent(arg__1); }
};

class PythonQtWrapper_QQuickWidget : public QObject
{ Q_OBJECT
public:
public slots:
QQuickWidget* new_QQuickWidget(QQmlEngine*  engine, QWidget*  parent);
QQuickWidget* new_QQuickWidget(QWidget*  parent = nullptr);
QQuickWidget* new_QQuickWidget(const QUrl&  source, QWidget*  parent = nullptr);
void delete_QQuickWidget(QQuickWidget* obj) { delete obj; } 
   void py_q_dragEnterEvent(QQuickWidget* theWrappedObject, QDragEnterEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_dragEnterEvent(arg__1));}
   void py_q_dragLeaveEvent(QQuickWidget* theWrappedObject, QDragLeaveEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_dragLeaveEvent(arg__1));}
   void py_q_dragMoveEvent(QQuickWidget* theWrappedObject, QDragMoveEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_dragMoveEvent(arg__1));}
   void py_q_dropEvent(QQuickWidget* theWrappedObject, QDropEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_dropEvent(arg__1));}
   QQmlEngine*  engine(QQuickWidget* theWrappedObject) const;
   QList<QQmlError >  errors(QQuickWidget* theWrappedObject) const;
   bool  py_q_event(QQuickWidget* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_event(arg__1));}
   void py_q_focusInEvent(QQuickWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  py_q_focusNextPrevChild(QQuickWidget* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QQuickWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_focusOutEvent(event));}
   QSurfaceFormat  format(QQuickWidget* theWrappedObject) const;
   QImage  grabFramebuffer(QQuickWidget* theWrappedObject) const;
   void py_q_hideEvent(QQuickWidget* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_hideEvent(arg__1));}
   QSize  initialSize(QQuickWidget* theWrappedObject) const;
   void py_q_keyPressEvent(QQuickWidget* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_keyReleaseEvent(QQuickWidget* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_keyReleaseEvent(arg__1));}
   void py_q_mouseDoubleClickEvent(QQuickWidget* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_mouseDoubleClickEvent(arg__1));}
   void py_q_mouseMoveEvent(QQuickWidget* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QQuickWidget* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QQuickWidget* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_paintEvent(QQuickWidget* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_paintEvent(event));}
   QQuickWindow*  quickWindow(QQuickWidget* theWrappedObject) const;
   void py_q_resizeEvent(QQuickWidget* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   QQuickWidget::ResizeMode  resizeMode(QQuickWidget* theWrappedObject) const;
   QQmlContext*  rootContext(QQuickWidget* theWrappedObject) const;
   QQuickItem*  rootObject(QQuickWidget* theWrappedObject) const;
   void setClearColor(QQuickWidget* theWrappedObject, const QColor&  color);
   void setFormat(QQuickWidget* theWrappedObject, const QSurfaceFormat&  format);
   void setResizeMode(QQuickWidget* theWrappedObject, QQuickWidget::ResizeMode  arg__1);
   void py_q_showEvent(QQuickWidget* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  sizeHint(QQuickWidget* theWrappedObject) const;
   QSize  py_q_sizeHint(QQuickWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_sizeHint());}
   QUrl  source(QQuickWidget* theWrappedObject) const;
   QQuickWidget::Status  status(QQuickWidget* theWrappedObject) const;
   void py_q_timerEvent(QQuickWidget* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_timerEvent(arg__1));}
   void py_q_wheelEvent(QQuickWidget* theWrappedObject, QWheelEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWidget*)theWrappedObject)->py_q_wheelEvent(arg__1));}
};





class PythonQtShell_QQuickWindow : public QQuickWindow
{
public:
    PythonQtShell_QQuickWindow(QQuickRenderControl*  renderControl):QQuickWindow(renderControl),_wrapper(NULL) {};
    PythonQtShell_QQuickWindow(QWindow*  parent = nullptr):QQuickWindow(parent),_wrapper(NULL) {};

   ~PythonQtShell_QQuickWindow();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void exposeEvent(QExposeEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QObject*  focusObject() const;
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QSurfaceFormat  format() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  size() const;
virtual QSurface::SurfaceType  surfaceType() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual void touchEvent(QTouchEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QQuickWindow : public QQuickWindow
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_exposeEvent(QExposeEvent*  arg__1) { this->exposeEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { this->focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { this->keyReleaseEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { this->mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { this->wheelEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QQuickWindow::event(arg__1); }
inline void py_q_exposeEvent(QExposeEvent*  arg__1) { QQuickWindow::exposeEvent(arg__1); }
inline void py_q_focusInEvent(QFocusEvent*  arg__1) { QQuickWindow::focusInEvent(arg__1); }
inline QObject*  py_q_focusObject() const { return QQuickWindow::focusObject(); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QQuickWindow::focusOutEvent(arg__1); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QQuickWindow::hideEvent(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QQuickWindow::keyPressEvent(arg__1); }
inline void py_q_keyReleaseEvent(QKeyEvent*  arg__1) { QQuickWindow::keyReleaseEvent(arg__1); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QQuickWindow::mouseDoubleClickEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QQuickWindow::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QQuickWindow::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QQuickWindow::mouseReleaseEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QQuickWindow::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QQuickWindow::showEvent(arg__1); }
inline void py_q_wheelEvent(QWheelEvent*  arg__1) { QQuickWindow::wheelEvent(arg__1); }
};

class PythonQtWrapper_QQuickWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CreateTextureOption RenderStage )
enum CreateTextureOption{
  TextureHasAlphaChannel = QQuickWindow::TextureHasAlphaChannel,   TextureHasMipmaps = QQuickWindow::TextureHasMipmaps,   TextureOwnsGLTexture = QQuickWindow::TextureOwnsGLTexture,   TextureCanUseAtlas = QQuickWindow::TextureCanUseAtlas,   TextureIsOpaque = QQuickWindow::TextureIsOpaque};
enum RenderStage{
  BeforeSynchronizingStage = QQuickWindow::BeforeSynchronizingStage,   AfterSynchronizingStage = QQuickWindow::AfterSynchronizingStage,   BeforeRenderingStage = QQuickWindow::BeforeRenderingStage,   AfterRenderingStage = QQuickWindow::AfterRenderingStage,   AfterSwapStage = QQuickWindow::AfterSwapStage,   NoStage = QQuickWindow::NoStage};
public slots:
QQuickWindow* new_QQuickWindow(QQuickRenderControl*  renderControl);
QQuickWindow* new_QQuickWindow(QWindow*  parent = nullptr);
void delete_QQuickWindow(QQuickWindow* obj) { delete obj; } 
   QQuickItem*  activeFocusItem(QQuickWindow* theWrappedObject) const;
   bool  clearBeforeRendering(QQuickWindow* theWrappedObject) const;
   QColor  color(QQuickWindow* theWrappedObject) const;
   QQuickItem*  contentItem(QQuickWindow* theWrappedObject) const;
   QSGImageNode*  createImageNode(QQuickWindow* theWrappedObject) const;
   QSGNinePatchNode*  createNinePatchNode(QQuickWindow* theWrappedObject) const;
   QSGRectangleNode*  createRectangleNode(QQuickWindow* theWrappedObject) const;
   QSGTexture*  createTextureFromImage(QQuickWindow* theWrappedObject, const QImage&  image) const;
   qreal  effectiveDevicePixelRatio(QQuickWindow* theWrappedObject) const;
   bool  py_q_event(QQuickWindow* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_event(arg__1));}
   void py_q_exposeEvent(QQuickWindow* theWrappedObject, QExposeEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_exposeEvent(arg__1));}
   void py_q_focusInEvent(QQuickWindow* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_focusInEvent(arg__1));}
   QObject*  py_q_focusObject(QQuickWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_focusObject());}
   void py_q_focusOutEvent(QQuickWindow* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   QImage  grabWindow(QQuickWindow* theWrappedObject);
   bool  static_QQuickWindow_hasDefaultAlphaBuffer();
   void py_q_hideEvent(QQuickWindow* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_hideEvent(arg__1));}
   QQmlIncubationController*  incubationController(QQuickWindow* theWrappedObject) const;
   bool  isPersistentOpenGLContext(QQuickWindow* theWrappedObject) const;
   bool  isPersistentSceneGraph(QQuickWindow* theWrappedObject) const;
   bool  isSceneGraphInitialized(QQuickWindow* theWrappedObject) const;
   void py_q_keyPressEvent(QQuickWindow* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_keyReleaseEvent(QQuickWindow* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_keyReleaseEvent(arg__1));}
   void py_q_mouseDoubleClickEvent(QQuickWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_mouseDoubleClickEvent(arg__1));}
   QQuickItem*  mouseGrabberItem(QQuickWindow* theWrappedObject) const;
   void py_q_mouseMoveEvent(QQuickWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QQuickWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QQuickWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   QOpenGLContext*  openglContext(QQuickWindow* theWrappedObject) const;
   QOpenGLFramebufferObject*  renderTarget(QQuickWindow* theWrappedObject) const;
   uint  renderTargetId(QQuickWindow* theWrappedObject) const;
   QSize  renderTargetSize(QQuickWindow* theWrappedObject) const;
   void resetOpenGLState(QQuickWindow* theWrappedObject);
   void py_q_resizeEvent(QQuickWindow* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   QString  static_QQuickWindow_sceneGraphBackend();
   void scheduleRenderJob(QQuickWindow* theWrappedObject, QRunnable*  job, QQuickWindow::RenderStage  schedule);
   bool  sendEvent(QQuickWindow* theWrappedObject, QQuickItem*  arg__1, QEvent*  arg__2);
   void setClearBeforeRendering(QQuickWindow* theWrappedObject, bool  enabled);
   void setColor(QQuickWindow* theWrappedObject, const QColor&  color);
   void static_QQuickWindow_setDefaultAlphaBuffer(bool  useAlpha);
   void setPersistentOpenGLContext(QQuickWindow* theWrappedObject, bool  persistent);
   void setPersistentSceneGraph(QQuickWindow* theWrappedObject, bool  persistent);
   void setRenderTarget(QQuickWindow* theWrappedObject, QOpenGLFramebufferObject*  fbo);
   void setRenderTarget(QQuickWindow* theWrappedObject, uint  fboId, const QSize&  size);
   void static_QQuickWindow_setSceneGraphBackend(const QString&  backend);
   void static_QQuickWindow_setTextRenderType(QQuickWindow::TextRenderType  renderType);
   void py_q_showEvent(QQuickWindow* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_showEvent(arg__1));}
   QQuickWindow::TextRenderType  static_QQuickWindow_textRenderType();
   void py_q_wheelEvent(QQuickWindow* theWrappedObject, QWheelEvent*  arg__1){  (((PythonQtPublicPromoter_QQuickWindow*)theWrappedObject)->py_q_wheelEvent(arg__1));}
    QString py_toString(QQuickWindow*);
};





class PythonQtShell_QSGAbstractRenderer : public QSGAbstractRenderer
{
public:
    PythonQtShell_QSGAbstractRenderer(QObject*  parent = nullptr):QSGAbstractRenderer(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSGAbstractRenderer();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void nodeChanged(QSGNode*  node, QSGNode::DirtyState  state);
virtual void renderScene(uint  fboId = 0);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSGAbstractRenderer : public QSGAbstractRenderer
{ public:
inline void promoted_nodeChanged(QSGNode*  node, QSGNode::DirtyState  state) { this->nodeChanged(node, state); }
inline void py_q_nodeChanged(QSGNode*  node, QSGNode::DirtyState  state) { this->nodeChanged(node, state); }
inline void py_q_renderScene(uint  fboId = 0) { this->renderScene(fboId); }
};

class PythonQtWrapper_QSGAbstractRenderer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ClearModeBit )
enum ClearModeBit{
  ClearColorBuffer = QSGAbstractRenderer::ClearColorBuffer,   ClearDepthBuffer = QSGAbstractRenderer::ClearDepthBuffer,   ClearStencilBuffer = QSGAbstractRenderer::ClearStencilBuffer};
public slots:
QSGAbstractRenderer* new_QSGAbstractRenderer(QObject*  parent = nullptr);
void delete_QSGAbstractRenderer(QSGAbstractRenderer* obj) { delete obj; } 
   QColor  clearColor(QSGAbstractRenderer* theWrappedObject) const;
   QRect  deviceRect(QSGAbstractRenderer* theWrappedObject) const;
   void nodeChanged(QSGAbstractRenderer* theWrappedObject, QSGNode*  node, QSGNode::DirtyState  state);
   void py_q_nodeChanged(QSGAbstractRenderer* theWrappedObject, QSGNode*  node, QSGNode::DirtyState  state){  (((PythonQtPublicPromoter_QSGAbstractRenderer*)theWrappedObject)->py_q_nodeChanged(node, state));}
   QMatrix4x4  projectionMatrix(QSGAbstractRenderer* theWrappedObject) const;
   void renderScene(QSGAbstractRenderer* theWrappedObject, uint  fboId = 0);
   void py_q_renderScene(QSGAbstractRenderer* theWrappedObject, uint  fboId = 0){  (((PythonQtPublicPromoter_QSGAbstractRenderer*)theWrappedObject)->py_q_renderScene(fboId));}
   QSGRootNode*  rootNode(QSGAbstractRenderer* theWrappedObject) const;
   void setClearColor(QSGAbstractRenderer* theWrappedObject, const QColor&  color);
   void setDeviceRect(QSGAbstractRenderer* theWrappedObject, const QRect&  rect);
   void setDeviceRect(QSGAbstractRenderer* theWrappedObject, const QSize&  size);
   void setProjectionMatrix(QSGAbstractRenderer* theWrappedObject, const QMatrix4x4&  matrix);
   void setProjectionMatrixToRect(QSGAbstractRenderer* theWrappedObject, const QRectF&  rect);
   void setRootNode(QSGAbstractRenderer* theWrappedObject, QSGRootNode*  node);
   void setViewportRect(QSGAbstractRenderer* theWrappedObject, const QRect&  rect);
   void setViewportRect(QSGAbstractRenderer* theWrappedObject, const QSize&  size);
   QRect  viewportRect(QSGAbstractRenderer* theWrappedObject) const;
};





class PythonQtShell_QSGBasicGeometryNode : public QSGBasicGeometryNode
{
public:
    PythonQtShell_QSGBasicGeometryNode(QSGNode::NodeType  type):QSGBasicGeometryNode(type),_wrapper(NULL) {};

   ~PythonQtShell_QSGBasicGeometryNode();

virtual bool  isSubtreeBlocked() const;
virtual void preprocess();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGBasicGeometryNode : public QObject
{ Q_OBJECT
public:
public slots:
QSGBasicGeometryNode* new_QSGBasicGeometryNode(QSGNode::NodeType  type);
void delete_QSGBasicGeometryNode(QSGBasicGeometryNode* obj) { delete obj; } 
   const QSGClipNode*  clipList(QSGBasicGeometryNode* theWrappedObject) const;
   QSGGeometry*  geometry(QSGBasicGeometryNode* theWrappedObject);
   const QSGGeometry*  geometry(QSGBasicGeometryNode* theWrappedObject) const;
   const QMatrix4x4*  matrix(QSGBasicGeometryNode* theWrappedObject) const;
   void setGeometry(QSGBasicGeometryNode* theWrappedObject, QSGGeometry*  geometry);
   void setRendererClipList(QSGBasicGeometryNode* theWrappedObject, const QSGClipNode*  c);
   void setRendererMatrix(QSGBasicGeometryNode* theWrappedObject, const QMatrix4x4*  m);
};





class PythonQtShell_QSGClipNode : public QSGClipNode
{
public:
    PythonQtShell_QSGClipNode():QSGClipNode(),_wrapper(NULL) {};

   ~PythonQtShell_QSGClipNode();

virtual bool  isSubtreeBlocked() const;
virtual void preprocess();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGClipNode : public QObject
{ Q_OBJECT
public:
public slots:
QSGClipNode* new_QSGClipNode();
void delete_QSGClipNode(QSGClipNode* obj) { delete obj; } 
   QRectF  clipRect(QSGClipNode* theWrappedObject) const;
   bool  isRectangular(QSGClipNode* theWrappedObject) const;
   void setClipRect(QSGClipNode* theWrappedObject, const QRectF&  arg__1);
   void setIsRectangular(QSGClipNode* theWrappedObject, bool  rectHint);
};





class PythonQtShell_QSGDynamicTexture : public QSGDynamicTexture
{
public:
    PythonQtShell_QSGDynamicTexture():QSGDynamicTexture(),_wrapper(NULL) {};

   ~PythonQtShell_QSGDynamicTexture();

virtual void bind();
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  hasAlphaChannel() const;
virtual bool  hasMipmaps() const;
virtual bool  isAtlasTexture() const;
virtual QRectF  normalizedTextureSubRect() const;
virtual QSGTexture*  removedFromAtlas() const;
virtual int  textureId() const;
virtual QSize  textureSize() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  updateTexture();

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSGDynamicTexture : public QSGDynamicTexture
{ public:
inline bool  py_q_updateTexture() { return this->updateTexture(); }
};

class PythonQtWrapper_QSGDynamicTexture : public QObject
{ Q_OBJECT
public:
public slots:
QSGDynamicTexture* new_QSGDynamicTexture();
void delete_QSGDynamicTexture(QSGDynamicTexture* obj) { delete obj; } 
   bool  updateTexture(QSGDynamicTexture* theWrappedObject);
   bool  py_q_updateTexture(QSGDynamicTexture* theWrappedObject){  return (((PythonQtPublicPromoter_QSGDynamicTexture*)theWrappedObject)->py_q_updateTexture());}
};





class PythonQtShell_QSGEngine : public QSGEngine
{
public:
    PythonQtShell_QSGEngine(QObject*  parent = nullptr):QSGEngine(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSGEngine();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CreateTextureOption )
enum CreateTextureOption{
  TextureHasAlphaChannel = QSGEngine::TextureHasAlphaChannel,   TextureOwnsGLTexture = QSGEngine::TextureOwnsGLTexture,   TextureCanUseAtlas = QSGEngine::TextureCanUseAtlas,   TextureIsOpaque = QSGEngine::TextureIsOpaque};
public slots:
QSGEngine* new_QSGEngine(QObject*  parent = nullptr);
void delete_QSGEngine(QSGEngine* obj) { delete obj; } 
   QSGImageNode*  createImageNode(QSGEngine* theWrappedObject) const;
   QSGNinePatchNode*  createNinePatchNode(QSGEngine* theWrappedObject) const;
   QSGRectangleNode*  createRectangleNode(QSGEngine* theWrappedObject) const;
   QSGAbstractRenderer*  createRenderer(QSGEngine* theWrappedObject) const;
   void initialize(QSGEngine* theWrappedObject, QOpenGLContext*  context);
   void invalidate(QSGEngine* theWrappedObject);
};





class PythonQtShell_QSGFlatColorMaterial : public QSGFlatColorMaterial
{
public:
    PythonQtShell_QSGFlatColorMaterial():QSGFlatColorMaterial(),_wrapper(NULL) {};

   ~PythonQtShell_QSGFlatColorMaterial();

virtual QSGMaterialType*  type() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSGFlatColorMaterial : public QSGFlatColorMaterial
{ public:
inline QSGMaterialType*  py_q_type() const { return QSGFlatColorMaterial::type(); }
};

class PythonQtWrapper_QSGFlatColorMaterial : public QObject
{ Q_OBJECT
public:
public slots:
QSGFlatColorMaterial* new_QSGFlatColorMaterial();
void delete_QSGFlatColorMaterial(QSGFlatColorMaterial* obj) { delete obj; } 
   const QColor*  color(QSGFlatColorMaterial* theWrappedObject) const;
   void setColor(QSGFlatColorMaterial* theWrappedObject, const QColor&  color);
   QSGMaterialType*  type(QSGFlatColorMaterial* theWrappedObject) const;
   QSGMaterialType*  py_q_type(QSGFlatColorMaterial* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGFlatColorMaterial*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QSGGeometry : public QSGGeometry
{
public:
    PythonQtShell_QSGGeometry(const QSGGeometry::AttributeSet&  attribs, int  vertexCount, int  indexCount = 0, int  indexType = UnsignedShortType):QSGGeometry(attribs, vertexCount, indexCount, indexType),_wrapper(NULL) {};

   ~PythonQtShell_QSGGeometry();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGGeometry : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AttributeType DataPattern DrawingMode Type )
enum AttributeType{
  UnknownAttribute = QSGGeometry::UnknownAttribute,   PositionAttribute = QSGGeometry::PositionAttribute,   ColorAttribute = QSGGeometry::ColorAttribute,   TexCoordAttribute = QSGGeometry::TexCoordAttribute,   TexCoord1Attribute = QSGGeometry::TexCoord1Attribute,   TexCoord2Attribute = QSGGeometry::TexCoord2Attribute};
enum DataPattern{
  AlwaysUploadPattern = QSGGeometry::AlwaysUploadPattern,   StreamPattern = QSGGeometry::StreamPattern,   DynamicPattern = QSGGeometry::DynamicPattern,   StaticPattern = QSGGeometry::StaticPattern};
enum DrawingMode{
  DrawPoints = QSGGeometry::DrawPoints,   DrawLines = QSGGeometry::DrawLines,   DrawLineLoop = QSGGeometry::DrawLineLoop,   DrawLineStrip = QSGGeometry::DrawLineStrip,   DrawTriangles = QSGGeometry::DrawTriangles,   DrawTriangleStrip = QSGGeometry::DrawTriangleStrip,   DrawTriangleFan = QSGGeometry::DrawTriangleFan};
enum Type{
  ByteType = QSGGeometry::ByteType,   UnsignedByteType = QSGGeometry::UnsignedByteType,   ShortType = QSGGeometry::ShortType,   UnsignedShortType = QSGGeometry::UnsignedShortType,   IntType = QSGGeometry::IntType,   UnsignedIntType = QSGGeometry::UnsignedIntType,   FloatType = QSGGeometry::FloatType};
public slots:
QSGGeometry* new_QSGGeometry(const QSGGeometry::AttributeSet&  attribs, int  vertexCount, int  indexCount = 0, int  indexType = UnsignedShortType);
void delete_QSGGeometry(QSGGeometry* obj) { delete obj; } 
   void allocate(QSGGeometry* theWrappedObject, int  vertexCount, int  indexCount = 0);
   int  attributeCount(QSGGeometry* theWrappedObject) const;
   const QSGGeometry::Attribute*  attributes(QSGGeometry* theWrappedObject) const;
   const QSGGeometry::AttributeSet*  static_QSGGeometry_defaultAttributes_ColoredPoint2D();
   const QSGGeometry::AttributeSet*  static_QSGGeometry_defaultAttributes_Point2D();
   const QSGGeometry::AttributeSet*  static_QSGGeometry_defaultAttributes_TexturedPoint2D();
   unsigned int  drawingMode(QSGGeometry* theWrappedObject) const;
   int  indexCount(QSGGeometry* theWrappedObject) const;
   void*  indexData(QSGGeometry* theWrappedObject);
   const void*  indexData(QSGGeometry* theWrappedObject) const;
   uint*  indexDataAsUInt(QSGGeometry* theWrappedObject);
   const uint*  indexDataAsUInt(QSGGeometry* theWrappedObject) const;
   unsigned short*  indexDataAsUShort(QSGGeometry* theWrappedObject);
   const unsigned short*  indexDataAsUShort(QSGGeometry* theWrappedObject) const;
   QSGGeometry::DataPattern  indexDataPattern(QSGGeometry* theWrappedObject) const;
   int  indexType(QSGGeometry* theWrappedObject) const;
   float  lineWidth(QSGGeometry* theWrappedObject) const;
   void markIndexDataDirty(QSGGeometry* theWrappedObject);
   void markVertexDataDirty(QSGGeometry* theWrappedObject);
   void setDrawingMode(QSGGeometry* theWrappedObject, unsigned int  mode);
   void setIndexDataPattern(QSGGeometry* theWrappedObject, QSGGeometry::DataPattern  p);
   void setLineWidth(QSGGeometry* theWrappedObject, float  w);
   void setVertexDataPattern(QSGGeometry* theWrappedObject, QSGGeometry::DataPattern  p);
   int  sizeOfIndex(QSGGeometry* theWrappedObject) const;
   int  sizeOfVertex(QSGGeometry* theWrappedObject) const;
   void static_QSGGeometry_updateColoredRectGeometry(QSGGeometry*  g, const QRectF&  rect);
   void static_QSGGeometry_updateRectGeometry(QSGGeometry*  g, const QRectF&  rect);
   void static_QSGGeometry_updateTexturedRectGeometry(QSGGeometry*  g, const QRectF&  rect, const QRectF&  sourceRect);
   int  vertexCount(QSGGeometry* theWrappedObject) const;
   void*  vertexData(QSGGeometry* theWrappedObject);
   const void*  vertexData(QSGGeometry* theWrappedObject) const;
   QSGGeometry::ColoredPoint2D*  vertexDataAsColoredPoint2D(QSGGeometry* theWrappedObject);
   const QSGGeometry::ColoredPoint2D*  vertexDataAsColoredPoint2D(QSGGeometry* theWrappedObject) const;
   QSGGeometry::Point2D*  vertexDataAsPoint2D(QSGGeometry* theWrappedObject);
   const QSGGeometry::Point2D*  vertexDataAsPoint2D(QSGGeometry* theWrappedObject) const;
   QSGGeometry::TexturedPoint2D*  vertexDataAsTexturedPoint2D(QSGGeometry* theWrappedObject);
   const QSGGeometry::TexturedPoint2D*  vertexDataAsTexturedPoint2D(QSGGeometry* theWrappedObject) const;
   QSGGeometry::DataPattern  vertexDataPattern(QSGGeometry* theWrappedObject) const;
};





class PythonQtShell_QSGGeometryNode : public QSGGeometryNode
{
public:
    PythonQtShell_QSGGeometryNode():QSGGeometryNode(),_wrapper(NULL) {};

   ~PythonQtShell_QSGGeometryNode();

virtual bool  isSubtreeBlocked() const;
virtual void preprocess();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGGeometryNode : public QObject
{ Q_OBJECT
public:
public slots:
QSGGeometryNode* new_QSGGeometryNode();
void delete_QSGGeometryNode(QSGGeometryNode* obj) { delete obj; } 
   qreal  inheritedOpacity(QSGGeometryNode* theWrappedObject) const;
   int  renderOrder(QSGGeometryNode* theWrappedObject) const;
   void setInheritedOpacity(QSGGeometryNode* theWrappedObject, qreal  opacity);
   void setRenderOrder(QSGGeometryNode* theWrappedObject, int  order);
    QString py_toString(QSGGeometryNode*);
};





class PythonQtShell_QSGGeometry__Attribute : public QSGGeometry::Attribute
{
public:
    PythonQtShell_QSGGeometry__Attribute():QSGGeometry::Attribute(),_wrapper(NULL) {};

   ~PythonQtShell_QSGGeometry__Attribute();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGGeometry__Attribute : public QObject
{ Q_OBJECT
public:
public slots:
QSGGeometry::Attribute* new_QSGGeometry__Attribute();
void delete_QSGGeometry__Attribute(QSGGeometry::Attribute* obj) { delete obj; } 
   QSGGeometry::Attribute  static_QSGGeometry__Attribute_create(int  pos, int  tupleSize, int  primitiveType, bool  isPosition = false);
   QSGGeometry::Attribute  static_QSGGeometry__Attribute_createWithAttributeType(int  pos, int  tupleSize, int  primitiveType, QSGGeometry::AttributeType  attributeType);
void py_set_attributeType(QSGGeometry::Attribute* theWrappedObject, QSGGeometry::AttributeType  attributeType){ theWrappedObject->attributeType = attributeType; }
QSGGeometry::AttributeType  py_get_attributeType(QSGGeometry::Attribute* theWrappedObject){ return theWrappedObject->attributeType; }
void py_set_isVertexCoordinate(QSGGeometry::Attribute* theWrappedObject, uint  isVertexCoordinate){ theWrappedObject->isVertexCoordinate = isVertexCoordinate; }
uint  py_get_isVertexCoordinate(QSGGeometry::Attribute* theWrappedObject){ return theWrappedObject->isVertexCoordinate; }
void py_set_position(QSGGeometry::Attribute* theWrappedObject, int  position){ theWrappedObject->position = position; }
int  py_get_position(QSGGeometry::Attribute* theWrappedObject){ return theWrappedObject->position; }
void py_set_reserved(QSGGeometry::Attribute* theWrappedObject, uint  reserved){ theWrappedObject->reserved = reserved; }
uint  py_get_reserved(QSGGeometry::Attribute* theWrappedObject){ return theWrappedObject->reserved; }
void py_set_tupleSize(QSGGeometry::Attribute* theWrappedObject, int  tupleSize){ theWrappedObject->tupleSize = tupleSize; }
int  py_get_tupleSize(QSGGeometry::Attribute* theWrappedObject){ return theWrappedObject->tupleSize; }
void py_set_type(QSGGeometry::Attribute* theWrappedObject, int  type){ theWrappedObject->type = type; }
int  py_get_type(QSGGeometry::Attribute* theWrappedObject){ return theWrappedObject->type; }
};





class PythonQtShell_QSGGeometry__AttributeSet : public QSGGeometry::AttributeSet
{
public:
    PythonQtShell_QSGGeometry__AttributeSet():QSGGeometry::AttributeSet(),_wrapper(NULL) {};

   ~PythonQtShell_QSGGeometry__AttributeSet();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGGeometry__AttributeSet : public QObject
{ Q_OBJECT
public:
public slots:
QSGGeometry::AttributeSet* new_QSGGeometry__AttributeSet();
void delete_QSGGeometry__AttributeSet(QSGGeometry::AttributeSet* obj) { delete obj; } 
const QSGGeometry::Attribute*  py_get_attributes(QSGGeometry::AttributeSet* theWrappedObject){ return theWrappedObject->attributes; }
void py_set_count(QSGGeometry::AttributeSet* theWrappedObject, int  count){ theWrappedObject->count = count; }
int  py_get_count(QSGGeometry::AttributeSet* theWrappedObject){ return theWrappedObject->count; }
void py_set_stride(QSGGeometry::AttributeSet* theWrappedObject, int  stride){ theWrappedObject->stride = stride; }
int  py_get_stride(QSGGeometry::AttributeSet* theWrappedObject){ return theWrappedObject->stride; }
};





class PythonQtShell_QSGGeometry__ColoredPoint2D : public QSGGeometry::ColoredPoint2D
{
public:
    PythonQtShell_QSGGeometry__ColoredPoint2D():QSGGeometry::ColoredPoint2D(),_wrapper(NULL) {};

   ~PythonQtShell_QSGGeometry__ColoredPoint2D();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGGeometry__ColoredPoint2D : public QObject
{ Q_OBJECT
public:
public slots:
QSGGeometry::ColoredPoint2D* new_QSGGeometry__ColoredPoint2D();
void delete_QSGGeometry__ColoredPoint2D(QSGGeometry::ColoredPoint2D* obj) { delete obj; } 
   void set(QSGGeometry::ColoredPoint2D* theWrappedObject, float  nx, float  ny, uchar  nr, uchar  ng, uchar  nb, uchar  na);
void py_set_a(QSGGeometry::ColoredPoint2D* theWrappedObject, unsigned char  a){ theWrappedObject->a = a; }
unsigned char  py_get_a(QSGGeometry::ColoredPoint2D* theWrappedObject){ return theWrappedObject->a; }
void py_set_b(QSGGeometry::ColoredPoint2D* theWrappedObject, unsigned char  b){ theWrappedObject->b = b; }
unsigned char  py_get_b(QSGGeometry::ColoredPoint2D* theWrappedObject){ return theWrappedObject->b; }
void py_set_g(QSGGeometry::ColoredPoint2D* theWrappedObject, unsigned char  g){ theWrappedObject->g = g; }
unsigned char  py_get_g(QSGGeometry::ColoredPoint2D* theWrappedObject){ return theWrappedObject->g; }
void py_set_r(QSGGeometry::ColoredPoint2D* theWrappedObject, unsigned char  r){ theWrappedObject->r = r; }
unsigned char  py_get_r(QSGGeometry::ColoredPoint2D* theWrappedObject){ return theWrappedObject->r; }
void py_set_x(QSGGeometry::ColoredPoint2D* theWrappedObject, float  x){ theWrappedObject->x = x; }
float  py_get_x(QSGGeometry::ColoredPoint2D* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QSGGeometry::ColoredPoint2D* theWrappedObject, float  y){ theWrappedObject->y = y; }
float  py_get_y(QSGGeometry::ColoredPoint2D* theWrappedObject){ return theWrappedObject->y; }
};





class PythonQtShell_QSGGeometry__Point2D : public QSGGeometry::Point2D
{
public:
    PythonQtShell_QSGGeometry__Point2D():QSGGeometry::Point2D(),_wrapper(NULL) {};

   ~PythonQtShell_QSGGeometry__Point2D();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGGeometry__Point2D : public QObject
{ Q_OBJECT
public:
public slots:
QSGGeometry::Point2D* new_QSGGeometry__Point2D();
void delete_QSGGeometry__Point2D(QSGGeometry::Point2D* obj) { delete obj; } 
   void set(QSGGeometry::Point2D* theWrappedObject, float  nx, float  ny);
void py_set_x(QSGGeometry::Point2D* theWrappedObject, float  x){ theWrappedObject->x = x; }
float  py_get_x(QSGGeometry::Point2D* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QSGGeometry::Point2D* theWrappedObject, float  y){ theWrappedObject->y = y; }
float  py_get_y(QSGGeometry::Point2D* theWrappedObject){ return theWrappedObject->y; }
};





class PythonQtShell_QSGGeometry__TexturedPoint2D : public QSGGeometry::TexturedPoint2D
{
public:
    PythonQtShell_QSGGeometry__TexturedPoint2D():QSGGeometry::TexturedPoint2D(),_wrapper(NULL) {};

   ~PythonQtShell_QSGGeometry__TexturedPoint2D();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGGeometry__TexturedPoint2D : public QObject
{ Q_OBJECT
public:
public slots:
QSGGeometry::TexturedPoint2D* new_QSGGeometry__TexturedPoint2D();
void delete_QSGGeometry__TexturedPoint2D(QSGGeometry::TexturedPoint2D* obj) { delete obj; } 
   void set(QSGGeometry::TexturedPoint2D* theWrappedObject, float  nx, float  ny, float  ntx, float  nty);
void py_set_tx(QSGGeometry::TexturedPoint2D* theWrappedObject, float  tx){ theWrappedObject->tx = tx; }
float  py_get_tx(QSGGeometry::TexturedPoint2D* theWrappedObject){ return theWrappedObject->tx; }
void py_set_ty(QSGGeometry::TexturedPoint2D* theWrappedObject, float  ty){ theWrappedObject->ty = ty; }
float  py_get_ty(QSGGeometry::TexturedPoint2D* theWrappedObject){ return theWrappedObject->ty; }
void py_set_x(QSGGeometry::TexturedPoint2D* theWrappedObject, float  x){ theWrappedObject->x = x; }
float  py_get_x(QSGGeometry::TexturedPoint2D* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QSGGeometry::TexturedPoint2D* theWrappedObject, float  y){ theWrappedObject->y = y; }
float  py_get_y(QSGGeometry::TexturedPoint2D* theWrappedObject){ return theWrappedObject->y; }
};





class PythonQtPublicPromoter_QSGImageNode : public QSGImageNode
{ public:
inline QSGTexture::Filtering  py_q_filtering() const { return this->filtering(); }
inline QSGTexture::Filtering  py_q_mipmapFiltering() const { return this->mipmapFiltering(); }
inline bool  py_q_ownsTexture() const { return this->ownsTexture(); }
inline QRectF  py_q_rect() const { return this->rect(); }
inline void py_q_setFiltering(QSGTexture::Filtering  filtering) { this->setFiltering(filtering); }
inline void py_q_setMipmapFiltering(QSGTexture::Filtering  filtering) { this->setMipmapFiltering(filtering); }
inline void py_q_setOwnsTexture(bool  owns) { this->setOwnsTexture(owns); }
inline void py_q_setRect(const QRectF&  rect) { this->setRect(rect); }
inline void py_q_setSourceRect(const QRectF&  r) { this->setSourceRect(r); }
inline void py_q_setTexture(QSGTexture*  texture) { this->setTexture(texture); }
inline QRectF  py_q_sourceRect() const { return this->sourceRect(); }
inline QSGTexture*  py_q_texture() const { return this->texture(); }
};

class PythonQtWrapper_QSGImageNode : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TextureCoordinatesTransformFlag )
enum TextureCoordinatesTransformFlag{
  NoTransform = QSGImageNode::NoTransform,   MirrorHorizontally = QSGImageNode::MirrorHorizontally,   MirrorVertically = QSGImageNode::MirrorVertically};
public slots:
void delete_QSGImageNode(QSGImageNode* obj) { delete obj; } 
   QSGTexture::Filtering  filtering(QSGImageNode* theWrappedObject) const;
   QSGTexture::Filtering  py_q_filtering(QSGImageNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_filtering());}
   QSGTexture::Filtering  mipmapFiltering(QSGImageNode* theWrappedObject) const;
   QSGTexture::Filtering  py_q_mipmapFiltering(QSGImageNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_mipmapFiltering());}
   bool  ownsTexture(QSGImageNode* theWrappedObject) const;
   bool  py_q_ownsTexture(QSGImageNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_ownsTexture());}
   QRectF  rect(QSGImageNode* theWrappedObject) const;
   QRectF  py_q_rect(QSGImageNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_rect());}
   void setFiltering(QSGImageNode* theWrappedObject, QSGTexture::Filtering  filtering);
   void py_q_setFiltering(QSGImageNode* theWrappedObject, QSGTexture::Filtering  filtering){  (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_setFiltering(filtering));}
   void setMipmapFiltering(QSGImageNode* theWrappedObject, QSGTexture::Filtering  filtering);
   void py_q_setMipmapFiltering(QSGImageNode* theWrappedObject, QSGTexture::Filtering  filtering){  (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_setMipmapFiltering(filtering));}
   void setOwnsTexture(QSGImageNode* theWrappedObject, bool  owns);
   void py_q_setOwnsTexture(QSGImageNode* theWrappedObject, bool  owns){  (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_setOwnsTexture(owns));}
   void setRect(QSGImageNode* theWrappedObject, const QRectF&  rect);
   void py_q_setRect(QSGImageNode* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_setRect(rect));}
   void setRect(QSGImageNode* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setSourceRect(QSGImageNode* theWrappedObject, const QRectF&  r);
   void py_q_setSourceRect(QSGImageNode* theWrappedObject, const QRectF&  r){  (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_setSourceRect(r));}
   void setSourceRect(QSGImageNode* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setTexture(QSGImageNode* theWrappedObject, QSGTexture*  texture);
   void py_q_setTexture(QSGImageNode* theWrappedObject, QSGTexture*  texture){  (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_setTexture(texture));}
   QRectF  sourceRect(QSGImageNode* theWrappedObject) const;
   QRectF  py_q_sourceRect(QSGImageNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_sourceRect());}
   QSGTexture*  texture(QSGImageNode* theWrappedObject) const;
   QSGTexture*  py_q_texture(QSGImageNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGImageNode*)theWrappedObject)->py_q_texture());}
};





class PythonQtShell_QSGMaterialType : public QSGMaterialType
{
public:
    PythonQtShell_QSGMaterialType():QSGMaterialType(),_wrapper(NULL) {};

   ~PythonQtShell_QSGMaterialType();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGMaterialType : public QObject
{ Q_OBJECT
public:
public slots:
QSGMaterialType* new_QSGMaterialType();
void delete_QSGMaterialType(QSGMaterialType* obj) { delete obj; } 
};





class PythonQtShell_QSGNinePatchNode : public QSGNinePatchNode
{
public:
    PythonQtShell_QSGNinePatchNode():QSGNinePatchNode(),_wrapper(NULL) {};

   ~PythonQtShell_QSGNinePatchNode();

virtual bool  isSubtreeBlocked() const;
virtual void preprocess();
virtual void setBounds(const QRectF&  bounds);
virtual void setDevicePixelRatio(qreal  ratio);
virtual void setPadding(qreal  left, qreal  top, qreal  right, qreal  bottom);
virtual void setTexture(QSGTexture*  texture);
virtual void update();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSGNinePatchNode : public QSGNinePatchNode
{ public:
inline void py_q_setBounds(const QRectF&  bounds) { this->setBounds(bounds); }
inline void py_q_setDevicePixelRatio(qreal  ratio) { this->setDevicePixelRatio(ratio); }
inline void py_q_setPadding(qreal  left, qreal  top, qreal  right, qreal  bottom) { this->setPadding(left, top, right, bottom); }
inline void py_q_setTexture(QSGTexture*  texture) { this->setTexture(texture); }
inline void py_q_update() { this->update(); }
};

class PythonQtWrapper_QSGNinePatchNode : public QObject
{ Q_OBJECT
public:
public slots:
QSGNinePatchNode* new_QSGNinePatchNode();
void delete_QSGNinePatchNode(QSGNinePatchNode* obj) { delete obj; } 
   void static_QSGNinePatchNode_rebuildGeometry(QSGTexture*  texture, QSGGeometry*  geometry, const QVector4D&  padding, const QRectF&  bounds, qreal  dpr);
   void setBounds(QSGNinePatchNode* theWrappedObject, const QRectF&  bounds);
   void py_q_setBounds(QSGNinePatchNode* theWrappedObject, const QRectF&  bounds){  (((PythonQtPublicPromoter_QSGNinePatchNode*)theWrappedObject)->py_q_setBounds(bounds));}
   void setDevicePixelRatio(QSGNinePatchNode* theWrappedObject, qreal  ratio);
   void py_q_setDevicePixelRatio(QSGNinePatchNode* theWrappedObject, qreal  ratio){  (((PythonQtPublicPromoter_QSGNinePatchNode*)theWrappedObject)->py_q_setDevicePixelRatio(ratio));}
   void setPadding(QSGNinePatchNode* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void py_q_setPadding(QSGNinePatchNode* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom){  (((PythonQtPublicPromoter_QSGNinePatchNode*)theWrappedObject)->py_q_setPadding(left, top, right, bottom));}
   void setTexture(QSGNinePatchNode* theWrappedObject, QSGTexture*  texture);
   void py_q_setTexture(QSGNinePatchNode* theWrappedObject, QSGTexture*  texture){  (((PythonQtPublicPromoter_QSGNinePatchNode*)theWrappedObject)->py_q_setTexture(texture));}
   void update(QSGNinePatchNode* theWrappedObject);
   void py_q_update(QSGNinePatchNode* theWrappedObject){  (((PythonQtPublicPromoter_QSGNinePatchNode*)theWrappedObject)->py_q_update());}
};





class PythonQtShell_QSGNode : public QSGNode
{
public:
    PythonQtShell_QSGNode():QSGNode(),_wrapper(NULL) {};
    PythonQtShell_QSGNode(QSGNode::NodeType  type):QSGNode(type),_wrapper(NULL) {};

   ~PythonQtShell_QSGNode();

virtual bool  isSubtreeBlocked() const;
virtual void preprocess();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSGNode : public QSGNode
{ public:
inline bool  py_q_isSubtreeBlocked() const { return QSGNode::isSubtreeBlocked(); }
inline void py_q_preprocess() { QSGNode::preprocess(); }
};

class PythonQtWrapper_QSGNode : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DirtyStateBit Flag NodeType )
enum DirtyStateBit{
  DirtySubtreeBlocked = QSGNode::DirtySubtreeBlocked,   DirtyMatrix = QSGNode::DirtyMatrix,   DirtyNodeAdded = QSGNode::DirtyNodeAdded,   DirtyNodeRemoved = QSGNode::DirtyNodeRemoved,   DirtyGeometry = QSGNode::DirtyGeometry,   DirtyMaterial = QSGNode::DirtyMaterial,   DirtyOpacity = QSGNode::DirtyOpacity,   DirtyForceUpdate = QSGNode::DirtyForceUpdate,   DirtyUsePreprocess = QSGNode::DirtyUsePreprocess,   DirtyPropagationMask = QSGNode::DirtyPropagationMask};
enum Flag{
  OwnedByParent = QSGNode::OwnedByParent,   UsePreprocess = QSGNode::UsePreprocess,   OwnsGeometry = QSGNode::OwnsGeometry,   OwnsMaterial = QSGNode::OwnsMaterial,   OwnsOpaqueMaterial = QSGNode::OwnsOpaqueMaterial,   IsVisitableNode = QSGNode::IsVisitableNode};
enum NodeType{
  BasicNodeType = QSGNode::BasicNodeType,   GeometryNodeType = QSGNode::GeometryNodeType,   TransformNodeType = QSGNode::TransformNodeType,   ClipNodeType = QSGNode::ClipNodeType,   OpacityNodeType = QSGNode::OpacityNodeType,   RootNodeType = QSGNode::RootNodeType,   RenderNodeType = QSGNode::RenderNodeType};
public slots:
QSGNode* new_QSGNode();
QSGNode* new_QSGNode(QSGNode::NodeType  type);
void delete_QSGNode(QSGNode* obj) { delete obj; } 
   void appendChildNode(QSGNode* theWrappedObject, QSGNode*  node);
   QSGNode*  childAtIndex(QSGNode* theWrappedObject, int  i) const;
   int  childCount(QSGNode* theWrappedObject) const;
   void clearDirty(QSGNode* theWrappedObject);
   QSGNode::DirtyState  dirtyState(QSGNode* theWrappedObject) const;
   QSGNode*  firstChild(QSGNode* theWrappedObject) const;
   void insertChildNodeAfter(QSGNode* theWrappedObject, QSGNode*  node, QSGNode*  after);
   void insertChildNodeBefore(QSGNode* theWrappedObject, QSGNode*  node, QSGNode*  before);
   bool  isSubtreeBlocked(QSGNode* theWrappedObject) const;
   bool  py_q_isSubtreeBlocked(QSGNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGNode*)theWrappedObject)->py_q_isSubtreeBlocked());}
   QSGNode*  lastChild(QSGNode* theWrappedObject) const;
   void markDirty(QSGNode* theWrappedObject, QSGNode::DirtyState  bits);
   QSGNode*  nextSibling(QSGNode* theWrappedObject) const;
   QSGNode*  parent(QSGNode* theWrappedObject) const;
   void prependChildNode(QSGNode* theWrappedObject, QSGNode*  node);
   void preprocess(QSGNode* theWrappedObject);
   void py_q_preprocess(QSGNode* theWrappedObject){  (((PythonQtPublicPromoter_QSGNode*)theWrappedObject)->py_q_preprocess());}
   QSGNode*  previousSibling(QSGNode* theWrappedObject) const;
   void removeAllChildNodes(QSGNode* theWrappedObject);
   void removeChildNode(QSGNode* theWrappedObject, QSGNode*  node);
   void reparentChildNodesTo(QSGNode* theWrappedObject, QSGNode*  newParent);
   void setFlag(QSGNode* theWrappedObject, QSGNode::Flag  arg__1, bool  arg__2 = true);
   QSGNode::NodeType  type(QSGNode* theWrappedObject) const;
    QString py_toString(QSGNode*);
};


