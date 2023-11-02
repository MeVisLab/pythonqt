#include <PythonQt.h>
#include <QAbstractTextDocumentLayout>
#include <QBasicTimer>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QImage>
#include <QItemSelection>
#include <QLocale>
#include <QObject>
#include <QPalette>
#include <QPixmap>
#include <QSize>
#include <QStringList>
#include <QTextCharFormat>
#include <QVariant>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qabstractprintdialog.h>
#include <qabstractproxymodel.h>
#include <qabstractscrollarea.h>
#include <qabstractslider.h>
#include <qabstractspinbox.h>
#include <qabstracttextdocumentlayout.h>
#include <qaccessible.h>
#include <qaction.h>
#include <qactiongroup.h>
#include <qapplication.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcheckbox.h>
#include <qclipboard.h>
#include <qcolor.h>
#include <qcolordialog.h>
#include <qcolumnview.h>
#include <qcombobox.h>
#include <qcommandlinkbutton.h>
#include <qcommonstyle.h>
#include <qcompleter.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdesktopwidget.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputmethod.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlineedit.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsessionmanager.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstylehints.h>
#include <qstyleoption.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qthread.h>
#include <qtransform.h>
#include <qtranslator.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QAbstractButton : public QAbstractButton
{
public:
    PythonQtShell_QAbstractButton(QWidget*  parent = nullptr):QAbstractButton(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractButton() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
void checkStateSet() override;
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
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
bool  hitButton(const QPoint&  pos) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
void nextCheckState() override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractButton : public QAbstractButton
{ public:
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline void promoted_checkStateSet() { this->checkStateSet(); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { this->focusInEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { this->focusOutEvent(e); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return this->hitButton(pos); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { this->keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { this->keyReleaseEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { this->mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { this->mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline void promoted_nextCheckState() { this->nextCheckState(); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_timerEvent(QTimerEvent*  e) { this->timerEvent(e); }
inline void py_q_changeEvent(QEvent*  e) { QAbstractButton::changeEvent(e); }
inline void py_q_checkStateSet() { QAbstractButton::checkStateSet(); }
inline bool  py_q_event(QEvent*  e) { return QAbstractButton::event(e); }
inline void py_q_focusInEvent(QFocusEvent*  e) { QAbstractButton::focusInEvent(e); }
inline void py_q_focusOutEvent(QFocusEvent*  e) { QAbstractButton::focusOutEvent(e); }
inline bool  py_q_hitButton(const QPoint&  pos) const { return QAbstractButton::hitButton(pos); }
inline void py_q_keyPressEvent(QKeyEvent*  e) { QAbstractButton::keyPressEvent(e); }
inline void py_q_keyReleaseEvent(QKeyEvent*  e) { QAbstractButton::keyReleaseEvent(e); }
inline void py_q_mouseMoveEvent(QMouseEvent*  e) { QAbstractButton::mouseMoveEvent(e); }
inline void py_q_mousePressEvent(QMouseEvent*  e) { QAbstractButton::mousePressEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QAbstractButton::mouseReleaseEvent(e); }
inline void py_q_nextCheckState() { QAbstractButton::nextCheckState(); }
inline void py_q_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void py_q_timerEvent(QTimerEvent*  e) { QAbstractButton::timerEvent(e); }
};

class PythonQtWrapper_QAbstractButton : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractButton* new_QAbstractButton(QWidget*  parent = nullptr);
void delete_QAbstractButton(QAbstractButton* obj) { delete obj; }
   bool  autoExclusive(QAbstractButton* theWrappedObject) const;
   bool  autoRepeat(QAbstractButton* theWrappedObject) const;
   int  autoRepeatDelay(QAbstractButton* theWrappedObject) const;
   int  autoRepeatInterval(QAbstractButton* theWrappedObject) const;
   void py_q_changeEvent(QAbstractButton* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_changeEvent(e));}
   void checkStateSet(QAbstractButton* theWrappedObject);
   void py_q_checkStateSet(QAbstractButton* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_checkStateSet());}
   bool  py_q_event(QAbstractButton* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_event(e));}
   void py_q_focusInEvent(QAbstractButton* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_focusInEvent(e));}
   void py_q_focusOutEvent(QAbstractButton* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_focusOutEvent(e));}
   QButtonGroup*  group(QAbstractButton* theWrappedObject) const;
   bool  hitButton(QAbstractButton* theWrappedObject, const QPoint&  pos) const;
   bool  py_q_hitButton(QAbstractButton* theWrappedObject, const QPoint&  pos) const{  return (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_hitButton(pos));}
   QIcon  icon(QAbstractButton* theWrappedObject) const;
   QSize  iconSize(QAbstractButton* theWrappedObject) const;
   bool  isCheckable(QAbstractButton* theWrappedObject) const;
   bool  isChecked(QAbstractButton* theWrappedObject) const;
   bool  isDown(QAbstractButton* theWrappedObject) const;
   void py_q_keyPressEvent(QAbstractButton* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_keyPressEvent(e));}
   void py_q_keyReleaseEvent(QAbstractButton* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_keyReleaseEvent(e));}
   void py_q_mouseMoveEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_mouseMoveEvent(e));}
   void py_q_mousePressEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_mousePressEvent(e));}
   void py_q_mouseReleaseEvent(QAbstractButton* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   void nextCheckState(QAbstractButton* theWrappedObject);
   void py_q_nextCheckState(QAbstractButton* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_nextCheckState());}
   void py_q_paintEvent(QAbstractButton* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_paintEvent(e));}
   void setAutoExclusive(QAbstractButton* theWrappedObject, bool  arg__1);
   void setAutoRepeat(QAbstractButton* theWrappedObject, bool  arg__1);
   void setAutoRepeatDelay(QAbstractButton* theWrappedObject, int  arg__1);
   void setAutoRepeatInterval(QAbstractButton* theWrappedObject, int  arg__1);
   void setCheckable(QAbstractButton* theWrappedObject, bool  arg__1);
   void setDown(QAbstractButton* theWrappedObject, bool  arg__1);
   void setIcon(QAbstractButton* theWrappedObject, const QIcon&  icon);
   void setShortcut(QAbstractButton* theWrappedObject, const QKeySequence&  key);
   void setText(QAbstractButton* theWrappedObject, const QString&  text);
   QKeySequence  shortcut(QAbstractButton* theWrappedObject) const;
   QString  text(QAbstractButton* theWrappedObject) const;
   void py_q_timerEvent(QAbstractButton* theWrappedObject, QTimerEvent*  e){  (((PythonQtPublicPromoter_QAbstractButton*)theWrappedObject)->py_q_timerEvent(e));}
};





class PythonQtShell_QAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem
{
public:
    PythonQtShell_QAbstractGraphicsShapeItem(QGraphicsItem*  parent = nullptr):QAbstractGraphicsShapeItem(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractGraphicsShapeItem() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem
{ public:
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QAbstractGraphicsShapeItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QAbstractGraphicsShapeItem::opaqueArea(); }
};

class PythonQtWrapper_QAbstractGraphicsShapeItem : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractGraphicsShapeItem* new_QAbstractGraphicsShapeItem(QGraphicsItem*  parent = nullptr);
void delete_QAbstractGraphicsShapeItem(QAbstractGraphicsShapeItem* obj) { delete obj; }
   QBrush  brush(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  py_q_isObscuredBy(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QAbstractGraphicsShapeItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QAbstractGraphicsShapeItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractGraphicsShapeItem*)theWrappedObject)->py_q_opaqueArea());}
   QPen  pen(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void setBrush(QAbstractGraphicsShapeItem* theWrappedObject, const QBrush&  brush);
   void setPen(QAbstractGraphicsShapeItem* theWrappedObject, const QPen&  pen);
};





class PythonQtShell_QAbstractItemDelegate : public QAbstractItemDelegate
{
public:
    PythonQtShell_QAbstractItemDelegate(QObject*  parent = nullptr):QAbstractItemDelegate(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractItemDelegate() override;

void childEvent(QChildEvent*  event) override;
QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
void customEvent(QEvent*  event) override;
void destroyEditor(QWidget*  editor, const QModelIndex&  index) const override;
bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
bool  helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index) override;
void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
QVector<int >  paintingRoles() const override;
void setEditorData(QWidget*  editor, const QModelIndex&  index) const override;
void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const override;
QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractItemDelegate : public QAbstractItemDelegate
{ public:
inline QWidget*  py_q_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QAbstractItemDelegate::createEditor(parent, option, index); }
inline void py_q_destroyEditor(QWidget*  editor, const QModelIndex&  index) const { QAbstractItemDelegate::destroyEditor(editor, index); }
inline bool  py_q_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QAbstractItemDelegate::editorEvent(event, model, option, index); }
inline bool  py_q_helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QAbstractItemDelegate::helpEvent(event, view, option, index); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { this->paint(painter, option, index); }
inline QVector<int >  py_q_paintingRoles() const { return QAbstractItemDelegate::paintingRoles(); }
inline void py_q_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QAbstractItemDelegate::setEditorData(editor, index); }
inline void py_q_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QAbstractItemDelegate::setModelData(editor, model, index); }
inline QSize  py_q_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return this->sizeHint(option, index); }
inline void py_q_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QAbstractItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QAbstractItemDelegate : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EndEditHint )
enum EndEditHint{
  NoHint = QAbstractItemDelegate::NoHint,   EditNextItem = QAbstractItemDelegate::EditNextItem,   EditPreviousItem = QAbstractItemDelegate::EditPreviousItem,   SubmitModelCache = QAbstractItemDelegate::SubmitModelCache,   RevertModelCache = QAbstractItemDelegate::RevertModelCache};
public slots:
QAbstractItemDelegate* new_QAbstractItemDelegate(QObject*  parent = nullptr);
void delete_QAbstractItemDelegate(QAbstractItemDelegate* obj) { delete obj; }
   QWidget*  createEditor(QAbstractItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   QWidget*  py_q_createEditor(QAbstractItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemDelegate*)theWrappedObject)->py_q_createEditor(parent, option, index));}
   void destroyEditor(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   void py_q_destroyEditor(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QAbstractItemDelegate*)theWrappedObject)->py_q_destroyEditor(editor, index));}
   bool  editorEvent(QAbstractItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   bool  py_q_editorEvent(QAbstractItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index){  return (((PythonQtPublicPromoter_QAbstractItemDelegate*)theWrappedObject)->py_q_editorEvent(event, model, option, index));}
   bool  helpEvent(QAbstractItemDelegate* theWrappedObject, QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   bool  py_q_helpEvent(QAbstractItemDelegate* theWrappedObject, QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index){  return (((PythonQtPublicPromoter_QAbstractItemDelegate*)theWrappedObject)->py_q_helpEvent(event, view, option, index));}
   void paint(QAbstractItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void py_q_paint(QAbstractItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QAbstractItemDelegate*)theWrappedObject)->py_q_paint(painter, option, index));}
   QVector<int >  paintingRoles(QAbstractItemDelegate* theWrappedObject) const;
   QVector<int >  py_q_paintingRoles(QAbstractItemDelegate* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemDelegate*)theWrappedObject)->py_q_paintingRoles());}
   void setEditorData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   void py_q_setEditorData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QAbstractItemDelegate*)theWrappedObject)->py_q_setEditorData(editor, index));}
   void setModelData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
   void py_q_setModelData(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QAbstractItemDelegate*)theWrappedObject)->py_q_setModelData(editor, model, index));}
   QSize  sizeHint(QAbstractItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   QSize  py_q_sizeHint(QAbstractItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemDelegate*)theWrappedObject)->py_q_sizeHint(option, index));}
   void updateEditorGeometry(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void py_q_updateEditorGeometry(QAbstractItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QAbstractItemDelegate*)theWrappedObject)->py_q_updateEditorGeometry(editor, option, index));}
};





class PythonQtShell_QAbstractItemView : public QAbstractItemView
{
public:
    PythonQtShell_QAbstractItemView(QWidget*  parent = nullptr):QAbstractItemView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractItemView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  point) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setModel(QAbstractItemModel*  model) override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
