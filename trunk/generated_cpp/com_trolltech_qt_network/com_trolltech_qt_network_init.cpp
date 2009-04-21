#include <PythonQt.h>
#include "PythonQtWrapper_QIPv6Address.h"
#include "PythonQtWrapper_QNetworkInterface.h"
#include "PythonQtWrapper_QNetworkCookie.h"
#include "PythonQtWrapper_QNetworkAddressEntry.h"
#include "PythonQtWrapper_QSsl.h"
#include "PythonQtWrapper_QHostAddress.h"
#include "PythonQtWrapper_QAuthenticator.h"
#include "PythonQtWrapper_QHttpHeader.h"
#include "PythonQtWrapper_QHostInfo.h"
#include "PythonQtWrapper_QUrlInfo.h"
#include "PythonQtWrapper_QNetworkProxy.h"
#include "PythonQtWrapper_QNetworkRequest.h"
#include "PythonQtWrapper_QTcpServer.h"
#include "PythonQtWrapper_QHttpRequestHeader.h"
#include "PythonQtWrapper_QHttp.h"
#include "PythonQtWrapper_QFtp.h"
#include "PythonQtWrapper_QLocalServer.h"
#include "PythonQtWrapper_QNetworkAccessManager.h"
#include "PythonQtWrapper_QNetworkCookieJar.h"
#include "PythonQtWrapper_QHttpResponseHeader.h"
#include "PythonQtWrapper_QLocalSocket.h"
#include "PythonQtWrapper_QAbstractSocket.h"
#include "PythonQtWrapper_QNetworkReply.h"
#include "PythonQtWrapper_QUdpSocket.h"
#include "PythonQtWrapper_QTcpSocket.h"


void PythonQt_init_QtNetwork() {
PythonQt::self()->registerCPPClass("QIPv6Address", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QIPv6Address>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIPv6Address>);
PythonQt::self()->registerCPPClass("QNetworkInterface", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkInterface>);
PythonQt::self()->registerCPPClass("QNetworkCookie", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkCookie>);
PythonQt::self()->registerCPPClass("QNetworkAddressEntry", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkAddressEntry>);
PythonQt::self()->registerCPPClass("QSsl", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSsl>);
PythonQt::self()->registerCPPClass("QHostAddress", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHostAddress>);
PythonQt::self()->registerCPPClass("QAuthenticator", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAuthenticator>);
PythonQt::self()->registerCPPClass("QHttpHeader", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHttpHeader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHttpHeader>);
PythonQt::self()->registerCPPClass("QHostInfo", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHostInfo>);
PythonQt::self()->registerCPPClass("QUrlInfo", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QUrlInfo>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUrlInfo>);
PythonQt::self()->registerCPPClass("QNetworkProxy", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkProxy>);
PythonQt::self()->registerCPPClass("QNetworkRequest", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkRequest>);
PythonQt::self()->registerClass(&QTcpServer::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QTcpServer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTcpServer>);
PythonQt::self()->registerCPPClass("QHttpRequestHeader", "QHttpHeader", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHttpRequestHeader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHttpRequestHeader>);
PythonQt::self()->registerClass(&QHttp::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHttp>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHttp>);
PythonQt::self()->registerClass(&QFtp::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QFtp>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFtp>);
PythonQt::self()->registerClass(&QLocalServer::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QLocalServer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLocalServer>);
PythonQt::self()->registerClass(&QNetworkAccessManager::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkAccessManager>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkAccessManager>);
PythonQt::self()->registerClass(&QNetworkCookieJar::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkCookieJar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkCookieJar>);
PythonQt::self()->registerCPPClass("QHttpResponseHeader", "QHttpHeader", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHttpResponseHeader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHttpResponseHeader>);
PythonQt::self()->registerClass(&QLocalSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QLocalSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLocalSocket>);
PythonQt::self()->registerClass(&QAbstractSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAbstractSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractSocket>);
PythonQt::self()->registerClass(&QNetworkReply::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkReply>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkReply>);
PythonQt::self()->registerClass(&QUdpSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QUdpSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUdpSocket>);
PythonQt::self()->registerClass(&QTcpSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QTcpSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTcpSocket>);

}
