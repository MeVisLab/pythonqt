#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmatrix4x4.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qrect.h>
#include <qregion.h>
#include <qsggeometry.h>
#include <qsgmaterialtype.h>
#include <qsgnode.h>
#include <qsgrectanglenode.h>
#include <qsgrendernode.h>
#include <qsgtexture.h>
#include <qsgtexturematerial.h>
#include <qsgtextureprovider.h>
#include <qsize.h>
#include <qthread.h>



class PythonQtShell_QSGNode : public QSGNode
{
public:
    PythonQtShell_QSGNode():QSGNode(),_wrapper(nullptr) {};
    PythonQtShell_QSGNode(QSGNode::NodeType  type):QSGNode(type),_wrapper(nullptr) {};

   ~PythonQtShell_QSGNode() override;

bool  isSubtreeBlocked() const override;
void preprocess() override;

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





class PythonQtShell_QSGNodeVisitor : public QSGNodeVisitor
{
public:
    PythonQtShell_QSGNodeVisitor():QSGNodeVisitor(),_wrapper(nullptr) {};

   ~PythonQtShell_QSGNodeVisitor() override;

void enterClipNode(QSGClipNode*  arg__1) override;
void enterGeometryNode(QSGGeometryNode*  arg__1) override;
void enterOpacityNode(QSGOpacityNode*  arg__1) override;
void enterTransformNode(QSGTransformNode*  arg__1) override;
void leaveClipNode(QSGClipNode*  arg__1) override;
void leaveGeometryNode(QSGGeometryNode*  arg__1) override;
void leaveOpacityNode(QSGOpacityNode*  arg__1) override;
void leaveTransformNode(QSGTransformNode*  arg__1) override;
void visitChildren(QSGNode*  n) override;
void visitNode(QSGNode*  n) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSGNodeVisitor : public QSGNodeVisitor
{ public:
inline void promoted_enterClipNode(QSGClipNode*  arg__1) { this->enterClipNode(arg__1); }
inline void promoted_enterGeometryNode(QSGGeometryNode*  arg__1) { this->enterGeometryNode(arg__1); }
inline void promoted_enterOpacityNode(QSGOpacityNode*  arg__1) { this->enterOpacityNode(arg__1); }
inline void promoted_enterTransformNode(QSGTransformNode*  arg__1) { this->enterTransformNode(arg__1); }
inline void promoted_leaveClipNode(QSGClipNode*  arg__1) { this->leaveClipNode(arg__1); }
inline void promoted_leaveGeometryNode(QSGGeometryNode*  arg__1) { this->leaveGeometryNode(arg__1); }
inline void promoted_leaveOpacityNode(QSGOpacityNode*  arg__1) { this->leaveOpacityNode(arg__1); }
inline void promoted_leaveTransformNode(QSGTransformNode*  arg__1) { this->leaveTransformNode(arg__1); }
inline void promoted_visitChildren(QSGNode*  n) { this->visitChildren(n); }
inline void promoted_visitNode(QSGNode*  n) { this->visitNode(n); }
inline void py_q_enterClipNode(QSGClipNode*  arg__1) { QSGNodeVisitor::enterClipNode(arg__1); }
inline void py_q_enterGeometryNode(QSGGeometryNode*  arg__1) { QSGNodeVisitor::enterGeometryNode(arg__1); }
inline void py_q_enterOpacityNode(QSGOpacityNode*  arg__1) { QSGNodeVisitor::enterOpacityNode(arg__1); }
inline void py_q_enterTransformNode(QSGTransformNode*  arg__1) { QSGNodeVisitor::enterTransformNode(arg__1); }
inline void py_q_leaveClipNode(QSGClipNode*  arg__1) { QSGNodeVisitor::leaveClipNode(arg__1); }
inline void py_q_leaveGeometryNode(QSGGeometryNode*  arg__1) { QSGNodeVisitor::leaveGeometryNode(arg__1); }
inline void py_q_leaveOpacityNode(QSGOpacityNode*  arg__1) { QSGNodeVisitor::leaveOpacityNode(arg__1); }
inline void py_q_leaveTransformNode(QSGTransformNode*  arg__1) { QSGNodeVisitor::leaveTransformNode(arg__1); }
inline void py_q_visitChildren(QSGNode*  n) { QSGNodeVisitor::visitChildren(n); }
inline void py_q_visitNode(QSGNode*  n) { QSGNodeVisitor::visitNode(n); }
};

class PythonQtWrapper_QSGNodeVisitor : public QObject
{ Q_OBJECT
public:
public slots:
QSGNodeVisitor* new_QSGNodeVisitor();
void delete_QSGNodeVisitor(QSGNodeVisitor* obj) { delete obj; }
   void enterClipNode(QSGNodeVisitor* theWrappedObject, QSGClipNode*  arg__1);
   void py_q_enterClipNode(QSGNodeVisitor* theWrappedObject, QSGClipNode*  arg__1){  (((PythonQtPublicPromoter_QSGNodeVisitor*)theWrappedObject)->py_q_enterClipNode(arg__1));}
   void enterGeometryNode(QSGNodeVisitor* theWrappedObject, QSGGeometryNode*  arg__1);
   void py_q_enterGeometryNode(QSGNodeVisitor* theWrappedObject, QSGGeometryNode*  arg__1){  (((PythonQtPublicPromoter_QSGNodeVisitor*)theWrappedObject)->py_q_enterGeometryNode(arg__1));}
   void enterOpacityNode(QSGNodeVisitor* theWrappedObject, QSGOpacityNode*  arg__1);
   void py_q_enterOpacityNode(QSGNodeVisitor* theWrappedObject, QSGOpacityNode*  arg__1){  (((PythonQtPublicPromoter_QSGNodeVisitor*)theWrappedObject)->py_q_enterOpacityNode(arg__1));}
   void enterTransformNode(QSGNodeVisitor* theWrappedObject, QSGTransformNode*  arg__1);
   void py_q_enterTransformNode(QSGNodeVisitor* theWrappedObject, QSGTransformNode*  arg__1){  (((PythonQtPublicPromoter_QSGNodeVisitor*)theWrappedObject)->py_q_enterTransformNode(arg__1));}
   void leaveClipNode(QSGNodeVisitor* theWrappedObject, QSGClipNode*  arg__1);
   void py_q_leaveClipNode(QSGNodeVisitor* theWrappedObject, QSGClipNode*  arg__1){  (((PythonQtPublicPromoter_QSGNodeVisitor*)theWrappedObject)->py_q_leaveClipNode(arg__1));}
   void leaveGeometryNode(QSGNodeVisitor* theWrappedObject, QSGGeometryNode*  arg__1);
   void py_q_leaveGeometryNode(QSGNodeVisitor* theWrappedObject, QSGGeometryNode*  arg__1){  (((PythonQtPublicPromoter_QSGNodeVisitor*)theWrappedObject)->py_q_leaveGeometryNode(arg__1));}
   void leaveOpacityNode(QSGNodeVisitor* theWrappedObject, QSGOpacityNode*  arg__1);
   void py_q_leaveOpacityNode(QSGNodeVisitor* theWrappedObject, QSGOpacityNode*  arg__1){  (((PythonQtPublicPromoter_QSGNodeVisitor*)theWrappedObject)->py_q_leaveOpacityNode(arg__1));}
   void leaveTransformNode(QSGNodeVisitor* theWrappedObject, QSGTransformNode*  arg__1);
   void py_q_leaveTransformNode(QSGNodeVisitor* theWrappedObject, QSGTransformNode*  arg__1){  (((PythonQtPublicPromoter_QSGNodeVisitor*)theWrappedObject)->py_q_leaveTransformNode(arg__1));}
   void visitChildren(QSGNodeVisitor* theWrappedObject, QSGNode*  n);
   void py_q_visitChildren(QSGNodeVisitor* theWrappedObject, QSGNode*  n){  (((PythonQtPublicPromoter_QSGNodeVisitor*)theWrappedObject)->py_q_visitChildren(n));}
   void visitNode(QSGNodeVisitor* theWrappedObject, QSGNode*  n);
   void py_q_visitNode(QSGNodeVisitor* theWrappedObject, QSGNode*  n){  (((PythonQtPublicPromoter_QSGNodeVisitor*)theWrappedObject)->py_q_visitNode(n));}
};





class PythonQtShell_QSGOpacityNode : public QSGOpacityNode
{
public:
    PythonQtShell_QSGOpacityNode():QSGOpacityNode(),_wrapper(nullptr) {};