QStyleOptionViewItem  viewOptions() const override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractItemView : public QAbstractItemView
{ public:
enum CursorAction{
  MoveUp = QAbstractItemView::MoveUp,   MoveDown = QAbstractItemView::MoveDown,   MoveLeft = QAbstractItemView::MoveLeft,   MoveRight = QAbstractItemView::MoveRight,   MoveHome = QAbstractItemView::MoveHome,   MoveEnd = QAbstractItemView::MoveEnd,   MovePageUp = QAbstractItemView::MovePageUp,   MovePageDown = QAbstractItemView::MovePageDown,   MoveNext = QAbstractItemView::MoveNext,   MovePrevious = QAbstractItemView::MovePrevious};
enum DropIndicatorPosition{
  OnItem = QAbstractItemView::OnItem,   AboveItem = QAbstractItemView::AboveItem,   BelowItem = QAbstractItemView::BelowItem,   OnViewport = QAbstractItemView::OnViewport};
enum State{
  NoState = QAbstractItemView::NoState,   DraggingState = QAbstractItemView::DraggingState,   DragSelectingState = QAbstractItemView::DragSelectingState,   EditingState = QAbstractItemView::EditingState,   ExpandingState = QAbstractItemView::ExpandingState,   CollapsingState = QAbstractItemView::CollapsingState,   AnimatingState = QAbstractItemView::AnimatingState};
inline void promoted_closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) { this->closeEditor(editor, hint); }
inline void promoted_commitData(QWidget*  editor) { this->commitData(editor); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { this->currentChanged(current, previous); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) { this->dataChanged(topLeft, bottomRight, roles); }
inline QPoint  promoted_dirtyRegionOffset() const { return this->dirtyRegionOffset(); }
inline void promoted_doAutoScroll() { this->doAutoScroll(); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_dropEvent(QDropEvent*  event) { this->dropEvent(event); }
inline int  promoted_dropIndicatorPosition() const { return this->dropIndicatorPosition(); }
inline bool  promoted_edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) { return this->edit(index, trigger, event); }
inline void promoted_editorDestroyed(QObject*  editor) { this->editorDestroyed(editor); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void promoted_executeDelayedItemsLayout() { this->executeDelayedItemsLayout(); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline void promoted_horizontalScrollbarAction(int  action) { this->horizontalScrollbarAction(action); }
inline void promoted_horizontalScrollbarValueChanged(int  value) { this->horizontalScrollbarValueChanged(value); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return this->moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { this->rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { this->rowsInserted(parent, start, end); }
inline void promoted_scheduleDelayedItemsLayout() { this->scheduleDelayedItemsLayout(); }
inline void promoted_scrollDirtyRegion(int  dx, int  dy) { this->scrollDirtyRegion(dx, dy); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return this->selectedIndexes(); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { this->selectionChanged(selected, deselected); }
inline QItemSelectionModel::SelectionFlags  promoted_selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const { return this->selectionCommand(index, event); }
inline void promoted_setDirtyRegion(const QRegion&  region) { this->setDirtyRegion(region); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline void promoted_setState(int  state) { this->setState((QAbstractItemView::State)state); }
inline void promoted_startAutoScroll() { this->startAutoScroll(); }
inline void promoted_startDrag(Qt::DropActions  supportedActions) { this->startDrag(supportedActions); }
inline int  promoted_state() const { return this->state(); }
inline void promoted_stopAutoScroll() { this->stopAutoScroll(); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void promoted_updateEditorData() { this->updateEditorData(); }
inline void promoted_updateEditorGeometries() { this->updateEditorGeometries(); }
inline void promoted_updateGeometries() { this->updateGeometries(); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline void promoted_verticalScrollbarAction(int  action) { this->verticalScrollbarAction(action); }
inline void promoted_verticalScrollbarValueChanged(int  value) { this->verticalScrollbarValueChanged(value); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return this->viewOptions(); }
inline bool  promoted_viewportEvent(QEvent*  event) { return this->viewportEvent(event); }
inline QSize  promoted_viewportSizeHint() const { return this->viewportSizeHint(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline void py_q_closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) { QAbstractItemView::closeEditor(editor, hint); }
inline void py_q_commitData(QWidget*  editor) { QAbstractItemView::commitData(editor); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QAbstractItemView::currentChanged(current, previous); }
inline void py_q_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) { QAbstractItemView::dataChanged(topLeft, bottomRight, roles); }
inline void py_q_doItemsLayout() { QAbstractItemView::doItemsLayout(); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  event) { QAbstractItemView::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  event) { QAbstractItemView::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  event) { QAbstractItemView::dragMoveEvent(event); }
inline void py_q_dropEvent(QDropEvent*  event) { QAbstractItemView::dropEvent(event); }
inline bool  py_q_edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) { return QAbstractItemView::edit(index, trigger, event); }
inline void py_q_editorDestroyed(QObject*  editor) { QAbstractItemView::editorDestroyed(editor); }
inline bool  py_q_event(QEvent*  event) { return QAbstractItemView::event(event); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QAbstractItemView::eventFilter(object, event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QAbstractItemView::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QAbstractItemView::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QAbstractItemView::focusOutEvent(event); }
inline int  py_q_horizontalOffset() const { return this->horizontalOffset(); }
inline void py_q_horizontalScrollbarAction(int  action) { QAbstractItemView::horizontalScrollbarAction(action); }
inline void py_q_horizontalScrollbarValueChanged(int  value) { QAbstractItemView::horizontalScrollbarValueChanged(value); }
inline QModelIndex  py_q_indexAt(const QPoint&  point) const { return this->indexAt(point); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QAbstractItemView::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QAbstractItemView::inputMethodQuery(query); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QAbstractItemView::keyPressEvent(event); }
inline void py_q_keyboardSearch(const QString&  search) { QAbstractItemView::keyboardSearch(search); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  event) { QAbstractItemView::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QAbstractItemView::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QAbstractItemView::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QAbstractItemView::mouseReleaseEvent(event); }
inline QModelIndex  py_q_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return this->moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void py_q_reset() { QAbstractItemView::reset(); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QAbstractItemView::resizeEvent(event); }
inline void py_q_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QAbstractItemView::rowsAboutToBeRemoved(parent, start, end); }
inline void py_q_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QAbstractItemView::rowsInserted(parent, start, end); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { this->scrollTo(index, hint); }
inline void py_q_selectAll() { QAbstractItemView::selectAll(); }
inline QList<QModelIndex >  py_q_selectedIndexes() const { return QAbstractItemView::selectedIndexes(); }
inline void py_q_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QAbstractItemView::selectionChanged(selected, deselected); }
inline QItemSelectionModel::SelectionFlags  py_q_selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const { return QAbstractItemView::selectionCommand(index, event); }
inline void py_q_setModel(QAbstractItemModel*  model) { QAbstractItemView::setModel(model); }
inline void py_q_setRootIndex(const QModelIndex&  index) { QAbstractItemView::setRootIndex(index); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline void py_q_setSelectionModel(QItemSelectionModel*  selectionModel) { QAbstractItemView::setSelectionModel(selectionModel); }
inline int  py_q_sizeHintForColumn(int  column) const { return QAbstractItemView::sizeHintForColumn(column); }
inline int  py_q_sizeHintForRow(int  row) const { return QAbstractItemView::sizeHintForRow(row); }
inline void py_q_startDrag(Qt::DropActions  supportedActions) { QAbstractItemView::startDrag(supportedActions); }
inline void py_q_timerEvent(QTimerEvent*  event) { QAbstractItemView::timerEvent(event); }
inline void py_q_updateEditorData() { QAbstractItemView::updateEditorData(); }
inline void py_q_updateEditorGeometries() { QAbstractItemView::updateEditorGeometries(); }
inline void py_q_updateGeometries() { QAbstractItemView::updateGeometries(); }
inline int  py_q_verticalOffset() const { return this->verticalOffset(); }
inline void py_q_verticalScrollbarAction(int  action) { QAbstractItemView::verticalScrollbarAction(action); }
inline void py_q_verticalScrollbarValueChanged(int  value) { QAbstractItemView::verticalScrollbarValueChanged(value); }
inline QStyleOptionViewItem  py_q_viewOptions() const { return QAbstractItemView::viewOptions(); }
inline bool  py_q_viewportEvent(QEvent*  event) { return QAbstractItemView::viewportEvent(event); }
inline QSize  py_q_viewportSizeHint() const { return QAbstractItemView::viewportSizeHint(); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return this->visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
};

class PythonQtWrapper_QAbstractItemView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CursorAction DropIndicatorPosition EditTrigger State )
Q_FLAGS(EditTriggers )
enum CursorAction{
  MoveUp = PythonQtPublicPromoter_QAbstractItemView::MoveUp,   MoveDown = PythonQtPublicPromoter_QAbstractItemView::MoveDown,   MoveLeft = PythonQtPublicPromoter_QAbstractItemView::MoveLeft,   MoveRight = PythonQtPublicPromoter_QAbstractItemView::MoveRight,   MoveHome = PythonQtPublicPromoter_QAbstractItemView::MoveHome,   MoveEnd = PythonQtPublicPromoter_QAbstractItemView::MoveEnd,   MovePageUp = PythonQtPublicPromoter_QAbstractItemView::MovePageUp,   MovePageDown = PythonQtPublicPromoter_QAbstractItemView::MovePageDown,   MoveNext = PythonQtPublicPromoter_QAbstractItemView::MoveNext,   MovePrevious = PythonQtPublicPromoter_QAbstractItemView::MovePrevious};
enum DropIndicatorPosition{
  OnItem = PythonQtPublicPromoter_QAbstractItemView::OnItem,   AboveItem = PythonQtPublicPromoter_QAbstractItemView::AboveItem,   BelowItem = PythonQtPublicPromoter_QAbstractItemView::BelowItem,   OnViewport = PythonQtPublicPromoter_QAbstractItemView::OnViewport};
enum EditTrigger{
  NoEditTriggers = QAbstractItemView::NoEditTriggers,   CurrentChanged = QAbstractItemView::CurrentChanged,   DoubleClicked = QAbstractItemView::DoubleClicked,   SelectedClicked = QAbstractItemView::SelectedClicked,   EditKeyPressed = QAbstractItemView::EditKeyPressed,   AnyKeyPressed = QAbstractItemView::AnyKeyPressed,   AllEditTriggers = QAbstractItemView::AllEditTriggers};
enum State{
  NoState = PythonQtPublicPromoter_QAbstractItemView::NoState,   DraggingState = PythonQtPublicPromoter_QAbstractItemView::DraggingState,   DragSelectingState = PythonQtPublicPromoter_QAbstractItemView::DragSelectingState,   EditingState = PythonQtPublicPromoter_QAbstractItemView::EditingState,   ExpandingState = PythonQtPublicPromoter_QAbstractItemView::ExpandingState,   CollapsingState = PythonQtPublicPromoter_QAbstractItemView::CollapsingState,   AnimatingState = PythonQtPublicPromoter_QAbstractItemView::AnimatingState};
Q_DECLARE_FLAGS(EditTriggers, EditTrigger)
public slots:
QAbstractItemView* new_QAbstractItemView(QWidget*  parent = nullptr);
void delete_QAbstractItemView(QAbstractItemView* obj) { delete obj; }
   bool  alternatingRowColors(QAbstractItemView* theWrappedObject) const;
   int  autoScrollMargin(QAbstractItemView* theWrappedObject) const;
   void py_q_closeEditor(QAbstractItemView* theWrappedObject, QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_closeEditor(editor, hint));}
   void closePersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   void py_q_commitData(QAbstractItemView* theWrappedObject, QWidget*  editor){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_commitData(editor));}
   void py_q_currentChanged(QAbstractItemView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_currentChanged(current, previous));}
   QModelIndex  currentIndex(QAbstractItemView* theWrappedObject) const;
   void py_q_dataChanged(QAbstractItemView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_dataChanged(topLeft, bottomRight, roles));}
   Qt::DropAction  defaultDropAction(QAbstractItemView* theWrappedObject) const;
   QPoint  dirtyRegionOffset(QAbstractItemView* theWrappedObject) const;
   void doAutoScroll(QAbstractItemView* theWrappedObject);
   void py_q_doItemsLayout(QAbstractItemView* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_doItemsLayout());}
   QAbstractItemView::DragDropMode  dragDropMode(QAbstractItemView* theWrappedObject) const;
   bool  dragDropOverwriteMode(QAbstractItemView* theWrappedObject) const;
   bool  dragEnabled(QAbstractItemView* theWrappedObject) const;
   void py_q_dragEnterEvent(QAbstractItemView* theWrappedObject, QDragEnterEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void py_q_dragLeaveEvent(QAbstractItemView* theWrappedObject, QDragLeaveEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void py_q_dragMoveEvent(QAbstractItemView* theWrappedObject, QDragMoveEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void py_q_dropEvent(QAbstractItemView* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_dropEvent(event));}
   int  dropIndicatorPosition(QAbstractItemView* theWrappedObject) const;
   bool  edit(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
   bool  py_q_edit(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event){  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_edit(index, trigger, event));}
   QAbstractItemView::EditTriggers  editTriggers(QAbstractItemView* theWrappedObject) const;
   void py_q_editorDestroyed(QAbstractItemView* theWrappedObject, QObject*  editor){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_editorDestroyed(editor));}
   bool  py_q_event(QAbstractItemView* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_event(event));}
   bool  py_q_eventFilter(QAbstractItemView* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_eventFilter(object, event));}
   void executeDelayedItemsLayout(QAbstractItemView* theWrappedObject);
   void py_q_focusInEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  py_q_focusNextPrevChild(QAbstractItemView* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_focusOutEvent(event));}
   bool  hasAutoScroll(QAbstractItemView* theWrappedObject) const;
   int  horizontalOffset(QAbstractItemView* theWrappedObject) const;
   int  py_q_horizontalOffset(QAbstractItemView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_horizontalOffset());}
   QAbstractItemView::ScrollMode  horizontalScrollMode(QAbstractItemView* theWrappedObject) const;
   void py_q_horizontalScrollbarAction(QAbstractItemView* theWrappedObject, int  action){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_horizontalScrollbarAction(action));}
   void py_q_horizontalScrollbarValueChanged(QAbstractItemView* theWrappedObject, int  value){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_horizontalScrollbarValueChanged(value));}
   QSize  iconSize(QAbstractItemView* theWrappedObject) const;
   QModelIndex  indexAt(QAbstractItemView* theWrappedObject, const QPoint&  point) const;
   QModelIndex  py_q_indexAt(QAbstractItemView* theWrappedObject, const QPoint&  point) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_indexAt(point));}
   QWidget*  indexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   void py_q_inputMethodEvent(QAbstractItemView* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  py_q_inputMethodQuery(QAbstractItemView* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_inputMethodQuery(query));}
   bool  isIndexHidden(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   bool  py_q_isIndexHidden(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_isIndexHidden(index));}
   bool  isPersistentEditorOpen(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject) const;
   QAbstractItemDelegate*  itemDelegate(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   QAbstractItemDelegate*  itemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   QAbstractItemDelegate*  itemDelegateForRow(QAbstractItemView* theWrappedObject, int  row) const;
   void py_q_keyPressEvent(QAbstractItemView* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyboardSearch(QAbstractItemView* theWrappedObject, const QString&  search);
   void py_q_keyboardSearch(QAbstractItemView* theWrappedObject, const QString&  search){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_keyboardSearch(search));}
   QAbstractItemModel*  model(QAbstractItemView* theWrappedObject) const;
   void py_q_mouseDoubleClickEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void py_q_mouseMoveEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void py_q_mousePressEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_mouseReleaseEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   QModelIndex  moveCursor(QAbstractItemView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers);
   QModelIndex  py_q_moveCursor(QAbstractItemView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers){  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_moveCursor(cursorAction, modifiers));}
   void openPersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index);
   void py_q_reset(QAbstractItemView* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_reset());}
   void resetHorizontalScrollMode(QAbstractItemView* theWrappedObject);
   void resetVerticalScrollMode(QAbstractItemView* theWrappedObject);
   void py_q_resizeEvent(QAbstractItemView* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_resizeEvent(event));}
   QModelIndex  rootIndex(QAbstractItemView* theWrappedObject) const;
   void py_q_rowsAboutToBeRemoved(QAbstractItemView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_rowsAboutToBeRemoved(parent, start, end));}
   void py_q_rowsInserted(QAbstractItemView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_rowsInserted(parent, start, end));}
   void scheduleDelayedItemsLayout(QAbstractItemView* theWrappedObject);
   void scrollDirtyRegion(QAbstractItemView* theWrappedObject, int  dx, int  dy);
   void scrollTo(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   void py_q_scrollTo(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   void py_q_selectAll(QAbstractItemView* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_selectAll());}
   QList<QModelIndex >  selectedIndexes(QAbstractItemView* theWrappedObject) const;
   QList<QModelIndex >  py_q_selectedIndexes(QAbstractItemView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_selectedIndexes());}
   QAbstractItemView::SelectionBehavior  selectionBehavior(QAbstractItemView* theWrappedObject) const;
   void py_q_selectionChanged(QAbstractItemView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_selectionChanged(selected, deselected));}
   QItemSelectionModel::SelectionFlags  selectionCommand(QAbstractItemView* theWrappedObject, const QModelIndex&  index, const QEvent*  event = nullptr) const;
   QItemSelectionModel::SelectionFlags  py_q_selectionCommand(QAbstractItemView* theWrappedObject, const QModelIndex&  index, const QEvent*  event = nullptr) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_selectionCommand(index, event));}
   QAbstractItemView::SelectionMode  selectionMode(QAbstractItemView* theWrappedObject) const;
   QItemSelectionModel*  selectionModel(QAbstractItemView* theWrappedObject) const;
   void setAlternatingRowColors(QAbstractItemView* theWrappedObject, bool  enable);
   void setAutoScroll(QAbstractItemView* theWrappedObject, bool  enable);
   void setAutoScrollMargin(QAbstractItemView* theWrappedObject, int  margin);
   void setDefaultDropAction(QAbstractItemView* theWrappedObject, Qt::DropAction  dropAction);
   void setDirtyRegion(QAbstractItemView* theWrappedObject, const QRegion&  region);
   void setDragDropMode(QAbstractItemView* theWrappedObject, QAbstractItemView::DragDropMode  behavior);
   void setDragDropOverwriteMode(QAbstractItemView* theWrappedObject, bool  overwrite);
   void setDragEnabled(QAbstractItemView* theWrappedObject, bool  enable);
   void setDropIndicatorShown(QAbstractItemView* theWrappedObject, bool  enable);
   void setEditTriggers(QAbstractItemView* theWrappedObject, QAbstractItemView::EditTriggers  triggers);
   void setHorizontalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   void setIconSize(QAbstractItemView* theWrappedObject, const QSize&  size);
   void setIndexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setItemDelegate(QAbstractItemView* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setItemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column, QAbstractItemDelegate*  delegate);
   void setItemDelegateForRow(QAbstractItemView* theWrappedObject, int  row, QAbstractItemDelegate*  delegate);
   void setModel(QAbstractItemView* theWrappedObject, QAbstractItemModel*  model);
   void py_q_setModel(QAbstractItemView* theWrappedObject, QAbstractItemModel*  model){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_setModel(model));}
   void py_q_setRootIndex(QAbstractItemView* theWrappedObject, const QModelIndex&  index){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_setRootIndex(index));}
   void setSelection(QAbstractItemView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   void py_q_setSelection(QAbstractItemView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_setSelection(rect, command));}
   void setSelectionBehavior(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionBehavior  behavior);
   void setSelectionMode(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionMode  mode);
   void setSelectionModel(QAbstractItemView* theWrappedObject, QItemSelectionModel*  selectionModel);
   void py_q_setSelectionModel(QAbstractItemView* theWrappedObject, QItemSelectionModel*  selectionModel){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_setSelectionModel(selectionModel));}
   void setState(QAbstractItemView* theWrappedObject, int  state);
   void setTabKeyNavigation(QAbstractItemView* theWrappedObject, bool  enable);
   void setTextElideMode(QAbstractItemView* theWrappedObject, Qt::TextElideMode  mode);
   void setVerticalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode);
   bool  showDropIndicator(QAbstractItemView* theWrappedObject) const;
   int  sizeHintForColumn(QAbstractItemView* theWrappedObject, int  column) const;
   int  py_q_sizeHintForColumn(QAbstractItemView* theWrappedObject, int  column) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_sizeHintForColumn(column));}
   QSize  sizeHintForIndex(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   int  sizeHintForRow(QAbstractItemView* theWrappedObject, int  row) const;
   int  py_q_sizeHintForRow(QAbstractItemView* theWrappedObject, int  row) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_sizeHintForRow(row));}
   void startAutoScroll(QAbstractItemView* theWrappedObject);
   void startDrag(QAbstractItemView* theWrappedObject, Qt::DropActions  supportedActions);
   void py_q_startDrag(QAbstractItemView* theWrappedObject, Qt::DropActions  supportedActions){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_startDrag(supportedActions));}
   int  state(QAbstractItemView* theWrappedObject) const;
   void stopAutoScroll(QAbstractItemView* theWrappedObject);
   bool  tabKeyNavigation(QAbstractItemView* theWrappedObject) const;
   Qt::TextElideMode  textElideMode(QAbstractItemView* theWrappedObject) const;
   void py_q_timerEvent(QAbstractItemView* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_timerEvent(event));}
   void py_q_updateEditorData(QAbstractItemView* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_updateEditorData());}
   void py_q_updateEditorGeometries(QAbstractItemView* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_updateEditorGeometries());}
   void py_q_updateGeometries(QAbstractItemView* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_updateGeometries());}
   int  verticalOffset(QAbstractItemView* theWrappedObject) const;
   int  py_q_verticalOffset(QAbstractItemView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_verticalOffset());}
   QAbstractItemView::ScrollMode  verticalScrollMode(QAbstractItemView* theWrappedObject) const;
   void py_q_verticalScrollbarAction(QAbstractItemView* theWrappedObject, int  action){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_verticalScrollbarAction(action));}
   void py_q_verticalScrollbarValueChanged(QAbstractItemView* theWrappedObject, int  value){  (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_verticalScrollbarValueChanged(value));}
   QStyleOptionViewItem  viewOptions(QAbstractItemView* theWrappedObject) const;
   QStyleOptionViewItem  py_q_viewOptions(QAbstractItemView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_viewOptions());}
   bool  py_q_viewportEvent(QAbstractItemView* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_viewportEvent(event));}
   QSize  py_q_viewportSizeHint(QAbstractItemView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_viewportSizeHint());}
   QRect  visualRect(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const;
   QRect  py_q_visualRect(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  visualRegionForSelection(QAbstractItemView* theWrappedObject, const QItemSelection&  selection) const;
   QRegion  py_q_visualRegionForSelection(QAbstractItemView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
};





class PythonQtShell_QAbstractPrintDialog : public QAbstractPrintDialog
{
public:
    PythonQtShell_QAbstractPrintDialog(QPrinter*  printer, QWidget*  parent = nullptr):QAbstractPrintDialog(printer, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractPrintDialog() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void done(int  arg__1) override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
int  exec() override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
void open() override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reject() override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractPrintDialog : public QAbstractPrintDialog
{ public:
inline int  py_q_exec() { return this->exec(); }
};

class PythonQtWrapper_QAbstractPrintDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PrintDialogOption PrintRange )
Q_FLAGS(PrintDialogOptions )
enum PrintDialogOption{
  None = QAbstractPrintDialog::None,   PrintToFile = QAbstractPrintDialog::PrintToFile,   PrintSelection = QAbstractPrintDialog::PrintSelection,   PrintPageRange = QAbstractPrintDialog::PrintPageRange,   PrintShowPageSize = QAbstractPrintDialog::PrintShowPageSize,   PrintCollateCopies = QAbstractPrintDialog::PrintCollateCopies,   DontUseSheet = QAbstractPrintDialog::DontUseSheet,   PrintCurrentPage = QAbstractPrintDialog::PrintCurrentPage};
enum PrintRange{
  AllPages = QAbstractPrintDialog::AllPages,   Selection = QAbstractPrintDialog::Selection,   PageRange = QAbstractPrintDialog::PageRange,   CurrentPage = QAbstractPrintDialog::CurrentPage};
Q_DECLARE_FLAGS(PrintDialogOptions, PrintDialogOption)
public slots:
QAbstractPrintDialog* new_QAbstractPrintDialog(QPrinter*  printer, QWidget*  parent = nullptr);
void delete_QAbstractPrintDialog(QAbstractPrintDialog* obj) { delete obj; }
   void addEnabledOption(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option);
   QAbstractPrintDialog::PrintDialogOptions  enabledOptions(QAbstractPrintDialog* theWrappedObject) const;
   int  py_q_exec(QAbstractPrintDialog* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractPrintDialog*)theWrappedObject)->py_q_exec());}
   int  fromPage(QAbstractPrintDialog* theWrappedObject) const;
   bool  isOptionEnabled(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOption  option) const;
   int  maxPage(QAbstractPrintDialog* theWrappedObject) const;
   int  minPage(QAbstractPrintDialog* theWrappedObject) const;
   QAbstractPrintDialog::PrintRange  printRange(QAbstractPrintDialog* theWrappedObject) const;
   QPrinter*  printer(QAbstractPrintDialog* theWrappedObject) const;
   void setEnabledOptions(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintDialogOptions  options);
   void setFromTo(QAbstractPrintDialog* theWrappedObject, int  fromPage, int  toPage);
   void setMinMax(QAbstractPrintDialog* theWrappedObject, int  min, int  max);
   void setOptionTabs(QAbstractPrintDialog* theWrappedObject, const QList<QWidget* >&  tabs);
   void setPrintRange(QAbstractPrintDialog* theWrappedObject, QAbstractPrintDialog::PrintRange  range);
   int  toPage(QAbstractPrintDialog* theWrappedObject) const;
};





