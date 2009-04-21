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
inline void promoted_mousePressEvent(QMouseEvent*  e) { QTextEdit::mousePressEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QTextEdit::contextMenuEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTextEdit::paintEvent(e); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTextEdit::showEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  e) { QTextEdit::timerEvent(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QTextEdit::focusInEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QTextEdit::changeEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QTextEdit::event(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QTextEdit::dragLeaveEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QTextEdit::wheelEvent(e); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextEdit::loadResource(type, name); }
inline void promoted_dropEvent(QDropEvent*  e) { QTextEdit::dropEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return QTextEdit::createMimeDataFromSelection(); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QTextEdit::focusOutEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QTextEdit::mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QTextEdit::mouseMoveEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QTextEdit::keyReleaseEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QTextEdit::dragMoveEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QTextEdit::resizeEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTextEdit::scrollContentsBy(dx, dy); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QTextEdit::mouseReleaseEvent(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QTextEdit::focusNextPrevChild(next); }
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return QTextEdit::canInsertFromMimeData(source); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { QTextEdit::dragEnterEvent(e); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QTextEdit::inputMethodQuery(property); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { QTextEdit::insertFromMimeData(source); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QTextEdit::inputMethodEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QTextEdit::keyPressEvent(e); }
};

class PythonQtWrapper_QTextEdit : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AutoFormattingFlag )
enum AutoFormattingFlag{
  AutoNone = QTextEdit::AutoNone,   AutoBulletList = QTextEdit::AutoBulletList,   AutoAll = QTextEdit::AutoAll};
public slots:
QTextEdit* new_QTextEdit(QWidget*  parent = 0);
QTextEdit* new_QTextEdit(const QString&  text, QWidget*  parent = 0);
void delete_QTextEdit(QTextEdit* obj) { delete obj; } 
   QString  anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   QTextCharFormat  currentCharFormat(QTextEdit* theWrappedObject) const;
   QString  toHtml(QTextEdit* theWrappedObject) const;
   void mousePressEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   void setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void contextMenuEvent(QTextEdit* theWrappedObject, QContextMenuEvent*  e);
   void setDocument(QTextEdit* theWrappedObject, QTextDocument*  document);
   QTextDocument*  document(QTextEdit* theWrappedObject) const;
   void paintEvent(QTextEdit* theWrappedObject, QPaintEvent*  e);
   QColor  textBackgroundColor(QTextEdit* theWrappedObject) const;
   void showEvent(QTextEdit* theWrappedObject, QShowEvent*  arg__1);
   void moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   void timerEvent(QTextEdit* theWrappedObject, QTimerEvent*  e);
   bool  fontUnderline(QTextEdit* theWrappedObject) const;
   QTextCursor  textCursor(QTextEdit* theWrappedObject) const;
   void focusInEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   void changeEvent(QTextEdit* theWrappedObject, QEvent*  e);
   Qt::Alignment  alignment(QTextEdit* theWrappedObject) const;
   QString  documentTitle(QTextEdit* theWrappedObject) const;
   bool  event(QTextEdit* theWrappedObject, QEvent*  e);
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position);
   void setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable);
   void setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void dragLeaveEvent(QTextEdit* theWrappedObject, QDragLeaveEvent*  e);
   void wheelEvent(QTextEdit* theWrappedObject, QWheelEvent*  e);
   QTextCursor  cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   void setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor);
   QVariant  loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name);
   void setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode);
   void dropEvent(QTextEdit* theWrappedObject, QDropEvent*  e);
   QTextOption::WrapMode  wordWrapMode(QTextEdit* theWrappedObject) const;
   void setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w);
   int  fontWeight(QTextEdit* theWrappedObject) const;
   QList<QTextEdit::ExtraSelection >  extraSelections(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   bool  find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
   void setReadOnly(QTextEdit* theWrappedObject, bool  ro);
   bool  isUndoRedoEnabled(QTextEdit* theWrappedObject) const;
   bool  acceptRichText(QTextEdit* theWrappedObject) const;
   void setTabChangesFocus(QTextEdit* theWrappedObject, bool  b);
   QMimeData*  createMimeDataFromSelection(QTextEdit* theWrappedObject) const;
   bool  canPaste(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject) const;
   void setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format);
   QTextEdit::LineWrapMode  lineWrapMode(QTextEdit* theWrappedObject) const;
   int  cursorWidth(QTextEdit* theWrappedObject) const;
   void focusOutEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   void mouseDoubleClickEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   Qt::TextInteractionFlags  textInteractionFlags(QTextEdit* theWrappedObject) const;
   QColor  textColor(QTextEdit* theWrappedObject) const;
   void mouseMoveEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   QTextEdit::AutoFormatting  autoFormatting(QTextEdit* theWrappedObject) const;
   void keyReleaseEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   void setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite);
   void dragMoveEvent(QTextEdit* theWrappedObject, QDragMoveEvent*  e);
   void mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   bool  tabChangesFocus(QTextEdit* theWrappedObject) const;
   qreal  fontPointSize(QTextEdit* theWrappedObject) const;
   void setAcceptRichText(QTextEdit* theWrappedObject, bool  accept);
   void ensureCursorVisible(QTextEdit* theWrappedObject);
   void resizeEvent(QTextEdit* theWrappedObject, QResizeEvent*  e);
   bool  fontItalic(QTextEdit* theWrappedObject) const;
   QString  toPlainText(QTextEdit* theWrappedObject) const;
   void scrollContentsBy(QTextEdit* theWrappedObject, int  dx, int  dy);
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject);
   QFont  currentFont(QTextEdit* theWrappedObject) const;
   int  tabStopWidth(QTextEdit* theWrappedObject) const;
   void mouseReleaseEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   bool  isReadOnly(QTextEdit* theWrappedObject) const;
   bool  overwriteMode(QTextEdit* theWrappedObject) const;
   bool  focusNextPrevChild(QTextEdit* theWrappedObject, bool  next);
   bool  canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const;
   void dragEnterEvent(QTextEdit* theWrappedObject, QDragEnterEvent*  e);
   void setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features);
   void setCursorWidth(QTextEdit* theWrappedObject, int  width);
   QVariant  inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
   void insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source);
   void setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setTabStopWidth(QTextEdit* theWrappedObject, int  width);
   void setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title);
   void inputMethodEvent(QTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   void print(QTextEdit* theWrappedObject, QPrinter*  printer) const;
   int  lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const;
   QString  fontFamily(QTextEdit* theWrappedObject) const;
   void keyPressEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
};

#endif // PYTHONQTWRAPPER_QTEXTEDIT_H
