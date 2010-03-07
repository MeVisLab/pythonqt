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
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual bool  focusNextPrevChild(bool  next);
virtual void setSource(const QUrl&  name);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void home();
virtual void backward();
virtual void reload();
virtual void paintEvent(QPaintEvent*  e);
virtual void forward();
virtual bool  event(QEvent*  e);
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void focusOutEvent(QFocusEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void insertFromMimeData(const QMimeData*  source);
virtual void timerEvent(QTimerEvent*  e);
virtual void showEvent(QShowEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  e);
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void wheelEvent(QWheelEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void scrollContentsBy(int  dx, int  dy);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextBrowser : public QTextBrowser
{ public:
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextBrowser::loadResource(type, name); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { QTextBrowser::mouseMoveEvent(ev); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QTextBrowser::focusNextPrevChild(next); }
inline void promoted_setSource(const QUrl&  name) { QTextBrowser::setSource(name); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { QTextBrowser::mouseReleaseEvent(ev); }
inline void promoted_home() { QTextBrowser::home(); }
inline void promoted_backward() { QTextBrowser::backward(); }
inline void promoted_reload() { QTextBrowser::reload(); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTextBrowser::paintEvent(e); }
inline void promoted_forward() { QTextBrowser::forward(); }
inline bool  promoted_event(QEvent*  e) { return QTextBrowser::event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { QTextBrowser::keyPressEvent(ev); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { QTextBrowser::focusOutEvent(ev); }
inline void promoted_mousePressEvent(QMouseEvent*  ev) { QTextBrowser::mousePressEvent(ev); }
};

class PythonQtWrapper_QTextBrowser : public QObject
{ Q_OBJECT
public:
public slots:
QTextBrowser* new_QTextBrowser(QWidget*  parent = 0);
void delete_QTextBrowser(QTextBrowser* obj) { delete obj; } 
   bool  openLinks(QTextBrowser* theWrappedObject) const;
   void setOpenExternalLinks(QTextBrowser* theWrappedObject, bool  open);
   void clearHistory(QTextBrowser* theWrappedObject);
   QStringList  searchPaths(QTextBrowser* theWrappedObject) const;
   QVariant  loadResource(QTextBrowser* theWrappedObject, int  type, const QUrl&  name);
   QString  historyTitle(QTextBrowser* theWrappedObject, int  arg__1) const;
   bool  openExternalLinks(QTextBrowser* theWrappedObject) const;
   void mouseMoveEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   void setSearchPaths(QTextBrowser* theWrappedObject, const QStringList&  paths);
   bool  focusNextPrevChild(QTextBrowser* theWrappedObject, bool  next);
   void mouseReleaseEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
   bool  isForwardAvailable(QTextBrowser* theWrappedObject) const;
   QUrl  source(QTextBrowser* theWrappedObject) const;
   void paintEvent(QTextBrowser* theWrappedObject, QPaintEvent*  e);
   bool  isBackwardAvailable(QTextBrowser* theWrappedObject) const;
   int  forwardHistoryCount(QTextBrowser* theWrappedObject) const;
   void setOpenLinks(QTextBrowser* theWrappedObject, bool  open);
   bool  event(QTextBrowser* theWrappedObject, QEvent*  e);
   void keyPressEvent(QTextBrowser* theWrappedObject, QKeyEvent*  ev);
   void focusOutEvent(QTextBrowser* theWrappedObject, QFocusEvent*  ev);
   QUrl  historyUrl(QTextBrowser* theWrappedObject, int  arg__1) const;
   void mousePressEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev);
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
   QString  fontFamily(QTextCharFormat* theWrappedObject) const;
   int  tableCellColumnSpan(QTextCharFormat* theWrappedObject) const;
   void setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   QString  toolTip(QTextCharFormat* theWrappedObject) const;
   void setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch);
   QColor  underlineColor(QTextCharFormat* theWrappedObject) const;
   void setFont(QTextCharFormat* theWrappedObject, const QFont&  font);
   void setFontItalic(QTextCharFormat* theWrappedObject, bool  italic);
   bool  fontUnderline(QTextCharFormat* theWrappedObject) const;
   void setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment);
   void setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan);
   void setFontKerning(QTextCharFormat* theWrappedObject, bool  enable);
   QString  anchorHref(QTextCharFormat* theWrappedObject) const;
   void setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value);
   qreal  fontPointSize(QTextCharFormat* theWrappedObject) const;
   void setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline);
   QTextCharFormat::UnderlineStyle  underlineStyle(QTextCharFormat* theWrappedObject) const;
   bool  fontKerning(QTextCharFormat* theWrappedObject) const;
   QTextCharFormat::VerticalAlignment  verticalAlignment(QTextCharFormat* theWrappedObject) const;
   void setAnchor(QTextCharFormat* theWrappedObject, bool  anchor);
   void setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen);
   void setFontStyleStrategy(QTextCharFormat* theWrappedObject, QFont::StyleStrategy  strategy);
   void setFontWeight(QTextCharFormat* theWrappedObject, int  weight);
   void setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   bool  fontItalic(QTextCharFormat* theWrappedObject) const;
   void setFontStyleHint(QTextCharFormat* theWrappedObject, QFont::StyleHint  hint, QFont::StyleStrategy  strategy = QFont::PreferDefault);
   QStringList  anchorNames(QTextCharFormat* theWrappedObject) const;
   void setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut);
   int  fontWeight(QTextCharFormat* theWrappedObject) const;
   bool  isAnchor(QTextCharFormat* theWrappedObject) const;
   void setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names);
   void setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family);
   void setFontOverline(QTextCharFormat* theWrappedObject, bool  overline);
   void setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color);
   int  tableCellRowSpan(QTextCharFormat* theWrappedObject) const;
   QFont::StyleHint  fontStyleHint(QTextCharFormat* theWrappedObject) const;
   QFont::StyleStrategy  fontStyleStrategy(QTextCharFormat* theWrappedObject) const;
   QFont  font(QTextCharFormat* theWrappedObject) const;
   void setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size);
   void setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style);
   bool  isValid(QTextCharFormat* theWrappedObject) const;
   bool  fontStrikeOut(QTextCharFormat* theWrappedObject) const;
   QFont::Capitalization  fontCapitalization(QTextCharFormat* theWrappedObject) const;
   qreal  fontWordSpacing(QTextCharFormat* theWrappedObject) const;
   QPen  textOutline(QTextCharFormat* theWrappedObject) const;
   void setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip);
   bool  fontFixedPitch(QTextCharFormat* theWrappedObject) const;
   bool  fontOverline(QTextCharFormat* theWrappedObject) const;
   void setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization);
   void setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan);
   qreal  fontLetterSpacing(QTextCharFormat* theWrappedObject) const;
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
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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
   QTextList*  insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   QTextList*  insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   void setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   bool  atBlockEnd(QTextCursor* theWrappedObject) const;
   bool  atStart(QTextCursor* theWrappedObject) const;
   QString  selectedText(QTextCursor* theWrappedObject) const;
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat);
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   void selectedTableCells(QTextCursor* theWrappedObject, int*  firstRow, int*  numRows, int*  firstColumn, int*  numColumns) const;
   void insertBlock(QTextCursor* theWrappedObject);
   int  columnNumber(QTextCursor* theWrappedObject) const;
   bool  visualNavigation(QTextCursor* theWrappedObject) const;
   void setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   int  selectionStart(QTextCursor* theWrappedObject) const;
   void deletePreviousChar(QTextCursor* theWrappedObject);
   void mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier);
   int  position(QTextCursor* theWrappedObject) const;
   void setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   int  blockNumber(QTextCursor* theWrappedObject) const;
   QTextDocumentFragment  selection(QTextCursor* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextCursor* theWrappedObject) const;
   void joinPreviousEditBlock(QTextCursor* theWrappedObject);
   void insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment);
   QTextCharFormat  charFormat(QTextCursor* theWrappedObject) const;
   bool  isNull(QTextCursor* theWrappedObject) const;
   int  selectionEnd(QTextCursor* theWrappedObject) const;
   QTextTable*  currentTable(QTextCursor* theWrappedObject) const;
   QTextCharFormat  blockCharFormat(QTextCursor* theWrappedObject) const;
   bool  isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const;
   QTextList*  currentList(QTextCursor* theWrappedObject) const;
   void clearSelection(QTextCursor* theWrappedObject);
   void insertImage(QTextCursor* theWrappedObject, const QImage&  image, const QString&  name = QString());
   void insertImage(QTextCursor* theWrappedObject, const QString&  name);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment);
   bool  operator_equal(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   QTextBlock  block(QTextCursor* theWrappedObject) const;
   void select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection);
   bool  hasSelection(QTextCursor* theWrappedObject) const;
   void insertHtml(QTextCursor* theWrappedObject, const QString&  html);
   bool  operator_less(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   void mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   void insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format);
   void insertText(QTextCursor* theWrappedObject, const QString&  text);
   void setVisualNavigation(QTextCursor* theWrappedObject, bool  b);
   bool  atEnd(QTextCursor* theWrappedObject) const;
   void beginEditBlock(QTextCursor* theWrappedObject);
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols);
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format);
   void deleteChar(QTextCursor* theWrappedObject);
   void mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   QTextList*  createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   QTextList*  createList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   bool  atBlockStart(QTextCursor* theWrappedObject) const;
   void removeSelectedText(QTextCursor* theWrappedObject);
   QTextDocument*  document(QTextCursor* theWrappedObject) const;
   bool  hasComplexSelection(QTextCursor* theWrappedObject) const;
   int  anchor(QTextCursor* theWrappedObject) const;
   void endEditBlock(QTextCursor* theWrappedObject);
   QTextFrame*  insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format);
   bool  movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2 = QTextCursor::MoveAnchor, int  n = 1);
   void setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   QTextFrame*  currentFrame(QTextCursor* theWrappedObject) const;
};





