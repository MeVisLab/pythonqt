#ifndef PYTHONQTWRAPPER_QCOMBOBOX_H
#define PYTHONQTWRAPPER_QCOMBOBOX_H

#include <qcombobox.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcombobox.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qwidget.h>

class PythonQtShell_QComboBox : public QComboBox
{
public:
    PythonQtShell_QComboBox(QWidget*  parent = 0):QComboBox(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  e);
virtual void hidePopup();
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void showEvent(QShowEvent*  e);
virtual void showPopup();
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QComboBox : public QComboBox
{ public:
inline void promoted_paintEvent(QPaintEvent*  e) { QComboBox::paintEvent(e); }
inline void promoted_showEvent(QShowEvent*  e) { QComboBox::showEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QComboBox::changeEvent(e); }
inline void promoted_hidePopup() { QComboBox::hidePopup(); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QComboBox::contextMenuEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QComboBox::inputMethodEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QComboBox::focusOutEvent(e); }
inline void promoted_hideEvent(QHideEvent*  e) { QComboBox::hideEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QComboBox::wheelEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QComboBox::mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QComboBox::mouseReleaseEvent(e); }
inline void promoted_showPopup() { QComboBox::showPopup(); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QComboBox::resizeEvent(e); }
inline bool  promoted_event(QEvent*  event) { return QComboBox::event(event); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QComboBox::focusInEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QComboBox::keyReleaseEvent(e); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QComboBox::keyPressEvent(e); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QComboBox::inputMethodQuery(arg__1); }
};

class PythonQtWrapper_QComboBox : public QObject
{ Q_OBJECT
public:
public slots:
QComboBox* new_QComboBox(QWidget*  parent = 0);
void delete_QComboBox(QComboBox* obj) { delete obj; } 
   void paintEvent(QComboBox* theWrappedObject, QPaintEvent*  e);
   void showEvent(QComboBox* theWrappedObject, QShowEvent*  e);
   void addItem(QComboBox* theWrappedObject, const QString&  text, const QVariant&  userData = QVariant());
   QSize  sizeHint(QComboBox* theWrappedObject) const;
   void setMaxVisibleItems(QComboBox* theWrappedObject, int  maxItems);
   void setModelColumn(QComboBox* theWrappedObject, int  visibleColumn);
   void setCompleter(QComboBox* theWrappedObject, QCompleter*  c);
   void setRootModelIndex(QComboBox* theWrappedObject, const QModelIndex&  index);
   int  count(QComboBox* theWrappedObject) const;
   void changeEvent(QComboBox* theWrappedObject, QEvent*  e);
   void setLineEdit(QComboBox* theWrappedObject, QLineEdit*  edit);
   void removeItem(QComboBox* theWrappedObject, int  index);
   QModelIndex  rootModelIndex(QComboBox* theWrappedObject) const;
   QString  currentText(QComboBox* theWrappedObject) const;
   void hidePopup(QComboBox* theWrappedObject);
   void insertItem(QComboBox* theWrappedObject, int  index, const QString&  text, const QVariant&  userData = QVariant());
   QAbstractItemModel*  model(QComboBox* theWrappedObject) const;
   void contextMenuEvent(QComboBox* theWrappedObject, QContextMenuEvent*  e);
   QSize  minimumSizeHint(QComboBox* theWrappedObject) const;
   QCompleter*  completer(QComboBox* theWrappedObject) const;
   void setItemIcon(QComboBox* theWrappedObject, int  index, const QIcon&  icon);
   void addItem(QComboBox* theWrappedObject, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void inputMethodEvent(QComboBox* theWrappedObject, QInputMethodEvent*  arg__1);
   bool  hasFrame(QComboBox* theWrappedObject) const;
   QComboBox::InsertPolicy  insertPolicy(QComboBox* theWrappedObject) const;
   void setItemData(QComboBox* theWrappedObject, int  index, const QVariant&  value, int  role = Qt::UserRole);
   int  currentIndex(QComboBox* theWrappedObject) const;
   void focusOutEvent(QComboBox* theWrappedObject, QFocusEvent*  e);
   bool  duplicatesEnabled(QComboBox* theWrappedObject) const;
   void hideEvent(QComboBox* theWrappedObject, QHideEvent*  e);
   void setIconSize(QComboBox* theWrappedObject, const QSize&  size);
   QAbstractItemView*  view(QComboBox* theWrappedObject) const;
   void wheelEvent(QComboBox* theWrappedObject, QWheelEvent*  e);
   void mousePressEvent(QComboBox* theWrappedObject, QMouseEvent*  e);
   void mouseReleaseEvent(QComboBox* theWrappedObject, QMouseEvent*  e);
   void showPopup(QComboBox* theWrappedObject);
   void insertItem(QComboBox* theWrappedObject, int  index, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void addItems(QComboBox* theWrappedObject, const QStringList&  texts);
   const QValidator*  validator(QComboBox* theWrappedObject) const;
   QIcon  itemIcon(QComboBox* theWrappedObject, int  index) const;
   int  maxCount(QComboBox* theWrappedObject) const;
   int  findData(QComboBox* theWrappedObject, const QVariant&  data, int  role = Qt::UserRole, Qt::MatchFlags  flags = Qt::MatchExactly|Qt::MatchCaseSensitive) const;
   void resizeEvent(QComboBox* theWrappedObject, QResizeEvent*  e);
   void setSizeAdjustPolicy(QComboBox* theWrappedObject, QComboBox::SizeAdjustPolicy  policy);
   void setValidator(QComboBox* theWrappedObject, const QValidator*  v);
   void setDuplicatesEnabled(QComboBox* theWrappedObject, bool  enable);
   void setFrame(QComboBox* theWrappedObject, bool  arg__1);
   bool  event(QComboBox* theWrappedObject, QEvent*  event);
   void setEditable(QComboBox* theWrappedObject, bool  editable);
   void focusInEvent(QComboBox* theWrappedObject, QFocusEvent*  e);
   QLineEdit*  lineEdit(QComboBox* theWrappedObject) const;
   void setItemDelegate(QComboBox* theWrappedObject, QAbstractItemDelegate*  delegate);
   void keyReleaseEvent(QComboBox* theWrappedObject, QKeyEvent*  e);
   int  maxVisibleItems(QComboBox* theWrappedObject) const;
   QComboBox::SizeAdjustPolicy  sizeAdjustPolicy(QComboBox* theWrappedObject) const;
   void setInsertPolicy(QComboBox* theWrappedObject, QComboBox::InsertPolicy  policy);
   void setMaxCount(QComboBox* theWrappedObject, int  max);
   void keyPressEvent(QComboBox* theWrappedObject, QKeyEvent*  e);
   QSize  iconSize(QComboBox* theWrappedObject) const;
   int  minimumContentsLength(QComboBox* theWrappedObject) const;
   void setMinimumContentsLength(QComboBox* theWrappedObject, int  characters);
   void insertSeparator(QComboBox* theWrappedObject, int  index);
   int  modelColumn(QComboBox* theWrappedObject) const;
   int  findText(QComboBox* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = Qt::MatchExactly|Qt::MatchCaseSensitive) const;
   void setModel(QComboBox* theWrappedObject, QAbstractItemModel*  model);
   QVariant  inputMethodQuery(QComboBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void setItemText(QComboBox* theWrappedObject, int  index, const QString&  text);
   void setView(QComboBox* theWrappedObject, QAbstractItemView*  itemView);
   void insertItems(QComboBox* theWrappedObject, int  index, const QStringList&  texts);
   bool  isEditable(QComboBox* theWrappedObject) const;
   QString  itemText(QComboBox* theWrappedObject, int  index) const;
   QAbstractItemDelegate*  itemDelegate(QComboBox* theWrappedObject) const;
   QVariant  itemData(QComboBox* theWrappedObject, int  index, int  role = Qt::UserRole) const;
};

#endif // PYTHONQTWRAPPER_QCOMBOBOX_H
