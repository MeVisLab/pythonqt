#include <QFile>
#include <QFileInfo>

#include <PythonQt.h>
#include "QFileImportInterface.h"

QFileImportInterface::QFileImportInterface() {
    m_oldInterface = PythonQt::importInterface();
    PythonQt::self()->setImporter(this);
}    

QFileImportInterface::~QFileImportInterface()  {
    PythonQt::self()->setImporter(m_oldInterface);
}

QByteArray QFileImportInterface::readFileAsBytes (const QString &filename) {
    qDebug() << "readFileAsBytes: " << filename;
    QFile f(filename);
    return f.readAll();
}

QByteArray QFileImportInterface::readSourceFile (const QString &filename, bool &ok) {
    QFile f(filename);
    if (!exists(filename)) {
        ok = false;
        return QByteArray();
    }
    else {
        ok = true;
        return readFileAsBytes(filename);
    }
}

bool QFileImportInterface::exists (const QString &filename) {
    QFile f(filename);
    return f.exists();
}

QDateTime QFileImportInterface::lastModifiedDate (const QString &filename) {
    QFileInfo fi(filename);
    return fi.lastModified();
}