class PythonQtShell_QAbstractProxyModel : public QAbstractProxyModel
{
public:
    PythonQtShell_QAbstractProxyModel(QObject*  parent = nullptr):QAbstractProxyModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractProxyModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QModelIndex  mapFromSource(const QModelIndex&  sourceIndex) const override;
QItemSelection  mapSelectionFromSource(const QItemSelection&  selection) const override;
QItemSelection  mapSelectionToSource(const QItemSelection&  selection) const override;
QModelIndex  mapToSource(const QModelIndex&  proxyIndex) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
QModelIndex  parent(const QModelIndex&  child) const override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
void setSourceModel(QAbstractItemModel*  sourceModel) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractProxyModel : public QAbstractProxyModel
{ public:
inline void promoted_resetInternalData() { this->resetInternalData(); }
inline QModelIndex  py_q_buddy(const QModelIndex&  index) const { return QAbstractProxyModel::buddy(index); }
inline bool  py_q_canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const { return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent); }
inline bool  py_q_canFetchMore(const QModelIndex&  parent) const { return QAbstractProxyModel::canFetchMore(parent); }
inline QVariant  py_q_data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const { return QAbstractProxyModel::data(proxyIndex, role); }
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractProxyModel::dropMimeData(data, action, row, column, parent); }
inline void py_q_fetchMore(const QModelIndex&  parent) { QAbstractProxyModel::fetchMore(parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractProxyModel::flags(index); }
inline bool  py_q_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QAbstractProxyModel::hasChildren(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QAbstractProxyModel::headerData(section, orientation, role); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  index) const { return QAbstractProxyModel::itemData(index); }
inline QModelIndex  py_q_mapFromSource(const QModelIndex&  sourceIndex) const { return this->mapFromSource(sourceIndex); }
inline QItemSelection  py_q_mapSelectionFromSource(const QItemSelection&  selection) const { return QAbstractProxyModel::mapSelectionFromSource(selection); }
inline QItemSelection  py_q_mapSelectionToSource(const QItemSelection&  selection) const { return QAbstractProxyModel::mapSelectionToSource(selection); }
inline QModelIndex  py_q_mapToSource(const QModelIndex&  proxyIndex) const { return this->mapToSource(proxyIndex); }
inline QMimeData*  py_q_mimeData(const QList<QModelIndex >&  indexes) const { return QAbstractProxyModel::mimeData(indexes); }
inline QStringList  py_q_mimeTypes() const { return QAbstractProxyModel::mimeTypes(); }
inline void py_q_revert() { QAbstractProxyModel::revert(); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractProxyModel::setData(index, value, role); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractProxyModel::setHeaderData(section, orientation, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QAbstractProxyModel::setItemData(index, roles); }
inline void py_q_setSourceModel(QAbstractItemModel*  sourceModel) { QAbstractProxyModel::setSourceModel(sourceModel); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractProxyModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QAbstractProxyModel::sort(column, order); }
inline QSize  py_q_span(const QModelIndex&  index) const { return QAbstractProxyModel::span(index); }
inline bool  py_q_submit() { return QAbstractProxyModel::submit(); }
inline Qt::DropActions  py_q_supportedDragActions() const { return QAbstractProxyModel::supportedDragActions(); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QAbstractProxyModel::supportedDropActions(); }
};

class PythonQtWrapper_QAbstractProxyModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractProxyModel* new_QAbstractProxyModel(QObject*  parent = nullptr);
void delete_QAbstractProxyModel(QAbstractProxyModel* obj) { delete obj; }
   QModelIndex  py_q_buddy(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_buddy(index));}
   bool  py_q_canDropMimeData(QAbstractProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_canDropMimeData(data, action, row, column, parent));}
   bool  py_q_canFetchMore(QAbstractProxyModel* theWrappedObject, const QModelIndex&  parent) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_canFetchMore(parent));}
   QVariant  py_q_data(QAbstractProxyModel* theWrappedObject, const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_data(proxyIndex, role));}
   bool  py_q_dropMimeData(QAbstractProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   void py_q_fetchMore(QAbstractProxyModel* theWrappedObject, const QModelIndex&  parent){  (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_fetchMore(parent));}
   Qt::ItemFlags  py_q_flags(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_flags(index));}
   bool  py_q_hasChildren(QAbstractProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_hasChildren(parent));}
   QVariant  py_q_headerData(QAbstractProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QMap<int , QVariant >  py_q_itemData(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_itemData(index));}
   QModelIndex  mapFromSource(QAbstractProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const;
   QModelIndex  py_q_mapFromSource(QAbstractProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_mapFromSource(sourceIndex));}
   QItemSelection  mapSelectionFromSource(QAbstractProxyModel* theWrappedObject, const QItemSelection&  selection) const;
   QItemSelection  py_q_mapSelectionFromSource(QAbstractProxyModel* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_mapSelectionFromSource(selection));}
   QItemSelection  mapSelectionToSource(QAbstractProxyModel* theWrappedObject, const QItemSelection&  selection) const;
   QItemSelection  py_q_mapSelectionToSource(QAbstractProxyModel* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_mapSelectionToSource(selection));}
   QModelIndex  mapToSource(QAbstractProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const;
   QModelIndex  py_q_mapToSource(QAbstractProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_mapToSource(proxyIndex));}
   QMimeData*  py_q_mimeData(QAbstractProxyModel* theWrappedObject, const QList<QModelIndex >&  indexes) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_mimeData(indexes));}
   QStringList  py_q_mimeTypes(QAbstractProxyModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_mimeTypes());}
   void py_q_revert(QAbstractProxyModel* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_revert());}
   bool  py_q_setData(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_setData(index, value, role));}
   bool  py_q_setHeaderData(QAbstractProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   bool  py_q_setItemData(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   void setSourceModel(QAbstractProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel);
   void py_q_setSourceModel(QAbstractProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel){  (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_setSourceModel(sourceModel));}
   QModelIndex  py_q_sibling(QAbstractProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void py_q_sort(QAbstractProxyModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_sort(column, order));}
   QAbstractItemModel*  sourceModel(QAbstractProxyModel* theWrappedObject) const;
   QSize  py_q_span(QAbstractProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_span(index));}
   bool  py_q_submit(QAbstractProxyModel* theWrappedObject){  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_submit());}
   Qt::DropActions  py_q_supportedDragActions(QAbstractProxyModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_supportedDragActions());}
   Qt::DropActions  py_q_supportedDropActions(QAbstractProxyModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractProxyModel*)theWrappedObject)->py_q_supportedDropActions());}
};





class PythonQtShell_QAbstractScrollArea : public QAbstractScrollArea
{
public:
    PythonQtShell_QAbstractScrollArea(QWidget*  parent = nullptr):QAbstractScrollArea(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractScrollArea() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  arg__1) override;
void dragLeaveEvent(QDragLeaveEvent*  arg__1) override;
void dragMoveEvent(QDragMoveEvent*  arg__1) override;
void dropEvent(QDropEvent*  arg__1) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  arg__1) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  arg__1) override;
void scrollContentsBy(int  dx, int  dy) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
bool  viewportEvent(QEvent*  arg__1) override;
QSize  viewportSizeHint() const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractScrollArea : public QAbstractScrollArea
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { this->contextMenuEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { this->dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { this->dragLeaveEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { this->dragMoveEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { this->dropEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { this->mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_setViewportMargins(const QMargins&  margins) { this->setViewportMargins(margins); }
inline void promoted_setViewportMargins(int  left, int  top, int  right, int  bottom) { this->setViewportMargins(left, top, right, bottom); }
inline bool  promoted_viewportEvent(QEvent*  arg__1) { return this->viewportEvent(arg__1); }
inline QMargins  promoted_viewportMargins() const { return this->viewportMargins(); }
inline QSize  promoted_viewportSizeHint() const { return this->viewportSizeHint(); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { this->wheelEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  arg__1) { QAbstractScrollArea::contextMenuEvent(arg__1); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  arg__1) { QAbstractScrollArea::dragEnterEvent(arg__1); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QAbstractScrollArea::dragLeaveEvent(arg__1); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  arg__1) { QAbstractScrollArea::dragMoveEvent(arg__1); }
inline void py_q_dropEvent(QDropEvent*  arg__1) { QAbstractScrollArea::dropEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QAbstractScrollArea::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QAbstractScrollArea::eventFilter(arg__1, arg__2); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QAbstractScrollArea::keyPressEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QAbstractScrollArea::minimumSizeHint(); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseDoubleClickEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QAbstractScrollArea::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QAbstractScrollArea::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QAbstractScrollArea::resizeEvent(arg__1); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QAbstractScrollArea::scrollContentsBy(dx, dy); }
inline void py_q_setupViewport(QWidget*  viewport) { QAbstractScrollArea::setupViewport(viewport); }
inline QSize  py_q_sizeHint() const { return QAbstractScrollArea::sizeHint(); }
inline bool  py_q_viewportEvent(QEvent*  arg__1) { return QAbstractScrollArea::viewportEvent(arg__1); }
inline QSize  py_q_viewportSizeHint() const { return QAbstractScrollArea::viewportSizeHint(); }
inline void py_q_wheelEvent(QWheelEvent*  arg__1) { QAbstractScrollArea::wheelEvent(arg__1); }
};

class PythonQtWrapper_QAbstractScrollArea : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractScrollArea* new_QAbstractScrollArea(QWidget*  parent = nullptr);
void delete_QAbstractScrollArea(QAbstractScrollArea* obj) { delete obj; }
   void addScrollBarWidget(QAbstractScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, Qt::Alignment  alignment);
   void py_q_contextMenuEvent(QAbstractScrollArea* theWrappedObject, QContextMenuEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_contextMenuEvent(arg__1));}
   QWidget*  cornerWidget(QAbstractScrollArea* theWrappedObject) const;
   void py_q_dragEnterEvent(QAbstractScrollArea* theWrappedObject, QDragEnterEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_dragEnterEvent(arg__1));}
   void py_q_dragLeaveEvent(QAbstractScrollArea* theWrappedObject, QDragLeaveEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_dragLeaveEvent(arg__1));}
   void py_q_dragMoveEvent(QAbstractScrollArea* theWrappedObject, QDragMoveEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_dragMoveEvent(arg__1));}
   void py_q_dropEvent(QAbstractScrollArea* theWrappedObject, QDropEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_dropEvent(arg__1));}
   bool  py_q_event(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QAbstractScrollArea* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   QScrollBar*  horizontalScrollBar(QAbstractScrollArea* theWrappedObject) const;
   Qt::ScrollBarPolicy  horizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const;
   void py_q_keyPressEvent(QAbstractScrollArea* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   QSize  maximumViewportSize(QAbstractScrollArea* theWrappedObject) const;
   QSize  minimumSizeHint(QAbstractScrollArea* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QAbstractScrollArea* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseDoubleClickEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_mouseDoubleClickEvent(arg__1));}
   void py_q_mouseMoveEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_paintEvent(QAbstractScrollArea* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void py_q_resizeEvent(QAbstractScrollArea* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   QList<QWidget* >  scrollBarWidgets(QAbstractScrollArea* theWrappedObject, Qt::Alignment  alignment);
   void scrollContentsBy(QAbstractScrollArea* theWrappedObject, int  dx, int  dy);
   void py_q_scrollContentsBy(QAbstractScrollArea* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void setCornerWidget(QAbstractScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setHorizontalScrollBar(QAbstractScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QScrollBar* >  scrollbar);
   void setHorizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1);
   void setSizeAdjustPolicy(QAbstractScrollArea* theWrappedObject, QAbstractScrollArea::SizeAdjustPolicy  policy);
   void setVerticalScrollBar(QAbstractScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QScrollBar* >  scrollbar);
   void setVerticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1);
   void setViewport(QAbstractScrollArea* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void setViewportMargins(QAbstractScrollArea* theWrappedObject, const QMargins&  margins);
   void setViewportMargins(QAbstractScrollArea* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setupViewport(QAbstractScrollArea* theWrappedObject, QWidget*  viewport);
   void py_q_setupViewport(QAbstractScrollArea* theWrappedObject, QWidget*  viewport){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_setupViewport(viewport));}
   QAbstractScrollArea::SizeAdjustPolicy  sizeAdjustPolicy(QAbstractScrollArea* theWrappedObject) const;
   QSize  py_q_sizeHint(QAbstractScrollArea* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_sizeHint());}
   QScrollBar*  verticalScrollBar(QAbstractScrollArea* theWrappedObject) const;
   Qt::ScrollBarPolicy  verticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const;
   QWidget*  viewport(QAbstractScrollArea* theWrappedObject) const;
   bool  viewportEvent(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1);
   bool  py_q_viewportEvent(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_viewportEvent(arg__1));}
   QMargins  viewportMargins(QAbstractScrollArea* theWrappedObject) const;
   QSize  viewportSizeHint(QAbstractScrollArea* theWrappedObject) const;
   QSize  py_q_viewportSizeHint(QAbstractScrollArea* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_viewportSizeHint());}
   void py_q_wheelEvent(QAbstractScrollArea* theWrappedObject, QWheelEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)->py_q_wheelEvent(arg__1));}
};





