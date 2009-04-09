#ifndef PYTHONQTWRAPPER_QIPV6ADDRESS_H
#define PYTHONQTWRAPPER_QIPV6ADDRESS_H

#include <qhostaddress.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QIPv6Address : public QObject
{ Q_OBJECT
public:
public slots:
QIPv6Address* new_QIPv6Address();
void delete_QIPv6Address(QIPv6Address* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QIPV6ADDRESS_H
