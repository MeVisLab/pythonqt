#ifndef PYTHONQTWRAPPER_QTEXTOBJECT_H
#define PYTHONQTWRAPPER_QTEXTOBJECT_H

#include <qtextobject.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>

class PythonQtWrapper_QTextObject : public QObject
{ Q_OBJECT
public:
public slots:
   QTextDocument*  document(QTextObject* theWrappedObject) const;
   QTextFormat  format(QTextObject* theWrappedObject) const;
   int  formatIndex(QTextObject* theWrappedObject) const;
   int  objectIndex(QTextObject* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTOBJECT_H
