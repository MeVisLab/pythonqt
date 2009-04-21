#ifndef PYTHONQTWRAPPER_QTEXTTABLEFORMAT_H
#define PYTHONQTWRAPPER_QTEXTTABLEFORMAT_H

#include <qtextformat.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

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
   qreal  cellPadding(QTextTableFormat* theWrappedObject) const;
   int  columns(QTextTableFormat* theWrappedObject) const;
   QVector<QTextLength >  columnWidthConstraints(QTextTableFormat* theWrappedObject) const;
   void setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding);
   int  headerRowCount(QTextTableFormat* theWrappedObject) const;
   bool  isValid(QTextTableFormat* theWrappedObject) const;
   void setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count);
   void setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment);
   void setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints);
   void setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing);
   Qt::Alignment  alignment(QTextTableFormat* theWrappedObject) const;
   void setColumns(QTextTableFormat* theWrappedObject, int  columns);
   qreal  cellSpacing(QTextTableFormat* theWrappedObject) const;
   void clearColumnWidthConstraints(QTextTableFormat* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QTEXTTABLEFORMAT_H
