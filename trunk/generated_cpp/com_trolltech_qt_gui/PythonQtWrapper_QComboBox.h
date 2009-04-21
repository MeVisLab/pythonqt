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
inline void mouseReleaseEvent(QMouseEvent*  e) { QComboBox::mouseReleaseEvent(e); }
inline void paintEvent(QPaintEvent*  e) { QComboBox::paintEvent(e); }
inline void keyReleaseEvent(QKeyEvent*  e) { QComboBox::keyReleaseEvent(e); }
inline void resizeEvent(QResizeEvent*  e) { QComboBox::resizeEvent(e); }
inline void hideEvent(QHideEvent*  e) { QComboBox::hideEvent(e); }
inline void keyPressEvent(QKeyEvent*  e) { QComboBox::keyPressEvent(e); }
inline void focusOutEvent(QFocusEvent*  e) { QComboBox::focusOutEvent(e); }
inline void focusInEvent(QFocusEvent*  e) { QComboBox::focusInEvent(e); }
inline void inputMethodEvent(QInputMethodEvent*  arg__1) { QComboBox::inputMethodEvent(arg__1); }
inline void contextMenuEvent(QContextMenuEvent*  e) { QComboBox::contextMenuEvent(e); }
inline void mousePressEvent(QMouseEvent*  e) { QComboBox::mousePressEvent(e); }
inline void showEvent(QShowEvent*  e) { QComboBox::showEvent(e); }
inline void wheelEvent(QWheelEvent*  e) { QComboBox::wheelEvent(e); }
inline QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QComboBox::inputMethodQuery(arg__1); }
inline void changeEvent(QEvent*  e) { QComboBox::changeEvent(e); }
};