class PythonQtShell_QAbstractSlider : public QAbstractSlider
{
public:
    PythonQtShell_QAbstractSlider(QWidget*  parent = nullptr):QAbstractSlider(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractSlider() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
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
bool  event(QEvent*  e) override;
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
void keyPressEvent(QKeyEvent*  ev) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
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
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void sliderChange(QAbstractSlider::SliderChange  change) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractSlider : public QAbstractSlider
{ public:
enum SliderChange{
  SliderRangeChange = QAbstractSlider::SliderRangeChange,   SliderOrientationChange = QAbstractSlider::SliderOrientationChange,   SliderStepsChange = QAbstractSlider::SliderStepsChange,   SliderValueChange = QAbstractSlider::SliderValueChange};
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { this->keyPressEvent(ev); }
inline QAbstractSlider::SliderAction  promoted_repeatAction() const { return this->repeatAction(); }
inline void promoted_setRepeatAction(QAbstractSlider::SliderAction  action, int  thresholdTime = 500, int  repeatTime = 50) { this->setRepeatAction(action, thresholdTime, repeatTime); }
inline void promoted_sliderChange(int  change) { this->sliderChange((QAbstractSlider::SliderChange)change); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  e) { this->wheelEvent(e); }
inline void py_q_changeEvent(QEvent*  e) { QAbstractSlider::changeEvent(e); }
inline bool  py_q_event(QEvent*  e) { return QAbstractSlider::event(e); }
inline void py_q_keyPressEvent(QKeyEvent*  ev) { QAbstractSlider::keyPressEvent(ev); }
inline void py_q_sliderChange(int  change) { QAbstractSlider::sliderChange((QAbstractSlider::SliderChange)change); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QAbstractSlider::timerEvent(arg__1); }
inline void py_q_wheelEvent(QWheelEvent*  e) { QAbstractSlider::wheelEvent(e); }
};

class PythonQtWrapper_QAbstractSlider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SliderAction SliderChange )
enum SliderAction{
  SliderNoAction = QAbstractSlider::SliderNoAction,   SliderSingleStepAdd = QAbstractSlider::SliderSingleStepAdd,   SliderSingleStepSub = QAbstractSlider::SliderSingleStepSub,   SliderPageStepAdd = QAbstractSlider::SliderPageStepAdd,   SliderPageStepSub = QAbstractSlider::SliderPageStepSub,   SliderToMinimum = QAbstractSlider::SliderToMinimum,   SliderToMaximum = QAbstractSlider::SliderToMaximum,   SliderMove = QAbstractSlider::SliderMove};
enum SliderChange{
  SliderRangeChange = PythonQtPublicPromoter_QAbstractSlider::SliderRangeChange,   SliderOrientationChange = PythonQtPublicPromoter_QAbstractSlider::SliderOrientationChange,   SliderStepsChange = PythonQtPublicPromoter_QAbstractSlider::SliderStepsChange,   SliderValueChange = PythonQtPublicPromoter_QAbstractSlider::SliderValueChange};
public slots:
QAbstractSlider* new_QAbstractSlider(QWidget*  parent = nullptr);
void delete_QAbstractSlider(QAbstractSlider* obj) { delete obj; }
   void py_q_changeEvent(QAbstractSlider* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QAbstractSlider*)theWrappedObject)->py_q_changeEvent(e));}
   bool  py_q_event(QAbstractSlider* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QAbstractSlider*)theWrappedObject)->py_q_event(e));}
   bool  hasTracking(QAbstractSlider* theWrappedObject) const;
   bool  invertedAppearance(QAbstractSlider* theWrappedObject) const;
   bool  invertedControls(QAbstractSlider* theWrappedObject) const;
   bool  isSliderDown(QAbstractSlider* theWrappedObject) const;
   void py_q_keyPressEvent(QAbstractSlider* theWrappedObject, QKeyEvent*  ev){  (((PythonQtPublicPromoter_QAbstractSlider*)theWrappedObject)->py_q_keyPressEvent(ev));}
   int  maximum(QAbstractSlider* theWrappedObject) const;
   int  minimum(QAbstractSlider* theWrappedObject) const;
   Qt::Orientation  orientation(QAbstractSlider* theWrappedObject) const;
   int  pageStep(QAbstractSlider* theWrappedObject) const;
   QAbstractSlider::SliderAction  repeatAction(QAbstractSlider* theWrappedObject) const;
   void setInvertedAppearance(QAbstractSlider* theWrappedObject, bool  arg__1);
   void setInvertedControls(QAbstractSlider* theWrappedObject, bool  arg__1);
   void setMaximum(QAbstractSlider* theWrappedObject, int  arg__1);
   void setMinimum(QAbstractSlider* theWrappedObject, int  arg__1);
   void setPageStep(QAbstractSlider* theWrappedObject, int  arg__1);
   void setRepeatAction(QAbstractSlider* theWrappedObject, QAbstractSlider::SliderAction  action, int  thresholdTime = 500, int  repeatTime = 50);
   void setSingleStep(QAbstractSlider* theWrappedObject, int  arg__1);
   void setSliderDown(QAbstractSlider* theWrappedObject, bool  arg__1);
   void setSliderPosition(QAbstractSlider* theWrappedObject, int  arg__1);
   void setTracking(QAbstractSlider* theWrappedObject, bool  enable);
   int  singleStep(QAbstractSlider* theWrappedObject) const;
   void sliderChange(QAbstractSlider* theWrappedObject, int  change);
   void py_q_sliderChange(QAbstractSlider* theWrappedObject, int  change){  (((PythonQtPublicPromoter_QAbstractSlider*)theWrappedObject)->py_q_sliderChange(change));}
   int  sliderPosition(QAbstractSlider* theWrappedObject) const;
   void py_q_timerEvent(QAbstractSlider* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QAbstractSlider*)theWrappedObject)->py_q_timerEvent(arg__1));}
   void triggerAction(QAbstractSlider* theWrappedObject, QAbstractSlider::SliderAction  action);
   int  value(QAbstractSlider* theWrappedObject) const;
   void py_q_wheelEvent(QAbstractSlider* theWrappedObject, QWheelEvent*  e){  (((PythonQtPublicPromoter_QAbstractSlider*)theWrappedObject)->py_q_wheelEvent(e));}
};





class PythonQtShell_QAbstractSpinBox : public QAbstractSpinBox
{
public:
    PythonQtShell_QAbstractSpinBox(QWidget*  parent = nullptr):QAbstractSpinBox(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractSpinBox() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void clear() override;
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
void fixup(QString&  input) const override;
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
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void stepBy(int  steps) override;
QAbstractSpinBox::StepEnabled  stepEnabled() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  input, int&  pos) const override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractSpinBox : public QAbstractSpinBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_initStyleOption(QStyleOptionSpinBox*  option) const { this->initStyleOption(option); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline QLineEdit*  promoted_lineEdit() const { return this->lineEdit(); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_setLineEdit(QLineEdit*  edit) { this->setLineEdit(edit); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline QAbstractSpinBox::StepEnabled  promoted_stepEnabled() const { return this->stepEnabled(); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QAbstractSpinBox::changeEvent(event); }
inline void py_q_clear() { QAbstractSpinBox::clear(); }
inline void py_q_closeEvent(QCloseEvent*  event) { QAbstractSpinBox::closeEvent(event); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  event) { QAbstractSpinBox::contextMenuEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QAbstractSpinBox::event(event); }
inline void py_q_fixup(QString&  input) const { QAbstractSpinBox::fixup(input); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QAbstractSpinBox::focusInEvent(event); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QAbstractSpinBox::focusOutEvent(event); }
inline void py_q_hideEvent(QHideEvent*  event) { QAbstractSpinBox::hideEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QAbstractSpinBox::inputMethodQuery(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QAbstractSpinBox::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QAbstractSpinBox::keyReleaseEvent(event); }
inline QSize  py_q_minimumSizeHint() const { return QAbstractSpinBox::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QAbstractSpinBox::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseReleaseEvent(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QAbstractSpinBox::paintEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QAbstractSpinBox::resizeEvent(event); }
inline void py_q_showEvent(QShowEvent*  event) { QAbstractSpinBox::showEvent(event); }
inline QSize  py_q_sizeHint() const { return QAbstractSpinBox::sizeHint(); }
inline void py_q_stepBy(int  steps) { QAbstractSpinBox::stepBy(steps); }
inline QAbstractSpinBox::StepEnabled  py_q_stepEnabled() const { return QAbstractSpinBox::stepEnabled(); }
inline void py_q_timerEvent(QTimerEvent*  event) { QAbstractSpinBox::timerEvent(event); }
inline QValidator::State  py_q_validate(QString&  input, int&  pos) const { return QAbstractSpinBox::validate(input, pos); }
inline void py_q_wheelEvent(QWheelEvent*  event) { QAbstractSpinBox::wheelEvent(event); }
};

class PythonQtWrapper_QAbstractSpinBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StepEnabledFlag )
Q_FLAGS(StepEnabled )
enum StepEnabledFlag{
  StepNone = QAbstractSpinBox::StepNone,   StepUpEnabled = QAbstractSpinBox::StepUpEnabled,   StepDownEnabled = QAbstractSpinBox::StepDownEnabled};
Q_DECLARE_FLAGS(StepEnabled, StepEnabledFlag)
public slots:
QAbstractSpinBox* new_QAbstractSpinBox(QWidget*  parent = nullptr);
void delete_QAbstractSpinBox(QAbstractSpinBox* obj) { delete obj; }
   Qt::Alignment  alignment(QAbstractSpinBox* theWrappedObject) const;
   QAbstractSpinBox::ButtonSymbols  buttonSymbols(QAbstractSpinBox* theWrappedObject) const;
   void py_q_changeEvent(QAbstractSpinBox* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_changeEvent(event));}
   void py_q_clear(QAbstractSpinBox* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_clear());}
   void py_q_closeEvent(QAbstractSpinBox* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_closeEvent(event));}
   void py_q_contextMenuEvent(QAbstractSpinBox* theWrappedObject, QContextMenuEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QAbstractSpinBox::CorrectionMode  correctionMode(QAbstractSpinBox* theWrappedObject) const;
   bool  py_q_event(QAbstractSpinBox* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_event(event));}
   void fixup(QAbstractSpinBox* theWrappedObject, QString&  input) const;
   void py_q_fixup(QAbstractSpinBox* theWrappedObject, QString&  input) const{  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_fixup(input));}
   void py_q_focusInEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_focusInEvent(event));}
   void py_q_focusOutEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_focusOutEvent(event));}
   bool  hasAcceptableInput(QAbstractSpinBox* theWrappedObject) const;
   bool  hasFrame(QAbstractSpinBox* theWrappedObject) const;
   void py_q_hideEvent(QAbstractSpinBox* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_hideEvent(event));}
   void initStyleOption(QAbstractSpinBox* theWrappedObject, QStyleOptionSpinBox*  option) const;
   QVariant  py_q_inputMethodQuery(QAbstractSpinBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const{  return (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_inputMethodQuery(arg__1));}
   void interpretText(QAbstractSpinBox* theWrappedObject);
   bool  isAccelerated(QAbstractSpinBox* theWrappedObject) const;
   bool  isGroupSeparatorShown(QAbstractSpinBox* theWrappedObject) const;
   bool  isReadOnly(QAbstractSpinBox* theWrappedObject) const;
   void py_q_keyPressEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_keyPressEvent(event));}
   void py_q_keyReleaseEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   bool  keyboardTracking(QAbstractSpinBox* theWrappedObject) const;
   QLineEdit*  lineEdit(QAbstractSpinBox* theWrappedObject) const;
   QSize  minimumSizeHint(QAbstractSpinBox* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QAbstractSpinBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void py_q_mousePressEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_mouseReleaseEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void py_q_paintEvent(QAbstractSpinBox* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_paintEvent(event));}
   void py_q_resizeEvent(QAbstractSpinBox* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_resizeEvent(event));}
   void setAccelerated(QAbstractSpinBox* theWrappedObject, bool  on);
   void setAlignment(QAbstractSpinBox* theWrappedObject, Qt::Alignment  flag);
   void setButtonSymbols(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  bs);
   void setCorrectionMode(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::CorrectionMode  cm);
   void setFrame(QAbstractSpinBox* theWrappedObject, bool  arg__1);
   void setGroupSeparatorShown(QAbstractSpinBox* theWrappedObject, bool  shown);
   void setKeyboardTracking(QAbstractSpinBox* theWrappedObject, bool  kt);
   void setLineEdit(QAbstractSpinBox* theWrappedObject, QLineEdit*  edit);
   void setReadOnly(QAbstractSpinBox* theWrappedObject, bool  r);
   void setSpecialValueText(QAbstractSpinBox* theWrappedObject, const QString&  txt);
   void setWrapping(QAbstractSpinBox* theWrappedObject, bool  w);
   void py_q_showEvent(QAbstractSpinBox* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_showEvent(event));}
   QSize  sizeHint(QAbstractSpinBox* theWrappedObject) const;
   QSize  py_q_sizeHint(QAbstractSpinBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_sizeHint());}
   QString  specialValueText(QAbstractSpinBox* theWrappedObject) const;
   void stepBy(QAbstractSpinBox* theWrappedObject, int  steps);
   void py_q_stepBy(QAbstractSpinBox* theWrappedObject, int  steps){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_stepBy(steps));}
   QAbstractSpinBox::StepEnabled  stepEnabled(QAbstractSpinBox* theWrappedObject) const;
   QAbstractSpinBox::StepEnabled  py_q_stepEnabled(QAbstractSpinBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_stepEnabled());}
   QString  text(QAbstractSpinBox* theWrappedObject) const;
   void py_q_timerEvent(QAbstractSpinBox* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_timerEvent(event));}
   QValidator::State  validate(QAbstractSpinBox* theWrappedObject, QString&  input, int&  pos) const;
   QValidator::State  py_q_validate(QAbstractSpinBox* theWrappedObject, QString&  input, int&  pos) const{  return (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_validate(input, pos));}
   void py_q_wheelEvent(QAbstractSpinBox* theWrappedObject, QWheelEvent*  event){  (((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->py_q_wheelEvent(event));}
   bool  wrapping(QAbstractSpinBox* theWrappedObject) const;
};





class PythonQtShell_QAbstractTableModel : public QAbstractTableModel
{
public:
    PythonQtShell_QAbstractTableModel(QObject*  parent = nullptr):QAbstractTableModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractTableModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractTableModel : public QAbstractTableModel
{ public:
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractTableModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractTableModel::flags(index); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QAbstractTableModel::index(row, column, parent); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractTableModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QAbstractTableModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTableModel* new_QAbstractTableModel(QObject*  parent = nullptr);
void delete_QAbstractTableModel(QAbstractTableModel* obj) { delete obj; }
   bool  py_q_dropMimeData(QAbstractTableModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   Qt::ItemFlags  py_q_flags(QAbstractTableModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_flags(index));}
   QModelIndex  py_q_index(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_index(row, column, parent));}
   QModelIndex  py_q_sibling(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
};





class PythonQtShell_QAbstractTextDocumentLayout : public QAbstractTextDocumentLayout
{
public:
    PythonQtShell_QAbstractTextDocumentLayout(QTextDocument*  doc):QAbstractTextDocumentLayout(doc),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractTextDocumentLayout() override;

QRectF  blockBoundingRect(const QTextBlock&  block) const override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
void documentChanged(int  from, int  charsRemoved, int  charsAdded) override;
QSizeF  documentSize() const override;
void draw(QPainter*  painter, const QAbstractTextDocumentLayout::PaintContext&  context) override;
void drawInlineObject(QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QRectF  frameBoundingRect(QTextFrame*  frame) const override;
int  hitTest(const QPointF&  point, Qt::HitTestAccuracy  accuracy) const override;
int  pageCount() const override;
void positionInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) override;
void resizeInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractTextDocumentLayout : public QAbstractTextDocumentLayout
{ public:
inline void promoted_documentChanged(int  from, int  charsRemoved, int  charsAdded) { this->documentChanged(from, charsRemoved, charsAdded); }
inline void promoted_drawInlineObject(QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format) { this->drawInlineObject(painter, rect, object, posInDocument, format); }
inline QTextCharFormat  promoted_format(int  pos) { return this->format(pos); }
inline int  promoted_formatIndex(int  pos) { return this->formatIndex(pos); }
inline void promoted_positionInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) { this->positionInlineObject(item, posInDocument, format); }
inline void promoted_resizeInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) { this->resizeInlineObject(item, posInDocument, format); }
inline QRectF  py_q_blockBoundingRect(const QTextBlock&  block) const { return this->blockBoundingRect(block); }
inline void py_q_documentChanged(int  from, int  charsRemoved, int  charsAdded) { this->documentChanged(from, charsRemoved, charsAdded); }
inline QSizeF  py_q_documentSize() const { return this->documentSize(); }
inline void py_q_draw(QPainter*  painter, const QAbstractTextDocumentLayout::PaintContext&  context) { this->draw(painter, context); }
inline void py_q_drawInlineObject(QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format) { QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format); }
inline QRectF  py_q_frameBoundingRect(QTextFrame*  frame) const { return this->frameBoundingRect(frame); }
inline int  py_q_hitTest(const QPointF&  point, Qt::HitTestAccuracy  accuracy) const { return this->hitTest(point, accuracy); }
inline int  py_q_pageCount() const { return this->pageCount(); }
inline void py_q_positionInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) { QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format); }
inline void py_q_resizeInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format) { QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format); }
};

