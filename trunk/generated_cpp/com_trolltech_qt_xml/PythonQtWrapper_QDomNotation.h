#ifndef PYTHONQTWRAPPER_QDOMNOTATION_H
#define PYTHONQTWRAPPER_QDOMNOTATION_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomNotation : public QObject
{ Q_OBJECT
public:
public slots:
QDomNotation* new_QDomNotation();
QDomNotation* new_QDomNotation(const QDomNotation&  x);
void delete_QDomNotation(QDomNotation* obj) { delete obj; } 
   QString  systemId(QDomNotation* theWrappedObject) const;
   QString  publicId(QDomNotation* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDOMNOTATION_H
