#ifndef PYTHONQTWRAPPER_QDOMCDATASECTION_H
#define PYTHONQTWRAPPER_QDOMCDATASECTION_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomCDATASection : public QObject
{ Q_OBJECT
public:
public slots:
QDomCDATASection* new_QDomCDATASection();
QDomCDATASection* new_QDomCDATASection(const QDomCDATASection&  x);
void delete_QDomCDATASection(QDomCDATASection* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QDOMCDATASECTION_H
