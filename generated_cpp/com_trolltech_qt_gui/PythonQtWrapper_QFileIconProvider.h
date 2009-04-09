#ifndef PYTHONQTWRAPPER_QFILEICONPROVIDER_H
#define PYTHONQTWRAPPER_QFILEICONPROVIDER_H

#include <qfileiconprovider.h>
#include <QObject>

#include <QVariant>
#include <qfileiconprovider.h>
#include <qfileinfo.h>
#include <qicon.h>

class PythonQtWrapper_QFileIconProvider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IconType )
enum IconType{
  Computer = QFileIconProvider::Computer,   Desktop = QFileIconProvider::Desktop,   Trashcan = QFileIconProvider::Trashcan,   Network = QFileIconProvider::Network,   Drive = QFileIconProvider::Drive,   Folder = QFileIconProvider::Folder,   File = QFileIconProvider::File};
public slots:
QFileIconProvider* new_QFileIconProvider();
void delete_QFileIconProvider(QFileIconProvider* obj) { delete obj; } 
   QIcon  icon(QFileIconProvider* theWrappedObject, QFileIconProvider::IconType  type) const;
   QIcon  icon(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const;
   QString  type(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const;
};

#endif // PYTHONQTWRAPPER_QFILEICONPROVIDER_H