class PythonQtWrapper_QAbstractTextDocumentLayout : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTextDocumentLayout* new_QAbstractTextDocumentLayout(QTextDocument*  doc);
void delete_QAbstractTextDocumentLayout(QAbstractTextDocumentLayout* obj) { delete obj; }
   QString  anchorAt(QAbstractTextDocumentLayout* theWrappedObject, const QPointF&  pos) const;
   QRectF  blockBoundingRect(QAbstractTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   QRectF  py_q_blockBoundingRect(QAbstractTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const{  return (((PythonQtPublicPromoter_QAbstractTextDocumentLayout*)theWrappedObject)->py_q_blockBoundingRect(block));}
   QTextDocument*  document(QAbstractTextDocumentLayout* theWrappedObject) const;
   void documentChanged(QAbstractTextDocumentLayout* theWrappedObject, int  from, int  charsRemoved, int  charsAdded);
   void py_q_documentChanged(QAbstractTextDocumentLayout* theWrappedObject, int  from, int  charsRemoved, int  charsAdded){  (((PythonQtPublicPromoter_QAbstractTextDocumentLayout*)theWrappedObject)->py_q_documentChanged(from, charsRemoved, charsAdded));}
   QSizeF  documentSize(QAbstractTextDocumentLayout* theWrappedObject) const;
   QSizeF  py_q_documentSize(QAbstractTextDocumentLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractTextDocumentLayout*)theWrappedObject)->py_q_documentSize());}
   void draw(QAbstractTextDocumentLayout* theWrappedObject, QPainter*  painter, const QAbstractTextDocumentLayout::PaintContext&  context);
   void py_q_draw(QAbstractTextDocumentLayout* theWrappedObject, QPainter*  painter, const QAbstractTextDocumentLayout::PaintContext&  context){  (((PythonQtPublicPromoter_QAbstractTextDocumentLayout*)theWrappedObject)->py_q_draw(painter, context));}
   void drawInlineObject(QAbstractTextDocumentLayout* theWrappedObject, QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format);
   void py_q_drawInlineObject(QAbstractTextDocumentLayout* theWrappedObject, QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format){  (((PythonQtPublicPromoter_QAbstractTextDocumentLayout*)theWrappedObject)->py_q_drawInlineObject(painter, rect, object, posInDocument, format));}
   QTextCharFormat  format(QAbstractTextDocumentLayout* theWrappedObject, int  pos);
   QTextFormat  formatAt(QAbstractTextDocumentLayout* theWrappedObject, const QPointF&  pos) const;
   int  formatIndex(QAbstractTextDocumentLayout* theWrappedObject, int  pos);
   QRectF  frameBoundingRect(QAbstractTextDocumentLayout* theWrappedObject, QTextFrame*  frame) const;
   QRectF  py_q_frameBoundingRect(QAbstractTextDocumentLayout* theWrappedObject, QTextFrame*  frame) const{  return (((PythonQtPublicPromoter_QAbstractTextDocumentLayout*)theWrappedObject)->py_q_frameBoundingRect(frame));}
   int  hitTest(QAbstractTextDocumentLayout* theWrappedObject, const QPointF&  point, Qt::HitTestAccuracy  accuracy) const;
   int  py_q_hitTest(QAbstractTextDocumentLayout* theWrappedObject, const QPointF&  point, Qt::HitTestAccuracy  accuracy) const{  return (((PythonQtPublicPromoter_QAbstractTextDocumentLayout*)theWrappedObject)->py_q_hitTest(point, accuracy));}
   QString  imageAt(QAbstractTextDocumentLayout* theWrappedObject, const QPointF&  pos) const;
   int  pageCount(QAbstractTextDocumentLayout* theWrappedObject) const;
   int  py_q_pageCount(QAbstractTextDocumentLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractTextDocumentLayout*)theWrappedObject)->py_q_pageCount());}
   QPaintDevice*  paintDevice(QAbstractTextDocumentLayout* theWrappedObject) const;
   void positionInlineObject(QAbstractTextDocumentLayout* theWrappedObject, QTextInlineObject  item, int  posInDocument, const QTextFormat&  format);
   void py_q_positionInlineObject(QAbstractTextDocumentLayout* theWrappedObject, QTextInlineObject  item, int  posInDocument, const QTextFormat&  format){  (((PythonQtPublicPromoter_QAbstractTextDocumentLayout*)theWrappedObject)->py_q_positionInlineObject(item, posInDocument, format));}
   void registerHandler(QAbstractTextDocumentLayout* theWrappedObject, int  objectType, QObject*  component);
   void resizeInlineObject(QAbstractTextDocumentLayout* theWrappedObject, QTextInlineObject  item, int  posInDocument, const QTextFormat&  format);
   void py_q_resizeInlineObject(QAbstractTextDocumentLayout* theWrappedObject, QTextInlineObject  item, int  posInDocument, const QTextFormat&  format){  (((PythonQtPublicPromoter_QAbstractTextDocumentLayout*)theWrappedObject)->py_q_resizeInlineObject(item, posInDocument, format));}
   void setPaintDevice(QAbstractTextDocumentLayout* theWrappedObject, QPaintDevice*  device);
   void unregisterHandler(QAbstractTextDocumentLayout* theWrappedObject, int  objectType, QObject*  component = nullptr);
};





class PythonQtShell_QAbstractTextDocumentLayout__PaintContext : public QAbstractTextDocumentLayout::PaintContext
{
public:
    PythonQtShell_QAbstractTextDocumentLayout__PaintContext():QAbstractTextDocumentLayout::PaintContext(),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractTextDocumentLayout__PaintContext();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAbstractTextDocumentLayout__PaintContext : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTextDocumentLayout::PaintContext* new_QAbstractTextDocumentLayout__PaintContext();
QAbstractTextDocumentLayout::PaintContext* new_QAbstractTextDocumentLayout__PaintContext(const QAbstractTextDocumentLayout::PaintContext& other) {
PythonQtShell_QAbstractTextDocumentLayout__PaintContext* a = new PythonQtShell_QAbstractTextDocumentLayout__PaintContext();
*((QAbstractTextDocumentLayout::PaintContext*)a) = other;
return a; }
void delete_QAbstractTextDocumentLayout__PaintContext(QAbstractTextDocumentLayout::PaintContext* obj) { delete obj; }
void py_set_clip(QAbstractTextDocumentLayout::PaintContext* theWrappedObject, QRectF  clip){ theWrappedObject->clip = clip; }
QRectF  py_get_clip(QAbstractTextDocumentLayout::PaintContext* theWrappedObject){ return theWrappedObject->clip; }
void py_set_cursorPosition(QAbstractTextDocumentLayout::PaintContext* theWrappedObject, int  cursorPosition){ theWrappedObject->cursorPosition = cursorPosition; }
int  py_get_cursorPosition(QAbstractTextDocumentLayout::PaintContext* theWrappedObject){ return theWrappedObject->cursorPosition; }
void py_set_palette(QAbstractTextDocumentLayout::PaintContext* theWrappedObject, QPalette  palette){ theWrappedObject->palette = palette; }
QPalette  py_get_palette(QAbstractTextDocumentLayout::PaintContext* theWrappedObject){ return theWrappedObject->palette; }
};





class PythonQtShell_QAbstractTextDocumentLayout__Selection : public QAbstractTextDocumentLayout::Selection
{
public:
    PythonQtShell_QAbstractTextDocumentLayout__Selection():QAbstractTextDocumentLayout::Selection(),_wrapper(nullptr) {};

   ~PythonQtShell_QAbstractTextDocumentLayout__Selection();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAbstractTextDocumentLayout__Selection : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTextDocumentLayout::Selection* new_QAbstractTextDocumentLayout__Selection();
QAbstractTextDocumentLayout::Selection* new_QAbstractTextDocumentLayout__Selection(const QAbstractTextDocumentLayout::Selection& other) {
PythonQtShell_QAbstractTextDocumentLayout__Selection* a = new PythonQtShell_QAbstractTextDocumentLayout__Selection();
*((QAbstractTextDocumentLayout::Selection*)a) = other;
return a; }
void delete_QAbstractTextDocumentLayout__Selection(QAbstractTextDocumentLayout::Selection* obj) { delete obj; }
void py_set_cursor(QAbstractTextDocumentLayout::Selection* theWrappedObject, QTextCursor  cursor){ theWrappedObject->cursor = cursor; }
QTextCursor  py_get_cursor(QAbstractTextDocumentLayout::Selection* theWrappedObject){ return theWrappedObject->cursor; }
void py_set_format(QAbstractTextDocumentLayout::Selection* theWrappedObject, QTextCharFormat  format){ theWrappedObject->format = format; }
QTextCharFormat  py_get_format(QAbstractTextDocumentLayout::Selection* theWrappedObject){ return theWrappedObject->format; }
};





class PythonQtShell_QAccessibleEvent : public QAccessibleEvent
{
public:
    PythonQtShell_QAccessibleEvent(QObject*  obj, QAccessible::Event  typ):QAccessibleEvent(obj, typ),_wrapper(nullptr) {};

   ~PythonQtShell_QAccessibleEvent() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAccessibleEvent : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleEvent* new_QAccessibleEvent(QObject*  obj, QAccessible::Event  typ);
void delete_QAccessibleEvent(QAccessibleEvent* obj) { delete obj; }
   int  child(QAccessibleEvent* theWrappedObject) const;
   QObject*  object(QAccessibleEvent* theWrappedObject) const;
   void setChild(QAccessibleEvent* theWrappedObject, int  chld);
   QAccessible::Event  type(QAccessibleEvent* theWrappedObject) const;
    QString py_toString(QAccessibleEvent*);
};





class PythonQtShell_QAction : public QAction
{
public:
    PythonQtShell_QAction(QObject*  parent = nullptr):QAction(parent),_wrapper(nullptr) {};
    PythonQtShell_QAction(const QIcon&  icon, const QString&  text, QObject*  parent = nullptr):QAction(icon, text, parent),_wrapper(nullptr) {};
    PythonQtShell_QAction(const QString&  text, QObject*  parent = nullptr):QAction(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QAction() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAction : public QAction
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QAction::event(arg__1); }
};

class PythonQtWrapper_QAction : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ActionEvent )
enum ActionEvent{
  Trigger = QAction::Trigger,   Hover = QAction::Hover};
public slots:
QAction* new_QAction(QObject*  parent = nullptr);
QAction* new_QAction(const QIcon&  icon, const QString&  text, QObject*  parent = nullptr);
QAction* new_QAction(const QString&  text, QObject*  parent = nullptr);
void delete_QAction(QAction* obj) { delete obj; }
   QActionGroup*  actionGroup(QAction* theWrappedObject) const;
   void activate(QAction* theWrappedObject, QAction::ActionEvent  event);
   QList<QGraphicsWidget* >  associatedGraphicsWidgets(QAction* theWrappedObject) const;
   QList<QWidget* >  associatedWidgets(QAction* theWrappedObject) const;
   bool  autoRepeat(QAction* theWrappedObject) const;
   QVariant  data(QAction* theWrappedObject) const;
   bool  py_q_event(QAction* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QAction*)theWrappedObject)->py_q_event(arg__1));}
   QFont  font(QAction* theWrappedObject) const;
   QIcon  icon(QAction* theWrappedObject) const;
   QString  iconText(QAction* theWrappedObject) const;
   bool  isCheckable(QAction* theWrappedObject) const;
   bool  isChecked(QAction* theWrappedObject) const;
   bool  isEnabled(QAction* theWrappedObject) const;
   bool  isIconVisibleInMenu(QAction* theWrappedObject) const;
   bool  isSeparator(QAction* theWrappedObject) const;
   bool  isShortcutVisibleInContextMenu(QAction* theWrappedObject) const;
   bool  isVisible(QAction* theWrappedObject) const;
   QMenu*  menu(QAction* theWrappedObject) const;
   QAction::MenuRole  menuRole(QAction* theWrappedObject) const;
   QWidget*  parentWidget(QAction* theWrappedObject) const;
   QAction::Priority  priority(QAction* theWrappedObject) const;
   void setActionGroup(QAction* theWrappedObject, QActionGroup*  group);
   void setAutoRepeat(QAction* theWrappedObject, bool  arg__1);
   void setCheckable(QAction* theWrappedObject, bool  arg__1);
   void setData(QAction* theWrappedObject, const QVariant&  var);
   void setFont(QAction* theWrappedObject, const QFont&  font);
   void setIcon(QAction* theWrappedObject, const QIcon&  icon);
   void setIconText(QAction* theWrappedObject, const QString&  text);
   void setIconVisibleInMenu(QAction* theWrappedObject, bool  visible);
   void setMenu(QAction* theWrappedObject, QMenu*  menu);
   void setMenuRole(QAction* theWrappedObject, QAction::MenuRole  menuRole);
   void setPriority(QAction* theWrappedObject, QAction::Priority  priority);
   void setSeparator(QAction* theWrappedObject, bool  b);
   void setShortcut(QAction* theWrappedObject, const QKeySequence&  shortcut);
   void setShortcutContext(QAction* theWrappedObject, Qt::ShortcutContext  context);
   void setShortcutVisibleInContextMenu(QAction* theWrappedObject, bool  show);
   void setShortcuts(QAction* theWrappedObject, QKeySequence::StandardKey  arg__1);
   void setShortcuts(QAction* theWrappedObject, const QList<QKeySequence >&  shortcuts);
   void setStatusTip(QAction* theWrappedObject, const QString&  statusTip);
   void setText(QAction* theWrappedObject, const QString&  text);
   void setToolTip(QAction* theWrappedObject, const QString&  tip);
   void setWhatsThis(QAction* theWrappedObject, const QString&  what);
   QKeySequence  shortcut(QAction* theWrappedObject) const;
   Qt::ShortcutContext  shortcutContext(QAction* theWrappedObject) const;
   QList<QKeySequence >  shortcuts(QAction* theWrappedObject) const;
   bool  showStatusText(QAction* theWrappedObject, QWidget*  widget = nullptr);
   QString  statusTip(QAction* theWrappedObject) const;
   QString  text(QAction* theWrappedObject) const;
   QString  toolTip(QAction* theWrappedObject) const;
   QString  whatsThis(QAction* theWrappedObject) const;
    QString py_toString(QAction*);
};





