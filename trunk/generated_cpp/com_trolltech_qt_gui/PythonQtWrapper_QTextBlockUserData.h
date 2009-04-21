#ifndef PYTHONQTWRAPPER_QTEXTBLOCKUSERDATA_H
#define PYTHONQTWRAPPER_QTEXTBLOCKUSERDATA_H

#include <qtextobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QTextBlockUserData : public QTextBlockUserData
{
public:
    PythonQtShell_QTextBlockUserData():QTextBlockUserData(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextBlockUserData : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlockUserData* new_QTextBlockUserData();
void delete_QTextBlockUserData(QTextBlockUserData* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QTEXTBLOCKUSERDATA_H
