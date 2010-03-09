#include <PythonQt.h>
#include <QObject>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextDocumentFragment>
#include <QTextEdit>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextLayout>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qdrawutil.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextbrowser.h>
#include <qtextcodec.h>
#include <qtextcodecplugin.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextdocumentwriter.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtexttable.h>
#include <qtoolbar.h>
#include <qtoolbox.h>
#include <qtoolbutton.h>
#include <qurl.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtShell_QTextBlockGroup : public QTextBlockGroup
{
public:
    PythonQtShell_QTextBlockGroup(QTextDocument*  doc):QTextBlockGroup(doc),_wrapper(NULL) {};

virtual void blockRemoved(const QTextBlock&  block);
virtual void blockInserted(const QTextBlock&  block);
virtual void blockFormatChanged(const QTextBlock&  block);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextBlockGroup : public QTextBlockGroup
{ public:
inline void promoted_blockRemoved(const QTextBlock&  block) { QTextBlockGroup::blockRemoved(block); }
inline void promoted_blockInserted(const QTextBlock&  block) { QTextBlockGroup::blockInserted(block); }
inline void promoted_blockFormatChanged(const QTextBlock&  block) { QTextBlockGroup::blockFormatChanged(block); }
};

class PythonQtWrapper_QTextBlockGroup : public QObject
{ Q_OBJECT
public:
public slots:
   void blockRemoved(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   void blockInserted(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   void blockFormatChanged(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
};





class PythonQtShell_QTextBlockUserData : public QTextBlockUserData
{
public:
    PythonQtShell_QTextBlockUserData():QTextBlockUserData(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextBlockUserData : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlockUserData* new_QTextBlockUserData();
void delete_QTextBlockUserData(QTextBlockUserData* obj) { delete obj; } 
};





class PythonQtShell_QTextBrowser : public QTextBrowser
{
public:
    PythonQtShell_QTextBrowser(QWidget*  parent = 0):QTextBrowser(parent),_wrapper(NULL) {};

virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual void backward();
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual bool  focusNextPrevChild(bool  next);
virtual void setSource(const QUrl&  name);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void home();
virtual void reload();
virtual void paintEvent(QPaintEvent*  e);
virtual void forward();
virtual bool  event(QEvent*  e);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void focusOutEvent(QFocusEvent*  ev);
virtual void insertFromMimeData(const QMimeData*  source);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void scrollContentsBy(int  dx, int  dy);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void wheelEvent(QWheelEvent*  e);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void dropEvent(QDropEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void focusInEvent(QFocusEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void languageChange();
virtual void hideEvent(QHideEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextBrowser : public QTextBrowser
{ public:
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextBrowser::loadResource(type, name); }
inline void promoted_backward() { QTextBrowser::backward(); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { QTextBrowser::mouseMoveEvent(ev); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QTextBrowser::focusNextPrevChild(next); }
inline void promoted_setSource(const QUrl&  name) { QTextBrowser::setSource(name); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { QTextBrowser::mouseReleaseEvent(ev); }
inline void promoted_home() { QTextBrowser::home(); }
inline void promoted_reload() { QTextBrowser::reload(); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTextBrowser::paintEvent(e); }
inline void promoted_forward() { QTextBrowser::forward(); }
inline bool  promoted_event(QEvent*  e) { return QTextBrowser::event(e); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { QTextBrowser::mousePressEvent(ev); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { QTextBrowser::keyPressEvent(ev); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { QTextBrowser::focusOutEvent(ev); }
};

class PythonQtWrapper_QTextBrowser : public QObject
{ Q_OBJECT
public:
public slots:
QTextBrowser* new_QTextBrowser(QWidget*  parent = 0);
void delete_QTextBrowser(QTextBrowser* obj) { delete obj; } 
   QString  historyTitle(QTextBrowser* theWrappedObject, int  arg__1) const;
   QVariant  loadResource(QTextBrowser* theWrappedObject, int  type, const QUrl&  name);
   QStringList  searchPaths(QTextBrowser* theWrappedObject) const;
   void clearHistory(QTextBrowser* theWrappedObject);
   void setOpenExternalLinks(QTextBrowser* theWrappedObject, bool  open);
   bool  openLinks(QTextBrowser* theWrappedObject) const;
   void mouseMoveEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   bool  openExternalLinks(QTextBrowser* theWrappedObject) const;
   void setOpenLinks(QTextBrowser* theWrappedObject, bool  open);
   QUrl  source(QTextBrowser* theWrappedObject) const;
   void setSearchPaths(QTextBrowser* theWrappedObject, const QStringList&  paths);
   bool  focusNextPrevChild(QTextBrowser* theWrappedObject, bool  next);
   void mouseReleaseEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   bool  isForwardAvailable(QTextBrowser* theWrappedObject) const;
   bool  isBackwardAvailable(QTextBrowser* theWrappedObject) const;
   void paintEvent(QTextBrowser* theWrappedObject, QPaintEvent*  e);
   int  forwardHistoryCount(QTextBrowser* theWrappedObject) const;
   bool  event(QTextBrowser* theWrappedObject, QEvent*  e);
   void mousePressEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   void keyPressEvent(QTextBrowser* theWrappedObject, QKeyEvent*  ev);
   void focusOutEvent(QTextBrowser* theWrappedObject, QFocusEvent*  ev);
   QUrl  historyUrl(QTextBrowser* theWrappedObject, int  arg__1) const;
   int  backwardHistoryCount(QTextBrowser* theWrappedObject) const;
};





class PythonQtShell_QTextCharFormat : public QTextCharFormat
{
public:
    PythonQtShell_QTextCharFormat():QTextCharFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextCharFormat(const QTextFormat&  fmt):QTextCharFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextCharFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(VerticalAlignment UnderlineStyle )
enum VerticalAlignment{
  AlignNormal = QTextCharFormat::AlignNormal,   AlignSuperScript = QTextCharFormat::AlignSuperScript,   AlignSubScript = QTextCharFormat::AlignSubScript,   AlignMiddle = QTextCharFormat::AlignMiddle,   AlignTop = QTextCharFormat::AlignTop,   AlignBottom = QTextCharFormat::AlignBottom};
enum UnderlineStyle{
  NoUnderline = QTextCharFormat::NoUnderline,   SingleUnderline = QTextCharFormat::SingleUnderline,   DashUnderline = QTextCharFormat::DashUnderline,   DotLine = QTextCharFormat::DotLine,   DashDotLine = QTextCharFormat::DashDotLine,   DashDotDotLine = QTextCharFormat::DashDotDotLine,   WaveUnderline = QTextCharFormat::WaveUnderline,   SpellCheckUnderline = QTextCharFormat::SpellCheckUnderline};
public slots:
QTextCharFormat* new_QTextCharFormat();
QTextCharFormat* new_QTextCharFormat(const QTextCharFormat& other) {
PythonQtShell_QTextCharFormat* a = new PythonQtShell_QTextCharFormat();
*((QTextCharFormat*)a) = other;
return a; }
void delete_QTextCharFormat(QTextCharFormat* obj) { delete obj; } 
   void setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan);
   QTextCharFormat::VerticalAlignment  verticalAlignment(QTextCharFormat* theWrappedObject) const;
   void setAnchor(QTextCharFormat* theWrappedObject, bool  anchor);
   int  tableCellColumnSpan(QTextCharFormat* theWrappedObject) const;
   void setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   QString  toolTip(QTextCharFormat* theWrappedObject) const;
   QString  fontFamily(QTextCharFormat* theWrappedObject) const;
   void setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch);
   QColor  underlineColor(QTextCharFormat* theWrappedObject) const;
   void setFont(QTextCharFormat* theWrappedObject, const QFont&  font);
   QString  anchorHref(QTextCharFormat* theWrappedObject) const;
   bool  fontUnderline(QTextCharFormat* theWrappedObject) const;
   void setFontKerning(QTextCharFormat* theWrappedObject, bool  enable);
   void setFontItalic(QTextCharFormat* theWrappedObject, bool  italic);
   void setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment);
   void setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut);
   void setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value);
   qreal  fontPointSize(QTextCharFormat* theWrappedObject) const;
   void setFontStyleStrategy(QTextCharFormat* theWrappedObject, QFont::StyleStrategy  strategy);
   void setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline);
   QTextCharFormat::UnderlineStyle  underlineStyle(QTextCharFormat* theWrappedObject) const;
   bool  fontItalic(QTextCharFormat* theWrappedObject) const;
   bool  fontKerning(QTextCharFormat* theWrappedObject) const;
   void setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen);
   void setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   void setFontWeight(QTextCharFormat* theWrappedObject, int  weight);
   void setFontStyleHint(QTextCharFormat* theWrappedObject, QFont::StyleHint  hint, QFont::StyleStrategy  strategy = QFont::PreferDefault);
   QStringList  anchorNames(QTextCharFormat* theWrappedObject) const;
   int  fontWeight(QTextCharFormat* theWrappedObject) const;
   void setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization);
   bool  isAnchor(QTextCharFormat* theWrappedObject) const;
   void setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family);
   void setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names);
   int  tableCellRowSpan(QTextCharFormat* theWrappedObject) const;
   void setFontOverline(QTextCharFormat* theWrappedObject, bool  overline);
   void setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color);
   QFont::StyleHint  fontStyleHint(QTextCharFormat* theWrappedObject) const;
   QFont::StyleStrategy  fontStyleStrategy(QTextCharFormat* theWrappedObject) const;
   QFont  font(QTextCharFormat* theWrappedObject) const;
   void setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size);
   void setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style);
   bool  isValid(QTextCharFormat* theWrappedObject) const;
   QFont::Capitalization  fontCapitalization(QTextCharFormat* theWrappedObject) const;
   bool  fontStrikeOut(QTextCharFormat* theWrappedObject) const;
   QPen  textOutline(QTextCharFormat* theWrappedObject) const;
   qreal  fontWordSpacing(QTextCharFormat* theWrappedObject) const;
   void setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip);
   bool  fontFixedPitch(QTextCharFormat* theWrappedObject) const;
   bool  fontOverline(QTextCharFormat* theWrappedObject) const;
   qreal  fontLetterSpacing(QTextCharFormat* theWrappedObject) const;
   void setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan);
};