class PythonQtShell_QTextDocument : public QTextDocument
{
public:
    PythonQtShell_QTextDocument(QObject*  parent = 0):QTextDocument(parent),_wrapper(NULL) {};
    PythonQtShell_QTextDocument(const QString&  text, QObject*  parent = 0):QTextDocument(text, parent),_wrapper(NULL) {};

virtual void clear();
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual QTextObject*  createObject(const QTextFormat&  f);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextDocument : public QTextDocument
{ public:
inline void promoted_clear() { QTextDocument::clear(); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextDocument::loadResource(type, name); }
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
   int  pageCount(QTextDocument* theWrappedObject) const;
   qreal  textWidth(QTextDocument* theWrappedObject) const;
   qreal  idealWidth(QTextDocument* theWrappedObject) const;
   QTextOption  defaultTextOption(QTextDocument* theWrappedObject) const;
   QTextBlock  findBlockByLineNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   void addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource);
   int  maximumBlockCount(QTextDocument* theWrappedObject) const;
   bool  isModified(QTextDocument* theWrappedObject) const;
   void clear(QTextDocument* theWrappedObject);
   QTextDocument*  clone(QTextDocument* theWrappedObject, QObject*  parent = 0) const;
   void markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length);
   QTextBlock  findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const;
   void setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font);
   int  availableRedoSteps(QTextDocument* theWrappedObject) const;
   void setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable);
   void undo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   QTextBlock  findBlock(QTextDocument* theWrappedObject, int  pos) const;
   void setHtml(QTextDocument* theWrappedObject, const QString&  html);
   QTextFrame*  rootFrame(QTextDocument* theWrappedObject) const;
   int  blockCount(QTextDocument* theWrappedObject) const;
   void setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option);
   int  revision(QTextDocument* theWrappedObject) const;
   qreal  indentWidth(QTextDocument* theWrappedObject) const;
   void setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2);
   QTextBlock  firstBlock(QTextDocument* theWrappedObject) const;
   QAbstractTextDocumentLayout*  documentLayout(QTextDocument* theWrappedObject) const;
   bool  isEmpty(QTextDocument* theWrappedObject) const;
   void setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet);
   void setIndentWidth(QTextDocument* theWrappedObject, qreal  width);
   QVector<QTextFormat >  allFormats(QTextDocument* theWrappedObject) const;
   QTextBlock  end(QTextDocument* theWrappedObject) const;
   int  characterCount(QTextDocument* theWrappedObject) const;
   QSizeF  size(QTextDocument* theWrappedObject) const;
   bool  isRedoAvailable(QTextDocument* theWrappedObject) const;
   QString  toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding = QByteArray()) const;
   qreal  documentMargin(QTextDocument* theWrappedObject) const;
   void setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum);
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options = 0) const;
   QTextCursor  find(QTextDocument* theWrappedObject, const QString&  subString, int  from = 0, QTextDocument::FindFlags  options = 0) const;
   QTextObject*  objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const;
   QTextObject*  object(QTextDocument* theWrappedObject, int  objectIndex) const;
   QChar  characterAt(QTextDocument* theWrappedObject, int  pos) const;
   void setDocumentMargin(QTextDocument* theWrappedObject, qreal  margin);
   void print(QTextDocument* theWrappedObject, QPrinter*  printer) const;
   QVariant  loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name);
   QTextBlock  lastBlock(QTextDocument* theWrappedObject) const;
   QTextObject*  createObject(QTextDocument* theWrappedObject, const QTextFormat&  f);
   QString  toPlainText(QTextDocument* theWrappedObject) const;
   QTextFrame*  frameAt(QTextDocument* theWrappedObject, int  pos) const;
   QString  metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const;
   QString  defaultStyleSheet(QTextDocument* theWrappedObject) const;
   QSizeF  pageSize(QTextDocument* theWrappedObject) const;
   QVariant  resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const;
   QTextBlock  begin(QTextDocument* theWrappedObject) const;
   int  lineCount(QTextDocument* theWrappedObject) const;
   bool  isUndoRedoEnabled(QTextDocument* theWrappedObject) const;
   bool  useDesignMetrics(QTextDocument* theWrappedObject) const;
   void setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size);
   void redo(QTextDocument* theWrappedObject, QTextCursor*  cursor);
   void drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect = QRectF());
   void setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout);
   void adjustSize(QTextDocument* theWrappedObject);
   int  availableUndoSteps(QTextDocument* theWrappedObject) const;
   void setPlainText(QTextDocument* theWrappedObject, const QString&  text);
   void setTextWidth(QTextDocument* theWrappedObject, qreal  width);
   void setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b);
   QFont  defaultFont(QTextDocument* theWrappedObject) const;
   bool  isUndoAvailable(QTextDocument* theWrappedObject) const;
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
   QString  toPlainText(QTextDocumentFragment* theWrappedObject) const;
   QString  toHtml(QTextDocumentFragment* theWrappedObject, const QByteArray&  encoding) const;
   QTextDocumentFragment  static_QTextDocumentFragment_fromPlainText(const QString&  plainText);
   QString  toHtml(QTextDocumentFragment* theWrappedObject) const;
   bool  isEmpty(QTextDocumentFragment* theWrappedObject) const;
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html, const QTextDocument*  resourceProvider);
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
   QByteArray  format(QTextDocumentWriter* theWrappedObject) const;
   void setDevice(QTextDocumentWriter* theWrappedObject, QIODevice*  device);
   bool  write(QTextDocumentWriter* theWrappedObject, const QTextDocument*  document);
   QIODevice*  device(QTextDocumentWriter* theWrappedObject) const;
   bool  write(QTextDocumentWriter* theWrappedObject, const QTextDocumentFragment&  fragment);
   void setCodec(QTextDocumentWriter* theWrappedObject, QTextCodec*  codec);
   void setFileName(QTextDocumentWriter* theWrappedObject, const QString&  fileName);
   QString  fileName(QTextDocumentWriter* theWrappedObject) const;
   void setFormat(QTextDocumentWriter* theWrappedObject, const QByteArray&  format);
};





