#ifndef PYTHONQTWRAPPER_QDOMCOMMENT_H
#define PYTHONQTWRAPPER_QDOMCOMMENT_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomComment : public QObject
{ Q_OBJECT
public:
public slots:
QDomComment* new_QDomComment();
QDomComment* new_QDomComment(const QDomComment&  x);
void delete_QDomComment(QDomComment* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QDOMCOMMENT_H
