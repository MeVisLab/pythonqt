#ifndef PYTHONQTWRAPPER_QXMLNAMEPOOL_H
#define PYTHONQTWRAPPER_QXMLNAMEPOOL_H

#include <qxmlnamepool.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qxmlnamepool.h>

class PythonQtWrapper_QXmlNamePool : public QObject
{ Q_OBJECT
public:
public slots:
QXmlNamePool* new_QXmlNamePool();
QXmlNamePool* new_QXmlNamePool(const QXmlNamePool&  other);
void delete_QXmlNamePool(QXmlNamePool* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QXMLNAMEPOOL_H
