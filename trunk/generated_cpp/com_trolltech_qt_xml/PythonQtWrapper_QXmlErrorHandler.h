#ifndef PYTHONQTWRAPPER_QXMLERRORHANDLER_H
#define PYTHONQTWRAPPER_QXMLERRORHANDLER_H

#include <qxml.h>
#include <QObject>

#include <QVariant>
#include <qxml.h>

class PythonQtWrapper_QXmlErrorHandler : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QXmlErrorHandler(QXmlErrorHandler* obj) { delete obj; } 
   bool  error(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception);
   QString  errorString(QXmlErrorHandler* theWrappedObject) const;
   bool  fatalError(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception);
   bool  warning(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception);
};

#endif // PYTHONQTWRAPPER_QXMLERRORHANDLER_H
