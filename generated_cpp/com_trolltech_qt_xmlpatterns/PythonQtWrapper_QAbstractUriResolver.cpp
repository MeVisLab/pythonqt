#include "PythonQtWrapper_QAbstractUriResolver.h"

#include <QVariant>
#include <qabstracturiresolver.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qurl.h>

QUrl  PythonQtWrapper_QAbstractUriResolver::resolve(QAbstractUriResolver* theWrappedObject, const QUrl&  relative, const QUrl&  baseURI) const
{
return theWrappedObject->resolve(relative, baseURI);
}