   ~PythonQtShell_QSGOpacityNode() override;

bool  isSubtreeBlocked() const override;
void preprocess() override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSGOpacityNode : public QSGOpacityNode
{ public:
inline bool  py_q_isSubtreeBlocked() const { return QSGOpacityNode::isSubtreeBlocked(); }
};

class PythonQtWrapper_QSGOpacityNode : public QObject
{ Q_OBJECT
public:
public slots:
QSGOpacityNode* new_QSGOpacityNode();
void delete_QSGOpacityNode(QSGOpacityNode* obj) { delete obj; }
   qreal  combinedOpacity(QSGOpacityNode* theWrappedObject) const;
   bool  py_q_isSubtreeBlocked(QSGOpacityNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGOpacityNode*)theWrappedObject)->py_q_isSubtreeBlocked());}
   qreal  opacity(QSGOpacityNode* theWrappedObject) const;
   void setCombinedOpacity(QSGOpacityNode* theWrappedObject, qreal  opacity);
   void setOpacity(QSGOpacityNode* theWrappedObject, qreal  opacity);
    QString py_toString(QSGOpacityNode*);
};





class PythonQtShell_QSGRectangleNode : public QSGRectangleNode
{
public:
    PythonQtShell_QSGRectangleNode():QSGRectangleNode(),_wrapper(nullptr) {};