class PythonQtShell_QTextCodecPlugin : public QTextCodecPlugin
{
public:
    PythonQtShell_QTextCodecPlugin(QObject*  parent = 0):QTextCodecPlugin(parent),_wrapper(NULL) {};

virtual QList<QByteArray >  names() const;
virtual QList<int >  mibEnums() const;
virtual QList<QByteArray >  aliases() const;
virtual QTextCodec*  createForName(const QByteArray&  name);
virtual QTextCodec*  createForMib(int  mib);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextCodecPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QTextCodecPlugin* new_QTextCodecPlugin(QObject*  parent = 0);
void delete_QTextCodecPlugin(QTextCodecPlugin* obj) { delete obj; } 
};





class PythonQtWrapper_QTextCursor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MoveMode MoveOperation SelectionType )
enum MoveMode{
  MoveAnchor = QTextCursor::MoveAnchor,   KeepAnchor = QTextCursor::KeepAnchor};
enum MoveOperation{
  NoMove = QTextCursor::NoMove,   Start = QTextCursor::Start,   Up = QTextCursor::Up,   StartOfLine = QTextCursor::StartOfLine,   StartOfBlock = QTextCursor::StartOfBlock,   StartOfWord = QTextCursor::StartOfWord,   PreviousBlock = QTextCursor::PreviousBlock,   PreviousCharacter = QTextCursor::PreviousCharacter,   PreviousWord = QTextCursor::PreviousWord,   Left = QTextCursor::Left,   WordLeft = QTextCursor::WordLeft,   End = QTextCursor::End,   Down = QTextCursor::Down,   EndOfLine = QTextCursor::EndOfLine,   EndOfWord = QTextCursor::EndOfWord,   EndOfBlock = QTextCursor::EndOfBlock,   NextBlock = QTextCursor::NextBlock,   NextCharacter = QTextCursor::NextCharacter,   NextWord = QTextCursor::NextWord,   Right = QTextCursor::Right,   WordRight = QTextCursor::WordRight,   NextCell = QTextCursor::NextCell,   PreviousCell = QTextCursor::PreviousCell,   NextRow = QTextCursor::NextRow,   PreviousRow = QTextCursor::PreviousRow};
enum SelectionType{
  WordUnderCursor = QTextCursor::WordUnderCursor,   LineUnderCursor = QTextCursor::LineUnderCursor,   BlockUnderCursor = QTextCursor::BlockUnderCursor,   Document = QTextCursor::Document};
public slots:
QTextCursor* new_QTextCursor();
QTextCursor* new_QTextCursor(QTextDocument*  document);
QTextCursor* new_QTextCursor(QTextFrame*  frame);
QTextCursor* new_QTextCursor(const QTextBlock&  block);
QTextCursor* new_QTextCursor(const QTextCursor&  cursor);
void delete_QTextCursor(QTextCursor* obj) { delete obj; } 
   QTextList*  createList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   void insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment);
   int  selectionStart(QTextCursor* theWrappedObject) const;
   QTextDocumentFragment  selection(QTextCursor* theWrappedObject) const;
   QTextCharFormat  charFormat(QTextCursor* theWrappedObject) const;
   bool  __ne__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   void selectedTableCells(QTextCursor* theWrappedObject, int*  firstRow, int*  numRows, int*  firstColumn, int*  numColumns) const;
   bool  visualNavigation(QTextCursor* theWrappedObject) const;
   void setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   int  columnNumber(QTextCursor* theWrappedObject) const;
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat);
   QString  selectedText(QTextCursor* theWrappedObject) const;
   bool  atStart(QTextCursor* theWrappedObject) const;
   void setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   QTextList*  insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   QTextList*  insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   bool  atBlockEnd(QTextCursor* theWrappedObject) const;
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format);
   void insertBlock(QTextCursor* theWrappedObject);
   void mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier);
   int  position(QTextCursor* theWrappedObject) const;
   void setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   int  blockNumber(QTextCursor* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextCursor* theWrappedObject) const;
   void joinPreviousEditBlock(QTextCursor* theWrappedObject);
   QTextBlock  block(QTextCursor* theWrappedObject) const;
   bool  __le__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   void clearSelection(QTextCursor* theWrappedObject);
   void deletePreviousChar(QTextCursor* theWrappedObject);
   void insertImage(QTextCursor* theWrappedObject, const QImage&  image, const QString&  name = QString());
   QTextCharFormat  blockCharFormat(QTextCursor* theWrappedObject) const;
   QTextTable*  currentTable(QTextCursor* theWrappedObject) const;
   QTextList*  currentList(QTextCursor* theWrappedObject) const;
   bool  isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const;
   bool  __eq__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   void insertImage(QTextCursor* theWrappedObject, const QString&  name);
   void select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment);
   void mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   bool  hasSelection(QTextCursor* theWrappedObject) const;
   void insertHtml(QTextCursor* theWrappedObject, const QString&  html);
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format);
   bool  __lt__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   void insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format);
   bool  atEnd(QTextCursor* theWrappedObject) const;
   void mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   void insertText(QTextCursor* theWrappedObject, const QString&  text);
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols);
   bool  __gt__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   void setVisualNavigation(QTextCursor* theWrappedObject, bool  b);
   void beginEditBlock(QTextCursor* theWrappedObject);
   bool  __ge__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   void deleteChar(QTextCursor* theWrappedObject);
   QTextDocument*  document(QTextCursor* theWrappedObject) const;
   void removeSelectedText(QTextCursor* theWrappedObject);
   bool  atBlockStart(QTextCursor* theWrappedObject) const;
   bool  isNull(QTextCursor* theWrappedObject) const;
   int  selectionEnd(QTextCursor* theWrappedObject) const;
   QTextList*  createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   int  anchor(QTextCursor* theWrappedObject) const;
   bool  hasComplexSelection(QTextCursor* theWrappedObject) const;
   bool  movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2 = QTextCursor::MoveAnchor, int  n = 1);
   void endEditBlock(QTextCursor* theWrappedObject);
   void setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   QTextFrame*  insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format);
   QTextFrame*  currentFrame(QTextCursor* theWrappedObject) const;
    bool __nonzero__(QTextCursor* obj) { return !obj->isNull(); }
};





