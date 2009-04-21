#ifndef PYTHONQTWRAPPER_QPLAINTEXTEDIT_H
#define PYTHONQTWRAPPER_QPLAINTEXTEDIT_H

#include <qplaintextedit.h>
#include <QObject>

#include <PythonQt.h>

#include <QAbstractTextDocumentLayout>
#include <QTextEdit>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qplaintextedit.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qurl.h>
#include <qwidget.h>

class PythonQtShell_QPlainTextEdit : public QPlainTextEdit
{
public:
    PythonQtShell_QPlainTextEdit(QWidget*  parent = 0):QPlainTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QPlainTextEdit(const QString&  text, QWidget*  parent = 0):QPlainTextEdit(text, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPlainTextEdit : public QPlainTextEdit
{ public:
inline void keyReleaseEvent(QKeyEvent*  e) { QPlainTextEdit::keyReleaseEvent(e); }
inline void changeEvent(QEvent*  e) { QPlainTextEdit::changeEvent(e); }
inline QMimeData*  createMimeDataFromSelection() const { return QPlainTextEdit::createMimeDataFromSelection(); }
inline bool  event(QEvent*  e) { return QPlainTextEdit::event(e); }
inline void timerEvent(QTimerEvent*  e) { QPlainTextEdit::timerEvent(e); }
inline void insertFromMimeData(const QMimeData*  source) { QPlainTextEdit::insertFromMimeData(source); }
inline void focusOutEvent(QFocusEvent*  e) { QPlainTextEdit::focusOutEvent(e); }
inline void dragEnterEvent(QDragEnterEvent*  e) { QPlainTextEdit::dragEnterEvent(e); }
inline void contextMenuEvent(QContextMenuEvent*  e) { QPlainTextEdit::contextMenuEvent(e); }
inline void dragMoveEvent(QDragMoveEvent*  e) { QPlainTextEdit::dragMoveEvent(e); }
inline void resizeEvent(QResizeEvent*  e) { QPlainTextEdit::resizeEvent(e); }
inline void scrollContentsBy(int  dx, int  dy) { QPlainTextEdit::scrollContentsBy(dx, dy); }
inline void focusInEvent(QFocusEvent*  e) { QPlainTextEdit::focusInEvent(e); }
inline void wheelEvent(QWheelEvent*  e) { QPlainTextEdit::wheelEvent(e); }
inline void mouseMoveEvent(QMouseEvent*  e) { QPlainTextEdit::mouseMoveEvent(e); }
inline void dragLeaveEvent(QDragLeaveEvent*  e) { QPlainTextEdit::dragLeaveEvent(e); }
inline void mouseReleaseEvent(QMouseEvent*  e) { QPlainTextEdit::mouseReleaseEvent(e); }
inline void showEvent(QShowEvent*  arg__1) { QPlainTextEdit::showEvent(arg__1); }
inline QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const { return QPlainTextEdit::inputMethodQuery(property); }
inline void dropEvent(QDropEvent*  e) { QPlainTextEdit::dropEvent(e); }
inline void mousePressEvent(QMouseEvent*  e) { QPlainTextEdit::mousePressEvent(e); }
inline void keyPressEvent(QKeyEvent*  e) { QPlainTextEdit::keyPressEvent(e); }
inline bool  canInsertFromMimeData(const QMimeData*  source) const { return QPlainTextEdit::canInsertFromMimeData(source); }
inline void paintEvent(QPaintEvent*  e) { QPlainTextEdit::paintEvent(e); }
inline void mouseDoubleClickEvent(QMouseEvent*  e) { QPlainTextEdit::mouseDoubleClickEvent(e); }
inline bool  focusNextPrevChild(bool  next) { return QPlainTextEdit::focusNextPrevChild(next); }
inline void inputMethodEvent(QInputMethodEvent*  arg__1) { QPlainTextEdit::inputMethodEvent(arg__1); }
};

class PythonQtWrapper_QPlainTextEdit : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextEdit* new_QPlainTextEdit(QWidget*  parent = 0);
QPlainTextEdit* new_QPlainTextEdit(const QString&  text, QWidget*  parent = 0);
void delete_QPlainTextEdit(QPlainTextEdit* obj) { delete obj; } 
   void keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e);
   QTextCursor  textCursor(QPlainTextEdit* theWrappedObject) const;
   void print(QPlainTextEdit* theWrappedObject, QPrinter*  printer) const;
   void mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   void changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e);
   QTextCursor  cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   int  blockCount(QPlainTextEdit* theWrappedObject) const;
   bool  find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
   QMimeData*  createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const;
   QList<QTextEdit::ExtraSelection >  extraSelections(QPlainTextEdit* theWrappedObject) const;
   bool  event(QPlainTextEdit* theWrappedObject, QEvent*  e);
   int  tabStopWidth(QPlainTextEdit* theWrappedObject) const;
   void setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled);
   void timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e);
   QVariant  loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name);
   void insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source);
   void setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible);
   bool  isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const;
   void focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e);
   void dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e);
   void contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e);
   void dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e);
   void resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e);
   void scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy);
   void focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e);
   void wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e);
   void setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum);
   QPlainTextEdit::LineWrapMode  lineWrapMode(QPlainTextEdit* theWrappedObject) const;
   QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject);
   bool  backgroundVisible(QPlainTextEdit* theWrappedObject) const;
   void setCursorWidth(QPlainTextEdit* theWrappedObject, int  width);
   QTextCharFormat  currentCharFormat(QPlainTextEdit* theWrappedObject) const;
   void setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable);
   void setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document);
   bool  overwriteMode(QPlainTextEdit* theWrappedObject) const;
   bool  canPaste(QPlainTextEdit* theWrappedObject) const;
   int  cursorWidth(QPlainTextEdit* theWrappedObject) const;
   void mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   bool  centerOnScroll(QPlainTextEdit* theWrappedObject) const;
   void setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite);
   Qt::TextInteractionFlags  textInteractionFlags(QPlainTextEdit* theWrappedObject) const;
   void setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   int  maximumBlockCount(QPlainTextEdit* theWrappedObject) const;
   void setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e);
   void mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   void showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1);
   void moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   QVariant  inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
   QRect  cursorRect(QPlainTextEdit* theWrappedObject) const;
   void dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e);
   QTextDocument*  document(QPlainTextEdit* theWrappedObject) const;
   void mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   bool  isReadOnly(QPlainTextEdit* theWrappedObject) const;
   void setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b);
   void setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width);
   void setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void ensureCursorVisible(QPlainTextEdit* theWrappedObject);
   void keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e);
   void setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   QRect  cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   bool  canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const;
   QTextOption::WrapMode  wordWrapMode(QPlainTextEdit* theWrappedObject) const;
   void paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e);
   void mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   bool  tabChangesFocus(QPlainTextEdit* theWrappedObject) const;
   QString  toPlainText(QPlainTextEdit* theWrappedObject) const;
   QString  documentTitle(QPlainTextEdit* theWrappedObject) const;
   void setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title);
   void setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode);
   bool  focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next);
   void setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro);
   void inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QPLAINTEXTEDIT_H
