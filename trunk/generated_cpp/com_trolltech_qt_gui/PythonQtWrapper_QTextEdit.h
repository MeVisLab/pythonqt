#ifndef PYTHONQTWRAPPER_QTEXTEDIT_H
#define PYTHONQTWRAPPER_QTEXTEDIT_H

#include <qtextedit.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextCursor>
#include <QTextEdit>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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
#include <qtextedit.h>
#include <qtextformat.h>
#include <qurl.h>
#include <qwidget.h>

class PythonQtShell_QTextEdit : public QTextEdit
{
public:
    PythonQtShell_QTextEdit(QWidget*  parent = 0):QTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QTextEdit(const QString&  text, QWidget*  parent = 0):QTextEdit(text, parent),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QTextEdit : public QTextEdit
{ public:
inline void promoted_insertFromMimeData(const QMimeData*  source) { QTextEdit::insertFromMimeData(source); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QTextEdit::focusNextPrevChild(next); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QTextEdit::keyReleaseEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QTextEdit::wheelEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QTextEdit::mousePressEvent(e); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextEdit::loadResource(type, name); }
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return QTextEdit::canInsertFromMimeData(source); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QTextEdit::focusInEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QTextEdit::event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QTextEdit::keyPressEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTextEdit::paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QTextEdit::resizeEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTextEdit::scrollContentsBy(dx, dy); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QTextEdit::mouseMoveEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QTextEdit::contextMenuEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QTextEdit::inputMethodEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QTextEdit::inputMethodQuery(property); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { QTextEdit::dragEnterEvent(e); }
inline void promoted_timerEvent(QTimerEvent*  e) { QTextEdit::timerEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QTextEdit::focusOutEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return QTextEdit::createMimeDataFromSelection(); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QTextEdit::dragLeaveEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QTextEdit::mouseReleaseEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { QTextEdit::dropEvent(e); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTextEdit::showEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QTextEdit::mouseDoubleClickEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QTextEdit::changeEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QTextEdit::dragMoveEvent(e); }
};

class PythonQtWrapper_QTextEdit : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AutoFormattingFlag )
Q_FLAGS(AutoFormatting )
enum AutoFormattingFlag{
  AutoNone = QTextEdit::AutoNone,   AutoBulletList = QTextEdit::AutoBulletList,   AutoAll = QTextEdit::AutoAll};
Q_DECLARE_FLAGS(AutoFormatting, AutoFormattingFlag)
public slots:
QTextEdit* new_QTextEdit(QWidget*  parent = 0);
QTextEdit* new_QTextEdit(const QString&  text, QWidget*  parent = 0);
void delete_QTextEdit(QTextEdit* obj) { delete obj; } 
   void insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source);
   bool  isReadOnly(QTextEdit* theWrappedObject) const;
   void moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   bool  focusNextPrevChild(QTextEdit* theWrappedObject, bool  next);
   int  lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const;
   void print(QTextEdit* theWrappedObject, QPrinter*  printer) const;
   void keyReleaseEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   bool  overwriteMode(QTextEdit* theWrappedObject) const;
   Qt::Alignment  alignment(QTextEdit* theWrappedObject) const;
   QString  documentTitle(QTextEdit* theWrappedObject) const;
   QFont  currentFont(QTextEdit* theWrappedObject) const;
   void wheelEvent(QTextEdit* theWrappedObject, QWheelEvent*  e);
   bool  canPaste(QTextEdit* theWrappedObject) const;
   bool  find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
   void setTabStopWidth(QTextEdit* theWrappedObject, int  width);
   void mousePressEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   QString  fontFamily(QTextEdit* theWrappedObject) const;
   bool  isUndoRedoEnabled(QTextEdit* theWrappedObject) const;
   QVariant  loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name);
   void setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   bool  canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const;
   void focusInEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   bool  event(QTextEdit* theWrappedObject, QEvent*  e);
   void keyPressEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   bool  fontItalic(QTextEdit* theWrappedObject) const;
   void setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite);
   void setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void paintEvent(QTextEdit* theWrappedObject, QPaintEvent*  e);
   QTextOption::WrapMode  wordWrapMode(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject) const;
   QColor  textBackgroundColor(QTextEdit* theWrappedObject) const;
   void resizeEvent(QTextEdit* theWrappedObject, QResizeEvent*  e);
   void scrollContentsBy(QTextEdit* theWrappedObject, int  dx, int  dy);
   QTextCursor  cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   void setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features);
   QString  toPlainText(QTextEdit* theWrappedObject) const;
   void setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode);
   QTextCharFormat  currentCharFormat(QTextEdit* theWrappedObject) const;
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject);
   QString  anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   void setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor);
   int  fontWeight(QTextEdit* theWrappedObject) const;
   bool  fontUnderline(QTextEdit* theWrappedObject) const;
   void mouseMoveEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   QList<QTextEdit::ExtraSelection >  extraSelections(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position);
   void contextMenuEvent(QTextEdit* theWrappedObject, QContextMenuEvent*  e);
   void inputMethodEvent(QTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   QVariant  inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
   Qt::TextInteractionFlags  textInteractionFlags(QTextEdit* theWrappedObject) const;
   void mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   void setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable);
   void dragEnterEvent(QTextEdit* theWrappedObject, QDragEnterEvent*  e);
   void setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   QTextDocument*  document(QTextEdit* theWrappedObject) const;
   void timerEvent(QTextEdit* theWrappedObject, QTimerEvent*  e);
   void setAcceptRichText(QTextEdit* theWrappedObject, bool  accept);
   QTextEdit::AutoFormatting  autoFormatting(QTextEdit* theWrappedObject) const;
   void setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title);
   qreal  fontPointSize(QTextEdit* theWrappedObject) const;
   void setReadOnly(QTextEdit* theWrappedObject, bool  ro);
   void focusOutEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   bool  acceptRichText(QTextEdit* theWrappedObject) const;
   QMimeData*  createMimeDataFromSelection(QTextEdit* theWrappedObject) const;
   void dragLeaveEvent(QTextEdit* theWrappedObject, QDragLeaveEvent*  e);
   int  cursorWidth(QTextEdit* theWrappedObject) const;
   void mouseReleaseEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   bool  tabChangesFocus(QTextEdit* theWrappedObject) const;
   void dropEvent(QTextEdit* theWrappedObject, QDropEvent*  e);
   void setDocument(QTextEdit* theWrappedObject, QTextDocument*  document);
   void setCursorWidth(QTextEdit* theWrappedObject, int  width);
   QColor  textColor(QTextEdit* theWrappedObject) const;
   QString  toHtml(QTextEdit* theWrappedObject) const;
   void showEvent(QTextEdit* theWrappedObject, QShowEvent*  arg__1);
   void setTabChangesFocus(QTextEdit* theWrappedObject, bool  b);
   int  tabStopWidth(QTextEdit* theWrappedObject) const;
   QTextCursor  textCursor(QTextEdit* theWrappedObject) const;
   void mouseDoubleClickEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   QTextEdit::LineWrapMode  lineWrapMode(QTextEdit* theWrappedObject) const;
   void setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w);
   void changeEvent(QTextEdit* theWrappedObject, QEvent*  e);
   void ensureCursorVisible(QTextEdit* theWrappedObject);
   void dragMoveEvent(QTextEdit* theWrappedObject, QDragMoveEvent*  e);
};

#endif // PYTHONQTWRAPPER_QTEXTEDIT_H
