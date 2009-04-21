#ifndef PYTHONQTWRAPPER_QAUTHENTICATOR_H
#define PYTHONQTWRAPPER_QAUTHENTICATOR_H

#include <qauthenticator.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qauthenticator.h>

class PythonQtWrapper_QAuthenticator : public QObject
{ Q_OBJECT
public:
public slots:
QAuthenticator* new_QAuthenticator();
QAuthenticator* new_QAuthenticator(const QAuthenticator&  other);
void delete_QAuthenticator(QAuthenticator* obj) { delete obj; } 
   bool  isNull(QAuthenticator* theWrappedObject) const;
   QString  realm(QAuthenticator* theWrappedObject) const;
   QString  user(QAuthenticator* theWrappedObject) const;
   bool  operator_equal(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const;
   void setPassword(QAuthenticator* theWrappedObject, const QString&  password);
   QString  password(QAuthenticator* theWrappedObject) const;
   void setUser(QAuthenticator* theWrappedObject, const QString&  user);
};

#endif // PYTHONQTWRAPPER_QAUTHENTICATOR_H
