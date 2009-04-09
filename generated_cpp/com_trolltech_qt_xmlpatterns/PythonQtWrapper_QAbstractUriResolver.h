#ifndef PYTHONQTWRAPPER_QABSTRACTURIRESOLVER_H
#define PYTHONQTWRAPPER_QABSTRACTURIRESOLVER_H

#include <qabstracturiresolver.h>
#include <QObject>

#include <QVariant>
#include <qabstracturiresolver.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qurl.h>

class PythonQtWrapper_QAbstractUriResolver : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractUriResolver(QAbstractUriResolver* obj) { delete obj; } 
   QUrl  resolve(QAbstractUriResolver* theWrappedObject, const QUrl&  relative, const QUrl&  baseURI) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTURIRESOLVER_H