class PythonQtShell_QTextEdit : public QTextEdit
{
public:
    PythonQtShell_QTextEdit(QWidget*  parent = 0):QTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QTextEdit(const QString&  text, QWidget*  parent = 0):QTextEdit(text, parent),_wrapper(NULL) {};

virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void keyPressEvent(QKeyEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void mousePressEvent(QMouseEvent*  e);
virtual void insertFromMimeData(const QMimeData*  source);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  e);
virtual void focusInEvent(QFocusEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void paintEvent(QPaintEvent*  e);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void wheelEvent(QWheelEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual bool  focusNextPrevChild(bool  next);
virtual bool  event(QEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextEdit : public QTextEdit
{ public:
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return QTextEdit::canInsertFromMimeData(source); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QTextEdit::mouseReleaseEvent(e); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QTextEdit::keyPressEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return QTextEdit::createMimeDataFromSelection(); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QTextEdit::mousePressEvent(e); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { QTextEdit::insertFromMimeData(source); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { QTextEdit::dragEnterEvent(e); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QTextEdit::inputMethodQuery(property); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTextEdit::showEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QTextEdit::resizeEvent(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QTextEdit::focusInEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { QTextEdit::dropEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QTextEdit::dragMoveEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QTextEdit::mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QTextEdit::mouseMoveEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QTextEdit::changeEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QTextEdit::keyReleaseEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QTextEdit::inputMethodEvent(arg__1); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QTextEdit::loadResource(type, name); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QTextEdit::dragLeaveEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTextEdit::paintEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QTextEdit::contextMenuEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QTextEdit::wheelEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QTextEdit::focusOutEvent(e); }
inline void promoted_timerEvent(QTimerEvent*  e) { QTextEdit::timerEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTextEdit::scrollContentsBy(dx, dy); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QTextEdit::focusNextPrevChild(next); }
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
   QRect  cursorRect(QTextEdit* theWrappedObject) const;
   QRect  cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   QList<QTextEdit::ExtraSelection >  extraSelections(QTextEdit* theWrappedObject) const;
   void setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor);
   bool  canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const;
   QTextCursor  cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   QTextOption::WrapMode  wordWrapMode(QTextEdit* theWrappedObject) const;
   void setAcceptRichText(QTextEdit* theWrappedObject, bool  accept);
   void mouseReleaseEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   void setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite);
   void ensureCursorVisible(QTextEdit* theWrappedObject);
   void setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w);
   void mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   QColor  textColor(QTextEdit* theWrappedObject) const;
   void keyPressEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   QMimeData*  createMimeDataFromSelection(QTextEdit* theWrappedObject) const;
   QColor  textBackgroundColor(QTextEdit* theWrappedObject) const;
   bool  fontUnderline(QTextEdit* theWrappedObject) const;
   void mousePressEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   QString  anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const;
   bool  acceptRichText(QTextEdit* theWrappedObject) const;
   void setDocument(QTextEdit* theWrappedObject, QTextDocument*  document);
   QFont  currentFont(QTextEdit* theWrappedObject) const;
   void setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode);
   int  tabStopWidth(QTextEdit* theWrappedObject) const;
   void setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable);
   int  cursorWidth(QTextEdit* theWrappedObject) const;
   QTextEdit::LineWrapMode  lineWrapMode(QTextEdit* theWrappedObject) const;
   QString  documentTitle(QTextEdit* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QTextEdit* theWrappedObject) const;
   void moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   void setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   QTextCharFormat  currentCharFormat(QTextEdit* theWrappedObject) const;
   void setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source);
   void setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void dragEnterEvent(QTextEdit* theWrappedObject, QDragEnterEvent*  e);
   QVariant  inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
   void showEvent(QTextEdit* theWrappedObject, QShowEvent*  arg__1);
   void resizeEvent(QTextEdit* theWrappedObject, QResizeEvent*  e);
   void focusInEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   void dropEvent(QTextEdit* theWrappedObject, QDropEvent*  e);
   bool  canPaste(QTextEdit* theWrappedObject) const;
   void setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title);
   bool  overwriteMode(QTextEdit* theWrappedObject) const;
   void dragMoveEvent(QTextEdit* theWrappedObject, QDragMoveEvent*  e);
   bool  tabChangesFocus(QTextEdit* theWrappedObject) const;
   void setCursorWidth(QTextEdit* theWrappedObject, int  width);
   QString  fontFamily(QTextEdit* theWrappedObject) const;
   Qt::Alignment  alignment(QTextEdit* theWrappedObject) const;
   int  lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const;
   void mouseDoubleClickEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   void mouseMoveEvent(QTextEdit* theWrappedObject, QMouseEvent*  e);
   QString  toHtml(QTextEdit* theWrappedObject) const;
   void changeEvent(QTextEdit* theWrappedObject, QEvent*  e);
   void keyReleaseEvent(QTextEdit* theWrappedObject, QKeyEvent*  e);
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position);
   QMenu*  createStandardContextMenu(QTextEdit* theWrappedObject);
   bool  find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
   QTextCursor  textCursor(QTextEdit* theWrappedObject) const;
   void inputMethodEvent(QTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   QTextEdit::AutoFormatting  autoFormatting(QTextEdit* theWrappedObject) const;
   bool  isReadOnly(QTextEdit* theWrappedObject) const;
   void print(QTextEdit* theWrappedObject, QPrinter*  printer) const;
   void setTabChangesFocus(QTextEdit* theWrappedObject, bool  b);
   QVariant  loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name);
   void dragLeaveEvent(QTextEdit* theWrappedObject, QDragLeaveEvent*  e);
   void setTabStopWidth(QTextEdit* theWrappedObject, int  width);
   QTextDocument*  document(QTextEdit* theWrappedObject) const;
   bool  fontItalic(QTextEdit* theWrappedObject) const;
   void setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features);
   QString  toPlainText(QTextEdit* theWrappedObject) const;
   void paintEvent(QTextEdit* theWrappedObject, QPaintEvent*  e);
   qreal  fontPointSize(QTextEdit* theWrappedObject) const;
   void contextMenuEvent(QTextEdit* theWrappedObject, QContextMenuEvent*  e);
   bool  isUndoRedoEnabled(QTextEdit* theWrappedObject) const;
   void wheelEvent(QTextEdit* theWrappedObject, QWheelEvent*  e);
   int  fontWeight(QTextEdit* theWrappedObject) const;
   void focusOutEvent(QTextEdit* theWrappedObject, QFocusEvent*  e);
   void setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setReadOnly(QTextEdit* theWrappedObject, bool  ro);
   void timerEvent(QTextEdit* theWrappedObject, QTimerEvent*  e);
   void scrollContentsBy(QTextEdit* theWrappedObject, int  dx, int  dy);
   bool  focusNextPrevChild(QTextEdit* theWrappedObject, bool  next);
   bool  event(QTextEdit* theWrappedObject, QEvent*  e);
};