class PythonQtWrapper_QActionEvent : public QObject
{ Q_OBJECT
public:
public slots:
QActionEvent* new_QActionEvent(int  type, QAction*  action, QAction*  before = nullptr);
void delete_QActionEvent(QActionEvent* obj) { delete obj; }
   QAction*  action(QActionEvent* theWrappedObject) const;
   QAction*  before(QActionEvent* theWrappedObject) const;
};





class PythonQtShell_QActionGroup : public QActionGroup
{
public:
    PythonQtShell_QActionGroup(QObject*  parent):QActionGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QActionGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QActionGroup : public QObject
{ Q_OBJECT
public:
public slots:
QActionGroup* new_QActionGroup(QObject*  parent);
void delete_QActionGroup(QActionGroup* obj) { delete obj; }
   QList<QAction* >  actions(QActionGroup* theWrappedObject) const;
   QAction*  addAction(QActionGroup* theWrappedObject, QAction*  a);
   QAction*  addAction(QActionGroup* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QActionGroup* theWrappedObject, const QString&  text);
   QAction*  checkedAction(QActionGroup* theWrappedObject) const;
   bool  isEnabled(QActionGroup* theWrappedObject) const;
   bool  isExclusive(QActionGroup* theWrappedObject) const;
   bool  isVisible(QActionGroup* theWrappedObject) const;
   void removeAction(QActionGroup* theWrappedObject, QAction*  a);
};





class PythonQtPublicPromoter_QApplication : public QApplication
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QApplication::event(arg__1); }
inline bool  py_q_notify(QObject*  arg__1, QEvent*  arg__2) { return QApplication::notify(arg__1, arg__2); }
};

class PythonQtWrapper_QApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorSpec )
enum ColorSpec{
  NormalColor = QApplication::NormalColor,   CustomColor = QApplication::CustomColor,   ManyColor = QApplication::ManyColor};
public slots:
void delete_QApplication(QApplication* obj) { delete obj; }
   QWidget*  static_QApplication_activeModalWidget();
   QWidget*  static_QApplication_activePopupWidget();
   QWidget*  static_QApplication_activeWindow();
   void static_QApplication_alert(QWidget*  widget, int  duration = 0);
   QList<QWidget* >  static_QApplication_allWidgets();
   void static_QApplication_beep();
   int  static_QApplication_colorSpec();
   int  static_QApplication_cursorFlashTime();
   QDesktopWidget*  static_QApplication_desktop();
   int  static_QApplication_doubleClickInterval();
   bool  py_q_event(QApplication* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QApplication*)theWrappedObject)->py_q_event(arg__1));}
   int  static_QApplication_exec();
   QWidget*  static_QApplication_focusWidget();
   QFont  static_QApplication_font();
   QFont  static_QApplication_font(const QWidget*  arg__1);
   QFontMetrics  static_QApplication_fontMetrics();
   QSize  static_QApplication_globalStrut();
   bool  static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1);
   int  static_QApplication_keyboardInputInterval();
   bool  py_q_notify(QApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QApplication*)theWrappedObject)->py_q_notify(arg__1, arg__2));}
   QPalette  static_QApplication_palette(const QWidget*  arg__1);
   void static_QApplication_setActiveWindow(QWidget*  act);
   void static_QApplication_setColorSpec(int  arg__1);
   void static_QApplication_setCursorFlashTime(int  arg__1);
   void static_QApplication_setDoubleClickInterval(int  arg__1);
   void static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable = true);
   void static_QApplication_setFont(const QFont&  arg__1, const char*  className = nullptr);
   void static_QApplication_setGlobalStrut(const QSize&  arg__1);
   void static_QApplication_setKeyboardInputInterval(int  arg__1);
   void static_QApplication_setPalette(const QPalette&  arg__1, const char*  className = nullptr);
   void static_QApplication_setStartDragDistance(int  l);
   void static_QApplication_setStartDragTime(int  ms);
   void static_QApplication_setStyle(QStyle*  arg__1);
   QStyle*  static_QApplication_setStyle(const QString&  arg__1);
   void static_QApplication_setWheelScrollLines(int  arg__1);
   void static_QApplication_setWindowIcon(const QIcon&  icon);
   int  static_QApplication_startDragDistance();
   int  static_QApplication_startDragTime();
   QStyle*  static_QApplication_style();
   QString  styleSheet(QApplication* theWrappedObject) const;
   QWidget*  static_QApplication_topLevelAt(const QPoint&  p);
   QWidget*  static_QApplication_topLevelAt(int  x, int  y);
   QList<QWidget* >  static_QApplication_topLevelWidgets();
   int  static_QApplication_wheelScrollLines();
   QWidget*  static_QApplication_widgetAt(const QPoint&  p);
   QWidget*  static_QApplication_widgetAt(int  x, int  y);
   QIcon  static_QApplication_windowIcon();
};





class PythonQtWrapper_QBackingStore : public QObject
{ Q_OBJECT
public:
public slots:
QBackingStore* new_QBackingStore(QWindow*  window);
void delete_QBackingStore(QBackingStore* obj) { delete obj; }
   void beginPaint(QBackingStore* theWrappedObject, const QRegion&  arg__1);
   void endPaint(QBackingStore* theWrappedObject);
   void flush(QBackingStore* theWrappedObject, const QRegion&  region, QWindow*  window = nullptr, const QPoint&  offset = QPoint());
   bool  hasStaticContents(QBackingStore* theWrappedObject) const;
   QPaintDevice*  paintDevice(QBackingStore* theWrappedObject);
   void resize(QBackingStore* theWrappedObject, const QSize&  size);
   bool  scroll(QBackingStore* theWrappedObject, const QRegion&  area, int  dx, int  dy);
   void setStaticContents(QBackingStore* theWrappedObject, const QRegion&  region);
   QSize  size(QBackingStore* theWrappedObject) const;
   QRegion  staticContents(QBackingStore* theWrappedObject) const;
   QWindow*  window(QBackingStore* theWrappedObject) const;
};





class PythonQtShell_QBoxLayout : public QBoxLayout
{
public:
    PythonQtShell_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = nullptr):QBoxLayout(arg__1, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QBoxLayout() override;

void addItem(QLayoutItem*  arg__1) override;
void childEvent(QChildEvent*  e) override;
QSizePolicy::ControlTypes  controlTypes() const override;
int  count() const override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
Qt::Orientations  expandingDirections() const override;
QRect  geometry() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
int  indexOf(QWidget*  arg__1) const override;
void invalidate() override;
bool  isEmpty() const override;
QLayoutItem*  itemAt(int  arg__1) const override;
QLayout*  layout() override;
QSize  maximumSize() const override;
int  minimumHeightForWidth(int  arg__1) const override;
QSize  minimumSize() const override;
void setGeometry(const QRect&  arg__1) override;
QSize  sizeHint() const override;
QSpacerItem*  spacerItem() override;
QLayoutItem*  takeAt(int  arg__1) override;
void timerEvent(QTimerEvent*  event) override;
QWidget*  widget() override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QBoxLayout : public QBoxLayout
{ public:
inline void py_q_addItem(QLayoutItem*  arg__1) { QBoxLayout::addItem(arg__1); }
inline int  py_q_count() const { return QBoxLayout::count(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QBoxLayout::expandingDirections(); }
inline bool  py_q_hasHeightForWidth() const { return QBoxLayout::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QBoxLayout::heightForWidth(arg__1); }
inline void py_q_invalidate() { QBoxLayout::invalidate(); }
inline QLayoutItem*  py_q_itemAt(int  arg__1) const { return QBoxLayout::itemAt(arg__1); }
inline QSize  py_q_maximumSize() const { return QBoxLayout::maximumSize(); }
inline int  py_q_minimumHeightForWidth(int  arg__1) const { return QBoxLayout::minimumHeightForWidth(arg__1); }
inline QSize  py_q_minimumSize() const { return QBoxLayout::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QBoxLayout::setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return QBoxLayout::sizeHint(); }
inline QLayoutItem*  py_q_takeAt(int  arg__1) { return QBoxLayout::takeAt(arg__1); }
};

class PythonQtWrapper_QBoxLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction )
enum Direction{
  LeftToRight = QBoxLayout::LeftToRight,   RightToLeft = QBoxLayout::RightToLeft,   TopToBottom = QBoxLayout::TopToBottom,   BottomToTop = QBoxLayout::BottomToTop,   Down = QBoxLayout::Down,   Up = QBoxLayout::Up};
public slots:
QBoxLayout* new_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = nullptr);
void delete_QBoxLayout(QBoxLayout* obj) { delete obj; }
   void py_q_addItem(QBoxLayout* theWrappedObject, QLayoutItem*  arg__1){  (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_addItem(arg__1));}
   void addLayout(QBoxLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  layout, int  stretch = 0);
   void addSpacerItem(QBoxLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QSpacerItem* >  spacerItem);
   void addSpacing(QBoxLayout* theWrappedObject, int  size);
   void addStretch(QBoxLayout* theWrappedObject, int  stretch = 0);
   void addStrut(QBoxLayout* theWrappedObject, int  arg__1);
   void addWidget(QBoxLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  stretch = 0, Qt::Alignment  alignment = Qt::Alignment());
   int  py_q_count(QBoxLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_count());}
   QBoxLayout::Direction  direction(QBoxLayout* theWrappedObject) const;
   Qt::Orientations  py_q_expandingDirections(QBoxLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_expandingDirections());}
   bool  py_q_hasHeightForWidth(QBoxLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  py_q_heightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   void insertItem(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QLayoutItem* >  arg__2);
   void insertLayout(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QLayout* >  layout, int  stretch = 0);
   void insertSpacerItem(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QSpacerItem* >  spacerItem);
   void insertSpacing(QBoxLayout* theWrappedObject, int  index, int  size);
   void insertStretch(QBoxLayout* theWrappedObject, int  index, int  stretch = 0);
   void insertWidget(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0, Qt::Alignment  alignment = Qt::Alignment());
   void py_q_invalidate(QBoxLayout* theWrappedObject){  (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_invalidate());}
   QLayoutItem*  py_q_itemAt(QBoxLayout* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_itemAt(arg__1));}
   QSize  py_q_maximumSize(QBoxLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_maximumSize());}
   int  py_q_minimumHeightForWidth(QBoxLayout* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_minimumHeightForWidth(arg__1));}
   QSize  py_q_minimumSize(QBoxLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_minimumSize());}
   void setDirection(QBoxLayout* theWrappedObject, QBoxLayout::Direction  arg__1);
   void py_q_setGeometry(QBoxLayout* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_setGeometry(arg__1));}
   void setSpacing(QBoxLayout* theWrappedObject, int  spacing);
   void setStretch(QBoxLayout* theWrappedObject, int  index, int  stretch);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QLayout*  l, int  stretch);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QWidget*  w, int  stretch);
   QSize  py_q_sizeHint(QBoxLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_sizeHint());}
   int  spacing(QBoxLayout* theWrappedObject) const;
   int  stretch(QBoxLayout* theWrappedObject, int  index) const;
   QLayoutItem*  py_q_takeAt(QBoxLayout* theWrappedObject, int  arg__1){  return (((PythonQtPublicPromoter_QBoxLayout*)theWrappedObject)->py_q_takeAt(arg__1));}
    bool __nonzero__(QBoxLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QButtonGroup : public QButtonGroup
{
public:
    PythonQtShell_QButtonGroup(QObject*  parent = nullptr):QButtonGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QButtonGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QButtonGroup : public QObject
{ Q_OBJECT
public:
public slots:
QButtonGroup* new_QButtonGroup(QObject*  parent = nullptr);
void delete_QButtonGroup(QButtonGroup* obj) { delete obj; }
   void addButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1, int  id = -1);
   QAbstractButton*  button(QButtonGroup* theWrappedObject, int  id) const;
   QList<QAbstractButton* >  buttons(QButtonGroup* theWrappedObject) const;
   QAbstractButton*  checkedButton(QButtonGroup* theWrappedObject) const;
   int  checkedId(QButtonGroup* theWrappedObject) const;
   bool  exclusive(QButtonGroup* theWrappedObject) const;
   int  id(QButtonGroup* theWrappedObject, QAbstractButton*  button) const;
   void removeButton(QButtonGroup* theWrappedObject, QAbstractButton*  arg__1);
   void setExclusive(QButtonGroup* theWrappedObject, bool  arg__1);
   void setId(QButtonGroup* theWrappedObject, QAbstractButton*  button, int  id);
};





class PythonQtShell_QCalendarWidget : public QCalendarWidget
{
public:
    PythonQtShell_QCalendarWidget(QWidget*  parent = nullptr):QCalendarWidget(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QCalendarWidget() override;

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
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
void paintCell(QPainter*  painter, const QRect&  rect, const QDate&  date) const override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
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

class PythonQtPublicPromoter_QCalendarWidget : public QCalendarWidget
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return this->eventFilter(watched, event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_paintCell(QPainter*  painter, const QRect&  rect, const QDate&  date) const { this->paintCell(painter, rect, date); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_updateCell(const QDate&  date) { this->updateCell(date); }
inline void promoted_updateCells() { this->updateCells(); }
inline bool  py_q_event(QEvent*  event) { return QCalendarWidget::event(event); }
inline bool  py_q_eventFilter(QObject*  watched, QEvent*  event) { return QCalendarWidget::eventFilter(watched, event); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QCalendarWidget::keyPressEvent(event); }
inline QSize  py_q_minimumSizeHint() const { return QCalendarWidget::minimumSizeHint(); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QCalendarWidget::mousePressEvent(event); }
inline void py_q_paintCell(QPainter*  painter, const QRect&  rect, const QDate&  date) const { QCalendarWidget::paintCell(painter, rect, date); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QCalendarWidget::resizeEvent(event); }
inline QSize  py_q_sizeHint() const { return QCalendarWidget::sizeHint(); }
};

class PythonQtWrapper_QCalendarWidget : public QObject
{ Q_OBJECT
public:
public slots:
QCalendarWidget* new_QCalendarWidget(QWidget*  parent = nullptr);
void delete_QCalendarWidget(QCalendarWidget* obj) { delete obj; }
   int  dateEditAcceptDelay(QCalendarWidget* theWrappedObject) const;
   QMap<QDate , QTextCharFormat >  dateTextFormat(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  dateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date) const;
   bool  py_q_event(QCalendarWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QCalendarWidget*)theWrappedObject)->py_q_event(event));}
   bool  py_q_eventFilter(QCalendarWidget* theWrappedObject, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QCalendarWidget*)theWrappedObject)->py_q_eventFilter(watched, event));}
   Qt::DayOfWeek  firstDayOfWeek(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  headerTextFormat(QCalendarWidget* theWrappedObject) const;
   QCalendarWidget::HorizontalHeaderFormat  horizontalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   bool  isDateEditEnabled(QCalendarWidget* theWrappedObject) const;
   bool  isGridVisible(QCalendarWidget* theWrappedObject) const;
   bool  isNavigationBarVisible(QCalendarWidget* theWrappedObject) const;
   void py_q_keyPressEvent(QCalendarWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QCalendarWidget*)theWrappedObject)->py_q_keyPressEvent(event));}
   QDate  maximumDate(QCalendarWidget* theWrappedObject) const;
   QDate  minimumDate(QCalendarWidget* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QCalendarWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCalendarWidget*)theWrappedObject)->py_q_minimumSizeHint());}
   int  monthShown(QCalendarWidget* theWrappedObject) const;
   void py_q_mousePressEvent(QCalendarWidget* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QCalendarWidget*)theWrappedObject)->py_q_mousePressEvent(event));}
   void paintCell(QCalendarWidget* theWrappedObject, QPainter*  painter, const QRect&  rect, const QDate&  date) const;
   void py_q_paintCell(QCalendarWidget* theWrappedObject, QPainter*  painter, const QRect&  rect, const QDate&  date) const{  (((PythonQtPublicPromoter_QCalendarWidget*)theWrappedObject)->py_q_paintCell(painter, rect, date));}
   void py_q_resizeEvent(QCalendarWidget* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QCalendarWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   QDate  selectedDate(QCalendarWidget* theWrappedObject) const;
   QCalendarWidget::SelectionMode  selectionMode(QCalendarWidget* theWrappedObject) const;
   void setDateEditAcceptDelay(QCalendarWidget* theWrappedObject, int  delay);
   void setDateEditEnabled(QCalendarWidget* theWrappedObject, bool  enable);
   void setDateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date, const QTextCharFormat&  format);
   void setFirstDayOfWeek(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek);
   void setHeaderTextFormat(QCalendarWidget* theWrappedObject, const QTextCharFormat&  format);
   void setHorizontalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::HorizontalHeaderFormat  format);
   void setMaximumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   void setMinimumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   void setSelectionMode(QCalendarWidget* theWrappedObject, QCalendarWidget::SelectionMode  mode);
   void setVerticalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::VerticalHeaderFormat  format);
   void setWeekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek, const QTextCharFormat&  format);
   QSize  py_q_sizeHint(QCalendarWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCalendarWidget*)theWrappedObject)->py_q_sizeHint());}
   void updateCell(QCalendarWidget* theWrappedObject, const QDate&  date);
   void updateCells(QCalendarWidget* theWrappedObject);
   QCalendarWidget::VerticalHeaderFormat  verticalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  weekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek) const;
   int  yearShown(QCalendarWidget* theWrappedObject) const;
};