class PythonQtShell_QTextDocument : public QTextDocument
{
public:
    PythonQtShell_QTextDocument(QObject*  parent = 0):QTextDocument(parent),_wrapper(NULL) {};
    PythonQtShell_QTextDocument(const QString&  text, QObject*  parent = 0):QTextDocument(text, parent),_wrapper(NULL) {};

virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual bool  event(QEvent*  arg__1);
virtual void clear();
virtual QTextObject*  createObject(const QTextFormat&  f);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextDocument : public QTextDocument
{ public:
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextDocument::loadResource(type, name); }
inline void promoted_clear() { QTextDocument::clear(); }
inline QTextObject*  promoted_createObject(const QTextFormat&  f) { return QTextDocument::createObject(f); }
};

class PythonQtWrapper_QTextDocument : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ResourceType FindFlag MetaInformation )
Q_FLAGS(FindFlags )
enum ResourceType{
  HtmlResource = QTextDocument::HtmlResource,   ImageResource = QTextDocument::ImageResource,   StyleSheetResource = QTextDocument::StyleSheetResource,   UserResource = QTextDocument::UserResource};
enum FindFlag{
  FindBackward = QTextDocument::FindBackward,   FindCaseSensitively = QTextDocument::FindCaseSensitively,   FindWholeWords = QTextDocument::FindWholeWords};
enum MetaInformation{
  DocumentTitle = QTextDocument::DocumentTitle,   DocumentUrl = QTextDocument::DocumentUrl};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QTextDocument* new_QTextDocument(QObject*  parent = 0);
QTextDocument* new_QTextDocument(const QString&  text, QObject*  parent = 0);
void delete_QTextDocument(QTextDocument* obj) { delete obj; } 
   bool  isRedoAvailable(QTextDocument* theWrappedObject) const;
   QString  toPlainText(QTextDocument* theWrappedObject) const;
   QTextBlock  lastBlock(QTextDocument* theWrappedObject) const;
   QTextFrame*  frameAt(QTextDocument* theWrappedObject, int  pos) const;
   void setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2);
   void print(QTextDocument* theWrappedObject, QPrinter*  printer) const;
   QVariant  loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name);
   void setDocumentMargin(QTextDocument* theWrappedObject, qreal  margin);
   QTextObject*  objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   void setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum);
   QTextObject*  object(QTextDocument* theWrappedObject, int  objectIndex) const;
   qreal  documentMargin(QTextDocument* theWrappedObject) const;
   QString  toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding = QByteArray()) const;
   bool  isEmpty(QTextDocument* theWrappedObject) const;
   void setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet);
   QAbstractTextDocumentLayout*  documentLayout(QTextDocument* theWrappedObject) const;
   void markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length);
   qreal  indentWidth(QTextDocument* theWrappedObject) const;
   void setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option);
   int  blockCount(QTextDocument* theWrappedObject) const;
   QTextFrame*  rootFrame(QTextDocument* theWrappedObject) const;
   void undo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   void setHtml(QTextDocument* theWrappedObject, const QString&  html);
   QTextBlock  findBlock(QTextDocument* theWrappedObject, int  pos) const;
   void setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable);
   int  availableRedoSteps(QTextDocument* theWrappedObject) const;
   int  characterCount(QTextDocument* theWrappedObject) const;
   bool  isModified(QTextDocument* theWrappedObject) const;
   void setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font);
   QTextBlock  findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   QTextDocument*  clone(QTextDocument* theWrappedObject, QObject*  parent = 0) const;
   void clear(QTextDocument* theWrappedObject);
   void addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource);
   QTextBlock  findBlockByLineNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   QTextOption  defaultTextOption(QTextDocument* theWrappedObject) const;
   qreal  idealWidth(QTextDocument* theWrappedObject) const;
   qreal  textWidth(QTextDocument* theWrappedObject) const;
   int  pageCount(QTextDocument* theWrappedObject) const;
   int  maximumBlockCount(QTextDocument* theWrappedObject) const;
   QTextObject*  createObject(QTextDocument* theWrappedObject, const QTextFormat&  f);
   int  revision(QTextDocument* theWrappedObject) const;
   QTextBlock  firstBlock(QTextDocument* theWrappedObject) const;
   QSizeF  size(QTextDocument* theWrappedObject) const;
   void setIndentWidth(QTextDocument* theWrappedObject, qreal  width);
   QTextBlock  end(QTextDocument* theWrappedObject) const;
   QVector<QTextFormat >  allFormats(QTextDocument* theWrappedObject) const;
   QChar  characterAt(QTextDocument* theWrappedObject, int  pos) const;
   QFont  defaultFont(QTextDocument* theWrappedObject) const;
   void setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b);
   void setTextWidth(QTextDocument* theWrappedObject, qreal  width);
   bool  isUndoAvailable(QTextDocument* theWrappedObject) const;
   void setPlainText(QTextDocument* theWrappedObject, const QString&  text);
   int  availableUndoSteps(QTextDocument* theWrappedObject) const;
   void redo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   void adjustSize(QTextDocument* theWrappedObject);
   void setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size);
   void drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect = QRectF());
   bool  isUndoRedoEnabled(QTextDocument* theWrappedObject) const;
   bool  useDesignMetrics(QTextDocument* theWrappedObject) const;
   QString  defaultStyleSheet(QTextDocument* theWrappedObject) const;
   QString  metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const;
   QSizeF  pageSize(QTextDocument* theWrappedObject) const;
   QTextBlock  begin(QTextDocument* theWrappedObject) const;
   QVariant  resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const;
   int  lineCount(QTextDocument* theWrappedObject) const;
   void setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout);
};





class PythonQtWrapper_QTextDocumentFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextDocumentFragment* new_QTextDocumentFragment();
QTextDocumentFragment* new_QTextDocumentFragment(const QTextCursor&  range);
QTextDocumentFragment* new_QTextDocumentFragment(const QTextDocument*  document);
QTextDocumentFragment* new_QTextDocumentFragment(const QTextDocumentFragment&  rhs);
void delete_QTextDocumentFragment(QTextDocumentFragment* obj) { delete obj; } 
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html, const QTextDocument*  resourceProvider);
   QString  toPlainText(QTextDocumentFragment* theWrappedObject) const;
   QString  toHtml(QTextDocumentFragment* theWrappedObject) const;
   QString  toHtml(QTextDocumentFragment* theWrappedObject, const QByteArray&  encoding) const;
   QTextDocumentFragment  static_QTextDocumentFragment_fromPlainText(const QString&  plainText);
   bool  isEmpty(QTextDocumentFragment* theWrappedObject) const;
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html);
};