   ~PythonQtShell_QSGRectangleNode() override;

QColor  color() const override;
bool  isSubtreeBlocked() const override;
void preprocess() override;
QRectF  rect() const override;
void setColor(const QColor&  color) override;
void setRect(const QRectF&  rect) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSGRectangleNode : public QSGRectangleNode
{ public:
inline QColor  py_q_color() const { return this->color(); }
inline QRectF  py_q_rect() const { return this->rect(); }
inline void py_q_setColor(const QColor&  color) { this->setColor(color); }
inline void py_q_setRect(const QRectF&  rect) { this->setRect(rect); }
};

class PythonQtWrapper_QSGRectangleNode : public QObject
{ Q_OBJECT
public:
public slots:
QSGRectangleNode* new_QSGRectangleNode();
void delete_QSGRectangleNode(QSGRectangleNode* obj) { delete obj; }
   QColor  color(QSGRectangleNode* theWrappedObject) const;
   QColor  py_q_color(QSGRectangleNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGRectangleNode*)theWrappedObject)->py_q_color());}
   QRectF  rect(QSGRectangleNode* theWrappedObject) const;
   QRectF  py_q_rect(QSGRectangleNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGRectangleNode*)theWrappedObject)->py_q_rect());}
   void setColor(QSGRectangleNode* theWrappedObject, const QColor&  color);
   void py_q_setColor(QSGRectangleNode* theWrappedObject, const QColor&  color){  (((PythonQtPublicPromoter_QSGRectangleNode*)theWrappedObject)->py_q_setColor(color));}
   void setRect(QSGRectangleNode* theWrappedObject, const QRectF&  rect);
   void py_q_setRect(QSGRectangleNode* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QSGRectangleNode*)theWrappedObject)->py_q_setRect(rect));}
   void setRect(QSGRectangleNode* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
};





class PythonQtShell_QSGRenderNode : public QSGRenderNode
{
public:
    PythonQtShell_QSGRenderNode():QSGRenderNode(),_wrapper(nullptr) {};

   ~PythonQtShell_QSGRenderNode() override;

bool  isSubtreeBlocked() const override;
void preprocess() override;
QRectF  rect() const override;
void releaseResources() override;
void render(const QSGRenderNode::RenderState*  state) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSGRenderNode : public QSGRenderNode
{ public:
inline QRectF  py_q_rect() const { return QSGRenderNode::rect(); }
inline void py_q_releaseResources() { QSGRenderNode::releaseResources(); }
inline void py_q_render(const QSGRenderNode::RenderState*  state) { this->render(state); }
};

class PythonQtWrapper_QSGRenderNode : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderingFlag StateFlag )
enum RenderingFlag{
  BoundedRectRendering = QSGRenderNode::BoundedRectRendering,   DepthAwareRendering = QSGRenderNode::DepthAwareRendering,   OpaqueRendering = QSGRenderNode::OpaqueRendering};
