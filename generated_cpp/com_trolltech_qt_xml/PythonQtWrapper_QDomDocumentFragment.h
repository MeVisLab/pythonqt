#ifndef PYTHONQTWRAPPER_QDOMDOCUMENTFRAGMENT_H
#define PYTHONQTWRAPPER_QDOMDOCUMENTFRAGMENT_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomDocumentFragment : public QObject
{ Q_OBJECT
public:
public slots:
QDomDocumentFragment* new_QDomDocumentFragment();
QDomDocumentFragment* new_QDomDocumentFragment(const QDomDocumentFragment&  x);
void delete_QDomDocumentFragment(QDomDocumentFragment* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QDOMDOCUMENTFRAGMENT_H
