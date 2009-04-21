#ifndef PYTHONQTWRAPPER_QXMLERRORHANDLER_H
#define PYTHONQTWRAPPER_QXMLERRORHANDLER_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qxml.h>

class PythonQtShell_QXmlErrorHandler : public QXmlErrorHandler
{
public:
    PythonQtShell_QXmlErrorHandler():QXmlErrorHandler(),_wrapper(NULL) {};

virtual bool  error(const QXmlParseException&  exception);
virtual QString  errorString() const;
virtual bool  fatalError(const QXmlParseException&  exception);
virtual bool  warning(const QXmlParseException&  exception);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlErrorHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlErrorHandler* new_QXmlErrorHandler();
void delete_QXmlErrorHandler(QXmlErrorHandler* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QXMLERRORHANDLER_H