enum StateFlag{
  DepthState = QSGRenderNode::DepthState,   StencilState = QSGRenderNode::StencilState,   ScissorState = QSGRenderNode::ScissorState,   ColorState = QSGRenderNode::ColorState,   BlendState = QSGRenderNode::BlendState,   CullState = QSGRenderNode::CullState,   ViewportState = QSGRenderNode::ViewportState,   RenderTargetState = QSGRenderNode::RenderTargetState};
public slots:
QSGRenderNode* new_QSGRenderNode();
void delete_QSGRenderNode(QSGRenderNode* obj) { delete obj; }
   const QSGClipNode*  clipList(QSGRenderNode* theWrappedObject) const;
   qreal  inheritedOpacity(QSGRenderNode* theWrappedObject) const;
   const QMatrix4x4*  matrix(QSGRenderNode* theWrappedObject) const;
   QRectF  rect(QSGRenderNode* theWrappedObject) const;
   QRectF  py_q_rect(QSGRenderNode* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGRenderNode*)theWrappedObject)->py_q_rect());}
   void releaseResources(QSGRenderNode* theWrappedObject);
   void py_q_releaseResources(QSGRenderNode* theWrappedObject){  (((PythonQtPublicPromoter_QSGRenderNode*)theWrappedObject)->py_q_releaseResources());}
   void render(QSGRenderNode* theWrappedObject, const QSGRenderNode::RenderState*  state);
   void py_q_render(QSGRenderNode* theWrappedObject, const QSGRenderNode::RenderState*  state){  (((PythonQtPublicPromoter_QSGRenderNode*)theWrappedObject)->py_q_render(state));}
};





class PythonQtShell_QSGRenderNode__RenderState : public QSGRenderNode::RenderState
{
public:
    PythonQtShell_QSGRenderNode__RenderState():QSGRenderNode::RenderState(),_wrapper(nullptr) {};

   ~PythonQtShell_QSGRenderNode__RenderState() override;

const QRegion*  clipRegion() const override;
void*  get(const char*  state) const override;
const QMatrix4x4*  projectionMatrix() const override;
bool  scissorEnabled() const override;
QRect  scissorRect() const override;
bool  stencilEnabled() const override;
int  stencilValue() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSGRenderNode__RenderState : public QSGRenderNode::RenderState
{ public:
inline const QRegion*  py_q_clipRegion() const { return this->clipRegion(); }
inline void*  py_q_get(const char*  state) const { return QSGRenderNode::RenderState::get(state); }
inline const QMatrix4x4*  py_q_projectionMatrix() const { return this->projectionMatrix(); }
inline bool  py_q_scissorEnabled() const { return this->scissorEnabled(); }
inline QRect  py_q_scissorRect() const { return this->scissorRect(); }
inline bool  py_q_stencilEnabled() const { return this->stencilEnabled(); }
inline int  py_q_stencilValue() const { return this->stencilValue(); }
};

class PythonQtWrapper_QSGRenderNode__RenderState : public QObject
{ Q_OBJECT
public:
public slots:
QSGRenderNode::RenderState* new_QSGRenderNode__RenderState();
void delete_QSGRenderNode__RenderState(QSGRenderNode::RenderState* obj) { delete obj; }
   const QRegion*  clipRegion(QSGRenderNode::RenderState* theWrappedObject) const;
   const QRegion*  py_q_clipRegion(QSGRenderNode::RenderState* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGRenderNode__RenderState*)theWrappedObject)->py_q_clipRegion());}
   void*  get(QSGRenderNode::RenderState* theWrappedObject, const char*  state) const;
   void*  py_q_get(QSGRenderNode::RenderState* theWrappedObject, const char*  state) const{  return (((PythonQtPublicPromoter_QSGRenderNode__RenderState*)theWrappedObject)->py_q_get(state));}
   const QMatrix4x4*  projectionMatrix(QSGRenderNode::RenderState* theWrappedObject) const;
   const QMatrix4x4*  py_q_projectionMatrix(QSGRenderNode::RenderState* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGRenderNode__RenderState*)theWrappedObject)->py_q_projectionMatrix());}
   bool  scissorEnabled(QSGRenderNode::RenderState* theWrappedObject) const;
   bool  py_q_scissorEnabled(QSGRenderNode::RenderState* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGRenderNode__RenderState*)theWrappedObject)->py_q_scissorEnabled());}
   QRect  scissorRect(QSGRenderNode::RenderState* theWrappedObject) const;
   QRect  py_q_scissorRect(QSGRenderNode::RenderState* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGRenderNode__RenderState*)theWrappedObject)->py_q_scissorRect());}
   bool  stencilEnabled(QSGRenderNode::RenderState* theWrappedObject) const;
   bool  py_q_stencilEnabled(QSGRenderNode::RenderState* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGRenderNode__RenderState*)theWrappedObject)->py_q_stencilEnabled());}
   int  stencilValue(QSGRenderNode::RenderState* theWrappedObject) const;
   int  py_q_stencilValue(QSGRenderNode::RenderState* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGRenderNode__RenderState*)theWrappedObject)->py_q_stencilValue());}
};