class PythonQtWrapper_QTextDocumentWriter : public QObject
{ Q_OBJECT
public:
public slots:
QTextDocumentWriter* new_QTextDocumentWriter();
QTextDocumentWriter* new_QTextDocumentWriter(QIODevice*  device, const QByteArray&  format);
QTextDocumentWriter* new_QTextDocumentWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QTextDocumentWriter(QTextDocumentWriter* obj) { delete obj; } 
   QTextCodec*  codec(QTextDocumentWriter* theWrappedObject) const;
   QList<QByteArray >  static_QTextDocumentWriter_supportedDocumentFormats();
   void setCodec(QTextDocumentWriter* theWrappedObject, QTextCodec*  codec);
   QByteArray  format(QTextDocumentWriter* theWrappedObject) const;
   void setDevice(QTextDocumentWriter* theWrappedObject, QIODevice*  device);
   QIODevice*  device(QTextDocumentWriter* theWrappedObject) const;
   void setFileName(QTextDocumentWriter* theWrappedObject, const QString&  fileName);
   QString  fileName(QTextDocumentWriter* theWrappedObject) const;
   bool  write(QTextDocumentWriter* theWrappedObject, const QTextDocumentFragment&  fragment);
   void setFormat(QTextDocumentWriter* theWrappedObject, const QByteArray&  format);
   bool  write(QTextDocumentWriter* theWrappedObject, const QTextDocument*  document);
};





class PythonQtShell_QTextEdit : public QTextEdit
{
public:
    PythonQtShell_QTextEdit(QWidget*  parent = 0):QTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QTextEdit(const QString&  text, QWidget*  parent = 0):QTextEdit(text, parent),_wrapper(NULL) {};

virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void focusInEvent(QFocusEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  e);
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual void paintEvent(QPaintEvent*  e);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void wheelEvent(QWheelEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual bool  focusNextPrevChild(bool  next);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  event(QEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void languageChange();
virtual void hideEvent(QHideEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextEdit : public QTextEdit
{ public:
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QTextEdit::dragLeaveEvent(e); }
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return QTextEdit::canInsertFromMimeData(source); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QTextEdit::mouseReleaseEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QTextEdit::dragMoveEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return QTextEdit::createMimeDataFromSelection(); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QTextEdit::keyPressEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QTextEdit::mousePressEvent(e); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QTextEdit::inputMethodQuery(property); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { QTextEdit::insertFromMimeData(source); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QTextEdit::focusInEvent(e); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { QTextEdit::dragEnterEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { QTextEdit::dropEvent(e); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTextEdit::showEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QTextEdit::resizeEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QTextEdit::mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QTextEdit::mouseMoveEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QTextEdit::changeEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QTextEdit::keyReleaseEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QTextEdit::inputMethodEvent(arg__1); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextEdit::loadResource(type, name); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTextEdit::paintEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QTextEdit::contextMenuEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QTextEdit::focusOutEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QTextEdit::wheelEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTextEdit::scrollContentsBy(dx, dy); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QTextEdit::focusNextPrevChild(next); }
inline void promoted_timerEvent(QTimerEvent*  e) { QTextEdit::timerEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QTextEdit::event(e); }
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
   bool  fontItalic(QTextEdit* theWrappedObject) const;
   void setTabStopWidth(QTextEdit* theWrappedObject, int  width);
   Qt::Alignment  alignment(QTextEdit* theWrappedObject) const;
   bool  isUndoRedoEnabled(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   void setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor);
   QList<QTextEdit::ExtraSelection >  extraSelections(QTextEdit* theWrappedObject) const;
   void setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features);
   void dragLeaveEvent(QTextEdit* theWrappedObject, QDragLeaveEvent*  e);
   bool  canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const;
   QTextCursor  cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   void setAcceptRichText(QTextEdit* theWrappedObject, bool  accept);
   void setTabChangesFocus(QTextEdit* theWrappedObject, bool  b);
   QTextEdit::AutoFormatting  autoFormatting(QTextEdit* theWrappedObject) const;
   bool  find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
   void mouseReleaseEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   QTextOption::WrapMode  wordWrapMode(QTextEdit* theWrappedObject) const;
   void setDocument(QTextEdit* theWrappedObject, QTextDocument*  document);
   bool  tabChangesFocus(QTextEdit* theWrappedObject) const;
   void dragMoveEvent(QTextEdit* theWrappedObject, QDragMoveEvent*  e);
   QTextEdit::LineWrapMode  lineWrapMode(QTextEdit* theWrappedObject) const;
   void setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w);
   void ensureCursorVisible(QTextEdit* theWrappedObject);
   void mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   bool  fontUnderline(QTextEdit* theWrappedObject) const;
   QColor  textBackgroundColor(QTextEdit* theWrappedObject) const;
   QColor  textColor(QTextEdit* theWrappedObject) const;
   QMimeData*  createMimeDataFromSelection(QTextEdit* theWrappedObject) const;
   void keyPressEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   void setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable);
   int  tabStopWidth(QTextEdit* theWrappedObject) const;
   void mousePressEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   void setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode);
   QString  anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   void setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite);
   QFont  currentFont(QTextEdit* theWrappedObject) const;
   int  cursorWidth(QTextEdit* theWrappedObject) const;
   QString  documentTitle(QTextEdit* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QTextEdit* theWrappedObject) const;
   void moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   void setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   QTextCharFormat  currentCharFormat(QTextEdit* theWrappedObject) const;
   QVariant  inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
   void setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void setCursorWidth(QTextEdit* theWrappedObject, int  width);
   void insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source);
   void setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void focusInEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   void dragEnterEvent(QTextEdit* theWrappedObject, QDragEnterEvent*  e);
   void dropEvent(QTextEdit* theWrappedObject, QDropEvent*  e);
   void showEvent(QTextEdit* theWrappedObject, QShowEvent*  arg__1);
   void resizeEvent(QTextEdit* theWrappedObject, QResizeEvent*  e);
   bool  canPaste(QTextEdit* theWrappedObject) const;
   bool  acceptRichText(QTextEdit* theWrappedObject) const;
   void setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title);
   bool  overwriteMode(QTextEdit* theWrappedObject) const;
   void setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   int  fontWeight(QTextEdit* theWrappedObject) const;
   QString  fontFamily(QTextEdit* theWrappedObject) const;
   void mouseDoubleClickEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   int  lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const;
   void mouseMoveEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   QString  toHtml(QTextEdit* theWrappedObject) const;
   void changeEvent(QTextEdit* theWrappedObject, QEvent*  e);
   void keyReleaseEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position);
   void inputMethodEvent(QTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject);
   QTextCursor  textCursor(QTextEdit* theWrappedObject) const;
   bool  isReadOnly(QTextEdit* theWrappedObject) const;
   QVariant  loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name);
   void print(QTextEdit* theWrappedObject, QPrinter*  printer) const;
   QString  toPlainText(QTextEdit* theWrappedObject) const;
   QTextDocument*  document(QTextEdit* theWrappedObject) const;
   qreal  fontPointSize(QTextEdit* theWrappedObject) const;
   void paintEvent(QTextEdit* theWrappedObject, QPaintEvent*  e);
   void contextMenuEvent(QTextEdit* theWrappedObject, QContextMenuEvent*  e);
   void focusOutEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   void wheelEvent(QTextEdit* theWrappedObject, QWheelEvent*  e);
   void setReadOnly(QTextEdit* theWrappedObject, bool  ro);
   void scrollContentsBy(QTextEdit* theWrappedObject, int  dx, int  dy);
   bool  focusNextPrevChild(QTextEdit* theWrappedObject, bool  next);
   void timerEvent(QTextEdit* theWrappedObject, QTimerEvent*  e);
   bool  event(QTextEdit* theWrappedObject, QEvent*  e);
};





