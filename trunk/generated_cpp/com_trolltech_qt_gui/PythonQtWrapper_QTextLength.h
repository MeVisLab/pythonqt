#ifndef PYTHONQTWRAPPER_QTEXTLENGTH_H
#define PYTHONQTWRAPPER_QTEXTLENGTH_H

#include <qtextformat.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qtextformat.h>

class PythonQtWrapper_QTextLength : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  VariableLength = QTextLength::VariableLength,   FixedLength = QTextLength::FixedLength,   PercentageLength = QTextLength::PercentageLength};
public slots:
QTextLength* new_QTextLength();
QTextLength* new_QTextLength(QTextLength::Type  type, qreal  value);
QTextLength* new_QTextLength(const QTextLength& other) {
QTextLength* a = new QTextLength();
*((QTextLength*)a) = other;
return a; }
void delete_QTextLength(QTextLength* obj) { delete obj; } 
   void writeTo(QTextLength* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QTextLength* theWrappedObject, const QTextLength&  other) const;
   void readFrom(QTextLength* theWrappedObject, QDataStream&  arg__1);
   qreal  rawValue(QTextLength* theWrappedObject) const;
   qreal  value(QTextLength* theWrappedObject, qreal  maximumLength) const;
   QTextLength::Type  type(QTextLength* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTLENGTH_H