class PythonQtShell_QSGRootNode : public QSGRootNode
{
public:
    PythonQtShell_QSGRootNode():QSGRootNode(),_wrapper(nullptr) {};

   ~PythonQtShell_QSGRootNode() override;

bool  isSubtreeBlocked() const override;
void preprocess() override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSGRootNode : public QObject
{ Q_OBJECT
public:
public slots:
QSGRootNode* new_QSGRootNode();
void delete_QSGRootNode(QSGRootNode* obj) { delete obj; }
    QString py_toString(QSGRootNode*);
};





class PythonQtShell_QSGTexture : public QSGTexture
{
public:
    PythonQtShell_QSGTexture():QSGTexture(),_wrapper(nullptr) {};

   ~PythonQtShell_QSGTexture() override;

void bind() override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  hasAlphaChannel() const override;
bool  hasMipmaps() const override;
bool  isAtlasTexture() const override;
QRectF  normalizedTextureSubRect() const override;
QSGTexture*  removedFromAtlas() const override;
int  textureId() const override;
QSize  textureSize() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSGTexture : public QSGTexture
{ public:
inline void py_q_bind() { this->bind(); }
inline bool  py_q_hasAlphaChannel() const { return this->hasAlphaChannel(); }
inline bool  py_q_hasMipmaps() const { return this->hasMipmaps(); }
inline bool  py_q_isAtlasTexture() const { return QSGTexture::isAtlasTexture(); }
inline QRectF  py_q_normalizedTextureSubRect() const { return QSGTexture::normalizedTextureSubRect(); }
inline QSGTexture*  py_q_removedFromAtlas() const { return QSGTexture::removedFromAtlas(); }
inline int  py_q_textureId() const { return this->textureId(); }
inline QSize  py_q_textureSize() const { return this->textureSize(); }
};

class PythonQtWrapper_QSGTexture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AnisotropyLevel Filtering WrapMode )
enum AnisotropyLevel{
  AnisotropyNone = QSGTexture::AnisotropyNone,   Anisotropy2x = QSGTexture::Anisotropy2x,   Anisotropy4x = QSGTexture::Anisotropy4x,   Anisotropy8x = QSGTexture::Anisotropy8x,   Anisotropy16x = QSGTexture::Anisotropy16x};
enum Filtering{
  None = QSGTexture::None,   Nearest = QSGTexture::Nearest,   Linear = QSGTexture::Linear};
enum WrapMode{
  Repeat = QSGTexture::Repeat,   ClampToEdge = QSGTexture::ClampToEdge,   MirroredRepeat = QSGTexture::MirroredRepeat};
public slots:
QSGTexture* new_QSGTexture();
void delete_QSGTexture(QSGTexture* obj) { delete obj; }
   QSGTexture::AnisotropyLevel  anisotropyLevel(QSGTexture* theWrappedObject) const;
   void bind(QSGTexture* theWrappedObject);
   void py_q_bind(QSGTexture* theWrappedObject){  (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_bind());}
   int  comparisonKey(QSGTexture* theWrappedObject) const;
   QRectF  convertToNormalizedSourceRect(QSGTexture* theWrappedObject, const QRectF&  rect) const;
   QSGTexture::Filtering  filtering(QSGTexture* theWrappedObject) const;
   bool  hasAlphaChannel(QSGTexture* theWrappedObject) const;
   bool  py_q_hasAlphaChannel(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_hasAlphaChannel());}
   bool  hasMipmaps(QSGTexture* theWrappedObject) const;
   bool  py_q_hasMipmaps(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_hasMipmaps());}
   QSGTexture::WrapMode  horizontalWrapMode(QSGTexture* theWrappedObject) const;
   bool  isAtlasTexture(QSGTexture* theWrappedObject) const;
   bool  py_q_isAtlasTexture(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_isAtlasTexture());}
   QSGTexture::Filtering  mipmapFiltering(QSGTexture* theWrappedObject) const;
   QRectF  normalizedTextureSubRect(QSGTexture* theWrappedObject) const;
   QRectF  py_q_normalizedTextureSubRect(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_normalizedTextureSubRect());}
   QSGTexture*  removedFromAtlas(QSGTexture* theWrappedObject) const;
   QSGTexture*  py_q_removedFromAtlas(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_removedFromAtlas());}
   void setAnisotropyLevel(QSGTexture* theWrappedObject, QSGTexture::AnisotropyLevel  level);
   void setFiltering(QSGTexture* theWrappedObject, QSGTexture::Filtering  filter);
   void setHorizontalWrapMode(QSGTexture* theWrappedObject, QSGTexture::WrapMode  hwrap);
   void setMipmapFiltering(QSGTexture* theWrappedObject, QSGTexture::Filtering  filter);
   void setVerticalWrapMode(QSGTexture* theWrappedObject, QSGTexture::WrapMode  vwrap);
   int  textureId(QSGTexture* theWrappedObject) const;
   int  py_q_textureId(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_textureId());}
   QSize  textureSize(QSGTexture* theWrappedObject) const;
   QSize  py_q_textureSize(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_textureSize());}
   void updateBindOptions(QSGTexture* theWrappedObject, bool  force = false);
   QSGTexture::WrapMode  verticalWrapMode(QSGTexture* theWrappedObject) const;
};