class PythonQtWrapper_QTextFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextFragment* new_QTextFragment();
QTextFragment* new_QTextFragment(const QTextFragment&  o);
void delete_QTextFragment(QTextFragment* obj) { delete obj; } 
   bool  __eq__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  __ne__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   QTextCharFormat  charFormat(QTextFragment* theWrappedObject) const;
   bool  __lt__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  isValid(QTextFragment* theWrappedObject) const;
   QString  text(QTextFragment* theWrappedObject) const;
   int  length(QTextFragment* theWrappedObject) const;
   int  position(QTextFragment* theWrappedObject) const;
   int  charFormatIndex(QTextFragment* theWrappedObject) const;
   bool  contains(QTextFragment* theWrappedObject, int  position) const;
};





class PythonQtShell_QTextFrame : public QTextFrame
{
public:
    PythonQtShell_QTextFrame(QTextDocument*  doc):QTextFrame(doc),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextFrame : public QObject
{ Q_OBJECT
public:
public slots:
QTextFrame* new_QTextFrame(QTextDocument*  doc);
void delete_QTextFrame(QTextFrame* obj) { delete obj; } 
   QTextFrame::iterator  end(QTextFrame* theWrappedObject) const;
   QTextFrameFormat  frameFormat(QTextFrame* theWrappedObject) const;
   QList<QTextFrame* >  childFrames(QTextFrame* theWrappedObject) const;
   QTextFrame*  parentFrame(QTextFrame* theWrappedObject) const;
   int  lastPosition(QTextFrame* theWrappedObject) const;
   void setFrameFormat(QTextFrame* theWrappedObject, const QTextFrameFormat&  format);
   QTextCursor  firstCursorPosition(QTextFrame* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextFrame* theWrappedObject) const;
   QTextFrame::iterator  begin(QTextFrame* theWrappedObject) const;
   int  firstPosition(QTextFrame* theWrappedObject) const;
};





class PythonQtShell_QTextFrameFormat : public QTextFrameFormat
{
public:
    PythonQtShell_QTextFrameFormat():QTextFrameFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextFrameFormat(const QTextFormat&  fmt):QTextFrameFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextFrameFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Position BorderStyle )
enum Position{
  InFlow = QTextFrameFormat::InFlow,   FloatLeft = QTextFrameFormat::FloatLeft,   FloatRight = QTextFrameFormat::FloatRight};
enum BorderStyle{
  BorderStyle_None = QTextFrameFormat::BorderStyle_None,   BorderStyle_Dotted = QTextFrameFormat::BorderStyle_Dotted,   BorderStyle_Dashed = QTextFrameFormat::BorderStyle_Dashed,   BorderStyle_Solid = QTextFrameFormat::BorderStyle_Solid,   BorderStyle_Double = QTextFrameFormat::BorderStyle_Double,   BorderStyle_DotDash = QTextFrameFormat::BorderStyle_DotDash,   BorderStyle_DotDotDash = QTextFrameFormat::BorderStyle_DotDotDash,   BorderStyle_Groove = QTextFrameFormat::BorderStyle_Groove,   BorderStyle_Ridge = QTextFrameFormat::BorderStyle_Ridge,   BorderStyle_Inset = QTextFrameFormat::BorderStyle_Inset,   BorderStyle_Outset = QTextFrameFormat::BorderStyle_Outset};
public slots:
QTextFrameFormat* new_QTextFrameFormat();
QTextFrameFormat* new_QTextFrameFormat(const QTextFrameFormat& other) {
PythonQtShell_QTextFrameFormat* a = new PythonQtShell_QTextFrameFormat();
*((QTextFrameFormat*)a) = other;
return a; }
void delete_QTextFrameFormat(QTextFrameFormat* obj) { delete obj; } 
   qreal  leftMargin(QTextFrameFormat* theWrappedObject) const;
   void setPadding(QTextFrameFormat* theWrappedObject, qreal  padding);
   void setWidth(QTextFrameFormat* theWrappedObject, qreal  width);
   void setWidth(QTextFrameFormat* theWrappedObject, const QTextLength&  length);
   QBrush  borderBrush(QTextFrameFormat* theWrappedObject) const;
   void setPageBreakPolicy(QTextFrameFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   void setMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setRightMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setBottomMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   bool  isValid(QTextFrameFormat* theWrappedObject) const;
   qreal  border(QTextFrameFormat* theWrappedObject) const;
   void setHeight(QTextFrameFormat* theWrappedObject, qreal  height);
   void setHeight(QTextFrameFormat* theWrappedObject, const QTextLength&  height);
   void setLeftMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setBorderStyle(QTextFrameFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setTopMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   qreal  bottomMargin(QTextFrameFormat* theWrappedObject) const;
   void setPosition(QTextFrameFormat* theWrappedObject, QTextFrameFormat::Position  f);
   void setBorderBrush(QTextFrameFormat* theWrappedObject, const QBrush&  brush);
   QTextFrameFormat::Position  position(QTextFrameFormat* theWrappedObject) const;
   qreal  padding(QTextFrameFormat* theWrappedObject) const;
   QTextLength  width(QTextFrameFormat* theWrappedObject) const;
   qreal  rightMargin(QTextFrameFormat* theWrappedObject) const;
   void setBorder(QTextFrameFormat* theWrappedObject, qreal  border);
   QTextFrameFormat::BorderStyle  borderStyle(QTextFrameFormat* theWrappedObject) const;
   qreal  topMargin(QTextFrameFormat* theWrappedObject) const;
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextFrameFormat* theWrappedObject) const;
   qreal  margin(QTextFrameFormat* theWrappedObject) const;
   QTextLength  height(QTextFrameFormat* theWrappedObject) const;
};





class PythonQtShell_QTextImageFormat : public QTextImageFormat
{
public:
    PythonQtShell_QTextImageFormat():QTextImageFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextImageFormat(const QTextFormat&  format):QTextImageFormat(format),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextImageFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextImageFormat* new_QTextImageFormat();
QTextImageFormat* new_QTextImageFormat(const QTextImageFormat& other) {
PythonQtShell_QTextImageFormat* a = new PythonQtShell_QTextImageFormat();
*((QTextImageFormat*)a) = other;
return a; }
void delete_QTextImageFormat(QTextImageFormat* obj) { delete obj; } 
   void setWidth(QTextImageFormat* theWrappedObject, qreal  width);
   void setName(QTextImageFormat* theWrappedObject, const QString&  name);
   bool  isValid(QTextImageFormat* theWrappedObject) const;
   qreal  width(QTextImageFormat* theWrappedObject) const;
   void setHeight(QTextImageFormat* theWrappedObject, qreal  height);
   QString  name(QTextImageFormat* theWrappedObject) const;
   qreal  height(QTextImageFormat* theWrappedObject) const;
};





class PythonQtWrapper_QTextInlineObject : public QObject
{ Q_OBJECT
public:
public slots:
QTextInlineObject* new_QTextInlineObject();
QTextInlineObject* new_QTextInlineObject(const QTextInlineObject& other) {
QTextInlineObject* a = new QTextInlineObject();
*((QTextInlineObject*)a) = other;
return a; }
void delete_QTextInlineObject(QTextInlineObject* obj) { delete obj; } 
   Qt::LayoutDirection  textDirection(QTextInlineObject* theWrappedObject) const;
   qreal  width(QTextInlineObject* theWrappedObject) const;
   bool  isValid(QTextInlineObject* theWrappedObject) const;
   QRectF  rect(QTextInlineObject* theWrappedObject) const;
   qreal  descent(QTextInlineObject* theWrappedObject) const;
   void setWidth(QTextInlineObject* theWrappedObject, qreal  w);
   void setAscent(QTextInlineObject* theWrappedObject, qreal  a);
   int  formatIndex(QTextInlineObject* theWrappedObject) const;
   QTextFormat  format(QTextInlineObject* theWrappedObject) const;
   qreal  height(QTextInlineObject* theWrappedObject) const;
   qreal  ascent(QTextInlineObject* theWrappedObject) const;
   void setDescent(QTextInlineObject* theWrappedObject, qreal  d);
   int  textPosition(QTextInlineObject* theWrappedObject) const;
};





class PythonQtShell_QTextItem : public QTextItem
{
public:
    PythonQtShell_QTextItem():QTextItem(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
Q_FLAGS(RenderFlags )
enum RenderFlag{
  RightToLeft = QTextItem::RightToLeft,   Overline = QTextItem::Overline,   Underline = QTextItem::Underline,   StrikeOut = QTextItem::StrikeOut,   Dummy = QTextItem::Dummy};
Q_DECLARE_FLAGS(RenderFlags, RenderFlag)
public slots:
QTextItem* new_QTextItem();
void delete_QTextItem(QTextItem* obj) { delete obj; } 
   qreal  width(QTextItem* theWrappedObject) const;
   QTextItem::RenderFlags  renderFlags(QTextItem* theWrappedObject) const;
   qreal  descent(QTextItem* theWrappedObject) const;
   qreal  ascent(QTextItem* theWrappedObject) const;
   QString  text(QTextItem* theWrappedObject) const;
   QFont  font(QTextItem* theWrappedObject) const;
};





class PythonQtWrapper_QTextLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Edge CursorPosition )
enum Edge{
  Leading = QTextLine::Leading,   Trailing = QTextLine::Trailing};
enum CursorPosition{
  CursorBetweenCharacters = QTextLine::CursorBetweenCharacters,   CursorOnCharacter = QTextLine::CursorOnCharacter};
public slots:
QTextLine* new_QTextLine();
QTextLine* new_QTextLine(const QTextLine& other) {
QTextLine* a = new QTextLine();
*((QTextLine*)a) = other;
return a; }
void delete_QTextLine(QTextLine* obj) { delete obj; } 
   int  textLength(QTextLine* theWrappedObject) const;
   bool  isValid(QTextLine* theWrappedObject) const;
   qreal  cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge = QTextLine::Leading) const;
   void setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth);
   void setNumColumns(QTextLine* theWrappedObject, int  columns);
   void draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection = 0) const;
   qreal  x(QTextLine* theWrappedObject) const;
   qreal  y(QTextLine* theWrappedObject) const;
   void setPosition(QTextLine* theWrappedObject, const QPointF&  pos);
   int  lineNumber(QTextLine* theWrappedObject) const;
   qreal  leading(QTextLine* theWrappedObject) const;
   void setLineWidth(QTextLine* theWrappedObject, qreal  width);
   int  xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2 = QTextLine::CursorBetweenCharacters) const;
   int  textStart(QTextLine* theWrappedObject) const;
   qreal  ascent(QTextLine* theWrappedObject) const;
   QPointF  position(QTextLine* theWrappedObject) const;
   void setLeadingIncluded(QTextLine* theWrappedObject, bool  included);
   QRectF  naturalTextRect(QTextLine* theWrappedObject) const;
   qreal  width(QTextLine* theWrappedObject) const;
   bool  leadingIncluded(QTextLine* theWrappedObject) const;
   QRectF  rect(QTextLine* theWrappedObject) const;
   qreal  height(QTextLine* theWrappedObject) const;
   qreal  descent(QTextLine* theWrappedObject) const;
   qreal  naturalTextWidth(QTextLine* theWrappedObject) const;
};





