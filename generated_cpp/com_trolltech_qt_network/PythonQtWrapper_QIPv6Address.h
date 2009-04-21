#ifndef PYTHONQTWRAPPER_QIPV6ADDRESS_H
#define PYTHONQTWRAPPER_QIPV6ADDRESS_H

#include <qhostaddress.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QIPv6Address : public QIPv6Address
{
public:
    PythonQtShell_QIPv6Address():QIPv6Address(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QIPv6Address : public QObject
{ Q_OBJECT
public:
public slots:
QIPv6Address* new_QIPv6Address();
QIPv6Address* new_QIPv6Address(const QIPv6Address& other) {
PythonQtShell_QIPv6Address* a = new PythonQtShell_QIPv6Address();
*((QIPv6Address*)a) = other;
return a; }
void delete_QIPv6Address(QIPv6Address* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QIPV6ADDRESS_H