class PythonQtWrapper_QTextFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextFragment* new_QTextFragment();
QTextFragment* new_QTextFragment(const QTextFragment&  o);
void delete_QTextFragment(QTextFragment* obj) { delete obj; } 
   bool  isValid(QTextFragment* theWrappedObject) const;
   bool  operator_less(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   QTextCharFormat  charFormat(QTextFragment* theWrappedObject) const;
   QString  text(QTextFragment* theWrappedObject) const;
   int  length(QTextFragment* theWrappedObject) const;
   int  position(QTextFragment* theWrappedObject) const;
   bool  operator_equal(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  contains(QTextFragment* theWrappedObject, int  position) const;
   int  charFormatIndex(QTextFragment* theWrappedObject) const;
};





class PythonQtShell_QTextFrame : public QTextFrame
{
public:
    PythonQtShell_QTextFrame(QTextDocument*  doc):QTextFrame(doc),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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
   QTextCursor  lastCursorPosition(QTextFrame* theWrappedObject) const;
   QTextCursor  firstCursorPosition(QTextFrame* theWrappedObject) const;
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
   void setBottomMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setRightMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   bool  isValid(QTextFrameFormat* theWrappedObject) const;
   qreal  border(QTextFrameFormat* theWrappedObject) const;
   void setMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setPageBreakPolicy(QTextFrameFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   void setWidth(QTextFrameFormat* theWrappedObject, const QTextLength&  length);
   QBrush  borderBrush(QTextFrameFormat* theWrappedObject) const;
   void setTopMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setWidth(QTextFrameFormat* theWrappedObject, qreal  width);
   void setHeight(QTextFrameFormat* theWrappedObject, const QTextLength&  height);
   void setHeight(QTextFrameFormat* theWrappedObject, qreal  height);
   void setLeftMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   qreal  leftMargin(QTextFrameFormat* theWrappedObject) const;
   void setBorderStyle(QTextFrameFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setPadding(QTextFrameFormat* theWrappedObject, qreal  padding);
   qreal  bottomMargin(QTextFrameFormat* theWrappedObject) const;
   void setPosition(QTextFrameFormat* theWrappedObject, QTextFrameFormat::Position  f);
   QTextFrameFormat::Position  position(QTextFrameFormat* theWrappedObject) const;
   void setBorderBrush(QTextFrameFormat* theWrappedObject, const QBrush&  brush);
   qreal  padding(QTextFrameFormat* theWrappedObject) const;
   qreal  rightMargin(QTextFrameFormat* theWrappedObject) const;
   QTextLength  width(QTextFrameFormat* theWrappedObject) const;
   void setBorder(QTextFrameFormat* theWrappedObject, qreal  border);
   QTextFrameFormat::BorderStyle  borderStyle(QTextFrameFormat* theWrappedObject) const;
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextFrameFormat* theWrappedObject) const;
   QTextLength  height(QTextFrameFormat* theWrappedObject) const;
   qreal  topMargin(QTextFrameFormat* theWrappedObject) const;
   qreal  margin(QTextFrameFormat* theWrappedObject) const;
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
   bool  isValid(QTextImageFormat* theWrappedObject) const;
   void setWidth(QTextImageFormat* theWrappedObject, qreal  width);
   qreal  height(QTextImageFormat* theWrappedObject) const;
   qreal  width(QTextImageFormat* theWrappedObject) const;
   void setName(QTextImageFormat* theWrappedObject, const QString&  name);
   QString  name(QTextImageFormat* theWrappedObject) const;
   void setHeight(QTextImageFormat* theWrappedObject, qreal  height);
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
   qreal  width(QTextInlineObject* theWrappedObject) const;
   bool  isValid(QTextInlineObject* theWrappedObject) const;
   Qt::LayoutDirection  textDirection(QTextInlineObject* theWrappedObject) const;
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
   QString  text(QTextItem* theWrappedObject) const;
   qreal  width(QTextItem* theWrappedObject) const;
   qreal  descent(QTextItem* theWrappedObject) const;
   qreal  ascent(QTextItem* theWrappedObject) const;
   QTextItem::RenderFlags  renderFlags(QTextItem* theWrappedObject) const;
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
   int  lineNumber(QTextLine* theWrappedObject) const;
   void setPosition(QTextLine* theWrappedObject, const QPointF&  pos);
   qreal  leading(QTextLine* theWrappedObject) const;
   int  xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2 = QTextLine::CursorBetweenCharacters) const;
   void setLeadingIncluded(QTextLine* theWrappedObject, bool  included);
   int  textStart(QTextLine* theWrappedObject) const;
   QPointF  position(QTextLine* theWrappedObject) const;
   qreal  ascent(QTextLine* theWrappedObject) const;
   qreal  width(QTextLine* theWrappedObject) const;
   bool  leadingIncluded(QTextLine* theWrappedObject) const;
   void setLineWidth(QTextLine* theWrappedObject, qreal  width);
   QRectF  rect(QTextLine* theWrappedObject) const;
   qreal  height(QTextLine* theWrappedObject) const;
   QRectF  naturalTextRect(QTextLine* theWrappedObject) const;
   qreal  descent(QTextLine* theWrappedObject) const;
   qreal  naturalTextWidth(QTextLine* theWrappedObject) const;
};





class PythonQtShell_QTextList : public QTextList
{
public:
    PythonQtShell_QTextList(QTextDocument*  doc):QTextList(doc),_wrapper(NULL) {};

virtual void blockInserted(const QTextBlock&  block);
virtual void blockFormatChanged(const QTextBlock&  block);
virtual void blockRemoved(const QTextBlock&  block);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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
   int  indent(QTextListFormat* theWrappedObject) const;
   QTextListFormat::Style  style(QTextListFormat* theWrappedObject) const;
};





class PythonQtShell_QTextObject : public QTextObject
{
public:
    PythonQtShell_QTextObject(QTextDocument*  doc):QTextObject(doc),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTable : public QObject
{ Q_OBJECT
public:
public slots:
QTextTable* new_QTextTable(QTextDocument*  doc);
void delete_QTextTable(QTextTable* obj) { delete obj; } 
   void resize(QTextTable* theWrappedObject, int  rows, int  cols);
   QTextCursor  rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   void insertColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  position) const;
   void appendColumns(QTextTable* theWrappedObject, int  count);
   QTextTableCell  cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  row, int  col) const;
   void appendRows(QTextTable* theWrappedObject, int  count);
   void mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor);
   QTextTableFormat  format(QTextTable* theWrappedObject) const;
   void mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   void removeColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void insertRows(QTextTable* theWrappedObject, int  pos, int  num);
   void setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format);
   void removeRows(QTextTable* theWrappedObject, int  pos, int  num);
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
   int  columnSpan(QTextTableCell* theWrappedObject) const;
   QTextFrame::iterator  end(QTextTableCell* theWrappedObject) const;
   QTextCharFormat  format(QTextTableCell* theWrappedObject) const;
   void setFormat(QTextTableCell* theWrappedObject, const QTextCharFormat&  format);
   int  tableCellFormatIndex(QTextTableCell* theWrappedObject) const;
   int  lastPosition(QTextTableCell* theWrappedObject) const;
   bool  operator_equal(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const;
   int  rowSpan(QTextTableCell* theWrappedObject) const;
   int  column(QTextTableCell* theWrappedObject) const;
   QTextCursor  firstCursorPosition(QTextTableCell* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextTableCell* theWrappedObject) const;
   QTextFrame::iterator  begin(QTextTableCell* theWrappedObject) const;
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
   qreal  topPadding(QTextTableCellFormat* theWrappedObject) const;
   void setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   qreal  leftPadding(QTextTableCellFormat* theWrappedObject) const;
   void setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   qreal  rightPadding(QTextTableCellFormat* theWrappedObject) const;
   qreal  bottomPadding(QTextTableCellFormat* theWrappedObject) const;
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
   void clearColumnWidthConstraints(QTextTableFormat* theWrappedObject);
   bool  isValid(QTextTableFormat* theWrappedObject) const;
   int  headerRowCount(QTextTableFormat* theWrappedObject) const;
   Qt::Alignment  alignment(QTextTableFormat* theWrappedObject) const;
   void setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count);
   void setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment);
   void setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints);
   int  columns(QTextTableFormat* theWrappedObject) const;
   QVector<QTextLength >  columnWidthConstraints(QTextTableFormat* theWrappedObject) const;
   qreal  cellSpacing(QTextTableFormat* theWrappedObject) const;
   void setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding);
   qreal  cellPadding(QTextTableFormat* theWrappedObject) const;
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

