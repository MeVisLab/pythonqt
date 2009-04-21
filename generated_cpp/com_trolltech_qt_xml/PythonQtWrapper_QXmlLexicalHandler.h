#ifndef PYTHONQTWRAPPER_QXMLLEXICALHANDLER_H
#define PYTHONQTWRAPPER_QXMLLEXICALHANDLER_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QXmlLexicalHandler : public QXmlLexicalHandler
{
public:
    PythonQtShell_QXmlLexicalHandler():QXmlLexicalHandler(),_wrapper(NULL) {};

virtual bool  comment(const QString&  ch);
virtual bool  endCDATA();
virtual bool  endDTD();
virtual bool  endEntity(const QString&  name);
virtual QString  errorString() const;
virtual bool  startCDATA();
virtual bool  startDTD(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  startEntity(const QString&  name);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlLexicalHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlLexicalHandler* new_QXmlLexicalHandler();
void delete_QXmlLexicalHandler(QXmlLexicalHandler* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QXMLLEXICALHANDLER_H