class PythonQtShell_QCheckBox : public QCheckBox
{
public:
    PythonQtShell_QCheckBox(QWidget*  parent = nullptr):QCheckBox(parent),_wrapper(nullptr) {};
    PythonQtShell_QCheckBox(const QString&  text, QWidget*  parent = nullptr):QCheckBox(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QCheckBox() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
void checkStateSet() override;
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
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
bool  hitButton(const QPoint&  pos) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
void nextCheckState() override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QCheckBox : public QCheckBox
{ public:
inline void promoted_checkStateSet() { this->checkStateSet(); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return this->hitButton(pos); }
inline void promoted_initStyleOption(QStyleOptionButton*  option) const { this->initStyleOption(option); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_nextCheckState() { this->nextCheckState(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void py_q_checkStateSet() { QCheckBox::checkStateSet(); }
inline bool  py_q_event(QEvent*  e) { return QCheckBox::event(e); }
inline bool  py_q_hitButton(const QPoint&  pos) const { return QCheckBox::hitButton(pos); }
inline QSize  py_q_minimumSizeHint() const { return QCheckBox::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QCheckBox::mouseMoveEvent(arg__1); }
inline void py_q_nextCheckState() { QCheckBox::nextCheckState(); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QCheckBox::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QCheckBox::sizeHint(); }
};

class PythonQtWrapper_QCheckBox : public QObject
{ Q_OBJECT
public:
public slots:
QCheckBox* new_QCheckBox(QWidget*  parent = nullptr);
QCheckBox* new_QCheckBox(const QString&  text, QWidget*  parent = nullptr);
void delete_QCheckBox(QCheckBox* obj) { delete obj; }
   Qt::CheckState  checkState(QCheckBox* theWrappedObject) const;
   void py_q_checkStateSet(QCheckBox* theWrappedObject){  (((PythonQtPublicPromoter_QCheckBox*)theWrappedObject)->py_q_checkStateSet());}
   bool  py_q_event(QCheckBox* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QCheckBox*)theWrappedObject)->py_q_event(e));}
   bool  py_q_hitButton(QCheckBox* theWrappedObject, const QPoint&  pos) const{  return (((PythonQtPublicPromoter_QCheckBox*)theWrappedObject)->py_q_hitButton(pos));}
   void initStyleOption(QCheckBox* theWrappedObject, QStyleOptionButton*  option) const;
   bool  isTristate(QCheckBox* theWrappedObject) const;
   QSize  minimumSizeHint(QCheckBox* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QCheckBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCheckBox*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QCheckBox* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QCheckBox*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_nextCheckState(QCheckBox* theWrappedObject){  (((PythonQtPublicPromoter_QCheckBox*)theWrappedObject)->py_q_nextCheckState());}
   void py_q_paintEvent(QCheckBox* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QCheckBox*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void setCheckState(QCheckBox* theWrappedObject, Qt::CheckState  state);
   void setTristate(QCheckBox* theWrappedObject, bool  y = true);
   QSize  sizeHint(QCheckBox* theWrappedObject) const;
   QSize  py_q_sizeHint(QCheckBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCheckBox*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtWrapper_QClipboard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode )
enum Mode{
  Clipboard = QClipboard::Clipboard,   Selection = QClipboard::Selection,   FindBuffer = QClipboard::FindBuffer,   LastMode = QClipboard::LastMode};
public slots:
   void clear(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard);
   QImage  image(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   const QMimeData*  mimeData(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   bool  ownsClipboard(QClipboard* theWrappedObject) const;
   bool  ownsFindBuffer(QClipboard* theWrappedObject) const;
   bool  ownsSelection(QClipboard* theWrappedObject) const;
   QPixmap  pixmap(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   void setImage(QClipboard* theWrappedObject, const QImage&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setMimeData(QClipboard* theWrappedObject, PythonQtPassOwnershipToCPP<QMimeData* >  data, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setPixmap(QClipboard* theWrappedObject, const QPixmap&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setText(QClipboard* theWrappedObject, const QString&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   bool  supportsFindBuffer(QClipboard* theWrappedObject) const;
   bool  supportsSelection(QClipboard* theWrappedObject) const;
   QString  text(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   QString  text(QClipboard* theWrappedObject, QString&  subtype, QClipboard::Mode  mode = QClipboard::Clipboard) const;
};





class PythonQtWrapper_QCloseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QCloseEvent* new_QCloseEvent();
void delete_QCloseEvent(QCloseEvent* obj) { delete obj; }
};





class PythonQtShell_QColorDialog : public QColorDialog
{
public:
    PythonQtShell_QColorDialog(QWidget*  parent = nullptr):QColorDialog(parent),_wrapper(nullptr) {};
    PythonQtShell_QColorDialog(const QColor&  initial, QWidget*  parent = nullptr):QColorDialog(initial, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QColorDialog() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void done(int  result) override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
int  exec() override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
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
void reject() override;
void resizeEvent(QResizeEvent*  arg__1) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QColorDialog : public QColorDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_done(int  result) { this->done(result); }
inline void py_q_changeEvent(QEvent*  event) { QColorDialog::changeEvent(event); }
inline void py_q_done(int  result) { QColorDialog::done(result); }
inline void py_q_setVisible(bool  visible) { QColorDialog::setVisible(visible); }
};

class PythonQtWrapper_QColorDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorDialogOption )
Q_FLAGS(ColorDialogOptions )
enum ColorDialogOption{
  ShowAlphaChannel = QColorDialog::ShowAlphaChannel,   NoButtons = QColorDialog::NoButtons,   DontUseNativeDialog = QColorDialog::DontUseNativeDialog};
Q_DECLARE_FLAGS(ColorDialogOptions, ColorDialogOption)
public slots:
QColorDialog* new_QColorDialog(QWidget*  parent = nullptr);
QColorDialog* new_QColorDialog(const QColor&  initial, QWidget*  parent = nullptr);
void delete_QColorDialog(QColorDialog* obj) { delete obj; }
   void py_q_changeEvent(QColorDialog* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QColorDialog*)theWrappedObject)->py_q_changeEvent(event));}
   QColor  currentColor(QColorDialog* theWrappedObject) const;
   QColor  static_QColorDialog_customColor(int  index);
   int  static_QColorDialog_customCount();
   void py_q_done(QColorDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QColorDialog*)theWrappedObject)->py_q_done(result));}
   QColor  static_QColorDialog_getColor(const QColor&  initial = Qt::white, QWidget*  parent = nullptr, const QString&  title = QString(), QColorDialog::ColorDialogOptions  options = QColorDialog::ColorDialogOptions());
   unsigned int  static_QColorDialog_getRgba(unsigned int  rgba = 0xffffffff, bool*  ok = nullptr, QWidget*  parent = nullptr);
   void open(QColorDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QColorDialog::ColorDialogOptions  options(QColorDialog* theWrappedObject) const;
   QColor  selectedColor(QColorDialog* theWrappedObject) const;
   void setCurrentColor(QColorDialog* theWrappedObject, const QColor&  color);
   void static_QColorDialog_setCustomColor(int  index, QColor  color);
   void setOption(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOption  option, bool  on = true);
   void setOptions(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOptions  options);
   void static_QColorDialog_setStandardColor(int  index, QColor  color);
   void py_q_setVisible(QColorDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QColorDialog*)theWrappedObject)->py_q_setVisible(visible));}
   QColor  static_QColorDialog_standardColor(int  index);
   bool  testOption(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOption  option) const;
};





class PythonQtShell_QColumnView : public QColumnView
{
public:
    PythonQtShell_QColumnView(QWidget*  parent = nullptr):QColumnView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QColumnView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
QAbstractItemView*  createColumn(const QModelIndex&  rootIndex) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  point) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setModel(QAbstractItemModel*  model) override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
QStyleOptionViewItem  viewOptions() const override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QColumnView : public QColumnView
{ public:
inline QAbstractItemView*  promoted_createColumn(const QModelIndex&  rootIndex) { return this->createColumn(rootIndex); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { this->currentChanged(current, previous); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline void promoted_initializeColumn(QAbstractItemView*  column) const { this->initializeColumn(column); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return this->moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { this->rowsInserted(parent, start, end); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline QAbstractItemView*  py_q_createColumn(const QModelIndex&  rootIndex) { return QColumnView::createColumn(rootIndex); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QColumnView::currentChanged(current, previous); }
inline int  py_q_horizontalOffset() const { return QColumnView::horizontalOffset(); }
inline QModelIndex  py_q_indexAt(const QPoint&  point) const { return QColumnView::indexAt(point); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return QColumnView::isIndexHidden(index); }
inline QModelIndex  py_q_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return QColumnView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QColumnView::resizeEvent(event); }
inline void py_q_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QColumnView::rowsInserted(parent, start, end); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QColumnView::scrollContentsBy(dx, dy); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QColumnView::scrollTo(index, hint); }
inline void py_q_selectAll() { QColumnView::selectAll(); }
inline void py_q_setModel(QAbstractItemModel*  model) { QColumnView::setModel(model); }
inline void py_q_setRootIndex(const QModelIndex&  index) { QColumnView::setRootIndex(index); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QColumnView::setSelection(rect, command); }
inline void py_q_setSelectionModel(QItemSelectionModel*  selectionModel) { QColumnView::setSelectionModel(selectionModel); }
inline QSize  py_q_sizeHint() const { return QColumnView::sizeHint(); }
inline int  py_q_verticalOffset() const { return QColumnView::verticalOffset(); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return QColumnView::visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return QColumnView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QColumnView : public QObject
{ Q_OBJECT
public:
public slots:
QColumnView* new_QColumnView(QWidget*  parent = nullptr);
void delete_QColumnView(QColumnView* obj) { delete obj; }
   QList<int >  columnWidths(QColumnView* theWrappedObject) const;
   QAbstractItemView*  createColumn(QColumnView* theWrappedObject, const QModelIndex&  rootIndex);
   QAbstractItemView*  py_q_createColumn(QColumnView* theWrappedObject, const QModelIndex&  rootIndex){  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_createColumn(rootIndex));}
   void py_q_currentChanged(QColumnView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_currentChanged(current, previous));}
   int  py_q_horizontalOffset(QColumnView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_horizontalOffset());}
   QModelIndex  py_q_indexAt(QColumnView* theWrappedObject, const QPoint&  point) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_indexAt(point));}
   void initializeColumn(QColumnView* theWrappedObject, QAbstractItemView*  column) const;
   bool  py_q_isIndexHidden(QColumnView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_isIndexHidden(index));}
   QModelIndex  py_q_moveCursor(QColumnView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers){  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_moveCursor(cursorAction, modifiers));}
   QWidget*  previewWidget(QColumnView* theWrappedObject) const;
   void py_q_resizeEvent(QColumnView* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_resizeEvent(event));}
   bool  resizeGripsVisible(QColumnView* theWrappedObject) const;
   void py_q_rowsInserted(QColumnView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_rowsInserted(parent, start, end));}
   void py_q_scrollContentsBy(QColumnView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void py_q_scrollTo(QColumnView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   void py_q_selectAll(QColumnView* theWrappedObject){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_selectAll());}
   void setColumnWidths(QColumnView* theWrappedObject, const QList<int >&  list);
   void py_q_setModel(QColumnView* theWrappedObject, QAbstractItemModel*  model){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_setModel(model));}
   void setPreviewWidget(QColumnView* theWrappedObject, QWidget*  widget);
   void setResizeGripsVisible(QColumnView* theWrappedObject, bool  visible);
   void py_q_setRootIndex(QColumnView* theWrappedObject, const QModelIndex&  index){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_setRootIndex(index));}
   void py_q_setSelection(QColumnView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_setSelection(rect, command));}
   void py_q_setSelectionModel(QColumnView* theWrappedObject, QItemSelectionModel*  selectionModel){  (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_setSelectionModel(selectionModel));}
   QSize  py_q_sizeHint(QColumnView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_sizeHint());}
   int  py_q_verticalOffset(QColumnView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_verticalOffset());}
   QRect  py_q_visualRect(QColumnView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  py_q_visualRegionForSelection(QColumnView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QColumnView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
};





class PythonQtShell_QComboBox : public QComboBox
{
public:
    PythonQtShell_QComboBox(QWidget*  parent = nullptr):QComboBox(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QComboBox() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  e) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  e) override;
void hidePopup() override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  e) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  e) override;
void showPopup() override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QComboBox : public QComboBox
{ public:
inline void promoted_changeEvent(QEvent*  e) { this->changeEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { this->contextMenuEvent(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { this->focusInEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { this->focusOutEvent(e); }
inline void promoted_hideEvent(QHideEvent*  e) { this->hideEvent(e); }
inline void promoted_initStyleOption(QStyleOptionComboBox*  option) const { this->initStyleOption(option); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { this->keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { this->keyReleaseEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { this->mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { this->mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_showEvent(QShowEvent*  e) { this->showEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { this->wheelEvent(e); }
inline void py_q_changeEvent(QEvent*  e) { QComboBox::changeEvent(e); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  e) { QComboBox::contextMenuEvent(e); }
inline bool  py_q_event(QEvent*  event) { return QComboBox::event(event); }
inline void py_q_focusInEvent(QFocusEvent*  e) { QComboBox::focusInEvent(e); }
inline void py_q_focusOutEvent(QFocusEvent*  e) { QComboBox::focusOutEvent(e); }
inline void py_q_hideEvent(QHideEvent*  e) { QComboBox::hideEvent(e); }
inline void py_q_hidePopup() { QComboBox::hidePopup(); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QComboBox::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QComboBox::inputMethodQuery(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  e) { QComboBox::keyPressEvent(e); }
inline void py_q_keyReleaseEvent(QKeyEvent*  e) { QComboBox::keyReleaseEvent(e); }
inline QSize  py_q_minimumSizeHint() const { return QComboBox::minimumSizeHint(); }
inline void py_q_mousePressEvent(QMouseEvent*  e) { QComboBox::mousePressEvent(e); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  e) { QComboBox::mouseReleaseEvent(e); }
inline void py_q_paintEvent(QPaintEvent*  e) { QComboBox::paintEvent(e); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QComboBox::resizeEvent(e); }
inline void py_q_showEvent(QShowEvent*  e) { QComboBox::showEvent(e); }
inline void py_q_showPopup() { QComboBox::showPopup(); }
inline QSize  py_q_sizeHint() const { return QComboBox::sizeHint(); }
inline void py_q_wheelEvent(QWheelEvent*  e) { QComboBox::wheelEvent(e); }
};

class PythonQtWrapper_QComboBox : public QObject
{ Q_OBJECT
public:
public slots:
QComboBox* new_QComboBox(QWidget*  parent = nullptr);
void delete_QComboBox(QComboBox* obj) { delete obj; }
   void addItem(QComboBox* theWrappedObject, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void addItem(QComboBox* theWrappedObject, const QString&  text, const QVariant&  userData = QVariant());
   void addItems(QComboBox* theWrappedObject, const QStringList&  texts);
   void py_q_changeEvent(QComboBox* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_changeEvent(e));}
   QCompleter*  completer(QComboBox* theWrappedObject) const;
   void py_q_contextMenuEvent(QComboBox* theWrappedObject, QContextMenuEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_contextMenuEvent(e));}
   int  count(QComboBox* theWrappedObject) const;
   QVariant  currentData(QComboBox* theWrappedObject, int  role = Qt::UserRole) const;
   int  currentIndex(QComboBox* theWrappedObject) const;
   QString  currentText(QComboBox* theWrappedObject) const;
   bool  duplicatesEnabled(QComboBox* theWrappedObject) const;
   bool  py_q_event(QComboBox* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_event(event));}
   int  findData(QComboBox* theWrappedObject, const QVariant&  data, int  role = Qt::UserRole, Qt::MatchFlags  flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const;
   int  findText(QComboBox* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const;
   void py_q_focusInEvent(QComboBox* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_focusInEvent(e));}
   void py_q_focusOutEvent(QComboBox* theWrappedObject, QFocusEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_focusOutEvent(e));}
   bool  hasFrame(QComboBox* theWrappedObject) const;
   void py_q_hideEvent(QComboBox* theWrappedObject, QHideEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_hideEvent(e));}
   void hidePopup(QComboBox* theWrappedObject);
   void py_q_hidePopup(QComboBox* theWrappedObject){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_hidePopup());}
   QSize  iconSize(QComboBox* theWrappedObject) const;
   void initStyleOption(QComboBox* theWrappedObject, QStyleOptionComboBox*  option) const;
   void py_q_inputMethodEvent(QComboBox* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   QVariant  py_q_inputMethodQuery(QComboBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const{  return (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_inputMethodQuery(arg__1));}
   QVariant  inputMethodQuery(QComboBox* theWrappedObject, Qt::InputMethodQuery  query, const QVariant&  argument) const;
   void insertItem(QComboBox* theWrappedObject, int  index, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void insertItem(QComboBox* theWrappedObject, int  index, const QString&  text, const QVariant&  userData = QVariant());
   void insertItems(QComboBox* theWrappedObject, int  index, const QStringList&  texts);
   QComboBox::InsertPolicy  insertPolicy(QComboBox* theWrappedObject) const;
   void insertSeparator(QComboBox* theWrappedObject, int  index);
   bool  isEditable(QComboBox* theWrappedObject) const;
   QVariant  itemData(QComboBox* theWrappedObject, int  index, int  role = Qt::UserRole) const;
   QAbstractItemDelegate*  itemDelegate(QComboBox* theWrappedObject) const;
   QIcon  itemIcon(QComboBox* theWrappedObject, int  index) const;
   QString  itemText(QComboBox* theWrappedObject, int  index) const;
   void py_q_keyPressEvent(QComboBox* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_keyPressEvent(e));}
   void py_q_keyReleaseEvent(QComboBox* theWrappedObject, QKeyEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_keyReleaseEvent(e));}
   QLineEdit*  lineEdit(QComboBox* theWrappedObject) const;
   int  maxCount(QComboBox* theWrappedObject) const;
   int  maxVisibleItems(QComboBox* theWrappedObject) const;
   int  minimumContentsLength(QComboBox* theWrappedObject) const;
   QSize  minimumSizeHint(QComboBox* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QComboBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_minimumSizeHint());}
   QAbstractItemModel*  model(QComboBox* theWrappedObject) const;
   int  modelColumn(QComboBox* theWrappedObject) const;
   void py_q_mousePressEvent(QComboBox* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_mousePressEvent(e));}
   void py_q_mouseReleaseEvent(QComboBox* theWrappedObject, QMouseEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_mouseReleaseEvent(e));}
   void py_q_paintEvent(QComboBox* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_paintEvent(e));}
   void removeItem(QComboBox* theWrappedObject, int  index);
   void py_q_resizeEvent(QComboBox* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_resizeEvent(e));}
   QModelIndex  rootModelIndex(QComboBox* theWrappedObject) const;
   void setCompleter(QComboBox* theWrappedObject, QCompleter*  c);
   void setDuplicatesEnabled(QComboBox* theWrappedObject, bool  enable);
   void setEditable(QComboBox* theWrappedObject, bool  editable);
   void setFrame(QComboBox* theWrappedObject, bool  arg__1);
   void setIconSize(QComboBox* theWrappedObject, const QSize&  size);
   void setInsertPolicy(QComboBox* theWrappedObject, QComboBox::InsertPolicy  policy);
   void setItemData(QComboBox* theWrappedObject, int  index, const QVariant&  value, int  role = Qt::UserRole);
   void setItemDelegate(QComboBox* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setItemIcon(QComboBox* theWrappedObject, int  index, const QIcon&  icon);
   void setItemText(QComboBox* theWrappedObject, int  index, const QString&  text);
   void setLineEdit(QComboBox* theWrappedObject, QLineEdit*  edit);
   void setMaxCount(QComboBox* theWrappedObject, int  max);
   void setMaxVisibleItems(QComboBox* theWrappedObject, int  maxItems);
   void setMinimumContentsLength(QComboBox* theWrappedObject, int  characters);
   void setModel(QComboBox* theWrappedObject, QAbstractItemModel*  model);
   void setModelColumn(QComboBox* theWrappedObject, int  visibleColumn);
   void setRootModelIndex(QComboBox* theWrappedObject, const QModelIndex&  index);
   void setSizeAdjustPolicy(QComboBox* theWrappedObject, QComboBox::SizeAdjustPolicy  policy);
   void setValidator(QComboBox* theWrappedObject, const QValidator*  v);
   void setView(QComboBox* theWrappedObject, QAbstractItemView*  itemView);
   void py_q_showEvent(QComboBox* theWrappedObject, QShowEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_showEvent(e));}
   void showPopup(QComboBox* theWrappedObject);
   void py_q_showPopup(QComboBox* theWrappedObject){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_showPopup());}
   QComboBox::SizeAdjustPolicy  sizeAdjustPolicy(QComboBox* theWrappedObject) const;
   QSize  sizeHint(QComboBox* theWrappedObject) const;
   QSize  py_q_sizeHint(QComboBox* theWrappedObject) const{  return (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_sizeHint());}
   const QValidator*  validator(QComboBox* theWrappedObject) const;
   QAbstractItemView*  view(QComboBox* theWrappedObject) const;
   void py_q_wheelEvent(QComboBox* theWrappedObject, QWheelEvent*  e){  (((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->py_q_wheelEvent(e));}
};





class PythonQtShell_QCommandLinkButton : public QCommandLinkButton
{
public:
    PythonQtShell_QCommandLinkButton(QWidget*  parent = nullptr):QCommandLinkButton(parent),_wrapper(nullptr) {};
    PythonQtShell_QCommandLinkButton(const QString&  text, QWidget*  parent = nullptr):QCommandLinkButton(text, parent),_wrapper(nullptr) {};
    PythonQtShell_QCommandLinkButton(const QString&  text, const QString&  description, QWidget*  parent = nullptr):QCommandLinkButton(text, description, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QCommandLinkButton() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  e) override;
void checkStateSet() override;
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
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  arg__1) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  arg__1) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
bool  hitButton(const QPoint&  pos) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  e) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
void nextCheckState() override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QCommandLinkButton : public QCommandLinkButton
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline int  promoted_heightForWidth(int  arg__1) const { return this->heightForWidth(arg__1); }
inline QSize  promoted_minimumSizeHint() const { return this->minimumSizeHint(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline QSize  promoted_sizeHint() const { return this->sizeHint(); }
inline bool  py_q_event(QEvent*  e) { return QCommandLinkButton::event(e); }
inline int  py_q_heightForWidth(int  arg__1) const { return QCommandLinkButton::heightForWidth(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QCommandLinkButton::minimumSizeHint(); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QCommandLinkButton::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QCommandLinkButton::sizeHint(); }
};

class PythonQtWrapper_QCommandLinkButton : public QObject
{ Q_OBJECT
public:
public slots:
QCommandLinkButton* new_QCommandLinkButton(QWidget*  parent = nullptr);
QCommandLinkButton* new_QCommandLinkButton(const QString&  text, QWidget*  parent = nullptr);
QCommandLinkButton* new_QCommandLinkButton(const QString&  text, const QString&  description, QWidget*  parent = nullptr);
void delete_QCommandLinkButton(QCommandLinkButton* obj) { delete obj; }
   QString  description(QCommandLinkButton* theWrappedObject) const;
   bool  py_q_event(QCommandLinkButton* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_event(e));}
   int  py_q_heightForWidth(QCommandLinkButton* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   QSize  py_q_minimumSizeHint(QCommandLinkButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_paintEvent(QCommandLinkButton* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void setDescription(QCommandLinkButton* theWrappedObject, const QString&  description);
   QSize  py_q_sizeHint(QCommandLinkButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QCommandLinkButton*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtShell_QCommonStyle : public QCommonStyle
{
public:
    PythonQtShell_QCommonStyle():QCommonStyle(),_wrapper(nullptr) {};

   ~PythonQtShell_QCommonStyle() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = nullptr) const override;
void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const override;
void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const override;
void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const override;
void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const override;
QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = nullptr) const override;
QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const override;
int  layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const override;
int  pixelMetric(QStyle::PixelMetric  m, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const override;
void polish(QApplication*  app) override;
void polish(QPalette&  arg__1) override;
void polish(QWidget*  widget) override;
QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = nullptr) const override;
QIcon  standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const override;
QPalette  standardPalette() const override;
QPixmap  standardPixmap(QStyle::StandardPixmap  sp, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const override;
int  styleHint(QStyle::StyleHint  sh, const QStyleOption*  opt = nullptr, const QWidget*  w = nullptr, QStyleHintReturn*  shret = nullptr) const override;
QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = nullptr) const override;
QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = nullptr) const override;
void timerEvent(QTimerEvent*  event) override;
void unpolish(QApplication*  application) override;
void unpolish(QWidget*  widget) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QCommonStyle : public QCommonStyle
{ public:
inline void py_q_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = nullptr) const { QCommonStyle::drawComplexControl(cc, opt, p, w); }
inline void py_q_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const { QCommonStyle::drawControl(element, opt, p, w); }
inline void py_q_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const { QCommonStyle::drawPrimitive(pe, opt, p, w); }
inline QPixmap  py_q_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt); }
inline QStyle::SubControl  py_q_hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = nullptr) const { return QCommonStyle::hitTestComplexControl(cc, opt, pt, w); }
inline int  py_q_layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const { return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget); }
inline int  py_q_pixelMetric(QStyle::PixelMetric  m, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const { return QCommonStyle::pixelMetric(m, opt, widget); }
inline void py_q_polish(QApplication*  app) { QCommonStyle::polish(app); }
inline void py_q_polish(QPalette&  arg__1) { QCommonStyle::polish(arg__1); }
inline void py_q_polish(QWidget*  widget) { QCommonStyle::polish(widget); }
inline QSize  py_q_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = nullptr) const { return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline QIcon  py_q_standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const { return QCommonStyle::standardIcon(standardIcon, opt, widget); }
inline QPixmap  py_q_standardPixmap(QStyle::StandardPixmap  sp, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const { return QCommonStyle::standardPixmap(sp, opt, widget); }
inline int  py_q_styleHint(QStyle::StyleHint  sh, const QStyleOption*  opt = nullptr, const QWidget*  w = nullptr, QStyleHintReturn*  shret = nullptr) const { return QCommonStyle::styleHint(sh, opt, w, shret); }
inline QRect  py_q_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = nullptr) const { return QCommonStyle::subControlRect(cc, opt, sc, w); }
inline QRect  py_q_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = nullptr) const { return QCommonStyle::subElementRect(r, opt, widget); }
inline void py_q_unpolish(QApplication*  application) { QCommonStyle::unpolish(application); }
inline void py_q_unpolish(QWidget*  widget) { QCommonStyle::unpolish(widget); }
};

class PythonQtWrapper_QCommonStyle : public QObject
{ Q_OBJECT
public:
public slots:
QCommonStyle* new_QCommonStyle();
void delete_QCommonStyle(QCommonStyle* obj) { delete obj; }
   void py_q_drawComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = nullptr) const{  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_drawComplexControl(cc, opt, p, w));}
   void py_q_drawControl(QCommonStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const{  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_drawControl(element, opt, p, w));}
   void py_q_drawPrimitive(QCommonStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = nullptr) const{  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_drawPrimitive(pe, opt, p, w));}
   QPixmap  py_q_generatedIconPixmap(QCommonStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_generatedIconPixmap(iconMode, pixmap, opt));}
   QStyle::SubControl  py_q_hitTestComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_hitTestComplexControl(cc, opt, pt, w));}
   int  py_q_layoutSpacing(QCommonStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_layoutSpacing(control1, control2, orientation, option, widget));}
   int  py_q_pixelMetric(QCommonStyle* theWrappedObject, QStyle::PixelMetric  m, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_pixelMetric(m, opt, widget));}
   void py_q_polish(QCommonStyle* theWrappedObject, QApplication*  app){  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_polish(app));}
   void py_q_polish(QCommonStyle* theWrappedObject, QPalette&  arg__1){  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_polish(arg__1));}
   void py_q_polish(QCommonStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_polish(widget));}
   QSize  py_q_sizeFromContents(QCommonStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_sizeFromContents(ct, opt, contentsSize, widget));}
   QIcon  py_q_standardIcon(QCommonStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_standardIcon(standardIcon, opt, widget));}
   QPixmap  py_q_standardPixmap(QCommonStyle* theWrappedObject, QStyle::StandardPixmap  sp, const QStyleOption*  opt = nullptr, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_standardPixmap(sp, opt, widget));}
   int  py_q_styleHint(QCommonStyle* theWrappedObject, QStyle::StyleHint  sh, const QStyleOption*  opt = nullptr, const QWidget*  w = nullptr, QStyleHintReturn*  shret = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_styleHint(sh, opt, w, shret));}
   QRect  py_q_subControlRect(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_subControlRect(cc, opt, sc, w));}
   QRect  py_q_subElementRect(QCommonStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = nullptr) const{  return (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_subElementRect(r, opt, widget));}
   void py_q_unpolish(QCommonStyle* theWrappedObject, QApplication*  application){  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_unpolish(application));}
   void py_q_unpolish(QCommonStyle* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QCommonStyle*)theWrappedObject)->py_q_unpolish(widget));}
};