class PythonQtShell_QTextList : public QTextList
{
public:
    PythonQtShell_QTextList(QTextDocument*  doc):QTextList(doc),_wrapper(NULL) {};

virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void blockInserted(const QTextBlock&  block);
virtual void blockFormatChanged(const QTextBlock&  block);
virtual void blockRemoved(const QTextBlock&  block);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextList : public QObject
{ Q_OBJECT
public:
public slots:
QTextList* new_QTextList(QTextDocument*  doc);
void delete_QTextList(QTextList* obj) { delete obj; } 
   QTextBlock  item(QTextList* theWrappedObject, int  i) const;
   void remove(QTextList* theWrappedObject, const QTextBlock&  arg__1);
   QTextListFormat  format(QTextList* theWrappedObject) const;
   int  count(QTextList* theWrappedObject) const;
   int  itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   void add(QTextList* theWrappedObject, const QTextBlock&  block);
   void removeItem(QTextList* theWrappedObject, int  i);
   QString  itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   void setFormat(QTextList* theWrappedObject, const QTextListFormat&  format);
};





class PythonQtShell_QTextListFormat : public QTextListFormat
{
public:
    PythonQtShell_QTextListFormat():QTextListFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextListFormat(const QTextFormat&  fmt):QTextListFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextListFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Style )
enum Style{
  ListDisc = QTextListFormat::ListDisc,   ListCircle = QTextListFormat::ListCircle,   ListSquare = QTextListFormat::ListSquare,   ListDecimal = QTextListFormat::ListDecimal,   ListLowerAlpha = QTextListFormat::ListLowerAlpha,   ListUpperAlpha = QTextListFormat::ListUpperAlpha,   ListLowerRoman = QTextListFormat::ListLowerRoman,   ListUpperRoman = QTextListFormat::ListUpperRoman,   ListStyleUndefined = QTextListFormat::ListStyleUndefined};
public slots:
QTextListFormat* new_QTextListFormat();
QTextListFormat* new_QTextListFormat(const QTextListFormat& other) {
PythonQtShell_QTextListFormat* a = new PythonQtShell_QTextListFormat();
*((QTextListFormat*)a) = other;
return a; }
void delete_QTextListFormat(QTextListFormat* obj) { delete obj; } 
   bool  isValid(QTextListFormat* theWrappedObject) const;
   void setStyle(QTextListFormat* theWrappedObject, QTextListFormat::Style  style);
   void setIndent(QTextListFormat* theWrappedObject, int  indent);
   QTextListFormat::Style  style(QTextListFormat* theWrappedObject) const;
   int  indent(QTextListFormat* theWrappedObject) const;
};





class PythonQtShell_QTextObject : public QTextObject
{
public:
    PythonQtShell_QTextObject(QTextDocument*  doc):QTextObject(doc),_wrapper(NULL) {};

virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextObject : public QObject
{ Q_OBJECT
public:
public slots:
   QTextFormat  format(QTextObject* theWrappedObject) const;
   int  formatIndex(QTextObject* theWrappedObject) const;
   QTextDocument*  document(QTextObject* theWrappedObject) const;
   int  objectIndex(QTextObject* theWrappedObject) const;
};





class PythonQtShell_QTextTable : public QTextTable
{
public:
    PythonQtShell_QTextTable(QTextDocument*  doc):QTextTable(doc),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTable : public QObject
{ Q_OBJECT
public:
public slots:
QTextTable* new_QTextTable(QTextDocument*  doc);
void delete_QTextTable(QTextTable* obj) { delete obj; } 
   void removeRows(QTextTable* theWrappedObject, int  pos, int  num);
   void appendRows(QTextTable* theWrappedObject, int  count);
   void resize(QTextTable* theWrappedObject, int  rows, int  cols);
   QTextCursor  rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   void splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   void insertColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void appendColumns(QTextTable* theWrappedObject, int  count);
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  position) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  row, int  col) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   QTextTableFormat  format(QTextTable* theWrappedObject) const;
   void mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor);
   void mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   void removeColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void insertRows(QTextTable* theWrappedObject, int  pos, int  num);
   void setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format);
   int  rows(QTextTable* theWrappedObject) const;
   int  columns(QTextTable* theWrappedObject) const;
   QTextCursor  rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const;
};





