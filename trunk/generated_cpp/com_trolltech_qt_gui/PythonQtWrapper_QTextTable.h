#ifndef PYTHONQTWRAPPER_QTEXTTABLE_H
#define PYTHONQTWRAPPER_QTEXTTABLE_H

#include <qtexttable.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextCursor>
#include <QTextFrame>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtexttable.h>

class PythonQtShell_QTextTable : public QTextTable
{
public:
    PythonQtShell_QTextTable(QTextDocument*  doc):QTextTable(doc),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  row, int  col) const;
   void mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor);
   QTextTableCell  cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   int  rows(QTextTable* theWrappedObject) const;
   void insertRows(QTextTable* theWrappedObject, int  pos, int  num);
   void mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   int  columns(QTextTable* theWrappedObject) const;
   QTextCursor  rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   QTextTableFormat  format(QTextTable* theWrappedObject) const;
   void insertColumns(QTextTable* theWrappedObject, int  pos, int  num);
   QTextCursor  rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   void setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format);
   void splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  position) const;
   void removeColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void resize(QTextTable* theWrappedObject, int  rows, int  cols);
};

#endif // PYTHONQTWRAPPER_QTEXTTABLE_H
