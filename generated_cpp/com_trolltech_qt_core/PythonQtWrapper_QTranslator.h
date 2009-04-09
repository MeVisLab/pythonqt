#ifndef PYTHONQTWRAPPER_QTRANSLATOR_H
#define PYTHONQTWRAPPER_QTRANSLATOR_H

#include <qtranslator.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtranslator.h>

class PythonQtWrapper_QTranslator : public QObject
{ Q_OBJECT
public:
public slots:
QTranslator* new_QTranslator(QObject*  parent = 0);
void delete_QTranslator(QTranslator* obj) { delete obj; } 
   bool  isEmpty(QTranslator* theWrappedObject) const;
   bool  load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory = QString(), const QString&  search_delimiters = QString(), const QString&  suffix = QString());
   bool  load(QTranslator* theWrappedObject, const uchar*  data, int  len);
   QString  translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  comment = 0) const;
};

#endif // PYTHONQTWRAPPER_QTRANSLATOR_H
