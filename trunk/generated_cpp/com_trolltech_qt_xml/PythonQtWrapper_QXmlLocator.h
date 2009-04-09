#ifndef PYTHONQTWRAPPER_QXMLLOCATOR_H
#define PYTHONQTWRAPPER_QXMLLOCATOR_H

#include <qxml.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QXmlLocator : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QXmlLocator(QXmlLocator* obj) { delete obj; } 
   int  columnNumber(QXmlLocator* theWrappedObject) const;
   int  lineNumber(QXmlLocator* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLLOCATOR_H
