#ifndef PYTHONQTWRAPPER_QFTP_H
#define PYTHONQTWRAPPER_QFTP_H

#include <qftp.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qftp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qurlinfo.h>

class PythonQtWrapper_QFtp : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransferType Error Command TransferMode State )
enum TransferType{
  Binary = QFtp::Binary,   Ascii = QFtp::Ascii};
enum Error{
  NoError = QFtp::NoError,   UnknownError = QFtp::UnknownError,   HostNotFound = QFtp::HostNotFound,   ConnectionRefused = QFtp::ConnectionRefused,   NotConnected = QFtp::NotConnected};
enum Command{
  None = QFtp::None,   SetTransferMode = QFtp::SetTransferMode,   SetProxy = QFtp::SetProxy,   ConnectToHost = QFtp::ConnectToHost,   Login = QFtp::Login,   Close = QFtp::Close,   List = QFtp::List,   Cd = QFtp::Cd,   Get = QFtp::Get,   Put = QFtp::Put,   Remove = QFtp::Remove,   Mkdir = QFtp::Mkdir,   Rmdir = QFtp::Rmdir,   Rename = QFtp::Rename,   RawCommand = QFtp::RawCommand};
enum TransferMode{
  Active = QFtp::Active,   Passive = QFtp::Passive};
enum State{
  Unconnected = QFtp::Unconnected,   HostLookup = QFtp::HostLookup,   Connecting = QFtp::Connecting,   Connected = QFtp::Connected,   LoggedIn = QFtp::LoggedIn,   Closing = QFtp::Closing};
public slots:
QFtp* new_QFtp(QObject*  parent = 0);
void delete_QFtp(QFtp* obj) { delete obj; } 
   qint64  bytesAvailable(QFtp* theWrappedObject) const;
   int  cd(QFtp* theWrappedObject, const QString&  dir);
   void clearPendingCommands(QFtp* theWrappedObject);
   int  close(QFtp* theWrappedObject);
   int  connectToHost(QFtp* theWrappedObject, const QString&  host, unsigned short  port = 21);
   QFtp::Command  currentCommand(QFtp* theWrappedObject) const;
   QIODevice*  currentDevice(QFtp* theWrappedObject) const;
   int  currentId(QFtp* theWrappedObject) const;
   QFtp::Error  error(QFtp* theWrappedObject) const;
   QString  errorString(QFtp* theWrappedObject) const;
   int  get(QFtp* theWrappedObject, const QString&  file, QIODevice*  dev = 0, QFtp::TransferType  type = QFtp::Binary);
   bool  hasPendingCommands(QFtp* theWrappedObject) const;
   int  list(QFtp* theWrappedObject, const QString&  dir = QString());
   int  login(QFtp* theWrappedObject, const QString&  user = QString(), const QString&  password = QString());
   int  mkdir(QFtp* theWrappedObject, const QString&  dir);
   int  put(QFtp* theWrappedObject, QIODevice*  dev, const QString&  file, QFtp::TransferType  type = QFtp::Binary);
   int  put(QFtp* theWrappedObject, const QByteArray&  data, const QString&  file, QFtp::TransferType  type = QFtp::Binary);
   int  rawCommand(QFtp* theWrappedObject, const QString&  command);
   qint64  read(QFtp* theWrappedObject, char*  data, qint64  maxlen);
   QByteArray  readAll(QFtp* theWrappedObject);
   int  remove(QFtp* theWrappedObject, const QString&  file);
   int  rename(QFtp* theWrappedObject, const QString&  oldname, const QString&  newname);
   int  rmdir(QFtp* theWrappedObject, const QString&  dir);
   int  setProxy(QFtp* theWrappedObject, const QString&  host, unsigned short  port);
   int  setTransferMode(QFtp* theWrappedObject, QFtp::TransferMode  mode);
   QFtp::State  state(QFtp* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFTP_H
