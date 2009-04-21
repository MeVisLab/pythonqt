#ifndef PYTHONQTWRAPPER_QCRYPTOGRAPHICHASH_H
#define PYTHONQTWRAPPER_QCRYPTOGRAPHICHASH_H

#include <qcryptographichash.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcryptographichash.h>

class PythonQtWrapper_QCryptographicHash : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Algorithm )
enum Algorithm{
  Md4 = QCryptographicHash::Md4,   Md5 = QCryptographicHash::Md5,   Sha1 = QCryptographicHash::Sha1};
public slots:
QCryptographicHash* new_QCryptographicHash(QCryptographicHash::Algorithm  method);
void delete_QCryptographicHash(QCryptographicHash* obj) { delete obj; } 
   QByteArray  static_QCryptographicHash_hash(const QByteArray&  data, QCryptographicHash::Algorithm  method);
   QByteArray  result(QCryptographicHash* theWrappedObject) const;
   void addData(QCryptographicHash* theWrappedObject, const QByteArray&  data);
   void reset(QCryptographicHash* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QCRYPTOGRAPHICHASH_H