class PythonQtWrapper_QComboBox : public QObject
{ Q_OBJECT
public:
public slots:
QComboBox* new_QComboBox(QWidget*  parent = 0);
void delete_QComboBox(QComboBox* obj) { delete obj; } 
   void setSizeAdjustPolicy(QComboBox* theWrappedObject, QComboBox::SizeAdjustPolicy  policy);
   QSize  sizeHint(QComboBox* theWrappedObject) const;
   void setDuplicatesEnabled(QComboBox* theWrappedObject, bool  enable);
   void setItemIcon(QComboBox* theWrappedObject, int  index, const QIcon&  icon);
   QCompleter*  completer(QComboBox* theWrappedObject) const;
   int  modelColumn(QComboBox* theWrappedObject) const;
   void mouseReleaseEvent(QComboBox* theWrappedObject, QMouseEvent*  e);
   QSize  minimumSizeHint(QComboBox* theWrappedObject) const;
   void paintEvent(QComboBox* theWrappedObject, QPaintEvent*  e);
   void setIconSize(QComboBox* theWrappedObject, const QSize&  size);
   int  minimumContentsLength(QComboBox* theWrappedObject) const;
   int  maxCount(QComboBox* theWrappedObject) const;
   int  findData(QComboBox* theWrappedObject, const QVariant&  data, int  role = Qt::UserRole, Qt::MatchFlags  flags = Qt::MatchExactly|Qt::MatchCaseSensitive) const;
   void setItemText(QComboBox* theWrappedObject, int  index, const QString&  text);
   void addItem(QComboBox* theWrappedObject, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   const QValidator*  validator(QComboBox* theWrappedObject) const;
   QSize  iconSize(QComboBox* theWrappedObject) const;
   QComboBox::InsertPolicy  insertPolicy(QComboBox* theWrappedObject) const;
   void setMinimumContentsLength(QComboBox* theWrappedObject, int  characters);
   void setModel(QComboBox* theWrappedObject, QAbstractItemModel*  model);
   void removeItem(QComboBox* theWrappedObject, int  index);
   void keyReleaseEvent(QComboBox* theWrappedObject, QKeyEvent*  e);
   int  maxVisibleItems(QComboBox* theWrappedObject) const;
   QComboBox::SizeAdjustPolicy  sizeAdjustPolicy(QComboBox* theWrappedObject) const;
   void setCompleter(QComboBox* theWrappedObject, QCompleter*  c);
   QString  itemText(QComboBox* theWrappedObject, int  index) const;
   void insertItems(QComboBox* theWrappedObject, int  index, const QStringList&  texts);
   void insertSeparator(QComboBox* theWrappedObject, int  index);
   void resizeEvent(QComboBox* theWrappedObject, QResizeEvent*  e);
   void hideEvent(QComboBox* theWrappedObject, QHideEvent*  e);
   int  findText(QComboBox* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = Qt::MatchExactly|Qt::MatchCaseSensitive) const;
   void keyPressEvent(QComboBox* theWrappedObject, QKeyEvent*  e);
   void setModelColumn(QComboBox* theWrappedObject, int  visibleColumn);
   QAbstractItemDelegate*  itemDelegate(QComboBox* theWrappedObject) const;
   QString  currentText(QComboBox* theWrappedObject) const;
   void insertItem(QComboBox* theWrappedObject, int  index, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void focusOutEvent(QComboBox* theWrappedObject, QFocusEvent*  e);
   void setEditable(QComboBox* theWrappedObject, bool  editable);
   void focusInEvent(QComboBox* theWrappedObject, QFocusEvent*  e);
   void showPopup(QComboBox* theWrappedObject);
   QLineEdit*  lineEdit(QComboBox* theWrappedObject) const;
   int  count(QComboBox* theWrappedObject) const;
   void setItemDelegate(QComboBox* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setInsertPolicy(QComboBox* theWrappedObject, QComboBox::InsertPolicy  policy);
   void addItems(QComboBox* theWrappedObject, const QStringList&  texts);
   QIcon  itemIcon(QComboBox* theWrappedObject, int  index) const;
   void setMaxCount(QComboBox* theWrappedObject, int  max);
   bool  event(QComboBox* theWrappedObject, QEvent*  event);
   int  currentIndex(QComboBox* theWrappedObject) const;
   bool  duplicatesEnabled(QComboBox* theWrappedObject) const;
   QAbstractItemModel*  model(QComboBox* theWrappedObject) const;
   void setRootModelIndex(QComboBox* theWrappedObject, const QModelIndex&  index);
   bool  isEditable(QComboBox* theWrappedObject) const;
   QVariant  itemData(QComboBox* theWrappedObject, int  index, int  role = Qt::UserRole) const;
   void setItemData(QComboBox* theWrappedObject, int  index, const QVariant&  value, int  role = Qt::UserRole);
   void addItem(QComboBox* theWrappedObject, const QString&  text, const QVariant&  userData = QVariant());
   void inputMethodEvent(QComboBox* theWrappedObject, QInputMethodEvent*  arg__1);
   void setValidator(QComboBox* theWrappedObject, const QValidator*  v);
   void setFrame(QComboBox* theWrappedObject, bool  arg__1);
   void insertItem(QComboBox* theWrappedObject, int  index, const QString&  text, const QVariant&  userData = QVariant());
   void contextMenuEvent(QComboBox* theWrappedObject, QContextMenuEvent*  e);
   void setLineEdit(QComboBox* theWrappedObject, QLineEdit*  edit);
   void setView(QComboBox* theWrappedObject, QAbstractItemView*  itemView);
   void mousePressEvent(QComboBox* theWrappedObject, QMouseEvent*  e);
   bool  hasFrame(QComboBox* theWrappedObject) const;
   void showEvent(QComboBox* theWrappedObject, QShowEvent*  e);
   void wheelEvent(QComboBox* theWrappedObject, QWheelEvent*  e);
   QModelIndex  rootModelIndex(QComboBox* theWrappedObject) const;
   QVariant  inputMethodQuery(QComboBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void changeEvent(QComboBox* theWrappedObject, QEvent*  e);
   void hidePopup(QComboBox* theWrappedObject);
   QAbstractItemView*  view(QComboBox* theWrappedObject) const;
   void setMaxVisibleItems(QComboBox* theWrappedObject, int  maxItems);
};

#endif // PYTHONQTWRAPPER_QCOMBOBOX_H
