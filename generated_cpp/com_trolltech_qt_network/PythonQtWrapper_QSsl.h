#ifndef PYTHONQTWRAPPER_QSSL_H
#define PYTHONQTWRAPPER_QSSL_H

#include <qssl.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QSsl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(KeyType KeyAlgorithm SslProtocol AlternateNameEntryType EncodingFormat )
enum KeyType{
  PrivateKey = QSsl::PrivateKey,   PublicKey = QSsl::PublicKey};
enum KeyAlgorithm{
  Rsa = QSsl::Rsa,   Dsa = QSsl::Dsa};
enum SslProtocol{
  SslV3 = QSsl::SslV3,   SslV2 = QSsl::SslV2,   TlsV1 = QSsl::TlsV1,   AnyProtocol = QSsl::AnyProtocol,   UnknownProtocol = QSsl::UnknownProtocol};
enum AlternateNameEntryType{
  EmailEntry = QSsl::EmailEntry,   DnsEntry = QSsl::DnsEntry};
enum EncodingFormat{
  Pem = QSsl::Pem,   Der = QSsl::Der};
public slots:
};

#endif // PYTHONQTWRAPPER_QSSL_H
