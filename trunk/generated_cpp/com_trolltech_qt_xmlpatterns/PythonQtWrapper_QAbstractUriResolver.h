#ifndef PYTHONQTWRAPPER_QABSTRACTURIRESOLVER_H
#define PYTHONQTWRAPPER_QABSTRACTURIRESOLVER_H

#include <qabstracturiresolver.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstracturiresolver.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qurl.h>

class PythonQtShell_QAbstractUriResolver : public QAbstractUriResolver
{
public:
    PythonQtShell_QAbstractUriResolver(QObject*  parent = 0):QAbstractUriResolver(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QUrl  resolve(const QUrl&  relative, const QUrl&  baseURI) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractUriResolver : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractUriResolver* new_QAbstractUriResolver(QObject*  parent = 0);
void delete_QAbstractUriResolver(QAbstractUriResolver* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QABSTRACTURIRESOLVER_H
