#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_network0.h"
#include "com_trolltech_qt_network1.h"



void PythonQt_init_QtNetwork(PyObject* module) {
PythonQt::priv()->registerClass(&QAbstractNetworkCache::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAbstractNetworkCache>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractNetworkCache>, module, 0);
PythonQt::priv()->registerClass(&QAbstractSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAbstractSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractSocket>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QAuthenticator", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAuthenticator>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDnsDomainNameRecord", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QDnsDomainNameRecord>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDnsHostAddressRecord", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QDnsHostAddressRecord>, NULL, module, 0);
PythonQt::priv()->registerClass(&QDnsLookup::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QDnsLookup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDnsLookup>, module, 0);
PythonQt::priv()->registerCPPClass("QDnsMailExchangeRecord", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QDnsMailExchangeRecord>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDnsServiceRecord", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QDnsServiceRecord>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDnsTextRecord", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QDnsTextRecord>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QHostAddress", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHostAddress>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QHostInfo", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHostInfo>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QHstsPolicy", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHstsPolicy>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QHttpMultiPart::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHttpMultiPart>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHttpMultiPart>, module, 0);
PythonQt::priv()->registerCPPClass("QHttpPart", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHttpPart>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QIPv6Address", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QIPv6Address>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIPv6Address>, module, 0);
PythonQt::priv()->registerClass(&QLocalServer::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QLocalServer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLocalServer>, module, 0);
PythonQt::priv()->registerClass(&QLocalSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QLocalSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLocalSocket>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QNetworkAccessManager::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkAccessManager>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkAccessManager>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkAddressEntry", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkAddressEntry>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QNetworkCacheMetaData", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkCacheMetaData>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QNetworkConfiguration", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkConfiguration>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QNetworkConfigurationManager::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkConfigurationManager>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkConfigurationManager>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkCookie", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkCookie>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QNetworkCookieJar::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkCookieJar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkCookieJar>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkDatagram", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkDatagram>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QNetworkDiskCache::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkDiskCache>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkDiskCache>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkInterface", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkInterface>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QNetworkProxy", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkProxy>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QNetworkProxyFactory", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkProxyFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkProxyFactory>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkProxyQuery", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkProxyQuery>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QNetworkReply::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkReply>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkReply>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkRequest", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkRequest>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QNetworkSession::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkSession>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkSession>, module, 0);
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSsl", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSsl>, NULL, module, 0);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSslCertificate", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslCertificate>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSslCertificateExtension", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslCertificateExtension>, NULL, module, 0);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSslCipher", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslCipher>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSslConfiguration", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslConfiguration>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSslConfiguration>, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSslEllipticCurve", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslEllipticCurve>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSslError", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslError>, NULL, module, PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSslKey", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslKey>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSslPreSharedKeyAuthenticator", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslPreSharedKeyAuthenticator>, NULL, module, 0);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerClass(&QSslSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSslSocket>, module, PythonQt::Type_NonZero);
#endif
PythonQt::priv()->registerClass(&QTcpServer::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QTcpServer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTcpServer>, module, 0);
PythonQt::priv()->registerClass(&QTcpSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QTcpSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTcpSocket>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QUdpSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QUdpSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUdpSocket>, module, PythonQt::Type_NonZero);


PythonQtRegisterListTemplateConverterForKnownClass(QList, QDnsDomainNameRecord);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QDnsHostAddressRecord);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QDnsMailExchangeRecord);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QDnsServiceRecord);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QDnsTextRecord);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QHostAddress);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QNetworkAddressEntry);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QNetworkConfiguration);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QNetworkCookie);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QNetworkInterface);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QNetworkProxy);
#ifndef QT_NO_SSL
PythonQtRegisterListTemplateConverterForKnownClass(QList, QSslCertificate);
#endif
#ifndef QT_NO_SSL
PythonQtRegisterListTemplateConverterForKnownClass(QList, QSslCertificateExtension);
#endif
#ifndef QT_NO_SSL
PythonQtRegisterListTemplateConverterForKnownClass(QList, QSslCipher);
#endif
#ifndef QT_NO_SSL
PythonQtRegisterListTemplateConverterForKnownClass(QList, QSslError);
#endif
PythonQtRegisterListTemplateConverterForKnownClass(QVector, QHstsPolicy);
#ifndef QT_NO_SSL
PythonQtRegisterListTemplateConverterForKnownClass(QVector, QSslEllipticCurve);
#endif
}
