#ifndef PYTHONQTWRAPPER_QUUID_H
#define PYTHONQTWRAPPER_QUUID_H

#include <quuid.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <quuid.h>

class PythonQtShell_QUuid : public QUuid
{
public:
    PythonQtShell_QUuid():QUuid(),_wrapper(NULL) {};
    PythonQtShell_QUuid(const QString&  arg__1):QUuid(arg__1),_wrapper(NULL) {};
    PythonQtShell_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8):QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUuid : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Variant Version )
enum Variant{
  VarUnknown = QUuid::VarUnknown,   NCS = QUuid::NCS,   DCE = QUuid::DCE,   Microsoft = QUuid::Microsoft,   Reserved = QUuid::Reserved};
enum Version{
  VerUnknown = QUuid::VerUnknown,   Time = QUuid::Time,   EmbeddedPOSIX = QUuid::EmbeddedPOSIX,   Name = QUuid::Name,   Random = QUuid::Random};
public slots:
QUuid* new_QUuid();
QUuid* new_QUuid(const QString&  arg__1);
QUuid* new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8);
QUuid* new_QUuid(const QUuid& other) {
PythonQtShell_QUuid* a = new PythonQtShell_QUuid();
*((QUuid*)a) = other;
return a; }
void delete_QUuid(QUuid* obj) { delete obj; } 
   void readFrom(QUuid* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QUuid* theWrappedObject, const QUuid&  orig) const;
   QUuid  static_QUuid_createUuid();
   QUuid::Variant  variant(QUuid* theWrappedObject) const;
   bool  operator_less(QUuid* theWrappedObject, const QUuid&  other) const;
   QUuid::Version  version(QUuid* theWrappedObject) const;
   void writeTo(QUuid* theWrappedObject, QDataStream&  arg__1);
   QString  toString(QUuid* theWrappedObject) const;
   bool  isNull(QUuid* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QUUID_H
