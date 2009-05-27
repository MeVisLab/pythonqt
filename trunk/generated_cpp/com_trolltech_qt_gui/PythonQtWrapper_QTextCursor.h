#ifndef PYTHONQTWRAPPER_QTEXTCURSOR_H
#define PYTHONQTWRAPPER_QTEXTCURSOR_H

#include <qtextcursor.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextBlock>
#include <QTextDocumentFragment>
#include <QVariant>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtexttable.h>

class PythonQtWrapper_QTextCursor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MoveMode MoveOperation SelectionType )
enum MoveMode{
  MoveAnchor = QTextCursor::MoveAnchor,   KeepAnchor = QTextCursor::KeepAnchor};
enum MoveOperation{
  NoMove = QTextCursor::NoMove,   Start = QTextCursor::Start,   Up = QTextCursor::Up,   StartOfLine = QTextCursor::StartOfLine,   StartOfBlock = QTextCursor::StartOfBlock,   StartOfWord = QTextCursor::StartOfWord,   PreviousBlock = QTextCursor::PreviousBlock,   PreviousCharacter = QTextCursor::PreviousCharacter,   PreviousWord = QTextCursor::PreviousWord,   Left = QTextCursor::Left,   WordLeft = QTextCursor::WordLeft,   End = QTextCursor::End,   Down = QTextCursor::Down,   EndOfLine = QTextCursor::EndOfLine,   EndOfWord = QTextCursor::EndOfWord,   EndOfBlock = QTextCursor::EndOfBlock,   NextBlock = QTextCursor::NextBlock,   NextCharacter = QTextCursor::NextCharacter,   NextWord = QTextCursor::NextWord,   Right = QTextCursor::Right,   WordRight = QTextCursor::WordRight};
enum SelectionType{
  WordUnderCursor = QTextCursor::WordUnderCursor,   LineUnderCursor = QTextCursor::LineUnderCursor,   BlockUnderCursor = QTextCursor::BlockUnderCursor,   Document = QTextCursor::Document};
public slots:
QTextCursor* new_QTextCursor();
QTextCursor* new_QTextCursor(QTextDocument*  document);
QTextCursor* new_QTextCursor(QTextFrame*  frame);
QTextCursor* new_QTextCursor(const QTextBlock&  block);
QTextCursor* new_QTextCursor(const QTextCursor&  cursor);
void delete_QTextCursor(QTextCursor* obj) { delete obj; } 
   void insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format);
   int  position(QTextCursor* theWrappedObject) const;
   QTextList*  createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   int  selectionStart(QTextCursor* theWrappedObject) const;
   bool  isNull(QTextCursor* theWrappedObject) const;
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format);
   void insertText(QTextCursor* theWrappedObject, const QString&  text);
   QTextCharFormat  charFormat(QTextCursor* theWrappedObject) const;
   QTextTable*  currentTable(QTextCursor* theWrappedObject) const;
   bool  atEnd(QTextCursor* theWrappedObject) const;
   void insertHtml(QTextCursor* theWrappedObject, const QString&  html);
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat);
   void setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   bool  visualNavigation(QTextCursor* theWrappedObject) const;
   void insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment);
   void setVisualNavigation(QTextCursor* theWrappedObject, bool  b);
   void setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   QTextBlock  block(QTextCursor* theWrappedObject) const;
   bool  atBlockStart(QTextCursor* theWrappedObject) const;
   int  columnNumber(QTextCursor* theWrappedObject) const;
   void mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier);
   QTextBlockFormat  blockFormat(QTextCursor* theWrappedObject) const;
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols);
   int  anchor(QTextCursor* theWrappedObject) const;
   bool  movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2 = QTextCursor::MoveAnchor, int  n = 1);
   int  blockNumber(QTextCursor* theWrappedObject) const;
   void insertBlock(QTextCursor* theWrappedObject);
   bool  isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const;
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment);
   QString  selectedText(QTextCursor* theWrappedObject) const;
   bool  hasSelection(QTextCursor* theWrappedObject) const;
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format);
   bool  operator_equal(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   void deleteChar(QTextCursor* theWrappedObject);
   void insertImage(QTextCursor* theWrappedObject, const QString&  name);
   void endEditBlock(QTextCursor* theWrappedObject);
   void joinPreviousEditBlock(QTextCursor* theWrappedObject);
   void select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection);
   QTextCharFormat  blockCharFormat(QTextCursor* theWrappedObject) const;
   bool  atStart(QTextCursor* theWrappedObject) const;
   bool  hasComplexSelection(QTextCursor* theWrappedObject) const;
   void selectedTableCells(QTextCursor* theWrappedObject, int*  firstRow, int*  numRows, int*  firstColumn, int*  numColumns) const;
   void removeSelectedText(QTextCursor* theWrappedObject);
   QTextList*  insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   QTextFrame*  insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format);
   void mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   bool  atBlockEnd(QTextCursor* theWrappedObject) const;
   void clearSelection(QTextCursor* theWrappedObject);
   void setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   QTextList*  currentList(QTextCursor* theWrappedObject) const;
   QTextList*  createList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   QTextFrame*  currentFrame(QTextCursor* theWrappedObject) const;
   void deletePreviousChar(QTextCursor* theWrappedObject);
   void beginEditBlock(QTextCursor* theWrappedObject);
   void mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   int  selectionEnd(QTextCursor* theWrappedObject) const;
   QTextList*  insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   bool  operator_less(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   QTextDocumentFragment  selection(QTextCursor* theWrappedObject) const;
   void setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
};

#endif // PYTHONQTWRAPPER_QTEXTCURSOR_H
