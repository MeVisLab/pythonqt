#ifndef PYTHONQTWRAPPER_QDOMENTITYREFERENCE_H
#define PYTHONQTWRAPPER_QDOMENTITYREFERENCE_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomEntityReference : public QObject
{ Q_OBJECT
public:
public slots:
QDomEntityReference* new_QDomEntityReference();
QDomEntityReference* new_QDomEntityReference(const QDomEntityReference&  x);
void delete_QDomEntityReference(QDomEntityReference* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QDOMENTITYREFERENCE_H
