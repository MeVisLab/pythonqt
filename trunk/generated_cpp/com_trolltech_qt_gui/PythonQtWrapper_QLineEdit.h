#ifndef PYTHONQTWRAPPER_QLINEEDIT_H
#define PYTHONQTWRAPPER_QLINEEDIT_H

#include <qlineedit.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
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
#include <qmenu.h>
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
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qwidget.h>

class PythonQtShell_QLineEdit : public QLineEdit
{
public:
    PythonQtShell_QLineEdit(QWidget*  parent = 0):QLineEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QLineEdit(const QString&  arg__1, QWidget*  parent = 0):QLineEdit(arg__1, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLineEdit : public QLineEdit
{ public:
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QLineEdit::dragMoveEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QLineEdit::paintEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QLineEdit::mousePressEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QLineEdit::mouseDoubleClickEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QLineEdit::inputMethodEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QLineEdit::changeEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QLineEdit::inputMethodQuery(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QLineEdit::mouseMoveEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QLineEdit::keyPressEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QLineEdit::dragLeaveEvent(e); }
inline bool  promoted_event(QEvent*  arg__1) { return QLineEdit::event(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QLineEdit::dropEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QLineEdit::focusOutEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QLineEdit::mouseReleaseEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QLineEdit::focusInEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QLineEdit::dragEnterEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QLineEdit::contextMenuEvent(arg__1); }
};

class PythonQtWrapper_QLineEdit : public QObject
{ Q_OBJECT
public:
public slots:
QLineEdit* new_QLineEdit(QWidget*  parent = 0);
QLineEdit* new_QLineEdit(const QString&  arg__1, QWidget*  parent = 0);
void delete_QLineEdit(QLineEdit* obj) { delete obj; } 
   bool  isReadOnly(QLineEdit* theWrappedObject) const;
   QCompleter*  completer(QLineEdit* theWrappedObject) const;
   void dragMoveEvent(QLineEdit* theWrappedObject, QDragMoveEvent*  e);
   bool  isUndoAvailable(QLineEdit* theWrappedObject) const;
   bool  dragEnabled(QLineEdit* theWrappedObject) const;
   void paintEvent(QLineEdit* theWrappedObject, QPaintEvent*  arg__1);
   void mousePressEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   void setCompleter(QLineEdit* theWrappedObject, QCompleter*  completer);
   void setModified(QLineEdit* theWrappedObject, bool  arg__1);
   void mouseDoubleClickEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   void backspace(QLineEdit* theWrappedObject);
   int  selectionStart(QLineEdit* theWrappedObject) const;
   void home(QLineEdit* theWrappedObject, bool  mark);
   void inputMethodEvent(QLineEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   void cursorWordForward(QLineEdit* theWrappedObject, bool  mark);
   void setDragEnabled(QLineEdit* theWrappedObject, bool  b);
   QSize  sizeHint(QLineEdit* theWrappedObject) const;
   const QValidator*  validator(QLineEdit* theWrappedObject) const;
   QSize  minimumSizeHint(QLineEdit* theWrappedObject) const;
   bool  isModified(QLineEdit* theWrappedObject) const;
   void changeEvent(QLineEdit* theWrappedObject, QEvent*  arg__1);
   bool  hasAcceptableInput(QLineEdit* theWrappedObject) const;
   QMenu*  createStandardContextMenu(QLineEdit* theWrappedObject);
   void setEchoMode(QLineEdit* theWrappedObject, QLineEdit::EchoMode  arg__1);
   void setReadOnly(QLineEdit* theWrappedObject, bool  arg__1);
   QVariant  inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   QLineEdit::EchoMode  echoMode(QLineEdit* theWrappedObject) const;
   QString  inputMask(QLineEdit* theWrappedObject) const;
   void end(QLineEdit* theWrappedObject, bool  mark);
   bool  isRedoAvailable(QLineEdit* theWrappedObject) const;
   void mouseMoveEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   Qt::Alignment  alignment(QLineEdit* theWrappedObject) const;
   QString  selectedText(QLineEdit* theWrappedObject) const;
   void deselect(QLineEdit* theWrappedObject);
   bool  hasSelectedText(QLineEdit* theWrappedObject) const;
   void keyPressEvent(QLineEdit* theWrappedObject, QKeyEvent*  arg__1);
   void del(QLineEdit* theWrappedObject);
   QString  text(QLineEdit* theWrappedObject) const;
   void cursorBackward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   int  maxLength(QLineEdit* theWrappedObject) const;
   void cursorForward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   void setValidator(QLineEdit* theWrappedObject, const QValidator*  arg__1);
   void setMaxLength(QLineEdit* theWrappedObject, int  arg__1);
   void dragLeaveEvent(QLineEdit* theWrappedObject, QDragLeaveEvent*  e);
   void setSelection(QLineEdit* theWrappedObject, int  arg__1, int  arg__2);
   bool  event(QLineEdit* theWrappedObject, QEvent*  arg__1);
   void setCursorPosition(QLineEdit* theWrappedObject, int  arg__1);
   int  cursorPositionAt(QLineEdit* theWrappedObject, const QPoint&  pos);
   void setAlignment(QLineEdit* theWrappedObject, Qt::Alignment  flag);
   void dropEvent(QLineEdit* theWrappedObject, QDropEvent*  arg__1);
   bool  hasFrame(QLineEdit* theWrappedObject) const;
   void focusOutEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1);
   void mouseReleaseEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   QString  displayText(QLineEdit* theWrappedObject) const;
   void setInputMask(QLineEdit* theWrappedObject, const QString&  inputMask);
   void insert(QLineEdit* theWrappedObject, const QString&  arg__1);
   int  cursorPosition(QLineEdit* theWrappedObject) const;
   void focusInEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1);
   void cursorWordBackward(QLineEdit* theWrappedObject, bool  mark);
   void dragEnterEvent(QLineEdit* theWrappedObject, QDragEnterEvent*  arg__1);
   void setFrame(QLineEdit* theWrappedObject, bool  arg__1);
   void contextMenuEvent(QLineEdit* theWrappedObject, QContextMenuEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QLINEEDIT_H
