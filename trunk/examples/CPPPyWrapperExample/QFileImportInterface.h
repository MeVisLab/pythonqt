#ifndef QFILEIMPORTINTERFACE_H
#define QFILEIMPORTINTERFACE_H

#include <PythonQtImportFileInterface.h>

/** Under Construction : This does not work yet.
*/
class QFileImportInterface : public PythonQtImportFileInterface {
public:
    QFileImportInterface();
    ~QFileImportInterface();
    QByteArray readFileAsBytes (const QString &filename);
    QByteArray readSourceFile (const QString &filename, bool &ok);
    bool exists (const QString &filename);
    QDateTime lastModifiedDate (const QString &filename);
private:
    PythonQtImportFileInterface *m_oldInterface;
};

#endif        //  #ifndef QFILEIMPORTINTERFACE_H