class PythonQtWrapper_QTextTableCell : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableCell* new_QTextTableCell();
QTextTableCell* new_QTextTableCell(const QTextTableCell&  o);
void delete_QTextTableCell(QTextTableCell* obj) { delete obj; } 
   bool  isValid(QTextTableCell* theWrappedObject) const;
   QTextFrame::iterator  begin(QTextTableCell* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextTableCell* theWrappedObject) const;
   int  columnSpan(QTextTableCell* theWrappedObject) const;
   QTextFrame::iterator  end(QTextTableCell* theWrappedObject) const;
   int  tableCellFormatIndex(QTextTableCell* theWrappedObject) const;
   QTextCharFormat  format(QTextTableCell* theWrappedObject) const;
   int  lastPosition(QTextTableCell* theWrappedObject) const;
   bool  __ne__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const;
   void setFormat(QTextTableCell* theWrappedObject, const QTextCharFormat&  format);
   bool  __eq__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const;
   int  rowSpan(QTextTableCell* theWrappedObject) const;
   int  column(QTextTableCell* theWrappedObject) const;
   QTextCursor  firstCursorPosition(QTextTableCell* theWrappedObject) const;
   int  firstPosition(QTextTableCell* theWrappedObject) const;
   int  row(QTextTableCell* theWrappedObject) const;
};





class PythonQtShell_QTextTableCellFormat : public QTextTableCellFormat
{
public:
    PythonQtShell_QTextTableCellFormat():QTextTableCellFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableCellFormat(const QTextFormat&  fmt):QTextTableCellFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTableCellFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableCellFormat* new_QTextTableCellFormat();
QTextTableCellFormat* new_QTextTableCellFormat(const QTextTableCellFormat& other) {
PythonQtShell_QTextTableCellFormat* a = new PythonQtShell_QTextTableCellFormat();
*((QTextTableCellFormat*)a) = other;
return a; }
void delete_QTextTableCellFormat(QTextTableCellFormat* obj) { delete obj; } 
   void setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   bool  isValid(QTextTableCellFormat* theWrappedObject) const;
   void setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   qreal  leftPadding(QTextTableCellFormat* theWrappedObject) const;
   qreal  topPadding(QTextTableCellFormat* theWrappedObject) const;
   void setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   qreal  rightPadding(QTextTableCellFormat* theWrappedObject) const;
   qreal  bottomPadding(QTextTableCellFormat* theWrappedObject) const;
   void setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
};





class PythonQtShell_QTextTableFormat : public QTextTableFormat
{
public:
    PythonQtShell_QTextTableFormat():QTextTableFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableFormat(const QTextFormat&  fmt):QTextTableFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTableFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableFormat* new_QTextTableFormat();
QTextTableFormat* new_QTextTableFormat(const QTextTableFormat& other) {
PythonQtShell_QTextTableFormat* a = new PythonQtShell_QTextTableFormat();
*((QTextTableFormat*)a) = other;
return a; }
void delete_QTextTableFormat(QTextTableFormat* obj) { delete obj; } 
   void setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment);
   bool  isValid(QTextTableFormat* theWrappedObject) const;
   void clearColumnWidthConstraints(QTextTableFormat* theWrappedObject);
   int  headerRowCount(QTextTableFormat* theWrappedObject) const;
   Qt::Alignment  alignment(QTextTableFormat* theWrappedObject) const;
   void setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count);
   int  columns(QTextTableFormat* theWrappedObject) const;
   void setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints);
   QVector<QTextLength >  columnWidthConstraints(QTextTableFormat* theWrappedObject) const;
   qreal  cellSpacing(QTextTableFormat* theWrappedObject) const;
   qreal  cellPadding(QTextTableFormat* theWrappedObject) const;
   void setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding);
   void setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing);
   void setColumns(QTextTableFormat* theWrappedObject, int  columns);
};





class PythonQtShell_QTileRules : public QTileRules
{
public:
    PythonQtShell_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule):QTileRules(horizontalRule, verticalRule),_wrapper(NULL) {};
    PythonQtShell_QTileRules(Qt::TileRule  rule = Qt::StretchTile):QTileRules(rule),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTileRules : public QObject
{ Q_OBJECT
public:
public slots:
QTileRules* new_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule);
QTileRules* new_QTileRules(Qt::TileRule  rule = Qt::StretchTile);
void delete_QTileRules(QTileRules* obj) { delete obj; } 
void py_set_vertical(QTileRules* theWrappedObject, Qt::TileRule  vertical){ theWrappedObject->vertical = vertical; }
Qt::TileRule  py_get_vertical(QTileRules* theWrappedObject){ return theWrappedObject->vertical; }
void py_set_horizontal(QTileRules* theWrappedObject, Qt::TileRule  horizontal){ theWrappedObject->horizontal = horizontal; }
Qt::TileRule  py_get_horizontal(QTileRules* theWrappedObject){ return theWrappedObject->horizontal; }
};





