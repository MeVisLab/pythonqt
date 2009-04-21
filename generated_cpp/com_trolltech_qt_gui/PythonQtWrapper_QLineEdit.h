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
inline void mouseMoveEvent(QMouseEvent*  arg__1) { QLineEdit::mouseMoveEvent(arg__1); }
inline void keyPressEvent(QKeyEvent*  arg__1) { QLineEdit::keyPressEvent(arg__1); }
inline void focusOutEvent(QFocusEvent*  arg__1) { QLineEdit::focusOutEvent(arg__1); }
inline void dropEvent(QDropEvent*  arg__1) { QLineEdit::dropEvent(arg__1); }
inline void contextMenuEvent(QContextMenuEvent*  arg__1) { QLineEdit::contextMenuEvent(arg__1); }
inline void inputMethodEvent(QInputMethodEvent*  arg__1) { QLineEdit::inputMethodEvent(arg__1); }
inline void mouseReleaseEvent(QMouseEvent*  arg__1) { QLineEdit::mouseReleaseEvent(arg__1); }
inline void focusInEvent(QFocusEvent*  arg__1) { QLineEdit::focusInEvent(arg__1); }
inline void dragEnterEvent(QDragEnterEvent*  arg__1) { QLineEdit::dragEnterEvent(arg__1); }
inline void paintEvent(QPaintEvent*  arg__1) { QLineEdit::paintEvent(arg__1); }
inline void dragMoveEvent(QDragMoveEvent*  e) { QLineEdit::dragMoveEvent(e); }
inline void dragLeaveEvent(QDragLeaveEvent*  e) { QLineEdit::dragLeaveEvent(e); }
inline void changeEvent(QEvent*  arg__1) { QLineEdit::changeEvent(arg__1); }
inline void mouseDoubleClickEvent(QMouseEvent*  arg__1) { QLineEdit::mouseDoubleClickEvent(arg__1); }
inline void mousePressEvent(QMouseEvent*  arg__1) { QLineEdit::mousePressEvent(arg__1); }
};

class PythonQtWrapper_QLineEdit : public QObject
{ Q_OBJECT
public:
public slots:
QLineEdit* new_QLineEdit(QWidget*  parent = 0);
QLineEdit* new_QLineEdit(const QString&  arg__1, QWidget*  parent = 0);
void delete_QLineEdit(QLineEdit* obj) { delete obj; } 
   void setDragEnabled(QLineEdit* theWrappedObject, bool  b);
   void setReadOnly(QLineEdit* theWrappedObject, bool  arg__1);
   QSize  sizeHint(QLineEdit* theWrappedObject) const;
   QSize  minimumSizeHint(QLineEdit* theWrappedObject) const;
   bool  isModified(QLineEdit* theWrappedObject) const;
   void setFrame(QLineEdit* theWrappedObject, bool  arg__1);
   bool  hasAcceptableInput(QLineEdit* theWrappedObject) const;
   QVariant  inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   QString  text(QLineEdit* theWrappedObject) const;
   QLineEdit::EchoMode  echoMode(QLineEdit* theWrappedObject) const;
   QString  inputMask(QLineEdit* theWrappedObject) const;
   void setMaxLength(QLineEdit* theWrappedObject, int  arg__1);
   void setSelection(QLineEdit* theWrappedObject, int  arg__1, int  arg__2);
   bool  isRedoAvailable(QLineEdit* theWrappedObject) const;
   void mouseMoveEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   int  cursorPositionAt(QLineEdit* theWrappedObject, const QPoint&  pos);
   void setCursorPosition(QLineEdit* theWrappedObject, int  arg__1);
   Qt::Alignment  alignment(QLineEdit* theWrappedObject) const;
   void end(QLineEdit* theWrappedObject, bool  mark);
   QString  selectedText(QLineEdit* theWrappedObject) const;
   void deselect(QLineEdit* theWrappedObject);
   bool  hasSelectedText(QLineEdit* theWrappedObject) const;
   void keyPressEvent(QLineEdit* theWrappedObject, QKeyEvent*  arg__1);
   void del(QLineEdit* theWrappedObject);
   void cursorBackward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   void cursorForward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   void focusOutEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1);
   void home(QLineEdit* theWrappedObject, bool  mark);
   int  maxLength(QLineEdit* theWrappedObject) const;
   void insert(QLineEdit* theWrappedObject, const QString&  arg__1);
   void setAlignment(QLineEdit* theWrappedObject, Qt::Alignment  flag);
   void cursorWordBackward(QLineEdit* theWrappedObject, bool  mark);
   void dropEvent(QLineEdit* theWrappedObject, QDropEvent*  arg__1);
   void contextMenuEvent(QLineEdit* theWrappedObject, QContextMenuEvent*  arg__1);
   bool  hasFrame(QLineEdit* theWrappedObject) const;
   bool  isReadOnly(QLineEdit* theWrappedObject) const;
   void inputMethodEvent(QLineEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   void setEchoMode(QLineEdit* theWrappedObject, QLineEdit::EchoMode  arg__1);
   void mouseReleaseEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   QString  displayText(QLineEdit* theWrappedObject) const;
   void setInputMask(QLineEdit* theWrappedObject, const QString&  inputMask);
   QMenu*  createStandardContextMenu(QLineEdit* theWrappedObject);
   int  cursorPosition(QLineEdit* theWrappedObject) const;
   void focusInEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1);
   void setValidator(QLineEdit* theWrappedObject, const QValidator*  arg__1);
   void dragEnterEvent(QLineEdit* theWrappedObject, QDragEnterEvent*  arg__1);
   void paintEvent(QLineEdit* theWrappedObject, QPaintEvent*  arg__1);
   QCompleter*  completer(QLineEdit* theWrappedObject) const;
   void dragMoveEvent(QLineEdit* theWrappedObject, QDragMoveEvent*  e);
   void dragLeaveEvent(QLineEdit* theWrappedObject, QDragLeaveEvent*  e);
   bool  isUndoAvailable(QLineEdit* theWrappedObject) const;
   void changeEvent(QLineEdit* theWrappedObject, QEvent*  arg__1);
   bool  dragEnabled(QLineEdit* theWrappedObject) const;
   void cursorWordForward(QLineEdit* theWrappedObject, bool  mark);
   void mouseDoubleClickEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   const QValidator*  validator(QLineEdit* theWrappedObject) const;
   void setCompleter(QLineEdit* theWrappedObject, QCompleter*  completer);
   void setModified(QLineEdit* theWrappedObject, bool  arg__1);
   void backspace(QLineEdit* theWrappedObject);
   bool  event(QLineEdit* theWrappedObject, QEvent*  arg__1);
   int  selectionStart(QLineEdit* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QLINEEDIT_H