virtual void wheelEvent(QWheelEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual QDateTime  dateTimeFromText(const QString&  text) const;
virtual void clear();
virtual void stepBy(int  steps);
virtual QString  textFromDateTime(const QDateTime&  dt) const;
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void fixup(QString&  input) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  event(QEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void focusOutEvent(QFocusEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual bool  event(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual int  devType() const;
virtual QSize  minimumSizeHint() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolBar : public QToolBar
{ public:
inline void promoted_actionEvent(QActionEvent*  event) { QToolBar::actionEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QToolBar::changeEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QToolBar::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QToolBar::resizeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QToolBar::event(event); }
inline void promoted_childEvent(QChildEvent*  event) { QToolBar::childEvent(event); }
};

class PythonQtWrapper_QToolBar : public QObject
{ Q_OBJECT
public:
public slots:
QToolBar* new_QToolBar(QWidget*  parent = 0);
QToolBar* new_QToolBar(const QString&  title, QWidget*  parent = 0);
void delete_QToolBar(QToolBar* obj) { delete obj; } 
   QAction*  insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget);
   QAction*  toggleViewAction(QToolBar* theWrappedObject) const;
   void clear(QToolBar* theWrappedObject);
   void actionEvent(QToolBar* theWrappedObject, QActionEvent*  event);
   void setFloatable(QToolBar* theWrappedObject, bool  floatable);
   QWidget*  widgetForAction(QToolBar* theWrappedObject, QAction*  action) const;
   QAction*  actionAt(QToolBar* theWrappedObject, const QPoint&  p) const;
   QAction*  actionAt(QToolBar* theWrappedObject, int  x, int  y) const;
   QAction*  addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addSeparator(QToolBar* theWrappedObject);
   QAction*  insertSeparator(QToolBar* theWrappedObject, QAction*  before);
   void setMovable(QToolBar* theWrappedObject, bool  movable);
   bool  isMovable(QToolBar* theWrappedObject) const;
   void setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas);
   bool  isFloatable(QToolBar* theWrappedObject) const;
   QSize  iconSize(QToolBar* theWrappedObject) const;
   Qt::ToolButtonStyle  toolButtonStyle(QToolBar* theWrappedObject) const;
   QAction*  addWidget(QToolBar* theWrappedObject, QWidget*  widget);
   void setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation);
   QAction*  addAction(QToolBar* theWrappedObject, const QString&  text);
   Qt::Orientation  orientation(QToolBar* theWrappedObject) const;
   void changeEvent(QToolBar* theWrappedObject, QEvent*  event);
   void paintEvent(QToolBar* theWrappedObject, QPaintEvent*  event);
   bool  isFloating(QToolBar* theWrappedObject) const;
   QRect  actionGeometry(QToolBar* theWrappedObject, QAction*  action) const;
   Qt::ToolBarAreas  allowedAreas(QToolBar* theWrappedObject) const;
   void resizeEvent(QToolBar* theWrappedObject, QResizeEvent*  event);
   bool  event(QToolBar* theWrappedObject, QEvent*  event);
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

virtual bool  event(QEvent*  e);
virtual void itemRemoved(int  index);
virtual void changeEvent(QEvent*  arg__1);
virtual void showEvent(QShowEvent*  e);
virtual void itemInserted(int  index);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual int  devType() const;
virtual QSize  minimumSizeHint() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolBox : public QToolBox
{ public:
inline bool  promoted_event(QEvent*  e) { return QToolBox::event(e); }
inline void promoted_itemRemoved(int  index) { QToolBox::itemRemoved(index); }
inline void promoted_changeEvent(QEvent*  arg__1) { QToolBox::changeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  e) { QToolBox::showEvent(e); }
inline void promoted_itemInserted(int  index) { QToolBox::itemInserted(index); }
};

class PythonQtWrapper_QToolBox : public QObject
{ Q_OBJECT
public:
public slots:
QToolBox* new_QToolBox(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QToolBox(QToolBox* obj) { delete obj; } 
   bool  event(QToolBox* theWrappedObject, QEvent*  e);
   QIcon  itemIcon(QToolBox* theWrappedObject, int  index) const;
   int  insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  text);
   void itemRemoved(QToolBox* theWrappedObject, int  index);
   void changeEvent(QToolBox* theWrappedObject, QEvent*  arg__1);
   int  insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QString&  text);
   void setItemIcon(QToolBox* theWrappedObject, int  index, const QIcon&  icon);
   int  indexOf(QToolBox* theWrappedObject, QWidget*  widget) const;
   int  count(QToolBox* theWrappedObject) const;
   bool  isItemEnabled(QToolBox* theWrappedObject, int  index) const;
   QString  itemText(QToolBox* theWrappedObject, int  index) const;
   void setItemToolTip(QToolBox* theWrappedObject, int  index, const QString&  toolTip);
   QWidget*  widget(QToolBox* theWrappedObject, int  index) const;
   QWidget*  currentWidget(QToolBox* theWrappedObject) const;
   void showEvent(QToolBox* theWrappedObject, QShowEvent*  e);
   int  addItem(QToolBox* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  text);
   int  addItem(QToolBox* theWrappedObject, QWidget*  widget, const QString&  text);
   QString  itemToolTip(QToolBox* theWrappedObject, int  index) const;
   void removeItem(QToolBox* theWrappedObject, int  index);
   void itemInserted(QToolBox* theWrappedObject, int  index);
   void setItemText(QToolBox* theWrappedObject, int  index, const QString&  text);
   void setItemEnabled(QToolBox* theWrappedObject, int  index, bool  enabled);
   int  currentIndex(QToolBox* theWrappedObject) const;
};





class PythonQtShell_QToolButton : public QToolButton
{
public:
    PythonQtShell_QToolButton(QWidget*  parent = 0):QToolButton(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void nextCheckState();
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void checkStateSet();
virtual void keyPressEvent(QKeyEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QToolButton : public QToolButton
{ public:
inline bool  promoted_event(QEvent*  e) { return QToolButton::event(e); }
inline void promoted_nextCheckState() { QToolButton::nextCheckState(); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QToolButton::leaveEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QToolButton::changeEvent(arg__1); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QToolButton::actionEvent(arg__1); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return QToolButton::hitButton(pos); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QToolButton::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QToolButton::mouseReleaseEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QToolButton::timerEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QToolButton::enterEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QToolButton::paintEvent(arg__1); }
};

class PythonQtWrapper_QToolButton : public QObject
{ Q_OBJECT
public:
public slots:
QToolButton* new_QToolButton(QWidget*  parent = 0);
void delete_QToolButton(QToolButton* obj) { delete obj; } 
   bool  event(QToolButton* theWrappedObject, QEvent*  e);
   void nextCheckState(QToolButton* theWrappedObject);
   bool  autoRaise(QToolButton* theWrappedObject) const;
   QMenu*  menu(QToolButton* theWrappedObject) const;
   void leaveEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   void changeEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   void setArrowType(QToolButton* theWrappedObject, Qt::ArrowType  type);
   void setAutoRaise(QToolButton* theWrappedObject, bool  enable);
   void actionEvent(QToolButton* theWrappedObject, QActionEvent*  arg__1);
   void setMenu(QToolButton* theWrappedObject, QMenu*  menu);
   bool  hitButton(QToolButton* theWrappedObject, const QPoint&  pos) const;
   QAction*  defaultAction(QToolButton* theWrappedObject) const;
   QToolButton::ToolButtonPopupMode  popupMode(QToolButton* theWrappedObject) const;
   void mousePressEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1);
   QSize  sizeHint(QToolButton* theWrappedObject) const;
   void mouseReleaseEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1);
   Qt::ToolButtonStyle  toolButtonStyle(QToolButton* theWrappedObject) const;
   void setPopupMode(QToolButton* theWrappedObject, QToolButton::ToolButtonPopupMode  mode);
   QSize  minimumSizeHint(QToolButton* theWrappedObject) const;
   void timerEvent(QToolButton* theWrappedObject, QTimerEvent*  arg__1);
   Qt::ArrowType  arrowType(QToolButton* theWrappedObject) const;
   void enterEvent(QToolButton* theWrappedObject, QEvent*  arg__1);
   void paintEvent(QToolButton* theWrappedObject, QPaintEvent*  arg__1);
};