class PythonQtShell_QSGTextureMaterial : public QSGTextureMaterial
{
public:
    PythonQtShell_QSGTextureMaterial():QSGTextureMaterial(),_wrapper(nullptr) {};

   ~PythonQtShell_QSGTextureMaterial();

QSGMaterialType*  type() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSGTextureMaterial : public QSGTextureMaterial
{ public:
inline QSGMaterialType*  py_q_type() const { return QSGTextureMaterial::type(); }
};

class PythonQtWrapper_QSGTextureMaterial : public QObject
{ Q_OBJECT
public:
public slots:
QSGTextureMaterial* new_QSGTextureMaterial();
void delete_QSGTextureMaterial(QSGTextureMaterial* obj) { delete obj; }
   QSGMaterialType*  type(QSGTextureMaterial* theWrappedObject) const;
   QSGMaterialType*  py_q_type(QSGTextureMaterial* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTextureMaterial*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QSGTextureProvider : public QSGTextureProvider
{
public:
    PythonQtShell_QSGTextureProvider():QSGTextureProvider(),_wrapper(nullptr) {};

   ~PythonQtShell_QSGTextureProvider() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QSGTexture*  texture() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSGTextureProvider : public QSGTextureProvider
{ public:
inline QSGTexture*  py_q_texture() const { return this->texture(); }
};

class PythonQtWrapper_QSGTextureProvider : public QObject
{ Q_OBJECT
public:
public slots:
QSGTextureProvider* new_QSGTextureProvider();
void delete_QSGTextureProvider(QSGTextureProvider* obj) { delete obj; }
   QSGTexture*  texture(QSGTextureProvider* theWrappedObject) const;
   QSGTexture*  py_q_texture(QSGTextureProvider* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTextureProvider*)theWrappedObject)->py_q_texture());}
};





class PythonQtShell_QSGTransformNode : public QSGTransformNode
{
public:
    PythonQtShell_QSGTransformNode():QSGTransformNode(),_wrapper(nullptr) {};

   ~PythonQtShell_QSGTransformNode() override;

bool  isSubtreeBlocked() const override;
void preprocess() override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSGTransformNode : public QObject
{ Q_OBJECT
public:
public slots:
QSGTransformNode* new_QSGTransformNode();
void delete_QSGTransformNode(QSGTransformNode* obj) { delete obj; }
   const QMatrix4x4*  combinedMatrix(QSGTransformNode* theWrappedObject) const;
   const QMatrix4x4*  matrix(QSGTransformNode* theWrappedObject) const;
   void setCombinedMatrix(QSGTransformNode* theWrappedObject, const QMatrix4x4&  matrix);
   void setMatrix(QSGTransformNode* theWrappedObject, const QMatrix4x4&  matrix);
    QString py_toString(QSGTransformNode*);
};


