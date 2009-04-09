#ifndef PYTHONQTWRAPPER_QKEYSEQUENCE_H
#define PYTHONQTWRAPPER_QKEYSEQUENCE_H

#include <qkeysequence.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qkeysequence.h>
#include <qlist.h>

class PythonQtWrapper_QKeySequence : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SequenceFormat StandardKey SequenceMatch )
enum SequenceFormat{
  NativeText = QKeySequence::NativeText,   PortableText = QKeySequence::PortableText};
enum StandardKey{
  UnknownKey = QKeySequence::UnknownKey,   HelpContents = QKeySequence::HelpContents,   WhatsThis = QKeySequence::WhatsThis,   Open = QKeySequence::Open,   Close = QKeySequence::Close,   Save = QKeySequence::Save,   New = QKeySequence::New,   Delete = QKeySequence::Delete,   Cut = QKeySequence::Cut,   Copy = QKeySequence::Copy,   Paste = QKeySequence::Paste,   Undo = QKeySequence::Undo,   Redo = QKeySequence::Redo,   Back = QKeySequence::Back,   Forward = QKeySequence::Forward,   Refresh = QKeySequence::Refresh,   ZoomIn = QKeySequence::ZoomIn,   ZoomOut = QKeySequence::ZoomOut,   Print = QKeySequence::Print,   AddTab = QKeySequence::AddTab,   NextChild = QKeySequence::NextChild,   PreviousChild = QKeySequence::PreviousChild,   Find = QKeySequence::Find,   FindNext = QKeySequence::FindNext,   FindPrevious = QKeySequence::FindPrevious,   Replace = QKeySequence::Replace,   SelectAll = QKeySequence::SelectAll,   Bold = QKeySequence::Bold,   Italic = QKeySequence::Italic,   Underline = QKeySequence::Underline,   MoveToNextChar = QKeySequence::MoveToNextChar,   MoveToPreviousChar = QKeySequence::MoveToPreviousChar,   MoveToNextWord = QKeySequence::MoveToNextWord,   MoveToPreviousWord = QKeySequence::MoveToPreviousWord,   MoveToNextLine = QKeySequence::MoveToNextLine,   MoveToPreviousLine = QKeySequence::MoveToPreviousLine,   MoveToNextPage = QKeySequence::MoveToNextPage,   MoveToPreviousPage = QKeySequence::MoveToPreviousPage,   MoveToStartOfLine = QKeySequence::MoveToStartOfLine,   MoveToEndOfLine = QKeySequence::MoveToEndOfLine,   MoveToStartOfBlock = QKeySequence::MoveToStartOfBlock,   MoveToEndOfBlock = QKeySequence::MoveToEndOfBlock,   MoveToStartOfDocument = QKeySequence::MoveToStartOfDocument,   MoveToEndOfDocument = QKeySequence::MoveToEndOfDocument,   SelectNextChar = QKeySequence::SelectNextChar,   SelectPreviousChar = QKeySequence::SelectPreviousChar,   SelectNextWord = QKeySequence::SelectNextWord,   SelectPreviousWord = QKeySequence::SelectPreviousWord,   SelectNextLine = QKeySequence::SelectNextLine,   SelectPreviousLine = QKeySequence::SelectPreviousLine,   SelectNextPage = QKeySequence::SelectNextPage,   SelectPreviousPage = QKeySequence::SelectPreviousPage,   SelectStartOfLine = QKeySequence::SelectStartOfLine,   SelectEndOfLine = QKeySequence::SelectEndOfLine,   SelectStartOfBlock = QKeySequence::SelectStartOfBlock,   SelectEndOfBlock = QKeySequence::SelectEndOfBlock,   SelectStartOfDocument = QKeySequence::SelectStartOfDocument,   SelectEndOfDocument = QKeySequence::SelectEndOfDocument,   DeleteStartOfWord = QKeySequence::DeleteStartOfWord,   DeleteEndOfWord = QKeySequence::DeleteEndOfWord,   DeleteEndOfLine = QKeySequence::DeleteEndOfLine};
enum SequenceMatch{
  NoMatch = QKeySequence::NoMatch,   PartialMatch = QKeySequence::PartialMatch,   ExactMatch = QKeySequence::ExactMatch};
public slots:
QKeySequence* new_QKeySequence();
QKeySequence* new_QKeySequence(QKeySequence::StandardKey  key);
QKeySequence* new_QKeySequence(const QKeySequence&  ks);
QKeySequence* new_QKeySequence(const QString&  key);
QKeySequence* new_QKeySequence(int  k1, int  k2 = 0, int  k3 = 0, int  k4 = 0);
void delete_QKeySequence(QKeySequence* obj) { delete obj; } 
   uint  count(QKeySequence* theWrappedObject) const;
   QKeySequence  static_QKeySequence_fromString(const QString&  str, QKeySequence::SequenceFormat  format = QKeySequence::PortableText);
   bool  isEmpty(QKeySequence* theWrappedObject) const;
   QList<QKeySequence >  static_QKeySequence_keyBindings(QKeySequence::StandardKey  key);
   QKeySequence::SequenceMatch  matches(QKeySequence* theWrappedObject, const QKeySequence&  seq) const;
   QKeySequence  static_QKeySequence_mnemonic(const QString&  text);
   int  operator_cast_int(QKeySequence* theWrappedObject) const;
   bool  operator_less(QKeySequence* theWrappedObject, const QKeySequence&  ks) const;
   void writeTo(QKeySequence* theWrappedObject, QDataStream&  in);
   bool  operator_equal(QKeySequence* theWrappedObject, const QKeySequence&  other) const;
   void readFrom(QKeySequence* theWrappedObject, QDataStream&  out);
   int  operator_subscript(QKeySequence* theWrappedObject, uint  i) const;
   QString  toString(QKeySequence* theWrappedObject, QKeySequence::SequenceFormat  format = QKeySequence::PortableText) const;
};

#endif // PYTHONQTWRAPPER_QKEYSEQUENCE_H
