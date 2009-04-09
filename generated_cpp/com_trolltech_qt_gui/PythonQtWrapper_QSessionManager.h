#ifndef PYTHONQTWRAPPER_QSESSIONMANAGER_H
#define PYTHONQTWRAPPER_QSESSIONMANAGER_H

#include <qsessionmanager.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtWrapper_QSessionManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RestartHint )
enum RestartHint{
  RestartIfRunning = QSessionManager::RestartIfRunning,   RestartAnyway = QSessionManager::RestartAnyway,   RestartImmediately = QSessionManager::RestartImmediately,   RestartNever = QSessionManager::RestartNever};
public slots:
   bool  allowsErrorInteraction(QSessionManager* theWrappedObject);
   bool  allowsInteraction(QSessionManager* theWrappedObject);
   void cancel(QSessionManager* theWrappedObject);
   QStringList  discardCommand(QSessionManager* theWrappedObject) const;
   bool  isPhase2(QSessionManager* theWrappedObject) const;
   void release(QSessionManager* theWrappedObject);
   void requestPhase2(QSessionManager* theWrappedObject);
   QStringList  restartCommand(QSessionManager* theWrappedObject) const;
   QSessionManager::RestartHint  restartHint(QSessionManager* theWrappedObject) const;
   QString  sessionId(QSessionManager* theWrappedObject) const;
   QString  sessionKey(QSessionManager* theWrappedObject) const;
   void setDiscardCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1);
   void setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QString&  value);
   void setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QStringList&  value);
   void setRestartCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1);
   void setRestartHint(QSessionManager* theWrappedObject, QSessionManager::RestartHint  arg__1);
};

#endif // PYTHONQTWRAPPER_QSESSIONMANAGER_H