class PythonQtShell_QTimeEdit : public QTimeEdit
{
public:
    PythonQtShell_QTimeEdit(QWidget*  parent = 0):QTimeEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QTimeEdit(const QTime&  time, QWidget*  parent = 0):QTimeEdit(time, parent),_wrapper(NULL) {};

virtual QDateTime  dateTimeFromText(const QString&  text) const;
virtual void paintEvent(QPaintEvent*  event);
virtual void stepBy(int  steps);
virtual bool  event(QEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void clear();
virtual void mousePressEvent(QMouseEvent*  event);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void fixup(QString&  input) const;
virtual QString  textFromDateTime(const QDateTime&  dt) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void showEvent(QShowEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void languageChange();
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTimeEdit : public QObject
{ Q_OBJECT
public:
public slots:
QTimeEdit* new_QTimeEdit(QWidget*  parent = 0);
QTimeEdit* new_QTimeEdit(const QTime&  time, QWidget*  parent = 0);
void delete_QTimeEdit(QTimeEdit* obj) { delete obj; } 
};





class PythonQtShell_QToolBar : public QToolBar
{
public:
    PythonQtShell_QToolBar(QWidget*  parent = 0):QToolBar(parent),_wrapper(NULL) {};
    PythonQtShell_QToolBar(const QString&  title, QWidget*  parent = 0):QToolBar(title, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void actionEvent(QActionEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual QPaintEngine*  paintEngine() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void enterEvent(QEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolBar : public QToolBar
{ public:
inline bool  promoted_event(QEvent*  event) { return QToolBar::event(event); }
inline void promoted_actionEvent(QActionEvent*  event) { QToolBar::actionEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QToolBar::paintEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QToolBar::changeEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QToolBar::resizeEvent(event); }
inline void promoted_childEvent(QChildEvent*  event) { QToolBar::childEvent(event); }
};

class PythonQtWrapper_QToolBar : public QObject
{ Q_OBJECT
public:
public slots:
QToolBar* new_QToolBar(QWidget*  parent = 0);
QToolBar* new_QToolBar(const QString&  title, QWidget*  parent = 0);
void delete_QToolBar(QToolBar* obj) { delete obj; } 
   bool  event(QToolBar* theWrappedObject, QEvent*  event);
   void setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation);
   QAction*  insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget);
   QAction*  toggleViewAction(QToolBar* theWrappedObject) const;
   void clear(QToolBar* theWrappedObject);
   void actionEvent(QToolBar* theWrappedObject, QActionEvent*  event);
   void setFloatable(QToolBar* theWrappedObject, bool  floatable);
   QWidget*  widgetForAction(QToolBar* theWrappedObject, QAction*  action) const;
   QAction*  actionAt(QToolBar* theWrappedObject, int  x, int  y) const;
   QAction*  actionAt(QToolBar* theWrappedObject, const QPoint&  p) const;
   void setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas);
   QAction*  addSeparator(QToolBar* theWrappedObject);
   QAction*  insertSeparator(QToolBar* theWrappedObject, QAction*  before);
   void setMovable(QToolBar* theWrappedObject, bool  movable);
   bool  isMovable(QToolBar* theWrappedObject) const;
   bool  isFloatable(QToolBar* theWrappedObject) const;
   Qt::ToolButtonStyle  toolButtonStyle(QToolBar* theWrappedObject) const;
   QSize  iconSize(QToolBar* theWrappedObject) const;
   QAction*  addWidget(QToolBar* theWrappedObject, QWidget*  widget);
   Qt::Orientation  orientation(QToolBar* theWrappedObject) const;
   QAction*  addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QToolBar* theWrappedObject, const QString&  text);
   void paintEvent(QToolBar* theWrappedObject, QPaintEvent*  event);
   void changeEvent(QToolBar* theWrappedObject, QEvent*  event);
   Qt::ToolBarAreas  allowedAreas(QToolBar* theWrappedObject) const;
   bool  isFloating(QToolBar* theWrappedObject) const;
   QRect  actionGeometry(QToolBar* theWrappedObject, QAction*  action) const;
   void resizeEvent(QToolBar* theWrappedObject, QResizeEvent*  event);
   void childEvent(QToolBar* theWrappedObject, QChildEvent*  event);
   bool  isAreaAllowed(QToolBar* theWrappedObject, Qt::ToolBarArea  area) const;
};





class PythonQtWrapper_QToolBarChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QToolBarChangeEvent* new_QToolBarChangeEvent(bool  t);
void delete_QToolBarChangeEvent(QToolBarChangeEvent* obj) { delete obj; } 
   bool  toggle(QToolBarChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QToolBox : public QToolBox
{
public:
    PythonQtShell_QToolBox(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QToolBox(parent, f),_wrapper(NULL) {};

virtual void itemInserted(int  index);
virtual void showEvent(QShowEvent*  e);
virtual void itemRemoved(int  index);
virtual bool  event(QEvent*  e);
virtual void changeEvent(QEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void languageChange();
virtual QPaintEngine*  paintEngine() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void enterEvent(QEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolBox : public QToolBox
{ public:
inline void promoted_itemInserted(int  index) { QToolBox::itemInserted(index); }
inline void promoted_showEvent(QShowEvent*  e) { QToolBox::showEvent(e); }
inline void promoted_itemRemoved(int  index) { QToolBox::itemRemoved(index); }
inline bool  promoted_event(QEvent*  e) { return QToolBox::event(e); }
inline void promoted_changeEvent(QEvent*  arg__1) { QToolBox::changeEvent(arg__1); }
};

class PythonQtWrapper_QToolBox : public QObject
{ Q_OBJECT
public:
public slots:
QToolBox* new_QToolBox(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QToolBox(QToolBox* obj) { delete obj; } 
   void setItemText(QToolBox* theWrappedObject, int  index, const QString&  text);
   void itemInserted(QToolBox* theWrappedObject, int  index);
   QString  itemToolTip(QToolBox* theWrappedObject, int  index) const;
   int  addItem(QToolBox* theWrappedObject, QWidget*  widget, const QString&  text);
   int  addItem(QToolBox* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  text);
   void showEvent(QToolBox* theWrappedObject, QShowEvent*  e);
   QWidget*  widget(QToolBox* theWrappedObject, int  index) const;
   bool  isItemEnabled(QToolBox* theWrappedObject, int  index) const;
   void setItemToolTip(QToolBox* theWrappedObject, int  index, const QString&  toolTip);
   int  count(QToolBox* theWrappedObject) const;
   QString  itemText(QToolBox* theWrappedObject, int  index) const;
   int  indexOf(QToolBox* theWrappedObject, QWidget*  widget) const;
   void setItemIcon(QToolBox* theWrappedObject, int  index, const QIcon&  icon);
   int  insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  text);
   void itemRemoved(QToolBox* theWrappedObject, int  index);
   QIcon  itemIcon(QToolBox* theWrappedObject, int  index) const;
   bool  event(QToolBox* theWrappedObject, QEvent*  e);
   int  insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QString&  text);
   void changeEvent(QToolBox* theWrappedObject, QEvent*  arg__1);
   QWidget*  currentWidget(QToolBox* theWrappedObject) const;
   void removeItem(QToolBox* theWrappedObject, int  index);
   void setItemEnabled(QToolBox* theWrappedObject, int  index, bool  enabled);
   int  currentIndex(QToolBox* theWrappedObject) const;
};





class PythonQtShell_QToolButton : public QToolButton
{
public:
    PythonQtShell_QToolButton(QWidget*  parent = 0):QToolButton(parent),_wrapper(NULL) {};

virtual void paintEvent(QPaintEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void nextCheckState();
virtual bool  event(QEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void focusInEvent(QFocusEvent*  e);
virtual void checkStateSet();
virtual void keyPressEvent(QKeyEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  devType() const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void languageChange();
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolButton : public QToolButton
{ public:
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QToolButton::paintEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QToolButton::enterEvent(arg__1); }
inline void promoted_nextCheckState() { QToolButton::nextCheckState(); }
inline bool  promoted_event(QEvent*  e) { return QToolButton::event(e); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QToolButton::leaveEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QToolButton::changeEvent(arg__1); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QToolButton::actionEvent(arg__1); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return QToolButton::hitButton(pos); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QToolButton::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QToolButton::mouseReleaseEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QToolButton::timerEvent(arg__1); }
};

class PythonQtWrapper_QToolButton : public QObject
{ Q_OBJECT
public:
public slots:
QToolButton* new_QToolButton(QWidget*  parent = 0);
void delete_QToolButton(QToolButton* obj) { delete obj; } 
   void paintEvent(QToolButton* theWrappedObject, QPaintEvent*  arg__1);
   void enterEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   void nextCheckState(QToolButton* theWrappedObject);
   bool  event(QToolButton* theWrappedObject, QEvent*  e);
   bool  autoRaise(QToolButton* theWrappedObject) const;
   QMenu*  menu(QToolButton* theWrappedObject) const;
   void leaveEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   void changeEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   void setArrowType(QToolButton* theWrappedObject, Qt::ArrowType  type);
   void actionEvent(QToolButton* theWrappedObject, QActionEvent*  arg__1);
   QToolButton::ToolButtonPopupMode  popupMode(QToolButton* theWrappedObject) const;
   void setMenu(QToolButton* theWrappedObject, QMenu*  menu);
   bool  hitButton(QToolButton* theWrappedObject, const QPoint&  pos) const;
   void setAutoRaise(QToolButton* theWrappedObject, bool  enable);
   QAction*  defaultAction(QToolButton* theWrappedObject) const;
   void mousePressEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1);
   QSize  sizeHint(QToolButton* theWrappedObject) const;
   void mouseReleaseEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1);
   Qt::ToolButtonStyle  toolButtonStyle(QToolButton* theWrappedObject) const;
   Qt::ArrowType  arrowType(QToolButton* theWrappedObject) const;
   QSize  minimumSizeHint(QToolButton* theWrappedObject) const;
   void setPopupMode(QToolButton* theWrappedObject, QToolButton::ToolButtonPopupMode  mode);
   void timerEvent(QToolButton* theWrappedObject, QTimerEvent*  arg__1);
};


