#ifndef PYTHONQTWRAPPER_QTEXTTABLECELL_H
#define PYTHONQTWRAPPER_QTEXTTABLECELL_H

#include <qtexttable.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextCursor>
#include <QTextFrame>
#include <QVariant>
#include <qtextcursor.h>
#include <qtextformat.h>
#include <qtexttable.h>

class PythonQtWrapper_QTextTableCell : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableCell* new_QTextTableCell();
QTextTableCell* new_QTextTableCell(const QTextTableCell&  o);
void delete_QTextTableCell(QTextTableCell* obj) { delete obj; } 
   bool  isValid(QTextTableCell* theWrappedObject) const;
   QTextCharFormat  format(QTextTableCell* theWrappedObject) const;
   int  column(QTextTableCell* theWrappedObject) const;
   int  columnSpan(QTextTableCell* theWrappedObject) const;
   int  lastPosition(QTextTableCell* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextTableCell* theWrappedObject) const;
   QTextFrame::iterator  end(QTextTableCell* theWrappedObject) const;
   int  firstPosition(QTextTableCell* theWrappedObject) const;
   QTextCursor  firstCursorPosition(QTextTableCell* theWrappedObject) const;
   int  row(QTextTableCell* theWrappedObject) const;
   QTextFrame::iterator  begin(QTextTableCell* theWrappedObject) const;
   bool  operator_equal(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const;
   void setFormat(QTextTableCell* theWrappedObject, const QTextCharFormat&  format);
   int  rowSpan(QTextTableCell* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTTABLECELL_H
