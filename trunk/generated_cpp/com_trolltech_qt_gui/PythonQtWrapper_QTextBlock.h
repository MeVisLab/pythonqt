#ifndef PYTHONQTWRAPPER_QTEXTBLOCK_H
#define PYTHONQTWRAPPER_QTEXTBLOCK_H

#include <qtextobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextBlock>
#include <QVariant>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>

class PythonQtWrapper_QTextBlock : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlock* new_QTextBlock();
QTextBlock* new_QTextBlock(const QTextBlock&  o);
void delete_QTextBlock(QTextBlock* obj) { delete obj; } 
   QTextBlock::iterator  begin(QTextBlock* theWrappedObject) const;
   void clearLayout(QTextBlock* theWrappedObject);
   void setUserState(QTextBlock* theWrappedObject, int  state);
   QTextBlock::iterator  end(QTextBlock* theWrappedObject) const;
   int  userState(QTextBlock* theWrappedObject) const;
   const QTextDocument*  document(QTextBlock* theWrappedObject) const;
   bool  isVisible(QTextBlock* theWrappedObject) const;
   int  charFormatIndex(QTextBlock* theWrappedObject) const;
   bool  contains(QTextBlock* theWrappedObject, int  position) const;
   void setRevision(QTextBlock* theWrappedObject, int  rev);
   void setVisible(QTextBlock* theWrappedObject, bool  visible);
   int  length(QTextBlock* theWrappedObject) const;
   QTextList*  textList(QTextBlock* theWrappedObject) const;
   QTextCharFormat  charFormat(QTextBlock* theWrappedObject) const;
   bool  isValid(QTextBlock* theWrappedObject) const;
   bool  operator_less(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   QTextBlock  previous(QTextBlock* theWrappedObject) const;
   bool  operator_equal(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   void setUserData(QTextBlock* theWrappedObject, QTextBlockUserData*  data);
   int  revision(QTextBlock* theWrappedObject) const;
   int  blockNumber(QTextBlock* theWrappedObject) const;
   QTextBlock  next(QTextBlock* theWrappedObject) const;
   QTextBlockUserData*  userData(QTextBlock* theWrappedObject) const;
   int  blockFormatIndex(QTextBlock* theWrappedObject) const;
   QTextLayout*  layout(QTextBlock* theWrappedObject) const;
   int  position(QTextBlock* theWrappedObject) const;
   QString  text(QTextBlock* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextBlock* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTBLOCK_H
