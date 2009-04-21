#ifndef PYTHONQTWRAPPER_QSESSIONMANAGER_H
#define PYTHONQTWRAPPER_QSESSIONMANAGER_H

#include <qsessionmanager.h>
#include <QObject>

#include <PythonQt.h>

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
   QStringList  discardCommand(QSessionManager* theWrappedObject) const;
   QString  sessionKey(QSessionManager* theWrappedObject) const;
   void setDiscardCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1);
   bool  allowsErrorInteraction(QSessionManager* theWrappedObject);
   QSessionManager::RestartHint  restartHint(QSessionManager* theWrappedObject) const;
   void setRestartCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1);
   void requestPhase2(QSessionManager* theWrappedObject);
   void release(QSessionManager* theWrappedObject);
   bool  allowsInteraction(QSessionManager* theWrappedObject);
   bool  isPhase2(QSessionManager* theWrappedObject) const;
   QString  sessionId(QSessionManager* theWrappedObject) const;
   void setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QString&  value);
   void setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QStringList&  value);
   void cancel(QSessionManager* theWrappedObject);
   void setRestartHint(QSessionManager* theWrappedObject, QSessionManager::RestartHint  arg__1);
   QStringList  restartCommand(QSessionManager* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSESSIONMANAGER_H
